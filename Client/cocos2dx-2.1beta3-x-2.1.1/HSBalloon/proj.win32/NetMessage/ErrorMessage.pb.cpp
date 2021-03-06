// Generated by the protocol buffer compiler.  DO NOT EDIT!

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "ErrorMessage.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
// @@protoc_insertion_point(includes)

namespace message {

void protobuf_ShutdownFile_ErrorMessage_2eproto() {
  delete ErrorMessageInfo::default_instance_;
}

void protobuf_AddDesc_ErrorMessage_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ErrorMessageInfo::default_instance_ = new ErrorMessageInfo();
  ErrorMessageInfo::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_ErrorMessage_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_ErrorMessage_2eproto {
  StaticDescriptorInitializer_ErrorMessage_2eproto() {
    protobuf_AddDesc_ErrorMessage_2eproto();
  }
} static_descriptor_initializer_ErrorMessage_2eproto_;


// ===================================================================

#ifndef _MSC_VER
const int ErrorMessageInfo::kDescriptionFieldNumber;
#endif  // !_MSC_VER

ErrorMessageInfo::ErrorMessageInfo()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void ErrorMessageInfo::InitAsDefaultInstance() {
}

ErrorMessageInfo::ErrorMessageInfo(const ErrorMessageInfo& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void ErrorMessageInfo::SharedCtor() {
  _cached_size_ = 0;
  description_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

ErrorMessageInfo::~ErrorMessageInfo() {
  SharedDtor();
}

void ErrorMessageInfo::SharedDtor() {
  if (description_ != &::google::protobuf::internal::kEmptyString) {
    delete description_;
  }
  if (this != default_instance_) {
  }
}

void ErrorMessageInfo::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ErrorMessageInfo& ErrorMessageInfo::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_ErrorMessage_2eproto();  return *default_instance_;
}

ErrorMessageInfo* ErrorMessageInfo::default_instance_ = NULL;

ErrorMessageInfo* ErrorMessageInfo::New() const {
  return new ErrorMessageInfo;
}

void ErrorMessageInfo::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_description()) {
      if (description_ != &::google::protobuf::internal::kEmptyString) {
        description_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool ErrorMessageInfo::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string description = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_description()));
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

void ErrorMessageInfo::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional string description = 1;
  if (has_description()) {
    ::google::protobuf::internal::WireFormatLite::WriteString(
      1, this->description(), output);
  }
  
}

int ErrorMessageInfo::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional string description = 1;
    if (has_description()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->description());
    }
    
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ErrorMessageInfo::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const ErrorMessageInfo*>(&from));
}

void ErrorMessageInfo::MergeFrom(const ErrorMessageInfo& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_description()) {
      set_description(from.description());
    }
  }
}

void ErrorMessageInfo::CopyFrom(const ErrorMessageInfo& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ErrorMessageInfo::IsInitialized() const {
  
  return true;
}

void ErrorMessageInfo::Swap(ErrorMessageInfo* other) {
  if (other != this) {
    std::swap(description_, other->description_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string ErrorMessageInfo::GetTypeName() const {
  return "message.ErrorMessageInfo";
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace message

// @@protoc_insertion_point(global_scope)
