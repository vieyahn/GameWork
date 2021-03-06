// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: KickOutDungoen.proto

#ifndef PROTOBUF_KickOutDungoen_2eproto__INCLUDED
#define PROTOBUF_KickOutDungoen_2eproto__INCLUDED

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
// @@protoc_insertion_point(includes)

namespace message {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_KickOutDungoen_2eproto();
void protobuf_AssignDesc_KickOutDungoen_2eproto();
void protobuf_ShutdownFile_KickOutDungoen_2eproto();

class NotifyKickedOutDungoen;

enum NotifyKickedOutDungoen_KickedOutCause {
  NotifyKickedOutDungoen_KickedOutCause_Gold_Coin_Shortage = 1,
  NotifyKickedOutDungoen_KickedOutCause_Time_Out = 2
};
bool NotifyKickedOutDungoen_KickedOutCause_IsValid(int value);
const NotifyKickedOutDungoen_KickedOutCause NotifyKickedOutDungoen_KickedOutCause_KickedOutCause_MIN = NotifyKickedOutDungoen_KickedOutCause_Gold_Coin_Shortage;
const NotifyKickedOutDungoen_KickedOutCause NotifyKickedOutDungoen_KickedOutCause_KickedOutCause_MAX = NotifyKickedOutDungoen_KickedOutCause_Time_Out;
const int NotifyKickedOutDungoen_KickedOutCause_KickedOutCause_ARRAYSIZE = NotifyKickedOutDungoen_KickedOutCause_KickedOutCause_MAX + 1;

// ===================================================================

class NotifyKickedOutDungoen : public ::google::protobuf::MessageLite {
 public:
  NotifyKickedOutDungoen();
  virtual ~NotifyKickedOutDungoen();

  NotifyKickedOutDungoen(const NotifyKickedOutDungoen& from);

  inline NotifyKickedOutDungoen& operator=(const NotifyKickedOutDungoen& from) {
    CopyFrom(from);
    return *this;
  }

  static const NotifyKickedOutDungoen& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const NotifyKickedOutDungoen* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(NotifyKickedOutDungoen* other);

  // implements Message ----------------------------------------------

  NotifyKickedOutDungoen* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const NotifyKickedOutDungoen& from);
  void MergeFrom(const NotifyKickedOutDungoen& from);
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

  typedef NotifyKickedOutDungoen_KickedOutCause KickedOutCause;
  static const KickedOutCause Gold_Coin_Shortage = NotifyKickedOutDungoen_KickedOutCause_Gold_Coin_Shortage;
  static const KickedOutCause Time_Out = NotifyKickedOutDungoen_KickedOutCause_Time_Out;
  static inline bool KickedOutCause_IsValid(int value) {
    return NotifyKickedOutDungoen_KickedOutCause_IsValid(value);
  }
  static const KickedOutCause KickedOutCause_MIN =
    NotifyKickedOutDungoen_KickedOutCause_KickedOutCause_MIN;
  static const KickedOutCause KickedOutCause_MAX =
    NotifyKickedOutDungoen_KickedOutCause_KickedOutCause_MAX;
  static const int KickedOutCause_ARRAYSIZE =
    NotifyKickedOutDungoen_KickedOutCause_KickedOutCause_ARRAYSIZE;

  // accessors -------------------------------------------------------

  // required string did = 1;
  inline bool has_did() const;
  inline void clear_did();
  static const int kDidFieldNumber = 1;
  inline const ::std::string& did() const;
  inline void set_did(const ::std::string& value);
  inline void set_did(const char* value);
  inline void set_did(const char* value, size_t size);
  inline ::std::string* mutable_did();
  inline ::std::string* release_did();
  inline void set_allocated_did(::std::string* did);

  // optional .message.NotifyKickedOutDungoen.KickedOutCause cause = 2;
  inline bool has_cause() const;
  inline void clear_cause();
  static const int kCauseFieldNumber = 2;
  inline ::message::NotifyKickedOutDungoen_KickedOutCause cause() const;
  inline void set_cause(::message::NotifyKickedOutDungoen_KickedOutCause value);

  // @@protoc_insertion_point(class_scope:message.NotifyKickedOutDungoen)
 private:
  inline void set_has_did();
  inline void clear_has_did();
  inline void set_has_cause();
  inline void clear_has_cause();

  ::std::string* did_;
  int cause_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_KickOutDungoen_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_KickOutDungoen_2eproto();
  #endif
  friend void protobuf_AssignDesc_KickOutDungoen_2eproto();
  friend void protobuf_ShutdownFile_KickOutDungoen_2eproto();

  void InitAsDefaultInstance();
  static NotifyKickedOutDungoen* default_instance_;
};
// ===================================================================


// ===================================================================

// NotifyKickedOutDungoen

// required string did = 1;
inline bool NotifyKickedOutDungoen::has_did() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void NotifyKickedOutDungoen::set_has_did() {
  _has_bits_[0] |= 0x00000001u;
}
inline void NotifyKickedOutDungoen::clear_has_did() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void NotifyKickedOutDungoen::clear_did() {
  if (did_ != &::google::protobuf::internal::kEmptyString) {
    did_->clear();
  }
  clear_has_did();
}
inline const ::std::string& NotifyKickedOutDungoen::did() const {
  return *did_;
}
inline void NotifyKickedOutDungoen::set_did(const ::std::string& value) {
  set_has_did();
  if (did_ == &::google::protobuf::internal::kEmptyString) {
    did_ = new ::std::string;
  }
  did_->assign(value);
}
inline void NotifyKickedOutDungoen::set_did(const char* value) {
  set_has_did();
  if (did_ == &::google::protobuf::internal::kEmptyString) {
    did_ = new ::std::string;
  }
  did_->assign(value);
}
inline void NotifyKickedOutDungoen::set_did(const char* value, size_t size) {
  set_has_did();
  if (did_ == &::google::protobuf::internal::kEmptyString) {
    did_ = new ::std::string;
  }
  did_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* NotifyKickedOutDungoen::mutable_did() {
  set_has_did();
  if (did_ == &::google::protobuf::internal::kEmptyString) {
    did_ = new ::std::string;
  }
  return did_;
}
inline ::std::string* NotifyKickedOutDungoen::release_did() {
  clear_has_did();
  if (did_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = did_;
    did_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void NotifyKickedOutDungoen::set_allocated_did(::std::string* did) {
  if (did_ != &::google::protobuf::internal::kEmptyString) {
    delete did_;
  }
  if (did) {
    set_has_did();
    did_ = did;
  } else {
    clear_has_did();
    did_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional .message.NotifyKickedOutDungoen.KickedOutCause cause = 2;
inline bool NotifyKickedOutDungoen::has_cause() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void NotifyKickedOutDungoen::set_has_cause() {
  _has_bits_[0] |= 0x00000002u;
}
inline void NotifyKickedOutDungoen::clear_has_cause() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void NotifyKickedOutDungoen::clear_cause() {
  cause_ = 1;
  clear_has_cause();
}
inline ::message::NotifyKickedOutDungoen_KickedOutCause NotifyKickedOutDungoen::cause() const {
  return static_cast< ::message::NotifyKickedOutDungoen_KickedOutCause >(cause_);
}
inline void NotifyKickedOutDungoen::set_cause(::message::NotifyKickedOutDungoen_KickedOutCause value) {
  assert(::message::NotifyKickedOutDungoen_KickedOutCause_IsValid(value));
  set_has_cause();
  cause_ = value;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace message

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_KickOutDungoen_2eproto__INCLUDED
