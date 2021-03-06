// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: LanUserInfo.proto

#ifndef PROTOBUF_LanUserInfo_2eproto__INCLUDED
#define PROTOBUF_LanUserInfo_2eproto__INCLUDED

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
void  protobuf_AddDesc_LanUserInfo_2eproto();
void protobuf_AssignDesc_LanUserInfo_2eproto();
void protobuf_ShutdownFile_LanUserInfo_2eproto();

class LanUserInfoData;

// ===================================================================

class LanUserInfoData : public ::google::protobuf::MessageLite {
 public:
  LanUserInfoData();
  virtual ~LanUserInfoData();

  LanUserInfoData(const LanUserInfoData& from);

  inline LanUserInfoData& operator=(const LanUserInfoData& from) {
    CopyFrom(from);
    return *this;
  }

  static const LanUserInfoData& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const LanUserInfoData* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(LanUserInfoData* other);

  // implements Message ----------------------------------------------

  LanUserInfoData* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const LanUserInfoData& from);
  void MergeFrom(const LanUserInfoData& from);
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

  // optional string uuid = 1;
  inline bool has_uuid() const;
  inline void clear_uuid();
  static const int kUuidFieldNumber = 1;
  inline const ::std::string& uuid() const;
  inline void set_uuid(const ::std::string& value);
  inline void set_uuid(const char* value);
  inline void set_uuid(const char* value, size_t size);
  inline ::std::string* mutable_uuid();
  inline ::std::string* release_uuid();
  inline void set_allocated_uuid(::std::string* uuid);

  // optional string name = 2;
  inline bool has_name() const;
  inline void clear_name();
  static const int kNameFieldNumber = 2;
  inline const ::std::string& name() const;
  inline void set_name(const ::std::string& value);
  inline void set_name(const char* value);
  inline void set_name(const char* value, size_t size);
  inline ::std::string* mutable_name();
  inline ::std::string* release_name();
  inline void set_allocated_name(::std::string* name);

  // optional int32 winCount = 3 [default = 0];
  inline bool has_wincount() const;
  inline void clear_wincount();
  static const int kWinCountFieldNumber = 3;
  inline ::google::protobuf::int32 wincount() const;
  inline void set_wincount(::google::protobuf::int32 value);

  // optional int32 loseCount = 4 [default = 0];
  inline bool has_losecount() const;
  inline void clear_losecount();
  static const int kLoseCountFieldNumber = 4;
  inline ::google::protobuf::int32 losecount() const;
  inline void set_losecount(::google::protobuf::int32 value);

  // optional float winRate = 5 [default = 0];
  inline bool has_winrate() const;
  inline void clear_winrate();
  static const int kWinRateFieldNumber = 5;
  inline float winrate() const;
  inline void set_winrate(float value);

  // optional int32 type = 6 [default = 2];
  inline bool has_type() const;
  inline void clear_type();
  static const int kTypeFieldNumber = 6;
  inline ::google::protobuf::int32 type() const;
  inline void set_type(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:message.LanUserInfoData)
 private:
  inline void set_has_uuid();
  inline void clear_has_uuid();
  inline void set_has_name();
  inline void clear_has_name();
  inline void set_has_wincount();
  inline void clear_has_wincount();
  inline void set_has_losecount();
  inline void clear_has_losecount();
  inline void set_has_winrate();
  inline void clear_has_winrate();
  inline void set_has_type();
  inline void clear_has_type();

  ::std::string* uuid_;
  ::std::string* name_;
  ::google::protobuf::int32 wincount_;
  ::google::protobuf::int32 losecount_;
  float winrate_;
  ::google::protobuf::int32 type_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(6 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_LanUserInfo_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_LanUserInfo_2eproto();
  #endif
  friend void protobuf_AssignDesc_LanUserInfo_2eproto();
  friend void protobuf_ShutdownFile_LanUserInfo_2eproto();

  void InitAsDefaultInstance();
  static LanUserInfoData* default_instance_;
};
// ===================================================================


// ===================================================================

// LanUserInfoData

// optional string uuid = 1;
inline bool LanUserInfoData::has_uuid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void LanUserInfoData::set_has_uuid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void LanUserInfoData::clear_has_uuid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void LanUserInfoData::clear_uuid() {
  if (uuid_ != &::google::protobuf::internal::kEmptyString) {
    uuid_->clear();
  }
  clear_has_uuid();
}
inline const ::std::string& LanUserInfoData::uuid() const {
  return *uuid_;
}
inline void LanUserInfoData::set_uuid(const ::std::string& value) {
  set_has_uuid();
  if (uuid_ == &::google::protobuf::internal::kEmptyString) {
    uuid_ = new ::std::string;
  }
  uuid_->assign(value);
}
inline void LanUserInfoData::set_uuid(const char* value) {
  set_has_uuid();
  if (uuid_ == &::google::protobuf::internal::kEmptyString) {
    uuid_ = new ::std::string;
  }
  uuid_->assign(value);
}
inline void LanUserInfoData::set_uuid(const char* value, size_t size) {
  set_has_uuid();
  if (uuid_ == &::google::protobuf::internal::kEmptyString) {
    uuid_ = new ::std::string;
  }
  uuid_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* LanUserInfoData::mutable_uuid() {
  set_has_uuid();
  if (uuid_ == &::google::protobuf::internal::kEmptyString) {
    uuid_ = new ::std::string;
  }
  return uuid_;
}
inline ::std::string* LanUserInfoData::release_uuid() {
  clear_has_uuid();
  if (uuid_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = uuid_;
    uuid_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void LanUserInfoData::set_allocated_uuid(::std::string* uuid) {
  if (uuid_ != &::google::protobuf::internal::kEmptyString) {
    delete uuid_;
  }
  if (uuid) {
    set_has_uuid();
    uuid_ = uuid;
  } else {
    clear_has_uuid();
    uuid_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional string name = 2;
inline bool LanUserInfoData::has_name() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void LanUserInfoData::set_has_name() {
  _has_bits_[0] |= 0x00000002u;
}
inline void LanUserInfoData::clear_has_name() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void LanUserInfoData::clear_name() {
  if (name_ != &::google::protobuf::internal::kEmptyString) {
    name_->clear();
  }
  clear_has_name();
}
inline const ::std::string& LanUserInfoData::name() const {
  return *name_;
}
inline void LanUserInfoData::set_name(const ::std::string& value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(value);
}
inline void LanUserInfoData::set_name(const char* value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(value);
}
inline void LanUserInfoData::set_name(const char* value, size_t size) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* LanUserInfoData::mutable_name() {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  return name_;
}
inline ::std::string* LanUserInfoData::release_name() {
  clear_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = name_;
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void LanUserInfoData::set_allocated_name(::std::string* name) {
  if (name_ != &::google::protobuf::internal::kEmptyString) {
    delete name_;
  }
  if (name) {
    set_has_name();
    name_ = name;
  } else {
    clear_has_name();
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional int32 winCount = 3 [default = 0];
inline bool LanUserInfoData::has_wincount() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void LanUserInfoData::set_has_wincount() {
  _has_bits_[0] |= 0x00000004u;
}
inline void LanUserInfoData::clear_has_wincount() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void LanUserInfoData::clear_wincount() {
  wincount_ = 0;
  clear_has_wincount();
}
inline ::google::protobuf::int32 LanUserInfoData::wincount() const {
  return wincount_;
}
inline void LanUserInfoData::set_wincount(::google::protobuf::int32 value) {
  set_has_wincount();
  wincount_ = value;
}

// optional int32 loseCount = 4 [default = 0];
inline bool LanUserInfoData::has_losecount() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void LanUserInfoData::set_has_losecount() {
  _has_bits_[0] |= 0x00000008u;
}
inline void LanUserInfoData::clear_has_losecount() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void LanUserInfoData::clear_losecount() {
  losecount_ = 0;
  clear_has_losecount();
}
inline ::google::protobuf::int32 LanUserInfoData::losecount() const {
  return losecount_;
}
inline void LanUserInfoData::set_losecount(::google::protobuf::int32 value) {
  set_has_losecount();
  losecount_ = value;
}

// optional float winRate = 5 [default = 0];
inline bool LanUserInfoData::has_winrate() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void LanUserInfoData::set_has_winrate() {
  _has_bits_[0] |= 0x00000010u;
}
inline void LanUserInfoData::clear_has_winrate() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void LanUserInfoData::clear_winrate() {
  winrate_ = 0;
  clear_has_winrate();
}
inline float LanUserInfoData::winrate() const {
  return winrate_;
}
inline void LanUserInfoData::set_winrate(float value) {
  set_has_winrate();
  winrate_ = value;
}

// optional int32 type = 6 [default = 2];
inline bool LanUserInfoData::has_type() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void LanUserInfoData::set_has_type() {
  _has_bits_[0] |= 0x00000020u;
}
inline void LanUserInfoData::clear_has_type() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void LanUserInfoData::clear_type() {
  type_ = 2;
  clear_has_type();
}
inline ::google::protobuf::int32 LanUserInfoData::type() const {
  return type_;
}
inline void LanUserInfoData::set_type(::google::protobuf::int32 value) {
  set_has_type();
  type_ = value;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace message

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_LanUserInfo_2eproto__INCLUDED
