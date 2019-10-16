/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: ContractCreate.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "ContractCreate.pb-c.h"
void   proto__contract_create_transaction_body__init
                     (Proto__ContractCreateTransactionBody         *message)
{
  static const Proto__ContractCreateTransactionBody init_value = PROTO__CONTRACT_CREATE_TRANSACTION_BODY__INIT;
  *message = init_value;
}
size_t proto__contract_create_transaction_body__get_packed_size
                     (const Proto__ContractCreateTransactionBody *message)
{
  assert(message->base.descriptor == &proto__contract_create_transaction_body__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t proto__contract_create_transaction_body__pack
                     (const Proto__ContractCreateTransactionBody *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &proto__contract_create_transaction_body__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t proto__contract_create_transaction_body__pack_to_buffer
                     (const Proto__ContractCreateTransactionBody *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &proto__contract_create_transaction_body__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Proto__ContractCreateTransactionBody *
       proto__contract_create_transaction_body__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Proto__ContractCreateTransactionBody *)
     protobuf_c_message_unpack (&proto__contract_create_transaction_body__descriptor,
                                allocator, len, data);
}
void   proto__contract_create_transaction_body__free_unpacked
                     (Proto__ContractCreateTransactionBody *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &proto__contract_create_transaction_body__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor proto__contract_create_transaction_body__field_descriptors[11] =
{
  {
    "fileID",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(Proto__ContractCreateTransactionBody, fileid),
    &proto__file_id__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "adminKey",
    3,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(Proto__ContractCreateTransactionBody, adminkey),
    &proto__key__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "gas",
    4,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_INT64,
    0,   /* quantifier_offset */
    offsetof(Proto__ContractCreateTransactionBody, gas),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "initialBalance",
    5,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_INT64,
    0,   /* quantifier_offset */
    offsetof(Proto__ContractCreateTransactionBody, initialbalance),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "proxyAccountID",
    6,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(Proto__ContractCreateTransactionBody, proxyaccountid),
    &proto__account_id__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "autoRenewPeriod",
    8,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(Proto__ContractCreateTransactionBody, autorenewperiod),
    &proto__duration__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "constructorParameters",
    9,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_BYTES,
    0,   /* quantifier_offset */
    offsetof(Proto__ContractCreateTransactionBody, constructorparameters),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "shardID",
    10,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(Proto__ContractCreateTransactionBody, shardid),
    &proto__shard_id__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "realmID",
    11,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(Proto__ContractCreateTransactionBody, realmid),
    &proto__realm_id__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "newRealmAdminKey",
    12,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(Proto__ContractCreateTransactionBody, newrealmadminkey),
    &proto__key__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "memo",
    13,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Proto__ContractCreateTransactionBody, memo),
    NULL,
    &protobuf_c_empty_string,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned proto__contract_create_transaction_body__field_indices_by_name[] = {
  1,   /* field[1] = adminKey */
  5,   /* field[5] = autoRenewPeriod */
  6,   /* field[6] = constructorParameters */
  0,   /* field[0] = fileID */
  2,   /* field[2] = gas */
  3,   /* field[3] = initialBalance */
  10,   /* field[10] = memo */
  9,   /* field[9] = newRealmAdminKey */
  4,   /* field[4] = proxyAccountID */
  8,   /* field[8] = realmID */
  7,   /* field[7] = shardID */
};
static const ProtobufCIntRange proto__contract_create_transaction_body__number_ranges[3 + 1] =
{
  { 1, 0 },
  { 3, 1 },
  { 8, 5 },
  { 0, 11 }
};
const ProtobufCMessageDescriptor proto__contract_create_transaction_body__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "proto.ContractCreateTransactionBody",
  "ContractCreateTransactionBody",
  "Proto__ContractCreateTransactionBody",
  "proto",
  sizeof(Proto__ContractCreateTransactionBody),
  11,
  proto__contract_create_transaction_body__field_descriptors,
  proto__contract_create_transaction_body__field_indices_by_name,
  3,  proto__contract_create_transaction_body__number_ranges,
  (ProtobufCMessageInit) proto__contract_create_transaction_body__init,
  NULL,NULL,NULL    /* reserved[123] */
};
