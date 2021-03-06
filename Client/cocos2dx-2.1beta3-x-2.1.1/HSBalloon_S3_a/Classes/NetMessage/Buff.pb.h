// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Buff.proto

#ifndef PROTOBUF_Buff_2eproto__INCLUDED
#define PROTOBUF_Buff_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message_lite.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include "PropInfo.pb.h"
// @@protoc_insertion_point(includes)

namespace message {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_Buff_2eproto();
void protobuf_AssignDesc_Buff_2eproto();
void protobuf_ShutdownFile_Buff_2eproto();

class NotifyChangeBuff;

// ===================================================================

class NotifyChangeBuff : public ::google::protobuf::MessageLite {
 public:
  NotifyChangeBuff();
  virtual ~NotifyChangeBuff();

  NotifyChangeBuff(const NotifyChangeBuff& from);

  inline NotifyChangeBuff& operator=(const NotifyChangeBuff& from) {
    CopyFrom(from);
    return *this;
  }

  static const NotifyChangeBuff& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const NotifyChangeBuff* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(NotifyChangeBuff* other);

  // implements Message ----------------------------------------------

  NotifyChangeBuff* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const NotifyChangeBuff& from);
  void MergeFrom(const NotifyChangeBuff& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::std::string GetTypeName() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required string targetUid = 1;
  inline bool has_targetuid() const;
  inline void clear_targetuid();
  static const int kTargetUidFieldNumber = 1;
  inline const ::std::string& targetuid() const;
  inline void set_targetuid(const ::std::string& value);
  inline void set_targetuid(const char* value);
  inline void set_targetuid(const char* value, size_t size);
  inline ::std::string* mutable_targetuid();
  inline ::std::string* release_targetuid();
  inline void set_allocated_targetuid(::std::string* targetuid);

  // required string attacker = 2;
  inline bool has_attacker() const;
  inline void clear_attacker();
  static const int kAttackerFieldNumber = 2;
  inline const ::std::string& attacker() const;
  inline void set_attacker(const ::std::string& value);
  inline void set_attacker(const char* value);
  inline void set_attacker(const char* value, size_t size);
  inline ::std::string* mutable_attacker();
  inline ::std::string* release_attacker();
  inline void set_allocated_attacker(::std::string* attacker);

  // required uint32 propId = 3;
  inline bool has_propid() const;
  inline void clear_propid();
  static const int kPropIdFieldNumber = 3;
  inline ::google::protobuf::uint32 propid() const;
  inline void set_propid(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:message.NotifyChangeBuff)
 private:
  inline void set_has_targetuid();
  inline void clear_has_targetuid();
  inline void set_has_attacker();
  inline void clear_has_attacker();
  inline void set_has_propid();
  inline void clear_has_propid();

  ::std::string* targetuid_;
  ::std::string* attacker_;
  ::google::protobuf::uint32 propid_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_Buff_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_Buff_2eproto();
  #endif
  friend void protobuf_AssignDesc_Buff_2eproto();
  friend void protobuf_ShutdownFile_Buff_2eproto();

  void InitAsDefaultInstance();
  static NotifyChangeBuff* default_instance_;
};
// ===================================================================


// ===================================================================

// NotifyChangeBuff

// required string targetUid = 1;
inline bool NotifyChangeBuff::has_targetuid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void NotifyChangeBuff::set_has_targetuid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void NotifyChangeBuff::clear_has_targetuid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void NotifyChangeBuff::clear_targetuid() {
  if (targetuid_ != &::google::protobuf::internal::kEmptyString) {
    targetuid_->clear();
  }
  clear_has_targetuid();
}
inline const ::std::string& NotifyChangeBuff::targetuid() const {
  return *targetuid_;
}
inline void NotifyChangeBuff::set_targetuid(const ::std::string& value) {
  set_has_targetuid();
  if (targetuid_ == &::google::protobuf::internal::kEmptyString) {
    targetuid_ = new ::std::string;
  }
  targetuid_->assign(value);
}
inline void NotifyChangeBuff::set_targetuid(const char* value) {
  set_has_targetuid();
  if (targetuid_ == &::google::protobuf::internal::kEmptyString) {
    targetuid_ = new ::std::string;
  }
  targetuid_->assign(value);
}
inline void NotifyChangeBuff::set_targetuid(const char* value, size_t size) {
  set_has_targetuid();
  if (targetuid_ == &::google::protobuf::internal::kEmptyString) {
    targetuid_ = new ::std::string;
  }
  targetuid_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* NotifyChangeBuff::mutable_targetuid() {
  set_has_targetuid();
  if (targetuid_ == &::google::protobuf::internal::kEmptyString) {
    targetuid_ = new ::std::string;
  }
  return targetuid_;
}
inline ::std::string* NotifyChangeBuff::release_targetuid() {
  clear_has_targetuid();
  if (targetuid_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = targetuid_;
    targetuid_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void NotifyChangeBuff::set_allocated_targetuid(::std::string* targetuid) {
  if (targetuid_ != &::google::protobuf::internal::kEmptyString) {
    delete targetuid_;
  }
  if (targetuid) {
    set_has_targetuid();
    targetuid_ = targetuid;
  } else {
    clear_has_targetuid();
    targetuid_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// required string attacker = 2;
inline bool NotifyChangeBuff::has_attacker() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void NotifyChangeBuff::set_has_attacker() {
  _has_bits_[0] |= 0x00000002u;
}
inline void NotifyChangeBuff::clear_has_attacker() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void NotifyChangeBuff::clear_attacker() {
  if (attacker_ != &::google::protobuf::internal::kEmptyString) {
    attacker_->clear();
  }
  clear_has_attacker();
}
inline const ::std::string& NotifyChangeBuff::attacker() const {
  return *attacker_;
}
inline void NotifyChangeBuff::set_attacker(const ::std::string& value) {
  set_has_attacker();
  if (attacker_ == &::google::protobuf::internal::kEmptyString) {
    attacker_ = new ::std::string;
  }
  attacker_->assign(value);
}
inline void NotifyChangeBuff::set_attacker(const char* value) {
  set_has_attacker();
  if (attacker_ == &::google::protobuf::internal::kEmptyString) {
    attacker_ = new ::std::string;
  }
  attacker_->assign(value);
}
inline void NotifyChangeBuff::set_attacker(const char* value, size_t size) {
  set_has_attacker();
  if (attacker_ == &::google::protobuf::internal::kEmptyString) {
    attacker_ = new ::std::string;
  }
  attacker_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* NotifyChangeBuff::mutable_attacker() {
  set_has_attacker();
  if (attacker_ == &::google::protobuf::internal::kEmptyString) {
    attacker_ = new ::std::string;
  }
  return attacker_;
}
inline ::std::string* NotifyChangeBuff::release_attacker() {
  clear_has_attacker();
  if (attacker_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = attacker_;
    attacker_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void NotifyChangeBuff::set_allocated_attacker(::std::string* attacker) {
  if (attacker_ != &::google::protobuf::internal::kEmptyString) {
    delete attacker_;
  }
  if (attacker) {
    set_has_attacker();
    attacker_ = attacker;
  } else {
    clear_has_attacker();
    attacker_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// required uint32 propId = 3;
inline bool NotifyChangeBuff::has_propid() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void NotifyChangeBuff::set_has_propid() {
  _has_bits_[0] |= 0x00000004u;
}
inline void NotifyChangeBuff::clear_has_propid() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void NotifyChangeBuff::clear_propid() {
  propid_ = 0u;
  clear_has_propid();
}
inline ::google::protobuf::uint32 NotifyChangeBuff::propid() const {
  return propid_;
}
inline void NotifyChangeBuff::set_propid(::google::protobuf::uint32 value) {
  set_has_propid();
  propid_ = value;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace message

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_Buff_2eproto__INCLUDED
