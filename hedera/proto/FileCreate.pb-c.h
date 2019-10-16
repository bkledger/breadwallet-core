/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: FileCreate.proto */

#ifndef PROTOBUF_C_FileCreate_2eproto__INCLUDED
#define PROTOBUF_C_FileCreate_2eproto__INCLUDED

#include "protobuf-c.h"

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1003000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1003002 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif

#include "BasicTypes.pb-c.h"
#include "Timestamp.pb-c.h"

typedef struct _Proto__FileCreateTransactionBody Proto__FileCreateTransactionBody;


/* --- enums --- */


/* --- messages --- */

/*
 * Create a new file, containing the given contents.  It is referenced by its FileID, and does not have a filename, so it is important to get the FileID. After the file is created, the FileID for it can be found in the receipt, or retrieved with a GetByKey query, or by asking for a Record of the transaction to be created, and retrieving that.
 * The file contains the given contents (possibly empty). The file will automatically disappear at the fileExpirationTime, unless its expiration is extended by another transaction before that time. If the file is deleted, then its contents will become empty and it will be marked as deleted until it expires, and then it will cease to exist. See FileGetInfoQuery for more information about files.
 * The keys field is a list of keys. All the keys on the list must sign to create or modify a file, but only one of them needs to sign in order to delete the file.  Each of those "keys" may itself be threshold key containing other keys (including other threshold keys). In other words, the behavior is an AND for create/modify, OR for delete. This is useful for acting as a revocation server. If it is desired to have the behavior be AND for all 3 operations (or OR for all 3), then the list should have only a single Key, which is a threshold key, with N=1 for OR, N=M for AND.
 * If a file is created without ANY keys in the keys field, the file is immutable ONLY the expirationTime of the file can be changed using FileUpdate API. The file contents or its keys cannot be changed.
 * An entity (account, file, or smart contract instance) must be created in a particular realm. If the realmID is left null, then a new realm will be created with the given admin key. If a new realm has a null adminKey, then anyone can create/modify/delete entities in that realm. But if an admin key is given, then any transaction to create/modify/delete an entity in that realm must be signed by that key, though anyone can still call functions on smart contract instances that exist in that realm. A realm ceases to exist when everything within it has expired and no longer exists.
 * The current API ignores shardID, realmID, and newRealmAdminKey, and creates everything in shard 0 and realm 0, with a null key. Future versions of the API will support multiple realms and multiple shards.
 */
struct  _Proto__FileCreateTransactionBody
{
  ProtobufCMessage base;
  /*
   * The time at which this file should expire (unless FileUpdateTransaction is used before then to extend its life)
   */
  Proto__Timestamp *expirationtime;
  /*
   * All these keys must sign to create or modify the file. Any one of them can sign to delete the file.
   */
  Proto__KeyList *keys;
  /*
   * The bytes that are the contents of the file
   */
  ProtobufCBinaryData contents;
  /*
   * Shard in which this file is created
   */
  Proto__ShardID *shardid;
  /*
   * The Realm in which to the file is created (leave this null to create a new realm)
   */
  Proto__RealmID *realmid;
  /*
   * If realmID is null, then this the admin key for the new realm that will be created
   */
  Proto__Key *newrealmadminkey;
};
#define PROTO__FILE_CREATE_TRANSACTION_BODY__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&proto__file_create_transaction_body__descriptor) \
    , NULL, NULL, {0,NULL}, NULL, NULL, NULL }


/* Proto__FileCreateTransactionBody methods */
void   proto__file_create_transaction_body__init
                     (Proto__FileCreateTransactionBody         *message);
size_t proto__file_create_transaction_body__get_packed_size
                     (const Proto__FileCreateTransactionBody   *message);
size_t proto__file_create_transaction_body__pack
                     (const Proto__FileCreateTransactionBody   *message,
                      uint8_t             *out);
size_t proto__file_create_transaction_body__pack_to_buffer
                     (const Proto__FileCreateTransactionBody   *message,
                      ProtobufCBuffer     *buffer);
Proto__FileCreateTransactionBody *
       proto__file_create_transaction_body__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   proto__file_create_transaction_body__free_unpacked
                     (Proto__FileCreateTransactionBody *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*Proto__FileCreateTransactionBody_Closure)
                 (const Proto__FileCreateTransactionBody *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCMessageDescriptor proto__file_create_transaction_body__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_FileCreate_2eproto__INCLUDED */
