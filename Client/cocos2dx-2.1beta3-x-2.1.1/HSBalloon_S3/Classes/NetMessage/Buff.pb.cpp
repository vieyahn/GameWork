// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Buff.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "Buff.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
// @@protoc_insertion_point(includes)

namespace message {

void protobuf_ShutdownFile_Buff_2eproto() {
  delete NotifyChangeBuff::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_Buff_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_Buff_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  ::message::protobuf_AddDesc_PropInfo_2eproto();
  NotifyChangeBuff::default_instance_ = new NotifyChangeBuff();
  NotifyChangeBuff::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_Buff_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_Buff_2eproto_once_);
void protobuf_AddDesc_Buff_2eproto() {
  ::google::protobuf::::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_Buff_2eproto_once_,
                 &protobuf_AddDesc_Buff_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_Buff_2eproto {
  StaticDescriptorInitializer_Buff_2eproto() {
    protobuf_AddDesc_Buff_2eproto();
  }
} static_descriptor_initializer_Buff_2eproto_;
#endif

// ===================================================================

#ifndef _MSC_VER
const int NotifyChangeBuff::kTargetUidFieldNumber;
const int NotifyChangeBuff::kAttackerFieldNumber;
const int NotifyChangeBuff::kPropIdFieldNumber;
#endif  // !_MSC_VER

NotifyChangeBuff::NotifyChangeBuff()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void NotifyChangeBuff::InitAsDefaultInstance() {
}

NotifyChangeBuff::NotifyChangeBuff(const NotifyChangeBuff& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void NotifyChangeBuff::SharedCtor() {
  _cached_size_ = 0;
  targetuid_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  attacker_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  propid_ = 0u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

NotifyChangeBuff::~NotifyChangeBuff() {
  SharedDtor();
}

void NotifyChangeBuff::SharedDtor() {
  if (targetuid_ != &::google::protobuf::internal::kEmptyString) {
    delete targetuid_;
  }
  if (attacker_ != &::google::protobuf::internal::kEmptyString) {
    delete attacker_;
  }
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void NotifyChangeBuff::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const NotifyChangeBuff& NotifyChangeBuff::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_Buff_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_Buff_2eproto();
#endif
  return *default_instance_;
}

NotifyChangeBuff* NotifyChangeBuff::default_instance_ = NULL;

NotifyChangeBuff* NotifyChangeBuff::New() const {
  return new NotifyChangeBuff;
}

void NotifyChangeBuff::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_targetuid()) {
      if (targetuid_ != &::google::protobuf::internal::kEmptyString) {
        targetuid_->clear();
      }
    }
    if (has_attacker()) {
      if (attacker_ != &::google::protobuf::internal::kEmptyString) {
        attacker_->clear();
      }
    }
    propid_ = 0u;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool NotifyChangeBuff::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required string targetUid = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_targetuid()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_attacker;
        break;
      }

      // required string attacker = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_attacker:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_attacker()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_propId;
        break;
      }

      // required uint32 propId = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_propId:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &propid_)));
          set_has_propid();
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

void NotifyChangeBuff::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required string targetUid = 1;
  if (has_targetuid()) {
    ::google::protobuf::internal::WireFormatLite::WriteString(
      1, this->targetuid(), output);
  }

  // required string attacker = 2;
  if (has_attacker()) {
    ::google::protobuf::internal::WireFormatLite::WriteString(
      2, this->attacker(), output);
  }

  // required uint32 propId = 3;
  if (has_propid()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(3, this->propid(), output);
  }

}

int NotifyChangeBuff::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required string targetUid = 1;
    if (has_targetuid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->targetuid());
    }

    // required string attacker = 2;
    if (has_attacker()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->attacker());
    }

    // required uint32 propId = 3;
    if (has_propid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->propid());
    }

  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void NotifyChangeBuff::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const NotifyChangeBuff*>(&from));
}

void NotifyChangeBuff::MergeFrom(const NotifyChangeBuff& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_targetuid()) {
      set_targetuid(from.targetuid());
    }
    if (from.has_attacker()) {
      set_attacker(from.attacker());
    }
    if (from.has_propid()) {
      set_propid(from.propid());
    }
  }
}

void NotifyChangeBuff::CopyFrom(const NotifyChangeBuff& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool NotifyChangeBuff::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000007) != 0x00000007) return false;

  return true;
}

void NotifyChangeBuff::Swap(NotifyChangeBuff* other) {
  if (other != this) {
    std::swap(targetuid_, other->targetuid_);
    std::swap(attacker_, other->attacker_);
    std::swap(propid_, other->propid_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string NotifyChangeBuff::GetTypeName() const {
  return "message.NotifyChangeBuff";
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace message

// @@protoc_insertion_point(global_scope)
