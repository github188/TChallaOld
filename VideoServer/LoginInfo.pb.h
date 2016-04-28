// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: LoginInfo.proto

#ifndef PROTOBUF_LoginInfo_2eproto__INCLUDED
#define PROTOBUF_LoginInfo_2eproto__INCLUDED

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
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace VideoServer {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_LoginInfo_2eproto();
void protobuf_AssignDesc_LoginInfo_2eproto();
void protobuf_ShutdownFile_LoginInfo_2eproto();

class LoginInfo;
class LoginInfoList;

// ===================================================================

class LoginInfo : public ::google::protobuf::Message {
 public:
  LoginInfo();
  virtual ~LoginInfo();

  LoginInfo(const LoginInfo& from);

  inline LoginInfo& operator=(const LoginInfo& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const LoginInfo& default_instance();

  void Swap(LoginInfo* other);

  // implements Message ----------------------------------------------

  LoginInfo* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const LoginInfo& from);
  void MergeFrom(const LoginInfo& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional string name = 1;
  inline bool has_name() const;
  inline void clear_name();
  static const int kNameFieldNumber = 1;
  inline const ::std::string& name() const;
  inline void set_name(const ::std::string& value);
  inline void set_name(const char* value);
  inline void set_name(const char* value, size_t size);
  inline ::std::string* mutable_name();
  inline ::std::string* release_name();
  inline void set_allocated_name(::std::string* name);

  // optional string ip = 2;
  inline bool has_ip() const;
  inline void clear_ip();
  static const int kIpFieldNumber = 2;
  inline const ::std::string& ip() const;
  inline void set_ip(const ::std::string& value);
  inline void set_ip(const char* value);
  inline void set_ip(const char* value, size_t size);
  inline ::std::string* mutable_ip();
  inline ::std::string* release_ip();
  inline void set_allocated_ip(::std::string* ip);

  // optional int32 port = 3;
  inline bool has_port() const;
  inline void clear_port();
  static const int kPortFieldNumber = 3;
  inline ::google::protobuf::int32 port() const;
  inline void set_port(::google::protobuf::int32 value);

  // optional string user = 4;
  inline bool has_user() const;
  inline void clear_user();
  static const int kUserFieldNumber = 4;
  inline const ::std::string& user() const;
  inline void set_user(const ::std::string& value);
  inline void set_user(const char* value);
  inline void set_user(const char* value, size_t size);
  inline ::std::string* mutable_user();
  inline ::std::string* release_user();
  inline void set_allocated_user(::std::string* user);

  // optional string password = 5;
  inline bool has_password() const;
  inline void clear_password();
  static const int kPasswordFieldNumber = 5;
  inline const ::std::string& password() const;
  inline void set_password(const ::std::string& value);
  inline void set_password(const char* value);
  inline void set_password(const char* value, size_t size);
  inline ::std::string* mutable_password();
  inline ::std::string* release_password();
  inline void set_allocated_password(::std::string* password);

  // optional string macAddress = 6;
  inline bool has_macaddress() const;
  inline void clear_macaddress();
  static const int kMacAddressFieldNumber = 6;
  inline const ::std::string& macaddress() const;
  inline void set_macaddress(const ::std::string& value);
  inline void set_macaddress(const char* value);
  inline void set_macaddress(const char* value, size_t size);
  inline ::std::string* mutable_macaddress();
  inline ::std::string* release_macaddress();
  inline void set_allocated_macaddress(::std::string* macaddress);

  // optional int32 factory = 7;
  inline bool has_factory() const;
  inline void clear_factory();
  static const int kFactoryFieldNumber = 7;
  inline ::google::protobuf::int32 factory() const;
  inline void set_factory(::google::protobuf::int32 value);

  // optional string id = 8;
  inline bool has_id() const;
  inline void clear_id();
  static const int kIdFieldNumber = 8;
  inline const ::std::string& id() const;
  inline void set_id(const ::std::string& value);
  inline void set_id(const char* value);
  inline void set_id(const char* value, size_t size);
  inline ::std::string* mutable_id();
  inline ::std::string* release_id();
  inline void set_allocated_id(::std::string* id);

  // @@protoc_insertion_point(class_scope:VideoServer.LoginInfo)
 private:
  inline void set_has_name();
  inline void clear_has_name();
  inline void set_has_ip();
  inline void clear_has_ip();
  inline void set_has_port();
  inline void clear_has_port();
  inline void set_has_user();
  inline void clear_has_user();
  inline void set_has_password();
  inline void clear_has_password();
  inline void set_has_macaddress();
  inline void clear_has_macaddress();
  inline void set_has_factory();
  inline void clear_has_factory();
  inline void set_has_id();
  inline void clear_has_id();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* name_;
  ::std::string* ip_;
  ::std::string* user_;
  ::std::string* password_;
  ::google::protobuf::int32 port_;
  ::google::protobuf::int32 factory_;
  ::std::string* macaddress_;
  ::std::string* id_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(8 + 31) / 32];

  friend void  protobuf_AddDesc_LoginInfo_2eproto();
  friend void protobuf_AssignDesc_LoginInfo_2eproto();
  friend void protobuf_ShutdownFile_LoginInfo_2eproto();

  void InitAsDefaultInstance();
  static LoginInfo* default_instance_;
};
// -------------------------------------------------------------------

class LoginInfoList : public ::google::protobuf::Message {
 public:
  LoginInfoList();
  virtual ~LoginInfoList();

  LoginInfoList(const LoginInfoList& from);

  inline LoginInfoList& operator=(const LoginInfoList& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const LoginInfoList& default_instance();

  void Swap(LoginInfoList* other);

  // implements Message ----------------------------------------------

  LoginInfoList* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const LoginInfoList& from);
  void MergeFrom(const LoginInfoList& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .VideoServer.LoginInfo loginInfos = 1;
  inline int logininfos_size() const;
  inline void clear_logininfos();
  static const int kLoginInfosFieldNumber = 1;
  inline const ::VideoServer::LoginInfo& logininfos(int index) const;
  inline ::VideoServer::LoginInfo* mutable_logininfos(int index);
  inline ::VideoServer::LoginInfo* add_logininfos();
  inline const ::google::protobuf::RepeatedPtrField< ::VideoServer::LoginInfo >&
      logininfos() const;
  inline ::google::protobuf::RepeatedPtrField< ::VideoServer::LoginInfo >*
      mutable_logininfos();

  // @@protoc_insertion_point(class_scope:VideoServer.LoginInfoList)
 private:

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::RepeatedPtrField< ::VideoServer::LoginInfo > logininfos_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  friend void  protobuf_AddDesc_LoginInfo_2eproto();
  friend void protobuf_AssignDesc_LoginInfo_2eproto();
  friend void protobuf_ShutdownFile_LoginInfo_2eproto();

  void InitAsDefaultInstance();
  static LoginInfoList* default_instance_;
};
// ===================================================================


// ===================================================================

// LoginInfo

// optional string name = 1;
inline bool LoginInfo::has_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void LoginInfo::set_has_name() {
  _has_bits_[0] |= 0x00000001u;
}
inline void LoginInfo::clear_has_name() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void LoginInfo::clear_name() {
  if (name_ != &::google::protobuf::internal::kEmptyString) {
    name_->clear();
  }
  clear_has_name();
}
inline const ::std::string& LoginInfo::name() const {
  return *name_;
}
inline void LoginInfo::set_name(const ::std::string& value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(value);
}
inline void LoginInfo::set_name(const char* value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(value);
}
inline void LoginInfo::set_name(const char* value, size_t size) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* LoginInfo::mutable_name() {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  return name_;
}
inline ::std::string* LoginInfo::release_name() {
  clear_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = name_;
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void LoginInfo::set_allocated_name(::std::string* name) {
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

// optional string ip = 2;
inline bool LoginInfo::has_ip() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void LoginInfo::set_has_ip() {
  _has_bits_[0] |= 0x00000002u;
}
inline void LoginInfo::clear_has_ip() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void LoginInfo::clear_ip() {
  if (ip_ != &::google::protobuf::internal::kEmptyString) {
    ip_->clear();
  }
  clear_has_ip();
}
inline const ::std::string& LoginInfo::ip() const {
  return *ip_;
}
inline void LoginInfo::set_ip(const ::std::string& value) {
  set_has_ip();
  if (ip_ == &::google::protobuf::internal::kEmptyString) {
    ip_ = new ::std::string;
  }
  ip_->assign(value);
}
inline void LoginInfo::set_ip(const char* value) {
  set_has_ip();
  if (ip_ == &::google::protobuf::internal::kEmptyString) {
    ip_ = new ::std::string;
  }
  ip_->assign(value);
}
inline void LoginInfo::set_ip(const char* value, size_t size) {
  set_has_ip();
  if (ip_ == &::google::protobuf::internal::kEmptyString) {
    ip_ = new ::std::string;
  }
  ip_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* LoginInfo::mutable_ip() {
  set_has_ip();
  if (ip_ == &::google::protobuf::internal::kEmptyString) {
    ip_ = new ::std::string;
  }
  return ip_;
}
inline ::std::string* LoginInfo::release_ip() {
  clear_has_ip();
  if (ip_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = ip_;
    ip_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void LoginInfo::set_allocated_ip(::std::string* ip) {
  if (ip_ != &::google::protobuf::internal::kEmptyString) {
    delete ip_;
  }
  if (ip) {
    set_has_ip();
    ip_ = ip;
  } else {
    clear_has_ip();
    ip_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional int32 port = 3;
inline bool LoginInfo::has_port() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void LoginInfo::set_has_port() {
  _has_bits_[0] |= 0x00000004u;
}
inline void LoginInfo::clear_has_port() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void LoginInfo::clear_port() {
  port_ = 0;
  clear_has_port();
}
inline ::google::protobuf::int32 LoginInfo::port() const {
  return port_;
}
inline void LoginInfo::set_port(::google::protobuf::int32 value) {
  set_has_port();
  port_ = value;
}

// optional string user = 4;
inline bool LoginInfo::has_user() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void LoginInfo::set_has_user() {
  _has_bits_[0] |= 0x00000008u;
}
inline void LoginInfo::clear_has_user() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void LoginInfo::clear_user() {
  if (user_ != &::google::protobuf::internal::kEmptyString) {
    user_->clear();
  }
  clear_has_user();
}
inline const ::std::string& LoginInfo::user() const {
  return *user_;
}
inline void LoginInfo::set_user(const ::std::string& value) {
  set_has_user();
  if (user_ == &::google::protobuf::internal::kEmptyString) {
    user_ = new ::std::string;
  }
  user_->assign(value);
}
inline void LoginInfo::set_user(const char* value) {
  set_has_user();
  if (user_ == &::google::protobuf::internal::kEmptyString) {
    user_ = new ::std::string;
  }
  user_->assign(value);
}
inline void LoginInfo::set_user(const char* value, size_t size) {
  set_has_user();
  if (user_ == &::google::protobuf::internal::kEmptyString) {
    user_ = new ::std::string;
  }
  user_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* LoginInfo::mutable_user() {
  set_has_user();
  if (user_ == &::google::protobuf::internal::kEmptyString) {
    user_ = new ::std::string;
  }
  return user_;
}
inline ::std::string* LoginInfo::release_user() {
  clear_has_user();
  if (user_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = user_;
    user_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void LoginInfo::set_allocated_user(::std::string* user) {
  if (user_ != &::google::protobuf::internal::kEmptyString) {
    delete user_;
  }
  if (user) {
    set_has_user();
    user_ = user;
  } else {
    clear_has_user();
    user_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional string password = 5;
inline bool LoginInfo::has_password() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void LoginInfo::set_has_password() {
  _has_bits_[0] |= 0x00000010u;
}
inline void LoginInfo::clear_has_password() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void LoginInfo::clear_password() {
  if (password_ != &::google::protobuf::internal::kEmptyString) {
    password_->clear();
  }
  clear_has_password();
}
inline const ::std::string& LoginInfo::password() const {
  return *password_;
}
inline void LoginInfo::set_password(const ::std::string& value) {
  set_has_password();
  if (password_ == &::google::protobuf::internal::kEmptyString) {
    password_ = new ::std::string;
  }
  password_->assign(value);
}
inline void LoginInfo::set_password(const char* value) {
  set_has_password();
  if (password_ == &::google::protobuf::internal::kEmptyString) {
    password_ = new ::std::string;
  }
  password_->assign(value);
}
inline void LoginInfo::set_password(const char* value, size_t size) {
  set_has_password();
  if (password_ == &::google::protobuf::internal::kEmptyString) {
    password_ = new ::std::string;
  }
  password_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* LoginInfo::mutable_password() {
  set_has_password();
  if (password_ == &::google::protobuf::internal::kEmptyString) {
    password_ = new ::std::string;
  }
  return password_;
}
inline ::std::string* LoginInfo::release_password() {
  clear_has_password();
  if (password_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = password_;
    password_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void LoginInfo::set_allocated_password(::std::string* password) {
  if (password_ != &::google::protobuf::internal::kEmptyString) {
    delete password_;
  }
  if (password) {
    set_has_password();
    password_ = password;
  } else {
    clear_has_password();
    password_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional string macAddress = 6;
inline bool LoginInfo::has_macaddress() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void LoginInfo::set_has_macaddress() {
  _has_bits_[0] |= 0x00000020u;
}
inline void LoginInfo::clear_has_macaddress() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void LoginInfo::clear_macaddress() {
  if (macaddress_ != &::google::protobuf::internal::kEmptyString) {
    macaddress_->clear();
  }
  clear_has_macaddress();
}
inline const ::std::string& LoginInfo::macaddress() const {
  return *macaddress_;
}
inline void LoginInfo::set_macaddress(const ::std::string& value) {
  set_has_macaddress();
  if (macaddress_ == &::google::protobuf::internal::kEmptyString) {
    macaddress_ = new ::std::string;
  }
  macaddress_->assign(value);
}
inline void LoginInfo::set_macaddress(const char* value) {
  set_has_macaddress();
  if (macaddress_ == &::google::protobuf::internal::kEmptyString) {
    macaddress_ = new ::std::string;
  }
  macaddress_->assign(value);
}
inline void LoginInfo::set_macaddress(const char* value, size_t size) {
  set_has_macaddress();
  if (macaddress_ == &::google::protobuf::internal::kEmptyString) {
    macaddress_ = new ::std::string;
  }
  macaddress_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* LoginInfo::mutable_macaddress() {
  set_has_macaddress();
  if (macaddress_ == &::google::protobuf::internal::kEmptyString) {
    macaddress_ = new ::std::string;
  }
  return macaddress_;
}
inline ::std::string* LoginInfo::release_macaddress() {
  clear_has_macaddress();
  if (macaddress_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = macaddress_;
    macaddress_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void LoginInfo::set_allocated_macaddress(::std::string* macaddress) {
  if (macaddress_ != &::google::protobuf::internal::kEmptyString) {
    delete macaddress_;
  }
  if (macaddress) {
    set_has_macaddress();
    macaddress_ = macaddress;
  } else {
    clear_has_macaddress();
    macaddress_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional int32 factory = 7;
inline bool LoginInfo::has_factory() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void LoginInfo::set_has_factory() {
  _has_bits_[0] |= 0x00000040u;
}
inline void LoginInfo::clear_has_factory() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void LoginInfo::clear_factory() {
  factory_ = 0;
  clear_has_factory();
}
inline ::google::protobuf::int32 LoginInfo::factory() const {
  return factory_;
}
inline void LoginInfo::set_factory(::google::protobuf::int32 value) {
  set_has_factory();
  factory_ = value;
}

// optional string id = 8;
inline bool LoginInfo::has_id() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void LoginInfo::set_has_id() {
  _has_bits_[0] |= 0x00000080u;
}
inline void LoginInfo::clear_has_id() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void LoginInfo::clear_id() {
  if (id_ != &::google::protobuf::internal::kEmptyString) {
    id_->clear();
  }
  clear_has_id();
}
inline const ::std::string& LoginInfo::id() const {
  return *id_;
}
inline void LoginInfo::set_id(const ::std::string& value) {
  set_has_id();
  if (id_ == &::google::protobuf::internal::kEmptyString) {
    id_ = new ::std::string;
  }
  id_->assign(value);
}
inline void LoginInfo::set_id(const char* value) {
  set_has_id();
  if (id_ == &::google::protobuf::internal::kEmptyString) {
    id_ = new ::std::string;
  }
  id_->assign(value);
}
inline void LoginInfo::set_id(const char* value, size_t size) {
  set_has_id();
  if (id_ == &::google::protobuf::internal::kEmptyString) {
    id_ = new ::std::string;
  }
  id_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* LoginInfo::mutable_id() {
  set_has_id();
  if (id_ == &::google::protobuf::internal::kEmptyString) {
    id_ = new ::std::string;
  }
  return id_;
}
inline ::std::string* LoginInfo::release_id() {
  clear_has_id();
  if (id_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = id_;
    id_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void LoginInfo::set_allocated_id(::std::string* id) {
  if (id_ != &::google::protobuf::internal::kEmptyString) {
    delete id_;
  }
  if (id) {
    set_has_id();
    id_ = id;
  } else {
    clear_has_id();
    id_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// -------------------------------------------------------------------

// LoginInfoList

// repeated .VideoServer.LoginInfo loginInfos = 1;
inline int LoginInfoList::logininfos_size() const {
  return logininfos_.size();
}
inline void LoginInfoList::clear_logininfos() {
  logininfos_.Clear();
}
inline const ::VideoServer::LoginInfo& LoginInfoList::logininfos(int index) const {
  return logininfos_.Get(index);
}
inline ::VideoServer::LoginInfo* LoginInfoList::mutable_logininfos(int index) {
  return logininfos_.Mutable(index);
}
inline ::VideoServer::LoginInfo* LoginInfoList::add_logininfos() {
  return logininfos_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::VideoServer::LoginInfo >&
LoginInfoList::logininfos() const {
  return logininfos_;
}
inline ::google::protobuf::RepeatedPtrField< ::VideoServer::LoginInfo >*
LoginInfoList::mutable_logininfos() {
  return &logininfos_;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace VideoServer

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_LoginInfo_2eproto__INCLUDED
