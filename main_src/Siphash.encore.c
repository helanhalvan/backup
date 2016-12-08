#include "header.h"


static void* trait_method_selector(int id)
{
  switch (id)
  {
    case _ENC__MSG__encore_libs_master_Collections_Hasher_Hasher_hash:
    {
      return _enc__method__encore_libs_master_Collections_Siphash_Siphash_hash;
      break;
    }
    case _ENC__MSG__encore_libs_master_Collections_Hasher_Hasher_modulo:
    {
      return _enc__method__encore_libs_master_Collections_Siphash_Siphash_modulo;
      break;
    }
    default:
    {
      printf("error, got invalid id: %d", id);
    }
  };
  return NULL;
}


void _enc__type_init__encore_libs_master_Collections_Siphash_Siphash(_enc__passive__encore_libs_master_Collections_Siphash_Siphash_t* this, ... )
{
  va_list params;
  va_start(params, this);
  va_end(params);
}


void _enc__trace__encore_libs_master_Collections_Siphash_Siphash(pony_ctx_t* _ctx_arg, void* p)
{
  pony_ctx_t** _ctx = (&(_ctx_arg));
  _enc__passive__encore_libs_master_Collections_Siphash_Siphash_t* _this = p;
}


_enc__passive__encore_libs_master_Collections_Siphash_Siphash_t* _enc__constructor__encore_libs_master_Collections_Siphash_Siphash(pony_ctx_t** _ctx)
{
  _enc__passive__encore_libs_master_Collections_Siphash_Siphash_t* this = ((_enc__passive__encore_libs_master_Collections_Siphash_Siphash_t*) encore_alloc((*_ctx), sizeof(_enc__passive__encore_libs_master_Collections_Siphash_Siphash_t)));
  this->_enc__self_type = (&(_enc__passive__encore_libs_master_Collections_Siphash_Siphash_type));
  return this;
}


void* _enc__method__encore_libs_master_Collections_Siphash_Siphash__init(pony_ctx_t** _ctx, _enc__passive__encore_libs_master_Collections_Siphash_Siphash_t* _this)
{
  UNIT;
  return UNIT;
}


uint64_t _enc__method__encore_libs_master_Collections_Siphash_Siphash_hash(pony_ctx_t** _ctx, _enc__passive__encore_libs_master_Collections_Siphash_Siphash_t* _this, uint64_t _enc__arg_id)
{
  /* embed uint // Hashing-key, can be any random bytes
            uint8_t k[16] = {
                0x00,0x01,0x02,0x03,0x04,0x05,0x06,0x07, // k0
                0x08,0x09,0x0a,0x0b,0x0c,0x0d,0x0e,0x0f  // k1
            };

            // Allocate 8 bytes on the stack for the hashcode
            uint8_t hash[8];

            // Get the argument
            uint64_t id = #{id}#;
            uint8_t id_arr[8];
            U64TO8_LE(id_arr, id);

            // Compute the hash value
            siphash(hash, id_arr, (uint64_t) 8, k);

            // Return the value to the caller
            U8TO64_LE(hash); end */;
  uint64_t _embed_0 = ({// Hashing-key, can be any random bytes
            uint8_t k[16] = {
                0x00,0x01,0x02,0x03,0x04,0x05,0x06,0x07, // k0
                0x08,0x09,0x0a,0x0b,0x0c,0x0d,0x0e,0x0f  // k1
            };

            // Allocate 8 bytes on the stack for the hashcode
            uint8_t hash[8];

            // Get the argument
            uint64_t id = _enc__arg_id;
            uint8_t id_arr[8];
            U64TO8_LE(id_arr, id);

            // Compute the hash value
            siphash(hash, id_arr, (uint64_t) 8, k);

            // Return the value to the caller
            U8TO64_LE(hash);});
  return ((uint64_t) _embed_0);
}


uint64_t _enc__method__encore_libs_master_Collections_Siphash_Siphash_modulo(pony_ctx_t** _ctx, _enc__passive__encore_libs_master_Collections_Siphash_Siphash_t* _this, uint64_t _enc__arg_value, uint64_t _enc__arg_mod)
{
  /* embed uint uint64_t value = (uint64_t) #{value}#;
            uint64_t mod   = (uint64_t) #{mod}#;
            (value % mod); end */;
  uint64_t _embed_0 = ({uint64_t value = (uint64_t) _enc__arg_value;
            uint64_t mod   = (uint64_t) _enc__arg_mod;
            (value % mod);});
  return ((uint64_t) _embed_0);
}


pony_type_t _enc__passive__encore_libs_master_Collections_Siphash_Siphash_type = {.id=_ENC__ID__encore_libs_master_Collections_Siphash_Siphash, .size=sizeof(_enc__passive__encore_libs_master_Collections_Siphash_Siphash_t), .trace=_enc__trace__encore_libs_master_Collections_Siphash_Siphash, .vtable=trait_method_selector};
