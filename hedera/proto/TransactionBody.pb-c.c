/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: TransactionBody.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "TransactionBody.pb-c.h"
void   proto__transaction_body__init
                     (Proto__TransactionBody         *message)
{
  static const Proto__TransactionBody init_value = PROTO__TRANSACTION_BODY__INIT;
  *message = init_value;
}
size_t proto__transaction_body__get_packed_size
                     (const Proto__TransactionBody *message)
{
  assert(message->base.descriptor == &proto__transaction_body__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t proto__transaction_body__pack
                     (const Proto__TransactionBody *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &proto__transaction_body__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t proto__transaction_body__pack_to_buffer
                     (const Proto__TransactionBody *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &proto__transaction_body__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Proto__TransactionBody *
       proto__transaction_body__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Proto__TransactionBody *)
     protobuf_c_message_unpack (&proto__transaction_body__descriptor,
                                allocator, len, data);
}
void   proto__transaction_body__free_unpacked
                     (Proto__TransactionBody *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &proto__transaction_body__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor proto__transaction_body__field_descriptors[23] =
{
  {
    "transactionID",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(Proto__TransactionBody, transactionid),
    &proto__transaction_id__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "nodeAccountID",
    2,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(Proto__TransactionBody, nodeaccountid),
    &proto__account_id__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "transactionFee",
    3,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_UINT64,
    0,   /* quantifier_offset */
    offsetof(Proto__TransactionBody, transactionfee),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "transactionValidDuration",
    4,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(Proto__TransactionBody, transactionvalidduration),
    &proto__duration__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "generateRecord",
    5,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_BOOL,
    0,   /* quantifier_offset */
    offsetof(Proto__TransactionBody, generaterecord),
    NULL,
    NULL,
    0 | PROTOBUF_C_FIELD_FLAG_DEPRECATED,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "memo",
    6,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Proto__TransactionBody, memo),
    NULL,
    &protobuf_c_empty_string,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "contractCall",
    7,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(Proto__TransactionBody, data_case),
    offsetof(Proto__TransactionBody, contractcall),
    &proto__contract_call_transaction_body__descriptor,
    NULL,
    0 | PROTOBUF_C_FIELD_FLAG_ONEOF,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "contractCreateInstance",
    8,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(Proto__TransactionBody, data_case),
    offsetof(Proto__TransactionBody, contractcreateinstance),
    &proto__contract_create_transaction_body__descriptor,
    NULL,
    0 | PROTOBUF_C_FIELD_FLAG_ONEOF,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "contractUpdateInstance",
    9,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(Proto__TransactionBody, data_case),
    offsetof(Proto__TransactionBody, contractupdateinstance),
    &proto__contract_update_transaction_body__descriptor,
    NULL,
    0 | PROTOBUF_C_FIELD_FLAG_ONEOF,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "cryptoAddClaim",
    10,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(Proto__TransactionBody, data_case),
    offsetof(Proto__TransactionBody, cryptoaddclaim),
    &proto__crypto_add_claim_transaction_body__descriptor,
    NULL,
    0 | PROTOBUF_C_FIELD_FLAG_ONEOF,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "cryptoCreateAccount",
    11,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(Proto__TransactionBody, data_case),
    offsetof(Proto__TransactionBody, cryptocreateaccount),
    &proto__crypto_create_transaction_body__descriptor,
    NULL,
    0 | PROTOBUF_C_FIELD_FLAG_ONEOF,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "cryptoDelete",
    12,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(Proto__TransactionBody, data_case),
    offsetof(Proto__TransactionBody, cryptodelete),
    &proto__crypto_delete_transaction_body__descriptor,
    NULL,
    0 | PROTOBUF_C_FIELD_FLAG_ONEOF,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "cryptoDeleteClaim",
    13,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(Proto__TransactionBody, data_case),
    offsetof(Proto__TransactionBody, cryptodeleteclaim),
    &proto__crypto_delete_claim_transaction_body__descriptor,
    NULL,
    0 | PROTOBUF_C_FIELD_FLAG_ONEOF,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "cryptoTransfer",
    14,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(Proto__TransactionBody, data_case),
    offsetof(Proto__TransactionBody, cryptotransfer),
    &proto__crypto_transfer_transaction_body__descriptor,
    NULL,
    0 | PROTOBUF_C_FIELD_FLAG_ONEOF,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "cryptoUpdateAccount",
    15,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(Proto__TransactionBody, data_case),
    offsetof(Proto__TransactionBody, cryptoupdateaccount),
    &proto__crypto_update_transaction_body__descriptor,
    NULL,
    0 | PROTOBUF_C_FIELD_FLAG_ONEOF,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "fileAppend",
    16,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(Proto__TransactionBody, data_case),
    offsetof(Proto__TransactionBody, fileappend),
    &proto__file_append_transaction_body__descriptor,
    NULL,
    0 | PROTOBUF_C_FIELD_FLAG_ONEOF,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "fileCreate",
    17,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(Proto__TransactionBody, data_case),
    offsetof(Proto__TransactionBody, filecreate),
    &proto__file_create_transaction_body__descriptor,
    NULL,
    0 | PROTOBUF_C_FIELD_FLAG_ONEOF,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "fileDelete",
    18,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(Proto__TransactionBody, data_case),
    offsetof(Proto__TransactionBody, filedelete),
    &proto__file_delete_transaction_body__descriptor,
    NULL,
    0 | PROTOBUF_C_FIELD_FLAG_ONEOF,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "fileUpdate",
    19,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(Proto__TransactionBody, data_case),
    offsetof(Proto__TransactionBody, fileupdate),
    &proto__file_update_transaction_body__descriptor,
    NULL,
    0 | PROTOBUF_C_FIELD_FLAG_ONEOF,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "systemDelete",
    20,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(Proto__TransactionBody, data_case),
    offsetof(Proto__TransactionBody, systemdelete),
    &proto__system_delete_transaction_body__descriptor,
    NULL,
    0 | PROTOBUF_C_FIELD_FLAG_ONEOF,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "systemUndelete",
    21,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(Proto__TransactionBody, data_case),
    offsetof(Proto__TransactionBody, systemundelete),
    &proto__system_undelete_transaction_body__descriptor,
    NULL,
    0 | PROTOBUF_C_FIELD_FLAG_ONEOF,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "contractDeleteInstance",
    22,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(Proto__TransactionBody, data_case),
    offsetof(Proto__TransactionBody, contractdeleteinstance),
    &proto__contract_delete_transaction_body__descriptor,
    NULL,
    0 | PROTOBUF_C_FIELD_FLAG_ONEOF,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "freeze",
    23,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(Proto__TransactionBody, data_case),
    offsetof(Proto__TransactionBody, freeze),
    &proto__freeze_transaction_body__descriptor,
    NULL,
    0 | PROTOBUF_C_FIELD_FLAG_ONEOF,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned proto__transaction_body__field_indices_by_name[] = {
  6,   /* field[6] = contractCall */
  7,   /* field[7] = contractCreateInstance */
  21,   /* field[21] = contractDeleteInstance */
  8,   /* field[8] = contractUpdateInstance */
  9,   /* field[9] = cryptoAddClaim */
  10,   /* field[10] = cryptoCreateAccount */
  11,   /* field[11] = cryptoDelete */
  12,   /* field[12] = cryptoDeleteClaim */
  13,   /* field[13] = cryptoTransfer */
  14,   /* field[14] = cryptoUpdateAccount */
  15,   /* field[15] = fileAppend */
  16,   /* field[16] = fileCreate */
  17,   /* field[17] = fileDelete */
  18,   /* field[18] = fileUpdate */
  22,   /* field[22] = freeze */
  4,   /* field[4] = generateRecord */
  5,   /* field[5] = memo */
  1,   /* field[1] = nodeAccountID */
  19,   /* field[19] = systemDelete */
  20,   /* field[20] = systemUndelete */
  2,   /* field[2] = transactionFee */
  0,   /* field[0] = transactionID */
  3,   /* field[3] = transactionValidDuration */
};
static const ProtobufCIntRange proto__transaction_body__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 23 }
};
const ProtobufCMessageDescriptor proto__transaction_body__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "proto.TransactionBody",
  "TransactionBody",
  "Proto__TransactionBody",
  "proto",
  sizeof(Proto__TransactionBody),
  23,
  proto__transaction_body__field_descriptors,
  proto__transaction_body__field_indices_by_name,
  1,  proto__transaction_body__number_ranges,
  (ProtobufCMessageInit) proto__transaction_body__init,
  NULL,NULL,NULL    /* reserved[123] */
};
