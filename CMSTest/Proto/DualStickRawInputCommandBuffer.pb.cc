// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: DualStickRawInputCommandBuffer.proto

#include "DualStickRawInputCommandBuffer.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
extern PROTOBUF_INTERNAL_EXPORT_box2d_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_PbVec2_box2d_2eproto;
namespace usx {
namespace geofactions {
class DualStickRawInputCommandBufferDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<DualStickRawInputCommandBuffer> _instance;
} _DualStickRawInputCommandBuffer_default_instance_;
}  // namespace geofactions
}  // namespace usx
static void InitDefaultsscc_info_DualStickRawInputCommandBuffer_DualStickRawInputCommandBuffer_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::usx::geofactions::_DualStickRawInputCommandBuffer_default_instance_;
    new (ptr) ::usx::geofactions::DualStickRawInputCommandBuffer();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::usx::geofactions::DualStickRawInputCommandBuffer::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_DualStickRawInputCommandBuffer_DualStickRawInputCommandBuffer_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 1, 0, InitDefaultsscc_info_DualStickRawInputCommandBuffer_DualStickRawInputCommandBuffer_2eproto}, {
      &scc_info_PbVec2_box2d_2eproto.base,}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_DualStickRawInputCommandBuffer_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_DualStickRawInputCommandBuffer_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_DualStickRawInputCommandBuffer_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_DualStickRawInputCommandBuffer_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::usx::geofactions::DualStickRawInputCommandBuffer, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::usx::geofactions::DualStickRawInputCommandBuffer, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::usx::geofactions::DualStickRawInputCommandBuffer, pbv2move_),
  PROTOBUF_FIELD_OFFSET(::usx::geofactions::DualStickRawInputCommandBuffer, pbv2shoot_),
  0,
  1,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 7, sizeof(::usx::geofactions::DualStickRawInputCommandBuffer)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::usx::geofactions::_DualStickRawInputCommandBuffer_default_instance_),
};

const char descriptor_table_protodef_DualStickRawInputCommandBuffer_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n$DualStickRawInputCommandBuffer.proto\022\017"
  "usx.geofactions\032\013box2d.proto\"c\n\036DualStic"
  "kRawInputCommandBuffer\022\037\n\010pbv2Move\030\001 \002(\013"
  "2\r.box2d.PbVec2\022 \n\tpbv2Shoot\030\002 \002(\0132\r.box"
  "2d.PbVec2"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_DualStickRawInputCommandBuffer_2eproto_deps[1] = {
  &::descriptor_table_box2d_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_DualStickRawInputCommandBuffer_2eproto_sccs[1] = {
  &scc_info_DualStickRawInputCommandBuffer_DualStickRawInputCommandBuffer_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_DualStickRawInputCommandBuffer_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_DualStickRawInputCommandBuffer_2eproto = {
  false, false, descriptor_table_protodef_DualStickRawInputCommandBuffer_2eproto, "DualStickRawInputCommandBuffer.proto", 169,
  &descriptor_table_DualStickRawInputCommandBuffer_2eproto_once, descriptor_table_DualStickRawInputCommandBuffer_2eproto_sccs, descriptor_table_DualStickRawInputCommandBuffer_2eproto_deps, 1, 1,
  schemas, file_default_instances, TableStruct_DualStickRawInputCommandBuffer_2eproto::offsets,
  file_level_metadata_DualStickRawInputCommandBuffer_2eproto, 1, file_level_enum_descriptors_DualStickRawInputCommandBuffer_2eproto, file_level_service_descriptors_DualStickRawInputCommandBuffer_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_DualStickRawInputCommandBuffer_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_DualStickRawInputCommandBuffer_2eproto)), true);
namespace usx {
namespace geofactions {

// ===================================================================

void DualStickRawInputCommandBuffer::InitAsDefaultInstance() {
  ::usx::geofactions::_DualStickRawInputCommandBuffer_default_instance_._instance.get_mutable()->pbv2move_ = const_cast< ::box2d::PbVec2*>(
      ::box2d::PbVec2::internal_default_instance());
  ::usx::geofactions::_DualStickRawInputCommandBuffer_default_instance_._instance.get_mutable()->pbv2shoot_ = const_cast< ::box2d::PbVec2*>(
      ::box2d::PbVec2::internal_default_instance());
}
class DualStickRawInputCommandBuffer::_Internal {
 public:
  using HasBits = decltype(std::declval<DualStickRawInputCommandBuffer>()._has_bits_);
  static const ::box2d::PbVec2& pbv2move(const DualStickRawInputCommandBuffer* msg);
  static void set_has_pbv2move(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static const ::box2d::PbVec2& pbv2shoot(const DualStickRawInputCommandBuffer* msg);
  static void set_has_pbv2shoot(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static bool MissingRequiredFields(const HasBits& has_bits) {
    return ((has_bits[0] & 0x00000003) ^ 0x00000003) != 0;
  }
};

const ::box2d::PbVec2&
DualStickRawInputCommandBuffer::_Internal::pbv2move(const DualStickRawInputCommandBuffer* msg) {
  return *msg->pbv2move_;
}
const ::box2d::PbVec2&
DualStickRawInputCommandBuffer::_Internal::pbv2shoot(const DualStickRawInputCommandBuffer* msg) {
  return *msg->pbv2shoot_;
}
void DualStickRawInputCommandBuffer::clear_pbv2move() {
  if (pbv2move_ != nullptr) pbv2move_->Clear();
  _has_bits_[0] &= ~0x00000001u;
}
void DualStickRawInputCommandBuffer::clear_pbv2shoot() {
  if (pbv2shoot_ != nullptr) pbv2shoot_->Clear();
  _has_bits_[0] &= ~0x00000002u;
}
DualStickRawInputCommandBuffer::DualStickRawInputCommandBuffer(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:usx.geofactions.DualStickRawInputCommandBuffer)
}
DualStickRawInputCommandBuffer::DualStickRawInputCommandBuffer(const DualStickRawInputCommandBuffer& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  if (from._internal_has_pbv2move()) {
    pbv2move_ = new ::box2d::PbVec2(*from.pbv2move_);
  } else {
    pbv2move_ = nullptr;
  }
  if (from._internal_has_pbv2shoot()) {
    pbv2shoot_ = new ::box2d::PbVec2(*from.pbv2shoot_);
  } else {
    pbv2shoot_ = nullptr;
  }
  // @@protoc_insertion_point(copy_constructor:usx.geofactions.DualStickRawInputCommandBuffer)
}

void DualStickRawInputCommandBuffer::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_DualStickRawInputCommandBuffer_DualStickRawInputCommandBuffer_2eproto.base);
  ::memset(&pbv2move_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&pbv2shoot_) -
      reinterpret_cast<char*>(&pbv2move_)) + sizeof(pbv2shoot_));
}

DualStickRawInputCommandBuffer::~DualStickRawInputCommandBuffer() {
  // @@protoc_insertion_point(destructor:usx.geofactions.DualStickRawInputCommandBuffer)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void DualStickRawInputCommandBuffer::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  if (this != internal_default_instance()) delete pbv2move_;
  if (this != internal_default_instance()) delete pbv2shoot_;
}

void DualStickRawInputCommandBuffer::ArenaDtor(void* object) {
  DualStickRawInputCommandBuffer* _this = reinterpret_cast< DualStickRawInputCommandBuffer* >(object);
  (void)_this;
}
void DualStickRawInputCommandBuffer::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void DualStickRawInputCommandBuffer::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const DualStickRawInputCommandBuffer& DualStickRawInputCommandBuffer::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_DualStickRawInputCommandBuffer_DualStickRawInputCommandBuffer_2eproto.base);
  return *internal_default_instance();
}


void DualStickRawInputCommandBuffer::Clear() {
// @@protoc_insertion_point(message_clear_start:usx.geofactions.DualStickRawInputCommandBuffer)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      GOOGLE_DCHECK(pbv2move_ != nullptr);
      pbv2move_->Clear();
    }
    if (cached_has_bits & 0x00000002u) {
      GOOGLE_DCHECK(pbv2shoot_ != nullptr);
      pbv2shoot_->Clear();
    }
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* DualStickRawInputCommandBuffer::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  ::PROTOBUF_NAMESPACE_ID::Arena* arena = GetArena(); (void)arena;
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // required .box2d.PbVec2 pbv2Move = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr = ctx->ParseMessage(_internal_mutable_pbv2move(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // required .box2d.PbVec2 pbv2Shoot = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr = ctx->ParseMessage(_internal_mutable_pbv2shoot(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  _has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* DualStickRawInputCommandBuffer::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:usx.geofactions.DualStickRawInputCommandBuffer)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required .box2d.PbVec2 pbv2Move = 1;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        1, _Internal::pbv2move(this), target, stream);
  }

  // required .box2d.PbVec2 pbv2Shoot = 2;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        2, _Internal::pbv2shoot(this), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:usx.geofactions.DualStickRawInputCommandBuffer)
  return target;
}

size_t DualStickRawInputCommandBuffer::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:usx.geofactions.DualStickRawInputCommandBuffer)
  size_t total_size = 0;

  if (_internal_has_pbv2move()) {
    // required .box2d.PbVec2 pbv2Move = 1;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *pbv2move_);
  }

  if (_internal_has_pbv2shoot()) {
    // required .box2d.PbVec2 pbv2Shoot = 2;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *pbv2shoot_);
  }

  return total_size;
}
size_t DualStickRawInputCommandBuffer::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:usx.geofactions.DualStickRawInputCommandBuffer)
  size_t total_size = 0;

  if (((_has_bits_[0] & 0x00000003) ^ 0x00000003) == 0) {  // All required fields are present.
    // required .box2d.PbVec2 pbv2Move = 1;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *pbv2move_);

    // required .box2d.PbVec2 pbv2Shoot = 2;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *pbv2shoot_);

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void DualStickRawInputCommandBuffer::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:usx.geofactions.DualStickRawInputCommandBuffer)
  GOOGLE_DCHECK_NE(&from, this);
  const DualStickRawInputCommandBuffer* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<DualStickRawInputCommandBuffer>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:usx.geofactions.DualStickRawInputCommandBuffer)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:usx.geofactions.DualStickRawInputCommandBuffer)
    MergeFrom(*source);
  }
}

void DualStickRawInputCommandBuffer::MergeFrom(const DualStickRawInputCommandBuffer& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:usx.geofactions.DualStickRawInputCommandBuffer)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      _internal_mutable_pbv2move()->::box2d::PbVec2::MergeFrom(from._internal_pbv2move());
    }
    if (cached_has_bits & 0x00000002u) {
      _internal_mutable_pbv2shoot()->::box2d::PbVec2::MergeFrom(from._internal_pbv2shoot());
    }
  }
}

void DualStickRawInputCommandBuffer::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:usx.geofactions.DualStickRawInputCommandBuffer)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void DualStickRawInputCommandBuffer::CopyFrom(const DualStickRawInputCommandBuffer& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:usx.geofactions.DualStickRawInputCommandBuffer)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool DualStickRawInputCommandBuffer::IsInitialized() const {
  if (_Internal::MissingRequiredFields(_has_bits_)) return false;
  if (_internal_has_pbv2move()) {
    if (!pbv2move_->IsInitialized()) return false;
  }
  if (_internal_has_pbv2shoot()) {
    if (!pbv2shoot_->IsInitialized()) return false;
  }
  return true;
}

void DualStickRawInputCommandBuffer::InternalSwap(DualStickRawInputCommandBuffer* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(DualStickRawInputCommandBuffer, pbv2shoot_)
      + sizeof(DualStickRawInputCommandBuffer::pbv2shoot_)
      - PROTOBUF_FIELD_OFFSET(DualStickRawInputCommandBuffer, pbv2move_)>(
          reinterpret_cast<char*>(&pbv2move_),
          reinterpret_cast<char*>(&other->pbv2move_));
}

::PROTOBUF_NAMESPACE_ID::Metadata DualStickRawInputCommandBuffer::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace geofactions
}  // namespace usx
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::usx::geofactions::DualStickRawInputCommandBuffer* Arena::CreateMaybeMessage< ::usx::geofactions::DualStickRawInputCommandBuffer >(Arena* arena) {
  return Arena::CreateMessageInternal< ::usx::geofactions::DualStickRawInputCommandBuffer >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
