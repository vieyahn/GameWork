// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: NotifyUserUpdate.proto

#ifndef PROTOBUF_NotifyUserUpdate_2eproto__INCLUDED
#define PROTOBUF_NotifyUserUpdate_2eproto__INCLUDED

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
void  protobuf_AddDesc_NotifyUserUpdate_2eproto();
void protobuf_AssignDesc_NotifyUserUpdate_2eproto();
void protobuf_ShutdownFile_NotifyUserUpdate_2eproto();

class NotifyUserUpdateRequest;
class NotifyUserUpdateResponse;

enum NotifyUserUpdateResponse_UpdateStatus {
  NotifyUserUpdateResponse_UpdateStatus_SUCCESS = 1,
  NotifyUserUpdateResponse_UpdateStatus_FAILED = 2
};
bool NotifyUserUpdateResponse_UpdateStatus_IsValid(int value);
const NotifyUserUpdateResponse_UpdateStatus NotifyUserUpdateResponse_UpdateStatus_UpdateStatus_MIN = NotifyUserUpdateResponse_UpdateStatus_SUCCESS;
const NotifyUserUpdateResponse_UpdateStatus NotifyUserUpdateResponse_UpdateStatus_UpdateStatus_MAX = NotifyUserUpdateResponse_UpdateStatus_FAILED;
const int NotifyUserUpdateResponse_UpdateStatus_UpdateStatus_ARRAYSIZE = NotifyUserUpdateResponse_UpdateStatus_UpdateStatus_MAX + 1;

// ===================================================================

class NotifyUserUpdateRequest : public ::google::protobuf::MessageLite {
 public:
  NotifyUserUpdateRequest();
  virtual ~NotifyUserUpdateRequest();

  NotifyUserUpdateRequest(const NotifyUserUpdateRequest& from);

  inline NotifyUserUpdateRequest& operator=(const NotifyUserUpdateRequest& from) {
    CopyFrom(from);
    return *this;
  }

  static const NotifyUserUpdateRequest& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const NotifyUserUpdateRequest* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(NotifyUserUpdateRequest* other);

  // implements Message ----------------------------------------------

  NotifyUserUpdateRequest* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const NotifyUserUpdateRequest& from);
  void MergeFrom(const NotifyUserUpdateRequest& from);
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

  // @@protoc_insertion_point(class_scope:message.NotifyUserUpdateRequest)
 private:
  inline void set_has_did();
  inline void clear_has_did();

  ::std::string* did_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_NotifyUserUpdate_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_NotifyUserUpdate_2eproto();
  #endif
  friend void protobuf_AssignDesc_NotifyUserUpdate_2eproto();
  friend void protobuf_ShutdownFile_NotifyUserUpdate_2eproto();

  void InitAsDefaultInstance();
  static NotifyUserUpdateRequest* default_instance_;
};
// -------------------------------------------------------------------

class NotifyUserUpdateResponse : public ::google::protobuf::MessageLite {
 public:
  NotifyUserUpdateResponse();
  virtual ~NotifyUserUpdateResponse();

  NotifyUserUpdateResponse(const NotifyUserUpdateResponse& from);

  inline NotifyUserUpdateResponse& operator=(const NotifyUserUpdateResponse& from) {
    CopyFrom(from);
    return *this;
  }

  static const NotifyUserUpdateResponse& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const NotifyUserUpdateResponse* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(NotifyUserUpdateResponse* other);

  // implements Message ----------------------------------------------

  NotifyUserUpdateResponse* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const NotifyUserUpdateResponse& from);
  void MergeFrom(const NotifyUserUpdateResponse& from);
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

  typedef NotifyUserUpdateResponse_UpdateStatus UpdateStatus;
  static const UpdateStatus SUCCESS = NotifyUserUpdateResponse_UpdateStatus_SUCCESS;
  static const UpdateStatus FAILED = NotifyUserUpdateResponse_UpdateStatus_FAILED;
  static inline bool UpdateStatus_IsValid(int value) {
    return NotifyUserUpdateResponse_UpdateStatus_IsValid(value);
  }
  static const UpdateStatus UpdateStatus_MIN =
    NotifyUserUpdateResponse_UpdateStatus_UpdateStatus_MIN;
  static const UpdateStatus UpdateStatus_MAX =
    NotifyUserUpdateResponse_UpdateStatus_UpdateStatus_MAX;
  static const int UpdateStatus_ARRAYSIZE =
    NotifyUserUpdateResponse_UpdateStatus_UpdateStatus_ARRAYSIZE;

  // accessors -------------------------------------------------------

  // required .message.NotifyUserUpdateResponse.UpdateStatus status = 1;
  inline bool has_status() const;
  inline void clear_status();
  static const int kStatusFieldNumber = 1;
  inline ::message::NotifyUserUpdateResponse_UpdateStatus status() const;
  inline void set_status(::message::NotifyUserUpdateResponse_UpdateStatus value);

  // @@protoc_insertion_point(class_scope:message.NotifyUserUpdateResponse)
 private:
  inline void set_has_status();
  inline void clear_has_status();

  int status_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_NotifyUserUpdate_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_NotifyUserUpdate_2eproto();
  #endif
  friend void protobuf_AssignDesc_NotifyUserUpdate_2eproto();
  friend void protobuf_ShutdownFile_NotifyUserUpdate_2eproto();

  void InitAsDefaultInstance();
  static NotifyUserUpdateResponse* default_instance_;
};
// ===================================================================


// ===================================================================

// NotifyUserUpdateRequest

// required string did = 1;
inline bool NotifyUserUpdateRequest::has_did() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void NotifyUserUpdateRequest::set_has_did() {
  _has_bits_[0] |= 0x00000001u;
}
inline void NotifyUserUpdateRequest::clear_has_did() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void NotifyUserUpdateRequest::clear_did() {
  if (did_ != &::google::protobuf::internal::kEmptyString) {
    did_->clear();
  }
  clear_has_did();
}
inline const ::std::string& NotifyUserUpdateRequest::did() const {
  return *did_;
}
inline void NotifyUserUpdateRequest::set_did(const ::std::string& value) {
  set_has_did();
  if (did_ == &::google::protobuf::internal::kEmptyString) {
    did_ = new ::std::string;
  }
  did_->assign(value);
}
inline void NotifyUserUpdateRequest::set_did(const char* value) {
  set_has_did();
  if (did_ == &::google::protobuf::internal::kEmptyString) {
    did_ = new ::std::string;
  }
  did_->assign(value);
}
inline void NotifyUserUpdateRequest::set_did(const char* value, size_t size) {
  set_has_did();
  if (did_ == &::google::protobuf::internal::kEmptyString) {
    did_ = new ::std::string;
  }
  did_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* NotifyUserUpdateRequest::mutable_did() {
  set_has_did();
  if (did_ == &::google::protobuf::internal::kEmptyString) {
    did_ = new ::std::string;
  }
  return did_;
}
inline ::std::string* NotifyUserUpdateRequest::release_did() {
  clear_has_did();
  if (did_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = did_;
    did_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void NotifyUserUpdateRequest::set_allocated_did(::std::string* did) {
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

// -------------------------------------------------------------------

// NotifyUserUpdateResponse

// required .message.NotifyUserUpdateResponse.UpdateStatus status = 1;
inline bool NotifyUserUpdateResponse::has_status() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void NotifyUserUpdateResponse::set_has_status() {
  _has_bits_[0] |= 0x00000001u;
}
inline void NotifyUserUpdateResponse::clear_has_status() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void NotifyUserUpdateResponse::clear_status() {
  status_ = 1;
  clear_has_status();
}
inline ::message::NotifyUserUpdateResponse_UpdateStatus NotifyUserUpdateResponse::status() const {
  return static_cast< ::message::NotifyUserUpdateResponse_UpdateStatus >(status_);
}
inline void NotifyUserUpdateResponse::set_status(::message::NotifyUserUpdateResponse_UpdateStatus value) {
  assert(::message::NotifyUserUpdateResponse_UpdateStatus_IsValid(value));
  set_has_status();
  status_ = value;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace message

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_NotifyUserUpdate_2eproto__INCLUDED
