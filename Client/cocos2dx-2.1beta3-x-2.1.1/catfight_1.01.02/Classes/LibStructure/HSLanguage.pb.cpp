// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: HSLanguage.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "HSLanguage.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
// @@protoc_insertion_point(includes)

namespace message {

void protobuf_ShutdownFile_HSLanguage_2eproto() {
  delete LanguageData::default_instance_;
  delete LanguageData_Language::default_instance_;
  delete LanguageData_Statement::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_HSLanguage_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_HSLanguage_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  LanguageData::default_instance_ = new LanguageData();
  LanguageData_Language::default_instance_ = new LanguageData_Language();
  LanguageData_Statement::default_instance_ = new LanguageData_Statement();
  LanguageData::default_instance_->InitAsDefaultInstance();
  LanguageData_Language::default_instance_->InitAsDefaultInstance();
  LanguageData_Statement::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_HSLanguage_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_HSLanguage_2eproto_once_);
void protobuf_AddDesc_HSLanguage_2eproto() {
  ::google::protobuf::::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_HSLanguage_2eproto_once_,
                 &protobuf_AddDesc_HSLanguage_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_HSLanguage_2eproto {
  StaticDescriptorInitializer_HSLanguage_2eproto() {
    protobuf_AddDesc_HSLanguage_2eproto();
  }
} static_descriptor_initializer_HSLanguage_2eproto_;
#endif

// ===================================================================

#ifndef _MSC_VER
const int LanguageData_Language::kKeyFieldNumber;
const int LanguageData_Language::kStatementFieldNumber;
#endif  // !_MSC_VER

LanguageData_Language::LanguageData_Language()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void LanguageData_Language::InitAsDefaultInstance() {
}

LanguageData_Language::LanguageData_Language(const LanguageData_Language& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void LanguageData_Language::SharedCtor() {
  _cached_size_ = 0;
  key_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

LanguageData_Language::~LanguageData_Language() {
  SharedDtor();
}

void LanguageData_Language::SharedDtor() {
  if (key_ != &::google::protobuf::internal::kEmptyString) {
    delete key_;
  }
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void LanguageData_Language::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const LanguageData_Language& LanguageData_Language::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_HSLanguage_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_HSLanguage_2eproto();
#endif
  return *default_instance_;
}

LanguageData_Language* LanguageData_Language::default_instance_ = NULL;

LanguageData_Language* LanguageData_Language::New() const {
  return new LanguageData_Language;
}

void LanguageData_Language::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_key()) {
      if (key_ != &::google::protobuf::internal::kEmptyString) {
        key_->clear();
      }
    }
  }
  statement_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool LanguageData_Language::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required string key = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_key()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_statement;
        break;
      }

      // repeated .message.LanguageData.Statement statement = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_statement:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_statement()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_statement;
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

void LanguageData_Language::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required string key = 1;
  if (has_key()) {
    ::google::protobuf::internal::WireFormatLite::WriteString(
      1, this->key(), output);
  }

  // repeated .message.LanguageData.Statement statement = 2;
  for (int i = 0; i < this->statement_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      2, this->statement(i), output);
  }

}

int LanguageData_Language::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required string key = 1;
    if (has_key()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->key());
    }

  }
  // repeated .message.LanguageData.Statement statement = 2;
  total_size += 1 * this->statement_size();
  for (int i = 0; i < this->statement_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->statement(i));
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void LanguageData_Language::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const LanguageData_Language*>(&from));
}

void LanguageData_Language::MergeFrom(const LanguageData_Language& from) {
  GOOGLE_CHECK_NE(&from, this);
  statement_.MergeFrom(from.statement_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_key()) {
      set_key(from.key());
    }
  }
}

void LanguageData_Language::CopyFrom(const LanguageData_Language& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LanguageData_Language::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  for (int i = 0; i < statement_size(); i++) {
    if (!this->statement(i).IsInitialized()) return false;
  }
  return true;
}

void LanguageData_Language::Swap(LanguageData_Language* other) {
  if (other != this) {
    std::swap(key_, other->key_);
    statement_.Swap(&other->statement_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string LanguageData_Language::GetTypeName() const {
  return "message.LanguageData.Language";
}


// -------------------------------------------------------------------

#ifndef _MSC_VER
const int LanguageData_Statement::kCountryFieldNumber;
const int LanguageData_Statement::kTalkFieldNumber;
#endif  // !_MSC_VER

LanguageData_Statement::LanguageData_Statement()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void LanguageData_Statement::InitAsDefaultInstance() {
}

LanguageData_Statement::LanguageData_Statement(const LanguageData_Statement& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void LanguageData_Statement::SharedCtor() {
  _cached_size_ = 0;
  country_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  talk_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

LanguageData_Statement::~LanguageData_Statement() {
  SharedDtor();
}

void LanguageData_Statement::SharedDtor() {
  if (country_ != &::google::protobuf::internal::kEmptyString) {
    delete country_;
  }
  if (talk_ != &::google::protobuf::internal::kEmptyString) {
    delete talk_;
  }
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void LanguageData_Statement::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const LanguageData_Statement& LanguageData_Statement::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_HSLanguage_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_HSLanguage_2eproto();
#endif
  return *default_instance_;
}

LanguageData_Statement* LanguageData_Statement::default_instance_ = NULL;

LanguageData_Statement* LanguageData_Statement::New() const {
  return new LanguageData_Statement;
}

void LanguageData_Statement::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_country()) {
      if (country_ != &::google::protobuf::internal::kEmptyString) {
        country_->clear();
      }
    }
    if (has_talk()) {
      if (talk_ != &::google::protobuf::internal::kEmptyString) {
        talk_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool LanguageData_Statement::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required string country = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_country()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_talk;
        break;
      }

      // optional string talk = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_talk:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_talk()));
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

void LanguageData_Statement::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required string country = 1;
  if (has_country()) {
    ::google::protobuf::internal::WireFormatLite::WriteString(
      1, this->country(), output);
  }

  // optional string talk = 2;
  if (has_talk()) {
    ::google::protobuf::internal::WireFormatLite::WriteString(
      2, this->talk(), output);
  }

}

int LanguageData_Statement::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required string country = 1;
    if (has_country()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->country());
    }

    // optional string talk = 2;
    if (has_talk()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->talk());
    }

  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void LanguageData_Statement::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const LanguageData_Statement*>(&from));
}

void LanguageData_Statement::MergeFrom(const LanguageData_Statement& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_country()) {
      set_country(from.country());
    }
    if (from.has_talk()) {
      set_talk(from.talk());
    }
  }
}

void LanguageData_Statement::CopyFrom(const LanguageData_Statement& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LanguageData_Statement::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  return true;
}

void LanguageData_Statement::Swap(LanguageData_Statement* other) {
  if (other != this) {
    std::swap(country_, other->country_);
    std::swap(talk_, other->talk_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string LanguageData_Statement::GetTypeName() const {
  return "message.LanguageData.Statement";
}


// -------------------------------------------------------------------

#ifndef _MSC_VER
const int LanguageData::kLanguageFieldNumber;
#endif  // !_MSC_VER

LanguageData::LanguageData()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void LanguageData::InitAsDefaultInstance() {
}

LanguageData::LanguageData(const LanguageData& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void LanguageData::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

LanguageData::~LanguageData() {
  SharedDtor();
}

void LanguageData::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void LanguageData::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const LanguageData& LanguageData::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_HSLanguage_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_HSLanguage_2eproto();
#endif
  return *default_instance_;
}

LanguageData* LanguageData::default_instance_ = NULL;

LanguageData* LanguageData::New() const {
  return new LanguageData;
}

void LanguageData::Clear() {
  language_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool LanguageData::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .message.LanguageData.Language language = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_language:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_language()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(10)) goto parse_language;
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

void LanguageData::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // repeated .message.LanguageData.Language language = 1;
  for (int i = 0; i < this->language_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      1, this->language(i), output);
  }

}

int LanguageData::ByteSize() const {
  int total_size = 0;

  // repeated .message.LanguageData.Language language = 1;
  total_size += 1 * this->language_size();
  for (int i = 0; i < this->language_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->language(i));
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void LanguageData::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const LanguageData*>(&from));
}

void LanguageData::MergeFrom(const LanguageData& from) {
  GOOGLE_CHECK_NE(&from, this);
  language_.MergeFrom(from.language_);
}

void LanguageData::CopyFrom(const LanguageData& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LanguageData::IsInitialized() const {

  for (int i = 0; i < language_size(); i++) {
    if (!this->language(i).IsInitialized()) return false;
  }
  return true;
}

void LanguageData::Swap(LanguageData* other) {
  if (other != this) {
    language_.Swap(&other->language_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string LanguageData::GetTypeName() const {
  return "message.LanguageData";
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace message

// @@protoc_insertion_point(global_scope)
