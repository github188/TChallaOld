// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: pos_request.proto

#ifndef PROTOBUF_pos_5frequest_2eproto__INCLUDED
#define PROTOBUF_pos_5frequest_2eproto__INCLUDED

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
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_pos_5frequest_2eproto();
void protobuf_AssignDesc_pos_5frequest_2eproto();
void protobuf_ShutdownFile_pos_5frequest_2eproto();

class pos_request;
class pos_respone;

enum pos_request_RequestType {
  pos_request_RequestType_DOWN_LOAD = 0,
  pos_request_RequestType_UP_LOAD = 1,
  pos_request_RequestType_DELETE = 2
};
bool pos_request_RequestType_IsValid(int value);
const pos_request_RequestType pos_request_RequestType_RequestType_MIN = pos_request_RequestType_DOWN_LOAD;
const pos_request_RequestType pos_request_RequestType_RequestType_MAX = pos_request_RequestType_DELETE;
const int pos_request_RequestType_RequestType_ARRAYSIZE = pos_request_RequestType_RequestType_MAX + 1;

const ::google::protobuf::EnumDescriptor* pos_request_RequestType_descriptor();
inline const ::std::string& pos_request_RequestType_Name(pos_request_RequestType value) {
  return ::google::protobuf::internal::NameOfEnum(
    pos_request_RequestType_descriptor(), value);
}
inline bool pos_request_RequestType_Parse(
    const ::std::string& name, pos_request_RequestType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<pos_request_RequestType>(
    pos_request_RequestType_descriptor(), name, value);
}
// ===================================================================

class pos_request : public ::google::protobuf::Message {
 public:
  pos_request();
  virtual ~pos_request();

  pos_request(const pos_request& from);

  inline pos_request& operator=(const pos_request& from) {
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
  static const pos_request& default_instance();

  void Swap(pos_request* other);

  // implements Message ----------------------------------------------

  pos_request* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const pos_request& from);
  void MergeFrom(const pos_request& from);
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

  typedef pos_request_RequestType RequestType;
  static const RequestType DOWN_LOAD = pos_request_RequestType_DOWN_LOAD;
  static const RequestType UP_LOAD = pos_request_RequestType_UP_LOAD;
  static const RequestType DELETE = pos_request_RequestType_DELETE;
  static inline bool RequestType_IsValid(int value) {
    return pos_request_RequestType_IsValid(value);
  }
  static const RequestType RequestType_MIN =
    pos_request_RequestType_RequestType_MIN;
  static const RequestType RequestType_MAX =
    pos_request_RequestType_RequestType_MAX;
  static const int RequestType_ARRAYSIZE =
    pos_request_RequestType_RequestType_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  RequestType_descriptor() {
    return pos_request_RequestType_descriptor();
  }
  static inline const ::std::string& RequestType_Name(RequestType value) {
    return pos_request_RequestType_Name(value);
  }
  static inline bool RequestType_Parse(const ::std::string& name,
      RequestType* value) {
    return pos_request_RequestType_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // required .pos_request.RequestType type = 1;
  inline bool has_type() const;
  inline void clear_type();
  static const int kTypeFieldNumber = 1;
  inline ::pos_request_RequestType type() const;
  inline void set_type(::pos_request_RequestType value);

  // required string table_name = 3;
  inline bool has_table_name() const;
  inline void clear_table_name();
  static const int kTableNameFieldNumber = 3;
  inline const ::std::string& table_name() const;
  inline void set_table_name(const ::std::string& value);
  inline void set_table_name(const char* value);
  inline void set_table_name(const char* value, size_t size);
  inline ::std::string* mutable_table_name();
  inline ::std::string* release_table_name();
  inline void set_allocated_table_name(::std::string* table_name);

  // required string condtion = 4;
  inline bool has_condtion() const;
  inline void clear_condtion();
  static const int kCondtionFieldNumber = 4;
  inline const ::std::string& condtion() const;
  inline void set_condtion(const ::std::string& value);
  inline void set_condtion(const char* value);
  inline void set_condtion(const char* value, size_t size);
  inline ::std::string* mutable_condtion();
  inline ::std::string* release_condtion();
  inline void set_allocated_condtion(::std::string* condtion);

  // repeated string extra_info = 5;
  inline int extra_info_size() const;
  inline void clear_extra_info();
  static const int kExtraInfoFieldNumber = 5;
  inline const ::std::string& extra_info(int index) const;
  inline ::std::string* mutable_extra_info(int index);
  inline void set_extra_info(int index, const ::std::string& value);
  inline void set_extra_info(int index, const char* value);
  inline void set_extra_info(int index, const char* value, size_t size);
  inline ::std::string* add_extra_info();
  inline void add_extra_info(const ::std::string& value);
  inline void add_extra_info(const char* value);
  inline void add_extra_info(const char* value, size_t size);
  inline const ::google::protobuf::RepeatedPtrField< ::std::string>& extra_info() const;
  inline ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_extra_info();

  // repeated bytes data = 6;
  inline int data_size() const;
  inline void clear_data();
  static const int kDataFieldNumber = 6;
  inline const ::std::string& data(int index) const;
  inline ::std::string* mutable_data(int index);
  inline void set_data(int index, const ::std::string& value);
  inline void set_data(int index, const char* value);
  inline void set_data(int index, const void* value, size_t size);
  inline ::std::string* add_data();
  inline void add_data(const ::std::string& value);
  inline void add_data(const char* value);
  inline void add_data(const void* value, size_t size);
  inline const ::google::protobuf::RepeatedPtrField< ::std::string>& data() const;
  inline ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_data();

  // @@protoc_insertion_point(class_scope:pos_request)
 private:
  inline void set_has_type();
  inline void clear_has_type();
  inline void set_has_table_name();
  inline void clear_has_table_name();
  inline void set_has_condtion();
  inline void clear_has_condtion();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* table_name_;
  ::std::string* condtion_;
  ::google::protobuf::RepeatedPtrField< ::std::string> extra_info_;
  ::google::protobuf::RepeatedPtrField< ::std::string> data_;
  int type_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(5 + 31) / 32];

  friend void  protobuf_AddDesc_pos_5frequest_2eproto();
  friend void protobuf_AssignDesc_pos_5frequest_2eproto();
  friend void protobuf_ShutdownFile_pos_5frequest_2eproto();

  void InitAsDefaultInstance();
  static pos_request* default_instance_;
};
// -------------------------------------------------------------------

class pos_respone : public ::google::protobuf::Message {
 public:
  pos_respone();
  virtual ~pos_respone();

  pos_respone(const pos_respone& from);

  inline pos_respone& operator=(const pos_respone& from) {
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
  static const pos_respone& default_instance();

  void Swap(pos_respone* other);

  // implements Message ----------------------------------------------

  pos_respone* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const pos_respone& from);
  void MergeFrom(const pos_respone& from);
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

  // required string error = 1;
  inline bool has_error() const;
  inline void clear_error();
  static const int kErrorFieldNumber = 1;
  inline const ::std::string& error() const;
  inline void set_error(const ::std::string& value);
  inline void set_error(const char* value);
  inline void set_error(const char* value, size_t size);
  inline ::std::string* mutable_error();
  inline ::std::string* release_error();
  inline void set_allocated_error(::std::string* error);

  // repeated bytes PBdata = 2;
  inline int pbdata_size() const;
  inline void clear_pbdata();
  static const int kPBdataFieldNumber = 2;
  inline const ::std::string& pbdata(int index) const;
  inline ::std::string* mutable_pbdata(int index);
  inline void set_pbdata(int index, const ::std::string& value);
  inline void set_pbdata(int index, const char* value);
  inline void set_pbdata(int index, const void* value, size_t size);
  inline ::std::string* add_pbdata();
  inline void add_pbdata(const ::std::string& value);
  inline void add_pbdata(const char* value);
  inline void add_pbdata(const void* value, size_t size);
  inline const ::google::protobuf::RepeatedPtrField< ::std::string>& pbdata() const;
  inline ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_pbdata();

  // repeated string data = 3;
  inline int data_size() const;
  inline void clear_data();
  static const int kDataFieldNumber = 3;
  inline const ::std::string& data(int index) const;
  inline ::std::string* mutable_data(int index);
  inline void set_data(int index, const ::std::string& value);
  inline void set_data(int index, const char* value);
  inline void set_data(int index, const char* value, size_t size);
  inline ::std::string* add_data();
  inline void add_data(const ::std::string& value);
  inline void add_data(const char* value);
  inline void add_data(const char* value, size_t size);
  inline const ::google::protobuf::RepeatedPtrField< ::std::string>& data() const;
  inline ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_data();

  // @@protoc_insertion_point(class_scope:pos_respone)
 private:
  inline void set_has_error();
  inline void clear_has_error();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* error_;
  ::google::protobuf::RepeatedPtrField< ::std::string> pbdata_;
  ::google::protobuf::RepeatedPtrField< ::std::string> data_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];

  friend void  protobuf_AddDesc_pos_5frequest_2eproto();
  friend void protobuf_AssignDesc_pos_5frequest_2eproto();
  friend void protobuf_ShutdownFile_pos_5frequest_2eproto();

  void InitAsDefaultInstance();
  static pos_respone* default_instance_;
};
// ===================================================================


// ===================================================================

// pos_request

// required .pos_request.RequestType type = 1;
inline bool pos_request::has_type() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void pos_request::set_has_type() {
  _has_bits_[0] |= 0x00000001u;
}
inline void pos_request::clear_has_type() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void pos_request::clear_type() {
  type_ = 0;
  clear_has_type();
}
inline ::pos_request_RequestType pos_request::type() const {
  return static_cast< ::pos_request_RequestType >(type_);
}
inline void pos_request::set_type(::pos_request_RequestType value) {
  assert(::pos_request_RequestType_IsValid(value));
  set_has_type();
  type_ = value;
}

// required string table_name = 3;
inline bool pos_request::has_table_name() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void pos_request::set_has_table_name() {
  _has_bits_[0] |= 0x00000002u;
}
inline void pos_request::clear_has_table_name() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void pos_request::clear_table_name() {
  if (table_name_ != &::google::protobuf::internal::kEmptyString) {
    table_name_->clear();
  }
  clear_has_table_name();
}
inline const ::std::string& pos_request::table_name() const {
  return *table_name_;
}
inline void pos_request::set_table_name(const ::std::string& value) {
  set_has_table_name();
  if (table_name_ == &::google::protobuf::internal::kEmptyString) {
    table_name_ = new ::std::string;
  }
  table_name_->assign(value);
}
inline void pos_request::set_table_name(const char* value) {
  set_has_table_name();
  if (table_name_ == &::google::protobuf::internal::kEmptyString) {
    table_name_ = new ::std::string;
  }
  table_name_->assign(value);
}
inline void pos_request::set_table_name(const char* value, size_t size) {
  set_has_table_name();
  if (table_name_ == &::google::protobuf::internal::kEmptyString) {
    table_name_ = new ::std::string;
  }
  table_name_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* pos_request::mutable_table_name() {
  set_has_table_name();
  if (table_name_ == &::google::protobuf::internal::kEmptyString) {
    table_name_ = new ::std::string;
  }
  return table_name_;
}
inline ::std::string* pos_request::release_table_name() {
  clear_has_table_name();
  if (table_name_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = table_name_;
    table_name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void pos_request::set_allocated_table_name(::std::string* table_name) {
  if (table_name_ != &::google::protobuf::internal::kEmptyString) {
    delete table_name_;
  }
  if (table_name) {
    set_has_table_name();
    table_name_ = table_name;
  } else {
    clear_has_table_name();
    table_name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// required string condtion = 4;
inline bool pos_request::has_condtion() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void pos_request::set_has_condtion() {
  _has_bits_[0] |= 0x00000004u;
}
inline void pos_request::clear_has_condtion() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void pos_request::clear_condtion() {
  if (condtion_ != &::google::protobuf::internal::kEmptyString) {
    condtion_->clear();
  }
  clear_has_condtion();
}
inline const ::std::string& pos_request::condtion() const {
  return *condtion_;
}
inline void pos_request::set_condtion(const ::std::string& value) {
  set_has_condtion();
  if (condtion_ == &::google::protobuf::internal::kEmptyString) {
    condtion_ = new ::std::string;
  }
  condtion_->assign(value);
}
inline void pos_request::set_condtion(const char* value) {
  set_has_condtion();
  if (condtion_ == &::google::protobuf::internal::kEmptyString) {
    condtion_ = new ::std::string;
  }
  condtion_->assign(value);
}
inline void pos_request::set_condtion(const char* value, size_t size) {
  set_has_condtion();
  if (condtion_ == &::google::protobuf::internal::kEmptyString) {
    condtion_ = new ::std::string;
  }
  condtion_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* pos_request::mutable_condtion() {
  set_has_condtion();
  if (condtion_ == &::google::protobuf::internal::kEmptyString) {
    condtion_ = new ::std::string;
  }
  return condtion_;
}
inline ::std::string* pos_request::release_condtion() {
  clear_has_condtion();
  if (condtion_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = condtion_;
    condtion_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void pos_request::set_allocated_condtion(::std::string* condtion) {
  if (condtion_ != &::google::protobuf::internal::kEmptyString) {
    delete condtion_;
  }
  if (condtion) {
    set_has_condtion();
    condtion_ = condtion;
  } else {
    clear_has_condtion();
    condtion_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// repeated string extra_info = 5;
inline int pos_request::extra_info_size() const {
  return extra_info_.size();
}
inline void pos_request::clear_extra_info() {
  extra_info_.Clear();
}
inline const ::std::string& pos_request::extra_info(int index) const {
  return extra_info_.Get(index);
}
inline ::std::string* pos_request::mutable_extra_info(int index) {
  return extra_info_.Mutable(index);
}
inline void pos_request::set_extra_info(int index, const ::std::string& value) {
  extra_info_.Mutable(index)->assign(value);
}
inline void pos_request::set_extra_info(int index, const char* value) {
  extra_info_.Mutable(index)->assign(value);
}
inline void pos_request::set_extra_info(int index, const char* value, size_t size) {
  extra_info_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
}
inline ::std::string* pos_request::add_extra_info() {
  return extra_info_.Add();
}
inline void pos_request::add_extra_info(const ::std::string& value) {
  extra_info_.Add()->assign(value);
}
inline void pos_request::add_extra_info(const char* value) {
  extra_info_.Add()->assign(value);
}
inline void pos_request::add_extra_info(const char* value, size_t size) {
  extra_info_.Add()->assign(reinterpret_cast<const char*>(value), size);
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
pos_request::extra_info() const {
  return extra_info_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
pos_request::mutable_extra_info() {
  return &extra_info_;
}

// repeated bytes data = 6;
inline int pos_request::data_size() const {
  return data_.size();
}
inline void pos_request::clear_data() {
  data_.Clear();
}
inline const ::std::string& pos_request::data(int index) const {
  return data_.Get(index);
}
inline ::std::string* pos_request::mutable_data(int index) {
  return data_.Mutable(index);
}
inline void pos_request::set_data(int index, const ::std::string& value) {
  data_.Mutable(index)->assign(value);
}
inline void pos_request::set_data(int index, const char* value) {
  data_.Mutable(index)->assign(value);
}
inline void pos_request::set_data(int index, const void* value, size_t size) {
  data_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
}
inline ::std::string* pos_request::add_data() {
  return data_.Add();
}
inline void pos_request::add_data(const ::std::string& value) {
  data_.Add()->assign(value);
}
inline void pos_request::add_data(const char* value) {
  data_.Add()->assign(value);
}
inline void pos_request::add_data(const void* value, size_t size) {
  data_.Add()->assign(reinterpret_cast<const char*>(value), size);
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
pos_request::data() const {
  return data_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
pos_request::mutable_data() {
  return &data_;
}

// -------------------------------------------------------------------

// pos_respone

// required string error = 1;
inline bool pos_respone::has_error() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void pos_respone::set_has_error() {
  _has_bits_[0] |= 0x00000001u;
}
inline void pos_respone::clear_has_error() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void pos_respone::clear_error() {
  if (error_ != &::google::protobuf::internal::kEmptyString) {
    error_->clear();
  }
  clear_has_error();
}
inline const ::std::string& pos_respone::error() const {
  return *error_;
}
inline void pos_respone::set_error(const ::std::string& value) {
  set_has_error();
  if (error_ == &::google::protobuf::internal::kEmptyString) {
    error_ = new ::std::string;
  }
  error_->assign(value);
}
inline void pos_respone::set_error(const char* value) {
  set_has_error();
  if (error_ == &::google::protobuf::internal::kEmptyString) {
    error_ = new ::std::string;
  }
  error_->assign(value);
}
inline void pos_respone::set_error(const char* value, size_t size) {
  set_has_error();
  if (error_ == &::google::protobuf::internal::kEmptyString) {
    error_ = new ::std::string;
  }
  error_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* pos_respone::mutable_error() {
  set_has_error();
  if (error_ == &::google::protobuf::internal::kEmptyString) {
    error_ = new ::std::string;
  }
  return error_;
}
inline ::std::string* pos_respone::release_error() {
  clear_has_error();
  if (error_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = error_;
    error_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void pos_respone::set_allocated_error(::std::string* error) {
  if (error_ != &::google::protobuf::internal::kEmptyString) {
    delete error_;
  }
  if (error) {
    set_has_error();
    error_ = error;
  } else {
    clear_has_error();
    error_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// repeated bytes PBdata = 2;
inline int pos_respone::pbdata_size() const {
  return pbdata_.size();
}
inline void pos_respone::clear_pbdata() {
  pbdata_.Clear();
}
inline const ::std::string& pos_respone::pbdata(int index) const {
  return pbdata_.Get(index);
}
inline ::std::string* pos_respone::mutable_pbdata(int index) {
  return pbdata_.Mutable(index);
}
inline void pos_respone::set_pbdata(int index, const ::std::string& value) {
  pbdata_.Mutable(index)->assign(value);
}
inline void pos_respone::set_pbdata(int index, const char* value) {
  pbdata_.Mutable(index)->assign(value);
}
inline void pos_respone::set_pbdata(int index, const void* value, size_t size) {
  pbdata_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
}
inline ::std::string* pos_respone::add_pbdata() {
  return pbdata_.Add();
}
inline void pos_respone::add_pbdata(const ::std::string& value) {
  pbdata_.Add()->assign(value);
}
inline void pos_respone::add_pbdata(const char* value) {
  pbdata_.Add()->assign(value);
}
inline void pos_respone::add_pbdata(const void* value, size_t size) {
  pbdata_.Add()->assign(reinterpret_cast<const char*>(value), size);
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
pos_respone::pbdata() const {
  return pbdata_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
pos_respone::mutable_pbdata() {
  return &pbdata_;
}

// repeated string data = 3;
inline int pos_respone::data_size() const {
  return data_.size();
}
inline void pos_respone::clear_data() {
  data_.Clear();
}
inline const ::std::string& pos_respone::data(int index) const {
  return data_.Get(index);
}
inline ::std::string* pos_respone::mutable_data(int index) {
  return data_.Mutable(index);
}
inline void pos_respone::set_data(int index, const ::std::string& value) {
  data_.Mutable(index)->assign(value);
}
inline void pos_respone::set_data(int index, const char* value) {
  data_.Mutable(index)->assign(value);
}
inline void pos_respone::set_data(int index, const char* value, size_t size) {
  data_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
}
inline ::std::string* pos_respone::add_data() {
  return data_.Add();
}
inline void pos_respone::add_data(const ::std::string& value) {
  data_.Add()->assign(value);
}
inline void pos_respone::add_data(const char* value) {
  data_.Add()->assign(value);
}
inline void pos_respone::add_data(const char* value, size_t size) {
  data_.Add()->assign(reinterpret_cast<const char*>(value), size);
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
pos_respone::data() const {
  return data_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
pos_respone::mutable_data() {
  return &data_;
}


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {

template <>
inline const EnumDescriptor* GetEnumDescriptor< ::pos_request_RequestType>() {
  return ::pos_request_RequestType_descriptor();
}

}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_pos_5frequest_2eproto__INCLUDED