// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: TargetInfo.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "TargetInfo.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
// @@protoc_insertion_point(includes)

namespace message {

void protobuf_ShutdownFile_TargetInfo_2eproto() {
  delete TargetInfoRequest::default_instance_;
  delete TargetInfoResponse::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_TargetInfo_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_TargetInfo_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  ::message::protobuf_AddDesc_UserInfo_2eproto();
  TargetInfoRequest::default_instance_ = new TargetInfoRequest();
  TargetInfoResponse::default_instance_ = new TargetInfoResponse();
  TargetInfoRequest::default_instance_->InitAsDefaultInstance();
  TargetInfoResponse::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_TargetInfo_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_TargetInfo_2eproto_once_);
void protobuf_AddDesc_TargetInfo_2eproto() {
  ::google::protobuf::::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_TargetInfo_2eproto_once_,
                 &protobuf_AddDesc_TargetInfo_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_TargetInfo_2eproto {
  StaticDescriptorInitializer_TargetInfo_2eproto() {
    protobuf_AddDesc_TargetInfo_2eproto();
  }
} static_descriptor_initializer_TargetInfo_2eproto_;
#endif

// ===================================================================

#ifndef _MSC_VER
const int TargetInfoRequest::kRoomIdFieldNumber;
#endif  // !_MSC_VER

TargetInfoRequest::TargetInfoRequest()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void TargetInfoRequest::InitAsDefaultInstance() {
}

TargetInfoRequest::TargetInfoRequest(const TargetInfoRequest& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void TargetInfoRequest::SharedCtor() {
  _cached_size_ = 0;
  roomid_ = 0u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

TargetInfoRequest::~TargetInfoRequest() {
  SharedDtor();
}

void TargetInfoRequest::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void TargetInfoRequest::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const TargetInfoRequest& TargetInfoRequest::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_TargetInfo_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_TargetInfo_2eproto();
#endif
  return *default_instance_;
}

TargetInfoRequest* TargetInfoRequest::default_instance_ = NULL;

TargetInfoRequest* TargetInfoRequest::New() const {
  return new TargetInfoRequest;
}

void TargetInfoRequest::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    roomid_ = 0u;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool TargetInfoRequest::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional uint32 roomId = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &roomid_)));
          set_has_roomid();
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

void TargetInfoRequest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional uint32 roomId = 1;
  if (has_roomid()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->roomid(), output);
  }

}

int TargetInfoRequest::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional uint32 roomId = 1;
    if (has_roomid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->roomid());
    }

  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void TargetInfoRequest::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const TargetInfoRequest*>(&from));
}

void TargetInfoRequest::MergeFrom(const TargetInfoRequest& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_roomid()) {
      set_roomid(from.roomid());
    }
  }
}

void TargetInfoRequest::CopyFrom(const TargetInfoRequest& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool TargetInfoRequest::IsInitialized() const {

  return true;
}

void TargetInfoRequest::Swap(TargetInfoRequest* other) {
  if (other != this) {
    std::swap(roomid_, other->roomid_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string TargetInfoRequest::GetTypeName() const {
  return "message.TargetInfoRequest";
}


// ===================================================================

bool TargetInfoResponse_FindStatus_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
      return true;
    default:
      return false;
  }
}

#ifndef _MSC_VER
const TargetInfoResponse_FindStatus TargetInfoResponse::SUCCESS;
const TargetInfoResponse_FindStatus TargetInfoResponse::FAIL;
const TargetInfoResponse_FindStatus TargetInfoResponse::FindStatus_MIN;
const TargetInfoResponse_FindStatus TargetInfoResponse::FindStatus_MAX;
const int TargetInfoResponse::FindStatus_ARRAYSIZE;
#endif  // _MSC_VER
#ifndef _MSC_VER
const int TargetInfoResponse::kStatusFieldNumber;
const int TargetInfoResponse::kDungoenIdFieldNumber;
const int TargetInfoResponse::kSelfFieldNumber;
const int TargetInfoResponse::kTargetFieldNumber;
#endif  // !_MSC_VER

TargetInfoResponse::TargetInfoResponse()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void TargetInfoResponse::InitAsDefaultInstance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  self_ = const_cast< ::message::UserBasicInfo*>(
      ::message::UserBasicInfo::internal_default_instance());
#else
  self_ = const_cast< ::message::UserBasicInfo*>(&::message::UserBasicInfo::default_instance());
#endif
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  target_ = const_cast< ::message::UserBasicInfo*>(
      ::message::UserBasicInfo::internal_default_instance());
#else
  target_ = const_cast< ::message::UserBasicInfo*>(&::message::UserBasicInfo::default_instance());
#endif
}

TargetInfoResponse::TargetInfoResponse(const TargetInfoResponse& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void TargetInfoResponse::SharedCtor() {
  _cached_size_ = 0;
  status_ = 1;
  dungoenid_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  self_ = NULL;
  target_ = NULL;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

TargetInfoResponse::~TargetInfoResponse() {
  SharedDtor();
}

void TargetInfoResponse::SharedDtor() {
  if (dungoenid_ != &::google::protobuf::internal::kEmptyString) {
    delete dungoenid_;
  }
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
    delete self_;
    delete target_;
  }
}

void TargetInfoResponse::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const TargetInfoResponse& TargetInfoResponse::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_TargetInfo_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_TargetInfo_2eproto();
#endif
  return *default_instance_;
}

TargetInfoResponse* TargetInfoResponse::default_instance_ = NULL;

TargetInfoResponse* TargetInfoResponse::New() const {
  return new TargetInfoResponse;
}

void TargetInfoResponse::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    status_ = 1;
    if (has_dungoenid()) {
      if (dungoenid_ != &::google::protobuf::internal::kEmptyString) {
        dungoenid_->clear();
      }
    }
    if (has_self()) {
      if (self_ != NULL) self_->::message::UserBasicInfo::Clear();
    }
    if (has_target()) {
      if (target_ != NULL) target_->::message::UserBasicInfo::Clear();
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool TargetInfoResponse::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required .message.TargetInfoResponse.FindStatus status = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::message::TargetInfoResponse_FindStatus_IsValid(value)) {
            set_status(static_cast< ::message::TargetInfoResponse_FindStatus >(value));
          }
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_dungoenId;
        break;
      }

      // required string dungoenId = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_dungoenId:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_dungoenid()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(26)) goto parse_self;
        break;
      }

      // required .message.UserBasicInfo self = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_self:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_self()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(34)) goto parse_target;
        break;
      }

      // required .message.UserBasicInfo target = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_target:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_target()));
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

void TargetInfoResponse::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required .message.TargetInfoResponse.FindStatus status = 1;
  if (has_status()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->status(), output);
  }

  // required string dungoenId = 2;
  if (has_dungoenid()) {
    ::google::protobuf::internal::WireFormatLite::WriteString(
      2, this->dungoenid(), output);
  }

  // required .message.UserBasicInfo self = 3;
  if (has_self()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      3, this->self(), output);
  }

  // required .message.UserBasicInfo target = 4;
  if (has_target()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      4, this->target(), output);
  }

}

int TargetInfoResponse::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required .message.TargetInfoResponse.FindStatus status = 1;
    if (has_status()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->status());
    }

    // required string dungoenId = 2;
    if (has_dungoenid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->dungoenid());
    }

    // required .message.UserBasicInfo self = 3;
    if (has_self()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->self());
    }

    // required .message.UserBasicInfo target = 4;
    if (has_target()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->target());
    }

  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void TargetInfoResponse::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const TargetInfoResponse*>(&from));
}

void TargetInfoResponse::MergeFrom(const TargetInfoResponse& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_status()) {
      set_status(from.status());
    }
    if (from.has_dungoenid()) {
      set_dungoenid(from.dungoenid());
    }
    if (from.has_self()) {
      mutable_self()->::message::UserBasicInfo::MergeFrom(from.self());
    }
    if (from.has_target()) {
      mutable_target()->::message::UserBasicInfo::MergeFrom(from.target());
    }
  }
}

void TargetInfoResponse::CopyFrom(const TargetInfoResponse& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool TargetInfoResponse::IsInitialized() const {
  if ((_has_bits_[0] & 0x0000000f) != 0x0000000f) return false;

  if (has_self()) {
    if (!this->self().IsInitialized()) return false;
  }
  if (has_target()) {
    if (!this->target().IsInitialized()) return false;
  }
  return true;
}

void TargetInfoResponse::Swap(TargetInfoResponse* other) {
  if (other != this) {
    std::swap(status_, other->status_);
    std::swap(dungoenid_, other->dungoenid_);
    std::swap(self_, other->self_);
    std::swap(target_, other->target_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string TargetInfoResponse::GetTypeName() const {
  return "message.TargetInfoResponse";
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace message

// @@protoc_insertion_point(global_scope)
