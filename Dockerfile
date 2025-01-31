#Build
ARG fedora_version=33
FROM fedora:${fedora_version} as build-env

COPY . /tmp/srt-game-server

RUN sudo dnf update --assumeyes --verbose && dnf install --assumeyes --verbose \
  Box2D.x86_64 \
  Box2D-devel.x86_64 \
  compat-openssl10 \
  openssl \
  poco-devel \
  poco-foundation \
  protobuf \
  protobuf-devel \
  gcc \
  g++ \
  cmake \
  git \
  qpid-proton-cpp \
  qpid-proton-cpp-devel \
  yaml-cpp-devel \
  && dnf clean all \
  && rm -rf /var/cache/yum

#RUN mkdir /tmp/srt-game-server; sudo cp -R /workspace/source /tmp/srt-game-server/

WORKDIR /tmp/srt-game-server/src/Proto
RUN for i in `ls -lC1 *.proto`; do `echo protoc $i --cpp_out=.`; done; mkdir /tmp/build
WORKDIR /tmp/build

RUN echo `pwd`; \
#  ls -lR /tmp/srt-game-server; \
  echo "Running cmake /tmp/srt-game-server\n"; \
  cmake /tmp/srt-game-server
RUN echo "Running cmake --build .\n"; \
  cmake --build . --parallel -j $(($(grep -c ^processor /proc/cpuinfo)+1))

# Run
FROM fedora:${fedora_version} as base-env
COPY containerbuild/srt.repo /etc/yum.repos.d/
RUN sudo dnf update --assumeyes --verbose && dnf install  --assumeyes --verbose \
  Box2D.x86_64 \
  Box2D-devel.x86_64 \
  compat-openssl10 \
  openssl \
  poco-devel \
  poco-foundation \
  protobuf \
  protobuf-devel \
  qpid-proton-cpp \
  qpid-proton-cpp-devel \
  yaml-cpp \
  && dnf clean all \
  && rm -rf /var/cache/yum

ENV USER_UID=1000
ENV USER_NAME=srt
ENV EXECUTABLE_NAME=srt-game-server.bin
ENV EXECUTABLE=/home/${USER_NAME}/bin/${EXECUTABLE_NAME}
ENV BROKER_URI="tcp://127.0.0.1:5672"
ENV LOG_LEVEL="1"
ENV SLEEP_CYCLE="1500"

WORKDIR /

RUN mkdir -p /home/${USER_NAME}/bin
#COPY bin/${EXECUTABLE_NAME} /home/${USER_NAME}/bin
COPY --from=build-env /tmp/build/srt-game-server /home/${USER_NAME}/bin/${EXECUTABLE_NAME}
COPY config.yaml /
COPY containerbuild/bin/entrypoint /home/${USER_NAME}/bin

RUN chown -R `id -u`:0 /home/${USER_NAME}/bin && chmod -R 755 /home/${USER_NAME}/bin
USER ${USER_UID}:0
ENTRYPOINT "/home/srt/bin/entrypoint" "--broker-uri" "$BROKER_URI" "-v" "$LOG_LEVEL" "--sleep-cycle" "$SLEEP_CYCLE"

LABEL \
      com.srt.component="srt-game-server" \
      description="Space Ring Things game physics server" \
      io.k8s.description="Main game simulation container for Space Ring Things" \
      io.k8s.display-name="Space Ring Things 0.3" \
      maintainer="Roddie Kieley <rkieley@apache.org>" \
      name="roddiekieley/srt-game-server" \
      summary="Space Ring Things game physics server" \
      version="0.3"
