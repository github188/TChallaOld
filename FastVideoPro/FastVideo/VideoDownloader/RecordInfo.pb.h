// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: RecordInfo.proto

#ifndef PROTOBUF_RecordInfo_2eproto__INCLUDED
#define PROTOBUF_RecordInfo_2eproto__INCLUDED

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
void  protobuf_AddDesc_RecordInfo_2eproto();
void protobuf_AssignDesc_RecordInfo_2eproto();
void protobuf_ShutdownFile_RecordInfo_2eproto();

class RecordInfo;
class RecordInfoList;

// ===================================================================

class RecordInfo : public ::google::protobuf::Message {
 public:
  RecordInfo();
  virtual ~RecordInfo();

  RecordInfo(const RecordInfo& from);

  inline RecordInfo& operator=(const RecordInfo& from) {
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
  static const RecordInfo& default_instance();

  void Swap(RecordInfo* other);

  // implements Message ----------------------------------------------

  RecordInfo* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const RecordInfo& from);
  void MergeFrom(const RecordInfo& from);
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

  // optional int32 channel = 1;
  inline bool has_channel() const;
  inline void clear_channel();
  static const int kChannelFieldNumber = 1;
  inline ::google::protobuf::int32 channel() const;
  inline void set_channel(::google::protobuf::int32 value);

  // optional int64 size = 2;
  inline bool has_size() const;
  inline void clear_size();
  static const int kSizeFieldNumber = 2;
  inline ::google::protobuf::int64 size() const;
  inline void set_size(::google::protobuf::int64 value);

  // optional string name = 3;
  inline bool has_name() const;
  inline void clear_name();
  static const int kNameFieldNumber = 3;
  inline const ::std::string& name() const;
  inline void set_name(const ::std::string& value);
  inline void set_name(const char* value);
  inline void set_name(const char* value, size_t size);
  inline ::std::string* mutable_name();
  inline ::std::string* release_name();
  inline void set_allocated_name(::std::string* name);

  // optional int64 beginTime = 4;
  inline bool has_begintime() const;
  inline void clear_begintime();
  static const int kBeginTimeFieldNumber = 4;
  inline ::google::protobuf::int64 begintime() const;
  inline void set_begintime(::google::protobuf::int64 value);

  // optional int64 endTime = 5;
  inline bool has_endtime() const;
  inline void clear_endtime();
  static const int kEndTimeFieldNumber = 5;
  inline ::google::protobuf::int64 endtime() const;
  inline void set_endtime(::google::protobuf::int64 value);

  // optional bytes pPrivateData = 6;
  inline bool has_pprivatedata() const;
  inline void clear_pprivatedata();
  static const int kPPrivateDataFieldNumber = 6;
  inline const ::std::string& pprivatedata() const;
  inline void set_pprivatedata(const ::std::string& value);
  inline void set_pprivatedata(const char* value);
  inline void set_pprivatedata(const void* value, size_t size);
  inline ::std::string* mutable_pprivatedata();
  inline ::std::string* release_pprivatedata();
  inline void set_allocated_pprivatedata(::std::string* pprivatedata);

  // @@protoc_insertion_point(class_scope:VideoServer.RecordInfo)
 private:
  inline void set_has_channel();
  inline void clear_has_channel();
  inline void set_has_size();
  inline void clear_has_size();
  inline void set_has_name();
  inline void clear_has_name();
  inline void set_has_begintime();
  inline void clear_has_begintime();
  inline void set_has_endtime();
  inline void clear_has_endtime();
  inline void set_has_pprivatedata();
  inline void clear_has_pprivatedata();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int64 size_;
  ::std::string* name_;
  ::google::protobuf::int64 begintime_;
  ::google::protobuf::int64 endtime_;
  ::std::string* pprivatedata_;
  ::google::protobuf::int32 channel_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(6 + 31) / 32];

  friend void  protobuf_AddDesc_RecordInfo_2eproto();
  friend void protobuf_AssignDesc_RecordInfo_2eproto();
  friend void protobuf_ShutdownFile_RecordInfo_2eproto();

  void InitAsDefaultInstance();
  static RecordInfo* default_instance_;
};
// -------------------------------------------------------------------

class RecordInfoList : public ::google::protobuf::Message {
 public:
  RecordInfoList();
  virtual ~RecordInfoList();

  RecordInfoList(const RecordInfoList& from);

  inline RecordInfoList& operator=(const RecordInfoList& from) {
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
  static const RecordInfoList& default_instance();

  void Swap(RecordInfoList* other);

  // implements Message ----------------------------------------------

  RecordInfoList* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const RecordInfoList& from);
  void MergeFrom(const RecordInfoList& from);
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

  // repeated .VideoServer.RecordInfo recordInfos = 1;
  inline int recordinfos_size() const;
  inline void clear_recordinfos();
  static const int kRecordInfosFieldNumber = 1;
  inline const ::VideoServer::RecordInfo& recordinfos(int index) const;
  inline ::VideoServer::RecordInfo* mutable_recordinfos(int index);
  inline ::VideoServer::RecordInfo* add_recordinfos();
  inline const ::google::protobuf::RepeatedPtrField< ::VideoServer::RecordInfo >&
      recordinfos() const;
  inline ::google::protobuf::RepeatedPtrField< ::VideoServer::RecordInfo >*
      mutable_recordinfos();

  // @@protoc_insertion_point(class_scope:VideoServer.RecordInfoList)
 private:

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::RepeatedPtrField< ::VideoServer::RecordInfo > recordinfos_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  friend void  protobuf_AddDesc_RecordInfo_2eproto();
  friend void protobuf_AssignDesc_RecordInfo_2eproto();
  friend void protobuf_ShutdownFile_RecordInfo_2eproto();

  void InitAsDefaultInstance();
  static RecordInfoList* default_instance_;
};
// ===================================================================


// ===================================================================

// RecordInfo

// optional int32 channel = 1;
inline bool RecordInfo::has_channel() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void RecordInfo::set_has_channel() {
  _has_bits_[0] |= 0x00000001u;
}
inline void RecordInfo::clear_has_channel() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void RecordInfo::clear_channel() {
  channel_ = 0;
  clear_has_channel();
}
inline ::google::protobuf::int32 RecordInfo::channel() const {
  return channel_;
}
inline void RecordInfo::set_channel(::google::protobuf::int32 value) {
  set_has_channel();
  channel_ = value;
}

// optional int64 size = 2;
inline bool RecordInfo::has_size() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void RecordInfo::set_has_size() {
  _has_bits_[0] |= 0x00000002u;
}
inline void RecordInfo::clear_has_size() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void RecordInfo::clear_size() {
  size_ = GOOGLE_LONGLONG(0);
  clear_has_size();
}
inline ::google::protobuf::int64 RecordInfo::size() const {
  return size_;
}
inline void RecordInfo::set_size(::google::protobuf::int64 value) {
  set_has_size();
  size_ = value;
}

// optional string name = 3;
inline bool RecordInfo::has_name() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void RecordInfo::set_has_name() {
  _has_bits_[0] |= 0x00000004u;
}
inline void RecordInfo::clear_has_name() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void RecordInfo::clear_name() {
  if (name_ != &::google::protobuf::internal::kEmptyString) {
    name_->clear();
  }
  clear_has_name();
}
inline const ::std::string& RecordInfo::name() const {
  return *name_;
}
inline void RecordInfo::set_name(const ::std::string& value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(value);
}
inline void RecordInfo::set_name(const char* value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(value);
}
inline void RecordInfo::set_name(const char* value, size_t size) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* RecordInfo::mutable_name() {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  return name_;
}
inline ::std::string* RecordInfo::release_name() {
  clear_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = name_;
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void RecordInfo::set_allocated_name(::std::string* name) {
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

// optional int64 beginTime = 4;
inline bool RecordInfo::has_begintime() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void RecordInfo::set_has_begintime() {
  _has_bits_[0] |= 0x00000008u;
}
inline void RecordInfo::clear_has_begintime() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void RecordInfo::clear_begintime() {
  begintime_ = GOOGLE_LONGLONG(0);
  clear_has_begintime();
}
inline ::google::protobuf::int64 RecordInfo::begintime() const {
  return begintime_;
}
inline void RecordInfo::set_begintime(::google::protobuf::int64 value) {
  set_has_begintime();
  begintime_ = value;
}

// optional int64 endTime = 5;
inline bool RecordInfo::has_endtime() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void RecordInfo::set_has_endtime() {
  _has_bits_[0] |= 0x00000010u;
}
inline void RecordInfo::clear_has_endtime() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void RecordInfo::clear_endtime() {
  endtime_ = GOOGLE_LONGLONG(0);
  clear_has_endtime();
}
inline ::google::protobuf::int64 RecordInfo::endtime() const {
  return endtime_;
}
inline void RecordInfo::set_endtime(::google::protobuf::int64 value) {
  set_has_endtime();
  endtime_ = value;
}

// optional bytes pPrivateData = 6;
inline bool RecordInfo::has_pprivatedata() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void RecordInfo::set_has_pprivatedata() {
  _has_bits_[0] |= 0x00000020u;
}
inline void RecordInfo::clear_has_pprivatedata() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void RecordInfo::clear_pprivatedata() {
  if (pprivatedata_ != &::google::protobuf::internal::kEmptyString) {
    pprivatedata_->clear();
  }
  clear_has_pprivatedata();
}
inline const ::std::string& RecordInfo::pprivatedata() const {
  return *pprivatedata_;
}
inline void RecordInfo::set_pprivatedata(const ::std::string& value) {
  set_has_pprivatedata();
  if (pprivatedata_ == &::google::protobuf::internal::kEmptyString) {
    pprivatedata_ = new ::std::string;
  }
  pprivatedata_->assign(value);
}
inline void RecordInfo::set_pprivatedata(const char* value) {
  set_has_pprivatedata();
  if (pprivatedata_ == &::google::protobuf::internal::kEmptyString) {
    pprivatedata_ = new ::std::string;
  }
  pprivatedata_->assign(value);
}
inline void RecordInfo::set_pprivatedata(const void* value, size_t size) {
  set_has_pprivatedata();
  if (pprivatedata_ == &::google::protobuf::internal::kEmptyString) {
    pprivatedata_ = new ::std::string;
  }
  pprivatedata_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* RecordInfo::mutable_pprivatedata() {
  set_has_pprivatedata();
  if (pprivatedata_ == &::google::protobuf::internal::kEmptyString) {
    pprivatedata_ = new ::std::string;
  }
  return pprivatedata_;
}
inline ::std::string* RecordInfo::release_pprivatedata() {
  clear_has_pprivatedata();
  if (pprivatedata_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = pprivatedata_;
    pprivatedata_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void RecordInfo::set_allocated_pprivatedata(::std::string* pprivatedata) {
  if (pprivatedata_ != &::google::protobuf::internal::kEmptyString) {
    delete pprivatedata_;
  }
  if (pprivatedata) {
    set_has_pprivatedata();
    pprivatedata_ = pprivatedata;
  } else {
    clear_has_pprivatedata();
    pprivatedata_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// -------------------------------------------------------------------

// RecordInfoList

// repeated .VideoServer.RecordInfo recordInfos = 1;
inline int RecordInfoList::recordinfos_size() const {
  return recordinfos_.size();
}
inline void RecordInfoList::clear_recordinfos() {
  recordinfos_.Clear();
}
inline const ::VideoServer::RecordInfo& RecordInfoList::recordinfos(int index) const {
  return recordinfos_.Get(index);
}
inline ::VideoServer::RecordInfo* RecordInfoList::mutable_recordinfos(int index) {
  return recordinfos_.Mutable(index);
}
inline ::VideoServer::RecordInfo* RecordInfoList::add_recordinfos() {
  return recordinfos_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::VideoServer::RecordInfo >&
RecordInfoList::recordinfos() const {
  return recordinfos_;
}
inline ::google::protobuf::RepeatedPtrField< ::VideoServer::RecordInfo >*
RecordInfoList::mutable_recordinfos() {
  return &recordinfos_;
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

#endif  // PROTOBUF_RecordInfo_2eproto__INCLUDED