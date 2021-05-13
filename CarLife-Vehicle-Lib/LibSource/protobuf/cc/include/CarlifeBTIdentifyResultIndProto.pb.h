// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: CarlifeBTIdentifyResultIndProto.proto

#ifndef PROTOBUF_CarlifeBTIdentifyResultIndProto_2eproto__INCLUDED
#define PROTOBUF_CarlifeBTIdentifyResultIndProto_2eproto__INCLUDED

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

namespace com {
namespace baidu {
namespace carlife {
namespace protobuf {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_CarlifeBTIdentifyResultIndProto_2eproto();
void protobuf_AssignDesc_CarlifeBTIdentifyResultIndProto_2eproto();
void protobuf_ShutdownFile_CarlifeBTIdentifyResultIndProto_2eproto();

class CarlifeBTIdentifyResultInd;

// ===================================================================

class CarlifeBTIdentifyResultInd : public ::google::protobuf::Message {
 public:
  CarlifeBTIdentifyResultInd();
  virtual ~CarlifeBTIdentifyResultInd();

  CarlifeBTIdentifyResultInd(const CarlifeBTIdentifyResultInd& from);

  inline CarlifeBTIdentifyResultInd& operator=(const CarlifeBTIdentifyResultInd& from) {
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
  static const CarlifeBTIdentifyResultInd& default_instance();

  void Swap(CarlifeBTIdentifyResultInd* other);

  // implements Message ----------------------------------------------

  CarlifeBTIdentifyResultInd* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const CarlifeBTIdentifyResultInd& from);
  void MergeFrom(const CarlifeBTIdentifyResultInd& from);
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

  // required int32 status = 1;
  inline bool has_status() const;
  inline void clear_status();
  static const int kStatusFieldNumber = 1;
  inline ::google::protobuf::int32 status() const;
  inline void set_status(::google::protobuf::int32 value);

  // required string address = 2;
  inline bool has_address() const;
  inline void clear_address();
  static const int kAddressFieldNumber = 2;
  inline const ::std::string& address() const;
  inline void set_address(const ::std::string& value);
  inline void set_address(const char* value);
  inline void set_address(const char* value, size_t size);
  inline ::std::string* mutable_address();
  inline ::std::string* release_address();
  inline void set_allocated_address(::std::string* address);

  // @@protoc_insertion_point(class_scope:com.baidu.carlife.protobuf.CarlifeBTIdentifyResultInd)
 private:
  inline void set_has_status();
  inline void clear_has_status();
  inline void set_has_address();
  inline void clear_has_address();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* address_;
  ::google::protobuf::int32 status_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  friend void  protobuf_AddDesc_CarlifeBTIdentifyResultIndProto_2eproto();
  friend void protobuf_AssignDesc_CarlifeBTIdentifyResultIndProto_2eproto();
  friend void protobuf_ShutdownFile_CarlifeBTIdentifyResultIndProto_2eproto();

  void InitAsDefaultInstance();
  static CarlifeBTIdentifyResultInd* default_instance_;
};
// ===================================================================


// ===================================================================

// CarlifeBTIdentifyResultInd

// required int32 status = 1;
inline bool CarlifeBTIdentifyResultInd::has_status() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void CarlifeBTIdentifyResultInd::set_has_status() {
  _has_bits_[0] |= 0x00000001u;
}
inline void CarlifeBTIdentifyResultInd::clear_has_status() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void CarlifeBTIdentifyResultInd::clear_status() {
  status_ = 0;
  clear_has_status();
}
inline ::google::protobuf::int32 CarlifeBTIdentifyResultInd::status() const {
  return status_;
}
inline void CarlifeBTIdentifyResultInd::set_status(::google::protobuf::int32 value) {
  set_has_status();
  status_ = value;
}

// required string address = 2;
inline bool CarlifeBTIdentifyResultInd::has_address() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void CarlifeBTIdentifyResultInd::set_has_address() {
  _has_bits_[0] |= 0x00000002u;
}
inline void CarlifeBTIdentifyResultInd::clear_has_address() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void CarlifeBTIdentifyResultInd::clear_address() {
  if (address_ != &::google::protobuf::internal::kEmptyString) {
    address_->clear();
  }
  clear_has_address();
}
inline const ::std::string& CarlifeBTIdentifyResultInd::address() const {
  return *address_;
}
inline void CarlifeBTIdentifyResultInd::set_address(const ::std::string& value) {
  set_has_address();
  if (address_ == &::google::protobuf::internal::kEmptyString) {
    address_ = new ::std::string;
  }
  address_->assign(value);
}
inline void CarlifeBTIdentifyResultInd::set_address(const char* value) {
  set_has_address();
  if (address_ == &::google::protobuf::internal::kEmptyString) {
    address_ = new ::std::string;
  }
  address_->assign(value);
}
inline void CarlifeBTIdentifyResultInd::set_address(const char* value, size_t size) {
  set_has_address();
  if (address_ == &::google::protobuf::internal::kEmptyString) {
    address_ = new ::std::string;
  }
  address_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* CarlifeBTIdentifyResultInd::mutable_address() {
  set_has_address();
  if (address_ == &::google::protobuf::internal::kEmptyString) {
    address_ = new ::std::string;
  }
  return address_;
}
inline ::std::string* CarlifeBTIdentifyResultInd::release_address() {
  clear_has_address();
  if (address_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = address_;
    address_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void CarlifeBTIdentifyResultInd::set_allocated_address(::std::string* address) {
  if (address_ != &::google::protobuf::internal::kEmptyString) {
    delete address_;
  }
  if (address) {
    set_has_address();
    address_ = address;
  } else {
    clear_has_address();
    address_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
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

#endif  // PROTOBUF_CarlifeBTIdentifyResultIndProto_2eproto__INCLUDED