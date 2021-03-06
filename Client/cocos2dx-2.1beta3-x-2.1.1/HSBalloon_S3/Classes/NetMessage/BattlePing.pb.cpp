// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: BattlePing.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "BattlePing.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
// @@protoc_insertion_point(includes)

namespace message {

void protobuf_ShutdownFile_BattlePing_2eproto() {
  delete BattlePingRequest::default_instance_;
  delete BattlePingResponse::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_BattlePing_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_BattlePing_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  ::message::protobuf_AddDesc_Heartbeat_2eproto();
  BattlePingRequest::default_instance_ = new BattlePingRequest();
  BattlePingResponse::default_instance_ = new BattlePingResponse();
  BattlePingRequest::default_instance_->InitAsDefaultInstance();
  BattlePingResponse::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_BattlePing_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_BattlePing_2eproto_once_);
void protobuf_AddDesc_BattlePing_2eproto() {
  ::google::protobuf::::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_BattlePing_2eproto_once_,
                 &protobuf_AddDesc_BattlePing_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_BattlePing_2eproto {
  StaticDescriptorInitializer_BattlePing_2eproto() {
    protobuf_AddDesc_BattlePing_2eproto();
  }
} static_descriptor_initializer_BattlePing_2eproto_;
#endif

// ===================================================================

#ifndef _MSC_VER
const int BattlePingRequest::kBattlePingRequestFieldNumber;
#endif  // !_MSC_VER

BattlePingRequest::BattlePingRequest()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void BattlePingRequest::InitAsDefaultInstance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  battlepingrequest_ = const_cast< ::message::HeartbeatRequest*>(
      ::message::HeartbeatRequest::internal_default_instance());
#else
  battlepingrequest_ = const_cast< ::message::HeartbeatRequest*>(&::message::HeartbeatRequest::default_instance());
#endif
}

BattlePingRequest::BattlePingRequest(const BattlePingRequest& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void BattlePingRequest::SharedCtor() {
  _cached_size_ = 0;
  battlepingrequest_ = NULL;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

BattlePingRequest::~BattlePingRequest() {
  SharedDtor();
}

void BattlePingRequest::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
    delete battlepingrequest_;
  }
}

void BattlePingRequest::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const BattlePingRequest& BattlePingRequest::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_BattlePing_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_BattlePing_2eproto();
#endif
  return *default_instance_;
}

BattlePingRequest* BattlePingRequest::default_instance_ = NULL;

BattlePingRequest* BattlePingRequest::New() const {
  return new BattlePingRequest;
}

void BattlePingRequest::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_battlepingrequest()) {
      if (battlepingrequest_ != NULL) battlepingrequest_->::message::HeartbeatRequest::Clear();
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool BattlePingRequest::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required .message.HeartbeatRequest battlePingRequest = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_battlepingrequest()));
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

void BattlePingRequest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required .message.HeartbeatRequest battlePingRequest = 1;
  if (has_battlepingrequest()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      1, this->battlepingrequest(), output);
  }

}

int BattlePingRequest::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required .message.HeartbeatRequest battlePingRequest = 1;
    if (has_battlepingrequest()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->battlepingrequest());
    }

  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void BattlePingRequest::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const BattlePingRequest*>(&from));
}

void BattlePingRequest::MergeFrom(const BattlePingRequest& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_battlepingrequest()) {
      mutable_battlepingrequest()->::message::HeartbeatRequest::MergeFrom(from.battlepingrequest());
    }
  }
}

void BattlePingRequest::CopyFrom(const BattlePingRequest& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool BattlePingRequest::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  return true;
}

void BattlePingRequest::Swap(BattlePingRequest* other) {
  if (other != this) {
    std::swap(battlepingrequest_, other->battlepingrequest_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string BattlePingRequest::GetTypeName() const {
  return "message.BattlePingRequest";
}


// ===================================================================

#ifndef _MSC_VER
const int BattlePingResponse::kBattlePingResponseFieldNumber;
#endif  // !_MSC_VER

BattlePingResponse::BattlePingResponse()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void BattlePingResponse::InitAsDefaultInstance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  battlepingresponse_ = const_cast< ::message::HeartbeatResponse*>(
      ::message::HeartbeatResponse::internal_default_instance());
#else
  battlepingresponse_ = const_cast< ::message::HeartbeatResponse*>(&::message::HeartbeatResponse::default_instance());
#endif
}

BattlePingResponse::BattlePingResponse(const BattlePingResponse& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void BattlePingResponse::SharedCtor() {
  _cached_size_ = 0;
  battlepingresponse_ = NULL;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

BattlePingResponse::~BattlePingResponse() {
  SharedDtor();
}

void BattlePingResponse::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
    delete battlepingresponse_;
  }
}

void BattlePingResponse::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const BattlePingResponse& BattlePingResponse::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_BattlePing_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_BattlePing_2eproto();
#endif
  return *default_instance_;
}

BattlePingResponse* BattlePingResponse::default_instance_ = NULL;

BattlePingResponse* BattlePingResponse::New() const {
  return new BattlePingResponse;
}

void BattlePingResponse::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_battlepingresponse()) {
      if (battlepingresponse_ != NULL) battlepingresponse_->::message::HeartbeatResponse::Clear();
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool BattlePingResponse::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required .message.HeartbeatResponse battlePingResponse = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_battlepingresponse()));
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

void BattlePingResponse::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required .message.HeartbeatResponse battlePingResponse = 1;
  if (has_battlepingresponse()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      1, this->battlepingresponse(), output);
  }

}

int BattlePingResponse::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required .message.HeartbeatResponse battlePingResponse = 1;
    if (has_battlepingresponse()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->battlepingresponse());
    }

  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void BattlePingResponse::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const BattlePingResponse*>(&from));
}

void BattlePingResponse::MergeFrom(const BattlePingResponse& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_battlepingresponse()) {
      mutable_battlepingresponse()->::message::HeartbeatResponse::MergeFrom(from.battlepingresponse());
    }
  }
}

void BattlePingResponse::CopyFrom(const BattlePingResponse& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool BattlePingResponse::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  if (has_battlepingresponse()) {
    if (!this->battlepingresponse().IsInitialized()) return false;
  }
  return true;
}

void BattlePingResponse::Swap(BattlePingResponse* other) {
  if (other != this) {
    std::swap(battlepingresponse_, other->battlepingresponse_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string BattlePingResponse::GetTypeName() const {
  return "message.BattlePingResponse";
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace message

// @@protoc_insertion_point(global_scope)
