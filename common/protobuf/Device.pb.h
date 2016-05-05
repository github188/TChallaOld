// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Device.proto

#ifndef PROTOBUF_Device_2eproto__INCLUDED
#define PROTOBUF_Device_2eproto__INCLUDED

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
void  protobuf_AddDesc_Device_2eproto();
void protobuf_AssignDesc_Device_2eproto();
void protobuf_ShutdownFile_Device_2eproto();

class Device;
class Devices;

// ===================================================================

class Device : public ::google::protobuf::Message {
 public:
  Device();
  virtual ~Device();

  Device(const Device& from);

  inline Device& operator=(const Device& from) {
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
  static const Device& default_instance();

  void Swap(Device* other);

  // implements Message ----------------------------------------------

  Device* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Device& from);
  void MergeFrom(const Device& from);
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

  // required string sn = 2;
  inline bool has_sn() const;
  inline void clear_sn();
  static const int kSnFieldNumber = 2;
  inline const ::std::string& sn() const;
  inline void set_sn(const ::std::string& value);
  inline void set_sn(const char* value);
  inline void set_sn(const char* value, size_t size);
  inline ::std::string* mutable_sn();
  inline ::std::string* release_sn();
  inline void set_allocated_sn(::std::string* sn);

  // required string mac = 3;
  inline bool has_mac() const;
  inline void clear_mac();
  static const int kMacFieldNumber = 3;
  inline const ::std::string& mac() const;
  inline void set_mac(const ::std::string& value);
  inline void set_mac(const char* value);
  inline void set_mac(const char* value, size_t size);
  inline ::std::string* mutable_mac();
  inline ::std::string* release_mac();
  inline void set_allocated_mac(::std::string* mac);

  // required int32 enabled = 4;
  inline bool has_enabled() const;
  inline void clear_enabled();
  static const int kEnabledFieldNumber = 4;
  inline ::google::protobuf::int32 enabled() const;
  inline void set_enabled(::google::protobuf::int32 value);

  // required string name = 5;
  inline bool has_name() const;
  inline void clear_name();
  static const int kNameFieldNumber = 5;
  inline const ::std::string& name() const;
  inline void set_name(const ::std::string& value);
  inline void set_name(const char* value);
  inline void set_name(const char* value, size_t size);
  inline ::std::string* mutable_name();
  inline ::std::string* release_name();
  inline void set_allocated_name(::std::string* name);

  // required int32 devicetype_id = 6;
  inline bool has_devicetype_id() const;
  inline void clear_devicetype_id();
  static const int kDevicetypeIdFieldNumber = 6;
  inline ::google::protobuf::int32 devicetype_id() const;
  inline void set_devicetype_id(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:Device)
 private:
  inline void set_has_id();
  inline void clear_has_id();
  inline void set_has_sn();
  inline void clear_has_sn();
  inline void set_has_mac();
  inline void clear_has_mac();
  inline void set_has_enabled();
  inline void clear_has_enabled();
  inline void set_has_name();
  inline void clear_has_name();
  inline void set_has_devicetype_id();
  inline void clear_has_devicetype_id();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* sn_;
  ::google::protobuf::int32 id_;
  ::google::protobuf::int32 enabled_;
  ::std::string* mac_;
  ::std::string* name_;
  ::google::protobuf::int32 devicetype_id_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(6 + 31) / 32];

  friend void  protobuf_AddDesc_Device_2eproto();
  friend void protobuf_AssignDesc_Device_2eproto();
  friend void protobuf_ShutdownFile_Device_2eproto();

  void InitAsDefaultInstance();
  static Device* default_instance_;
};
// -------------------------------------------------------------------

class Devices : public ::google::protobuf::Message {
 public:
  Devices();
  virtual ~Devices();

  Devices(const Devices& from);

  inline Devices& operator=(const Devices& from) {
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
  static const Devices& default_instance();

  void Swap(Devices* other);

  // implements Message ----------------------------------------------

  Devices* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Devices& from);
  void MergeFrom(const Devices& from);
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

  // repeated .Device data = 1;
  inline int data_size() const;
  inline void clear_data();
  static const int kDataFieldNumber = 1;
  inline const ::Device& data(int index) const;
  inline ::Device* mutable_data(int index);
  inline ::Device* add_data();
  inline const ::google::protobuf::RepeatedPtrField< ::Device >&
      data() const;
  inline ::google::protobuf::RepeatedPtrField< ::Device >*
      mutable_data();

  // @@protoc_insertion_point(class_scope:Devices)
 private:

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::RepeatedPtrField< ::Device > data_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  friend void  protobuf_AddDesc_Device_2eproto();
  friend void protobuf_AssignDesc_Device_2eproto();
  friend void protobuf_ShutdownFile_Device_2eproto();

  void InitAsDefaultInstance();
  static Devices* default_instance_;
};
// ===================================================================


// ===================================================================

// Device

// required int32 id = 1;
inline bool Device::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Device::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Device::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Device::clear_id() {
  id_ = 0;
  clear_has_id();
}
inline ::google::protobuf::int32 Device::id() const {
  return id_;
}
inline void Device::set_id(::google::protobuf::int32 value) {
  set_has_id();
  id_ = value;
}

// required string sn = 2;
inline bool Device::has_sn() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Device::set_has_sn() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Device::clear_has_sn() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Device::clear_sn() {
  if (sn_ != &::google::protobuf::internal::kEmptyString) {
    sn_->clear();
  }
  clear_has_sn();
}
inline const ::std::string& Device::sn() const {
  return *sn_;
}
inline void Device::set_sn(const ::std::string& value) {
  set_has_sn();
  if (sn_ == &::google::protobuf::internal::kEmptyString) {
    sn_ = new ::std::string;
  }
  sn_->assign(value);
}
inline void Device::set_sn(const char* value) {
  set_has_sn();
  if (sn_ == &::google::protobuf::internal::kEmptyString) {
    sn_ = new ::std::string;
  }
  sn_->assign(value);
}
inline void Device::set_sn(const char* value, size_t size) {
  set_has_sn();
  if (sn_ == &::google::protobuf::internal::kEmptyString) {
    sn_ = new ::std::string;
  }
  sn_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* Device::mutable_sn() {
  set_has_sn();
  if (sn_ == &::google::protobuf::internal::kEmptyString) {
    sn_ = new ::std::string;
  }
  return sn_;
}
inline ::std::string* Device::release_sn() {
  clear_has_sn();
  if (sn_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = sn_;
    sn_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void Device::set_allocated_sn(::std::string* sn) {
  if (sn_ != &::google::protobuf::internal::kEmptyString) {
    delete sn_;
  }
  if (sn) {
    set_has_sn();
    sn_ = sn;
  } else {
    clear_has_sn();
    sn_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// required string mac = 3;
inline bool Device::has_mac() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Device::set_has_mac() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Device::clear_has_mac() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Device::clear_mac() {
  if (mac_ != &::google::protobuf::internal::kEmptyString) {
    mac_->clear();
  }
  clear_has_mac();
}
inline const ::std::string& Device::mac() const {
  return *mac_;
}
inline void Device::set_mac(const ::std::string& value) {
  set_has_mac();
  if (mac_ == &::google::protobuf::internal::kEmptyString) {
    mac_ = new ::std::string;
  }
  mac_->assign(value);
}
inline void Device::set_mac(const char* value) {
  set_has_mac();
  if (mac_ == &::google::protobuf::internal::kEmptyString) {
    mac_ = new ::std::string;
  }
  mac_->assign(value);
}
inline void Device::set_mac(const char* value, size_t size) {
  set_has_mac();
  if (mac_ == &::google::protobuf::internal::kEmptyString) {
    mac_ = new ::std::string;
  }
  mac_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* Device::mutable_mac() {
  set_has_mac();
  if (mac_ == &::google::protobuf::internal::kEmptyString) {
    mac_ = new ::std::string;
  }
  return mac_;
}
inline ::std::string* Device::release_mac() {
  clear_has_mac();
  if (mac_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = mac_;
    mac_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void Device::set_allocated_mac(::std::string* mac) {
  if (mac_ != &::google::protobuf::internal::kEmptyString) {
    delete mac_;
  }
  if (mac) {
    set_has_mac();
    mac_ = mac;
  } else {
    clear_has_mac();
    mac_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// required int32 enabled = 4;
inline bool Device::has_enabled() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void Device::set_has_enabled() {
  _has_bits_[0] |= 0x00000008u;
}
inline void Device::clear_has_enabled() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void Device::clear_enabled() {
  enabled_ = 0;
  clear_has_enabled();
}
inline ::google::protobuf::int32 Device::enabled() const {
  return enabled_;
}
inline void Device::set_enabled(::google::protobuf::int32 value) {
  set_has_enabled();
  enabled_ = value;
}

// required string name = 5;
inline bool Device::has_name() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void Device::set_has_name() {
  _has_bits_[0] |= 0x00000010u;
}
inline void Device::clear_has_name() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void Device::clear_name() {
  if (name_ != &::google::protobuf::internal::kEmptyString) {
    name_->clear();
  }
  clear_has_name();
}
inline const ::std::string& Device::name() const {
  return *name_;
}
inline void Device::set_name(const ::std::string& value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(value);
}
inline void Device::set_name(const char* value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(value);
}
inline void Device::set_name(const char* value, size_t size) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* Device::mutable_name() {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  return name_;
}
inline ::std::string* Device::release_name() {
  clear_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = name_;
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void Device::set_allocated_name(::std::string* name) {
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

// required int32 devicetype_id = 6;
inline bool Device::has_devicetype_id() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void Device::set_has_devicetype_id() {
  _has_bits_[0] |= 0x00000020u;
}
inline void Device::clear_has_devicetype_id() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void Device::clear_devicetype_id() {
  devicetype_id_ = 0;
  clear_has_devicetype_id();
}
inline ::google::protobuf::int32 Device::devicetype_id() const {
  return devicetype_id_;
}
inline void Device::set_devicetype_id(::google::protobuf::int32 value) {
  set_has_devicetype_id();
  devicetype_id_ = value;
}

// -------------------------------------------------------------------

// Devices

// repeated .Device data = 1;
inline int Devices::data_size() const {
  return data_.size();
}
inline void Devices::clear_data() {
  data_.Clear();
}
inline const ::Device& Devices::data(int index) const {
  return data_.Get(index);
}
inline ::Device* Devices::mutable_data(int index) {
  return data_.Mutable(index);
}
inline ::Device* Devices::add_data() {
  return data_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::Device >&
Devices::data() const {
  return data_;
}
inline ::google::protobuf::RepeatedPtrField< ::Device >*
Devices::mutable_data() {
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

#endif  // PROTOBUF_Device_2eproto__INCLUDED