// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protocol.CommandType.proto

#include "protocol.CommandType.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG
namespace Protocol {
}  // namespace Protocol
static const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* file_level_enum_descriptors_protocol_2eCommandType_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_protocol_2eCommandType_2eproto = nullptr;
const uint32_t TableStruct_protocol_2eCommandType_2eproto::offsets[1] = {};
static constexpr ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema* schemas = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::Message* const* file_default_instances = nullptr;

const char descriptor_table_protodef_protocol_2eCommandType_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\032protocol.CommandType.proto\022\010Protocol*0"
  "\n\013CommandType\022\010\n\004NONE\020\000\022\027\n\022PLAYER_INFO_U"
  "PDATE\020\271\027b\006proto3"
  ;
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_protocol_2eCommandType_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_protocol_2eCommandType_2eproto = {
  false, false, 96, descriptor_table_protodef_protocol_2eCommandType_2eproto, "protocol.CommandType.proto", 
  &descriptor_table_protocol_2eCommandType_2eproto_once, nullptr, 0, 0,
  schemas, file_default_instances, TableStruct_protocol_2eCommandType_2eproto::offsets,
  nullptr, file_level_enum_descriptors_protocol_2eCommandType_2eproto, file_level_service_descriptors_protocol_2eCommandType_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_protocol_2eCommandType_2eproto_getter() {
  return &descriptor_table_protocol_2eCommandType_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_protocol_2eCommandType_2eproto(&descriptor_table_protocol_2eCommandType_2eproto);
namespace Protocol {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* CommandType_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_protocol_2eCommandType_2eproto);
  return file_level_enum_descriptors_protocol_2eCommandType_2eproto[0];
}
bool CommandType_IsValid(int value) {
  switch (value) {
    case 0:
    case 3001:
      return true;
    default:
      return false;
  }
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace Protocol
PROTOBUF_NAMESPACE_OPEN
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
