// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ex1.proto

#include "ex1.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)

namespace protobuf_ex1_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_ex1_2eproto ::google::protobuf::internal::SCCInfo<0> scc_info_Address;
}  // namespace protobuf_ex1_2eproto
class PersonDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Person>
      _instance;
} _Person_default_instance_;
class AddressDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Address>
      _instance;
} _Address_default_instance_;
namespace protobuf_ex1_2eproto {
static void InitDefaultsPerson() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::_Person_default_instance_;
    new (ptr) ::Person();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::Person::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<1> scc_info_Person =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 1, InitDefaultsPerson}, {
      &protobuf_ex1_2eproto::scc_info_Address.base,}};

static void InitDefaultsAddress() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::_Address_default_instance_;
    new (ptr) ::Address();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::Address::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_Address =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsAddress}, {}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_Person.base);
  ::google::protobuf::internal::InitSCC(&scc_info_Address.base);
}

::google::protobuf::Metadata file_level_metadata[2];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::Person, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::Person, name_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::Person, age_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::Person, addresses_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::Address, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::Address, street_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::Address, zip_code_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::Person)},
  { 8, -1, sizeof(::Address)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::_Person_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&::_Address_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "ex1.proto", schemas, file_default_instances, TableStruct::offsets,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 2);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\tex1.proto\"@\n\006Person\022\014\n\004name\030\001 \001(\t\022\013\n\003a"
      "ge\030\002 \001(\005\022\033\n\taddresses\030\003 \003(\0132\010.Address\"+\n"
      "\007Address\022\016\n\006street\030\001 \001(\t\022\020\n\010zip_code\030\002 \001"
      "(\tb\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 130);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "ex1.proto", &protobuf_RegisterTypes);
}

void AddDescriptors() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_ex1_2eproto

// ===================================================================

void Person::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Person::kNameFieldNumber;
const int Person::kAgeFieldNumber;
const int Person::kAddressesFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Person::Person()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_ex1_2eproto::scc_info_Person.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:Person)
}
Person::Person(const Person& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      addresses_(from.addresses_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.name().size() > 0) {
    name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  age_ = from.age_;
  // @@protoc_insertion_point(copy_constructor:Person)
}

void Person::SharedCtor() {
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  age_ = 0;
}

Person::~Person() {
  // @@protoc_insertion_point(destructor:Person)
  SharedDtor();
}

void Person::SharedDtor() {
  name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void Person::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* Person::descriptor() {
  ::protobuf_ex1_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_ex1_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const Person& Person::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_ex1_2eproto::scc_info_Person.base);
  return *internal_default_instance();
}


void Person::Clear() {
// @@protoc_insertion_point(message_clear_start:Person)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  addresses_.Clear();
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  age_ = 0;
  _internal_metadata_.Clear();
}

bool Person::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:Person)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string name = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_name()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->name().data(), static_cast<int>(this->name().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "Person.name"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 age = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &age_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .Address addresses = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
                input, add_addresses()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:Person)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:Person)
  return false;
#undef DO_
}

void Person::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:Person)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string name = 1;
  if (this->name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->name().data(), static_cast<int>(this->name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "Person.name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->name(), output);
  }

  // int32 age = 2;
  if (this->age() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->age(), output);
  }

  // repeated .Address addresses = 3;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->addresses_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3,
      this->addresses(static_cast<int>(i)),
      output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:Person)
}

::google::protobuf::uint8* Person::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:Person)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string name = 1;
  if (this->name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->name().data(), static_cast<int>(this->name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "Person.name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->name(), target);
  }

  // int32 age = 2;
  if (this->age() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->age(), target);
  }

  // repeated .Address addresses = 3;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->addresses_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        3, this->addresses(static_cast<int>(i)), deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Person)
  return target;
}

size_t Person::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Person)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated .Address addresses = 3;
  {
    unsigned int count = static_cast<unsigned int>(this->addresses_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          this->addresses(static_cast<int>(i)));
    }
  }

  // string name = 1;
  if (this->name().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->name());
  }

  // int32 age = 2;
  if (this->age() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->age());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Person::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:Person)
  GOOGLE_DCHECK_NE(&from, this);
  const Person* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Person>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:Person)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:Person)
    MergeFrom(*source);
  }
}

void Person::MergeFrom(const Person& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:Person)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  addresses_.MergeFrom(from.addresses_);
  if (from.name().size() > 0) {

    name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  if (from.age() != 0) {
    set_age(from.age());
  }
}

void Person::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:Person)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Person::CopyFrom(const Person& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Person)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Person::IsInitialized() const {
  return true;
}

void Person::Swap(Person* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Person::InternalSwap(Person* other) {
  using std::swap;
  CastToBase(&addresses_)->InternalSwap(CastToBase(&other->addresses_));
  name_.Swap(&other->name_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(age_, other->age_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata Person::GetMetadata() const {
  protobuf_ex1_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_ex1_2eproto::file_level_metadata[kIndexInFileMessages];
}


// ===================================================================

void Address::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Address::kStreetFieldNumber;
const int Address::kZipCodeFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Address::Address()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_ex1_2eproto::scc_info_Address.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:Address)
}
Address::Address(const Address& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  street_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.street().size() > 0) {
    street_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.street_);
  }
  zip_code_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.zip_code().size() > 0) {
    zip_code_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.zip_code_);
  }
  // @@protoc_insertion_point(copy_constructor:Address)
}

void Address::SharedCtor() {
  street_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  zip_code_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

Address::~Address() {
  // @@protoc_insertion_point(destructor:Address)
  SharedDtor();
}

void Address::SharedDtor() {
  street_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  zip_code_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void Address::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* Address::descriptor() {
  ::protobuf_ex1_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_ex1_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const Address& Address::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_ex1_2eproto::scc_info_Address.base);
  return *internal_default_instance();
}


void Address::Clear() {
// @@protoc_insertion_point(message_clear_start:Address)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  street_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  zip_code_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _internal_metadata_.Clear();
}

bool Address::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:Address)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string street = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_street()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->street().data(), static_cast<int>(this->street().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "Address.street"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string zip_code = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_zip_code()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->zip_code().data(), static_cast<int>(this->zip_code().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "Address.zip_code"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:Address)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:Address)
  return false;
#undef DO_
}

void Address::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:Address)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string street = 1;
  if (this->street().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->street().data(), static_cast<int>(this->street().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "Address.street");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->street(), output);
  }

  // string zip_code = 2;
  if (this->zip_code().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->zip_code().data(), static_cast<int>(this->zip_code().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "Address.zip_code");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->zip_code(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:Address)
}

::google::protobuf::uint8* Address::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:Address)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string street = 1;
  if (this->street().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->street().data(), static_cast<int>(this->street().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "Address.street");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->street(), target);
  }

  // string zip_code = 2;
  if (this->zip_code().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->zip_code().data(), static_cast<int>(this->zip_code().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "Address.zip_code");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->zip_code(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Address)
  return target;
}

size_t Address::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Address)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // string street = 1;
  if (this->street().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->street());
  }

  // string zip_code = 2;
  if (this->zip_code().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->zip_code());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Address::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:Address)
  GOOGLE_DCHECK_NE(&from, this);
  const Address* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Address>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:Address)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:Address)
    MergeFrom(*source);
  }
}

void Address::MergeFrom(const Address& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:Address)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.street().size() > 0) {

    street_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.street_);
  }
  if (from.zip_code().size() > 0) {

    zip_code_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.zip_code_);
  }
}

void Address::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:Address)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Address::CopyFrom(const Address& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Address)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Address::IsInitialized() const {
  return true;
}

void Address::Swap(Address* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Address::InternalSwap(Address* other) {
  using std::swap;
  street_.Swap(&other->street_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  zip_code_.Swap(&other->zip_code_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata Address::GetMetadata() const {
  protobuf_ex1_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_ex1_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::Person* Arena::CreateMaybeMessage< ::Person >(Arena* arena) {
  return Arena::CreateInternal< ::Person >(arena);
}
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::Address* Arena::CreateMaybeMessage< ::Address >(Arena* arena) {
  return Arena::CreateInternal< ::Address >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
