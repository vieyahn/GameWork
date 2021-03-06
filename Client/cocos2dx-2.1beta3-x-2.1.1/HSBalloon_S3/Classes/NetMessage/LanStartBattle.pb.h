// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: LanStartBattle.proto

#ifndef PROTOBUF_LanStartBattle_2eproto__INCLUDED
#define PROTOBUF_LanStartBattle_2eproto__INCLUDED

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
void  protobuf_AddDesc_LanStartBattle_2eproto();
void protobuf_AssignDesc_LanStartBattle_2eproto();
void protobuf_ShutdownFile_LanStartBattle_2eproto();

class LanStartBattleNotify;

enum LanStartBattleNotify_NotifyType {
  LanStartBattleNotify_NotifyType_START = 1
};
bool LanStartBattleNotify_NotifyType_IsValid(int value);
const LanStartBattleNotify_NotifyType LanStartBattleNotify_NotifyType_NotifyType_MIN = LanStartBattleNotify_NotifyType_START;
const LanStartBattleNotify_NotifyType LanStartBattleNotify_NotifyType_NotifyType_MAX = LanStartBattleNotify_NotifyType_START;
const int LanStartBattleNotify_NotifyType_NotifyType_ARRAYSIZE = LanStartBattleNotify_NotifyType_NotifyType_MAX + 1;

// ===================================================================

class LanStartBattleNotify : public ::google::protobuf::MessageLite {
 public:
  LanStartBattleNotify();
  virtual ~LanStartBattleNotify();

  LanStartBattleNotify(const LanStartBattleNotify& from);

  inline LanStartBattleNotify& operator=(const LanStartBattleNotify& from) {
    CopyFrom(from);
    return *this;
  }

  static const LanStartBattleNotify& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const LanStartBattleNotify* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(LanStartBattleNotify* other);

  // implements Message ----------------------------------------------

  LanStartBattleNotify* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const LanStartBattleNotify& from);
  void MergeFrom(const LanStartBattleNotify& from);
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

  typedef LanStartBattleNotify_NotifyType NotifyType;
  static const NotifyType START = LanStartBattleNotify_NotifyType_START;
  static inline bool NotifyType_IsValid(int value) {
    return LanStartBattleNotify_NotifyType_IsValid(value);
  }
  static const NotifyType NotifyType_MIN =
    LanStartBattleNotify_NotifyType_NotifyType_MIN;
  static const NotifyType NotifyType_MAX =
    LanStartBattleNotify_NotifyType_NotifyType_MAX;
  static const int NotifyType_ARRAYSIZE =
    LanStartBattleNotify_NotifyType_NotifyType_ARRAYSIZE;

  // accessors -------------------------------------------------------

  // required .message.LanStartBattleNotify.NotifyType type = 1;
  inline bool has_type() const;
  inline void clear_type();
  static const int kTypeFieldNumber = 1;
  inline ::message::LanStartBattleNotify_NotifyType type() const;
  inline void set_type(::message::LanStartBattleNotify_NotifyType value);

  // @@protoc_insertion_point(class_scope:message.LanStartBattleNotify)
 private:
  inline void set_has_type();
  inline void clear_has_type();

  int type_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_LanStartBattle_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_LanStartBattle_2eproto();
  #endif
  friend void protobuf_AssignDesc_LanStartBattle_2eproto();
  friend void protobuf_ShutdownFile_LanStartBattle_2eproto();

  void InitAsDefaultInstance();
  static LanStartBattleNotify* default_instance_;
};
// ===================================================================


// ===================================================================

// LanStartBattleNotify

// required .message.LanStartBattleNotify.NotifyType type = 1;
inline bool LanStartBattleNotify::has_type() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void LanStartBattleNotify::set_has_type() {
  _has_bits_[0] |= 0x00000001u;
}
inline void LanStartBattleNotify::clear_has_type() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void LanStartBattleNotify::clear_type() {
  type_ = 1;
  clear_has_type();
}
inline ::message::LanStartBattleNotify_NotifyType LanStartBattleNotify::type() const {
  return static_cast< ::message::LanStartBattleNotify_NotifyType >(type_);
}
inline void LanStartBattleNotify::set_type(::message::LanStartBattleNotify_NotifyType value) {
  assert(::message::LanStartBattleNotify_NotifyType_IsValid(value));
  set_has_type();
  type_ = value;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace message

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_LanStartBattle_2eproto__INCLUDED
