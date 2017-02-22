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


void _enc__type_init__encore_libs_master_SDL_Linked__List_Node(_enc__passive__encore_libs_master_SDL_Linked__List_Node_t* _this, ... )
{
  va_list params;
  va_start(params, _this);
  _this->_enc__type_t = va_arg(params, pony_type_t *);
  va_end(params);
}


void _enc__trace__encore_libs_master_SDL_Linked__List_Node(pony_ctx_t* _ctx_arg, void* p)
{
  pony_ctx_t** _ctx = (&(_ctx_arg));
  _enc__passive__encore_libs_master_SDL_Linked__List_Node_t* _this = p;
  pony_type_t* _enc__type_t = _this->_enc__type_t;
  _enc__passive__encore_libs_master_SDL_Linked__List_Node_t* _enc__field_next = _this->_enc__field_next;
  encore_trace_object((*_ctx), _enc__field_next, _enc__trace__encore_libs_master_SDL_Linked__List_Node);
  encore_arg_t _enc__field_data = _this->_enc__field_data;
  encore_trace_polymorphic_variable((*_ctx), _enc__type_t, _enc__field_data);
}


_enc__passive__encore_libs_master_SDL_Linked__List_Node_t* _enc__constructor__encore_libs_master_SDL_Linked__List_Node(pony_ctx_t** _ctx, pony_type_t** runtimeType)
{
  _enc__passive__encore_libs_master_SDL_Linked__List_Node_t* _this = ((_enc__passive__encore_libs_master_SDL_Linked__List_Node_t*) encore_alloc((*_ctx), sizeof(_enc__passive__encore_libs_master_SDL_Linked__List_Node_t)));
  _this->_enc__self_type = (&(_enc__passive__encore_libs_master_SDL_Linked__List_Node_type));
  return _this;
}


void* _enc__method__encore_libs_master_SDL_Linked__List_Node_init(pony_ctx_t** _ctx, _enc__passive__encore_libs_master_SDL_Linked__List_Node_t* _this, pony_type_t** runtimeType, encore_arg_t _enc__arg_data)
{
  ENC_DTRACE3(METHOD_ENTRY, (uintptr_t)*_ctx, (uintptr_t)_this, "init");
  pony_type_t* _enc__type_t = (*((_enc__passive__encore_libs_master_SDL_Linked__List_Node_t*) _this))._enc__type_t;
  /* this.next = null */;
  _enc__passive__encore_libs_master_SDL_Linked__List_Node_t* _literal_0 = NULL;
  (*({ENC_DTRACE3(FIELD_WRITE, (uintptr_t)*_ctx, (uintptr_t)_this, "next"); _this;}))._enc__field_next = _literal_0;
  /* this.data = data */;
  (*({ENC_DTRACE3(FIELD_WRITE, (uintptr_t)*_ctx, (uintptr_t)_this, "data"); _this;}))._enc__field_data = _enc__arg_data;
  ENC_DTRACE3(METHOD_EXIT, (uintptr_t)*_ctx, (uintptr_t)_this, "init");
  return UNIT;
}


void* _enc__method__encore_libs_master_SDL_Linked__List_Node_preppend(pony_ctx_t** _ctx, _enc__passive__encore_libs_master_SDL_Linked__List_Node_t* _this, pony_type_t** runtimeType, encore_arg_t _enc__arg_data)
{
  ENC_DTRACE3(METHOD_ENTRY, (uintptr_t)*_ctx, (uintptr_t)_this, "preppend");
  pony_type_t* _enc__type_t = (*((_enc__passive__encore_libs_master_SDL_Linked__List_Node_t*) _this))._enc__type_t;
  /* var node = new Node<t>(data) */;
  /* node = new Node<t>(data) */;
  _enc__passive__encore_libs_master_SDL_Linked__List_Node_t* _new_0 = _enc__constructor__encore_libs_master_SDL_Linked__List_Node(_ctx, NULL);
  pony_type_t* _tmp_1[] = {};
  _enc__type_init__encore_libs_master_SDL_Linked__List_Node(_new_0, _enc__type_t);
  _enc__method__encore_libs_master_SDL_Linked__List_Node_init(_ctx, _new_0, NULL, _enc__arg_data);
  _enc__passive__encore_libs_master_SDL_Linked__List_Node_t* _node_2 = _new_0;
  /* var temp = null : Node<t> */;
  /* temp = null : Node<t> */;
  _enc__passive__encore_libs_master_SDL_Linked__List_Node_t* _literal_3 = NULL;
  _enc__passive__encore_libs_master_SDL_Linked__List_Node_t* _cast_4 = ((_enc__passive__encore_libs_master_SDL_Linked__List_Node_t*) _literal_3);
  _enc__passive__encore_libs_master_SDL_Linked__List_Node_t* _temp_5 = _cast_4;
  /* {temp = this.next;
 this.next = node;
 node.next = temp} */;
  /* temp = this.next */;
  ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "next");
  _enc__passive__encore_libs_master_SDL_Linked__List_Node_t* _fieldacc_6 = (*_this)._enc__field_next;
  _temp_5 = _fieldacc_6;
  /* this.next = node */;
  (*({ENC_DTRACE3(FIELD_WRITE, (uintptr_t)*_ctx, (uintptr_t)_this, "next"); _this;}))._enc__field_next = _node_2;
  /* node.next = temp */;
  (*({ENC_DTRACE3(FIELD_WRITE, (uintptr_t)*_ctx, (uintptr_t)_node_2, "next"); _node_2;}))._enc__field_next = _temp_5;
  ENC_DTRACE3(METHOD_EXIT, (uintptr_t)*_ctx, (uintptr_t)_this, "preppend");
  return UNIT;
}


void* _enc__method__encore_libs_master_SDL_Linked__List_Node_append(pony_ctx_t** _ctx, _enc__passive__encore_libs_master_SDL_Linked__List_Node_t* _this, pony_type_t** runtimeType, encore_arg_t _enc__arg_data)
{
  ENC_DTRACE3(METHOD_ENTRY, (uintptr_t)*_ctx, (uintptr_t)_this, "append");
  pony_type_t* _enc__type_t = (*((_enc__passive__encore_libs_master_SDL_Linked__List_Node_t*) _this))._enc__type_t;
  /* var new_node = new Node<t>(data) */;
  /* new_node = new Node<t>(data) */;
  _enc__passive__encore_libs_master_SDL_Linked__List_Node_t* _new_0 = _enc__constructor__encore_libs_master_SDL_Linked__List_Node(_ctx, NULL);
  pony_type_t* _tmp_1[] = {};
  _enc__type_init__encore_libs_master_SDL_Linked__List_Node(_new_0, _enc__type_t);
  _enc__method__encore_libs_master_SDL_Linked__List_Node_init(_ctx, _new_0, NULL, _enc__arg_data);
  _enc__passive__encore_libs_master_SDL_Linked__List_Node_t* _new_node_2 = _new_0;
  /* var temp = this.next */;
  /* temp = this.next */;
  ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "next");
  _enc__passive__encore_libs_master_SDL_Linked__List_Node_t* _fieldacc_3 = (*_this)._enc__field_next;
  _enc__passive__encore_libs_master_SDL_Linked__List_Node_t* _temp_4 = _fieldacc_3;
  /* if temp == null then
  this.next = new_node
else
  {while temp.next != null
     temp = temp.next;
   temp.next = new_node} */;
  /* if temp == null then
  this.next = new_node
else
  {while temp.next != null
     temp = temp.next;
   temp.next = new_node} */;
  void* _ite_5;
  if (({int64_t _binop_7 = (({ _temp_4;}) == ((_enc__passive__encore_libs_master_SDL_Linked__List_Node_t*) ({_enc__passive__encore_libs_master_SDL_Linked__List_Node_t* _literal_6 = NULL; _literal_6;}))); _binop_7;}))
  {
    /* this.next = new_node */;
    (*({ENC_DTRACE3(FIELD_WRITE, (uintptr_t)*_ctx, (uintptr_t)_this, "next"); _this;}))._enc__field_next = _new_node_2;
    _ite_5 = ((void*) UNIT);
  }
  else
  {
    /* while temp.next != null
  temp = temp.next */;
    void* _while_12;
    while (({int64_t _binop_10 = (({ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_temp_4, "next");
                                    _enc__passive__encore_libs_master_SDL_Linked__List_Node_t* _fieldacc_8 = (*_temp_4)._enc__field_next; _fieldacc_8;}) != ((_enc__passive__encore_libs_master_SDL_Linked__List_Node_t*) ({_enc__passive__encore_libs_master_SDL_Linked__List_Node_t* _literal_9 = NULL; _literal_9;}))); _binop_10;}))
    {
      /* temp = temp.next */;
      ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_temp_4, "next");
      _enc__passive__encore_libs_master_SDL_Linked__List_Node_t* _fieldacc_11 = (*_temp_4)._enc__field_next;
      _temp_4 = _fieldacc_11;
      _while_12 = UNIT;
    };
    /* temp.next = new_node */;
    (*({ENC_DTRACE3(FIELD_WRITE, (uintptr_t)*_ctx, (uintptr_t)_temp_4, "next"); _temp_4;}))._enc__field_next = _new_node_2;
    _ite_5 = ((void*) UNIT);
  };
  ENC_DTRACE3(METHOD_EXIT, (uintptr_t)*_ctx, (uintptr_t)_this, "append");
  return UNIT;
}


_enc__passive__encore_libs_master_SDL_Linked__List_Node_t* _enc__method__encore_libs_master_SDL_Linked__List_Node_getSucc(pony_ctx_t** _ctx, _enc__passive__encore_libs_master_SDL_Linked__List_Node_t* _this, pony_type_t** runtimeType)
{
  ENC_DTRACE3(METHOD_ENTRY, (uintptr_t)*_ctx, (uintptr_t)_this, "getSucc");
  pony_type_t* _enc__type_t = (*((_enc__passive__encore_libs_master_SDL_Linked__List_Node_t*) _this))._enc__type_t;
  /* this.next */;
  ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "next");
  _enc__passive__encore_libs_master_SDL_Linked__List_Node_t* _fieldacc_0 = (*_this)._enc__field_next;
  ENC_DTRACE3(METHOD_EXIT, (uintptr_t)*_ctx, (uintptr_t)_this, "getSucc");
  return ((_enc__passive__encore_libs_master_SDL_Linked__List_Node_t*) _fieldacc_0);
}


encore_arg_t _enc__method__encore_libs_master_SDL_Linked__List_Node_getData(pony_ctx_t** _ctx, _enc__passive__encore_libs_master_SDL_Linked__List_Node_t* _this, pony_type_t** runtimeType)
{
  ENC_DTRACE3(METHOD_ENTRY, (uintptr_t)*_ctx, (uintptr_t)_this, "getData");
  pony_type_t* _enc__type_t = (*((_enc__passive__encore_libs_master_SDL_Linked__List_Node_t*) _this))._enc__type_t;
  /* this.data */;
  ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "data");
  encore_arg_t _fieldacc_0 = (*_this)._enc__field_data;
  ENC_DTRACE3(METHOD_EXIT, (uintptr_t)*_ctx, (uintptr_t)_this, "getData");
  return ((encore_arg_t) _fieldacc_0);
}


pony_type_t _enc__passive__encore_libs_master_SDL_Linked__List_Node_type = {.id=_ENC__ID__encore_libs_master_SDL_Linked__List_Node, .size=sizeof(_enc__passive__encore_libs_master_SDL_Linked__List_Node_t), .trace=_enc__trace__encore_libs_master_SDL_Linked__List_Node, .vtable=trait_method_selector};
