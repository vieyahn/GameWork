// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: BuyGold.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "BuyGold.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
// @@protoc_insertion_point(includes)

namespace message {

void protobuf_ShutdownFile_BuyGold_2eproto() {
  delete BuyGold::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_BuyGold_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_BuyGold_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  BuyGold::default_instance_ = new BuyGold();
  BuyGold::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_BuyGold_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_BuyGold_2eproto_once_);
void protobuf_AddDesc_BuyGold_2eproto() {
  ::google::protobuf::::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_BuyGold_2eproto_once_,
                 &protobuf_AddDesc_BuyGold_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_BuyGold_2eproto {
  StaticDescriptorInitializer_BuyGold_2eproto() {
    protobuf_AddDesc_BuyGold_2eproto();
  }
} static_descriptor_initializer_BuyGold_2eproto_;
#endif

// ===================================================================

#ifndef _MSC_VER
const int BuyGold::kIdFieldNumber;
const int BuyGold::kNameFieldNumber;
const int BuyGold::kDescribFieldNumber;
const int BuyGold::kGoldNumberFieldNumber;
const int BuyGold::kMoneyFieldNumber;
const int BuyGold::kLocalNameFieldNumber;
#endif  // !_MSC_VER

BuyGold::BuyGold()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void BuyGold::InitAsDefaultInstance() {
}

BuyGold::BuyGold(const BuyGold& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void BuyGold::SharedCtor() {
  _cached_size_ = 0;
  id_ = 0u;
  name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  describ_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  gold_number_ = 0u;
  money_ = 0;
  localname_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

BuyGold::~BuyGold() {
  SharedDtor();
}

void BuyGold::SharedDtor() {
  if (name_ != &::google::protobuf::internal::kEmptyString) {
    delete name_;
  }
  if (describ_ != &::google::protobuf::internal::kEmptyString) {
    delete describ_;
  }
  if (localname_ != &::google::protobuf::internal::kEmptyString) {
    delete localname_;
  }
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void BuyGold::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const BuyGold& BuyGold::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_BuyGold_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_BuyGold_2eproto();
#endif
  return *default_instance_;
}

BuyGold* BuyGold::default_instance_ = NULL;

BuyGold* BuyGold::New() const {
  return new BuyGold;
}

void BuyGold::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    id_ = 0u;
    if (has_name()) {
      if (name_ != &::google::protobuf::internal::kEmptyString) {
        name_->clear();
      }
    }
    if (has_describ()) {
      if (describ_ != &::google::protobuf::internal::kEmptyString) {
        describ_->clear();
      }
    }
    gold_number_ = 0u;
    money_ = 0;
    if (has_localname()) {
      if (localname_ != &::google::protobuf::internal::kEmptyString) {
        localname_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool BuyGold::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional uint32 id = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &id_)));
          set_has_id();
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
        if (input->ExpectTag(26)) goto parse_describ;
        break;
      }

      // optional string describ = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_describ:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_describ()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(32)) goto parse_gold_Number;
        break;
      }

      // optional uint32 gold_Number = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_gold_Number:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &gold_number_)));
          set_has_gold_number();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(40)) goto parse_money;
        break;
      }

      // optional int32 money = 5;
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_money:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &money_)));
          set_has_money();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(50)) goto parse_localName;
        break;
      }

      // optional string localName = 6;
      case 6: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_localName:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_localname()));
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

void BuyGold::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional uint32 id = 1;
  if (has_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->id(), output);
  }

  // optional string name = 2;
  if (has_name()) {
    ::google::protobuf::internal::WireFormatLite::WriteString(
      2, this->name(), output);
  }

  // optional string describ = 3;
  if (has_describ()) {
    ::google::protobuf::internal::WireFormatLite::WriteString(
      3, this->describ(), output);
  }

  // optional uint32 gold_Number = 4;
  if (has_gold_number()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(4, this->gold_number(), output);
  }

  // optional int32 money = 5;
  if (has_money()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(5, this->money(), output);
  }

  // optional string localName = 6;
  if (has_localname()) {
    ::google::protobuf::internal::WireFormatLite::WriteString(
      6, this->localname(), output);
  }

}

int BuyGold::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional uint32 id = 1;
    if (has_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->id());
    }

    // optional string name = 2;
    if (has_name()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->name());
    }

    // optional string describ = 3;
    if (has_describ()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->describ());
    }

    // optional uint32 gold_Number = 4;
    if (has_gold_number()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->gold_number());
    }

    // optional int32 money = 5;
    if (has_money()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->money());
    }

    // optional string localName = 6;
    if (has_localname()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->localname());
    }

  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void BuyGold::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const BuyGold*>(&from));
}

void BuyGold::MergeFrom(const BuyGold& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_id()) {
      set_id(from.id());
    }
    if (from.has_name()) {
      set_name(from.name());
    }
    if (from.has_describ()) {
      set_describ(from.describ());
    }
    if (from.has_gold_number()) {
      set_gold_number(from.gold_number());
    }
    if (from.has_money()) {
      set_money(from.money());
    }
    if (from.has_localname()) {
      set_localname(from.localname());
    }
  }
}

void BuyGold::CopyFrom(const BuyGold& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool BuyGold::IsInitialized() const {

  return true;
}

void BuyGold::Swap(BuyGold* other) {
  if (other != this) {
    std::swap(id_, other->id_);
    std::swap(name_, other->name_);
    std::swap(describ_, other->describ_);
    std::swap(gold_number_, other->gold_number_);
    std::swap(money_, other->money_);
    std::swap(localname_, other->localname_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string BuyGold::GetTypeName() const {
  return "message.BuyGold";
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace message

// @@protoc_insertion_point(global_scope)
