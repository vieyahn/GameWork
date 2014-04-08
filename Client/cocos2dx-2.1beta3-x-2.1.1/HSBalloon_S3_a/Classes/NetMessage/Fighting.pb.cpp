// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Fighting.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "Fighting.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
// @@protoc_insertion_point(includes)

namespace message {

void protobuf_ShutdownFile_Fighting_2eproto() {
  delete FightingRequest::default_instance_;
  delete FightingResponse::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_Fighting_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_Fighting_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  ::message::protobuf_AddDesc_Address_2eproto();
  FightingRequest::default_instance_ = new FightingRequest();
  FightingResponse::default_instance_ = new FightingResponse();
  FightingRequest::default_instance_->InitAsDefaultInstance();
  FightingResponse::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_Fighting_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_Fighting_2eproto_once_);
void protobuf_AddDesc_Fighting_2eproto() {
  ::google::protobuf::::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_Fighting_2eproto_once_,
                 &protobuf_AddDesc_Fighting_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_Fighting_2eproto {
  StaticDescriptorInitializer_Fighting_2eproto() {
    protobuf_AddDesc_Fighting_2eproto();
  }
} static_descriptor_initializer_Fighting_2eproto_;
#endif

// ===================================================================

#ifndef _MSC_VER
#endif  // !_MSC_VER

FightingRequest::FightingRequest()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void FightingRequest::InitAsDefaultInstance() {
}

FightingRequest::FightingRequest(const FightingRequest& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void FightingRequest::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

FightingRequest::~FightingRequest() {
  SharedDtor();
}

void FightingRequest::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void FightingRequest::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const FightingRequest& FightingRequest::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_Fighting_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_Fighting_2eproto();
#endif
  return *default_instance_;
}

FightingRequest* FightingRequest::default_instance_ = NULL;

FightingRequest* FightingRequest::New() const {
  return new FightingRequest;
}

void FightingRequest::Clear() {
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool FightingRequest::MergePartialFromCodedStream(
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

void FightingRequest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
}

int FightingRequest::ByteSize() const {
  int total_size = 0;

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void FightingRequest::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const FightingRequest*>(&from));
}

void FightingRequest::MergeFrom(const FightingRequest& from) {
  GOOGLE_CHECK_NE(&from, this);
}

void FightingRequest::CopyFrom(const FightingRequest& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool FightingRequest::IsInitialized() const {

  return true;
}

void FightingRequest::Swap(FightingRequest* other) {
  if (other != this) {
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string FightingRequest::GetTypeName() const {
  return "message.FightingRequest";
}


// ===================================================================

bool FightingResponse_RequestStatus_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
      return true;
    default:
      return false;
  }
}

#ifndef _MSC_VER
const FightingResponse_RequestStatus FightingResponse::SUCCESS;
const FightingResponse_RequestStatus FightingResponse::FAIL;
const FightingResponse_RequestStatus FightingResponse::RequestStatus_MIN;
const FightingResponse_RequestStatus FightingResponse::RequestStatus_MAX;
const int FightingResponse::RequestStatus_ARRAYSIZE;
#endif  // _MSC_VER
#ifndef _MSC_VER
const int FightingResponse::kStatusFieldNumber;
const int FightingResponse::kAddressFieldNumber;
#endif  // !_MSC_VER

FightingResponse::FightingResponse()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void FightingResponse::InitAsDefaultInstance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  address_ = const_cast< ::message::NetAddress*>(
      ::message::NetAddress::internal_default_instance());
#else
  address_ = const_cast< ::message::NetAddress*>(&::message::NetAddress::default_instance());
#endif
}

FightingResponse::FightingResponse(const FightingResponse& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void FightingResponse::SharedCtor() {
  _cached_size_ = 0;
  status_ = 1;
  address_ = NULL;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

FightingResponse::~FightingResponse() {
  SharedDtor();
}

void FightingResponse::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
    delete address_;
  }
}

void FightingResponse::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const FightingResponse& FightingResponse::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_Fighting_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_Fighting_2eproto();
#endif
  return *default_instance_;
}

FightingResponse* FightingResponse::default_instance_ = NULL;

FightingResponse* FightingResponse::New() const {
  return new FightingResponse;
}

void FightingResponse::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    status_ = 1;
    if (has_address()) {
      if (address_ != NULL) address_->::message::NetAddress::Clear();
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool FightingResponse::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required .message.FightingResponse.RequestStatus status = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::message::FightingResponse_RequestStatus_IsValid(value)) {
            set_status(static_cast< ::message::FightingResponse_RequestStatus >(value));
          }
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_address;
        break;
      }

      // optional .message.NetAddress address = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_address:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_address()));
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

void FightingResponse::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required .message.FightingResponse.RequestStatus status = 1;
  if (has_status()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->status(), output);
  }

  // optional .message.NetAddress address = 2;
  if (has_address()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      2, this->address(), output);
  }

}

int FightingResponse::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required .message.FightingResponse.RequestStatus status = 1;
    if (has_status()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->status());
    }

    // optional .message.NetAddress address = 2;
    if (has_address()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->address());
    }

  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void FightingResponse::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const FightingResponse*>(&from));
}

void FightingResponse::MergeFrom(const FightingResponse& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_status()) {
      set_status(from.status());
    }
    if (from.has_address()) {
      mutable_address()->::message::NetAddress::MergeFrom(from.address());
    }
  }
}

void FightingResponse::CopyFrom(const FightingResponse& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool FightingResponse::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  return true;
}

void FightingResponse::Swap(FightingResponse* other) {
  if (other != this) {
    std::swap(status_, other->status_);
    std::swap(address_, other->address_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string FightingResponse::GetTypeName() const {
  return "message.FightingResponse";
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace message

// @@protoc_insertion_point(global_scope)