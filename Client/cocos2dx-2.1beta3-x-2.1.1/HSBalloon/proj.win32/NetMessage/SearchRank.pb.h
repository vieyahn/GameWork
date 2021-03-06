// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: SearchRank.proto

#ifndef PROTOBUF_SearchRank_2eproto__INCLUDED
#define PROTOBUF_SearchRank_2eproto__INCLUDED

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
void  protobuf_AddDesc_SearchRank_2eproto();
void protobuf_AssignDesc_SearchRank_2eproto();
void protobuf_ShutdownFile_SearchRank_2eproto();

class SearchRankRequest;
class SearchRankResponse;
class SearchRankResponse_UserRank;

// ===================================================================

class SearchRankRequest : public ::google::protobuf::MessageLite {
 public:
  SearchRankRequest();
  virtual ~SearchRankRequest();
  
  SearchRankRequest(const SearchRankRequest& from);
  
  inline SearchRankRequest& operator=(const SearchRankRequest& from) {
    CopyFrom(from);
    return *this;
  }
  
  static const SearchRankRequest& default_instance();
  
  void Swap(SearchRankRequest* other);
  
  // implements Message ----------------------------------------------
  
  SearchRankRequest* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const SearchRankRequest& from);
  void MergeFrom(const SearchRankRequest& from);
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
  
  // @@protoc_insertion_point(class_scope:message.SearchRankRequest)
 private:
  
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[1];
  
  friend void  protobuf_AddDesc_SearchRank_2eproto();
  friend void protobuf_AssignDesc_SearchRank_2eproto();
  friend void protobuf_ShutdownFile_SearchRank_2eproto();
  
  void InitAsDefaultInstance();
  static SearchRankRequest* default_instance_;
};
// -------------------------------------------------------------------

class SearchRankResponse_UserRank : public ::google::protobuf::MessageLite {
 public:
  SearchRankResponse_UserRank();
  virtual ~SearchRankResponse_UserRank();
  
  SearchRankResponse_UserRank(const SearchRankResponse_UserRank& from);
  
  inline SearchRankResponse_UserRank& operator=(const SearchRankResponse_UserRank& from) {
    CopyFrom(from);
    return *this;
  }
  
  static const SearchRankResponse_UserRank& default_instance();
  
  void Swap(SearchRankResponse_UserRank* other);
  
  // implements Message ----------------------------------------------
  
  SearchRankResponse_UserRank* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const SearchRankResponse_UserRank& from);
  void MergeFrom(const SearchRankResponse_UserRank& from);
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
  
  // optional string userName = 1;
  inline bool has_username() const;
  inline void clear_username();
  static const int kUserNameFieldNumber = 1;
  inline const ::std::string& username() const;
  inline void set_username(const ::std::string& value);
  inline void set_username(const char* value);
  inline void set_username(const char* value, size_t size);
  inline ::std::string* mutable_username();
  inline ::std::string* release_username();
  
  // optional uint32 rank = 2;
  inline bool has_rank() const;
  inline void clear_rank();
  static const int kRankFieldNumber = 2;
  inline ::google::protobuf::uint32 rank() const;
  inline void set_rank(::google::protobuf::uint32 value);
  
  // optional int32 rankChange = 3;
  inline bool has_rankchange() const;
  inline void clear_rankchange();
  static const int kRankChangeFieldNumber = 3;
  inline ::google::protobuf::int32 rankchange() const;
  inline void set_rankchange(::google::protobuf::int32 value);
  
  // optional uint32 score = 4;
  inline bool has_score() const;
  inline void clear_score();
  static const int kScoreFieldNumber = 4;
  inline ::google::protobuf::uint32 score() const;
  inline void set_score(::google::protobuf::uint32 value);
  
  // @@protoc_insertion_point(class_scope:message.SearchRankResponse.UserRank)
 private:
  inline void set_has_username();
  inline void clear_has_username();
  inline void set_has_rank();
  inline void clear_has_rank();
  inline void set_has_rankchange();
  inline void clear_has_rankchange();
  inline void set_has_score();
  inline void clear_has_score();
  
  ::std::string* username_;
  ::google::protobuf::uint32 rank_;
  ::google::protobuf::int32 rankchange_;
  ::google::protobuf::uint32 score_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(4 + 31) / 32];
  
  friend void  protobuf_AddDesc_SearchRank_2eproto();
  friend void protobuf_AssignDesc_SearchRank_2eproto();
  friend void protobuf_ShutdownFile_SearchRank_2eproto();
  
  void InitAsDefaultInstance();
  static SearchRankResponse_UserRank* default_instance_;
};
// -------------------------------------------------------------------

class SearchRankResponse : public ::google::protobuf::MessageLite {
 public:
  SearchRankResponse();
  virtual ~SearchRankResponse();
  
  SearchRankResponse(const SearchRankResponse& from);
  
  inline SearchRankResponse& operator=(const SearchRankResponse& from) {
    CopyFrom(from);
    return *this;
  }
  
  static const SearchRankResponse& default_instance();
  
  void Swap(SearchRankResponse* other);
  
  // implements Message ----------------------------------------------
  
  SearchRankResponse* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const SearchRankResponse& from);
  void MergeFrom(const SearchRankResponse& from);
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
  
  typedef SearchRankResponse_UserRank UserRank;
  
  // accessors -------------------------------------------------------
  
  // repeated .message.SearchRankResponse.UserRank userTopRanks = 1;
  inline int usertopranks_size() const;
  inline void clear_usertopranks();
  static const int kUserTopRanksFieldNumber = 1;
  inline const ::message::SearchRankResponse_UserRank& usertopranks(int index) const;
  inline ::message::SearchRankResponse_UserRank* mutable_usertopranks(int index);
  inline ::message::SearchRankResponse_UserRank* add_usertopranks();
  inline const ::google::protobuf::RepeatedPtrField< ::message::SearchRankResponse_UserRank >&
      usertopranks() const;
  inline ::google::protobuf::RepeatedPtrField< ::message::SearchRankResponse_UserRank >*
      mutable_usertopranks();
  
  // repeated .message.SearchRankResponse.UserRank userSelfRanks = 2;
  inline int userselfranks_size() const;
  inline void clear_userselfranks();
  static const int kUserSelfRanksFieldNumber = 2;
  inline const ::message::SearchRankResponse_UserRank& userselfranks(int index) const;
  inline ::message::SearchRankResponse_UserRank* mutable_userselfranks(int index);
  inline ::message::SearchRankResponse_UserRank* add_userselfranks();
  inline const ::google::protobuf::RepeatedPtrField< ::message::SearchRankResponse_UserRank >&
      userselfranks() const;
  inline ::google::protobuf::RepeatedPtrField< ::message::SearchRankResponse_UserRank >*
      mutable_userselfranks();
  
  // optional uint32 selfRank = 3;
  inline bool has_selfrank() const;
  inline void clear_selfrank();
  static const int kSelfRankFieldNumber = 3;
  inline ::google::protobuf::uint32 selfrank() const;
  inline void set_selfrank(::google::protobuf::uint32 value);
  
  // @@protoc_insertion_point(class_scope:message.SearchRankResponse)
 private:
  inline void set_has_selfrank();
  inline void clear_has_selfrank();
  
  ::google::protobuf::RepeatedPtrField< ::message::SearchRankResponse_UserRank > usertopranks_;
  ::google::protobuf::RepeatedPtrField< ::message::SearchRankResponse_UserRank > userselfranks_;
  ::google::protobuf::uint32 selfrank_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];
  
  friend void  protobuf_AddDesc_SearchRank_2eproto();
  friend void protobuf_AssignDesc_SearchRank_2eproto();
  friend void protobuf_ShutdownFile_SearchRank_2eproto();
  
  void InitAsDefaultInstance();
  static SearchRankResponse* default_instance_;
};
// ===================================================================


// ===================================================================

// SearchRankRequest

// -------------------------------------------------------------------

// SearchRankResponse_UserRank

// optional string userName = 1;
inline bool SearchRankResponse_UserRank::has_username() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void SearchRankResponse_UserRank::set_has_username() {
  _has_bits_[0] |= 0x00000001u;
}
inline void SearchRankResponse_UserRank::clear_has_username() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void SearchRankResponse_UserRank::clear_username() {
  if (username_ != &::google::protobuf::internal::kEmptyString) {
    username_->clear();
  }
  clear_has_username();
}
inline const ::std::string& SearchRankResponse_UserRank::username() const {
  return *username_;
}
inline void SearchRankResponse_UserRank::set_username(const ::std::string& value) {
  set_has_username();
  if (username_ == &::google::protobuf::internal::kEmptyString) {
    username_ = new ::std::string;
  }
  username_->assign(value);
}
inline void SearchRankResponse_UserRank::set_username(const char* value) {
  set_has_username();
  if (username_ == &::google::protobuf::internal::kEmptyString) {
    username_ = new ::std::string;
  }
  username_->assign(value);
}
inline void SearchRankResponse_UserRank::set_username(const char* value, size_t size) {
  set_has_username();
  if (username_ == &::google::protobuf::internal::kEmptyString) {
    username_ = new ::std::string;
  }
  username_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* SearchRankResponse_UserRank::mutable_username() {
  set_has_username();
  if (username_ == &::google::protobuf::internal::kEmptyString) {
    username_ = new ::std::string;
  }
  return username_;
}
inline ::std::string* SearchRankResponse_UserRank::release_username() {
  clear_has_username();
  if (username_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = username_;
    username_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// optional uint32 rank = 2;
inline bool SearchRankResponse_UserRank::has_rank() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void SearchRankResponse_UserRank::set_has_rank() {
  _has_bits_[0] |= 0x00000002u;
}
inline void SearchRankResponse_UserRank::clear_has_rank() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void SearchRankResponse_UserRank::clear_rank() {
  rank_ = 0u;
  clear_has_rank();
}
inline ::google::protobuf::uint32 SearchRankResponse_UserRank::rank() const {
  return rank_;
}
inline void SearchRankResponse_UserRank::set_rank(::google::protobuf::uint32 value) {
  set_has_rank();
  rank_ = value;
}

// optional int32 rankChange = 3;
inline bool SearchRankResponse_UserRank::has_rankchange() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void SearchRankResponse_UserRank::set_has_rankchange() {
  _has_bits_[0] |= 0x00000004u;
}
inline void SearchRankResponse_UserRank::clear_has_rankchange() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void SearchRankResponse_UserRank::clear_rankchange() {
  rankchange_ = 0;
  clear_has_rankchange();
}
inline ::google::protobuf::int32 SearchRankResponse_UserRank::rankchange() const {
  return rankchange_;
}
inline void SearchRankResponse_UserRank::set_rankchange(::google::protobuf::int32 value) {
  set_has_rankchange();
  rankchange_ = value;
}

// optional uint32 score = 4;
inline bool SearchRankResponse_UserRank::has_score() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void SearchRankResponse_UserRank::set_has_score() {
  _has_bits_[0] |= 0x00000008u;
}
inline void SearchRankResponse_UserRank::clear_has_score() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void SearchRankResponse_UserRank::clear_score() {
  score_ = 0u;
  clear_has_score();
}
inline ::google::protobuf::uint32 SearchRankResponse_UserRank::score() const {
  return score_;
}
inline void SearchRankResponse_UserRank::set_score(::google::protobuf::uint32 value) {
  set_has_score();
  score_ = value;
}

// -------------------------------------------------------------------

// SearchRankResponse

// repeated .message.SearchRankResponse.UserRank userTopRanks = 1;
inline int SearchRankResponse::usertopranks_size() const {
  return usertopranks_.size();
}
inline void SearchRankResponse::clear_usertopranks() {
  usertopranks_.Clear();
}
inline const ::message::SearchRankResponse_UserRank& SearchRankResponse::usertopranks(int index) const {
  return usertopranks_.Get(index);
}
inline ::message::SearchRankResponse_UserRank* SearchRankResponse::mutable_usertopranks(int index) {
  return usertopranks_.Mutable(index);
}
inline ::message::SearchRankResponse_UserRank* SearchRankResponse::add_usertopranks() {
  return usertopranks_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::message::SearchRankResponse_UserRank >&
SearchRankResponse::usertopranks() const {
  return usertopranks_;
}
inline ::google::protobuf::RepeatedPtrField< ::message::SearchRankResponse_UserRank >*
SearchRankResponse::mutable_usertopranks() {
  return &usertopranks_;
}

// repeated .message.SearchRankResponse.UserRank userSelfRanks = 2;
inline int SearchRankResponse::userselfranks_size() const {
  return userselfranks_.size();
}
inline void SearchRankResponse::clear_userselfranks() {
  userselfranks_.Clear();
}
inline const ::message::SearchRankResponse_UserRank& SearchRankResponse::userselfranks(int index) const {
  return userselfranks_.Get(index);
}
inline ::message::SearchRankResponse_UserRank* SearchRankResponse::mutable_userselfranks(int index) {
  return userselfranks_.Mutable(index);
}
inline ::message::SearchRankResponse_UserRank* SearchRankResponse::add_userselfranks() {
  return userselfranks_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::message::SearchRankResponse_UserRank >&
SearchRankResponse::userselfranks() const {
  return userselfranks_;
}
inline ::google::protobuf::RepeatedPtrField< ::message::SearchRankResponse_UserRank >*
SearchRankResponse::mutable_userselfranks() {
  return &userselfranks_;
}

// optional uint32 selfRank = 3;
inline bool SearchRankResponse::has_selfrank() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void SearchRankResponse::set_has_selfrank() {
  _has_bits_[0] |= 0x00000004u;
}
inline void SearchRankResponse::clear_has_selfrank() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void SearchRankResponse::clear_selfrank() {
  selfrank_ = 0u;
  clear_has_selfrank();
}
inline ::google::protobuf::uint32 SearchRankResponse::selfrank() const {
  return selfrank_;
}
inline void SearchRankResponse::set_selfrank(::google::protobuf::uint32 value) {
  set_has_selfrank();
  selfrank_ = value;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace message

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_SearchRank_2eproto__INCLUDED
