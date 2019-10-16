/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: FileDelete.proto */

#ifndef PROTOBUF_C_FileDelete_2eproto__INCLUDED
#define PROTOBUF_C_FileDelete_2eproto__INCLUDED

#include "protobuf-c.h"

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1003000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1003002 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif

#include "BasicTypes.pb-c.h"

typedef struct _Proto__FileDeleteTransactionBody Proto__FileDeleteTransactionBody;


/* --- enums --- */


/* --- messages --- */

/*
 * Delete the given file. After deletion, it will be marked as deleted and will have no contents. But information about it will continue to exist until it expires. A list of keys  was given when the file was created. All the keys on that list must sign transactions to create or modify the file, but any single one of them can be used to delete the file. Each "key" on that list may itself be a threshold key containing other keys (including other threshold keys). 
 */
struct  _Proto__FileDeleteTransactionBody
{
  ProtobufCMessage base;
  /*
   * The file to delete. It will be marked as deleted until it expires. Then it will disappear.
   */
  Proto__FileID *fileid;
};
#define PROTO__FILE_DELETE_TRANSACTION_BODY__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&proto__file_delete_transaction_body__descriptor) \
    , NULL }


/* Proto__FileDeleteTransactionBody methods */
void   proto__file_delete_transaction_body__init
                     (Proto__FileDeleteTransactionBody         *message);
size_t proto__file_delete_transaction_body__get_packed_size
                     (const Proto__FileDeleteTransactionBody   *message);
size_t proto__file_delete_transaction_body__pack
                     (const Proto__FileDeleteTransactionBody   *message,
                      uint8_t             *out);
size_t proto__file_delete_transaction_body__pack_to_buffer
                     (const Proto__FileDeleteTransactionBody   *message,
                      ProtobufCBuffer     *buffer);
Proto__FileDeleteTransactionBody *
       proto__file_delete_transaction_body__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   proto__file_delete_transaction_body__free_unpacked
                     (Proto__FileDeleteTransactionBody *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*Proto__FileDeleteTransactionBody_Closure)
                 (const Proto__FileDeleteTransactionBody *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCMessageDescriptor proto__file_delete_transaction_body__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_FileDelete_2eproto__INCLUDED */
