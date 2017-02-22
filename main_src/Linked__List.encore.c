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


void _enc__type_init__encore_libs_master_SDL_Linked__List_Linked__List(_enc__passive__encore_libs_master_SDL_Linked__List_Linked__List_t* _this, ... )
{
  va_list params;
  va_start(params, _this);
  _this->_enc__type_t = va_arg(params, pony_type_t *);
  va_end(params);
}


void _enc__trace__encore_libs_master_SDL_Linked__List_Linked__List(pony_ctx_t* _ctx_arg, void* p)
{
  pony_ctx_t** _ctx = (&(_ctx_arg));
  _enc__passive__encore_libs_master_SDL_Linked__List_Linked__List_t* _this = p;
  pony_type_t* _enc__type_t = _this->_enc__type_t;
  _enc__passive__encore_libs_master_SDL_Linked__List_Node_t* _enc__field_first = _this->_enc__field_first;
  encore_trace_object((*_ctx), _enc__field_first, _enc__trace__encore_libs_master_SDL_Linked__List_Node);
}


_enc__passive__encore_libs_master_SDL_Linked__List_Linked__List_t* _enc__constructor__encore_libs_master_SDL_Linked__List_Linked__List(pony_ctx_t** _ctx, pony_type_t** runtimeType)
{
  _enc__passive__encore_libs_master_SDL_Linked__List_Linked__List_t* _this = ((_enc__passive__encore_libs_master_SDL_Linked__List_Linked__List_t*) encore_alloc((*_ctx), sizeof(_enc__passive__encore_libs_master_SDL_Linked__List_Linked__List_t)));
  _this->_enc__self_type = (&(_enc__passive__encore_libs_master_SDL_Linked__List_Linked__List_type));
  return _this;
}


void* _enc__method__encore_libs_master_SDL_Linked__List_Linked__List_init(pony_ctx_t** _ctx, _enc__passive__encore_libs_master_SDL_Linked__List_Linked__List_t* _this, pony_type_t** runtimeType)
{
  ENC_DTRACE3(METHOD_ENTRY, (uintptr_t)*_ctx, (uintptr_t)_this, "init");
  pony_type_t* _enc__type_t = (*((_enc__passive__encore_libs_master_SDL_Linked__List_Linked__List_t*) _this))._enc__type_t;
  UNIT;
  ENC_DTRACE3(METHOD_EXIT, (uintptr_t)*_ctx, (uintptr_t)_this, "init");
  return UNIT;
}


void* _enc__method__encore_libs_master_SDL_Linked__List_Linked__List_preppend(pony_ctx_t** _ctx, _enc__passive__encore_libs_master_SDL_Linked__List_Linked__List_t* _this, pony_type_t** runtimeType, encore_arg_t _enc__arg_data)
{
  ENC_DTRACE3(METHOD_ENTRY, (uintptr_t)*_ctx, (uintptr_t)_this, "preppend");
  pony_type_t* _enc__type_t = (*((_enc__passive__encore_libs_master_SDL_Linked__List_Linked__List_t*) _this))._enc__type_t;
  /* if this.first == null then
  this.first = new Node<t>(data)
else
  this.first.preppend(data) */;
  void* _ite_0;
  if (({int64_t _binop_3 = (({ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "first");
                              _enc__passive__encore_libs_master_SDL_Linked__List_Node_t* _fieldacc_1 = (*_this)._enc__field_first; _fieldacc_1;}) == ((_enc__passive__encore_libs_master_SDL_Linked__List_Node_t*) ({_enc__passive__encore_libs_master_SDL_Linked__List_Node_t* _literal_2 = NULL; _literal_2;}))); _binop_3;}))
  {
    /* this.first = new Node<t>(data) */;
    _enc__passive__encore_libs_master_SDL_Linked__List_Node_t* _new_4 = _enc__constructor__encore_libs_master_SDL_Linked__List_Node(_ctx, NULL);
    pony_type_t* _tmp_5[] = {};
    _enc__type_init__encore_libs_master_SDL_Linked__List_Node(_new_4, _enc__type_t);
    _enc__method__encore_libs_master_SDL_Linked__List_Node_init(_ctx, _new_4, NULL, _enc__arg_data);
    (*({ENC_DTRACE3(FIELD_WRITE, (uintptr_t)*_ctx, (uintptr_t)_this, "first"); _this;}))._enc__field_first = _new_4;
    _ite_0 = ((void*) UNIT);
  }
  else
  {
    /* this.first.preppend(data) */;
    ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "first");
    _enc__passive__encore_libs_master_SDL_Linked__List_Node_t* _fieldacc_7 = (*_this)._enc__field_first;
    check_receiver(_fieldacc_7, ".", "this.first", "preppend", "\"./encore-libs-master/SDL/Linked__List.enc\" (line 10, column 13)");
    pony_type_t* _tmp_8[] = {};
    void* _sync_method_call_6 = _enc__method__encore_libs_master_SDL_Linked__List_Node_preppend(_ctx, _fieldacc_7, NULL, _enc__arg_data);
    _ite_0 = ((void*) _sync_method_call_6);
  };
  ENC_DTRACE3(METHOD_EXIT, (uintptr_t)*_ctx, (uintptr_t)_this, "preppend");
  return UNIT;
}


void* _enc__method__encore_libs_master_SDL_Linked__List_Linked__List_append(pony_ctx_t** _ctx, _enc__passive__encore_libs_master_SDL_Linked__List_Linked__List_t* _this, pony_type_t** runtimeType, encore_arg_t _enc__arg_data)
{
  ENC_DTRACE3(METHOD_ENTRY, (uintptr_t)*_ctx, (uintptr_t)_this, "append");
  pony_type_t* _enc__type_t = (*((_enc__passive__encore_libs_master_SDL_Linked__List_Linked__List_t*) _this))._enc__type_t;
  /* if this.first == null then
  this.first = new Node<t>(data)
else
  this.first.append(data) */;
  void* _ite_0;
  if (({int64_t _binop_3 = (({ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "first");
                              _enc__passive__encore_libs_master_SDL_Linked__List_Node_t* _fieldacc_1 = (*_this)._enc__field_first; _fieldacc_1;}) == ((_enc__passive__encore_libs_master_SDL_Linked__List_Node_t*) ({_enc__passive__encore_libs_master_SDL_Linked__List_Node_t* _literal_2 = NULL; _literal_2;}))); _binop_3;}))
  {
    /* this.first = new Node<t>(data) */;
    _enc__passive__encore_libs_master_SDL_Linked__List_Node_t* _new_4 = _enc__constructor__encore_libs_master_SDL_Linked__List_Node(_ctx, NULL);
    pony_type_t* _tmp_5[] = {};
    _enc__type_init__encore_libs_master_SDL_Linked__List_Node(_new_4, _enc__type_t);
    _enc__method__encore_libs_master_SDL_Linked__List_Node_init(_ctx, _new_4, NULL, _enc__arg_data);
    (*({ENC_DTRACE3(FIELD_WRITE, (uintptr_t)*_ctx, (uintptr_t)_this, "first"); _this;}))._enc__field_first = _new_4;
    _ite_0 = ((void*) UNIT);
  }
  else
  {
    /* this.first.append(data) */;
    ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "first");
    _enc__passive__encore_libs_master_SDL_Linked__List_Node_t* _fieldacc_7 = (*_this)._enc__field_first;
    check_receiver(_fieldacc_7, ".", "this.first", "append", "\"./encore-libs-master/SDL/Linked__List.enc\" (line 18, column 13)");
    pony_type_t* _tmp_8[] = {};
    void* _sync_method_call_6 = _enc__method__encore_libs_master_SDL_Linked__List_Node_append(_ctx, _fieldacc_7, NULL, _enc__arg_data);
    _ite_0 = ((void*) _sync_method_call_6);
  };
  ENC_DTRACE3(METHOD_EXIT, (uintptr_t)*_ctx, (uintptr_t)_this, "append");
  return UNIT;
}


int64_t _enc__method__encore_libs_master_SDL_Linked__List_Linked__List_length(pony_ctx_t** _ctx, _enc__passive__encore_libs_master_SDL_Linked__List_Linked__List_t* _this, pony_type_t** runtimeType)
{
  ENC_DTRACE3(METHOD_ENTRY, (uintptr_t)*_ctx, (uintptr_t)_this, "length");
  pony_type_t* _enc__type_t = (*((_enc__passive__encore_libs_master_SDL_Linked__List_Linked__List_t*) _this))._enc__type_t;
  /* var counter = 0 */;
  /* counter = 0 */;
  int64_t _literal_0 = 0;
  int64_t _counter_1 = _literal_0;
  /* var next = null : Node<t> */;
  /* next = null : Node<t> */;
  _enc__passive__encore_libs_master_SDL_Linked__List_Node_t* _literal_2 = NULL;
  _enc__passive__encore_libs_master_SDL_Linked__List_Node_t* _cast_3 = ((_enc__passive__encore_libs_master_SDL_Linked__List_Node_t*) _literal_2);
  _enc__passive__encore_libs_master_SDL_Linked__List_Node_t* _next_4 = _cast_3;
  /* {if this.first != null then
   {counter = 1;
    next = this.first.next;
    while next != null
      {counter = counter + 1;
       next = next.next}};
 counter} */;
  /* if this.first != null then
  {counter = 1;
   next = this.first.next;
   while next != null
     {counter = counter + 1;
      next = next.next}} */;
  void* _ite_5;
  if (({int64_t _binop_8 = (({ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "first");
                              _enc__passive__encore_libs_master_SDL_Linked__List_Node_t* _fieldacc_6 = (*_this)._enc__field_first; _fieldacc_6;}) != ((_enc__passive__encore_libs_master_SDL_Linked__List_Node_t*) ({_enc__passive__encore_libs_master_SDL_Linked__List_Node_t* _literal_7 = NULL; _literal_7;}))); _binop_8;}))
  {
    /* counter = 1 */;
    int64_t _literal_9 = 1;
    _counter_1 = _literal_9;
    /* next = this.first.next */;
    ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "first");
    _enc__passive__encore_libs_master_SDL_Linked__List_Node_t* _fieldacc_10 = (*_this)._enc__field_first;
    ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_fieldacc_10, "next");
    _enc__passive__encore_libs_master_SDL_Linked__List_Node_t* _fieldacc_11 = (*_fieldacc_10)._enc__field_next;
    _next_4 = _fieldacc_11;
    /* while next != null
  {counter = counter + 1;
   next = next.next} */;
    void* _while_17;
    while (({int64_t _binop_13 = (({ _next_4;}) != ((_enc__passive__encore_libs_master_SDL_Linked__List_Node_t*) ({_enc__passive__encore_libs_master_SDL_Linked__List_Node_t* _literal_12 = NULL; _literal_12;}))); _binop_13;}))
    {
      /* counter = counter + 1 */;
      int64_t _binop_15 = (({ _counter_1;}) + ({int64_t _literal_14 = 1; _literal_14;}));
      _counter_1 = _binop_15;
      /* next = next.next */;
      ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_next_4, "next");
      _enc__passive__encore_libs_master_SDL_Linked__List_Node_t* _fieldacc_16 = (*_next_4)._enc__field_next;
      _next_4 = _fieldacc_16;
      _while_17 = UNIT;
    };
    _ite_5 = ((void*) _while_17);
  }
  else
  {
    UNIT;
    _ite_5 = ((void*) UNIT);
  };
  /* counter */;
  ENC_DTRACE3(METHOD_EXIT, (uintptr_t)*_ctx, (uintptr_t)_this, "length");
  return ((int64_t) _counter_1);
}


pony_type_t _enc__passive__encore_libs_master_SDL_Linked__List_Linked__List_type = {.id=_ENC__ID__encore_libs_master_SDL_Linked__List_Linked__List, .size=sizeof(_enc__passive__encore_libs_master_SDL_Linked__List_Linked__List_t), .trace=_enc__trace__encore_libs_master_SDL_Linked__List_Linked__List, .vtable=trait_method_selector};
