// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: DestroyBalloon.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "DestroyBalloon.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
// @@protoc_insertion_point(includes)

namespace message {

void protobuf_ShutdownFile_DestroyBalloon_2eproto() {
  delete DestroyBalloonRequest::default_instance_;
  delete DestroyBalloonRequest_DestroyBalloonInfo::default_instance_;
  delete DestroyBalloonResponse::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_DestroyBalloon_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_DestroyBalloon_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  DestroyBalloonRequest::default_instance_ = new DestroyBalloonRequest();
  DestroyBalloonRequest_DestroyBalloonInfo::default_instance_ = new DestroyBalloonRequest_DestroyBalloonInfo();
  DestroyBalloonResponse::default_instance_ = new DestroyBalloonResponse();
  DestroyBalloonRequest::default_instance_->InitAsDefaultInstance();
  DestroyBalloonRequest_DestroyBalloonInfo::default_instance_->InitAsDefaultInstance();
  DestroyBalloonResponse::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_DestroyBalloon_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_DestroyBalloon_2eproto_once_);
void protobuf_AddDesc_DestroyBalloon_2eproto() {
  ::google::protobuf::::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_DestroyBalloon_2eproto_once_,
                 &protobuf_AddDesc_DestroyBalloon_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_DestroyBalloon_2eproto {
  StaticDescriptorInitializer_DestroyBalloon_2eproto() {
    protobuf_AddDesc_DestroyBalloon_2eproto();
  }
} static_descriptor_initializer_DestroyBalloon_2eproto_;
#endif

// ===================================================================

bool DestroyBalloonRequest_Type_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}

#ifndef _MSC_VER
const DestroyBalloonRequest_Type DestroyBalloonRequest::BALLOON_COLOR_Petrifaction;
const DestroyBalloonRequest_Type DestroyBalloonRequest::BALLOON_COLOR_Camouflage;
const DestroyBalloonRequest_Type DestroyBalloonRequest::BALLOON_COLOR_Normal;
const DestroyBalloonRequest_Type DestroyBalloonRequest::Type_MIN;
const DestroyBalloonRequest_Type DestroyBalloonRequest::Type_MAX;
const int DestroyBalloonRequest::Type_ARRAYSIZE;
#endif  // _MSC_VER
#ifndef _MSC_VER
const int DestroyBalloonRequest_DestroyBalloonInfo::kTypeFieldNumber;
const int DestroyBalloonRequest_DestroyBalloonInfo::kCountFieldNumber;
#endif  // !_MSC_VER

DestroyBalloonRequest_DestroyBalloonInfo::DestroyBalloonRequest_DestroyBalloonInfo()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void DestroyBalloonRequest_DestroyBalloonInfo::InitAsDefaultInstance() {
}

DestroyBalloonRequest_DestroyBalloonInfo::DestroyBalloonRequest_DestroyBalloonInfo(const DestroyBalloonRequest_DestroyBalloonInfo& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void DestroyBalloonRequest_DestroyBalloonInfo::SharedCtor() {
  _cached_size_ = 0;
  type_ = 0;
  count_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

DestroyBalloonRequest_DestroyBalloonInfo::~DestroyBalloonRequest_DestroyBalloonInfo() {
  SharedDtor();
}

void DestroyBalloonRequest_DestroyBalloonInfo::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void DestroyBalloonRequest_DestroyBalloonInfo::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const DestroyBalloonRequest_DestroyBalloonInfo& DestroyBalloonRequest_DestroyBalloonInfo::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_DestroyBalloon_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_DestroyBalloon_2eproto();
#endif
  return *default_instance_;
}

DestroyBalloonRequest_DestroyBalloonInfo* DestroyBalloonRequest_DestroyBalloonInfo::default_instance_ = NULL;

DestroyBalloonRequest_DestroyBalloonInfo* DestroyBalloonRequest_DestroyBalloonInfo::New() const {
  return new DestroyBalloonRequest_DestroyBalloonInfo;
}

void DestroyBalloonRequest_DestroyBalloonInfo::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    type_ = 0;
    count_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool DestroyBalloonRequest_DestroyBalloonInfo::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required .message.DestroyBalloonRequest.Type type = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::message::DestroyBalloonRequest_Type_IsValid(value)) {
            set_type(static_cast< ::message::DestroyBalloonRequest_Type >(value));
          }
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_count;
        break;
      }

      // required int32 count = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_count:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &count_)));
          set_has_count();
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
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void DestroyBalloonRequest_DestroyBalloonInfo::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required .message.DestroyBalloonRequest.Type type = 1;
  if (has_type()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->type(), output);
  }

  // required int32 count = 2;
  if (has_count()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->count(), output);
  }

}

int DestroyBalloonRequest_DestroyBalloonInfo::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required .message.DestroyBalloonRequest.Type type = 1;
    if (has_type()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->type());
    }

    // required int32 count = 2;
    if (has_count()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->count());
    }

  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void DestroyBalloonRequest_DestroyBalloonInfo::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const DestroyBalloonRequest_DestroyBalloonInfo*>(&from));
}

void DestroyBalloonRequest_DestroyBalloonInfo::MergeFrom(const DestroyBalloonRequest_DestroyBalloonInfo& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_type()) {
      set_type(from.type());
    }
    if (from.has_count()) {
      set_count(from.count());
    }
  }
}

void DestroyBalloonRequest_DestroyBalloonInfo::CopyFrom(const DestroyBalloonRequest_DestroyBalloonInfo& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool DestroyBalloonRequest_DestroyBalloonInfo::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;

  return true;
}

void DestroyBalloonRequest_DestroyBalloonInfo::Swap(DestroyBalloonRequest_DestroyBalloonInfo* other) {
  if (other != this) {
    std::swap(type_, other->type_);
    std::swap(count_, other->count_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string DestroyBalloonRequest_DestroyBalloonInfo::GetTypeName() const {
  return "message.DestroyBalloonRequest.DestroyBalloonInfo";
}


// -------------------------------------------------------------------

#ifndef _MSC_VER
const int DestroyBalloonRequest::kDungoenIdFieldNumber;
const int DestroyBalloonRequest::kDestroyBalloonFieldNumber;
#endif  // !_MSC_VER

DestroyBalloonRequest::DestroyBalloonRequest()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void DestroyBalloonRequest::InitAsDefaultInstance() {
}

DestroyBalloonRequest::DestroyBalloonRequest(const DestroyBalloonRequest& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void DestroyBalloonRequest::SharedCtor() {
  _cached_size_ = 0;
  dungoenid_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

DestroyBalloonRequest::~DestroyBalloonRequest() {
  SharedDtor();
}

void DestroyBalloonRequest::SharedDtor() {
  if (dungoenid_ != &::google::protobuf::internal::kEmptyString) {
    delete dungoenid_;
  }
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void DestroyBalloonRequest::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const DestroyBalloonRequest& DestroyBalloonRequest::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_DestroyBalloon_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_DestroyBalloon_2eproto();
#endif
  return *default_instance_;
}

DestroyBalloonRequest* DestroyBalloonRequest::default_instance_ = NULL;

DestroyBalloonRequest* DestroyBalloonRequest::New() const {
  return new DestroyBalloonRequest;
}

void DestroyBalloonRequest::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_dungoenid()) {
      if (dungoenid_ != &::google::protobuf::internal::kEmptyString) {
        dungoenid_->clear();
      }
    }
  }
  destroyballoon_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool DestroyBalloonRequest::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required string dungoenId = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_dungoenid()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_destroyBalloon;
        break;
      }

      // repeated .message.DestroyBalloonRequest.DestroyBalloonInfo destroyBalloon = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_destroyBalloon:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_destroyballoon()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_destroyBalloon;
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void DestroyBalloonRequest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required string dungoenId = 1;
  if (has_dungoenid()) {
    ::google::protobuf::internal::WireFormatLite::WriteString(
      1, this->dungoenid(), output);
  }

  // repeated .message.DestroyBalloonRequest.DestroyBalloonInfo destroyBalloon = 2;
  for (int i = 0; i < this->destroyballoon_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      2, this->destroyballoon(i), output);
  }

}

int DestroyBalloonRequest::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required string dungoenId = 1;
    if (has_dungoenid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->dungoenid());
    }

  }
  // repeated .message.DestroyBalloonRequest.DestroyBalloonInfo destroyBalloon = 2;
  total_size += 1 * this->destroyballoon_size();
  for (int i = 0; i < this->destroyballoon_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->destroyballoon(i));
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void DestroyBalloonRequest::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const DestroyBalloonRequest*>(&from));
}

void DestroyBalloonRequest::MergeFrom(const DestroyBalloonRequest& from) {
  GOOGLE_CHECK_NE(&from, this);
  destroyballoon_.MergeFrom(from.destroyballoon_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_dungoenid()) {
      set_dungoenid(from.dungoenid());
    }
  }
}

void DestroyBalloonRequest::CopyFrom(const DestroyBalloonRequest& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool DestroyBalloonRequest::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  for (int i = 0; i < destroyballoon_size(); i++) {
    if (!this->destroyballoon(i).IsInitialized()) return false;
  }
  return true;
}

void DestroyBalloonRequest::Swap(DestroyBalloonRequest* other) {
  if (other != this) {
    std::swap(dungoenid_, other->dungoenid_);
    destroyballoon_.Swap(&other->destroyballoon_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string DestroyBalloonRequest::GetTypeName() const {
  return "message.DestroyBalloonRequest";
}


// ===================================================================

#ifndef _MSC_VER
#endif  // !_MSC_VER

DestroyBalloonResponse::DestroyBalloonResponse()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void DestroyBalloonResponse::InitAsDefaultInstance() {
}

DestroyBalloonResponse::DestroyBalloonResponse(const DestroyBalloonResponse& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void DestroyBalloonResponse::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

DestroyBalloonResponse::~DestroyBalloonResponse() {
  SharedDtor();
}

void DestroyBalloonResponse::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void DestroyBalloonResponse::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const DestroyBalloonResponse& DestroyBalloonResponse::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_DestroyBalloon_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_DestroyBalloon_2eproto();
#endif
  return *default_instance_;
}

DestroyBalloonResponse* DestroyBalloonResponse::default_instance_ = NULL;

DestroyBalloonResponse* DestroyBalloonResponse::New() const {
  return new DestroyBalloonResponse;
}

void DestroyBalloonResponse::Clear() {
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool DestroyBalloonResponse::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
        ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
      return true;
    }
    DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
  }
  return true;
#undef DO_
}

void DestroyBalloonResponse::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
}

int DestroyBalloonResponse::ByteSize() const {
  int total_size = 0;

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void DestroyBalloonResponse::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const DestroyBalloonResponse*>(&from));
}

void DestroyBalloonResponse::MergeFrom(const DestroyBalloonResponse& from) {
  GOOGLE_CHECK_NE(&from, this);
}

void DestroyBalloonResponse::CopyFrom(const DestroyBalloonResponse& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool DestroyBalloonResponse::IsInitialized() const {

  return true;
}

void DestroyBalloonResponse::Swap(DestroyBalloonResponse* other) {
  if (other != this) {
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string DestroyBalloonResponse::GetTypeName() const {
  return "message.DestroyBalloonResponse";
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace message

// @@protoc_insertion_point(global_scope)
