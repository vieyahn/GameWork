// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: GameBuyFigure.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "GameBuyFigure.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
// @@protoc_insertion_point(includes)

namespace message {

void protobuf_ShutdownFile_GameBuyFigure_2eproto() {
  delete GameBuyFigureRequest::default_instance_;
  delete GameBuyFigureResponse::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_GameBuyFigure_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_GameBuyFigure_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  GameBuyFigureRequest::default_instance_ = new GameBuyFigureRequest();
  GameBuyFigureResponse::default_instance_ = new GameBuyFigureResponse();
  GameBuyFigureRequest::default_instance_->InitAsDefaultInstance();
  GameBuyFigureResponse::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_GameBuyFigure_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_GameBuyFigure_2eproto_once_);
void protobuf_AddDesc_GameBuyFigure_2eproto() {
  ::google::protobuf::::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_GameBuyFigure_2eproto_once_,
                 &protobuf_AddDesc_GameBuyFigure_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_GameBuyFigure_2eproto {
  StaticDescriptorInitializer_GameBuyFigure_2eproto() {
    protobuf_AddDesc_GameBuyFigure_2eproto();
  }
} static_descriptor_initializer_GameBuyFigure_2eproto_;
#endif

// ===================================================================

#ifndef _MSC_VER
const int GameBuyFigureRequest::kFigureIdFieldNumber;
#endif  // !_MSC_VER

GameBuyFigureRequest::GameBuyFigureRequest()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void GameBuyFigureRequest::InitAsDefaultInstance() {
}

GameBuyFigureRequest::GameBuyFigureRequest(const GameBuyFigureRequest& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void GameBuyFigureRequest::SharedCtor() {
  _cached_size_ = 0;
  figureid_ = 0u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

GameBuyFigureRequest::~GameBuyFigureRequest() {
  SharedDtor();
}

void GameBuyFigureRequest::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void GameBuyFigureRequest::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const GameBuyFigureRequest& GameBuyFigureRequest::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_GameBuyFigure_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_GameBuyFigure_2eproto();
#endif
  return *default_instance_;
}

GameBuyFigureRequest* GameBuyFigureRequest::default_instance_ = NULL;

GameBuyFigureRequest* GameBuyFigureRequest::New() const {
  return new GameBuyFigureRequest;
}

void GameBuyFigureRequest::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    figureid_ = 0u;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool GameBuyFigureRequest::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required uint32 figureId = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &figureid_)));
          set_has_figureid();
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

void GameBuyFigureRequest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required uint32 figureId = 1;
  if (has_figureid()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->figureid(), output);
  }

}

int GameBuyFigureRequest::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required uint32 figureId = 1;
    if (has_figureid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->figureid());
    }

  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void GameBuyFigureRequest::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const GameBuyFigureRequest*>(&from));
}

void GameBuyFigureRequest::MergeFrom(const GameBuyFigureRequest& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_figureid()) {
      set_figureid(from.figureid());
    }
  }
}

void GameBuyFigureRequest::CopyFrom(const GameBuyFigureRequest& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GameBuyFigureRequest::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  return true;
}

void GameBuyFigureRequest::Swap(GameBuyFigureRequest* other) {
  if (other != this) {
    std::swap(figureid_, other->figureid_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string GameBuyFigureRequest::GetTypeName() const {
  return "message.GameBuyFigureRequest";
}


// ===================================================================

bool GameBuyFigureResponse_ResultState_IsValid(int value) {
  switch(value) {
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}

#ifndef _MSC_VER
const GameBuyFigureResponse_ResultState GameBuyFigureResponse::SUCCESS;
const GameBuyFigureResponse_ResultState GameBuyFigureResponse::FAIL;
const GameBuyFigureResponse_ResultState GameBuyFigureResponse::ResultState_MIN;
const GameBuyFigureResponse_ResultState GameBuyFigureResponse::ResultState_MAX;
const int GameBuyFigureResponse::ResultState_ARRAYSIZE;
#endif  // _MSC_VER
#ifndef _MSC_VER
const int GameBuyFigureResponse::kStateFieldNumber;
#endif  // !_MSC_VER

GameBuyFigureResponse::GameBuyFigureResponse()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void GameBuyFigureResponse::InitAsDefaultInstance() {
}

GameBuyFigureResponse::GameBuyFigureResponse(const GameBuyFigureResponse& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void GameBuyFigureResponse::SharedCtor() {
  _cached_size_ = 0;
  state_ = 1;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

GameBuyFigureResponse::~GameBuyFigureResponse() {
  SharedDtor();
}

void GameBuyFigureResponse::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void GameBuyFigureResponse::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const GameBuyFigureResponse& GameBuyFigureResponse::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_GameBuyFigure_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_GameBuyFigure_2eproto();
#endif
  return *default_instance_;
}

GameBuyFigureResponse* GameBuyFigureResponse::default_instance_ = NULL;

GameBuyFigureResponse* GameBuyFigureResponse::New() const {
  return new GameBuyFigureResponse;
}

void GameBuyFigureResponse::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    state_ = 1;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool GameBuyFigureResponse::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required .message.GameBuyFigureResponse.ResultState state = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::message::GameBuyFigureResponse_ResultState_IsValid(value)) {
            set_state(static_cast< ::message::GameBuyFigureResponse_ResultState >(value));
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

void GameBuyFigureResponse::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required .message.GameBuyFigureResponse.ResultState state = 1;
  if (has_state()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->state(), output);
  }

}

int GameBuyFigureResponse::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required .message.GameBuyFigureResponse.ResultState state = 1;
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

void GameBuyFigureResponse::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const GameBuyFigureResponse*>(&from));
}

void GameBuyFigureResponse::MergeFrom(const GameBuyFigureResponse& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_state()) {
      set_state(from.state());
    }
  }
}

void GameBuyFigureResponse::CopyFrom(const GameBuyFigureResponse& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GameBuyFigureResponse::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  return true;
}

void GameBuyFigureResponse::Swap(GameBuyFigureResponse* other) {
  if (other != this) {
    std::swap(state_, other->state_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string GameBuyFigureResponse::GetTypeName() const {
  return "message.GameBuyFigureResponse";
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace message

// @@protoc_insertion_point(global_scope)
