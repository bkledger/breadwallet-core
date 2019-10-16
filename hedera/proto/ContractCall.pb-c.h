/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: ContractCall.proto */

#ifndef PROTOBUF_C_ContractCall_2eproto__INCLUDED
#define PROTOBUF_C_ContractCall_2eproto__INCLUDED

#include "protobuf-c.h"

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1003000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1003002 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif

#include "BasicTypes.pb-c.h"

typedef struct _Proto__ContractCallTransactionBody Proto__ContractCallTransactionBody;


/* --- enums --- */


/* --- messages --- */

/*
 * Call a function of the given smart contract instance, giving it functionParameters as its inputs. it can use the given amount of gas, and any unspent gas will be refunded to the paying account.
 * If this function stores information, it is charged gas to store it. There is a fee in hbars to maintain that storage until the expiration time, and that fee is added as part of the transaction fee.
 */
struct  _Proto__ContractCallTransactionBody
{
  ProtobufCMessage base;
  /*
   * the contract instance to call, in the format used in transactions
   */
  Proto__ContractID *contractid;
  /*
   * the maximum amount of gas to use for the call
   */
  int64_t gas;
  /*
   * number of tinybars sent (the function must be payable if this is nonzero)
   */
  int64_t amount;
  /*
   * which function to call, and the parameters to pass to the function
   */
  ProtobufCBinaryData functionparameters;
};
#define PROTO__CONTRACT_CALL_TRANSACTION_BODY__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&proto__contract_call_transaction_body__descriptor) \
    , NULL, 0, 0, {0,NULL} }


/* Proto__ContractCallTransactionBody methods */
void   proto__contract_call_transaction_body__init
                     (Proto__ContractCallTransactionBody         *message);
size_t proto__contract_call_transaction_body__get_packed_size
                     (const Proto__ContractCallTransactionBody   *message);
size_t proto__contract_call_transaction_body__pack
                     (const Proto__ContractCallTransactionBody   *message,
                      uint8_t             *out);
size_t proto__contract_call_transaction_body__pack_to_buffer
                     (const Proto__ContractCallTransactionBody   *message,
                      ProtobufCBuffer     *buffer);
Proto__ContractCallTransactionBody *
       proto__contract_call_transaction_body__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   proto__contract_call_transaction_body__free_unpacked
                     (Proto__ContractCallTransactionBody *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*Proto__ContractCallTransactionBody_Closure)
                 (const Proto__ContractCallTransactionBody *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCMessageDescriptor proto__contract_call_transaction_body__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_ContractCall_2eproto__INCLUDED */
