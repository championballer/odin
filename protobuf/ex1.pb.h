// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ex1.proto

#ifndef PROTOBUF_INCLUDED_ex1_2eproto
#define PROTOBUF_INCLUDED_ex1_2eproto

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3006001
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_ex1_2eproto 

namespace protobuf_ex1_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[2];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
}  // namespace protobuf_ex1_2eproto
class Address;
class AddressDefaultTypeInternal;
extern AddressDefaultTypeInternal _Address_default_instance_;
class Person;
class PersonDefaultTypeInternal;
extern PersonDefaultTypeInternal _Person_default_instance_;
namespace google {
namespace protobuf {
template<> ::Address* Arena::CreateMaybeMessage<::Address>(Arena*);
template<> ::Person* Arena::CreateMaybeMessage<::Person>(Arena*);
}  // namespace protobuf
}  // namespace google

// ===================================================================

class Person : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:Person) */ {
 public:
  Person();
  virtual ~Person();

  Person(const Person& from);

  inline Person& operator=(const Person& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Person(Person&& from) noexcept
    : Person() {
    *this = ::std::move(from);
  }

  inline Person& operator=(Person&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const Person& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Person* internal_default_instance() {
    return reinterpret_cast<const Person*>(
               &_Person_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(Person* other);
  friend void swap(Person& a, Person& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Person* New() const final {
    return CreateMaybeMessage<Person>(NULL);
  }

  Person* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Person>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Person& from);
  void MergeFrom(const Person& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Person* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .Address addresses = 3;
  int addresses_size() const;
  void clear_addresses();
  static const int kAddressesFieldNumber = 3;
  ::Address* mutable_addresses(int index);
  ::google::protobuf::RepeatedPtrField< ::Address >*
      mutable_addresses();
  const ::Address& addresses(int index) const;
  ::Address* add_addresses();
  const ::google::protobuf::RepeatedPtrField< ::Address >&
      addresses() const;

  // string name = 1;
  void clear_name();
  static const int kNameFieldNumber = 1;
  const ::std::string& name() const;
  void set_name(const ::std::string& value);
  #if LANG_CXX11
  void set_name(::std::string&& value);
  #endif
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  ::std::string* mutable_name();
  ::std::string* release_name();
  void set_allocated_name(::std::string* name);

  // int32 age = 2;
  void clear_age();
  static const int kAgeFieldNumber = 2;
  ::google::protobuf::int32 age() const;
  void set_age(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:Person)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::Address > addresses_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  ::google::protobuf::int32 age_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_ex1_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class Address : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:Address) */ {
 public:
  Address();
  virtual ~Address();

  Address(const Address& from);

  inline Address& operator=(const Address& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Address(Address&& from) noexcept
    : Address() {
    *this = ::std::move(from);
  }

  inline Address& operator=(Address&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const Address& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Address* internal_default_instance() {
    return reinterpret_cast<const Address*>(
               &_Address_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(Address* other);
  friend void swap(Address& a, Address& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Address* New() const final {
    return CreateMaybeMessage<Address>(NULL);
  }

  Address* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Address>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Address& from);
  void MergeFrom(const Address& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Address* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string street = 1;
  void clear_street();
  static const int kStreetFieldNumber = 1;
  const ::std::string& street() const;
  void set_street(const ::std::string& value);
  #if LANG_CXX11
  void set_street(::std::string&& value);
  #endif
  void set_street(const char* value);
  void set_street(const char* value, size_t size);
  ::std::string* mutable_street();
  ::std::string* release_street();
  void set_allocated_street(::std::string* street);

  // string zip_code = 2;
  void clear_zip_code();
  static const int kZipCodeFieldNumber = 2;
  const ::std::string& zip_code() const;
  void set_zip_code(const ::std::string& value);
  #if LANG_CXX11
  void set_zip_code(::std::string&& value);
  #endif
  void set_zip_code(const char* value);
  void set_zip_code(const char* value, size_t size);
  ::std::string* mutable_zip_code();
  ::std::string* release_zip_code();
  void set_allocated_zip_code(::std::string* zip_code);

  // @@protoc_insertion_point(class_scope:Address)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr street_;
  ::google::protobuf::internal::ArenaStringPtr zip_code_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_ex1_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Person

// string name = 1;
inline void Person::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Person::name() const {
  // @@protoc_insertion_point(field_get:Person.name)
  return name_.GetNoArena();
}
inline void Person::set_name(const ::std::string& value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:Person.name)
}
#if LANG_CXX11
inline void Person::set_name(::std::string&& value) {
  
  name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:Person.name)
}
#endif
inline void Person::set_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:Person.name)
}
inline void Person::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:Person.name)
}
inline ::std::string* Person::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:Person.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Person::release_name() {
  // @@protoc_insertion_point(field_release:Person.name)
  
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Person::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:Person.name)
}

// int32 age = 2;
inline void Person::clear_age() {
  age_ = 0;
}
inline ::google::protobuf::int32 Person::age() const {
  // @@protoc_insertion_point(field_get:Person.age)
  return age_;
}
inline void Person::set_age(::google::protobuf::int32 value) {
  
  age_ = value;
  // @@protoc_insertion_point(field_set:Person.age)
}

// repeated .Address addresses = 3;
inline int Person::addresses_size() const {
  return addresses_.size();
}
inline void Person::clear_addresses() {
  addresses_.Clear();
}
inline ::Address* Person::mutable_addresses(int index) {
  // @@protoc_insertion_point(field_mutable:Person.addresses)
  return addresses_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::Address >*
Person::mutable_addresses() {
  // @@protoc_insertion_point(field_mutable_list:Person.addresses)
  return &addresses_;
}
inline const ::Address& Person::addresses(int index) const {
  // @@protoc_insertion_point(field_get:Person.addresses)
  return addresses_.Get(index);
}
inline ::Address* Person::add_addresses() {
  // @@protoc_insertion_point(field_add:Person.addresses)
  return addresses_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::Address >&
Person::addresses() const {
  // @@protoc_insertion_point(field_list:Person.addresses)
  return addresses_;
}

// -------------------------------------------------------------------

// Address

// string street = 1;
inline void Address::clear_street() {
  street_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Address::street() const {
  // @@protoc_insertion_point(field_get:Address.street)
  return street_.GetNoArena();
}
inline void Address::set_street(const ::std::string& value) {
  
  street_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:Address.street)
}
#if LANG_CXX11
inline void Address::set_street(::std::string&& value) {
  
  street_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:Address.street)
}
#endif
inline void Address::set_street(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  street_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:Address.street)
}
inline void Address::set_street(const char* value, size_t size) {
  
  street_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:Address.street)
}
inline ::std::string* Address::mutable_street() {
  
  // @@protoc_insertion_point(field_mutable:Address.street)
  return street_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Address::release_street() {
  // @@protoc_insertion_point(field_release:Address.street)
  
  return street_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Address::set_allocated_street(::std::string* street) {
  if (street != NULL) {
    
  } else {
    
  }
  street_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), street);
  // @@protoc_insertion_point(field_set_allocated:Address.street)
}

// string zip_code = 2;
inline void Address::clear_zip_code() {
  zip_code_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Address::zip_code() const {
  // @@protoc_insertion_point(field_get:Address.zip_code)
  return zip_code_.GetNoArena();
}
inline void Address::set_zip_code(const ::std::string& value) {
  
  zip_code_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:Address.zip_code)
}
#if LANG_CXX11
inline void Address::set_zip_code(::std::string&& value) {
  
  zip_code_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:Address.zip_code)
}
#endif
inline void Address::set_zip_code(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  zip_code_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:Address.zip_code)
}
inline void Address::set_zip_code(const char* value, size_t size) {
  
  zip_code_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:Address.zip_code)
}
inline ::std::string* Address::mutable_zip_code() {
  
  // @@protoc_insertion_point(field_mutable:Address.zip_code)
  return zip_code_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Address::release_zip_code() {
  // @@protoc_insertion_point(field_release:Address.zip_code)
  
  return zip_code_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Address::set_allocated_zip_code(::std::string* zip_code) {
  if (zip_code != NULL) {
    
  } else {
    
  }
  zip_code_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), zip_code);
  // @@protoc_insertion_point(field_set_allocated:Address.zip_code)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_ex1_2eproto