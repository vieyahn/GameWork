// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: GamePing.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "GamePing.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
// @@protoc_insertion_point(includes)

namespace message {

void protobuf_ShutdownFile_GamePing_2eproto() {
  delete GamePingRequest::default_instance_;
  delete GamePingResponse::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_GamePing_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_GamePing_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  ::message::protobuf_AddDesc_Heartbeat_2eproto();
  GamePingRequest::default_instance_ = new GamePingRequest();
  GamePingResponse::default_instance_ = new GamePingResponse();
  GamePingRequest::default_instance_->InitAsDefaultInstance();
  GamePingResponse::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_GamePing_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_GamePing_2eproto_once_);
void protobuf_AddDesc_GamePing_2eproto() {
  ::google::protobuf::::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_GamePing_2eproto_once_,
                 &protobuf_AddDesc_GamePing_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_GamePing_2eproto {
  StaticDescriptorInitializer_GamePing_2eproto() {
    protobuf_AddDesc_GamePing_2eproto();
  }
} static_descriptor_initializer_GamePing_2eproto_;
#endif

// ===================================================================

#ifndef _MSC_VER
const int GamePingRequest::kGamePingRequestFieldNumber;
#endif  // !_MSC_VER

GamePingRequest::GamePingRequest()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void GamePingRequest::InitAsDefaultInstance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  gamepingrequest_ = const_cast< ::message::HeartbeatRequest*>(
      ::message::HeartbeatRequest::internal_default_instance());
#else
  gamepingrequest_ = const_cast< ::message::HeartbeatRequest*>(&::message::HeartbeatRequest::default_instance());
#endif
}

GamePingRequest::GamePingRequest(const GamePingRequest& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void GamePingRequest::SharedCtor() {
  _cached_size_ = 0;
  gamepingrequest_ = NULL;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

GamePingRequest::~GamePingRequest() {
  SharedDtor();
}

void GamePingRequest::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
    delete gamepingrequest_;
  }
}

void GamePingRequest::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const GamePingRequest& GamePingRequest::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_GamePing_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_GamePing_2eproto();
#endif
  return *default_instance_;
}

GamePingRequest* GamePingRequest::default_instance_ = NULL;

GamePingRequest* GamePingRequest::New() const {
  return new GamePingRequest;
}

void GamePingRequest::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_gamepingrequest()) {
      if (gamepingrequest_ != NULL) gamepingrequest_->::message::HeartbeatRequest::Clear();
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool GamePingRequest::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required .message.HeartbeatRequest gamePingRequest = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_gamepingrequest()));
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

void GamePingRequest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required .message.HeartbeatRequest gamePingRequest = 1;
  if (has_gamepingrequest()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      1, this->gamepingrequest(), output);
  }

}

int GamePingRequest::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required .message.HeartbeatRequest gamePingRequest = 1;
    if (has_gamepingrequest()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->gamepingrequest());
    }

  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void GamePingRequest::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const GamePingRequest*>(&from));
}

void GamePingRequest::MergeFrom(const GamePingRequest& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_gamepingrequest()) {
      mutable_gamepingrequest()->::message::HeartbeatRequest::MergeFrom(from.gamepingrequest());
    }
  }
}

void GamePingRequest::CopyFrom(const GamePingRequest& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GamePingRequest::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  return true;
}

void GamePingRequest::Swap(GamePingRequest* other) {
  if (other != this) {
    std::swap(gamepingrequest_, other->gamepingrequest_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string GamePingRequest::GetTypeName() const {
  return "message.GamePingRequest";
}


// ===================================================================

#ifndef _MSC_VER
const int GamePingResponse::kGamePingResponseFieldNumber;
#endif  // !_MSC_VER

GamePingResponse::GamePingResponse()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void GamePingResponse::InitAsDefaultInstance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  gamepingresponse_ = const_cast< ::message::HeartbeatResponse*>(
      ::message::HeartbeatResponse::internal_default_instance());
#else
  gamepingresponse_ = const_cast< ::message::HeartbeatResponse*>(&::message::HeartbeatResponse::default_instance());
#endif
}

GamePingResponse::GamePingResponse(const GamePingResponse& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void GamePingResponse::SharedCtor() {
  _cached_size_ = 0;
  gamepingresponse_ = NULL;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

GamePingResponse::~GamePingResponse() {
  SharedDtor();
}

void GamePingResponse::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
    delete gamepingresponse_;
  }
}

void GamePingResponse::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const GamePingResponse& GamePingResponse::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_GamePing_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_GamePing_2eproto();
#endif
  return *default_instance_;
}

GamePingResponse* GamePingResponse::default_instance_ = NULL;

GamePingResponse* GamePingResponse::New() const {
  return new GamePingResponse;
}

void GamePingResponse::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_gamepingresponse()) {
      if (gamepingresponse_ != NULL) gamepingresponse_->::message::HeartbeatResponse::Clear();
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool GamePingResponse::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required .message.HeartbeatResponse gamePingResponse = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_gamepingresponse()));
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

void GamePingResponse::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required .message.HeartbeatResponse gamePingResponse = 1;
  if (has_gamepingresponse()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      1, this->gamepingresponse(), output);
  }

}

int GamePingResponse::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required .message.HeartbeatResponse gamePingResponse = 1;
    if (has_gamepingresponse()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->gamepingresponse());
    }

  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void GamePingResponse::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const GamePingResponse*>(&from));
}

void GamePingResponse::MergeFrom(const GamePingResponse& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_gamepingresponse()) {
      mutable_gamepingresponse()->::message::HeartbeatResponse::MergeFrom(from.gamepingresponse());
    }
  }
}

void GamePingResponse::CopyFrom(const GamePingResponse& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GamePingResponse::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  if (has_gamepingresponse()) {
    if (!this->gamepingresponse().IsInitialized()) return false;
  }
  return true;
}

void GamePingResponse::Swap(GamePingResponse* other) {
  if (other != this) {
    std::swap(gamepingresponse_, other->gamepingresponse_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string GamePingResponse::GetTypeName() const {
  return "message.GamePingResponse";
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace message

// @@protoc_insertion_point(global_scope)
