// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: BattleData.proto

#ifndef PROTOBUF_BattleData_2eproto__INCLUDED
#define PROTOBUF_BattleData_2eproto__INCLUDED

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
#include "BattleInfoData.pb.h"
// @@protoc_insertion_point(includes)

namespace message {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_BattleData_2eproto();
void protobuf_AssignDesc_BattleData_2eproto();
void protobuf_ShutdownFile_BattleData_2eproto();

class BattleDataRequest;
class BattleDataResponse;

// ===================================================================

class BattleDataRequest : public ::google::protobuf::MessageLite {
 public:
  BattleDataRequest();
  virtual ~BattleDataRequest();

  BattleDataRequest(const BattleDataRequest& from);

  inline BattleDataRequest& operator=(const BattleDataRequest& from) {
    CopyFrom(from);
    return *this;
  }

  static const BattleDataRequest& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const BattleDataRequest* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(BattleDataRequest* other);

  // implements Message ----------------------------------------------

  BattleDataRequest* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const BattleDataRequest& from);
  void MergeFrom(const BattleDataRequest& from);
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

  // required .message.BattleInfo battleInfo = 1;
  inline bool has_battleinfo() const;
  inline void clear_battleinfo();
  static const int kBattleInfoFieldNumber = 1;
  inline const ::message::BattleInfo& battleinfo() const;
  inline ::message::BattleInfo* mutable_battleinfo();
  inline ::message::BattleInfo* release_battleinfo();
  inline void set_allocated_battleinfo(::message::BattleInfo* battleinfo);

  // @@protoc_insertion_point(class_scope:message.BattleDataRequest)
 private:
  inline void set_has_battleinfo();
  inline void clear_has_battleinfo();

  ::message::BattleInfo* battleinfo_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_BattleData_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_BattleData_2eproto();
  #endif
  friend void protobuf_AssignDesc_BattleData_2eproto();
  friend void protobuf_ShutdownFile_BattleData_2eproto();

  void InitAsDefaultInstance();
  static BattleDataRequest* default_instance_;
};
// -------------------------------------------------------------------

class BattleDataResponse : public ::google::protobuf::MessageLite {
 public:
  BattleDataResponse();
  virtual ~BattleDataResponse();

  BattleDataResponse(const BattleDataResponse& from);

  inline BattleDataResponse& operator=(const BattleDataResponse& from) {
    CopyFrom(from);
    return *this;
  }

  static const BattleDataResponse& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const BattleDataResponse* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(BattleDataResponse* other);

  // implements Message ----------------------------------------------

  BattleDataResponse* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const BattleDataResponse& from);
  void MergeFrom(const BattleDataResponse& from);
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

  // optional .message.BattleInfo battleInfo = 1;
  inline bool has_battleinfo() const;
  inline void clear_battleinfo();
  static const int kBattleInfoFieldNumber = 1;
  inline const ::message::BattleInfo& battleinfo() const;
  inline ::message::BattleInfo* mutable_battleinfo();
  inline ::message::BattleInfo* release_battleinfo();
  inline void set_allocated_battleinfo(::message::BattleInfo* battleinfo);

  // @@protoc_insertion_point(class_scope:message.BattleDataResponse)
 private:
  inline void set_has_battleinfo();
  inline void clear_has_battleinfo();

  ::message::BattleInfo* battleinfo_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_BattleData_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_BattleData_2eproto();
  #endif
  friend void protobuf_AssignDesc_BattleData_2eproto();
  friend void protobuf_ShutdownFile_BattleData_2eproto();

  void InitAsDefaultInstance();
  static BattleDataResponse* default_instance_;
};
// ===================================================================


// ===================================================================

// BattleDataRequest

// required .message.BattleInfo battleInfo = 1;
inline bool BattleDataRequest::has_battleinfo() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void BattleDataRequest::set_has_battleinfo() {
  _has_bits_[0] |= 0x00000001u;
}
inline void BattleDataRequest::clear_has_battleinfo() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void BattleDataRequest::clear_battleinfo() {
  if (battleinfo_ != NULL) battleinfo_->::message::BattleInfo::Clear();
  clear_has_battleinfo();
}
inline const ::message::BattleInfo& BattleDataRequest::battleinfo() const {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  return battleinfo_ != NULL ? *battleinfo_ : *default_instance().battleinfo_;
#else
  return battleinfo_ != NULL ? *battleinfo_ : *default_instance_->battleinfo_;
#endif
}
inline ::message::BattleInfo* BattleDataRequest::mutable_battleinfo() {
  set_has_battleinfo();
  if (battleinfo_ == NULL) battleinfo_ = new ::message::BattleInfo;
  return battleinfo_;
}
inline ::message::BattleInfo* BattleDataRequest::release_battleinfo() {
  clear_has_battleinfo();
  ::message::BattleInfo* temp = battleinfo_;
  battleinfo_ = NULL;
  return temp;
}
inline void BattleDataRequest::set_allocated_battleinfo(::message::BattleInfo* battleinfo) {
  delete battleinfo_;
  battleinfo_ = battleinfo;
  if (battleinfo) {
    set_has_battleinfo();
  } else {
    clear_has_battleinfo();
  }
}

// -------------------------------------------------------------------

// BattleDataResponse

// optional .message.BattleInfo battleInfo = 1;
inline bool BattleDataResponse::has_battleinfo() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void BattleDataResponse::set_has_battleinfo() {
  _has_bits_[0] |= 0x00000001u;
}
inline void BattleDataResponse::clear_has_battleinfo() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void BattleDataResponse::clear_battleinfo() {
  if (battleinfo_ != NULL) battleinfo_->::message::BattleInfo::Clear();
  clear_has_battleinfo();
}
inline const ::message::BattleInfo& BattleDataResponse::battleinfo() const {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  return battleinfo_ != NULL ? *battleinfo_ : *default_instance().battleinfo_;
#else
  return battleinfo_ != NULL ? *battleinfo_ : *default_instance_->battleinfo_;
#endif
}
inline ::message::BattleInfo* BattleDataResponse::mutable_battleinfo() {
  set_has_battleinfo();
  if (battleinfo_ == NULL) battleinfo_ = new ::message::BattleInfo;
  return battleinfo_;
}
inline ::message::BattleInfo* BattleDataResponse::release_battleinfo() {
  clear_has_battleinfo();
  ::message::BattleInfo* temp = battleinfo_;
  battleinfo_ = NULL;
  return temp;
}
inline void BattleDataResponse::set_allocated_battleinfo(::message::BattleInfo* battleinfo) {
  delete battleinfo_;
  battleinfo_ = battleinfo;
  if (battleinfo) {
    set_has_battleinfo();
  } else {
    clear_has_battleinfo();
  }
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace message

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_BattleData_2eproto__INCLUDED
