// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: UserInfoUpdate.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "UserInfoUpdate.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
// @@protoc_insertion_point(includes)

namespace message {

void protobuf_ShutdownFile_UserInfoUpdate_2eproto() {
  delete UserInfoUpdateRequest::default_instance_;
  delete UserInfoUpdateResponse::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_UserInfoUpdate_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_UserInfoUpdate_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  UserInfoUpdateRequest::default_instance_ = new UserInfoUpdateRequest();
  UserInfoUpdateResponse::default_instance_ = new UserInfoUpdateResponse();
  UserInfoUpdateRequest::default_instance_->InitAsDefaultInstance();
  UserInfoUpdateResponse::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_UserInfoUpdate_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_UserInfoUpdate_2eproto_once_);
void protobuf_AddDesc_UserInfoUpdate_2eproto() {
  ::google::protobuf::::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_UserInfoUpdate_2eproto_once_,
                 &protobuf_AddDesc_UserInfoUpdate_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_UserInfoUpdate_2eproto {
  StaticDescriptorInitializer_UserInfoUpdate_2eproto() {
    protobuf_AddDesc_UserInfoUpdate_2eproto();
  }
} static_descriptor_initializer_UserInfoUpdate_2eproto_;
#endif

// ===================================================================

bool UserInfoUpdateRequest_UpdateType_IsValid(int value) {
  switch(value) {
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}

#ifndef _MSC_VER
const UserInfoUpdateRequest_UpdateType UserInfoUpdateRequest::User_IconId;
const UserInfoUpdateRequest_UpdateType UserInfoUpdateRequest::User_Name;
const UserInfoUpdateRequest_UpdateType UserInfoUpdateRequest::UpdateType_MIN;
const UserInfoUpdateRequest_UpdateType UserInfoUpdateRequest::UpdateType_MAX;
const int UserInfoUpdateRequest::UpdateType_ARRAYSIZE;
#endif  // _MSC_VER
#ifndef _MSC_VER
const int UserInfoUpdateRequest::kTypeFieldNumber;
const int UserInfoUpdateRequest::kNameFieldNumber;
const int UserInfoUpdateRequest::kIconIdFieldNumber;
#endif  // !_MSC_VER

UserInfoUpdateRequest::UserInfoUpdateRequest()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void UserInfoUpdateRequest::InitAsDefaultInstance() {
}

UserInfoUpdateRequest::UserInfoUpdateRequest(const UserInfoUpdateRequest& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void UserInfoUpdateRequest::SharedCtor() {
  _cached_size_ = 0;
  type_ = 1;
  name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  iconid_ = 0u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

UserInfoUpdateRequest::~UserInfoUpdateRequest() {
  SharedDtor();
}

void UserInfoUpdateRequest::SharedDtor() {
  if (name_ != &::google::protobuf::internal::kEmptyString) {
    delete name_;
  }
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void UserInfoUpdateRequest::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const UserInfoUpdateRequest& UserInfoUpdateRequest::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_UserInfoUpdate_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_UserInfoUpdate_2eproto();
#endif
  return *default_instance_;
}

UserInfoUpdateRequest* UserInfoUpdateRequest::default_instance_ = NULL;

UserInfoUpdateRequest* UserInfoUpdateRequest::New() const {
  return new UserInfoUpdateRequest;
}

void UserInfoUpdateRequest::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    type_ = 1;
    if (has_name()) {
      if (name_ != &::google::protobuf::internal::kEmptyString) {
        name_->clear();
      }
    }
    iconid_ = 0u;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool UserInfoUpdateRequest::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required .message.UserInfoUpdateRequest.UpdateType type = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::message::UserInfoUpdateRequest_UpdateType_IsValid(value)) {
            set_type(static_cast< ::message::UserInfoUpdateRequest_UpdateType >(value));
          }
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_name;
        break;
      }

      // optional string name = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_name:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_name()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_iconId;
        break;
      }

      // optional uint32 iconId = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_iconId:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &iconid_)));
          set_has_iconid();
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

void UserInfoUpdateRequest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required .message.UserInfoUpdateRequest.UpdateType type = 1;
  if (has_type()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->type(), output);
  }

  // optional string name = 2;
  if (has_name()) {
    ::google::protobuf::internal::WireFormatLite::WriteString(
      2, this->name(), output);
  }

  // optional uint32 iconId = 3;
  if (has_iconid()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(3, this->iconid(), output);
  }

}

int UserInfoUpdateRequest::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required .message.UserInfoUpdateRequest.UpdateType type = 1;
    if (has_type()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->type());
    }

    // optional string name = 2;
    if (has_name()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->name());
    }

    // optional uint32 iconId = 3;
    if (has_iconid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->iconid());
    }

  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void UserInfoUpdateRequest::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const UserInfoUpdateRequest*>(&from));
}

void UserInfoUpdateRequest::MergeFrom(const UserInfoUpdateRequest& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_type()) {
      set_type(from.type());
    }
    if (from.has_name()) {
      set_name(from.name());
    }
    if (from.has_iconid()) {
      set_iconid(from.iconid());
    }
  }
}

void UserInfoUpdateRequest::CopyFrom(const UserInfoUpdateRequest& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool UserInfoUpdateRequest::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  return true;
}

void UserInfoUpdateRequest::Swap(UserInfoUpdateRequest* other) {
  if (other != this) {
    std::swap(type_, other->type_);
    std::swap(name_, other->name_);
    std::swap(iconid_, other->iconid_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string UserInfoUpdateRequest::GetTypeName() const {
  return "message.UserInfoUpdateRequest";
}


// ===================================================================

bool UserInfoUpdateResponse_UpdateState_IsValid(int value) {
  switch(value) {
    case 1:
    case 2:
    case 3:
      return true;
    default:
      return false;
  }
}

#ifndef _MSC_VER
const UserInfoUpdateResponse_UpdateState UserInfoUpdateResponse::OK;
const UserInfoUpdateResponse_UpdateState UserInfoUpdateResponse::FAIL;
const UserInfoUpdateResponse_UpdateState UserInfoUpdateResponse::NOMONEY;
const UserInfoUpdateResponse_UpdateState UserInfoUpdateResponse::UpdateState_MIN;
const UserInfoUpdateResponse_UpdateState UserInfoUpdateResponse::UpdateState_MAX;
const int UserInfoUpdateResponse::UpdateState_ARRAYSIZE;
#endif  // _MSC_VER
#ifndef _MSC_VER
const int UserInfoUpdateResponse::kStateFieldNumber;
#endif  // !_MSC_VER

UserInfoUpdateResponse::UserInfoUpdateResponse()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void UserInfoUpdateResponse::InitAsDefaultInstance() {
}

UserInfoUpdateResponse::UserInfoUpdateResponse(const UserInfoUpdateResponse& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void UserInfoUpdateResponse::SharedCtor() {
  _cached_size_ = 0;
  state_ = 1;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

UserInfoUpdateResponse::~UserInfoUpdateResponse() {
  SharedDtor();
}

void UserInfoUpdateResponse::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void UserInfoUpdateResponse::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const UserInfoUpdateResponse& UserInfoUpdateResponse::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_UserInfoUpdate_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_UserInfoUpdate_2eproto();
#endif
  return *default_instance_;
}

UserInfoUpdateResponse* UserInfoUpdateResponse::default_instance_ = NULL;

UserInfoUpdateResponse* UserInfoUpdateResponse::New() const {
  return new UserInfoUpdateResponse;
}

void UserInfoUpdateResponse::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    state_ = 1;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool UserInfoUpdateResponse::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required .message.UserInfoUpdateResponse.UpdateState state = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::message::UserInfoUpdateResponse_UpdateState_IsValid(value)) {
            set_state(static_cast< ::message::UserInfoUpdateResponse_UpdateState >(value));
          }
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

void UserInfoUpdateResponse::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required .message.UserInfoUpdateResponse.UpdateState state = 1;
  if (has_state()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->state(), output);
  }

}

int UserInfoUpdateResponse::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required .message.UserInfoUpdateResponse.UpdateState state = 1;
    if (has_state()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->state());
    }

  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void UserInfoUpdateResponse::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const UserInfoUpdateResponse*>(&from));
}

void UserInfoUpdateResponse::MergeFrom(const UserInfoUpdateResponse& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_state()) {
      set_state(from.state());
    }
  }
}

void UserInfoUpdateResponse::CopyFrom(const UserInfoUpdateResponse& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool UserInfoUpdateResponse::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  return true;
}

void UserInfoUpdateResponse::Swap(UserInfoUpdateResponse* other) {
  if (other != this) {
    std::swap(state_, other->state_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string UserInfoUpdateResponse::GetTypeName() const {
  return "message.UserInfoUpdateResponse";
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace message

// @@protoc_insertion_point(global_scope)
