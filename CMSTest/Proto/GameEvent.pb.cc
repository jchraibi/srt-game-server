// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: GameEvent.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "GameEvent.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace gameevent {

namespace {

const ::google::protobuf::Descriptor* GameEvent_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  GameEvent_reflection_ = NULL;
const ::google::protobuf::EnumDescriptor* GameEvent_GameEventType_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_GameEvent_2eproto() {
  protobuf_AddDesc_GameEvent_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "GameEvent.proto");
  GOOGLE_CHECK(file != NULL);
  GameEvent_descriptor_ = file->message_type(0);
  static const int GameEvent_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GameEvent, type_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GameEvent, entitygameevent_),
  };
  GameEvent_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      GameEvent_descriptor_,
      GameEvent::default_instance_,
      GameEvent_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GameEvent, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GameEvent, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(GameEvent));
  GameEvent_GameEventType_descriptor_ = GameEvent_descriptor_->enum_type(0);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_GameEvent_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    GameEvent_descriptor_, &GameEvent::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_GameEvent_2eproto() {
  delete GameEvent::default_instance_;
  delete GameEvent_reflection_;
}

void protobuf_AddDesc_GameEvent_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::gameevent::protobuf_AddDesc_EntityGameEvent_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\017GameEvent.proto\022\tgameevent\032\025EntityGame"
    "Event.proto\"\227\001\n\tGameEvent\0228\n\004type\030\001 \002(\0162"
    "\".gameevent.GameEvent.GameEventType:\006ENT"
    "ITY\0223\n\017entityGameEvent\030\003 \001(\0132\032.gameevent"
    ".EntityGameEvent\"\033\n\rGameEventType\022\n\n\006ENT"
    "ITY\020\000", 205);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "GameEvent.proto", &protobuf_RegisterTypes);
  GameEvent::default_instance_ = new GameEvent();
  GameEvent::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_GameEvent_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_GameEvent_2eproto {
  StaticDescriptorInitializer_GameEvent_2eproto() {
    protobuf_AddDesc_GameEvent_2eproto();
  }
} static_descriptor_initializer_GameEvent_2eproto_;

// ===================================================================

const ::google::protobuf::EnumDescriptor* GameEvent_GameEventType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return GameEvent_GameEventType_descriptor_;
}
bool GameEvent_GameEventType_IsValid(int value) {
  switch(value) {
    case 0:
      return true;
    default:
      return false;
  }
}

#ifndef _MSC_VER
const GameEvent_GameEventType GameEvent::ENTITY;
const GameEvent_GameEventType GameEvent::GameEventType_MIN;
const GameEvent_GameEventType GameEvent::GameEventType_MAX;
const int GameEvent::GameEventType_ARRAYSIZE;
#endif  // _MSC_VER
#ifndef _MSC_VER
const int GameEvent::kTypeFieldNumber;
const int GameEvent::kEntityGameEventFieldNumber;
#endif  // !_MSC_VER

GameEvent::GameEvent()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void GameEvent::InitAsDefaultInstance() {
  entitygameevent_ = const_cast< ::gameevent::EntityGameEvent*>(&::gameevent::EntityGameEvent::default_instance());
}

GameEvent::GameEvent(const GameEvent& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void GameEvent::SharedCtor() {
  _cached_size_ = 0;
  type_ = 0;
  entitygameevent_ = NULL;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

GameEvent::~GameEvent() {
  SharedDtor();
}

void GameEvent::SharedDtor() {
  if (this != default_instance_) {
    delete entitygameevent_;
  }
}

void GameEvent::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* GameEvent::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return GameEvent_descriptor_;
}

const GameEvent& GameEvent::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_GameEvent_2eproto();
  return *default_instance_;
}

GameEvent* GameEvent::default_instance_ = NULL;

GameEvent* GameEvent::New() const {
  return new GameEvent;
}

void GameEvent::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    type_ = 0;
    if (has_entitygameevent()) {
      if (entitygameevent_ != NULL) entitygameevent_->::gameevent::EntityGameEvent::Clear();
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool GameEvent::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required .gameevent.GameEvent.GameEventType type = 1 [default = ENTITY];
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::gameevent::GameEvent_GameEventType_IsValid(value)) {
            set_type(static_cast< ::gameevent::GameEvent_GameEventType >(value));
          } else {
            mutable_unknown_fields()->AddVarint(1, value);
          }
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(26)) goto parse_entityGameEvent;
        break;
      }

      // optional .gameevent.EntityGameEvent entityGameEvent = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_entityGameEvent:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_entitygameevent()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void GameEvent::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required .gameevent.GameEvent.GameEventType type = 1 [default = ENTITY];
  if (has_type()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->type(), output);
  }

  // optional .gameevent.EntityGameEvent entityGameEvent = 3;
  if (has_entitygameevent()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, this->entitygameevent(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* GameEvent::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required .gameevent.GameEvent.GameEventType type = 1 [default = ENTITY];
  if (has_type()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      1, this->type(), target);
  }

  // optional .gameevent.EntityGameEvent entityGameEvent = 3;
  if (has_entitygameevent()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        3, this->entitygameevent(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int GameEvent::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required .gameevent.GameEvent.GameEventType type = 1 [default = ENTITY];
    if (has_type()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->type());
    }

    // optional .gameevent.EntityGameEvent entityGameEvent = 3;
    if (has_entitygameevent()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->entitygameevent());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void GameEvent::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const GameEvent* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const GameEvent*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void GameEvent::MergeFrom(const GameEvent& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_type()) {
      set_type(from.type());
    }
    if (from.has_entitygameevent()) {
      mutable_entitygameevent()->::gameevent::EntityGameEvent::MergeFrom(from.entitygameevent());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void GameEvent::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void GameEvent::CopyFrom(const GameEvent& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GameEvent::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  if (has_entitygameevent()) {
    if (!this->entitygameevent().IsInitialized()) return false;
  }
  return true;
}

void GameEvent::Swap(GameEvent* other) {
  if (other != this) {
    std::swap(type_, other->type_);
    std::swap(entitygameevent_, other->entitygameevent_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata GameEvent::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = GameEvent_descriptor_;
  metadata.reflection = GameEvent_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace gameevent

// @@protoc_insertion_point(global_scope)
