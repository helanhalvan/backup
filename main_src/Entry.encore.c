#include "header.h"


static void* trait_method_selector(int id)
{
  switch (id)
  {
    default:
    {
      printf("error, got invalid id: %d", id);
    }
  };
  return NULL;
}


void _enc__type_init__encore_libs_master_Collections_HashMap_Entry(_enc__passive__encore_libs_master_Collections_HashMap_Entry_t* this, ... )
{
  va_list params;
  va_start(params, this);
  this->_enc__type_v = va_arg(params, pony_type_t *);
  va_end(params);
}


void _enc__trace__encore_libs_master_Collections_HashMap_Entry(pony_ctx_t* _ctx_arg, void* p)
{
  pony_ctx_t** _ctx = (&(_ctx_arg));
  _enc__passive__encore_libs_master_Collections_HashMap_Entry_t* _this = p;
  _enc__trait__encore_libs_master_Collections_HashCode_HashCode_t* _enc__field_key = _this->_enc__field_key;
  ((capability_t*) _enc__field_key)->_enc__self_type->trace((*_ctx), _enc__field_key);
  encore_arg_t _enc__field_value = _this->_enc__field_value;
  encore_trace_polymorphic_variable((*_ctx), _this->_enc__type_v, _enc__field_value);
}


_enc__passive__encore_libs_master_Collections_HashMap_Entry_t* _enc__constructor__encore_libs_master_Collections_HashMap_Entry(pony_ctx_t** _ctx)
{
  _enc__passive__encore_libs_master_Collections_HashMap_Entry_t* this = ((_enc__passive__encore_libs_master_Collections_HashMap_Entry_t*) encore_alloc((*_ctx), sizeof(_enc__passive__encore_libs_master_Collections_HashMap_Entry_t)));
  this->_enc__self_type = (&(_enc__passive__encore_libs_master_Collections_HashMap_Entry_type));
  return this;
}


void* _enc__method__encore_libs_master_Collections_HashMap_Entry__init(pony_ctx_t** _ctx, _enc__passive__encore_libs_master_Collections_HashMap_Entry_t* _this, _enc__trait__encore_libs_master_Collections_HashCode_HashCode_t* _enc__arg_key, encore_arg_t _enc__arg_value)
{
  pony_type_t* _enc__type_v = (*((_enc__passive__encore_libs_master_Collections_HashMap_Entry_t*) _this))._enc__type_v;
  /* this.key = key */;
  (*({ _this;}))._enc__field_key = _enc__arg_key;
  /* this.value = value */;
  (*({ _this;}))._enc__field_value = _enc__arg_value;
  return UNIT;
}


pony_type_t _enc__passive__encore_libs_master_Collections_HashMap_Entry_type = {.id=_ENC__ID__encore_libs_master_Collections_HashMap_Entry, .size=sizeof(_enc__passive__encore_libs_master_Collections_HashMap_Entry_t), .trace=_enc__trace__encore_libs_master_Collections_HashMap_Entry, .vtable=trait_method_selector};
