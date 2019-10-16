/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: CryptoDeleteClaim.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "CryptoDeleteClaim.pb-c.h"
void   proto__crypto_delete_claim_transaction_body__init
                     (Proto__CryptoDeleteClaimTransactionBody         *message)
{
  static const Proto__CryptoDeleteClaimTransactionBody init_value = PROTO__CRYPTO_DELETE_CLAIM_TRANSACTION_BODY__INIT;
  *message = init_value;
}
size_t proto__crypto_delete_claim_transaction_body__get_packed_size
                     (const Proto__CryptoDeleteClaimTransactionBody *message)
{
  assert(message->base.descriptor == &proto__crypto_delete_claim_transaction_body__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t proto__crypto_delete_claim_transaction_body__pack
                     (const Proto__CryptoDeleteClaimTransactionBody *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &proto__crypto_delete_claim_transaction_body__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t proto__crypto_delete_claim_transaction_body__pack_to_buffer
                     (const Proto__CryptoDeleteClaimTransactionBody *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &proto__crypto_delete_claim_transaction_body__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Proto__CryptoDeleteClaimTransactionBody *
       proto__crypto_delete_claim_transaction_body__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Proto__CryptoDeleteClaimTransactionBody *)
     protobuf_c_message_unpack (&proto__crypto_delete_claim_transaction_body__descriptor,
                                allocator, len, data);
}
void   proto__crypto_delete_claim_transaction_body__free_unpacked
                     (Proto__CryptoDeleteClaimTransactionBody *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &proto__crypto_delete_claim_transaction_body__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor proto__crypto_delete_claim_transaction_body__field_descriptors[2] =
{
  {
    "accountIDToDeleteFrom",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(Proto__CryptoDeleteClaimTransactionBody, accountidtodeletefrom),
    &proto__account_id__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "hashToDelete",
    2,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_BYTES,
    0,   /* quantifier_offset */
    offsetof(Proto__CryptoDeleteClaimTransactionBody, hashtodelete),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned proto__crypto_delete_claim_transaction_body__field_indices_by_name[] = {
  0,   /* field[0] = accountIDToDeleteFrom */
  1,   /* field[1] = hashToDelete */
};
static const ProtobufCIntRange proto__crypto_delete_claim_transaction_body__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 2 }
};
const ProtobufCMessageDescriptor proto__crypto_delete_claim_transaction_body__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "proto.CryptoDeleteClaimTransactionBody",
  "CryptoDeleteClaimTransactionBody",
  "Proto__CryptoDeleteClaimTransactionBody",
  "proto",
  sizeof(Proto__CryptoDeleteClaimTransactionBody),
  2,
  proto__crypto_delete_claim_transaction_body__field_descriptors,
  proto__crypto_delete_claim_transaction_body__field_indices_by_name,
  1,  proto__crypto_delete_claim_transaction_body__number_ranges,
  (ProtobufCMessageInit) proto__crypto_delete_claim_transaction_body__init,
  NULL,NULL,NULL    /* reserved[123] */
};
