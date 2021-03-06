// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: CombatGains.proto

#ifndef PROTOBUF_CombatGains_2eproto__INCLUDED
#define PROTOBUF_CombatGains_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2004000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2004001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
// @@protoc_insertion_point(includes)

namespace message {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_CombatGains_2eproto();
void protobuf_AssignDesc_CombatGains_2eproto();
void protobuf_ShutdownFile_CombatGains_2eproto();

class CombatGainsRequest;
class CombatGainsResponse;

enum CombatGainsResponse_CombatGainsStatus {
  CombatGainsResponse_CombatGainsStatus_CombatGainsStatus_OK = 1,
  CombatGainsResponse_CombatGainsStatus_CombatGainsStatus_FAIL = 0
};
bool CombatGainsResponse_CombatGainsStatus_IsValid(int value);
const CombatGainsResponse_CombatGainsStatus CombatGainsResponse_CombatGainsStatus_CombatGainsStatus_MIN = CombatGainsResponse_CombatGainsStatus_CombatGainsStatus_FAIL;
const CombatGainsResponse_CombatGainsStatus CombatGainsResponse_CombatGainsStatus_CombatGainsStatus_MAX = CombatGainsResponse_CombatGainsStatus_CombatGainsStatus_OK;
const int CombatGainsResponse_CombatGainsStatus_CombatGainsStatus_ARRAYSIZE = CombatGainsResponse_CombatGainsStatus_CombatGainsStatus_MAX + 1;

// ===================================================================

class CombatGainsRequest : public ::google::protobuf::MessageLite {
 public:
  CombatGainsRequest();
  virtual ~CombatGainsRequest();
  
  CombatGainsRequest(const CombatGainsRequest& from);
  
  inline CombatGainsRequest& operator=(const CombatGainsRequest& from) {
    CopyFrom(from);
    return *this;
  }
  
  static const CombatGainsRequest& default_instance();
  
  void Swap(CombatGainsRequest* other);
  
  // implements Message ----------------------------------------------
  
  CombatGainsRequest* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const CombatGainsRequest& from);
  void MergeFrom(const CombatGainsRequest& from);
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
  
  // required uint32 score = 1;
  inline bool has_score() const;
  inline void clear_score();
  static const int kScoreFieldNumber = 1;
  inline ::google::protobuf::uint32 score() const;
  inline void set_score(::google::protobuf::uint32 value);
  
  // @@protoc_insertion_point(class_scope:message.CombatGainsRequest)
 private:
  inline void set_has_score();
  inline void clear_has_score();
  
  ::google::protobuf::uint32 score_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];
  
  friend void  protobuf_AddDesc_CombatGains_2eproto();
  friend void protobuf_AssignDesc_CombatGains_2eproto();
  friend void protobuf_ShutdownFile_CombatGains_2eproto();
  
  void InitAsDefaultInstance();
  static CombatGainsRequest* default_instance_;
};
// -------------------------------------------------------------------

class CombatGainsResponse : public ::google::protobuf::MessageLite {
 public:
  CombatGainsResponse();
  virtual ~CombatGainsResponse();
  
  CombatGainsResponse(const CombatGainsResponse& from);
  
  inline CombatGainsResponse& operator=(const CombatGainsResponse& from) {
    CopyFrom(from);
    return *this;
  }
  
  static const CombatGainsResponse& default_instance();
  
  void Swap(CombatGainsResponse* other);
  
  // implements Message ----------------------------------------------
  
  CombatGainsResponse* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const CombatGainsResponse& from);
  void MergeFrom(const CombatGainsResponse& from);
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
  
  typedef CombatGainsResponse_CombatGainsStatus CombatGainsStatus;
  static const CombatGainsStatus CombatGainsStatus_OK = CombatGainsResponse_CombatGainsStatus_CombatGainsStatus_OK;
  static const CombatGainsStatus CombatGainsStatus_FAIL = CombatGainsResponse_CombatGainsStatus_CombatGainsStatus_FAIL;
  static inline bool CombatGainsStatus_IsValid(int value) {
    return CombatGainsResponse_CombatGainsStatus_IsValid(value);
  }
  static const CombatGainsStatus CombatGainsStatus_MIN =
    CombatGainsResponse_CombatGainsStatus_CombatGainsStatus_MIN;
  static const CombatGainsStatus CombatGainsStatus_MAX =
    CombatGainsResponse_CombatGainsStatus_CombatGainsStatus_MAX;
  static const int CombatGainsStatus_ARRAYSIZE =
    CombatGainsResponse_CombatGainsStatus_CombatGainsStatus_ARRAYSIZE;
  
  // accessors -------------------------------------------------------
  
  // required .message.CombatGainsResponse.CombatGainsStatus status = 1;
  inline bool has_status() const;
  inline void clear_status();
  static const int kStatusFieldNumber = 1;
  inline ::message::CombatGainsResponse_CombatGainsStatus status() const;
  inline void set_status(::message::CombatGainsResponse_CombatGainsStatus value);
  
  // @@protoc_insertion_point(class_scope:message.CombatGainsResponse)
 private:
  inline void set_has_status();
  inline void clear_has_status();
  
  int status_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];
  
  friend void  protobuf_AddDesc_CombatGains_2eproto();
  friend void protobuf_AssignDesc_CombatGains_2eproto();
  friend void protobuf_ShutdownFile_CombatGains_2eproto();
  
  void InitAsDefaultInstance();
  static CombatGainsResponse* default_instance_;
};
// ===================================================================


// ===================================================================

// CombatGainsRequest

// required uint32 score = 1;
inline bool CombatGainsRequest::has_score() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void CombatGainsRequest::set_has_score() {
  _has_bits_[0] |= 0x00000001u;
}
inline void CombatGainsRequest::clear_has_score() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void CombatGainsRequest::clear_score() {
  score_ = 0u;
  clear_has_score();
}
inline ::google::protobuf::uint32 CombatGainsRequest::score() const {
  return score_;
}
inline void CombatGainsRequest::set_score(::google::protobuf::uint32 value) {
  set_has_score();
  score_ = value;
}

// -------------------------------------------------------------------

// CombatGainsResponse

// required .message.CombatGainsResponse.CombatGainsStatus status = 1;
inline bool CombatGainsResponse::has_status() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void CombatGainsResponse::set_has_status() {
  _has_bits_[0] |= 0x00000001u;
}
inline void CombatGainsResponse::clear_has_status() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void CombatGainsResponse::clear_status() {
  status_ = 1;
  clear_has_status();
}
inline ::message::CombatGainsResponse_CombatGainsStatus CombatGainsResponse::status() const {
  return static_cast< ::message::CombatGainsResponse_CombatGainsStatus >(status_);
}
inline void CombatGainsResponse::set_status(::message::CombatGainsResponse_CombatGainsStatus value) {
  GOOGLE_DCHECK(::message::CombatGainsResponse_CombatGainsStatus_IsValid(value));
  set_has_status();
  status_ = value;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace message

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_CombatGains_2eproto__INCLUDED
