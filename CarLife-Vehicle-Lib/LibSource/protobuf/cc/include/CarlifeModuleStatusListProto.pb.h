// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: CarlifeModuleStatusListProto.proto

#ifndef PROTOBUF_CarlifeModuleStatusListProto_2eproto__INCLUDED
#define PROTOBUF_CarlifeModuleStatusListProto_2eproto__INCLUDED

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
#include "CarlifeModuleStatusProto.pb.h"
// @@protoc_insertion_point(includes)

namespace com {
namespace baidu {
namespace carlife {
namespace protobuf {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_CarlifeModuleStatusListProto_2eproto();
void protobuf_AssignDesc_CarlifeModuleStatusListProto_2eproto();
void protobuf_ShutdownFile_CarlifeModuleStatusListProto_2eproto();

class CarlifeModuleStatusList;

// ===================================================================

class CarlifeModuleStatusList : public ::google::protobuf::Message {
 public:
  CarlifeModuleStatusList();
  virtual ~CarlifeModuleStatusList();

  CarlifeModuleStatusList(const CarlifeModuleStatusList& from);

  inline CarlifeModuleStatusList& operator=(const CarlifeModuleStatusList& from) {
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
  static const CarlifeModuleStatusList& default_instance();

  void Swap(CarlifeModuleStatusList* other);

  // implements Message ----------------------------------------------

  CarlifeModuleStatusList* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const CarlifeModuleStatusList& from);
  void MergeFrom(const CarlifeModuleStatusList& from);
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

  // required int32 cnt = 1;
  inline bool has_cnt() const;
  inline void clear_cnt();
  static const int kCntFieldNumber = 1;
  inline ::google::protobuf::int32 cnt() const;
  inline void set_cnt(::google::protobuf::int32 value);

  // repeated .com.baidu.carlife.protobuf.CarlifeModuleStatus moduleStatus = 2;
  inline int modulestatus_size() const;
  inline void clear_modulestatus();
  static const int kModuleStatusFieldNumber = 2;
  inline const ::com::baidu::carlife::protobuf::CarlifeModuleStatus& modulestatus(int index) const;
  inline ::com::baidu::carlife::protobuf::CarlifeModuleStatus* mutable_modulestatus(int index);
  inline ::com::baidu::carlife::protobuf::CarlifeModuleStatus* add_modulestatus();
  inline const ::google::protobuf::RepeatedPtrField< ::com::baidu::carlife::protobuf::CarlifeModuleStatus >&
      modulestatus() const;
  inline ::google::protobuf::RepeatedPtrField< ::com::baidu::carlife::protobuf::CarlifeModuleStatus >*
      mutable_modulestatus();

  // @@protoc_insertion_point(class_scope:com.baidu.carlife.protobuf.CarlifeModuleStatusList)
 private:
  inline void set_has_cnt();
  inline void clear_has_cnt();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::RepeatedPtrField< ::com::baidu::carlife::protobuf::CarlifeModuleStatus > modulestatus_;
  ::google::protobuf::int32 cnt_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  friend void  protobuf_AddDesc_CarlifeModuleStatusListProto_2eproto();
  friend void protobuf_AssignDesc_CarlifeModuleStatusListProto_2eproto();
  friend void protobuf_ShutdownFile_CarlifeModuleStatusListProto_2eproto();

  void InitAsDefaultInstance();
  static CarlifeModuleStatusList* default_instance_;
};
// ===================================================================


// ===================================================================

// CarlifeModuleStatusList

// required int32 cnt = 1;
inline bool CarlifeModuleStatusList::has_cnt() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void CarlifeModuleStatusList::set_has_cnt() {
  _has_bits_[0] |= 0x00000001u;
}
inline void CarlifeModuleStatusList::clear_has_cnt() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void CarlifeModuleStatusList::clear_cnt() {
  cnt_ = 0;
  clear_has_cnt();
}
inline ::google::protobuf::int32 CarlifeModuleStatusList::cnt() const {
  return cnt_;
}
inline void CarlifeModuleStatusList::set_cnt(::google::protobuf::int32 value) {
  set_has_cnt();
  cnt_ = value;
}

// repeated .com.baidu.carlife.protobuf.CarlifeModuleStatus moduleStatus = 2;
inline int CarlifeModuleStatusList::modulestatus_size() const {
  return modulestatus_.size();
}
inline void CarlifeModuleStatusList::clear_modulestatus() {
  modulestatus_.Clear();
}
inline const ::com::baidu::carlife::protobuf::CarlifeModuleStatus& CarlifeModuleStatusList::modulestatus(int index) const {
  return modulestatus_.Get(index);
}
inline ::com::baidu::carlife::protobuf::CarlifeModuleStatus* CarlifeModuleStatusList::mutable_modulestatus(int index) {
  return modulestatus_.Mutable(index);
}
inline ::com::baidu::carlife::protobuf::CarlifeModuleStatus* CarlifeModuleStatusList::add_modulestatus() {
  return modulestatus_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::com::baidu::carlife::protobuf::CarlifeModuleStatus >&
CarlifeModuleStatusList::modulestatus() const {
  return modulestatus_;
}
inline ::google::protobuf::RepeatedPtrField< ::com::baidu::carlife::protobuf::CarlifeModuleStatus >*
CarlifeModuleStatusList::mutable_modulestatus() {
  return &modulestatus_;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace protobuf
}  // namespace carlife
}  // namespace baidu
}  // namespace com

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_CarlifeModuleStatusListProto_2eproto__INCLUDED
