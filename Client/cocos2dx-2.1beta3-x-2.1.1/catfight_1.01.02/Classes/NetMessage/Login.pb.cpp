// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Login.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "Login.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
// @@protoc_insertion_point(includes)

namespace message {

void protobuf_ShutdownFile_Login_2eproto() {
  delete LoginRequest::default_instance_;
  delete LoginResponse::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_Login_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_Login_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  ::message::protobuf_AddDesc_Address_2eproto();
  ::message::protobuf_AddDesc_DailyRewardSystem_2eproto();
  LoginRequest::default_instance_ = new LoginRequest();
  LoginResponse::default_instance_ = new LoginResponse();
  LoginRequest::default_instance_->InitAsDefaultInstance();
  LoginResponse::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_Login_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_Login_2eproto_once_);
void protobuf_AddDesc_Login_2eproto() {
  ::google::protobuf::::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_Login_2eproto_once_,
                 &protobuf_AddDesc_Login_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_Login_2eproto {
  StaticDescriptorInitializer_Login_2eproto() {
    protobuf_AddDesc_Login_2eproto();
  }
} static_descriptor_initializer_Login_2eproto_;
#endif

// ===================================================================

#ifndef _MSC_VER
const int LoginRequest::kWbUUIDFieldNumber;
const int LoginRequest::kChannelFieldNumber;
const int LoginRequest::kVersionFieldNumber;
#endif  // !_MSC_VER

LoginRequest::LoginRequest()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void LoginRequest::InitAsDefaultInstance() {
}

LoginRequest::LoginRequest(const LoginRequest& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void LoginRequest::SharedCtor() {
  _cached_size_ = 0;
  wb_uuid_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  channel_ = 0u;
  version_ = 0u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

LoginRequest::~LoginRequest() {
  SharedDtor();
}

void LoginRequest::SharedDtor() {
  if (wb_uuid_ != &::google::protobuf::internal::kEmptyString) {
    delete wb_uuid_;
  }
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void LoginRequest::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const LoginRequest& LoginRequest::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_Login_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_Login_2eproto();
#endif
  return *default_instance_;
}

LoginRequest* LoginRequest::default_instance_ = NULL;

LoginRequest* LoginRequest::New() const {
  return new LoginRequest;
}

void LoginRequest::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_wb_uuid()) {
      if (wb_uuid_ != &::google::protobuf::internal::kEmptyString) {
        wb_uuid_->clear();
      }
    }
    channel_ = 0u;
    version_ = 0u;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool LoginRequest::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string wb_UUID = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_wb_uuid()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_channel;
        break;
      }

      // optional uint32 channel = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_channel:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &channel_)));
          set_has_channel();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_version;
        break;
      }

      // optional uint32 version = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_version:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &version_)));
          set_has_version();
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

void LoginRequest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional string wb_UUID = 1;
  if (has_wb_uuid()) {
    ::google::protobuf::internal::WireFormatLite::WriteString(
      1, this->wb_uuid(), output);
  }

  // optional uint32 channel = 2;
  if (has_channel()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->channel(), output);
  }

  // optional uint32 version = 3;
  if (has_version()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(3, this->version(), output);
  }

}

int LoginRequest::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional string wb_UUID = 1;
    if (has_wb_uuid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->wb_uuid());
    }

    // optional uint32 channel = 2;
    if (has_channel()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->channel());
    }

    // optional uint32 version = 3;
    if (has_version()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->version());
    }

  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void LoginRequest::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const LoginRequest*>(&from));
}

void LoginRequest::MergeFrom(const LoginRequest& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_wb_uuid()) {
      set_wb_uuid(from.wb_uuid());
    }
    if (from.has_channel()) {
      set_channel(from.channel());
    }
    if (from.has_version()) {
      set_version(from.version());
    }
  }
}

void LoginRequest::CopyFrom(const LoginRequest& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LoginRequest::IsInitialized() const {

  return true;
}

void LoginRequest::Swap(LoginRequest* other) {
  if (other != this) {
    std::swap(wb_uuid_, other->wb_uuid_);
    std::swap(channel_, other->channel_);
    std::swap(version_, other->version_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string LoginRequest::GetTypeName() const {
  return "message.LoginRequest";
}


// ===================================================================

bool LoginResponse_LoginStatus_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
      return true;
    default:
      return false;
  }
}

#ifndef _MSC_VER
const LoginResponse_LoginStatus LoginResponse::LoginStatus_SUCCESS;
const LoginResponse_LoginStatus LoginResponse::LoginStatus_FAIL;
const LoginResponse_LoginStatus LoginResponse::LoginStatus_MIN;
const LoginResponse_LoginStatus LoginResponse::LoginStatus_MAX;
const int LoginResponse::LoginStatus_ARRAYSIZE;
#endif  // _MSC_VER
#ifndef _MSC_VER
const int LoginResponse::kStatusFieldNumber;
const int LoginResponse::kAddressFieldNumber;
const int LoginResponse::kDailyRewardDataFieldNumber;
const int LoginResponse::kOldUidFieldNumber;
const int LoginResponse::kVersionFieldNumber;
const int LoginResponse::kGameNameFieldNumber;
const int LoginResponse::kGameDownloadFieldNumber;
#endif  // !_MSC_VER

LoginResponse::LoginResponse()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void LoginResponse::InitAsDefaultInstance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  address_ = const_cast< ::message::NetAddress*>(
      ::message::NetAddress::internal_default_instance());
#else
  address_ = const_cast< ::message::NetAddress*>(&::message::NetAddress::default_instance());
#endif
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  dailyrewarddata_ = const_cast< ::message::DailyRewardSystemData*>(
      ::message::DailyRewardSystemData::internal_default_instance());
#else
  dailyrewarddata_ = const_cast< ::message::DailyRewardSystemData*>(&::message::DailyRewardSystemData::default_instance());
#endif
}

LoginResponse::LoginResponse(const LoginResponse& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void LoginResponse::SharedCtor() {
  _cached_size_ = 0;
  status_ = 1;
  address_ = NULL;
  dailyrewarddata_ = NULL;
  olduid_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  version_ = 0u;
  gamename_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  gamedownload_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

LoginResponse::~LoginResponse() {
  SharedDtor();
}

void LoginResponse::SharedDtor() {
  if (olduid_ != &::google::protobuf::internal::kEmptyString) {
    delete olduid_;
  }
  if (gamename_ != &::google::protobuf::internal::kEmptyString) {
    delete gamename_;
  }
  if (gamedownload_ != &::google::protobuf::internal::kEmptyString) {
    delete gamedownload_;
  }
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
    delete address_;
    delete dailyrewarddata_;
  }
}

void LoginResponse::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const LoginResponse& LoginResponse::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_Login_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_Login_2eproto();
#endif
  return *default_instance_;
}

LoginResponse* LoginResponse::default_instance_ = NULL;

LoginResponse* LoginResponse::New() const {
  return new LoginResponse;
}

void LoginResponse::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    status_ = 1;
    if (has_address()) {
      if (address_ != NULL) address_->::message::NetAddress::Clear();
    }
    if (has_dailyrewarddata()) {
      if (dailyrewarddata_ != NULL) dailyrewarddata_->::message::DailyRewardSystemData::Clear();
    }
    if (has_olduid()) {
      if (olduid_ != &::google::protobuf::internal::kEmptyString) {
        olduid_->clear();
      }
    }
    version_ = 0u;
    if (has_gamename()) {
      if (gamename_ != &::google::protobuf::internal::kEmptyString) {
        gamename_->clear();
      }
    }
    if (has_gamedownload()) {
      if (gamedownload_ != &::google::protobuf::internal::kEmptyString) {
        gamedownload_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool LoginResponse::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required .message.LoginResponse.LoginStatus status = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::message::LoginResponse_LoginStatus_IsValid(value)) {
            set_status(static_cast< ::message::LoginResponse_LoginStatus >(value));
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
        if (input->ExpectTag(26)) goto parse_dailyRewardData;
        break;
      }

      // optional .message.DailyRewardSystemData dailyRewardData = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_dailyRewardData:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_dailyrewarddata()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(34)) goto parse_oldUid;
        break;
      }

      // optional string oldUid = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_oldUid:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_olduid()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(40)) goto parse_version;
        break;
      }

      // optional uint32 version = 5;
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_version:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &version_)));
          set_has_version();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(50)) goto parse_gameName;
        break;
      }

      // optional string gameName = 6;
      case 6: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_gameName:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_gamename()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(58)) goto parse_gameDownload;
        break;
      }

      // optional string gameDownload = 7;
      case 7: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_gameDownload:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_gamedownload()));
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

void LoginResponse::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required .message.LoginResponse.LoginStatus status = 1;
  if (has_status()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->status(), output);
  }

  // optional .message.NetAddress address = 2;
  if (has_address()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      2, this->address(), output);
  }

  // optional .message.DailyRewardSystemData dailyRewardData = 3;
  if (has_dailyrewarddata()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      3, this->dailyrewarddata(), output);
  }

  // optional string oldUid = 4;
  if (has_olduid()) {
    ::google::protobuf::internal::WireFormatLite::WriteString(
      4, this->olduid(), output);
  }

  // optional uint32 version = 5;
  if (has_version()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(5, this->version(), output);
  }

  // optional string gameName = 6;
  if (has_gamename()) {
    ::google::protobuf::internal::WireFormatLite::WriteString(
      6, this->gamename(), output);
  }

  // optional string gameDownload = 7;
  if (has_gamedownload()) {
    ::google::protobuf::internal::WireFormatLite::WriteString(
      7, this->gamedownload(), output);
  }

}

int LoginResponse::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required .message.LoginResponse.LoginStatus status = 1;
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

    // optional .message.DailyRewardSystemData dailyRewardData = 3;
    if (has_dailyrewarddata()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->dailyrewarddata());
    }

    // optional string oldUid = 4;
    if (has_olduid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->olduid());
    }

    // optional uint32 version = 5;
    if (has_version()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->version());
    }

    // optional string gameName = 6;
    if (has_gamename()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->gamename());
    }

    // optional string gameDownload = 7;
    if (has_gamedownload()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->gamedownload());
    }

  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void LoginResponse::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const LoginResponse*>(&from));
}

void LoginResponse::MergeFrom(const LoginResponse& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_status()) {
      set_status(from.status());
    }
    if (from.has_address()) {
      mutable_address()->::message::NetAddress::MergeFrom(from.address());
    }
    if (from.has_dailyrewarddata()) {
      mutable_dailyrewarddata()->::message::DailyRewardSystemData::MergeFrom(from.dailyrewarddata());
    }
    if (from.has_olduid()) {
      set_olduid(from.olduid());
    }
    if (from.has_version()) {
      set_version(from.version());
    }
    if (from.has_gamename()) {
      set_gamename(from.gamename());
    }
    if (from.has_gamedownload()) {
      set_gamedownload(from.gamedownload());
    }
  }
}

void LoginResponse::CopyFrom(const LoginResponse& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LoginResponse::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  if (has_dailyrewarddata()) {
    if (!this->dailyrewarddata().IsInitialized()) return false;
  }
  return true;
}

void LoginResponse::Swap(LoginResponse* other) {
  if (other != this) {
    std::swap(status_, other->status_);
    std::swap(address_, other->address_);
    std::swap(dailyrewarddata_, other->dailyrewarddata_);
    std::swap(olduid_, other->olduid_);
    std::swap(version_, other->version_);
    std::swap(gamename_, other->gamename_);
    std::swap(gamedownload_, other->gamedownload_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string LoginResponse::GetTypeName() const {
  return "message.LoginResponse";
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace message

// @@protoc_insertion_point(global_scope)