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


void _enc__type_init__encore_libs_master_Ped_util_Regions_Item(_enc__passive__encore_libs_master_Ped_util_Regions_Item_t* _this, ... )
{
  va_list params;
  va_start(params, _this);
  va_end(params);
}


void _enc__trace__encore_libs_master_Ped_util_Regions_Item(pony_ctx_t* _ctx_arg, void* p)
{
  pony_ctx_t** _ctx = (&(_ctx_arg));
  _enc__passive__encore_libs_master_Ped_util_Regions_Item_t* _this = p;
  _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t* _enc__field_a = _this->_enc__field_a;
  encore_trace_object((*_ctx), _enc__field_a, _enc__trace__encore_libs_master_Ped_util_Agent_passive_Agent);
  _enc__passive__encore_libs_master_Ped_util_Regions_Item_t* _enc__field_next = _this->_enc__field_next;
  encore_trace_object((*_ctx), _enc__field_next, _enc__trace__encore_libs_master_Ped_util_Regions_Item);
  _enc__passive__encore_libs_master_Ped_util_Regions_Item_t* _enc__field_prev = _this->_enc__field_prev;
  encore_trace_object((*_ctx), _enc__field_prev, _enc__trace__encore_libs_master_Ped_util_Regions_Item);
}


_enc__passive__encore_libs_master_Ped_util_Regions_Item_t* _enc__constructor__encore_libs_master_Ped_util_Regions_Item(pony_ctx_t** _ctx, pony_type_t** runtimeType)
{
  _enc__passive__encore_libs_master_Ped_util_Regions_Item_t* _this = ((_enc__passive__encore_libs_master_Ped_util_Regions_Item_t*) encore_alloc((*_ctx), sizeof(_enc__passive__encore_libs_master_Ped_util_Regions_Item_t)));
  _this->_enc__self_type = (&(_enc__passive__encore_libs_master_Ped_util_Regions_Item_type));
  return _this;
}


void* _enc__method__encore_libs_master_Ped_util_Regions_Item_init(pony_ctx_t** _ctx, _enc__passive__encore_libs_master_Ped_util_Regions_Item_t* _this, pony_type_t** runtimeType, _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t* _enc__arg_a)
{
  ENC_DTRACE3(METHOD_ENTRY, (uintptr_t)*_ctx, (uintptr_t)_this, "init");
  /* this.a = a */;
  (*({ENC_DTRACE3(FIELD_WRITE, (uintptr_t)*_ctx, (uintptr_t)_this, "a"); _this;}))._enc__field_a = _enc__arg_a;
  ENC_DTRACE3(METHOD_EXIT, (uintptr_t)*_ctx, (uintptr_t)_this, "init");
  return UNIT;
}


void* _enc__method__encore_libs_master_Ped_util_Regions_Item_delete(pony_ctx_t** _ctx, _enc__passive__encore_libs_master_Ped_util_Regions_Item_t* _this, pony_type_t** runtimeType)
{
  ENC_DTRACE3(METHOD_ENTRY, (uintptr_t)*_ctx, (uintptr_t)_this, "delete");
  /* if this.next == null and this.prev == null then
  ()
else
  if this.prev == null then
    this.next.prev = null
  else
    if this.next == null then
      this.prev.next = null
    else
      {this.next.prev = this.prev;
       this.prev.next = this.next} */;
  void* _ite_0;
  if (({int64_t _binop_7 = (({int64_t _binop_3 = (({ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "next");
                                                    _enc__passive__encore_libs_master_Ped_util_Regions_Item_t* _fieldacc_1 = (*_this)._enc__field_next; _fieldacc_1;}) == ((_enc__passive__encore_libs_master_Ped_util_Regions_Item_t*) ({_enc__passive__encore_libs_master_Ped_util_Regions_Item_t* _literal_2 = NULL; _literal_2;}))); _binop_3;}) && ({int64_t _binop_6 = (({ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "prev");
                                                                                                                                                                                                                                                                                                                                                                                _enc__passive__encore_libs_master_Ped_util_Regions_Item_t* _fieldacc_4 = (*_this)._enc__field_prev; _fieldacc_4;}) == ((_enc__passive__encore_libs_master_Ped_util_Regions_Item_t*) ({_enc__passive__encore_libs_master_Ped_util_Regions_Item_t* _literal_5 = NULL; _literal_5;}))); _binop_6;})); _binop_7;}))
  {
    /* () */;
    UNIT;
    _ite_0 = ((void*) UNIT);
  }
  else
  {
    void* _ite_8;
    if (({int64_t _binop_11 = (({ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "prev");
                                 _enc__passive__encore_libs_master_Ped_util_Regions_Item_t* _fieldacc_9 = (*_this)._enc__field_prev; _fieldacc_9;}) == ((_enc__passive__encore_libs_master_Ped_util_Regions_Item_t*) ({_enc__passive__encore_libs_master_Ped_util_Regions_Item_t* _literal_10 = NULL; _literal_10;}))); _binop_11;}))
    {
      /* this.next.prev = null */;
      _enc__passive__encore_libs_master_Ped_util_Regions_Item_t* _literal_12 = NULL;
      (*({ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "next");
          _enc__passive__encore_libs_master_Ped_util_Regions_Item_t* _fieldacc_13 = (*_this)._enc__field_next;
          ENC_DTRACE3(FIELD_WRITE, (uintptr_t)*_ctx, (uintptr_t)_fieldacc_13, "prev"); _fieldacc_13;}))._enc__field_prev = _literal_12;
      _ite_8 = ((void*) UNIT);
    }
    else
    {
      void* _ite_14;
      if (({int64_t _binop_17 = (({ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "next");
                                   _enc__passive__encore_libs_master_Ped_util_Regions_Item_t* _fieldacc_15 = (*_this)._enc__field_next; _fieldacc_15;}) == ((_enc__passive__encore_libs_master_Ped_util_Regions_Item_t*) ({_enc__passive__encore_libs_master_Ped_util_Regions_Item_t* _literal_16 = NULL; _literal_16;}))); _binop_17;}))
      {
        /* this.prev.next = null */;
        _enc__passive__encore_libs_master_Ped_util_Regions_Item_t* _literal_18 = NULL;
        (*({ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "prev");
            _enc__passive__encore_libs_master_Ped_util_Regions_Item_t* _fieldacc_19 = (*_this)._enc__field_prev;
            ENC_DTRACE3(FIELD_WRITE, (uintptr_t)*_ctx, (uintptr_t)_fieldacc_19, "next"); _fieldacc_19;}))._enc__field_next = _literal_18;
        _ite_14 = ((void*) UNIT);
      }
      else
      {
        /* this.next.prev = this.prev */;
        ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "prev");
        _enc__passive__encore_libs_master_Ped_util_Regions_Item_t* _fieldacc_20 = (*_this)._enc__field_prev;
        (*({ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "next");
            _enc__passive__encore_libs_master_Ped_util_Regions_Item_t* _fieldacc_21 = (*_this)._enc__field_next;
            ENC_DTRACE3(FIELD_WRITE, (uintptr_t)*_ctx, (uintptr_t)_fieldacc_21, "prev"); _fieldacc_21;}))._enc__field_prev = _fieldacc_20;
        /* this.prev.next = this.next */;
        ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "next");
        _enc__passive__encore_libs_master_Ped_util_Regions_Item_t* _fieldacc_22 = (*_this)._enc__field_next;
        (*({ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "prev");
            _enc__passive__encore_libs_master_Ped_util_Regions_Item_t* _fieldacc_23 = (*_this)._enc__field_prev;
            ENC_DTRACE3(FIELD_WRITE, (uintptr_t)*_ctx, (uintptr_t)_fieldacc_23, "next"); _fieldacc_23;}))._enc__field_next = _fieldacc_22;
        _ite_14 = ((void*) UNIT);
      };
      _ite_8 = ((void*) _ite_14);
    };
    _ite_0 = ((void*) _ite_8);
  };
  /* this.a = null */;
  _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t* _literal_24 = NULL;
  (*({ENC_DTRACE3(FIELD_WRITE, (uintptr_t)*_ctx, (uintptr_t)_this, "a"); _this;}))._enc__field_a = _literal_24;
  ENC_DTRACE3(METHOD_EXIT, (uintptr_t)*_ctx, (uintptr_t)_this, "delete");
  return UNIT;
}


void* _enc__method__encore_libs_master_Ped_util_Regions_Item_append(pony_ctx_t** _ctx, _enc__passive__encore_libs_master_Ped_util_Regions_Item_t* _this, pony_type_t** runtimeType, _enc__passive__encore_libs_master_Ped_util_Regions_Item_t* _enc__arg_next)
{
  ENC_DTRACE3(METHOD_ENTRY, (uintptr_t)*_ctx, (uintptr_t)_this, "append");
  /* this.next = next */;
  (*({ENC_DTRACE3(FIELD_WRITE, (uintptr_t)*_ctx, (uintptr_t)_this, "next"); _this;}))._enc__field_next = _enc__arg_next;
  /* if next != null then
  next.prev = this */;
  void* _ite_0;
  if (({int64_t _binop_2 = (({ _enc__arg_next;}) != ((_enc__passive__encore_libs_master_Ped_util_Regions_Item_t*) ({_enc__passive__encore_libs_master_Ped_util_Regions_Item_t* _literal_1 = NULL; _literal_1;}))); _binop_2;}))
  {
    /* next.prev = this */;
    (*({ENC_DTRACE3(FIELD_WRITE, (uintptr_t)*_ctx, (uintptr_t)_enc__arg_next, "prev"); _enc__arg_next;}))._enc__field_prev = _this;
    _ite_0 = ((void*) UNIT);
  }
  else
  {
    UNIT;
    _ite_0 = ((void*) UNIT);
  };
  ENC_DTRACE3(METHOD_EXIT, (uintptr_t)*_ctx, (uintptr_t)_this, "append");
  return UNIT;
}


pony_type_t _enc__passive__encore_libs_master_Ped_util_Regions_Item_type = {.id=_ENC__ID__encore_libs_master_Ped_util_Regions_Item, .size=sizeof(_enc__passive__encore_libs_master_Ped_util_Regions_Item_t), .trace=_enc__trace__encore_libs_master_Ped_util_Regions_Item, .vtable=trait_method_selector};
