// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: DeviceType.proto

#ifndef PROTOBUF_DeviceType_2eproto__INCLUDED
#define PROTOBUF_DeviceType_2eproto__INCLUDED

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

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_DeviceType_2eproto();
void protobuf_AssignDesc_DeviceType_2eproto();
void protobuf_ShutdownFile_DeviceType_2eproto();

class DeviceType;
class DeviceTypes;

// ===================================================================

class DeviceType : public ::google::protobuf::Message {
 public:
  DeviceType();
  virtual ~DeviceType();

  DeviceType(const DeviceType& from);

  inline DeviceType& operator=(const DeviceType& from) {
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
  static const DeviceType& default_instance();

  void Swap(DeviceType* other);

  // implements Message ----------------------------------------------

  DeviceType* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const DeviceType& from);
  void MergeFrom(const DeviceType& from);
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

  // required int32 id = 1;
  inline bool has_id() const;
  inline void clear_id();
  static const int kIdFieldNumber = 1;
  inline ::google::protobuf::int32 id() const;
  inline void set_id(::google::protobuf::int32 value);

  // required int32 enabled = 2;
  inline bool has_enabled() const;
  inline void clear_enabled();
  static const int kEnabledFieldNumber = 2;
  inline ::google::protobuf::int32 enabled() const;
  inline void set_enabled(::google::protobuf::int32 value);

  // required int32 version_id = 3;
  inline bool has_version_id() const;
  inline void clear_version_id();
  static const int kVersionIdFieldNumber = 3;
  inline ::google::protobuf::int32 version_id() const;
  inline void set_version_id(::google::protobuf::int32 value);

  // required string name = 4;
  inline bool has_name() const;
  inline void clear_name();
  static const int kNameFieldNumber = 4;
  inline const ::std::string& name() const;
  inline void set_name(const ::std::string& value);
  inline void set_name(const char* value);
  inline void set_name(const char* value, size_t size);
  inline ::std::string* mutable_name();
  inline ::std::string* release_name();
  inline void set_allocated_name(::std::string* name);

  // @@protoc_insertion_point(class_scope:DeviceType)
 private:
  inline void set_has_id();
  inline void clear_has_id();
  inline void set_has_enabled();
  inline void clear_has_enabled();
  inline void set_has_version_id();
  inline void clear_has_version_id();
  inline void set_has_name();
  inline void clear_has_name();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int32 id_;
  ::google::protobuf::int32 enabled_;
  ::std::string* name_;
  ::google::protobuf::int32 version_id_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(4 + 31) / 32];

  friend void  protobuf_AddDesc_DeviceType_2eproto();
  friend void protobuf_AssignDesc_DeviceType_2eproto();
  friend void protobuf_ShutdownFile_DeviceType_2eproto();

  void InitAsDefaultInstance();
  static DeviceType* default_instance_;
};
// -------------------------------------------------------------------

class DeviceTypes : public ::google::protobuf::Message {
 public:
  DeviceTypes();
  virtual ~DeviceTypes();

  DeviceTypes(const DeviceTypes& from);

  inline DeviceTypes& operator=(const DeviceTypes& from) {
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
  static const DeviceTypes& default_instance();

  void Swap(DeviceTypes* other);

  // implements Message ----------------------------------------------

  DeviceTypes* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const DeviceTypes& from);
  void MergeFrom(const DeviceTypes& from);
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

  // repeated .DeviceType data = 1;
  inline int data_size() const;
  inline void clear_data();
  static const int kDataFieldNumber = 1;
  inline const ::DeviceType& data(int index) const;
  inline ::DeviceType* mutable_data(int index);
  inline ::DeviceType* add_data();
  inline const ::google::protobuf::RepeatedPtrField< ::DeviceType >&
      data() const;
  inline ::google::protobuf::RepeatedPtrField< ::DeviceType >*
      mutable_data();

  // @@protoc_insertion_point(class_scope:DeviceTypes)
 private:

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::RepeatedPtrField< ::DeviceType > data_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  friend void  protobuf_AddDesc_DeviceType_2eproto();
  friend void protobuf_AssignDesc_DeviceType_2eproto();
  friend void protobuf_ShutdownFile_DeviceType_2eproto();

  void InitAsDefaultInstance();
  static DeviceTypes* default_instance_;
};
// ===================================================================


// ===================================================================

// DeviceType

// required int32 id = 1;
inline bool DeviceType::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void DeviceType::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void DeviceType::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void DeviceType::clear_id() {
  id_ = 0;
  clear_has_id();
}
inline ::google::protobuf::int32 DeviceType::id() const {
  return id_;
}
inline void DeviceType::set_id(::google::protobuf::int32 value) {
  set_has_id();
  id_ = value;
}

// required int32 enabled = 2;
inline bool DeviceType::has_enabled() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void DeviceType::set_has_enabled() {
  _has_bits_[0] |= 0x00000002u;
}
inline void DeviceType::clear_has_enabled() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void DeviceType::clear_enabled() {
  enabled_ = 0;
  clear_has_enabled();
}
inline ::google::protobuf::int32 DeviceType::enabled() const {
  return enabled_;
}
inline void DeviceType::set_enabled(::google::protobuf::int32 value) {
  set_has_enabled();
  enabled_ = value;
}

// required int32 version_id = 3;
inline bool DeviceType::has_version_id() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void DeviceType::set_has_version_id() {
  _has_bits_[0] |= 0x00000004u;
}
inline void DeviceType::clear_has_version_id() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void DeviceType::clear_version_id() {
  version_id_ = 0;
  clear_has_version_id();
}
inline ::google::protobuf::int32 DeviceType::version_id() const {
  return version_id_;
}
inline void DeviceType::set_version_id(::google::protobuf::int32 value) {
  set_has_version_id();
  version_id_ = value;
}

// required string name = 4;
inline bool DeviceType::has_name() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void DeviceType::set_has_name() {
  _has_bits_[0] |= 0x00000008u;
}
inline void DeviceType::clear_has_name() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void DeviceType::clear_name() {
  if (name_ != &::google::protobuf::internal::kEmptyString) {
    name_->clear();
  }
  clear_has_name();
}
inline const ::std::string& DeviceType::name() const {
  return *name_;
}
inline void DeviceType::set_name(const ::std::string& value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(value);
}
inline void DeviceType::set_name(const char* value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(value);
}
inline void DeviceType::set_name(const char* value, size_t size) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* DeviceType::mutable_name() {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  return name_;
}
inline ::std::string* DeviceType::release_name() {
  clear_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = name_;
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void DeviceType::set_allocated_name(::std::string* name) {
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

// -------------------------------------------------------------------

// DeviceTypes

// repeated .DeviceType data = 1;
inline int DeviceTypes::data_size() const {
  return data_.size();
}
inline void DeviceTypes::clear_data() {
  data_.Clear();
}
inline const ::DeviceType& DeviceTypes::data(int index) const {
  return data_.Get(index);
}
inline ::DeviceType* DeviceTypes::mutable_data(int index) {
  return data_.Mutable(index);
}
inline ::DeviceType* DeviceTypes::add_data() {
  return data_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::DeviceType >&
DeviceTypes::data() const {
  return data_;
}
inline ::google::protobuf::RepeatedPtrField< ::DeviceType >*
DeviceTypes::mutable_data() {
  return &data_;
}


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_DeviceType_2eproto__INCLUDED
