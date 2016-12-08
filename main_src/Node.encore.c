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


void _enc__type_init__encore_libs_master_SDL_Linked__List_Node(_enc__passive__encore_libs_master_SDL_Linked__List_Node_t* this, ... )
{
  va_list params;
  va_start(params, this);
  this->_enc__type_t = va_arg(params, pony_type_t *);
  va_end(params);
}


void _enc__trace__encore_libs_master_SDL_Linked__List_Node(pony_ctx_t* _ctx_arg, void* p)
{
  pony_ctx_t** _ctx = (&(_ctx_arg));
  _enc__passive__encore_libs_master_SDL_Linked__List_Node_t* _this = p;
  _enc__passive__encore_libs_master_SDL_Linked__List_Node_t* _enc__field_next = _this->_enc__field_next;
  encore_trace_object((*_ctx), _enc__field_next, _enc__trace__encore_libs_master_SDL_Linked__List_Node);
  encore_arg_t _enc__field_data = _this->_enc__field_data;
  encore_trace_polymorphic_variable((*_ctx), _this->_enc__type_t, _enc__field_data);
}


_enc__passive__encore_libs_master_SDL_Linked__List_Node_t* _enc__constructor__encore_libs_master_SDL_Linked__List_Node(pony_ctx_t** _ctx)
{
  _enc__passive__encore_libs_master_SDL_Linked__List_Node_t* this = ((_enc__passive__encore_libs_master_SDL_Linked__List_Node_t*) encore_alloc((*_ctx), sizeof(_enc__passive__encore_libs_master_SDL_Linked__List_Node_t)));
  this->_enc__self_type = (&(_enc__passive__encore_libs_master_SDL_Linked__List_Node_type));
  return this;
}


void* _enc__method__encore_libs_master_SDL_Linked__List_Node__init(pony_ctx_t** _ctx, _enc__passive__encore_libs_master_SDL_Linked__List_Node_t* _this, encore_arg_t _enc__arg_data)
{
  pony_type_t* _enc__type_t = (*((_enc__passive__encore_libs_master_SDL_Linked__List_Node_t*) _this))._enc__type_t;
  /* this.next = null */;
  _enc__passive__encore_libs_master_SDL_Linked__List_Node_t* _literal_0 = NULL;
  (*({ _this;}))._enc__field_next = _literal_0;
  /* this.data = data */;
  (*({ _this;}))._enc__field_data = _enc__arg_data;
  return UNIT;
}


void* _enc__method__encore_libs_master_SDL_Linked__List_Node_preppend(pony_ctx_t** _ctx, _enc__passive__encore_libs_master_SDL_Linked__List_Node_t* _this, encore_arg_t _enc__arg_data)
{
  pony_type_t* _enc__type_t = (*((_enc__passive__encore_libs_master_SDL_Linked__List_Node_t*) _this))._enc__type_t;
  /* let node = new Node<t>(data)
    temp = null : Node<t>
in
  {temp = this.next;
   this.next = node;
   node.next = temp} */;
  /* node = new Node<t>(data) */;
  _enc__passive__encore_libs_master_SDL_Linked__List_Node_t* _new_0 = _enc__constructor__encore_libs_master_SDL_Linked__List_Node(_ctx);
  _enc__type_init__encore_libs_master_SDL_Linked__List_Node(_new_0, _enc__type_t);
  _enc__method__encore_libs_master_SDL_Linked__List_Node__init(_ctx, _new_0, _enc__arg_data);
  _enc__passive__encore_libs_master_SDL_Linked__List_Node_t* _node_1 = _new_0;
  /* temp = null : Node<t> */;
  _enc__passive__encore_libs_master_SDL_Linked__List_Node_t* _literal_2 = NULL;
  _enc__passive__encore_libs_master_SDL_Linked__List_Node_t* _cast_3 = ((_enc__passive__encore_libs_master_SDL_Linked__List_Node_t*) _literal_2);
  _enc__passive__encore_libs_master_SDL_Linked__List_Node_t* _temp_4 = _cast_3;
  /* temp = this.next */;
  _enc__passive__encore_libs_master_SDL_Linked__List_Node_t* _fieldacc_5 = (*_this)._enc__field_next;
  _temp_4 = _fieldacc_5;
  /* this.next = node */;
  (*({ _this;}))._enc__field_next = _node_1;
  /* node.next = temp */;
  (*({ _node_1;}))._enc__field_next = _temp_4;
  return UNIT;
}


void* _enc__method__encore_libs_master_SDL_Linked__List_Node_append(pony_ctx_t** _ctx, _enc__passive__encore_libs_master_SDL_Linked__List_Node_t* _this, encore_arg_t _enc__arg_data)
{
  pony_type_t* _enc__type_t = (*((_enc__passive__encore_libs_master_SDL_Linked__List_Node_t*) _this))._enc__type_t;
  /* let new_node = new Node<t>(data)
    temp = this.next
in
  if temp == null then
    this.next = new_node
  else
    {while temp.next != null
       temp = temp.next;
     temp.next = new_node} */;
  /* new_node = new Node<t>(data) */;
  _enc__passive__encore_libs_master_SDL_Linked__List_Node_t* _new_0 = _enc__constructor__encore_libs_master_SDL_Linked__List_Node(_ctx);
  _enc__type_init__encore_libs_master_SDL_Linked__List_Node(_new_0, _enc__type_t);
  _enc__method__encore_libs_master_SDL_Linked__List_Node__init(_ctx, _new_0, _enc__arg_data);
  _enc__passive__encore_libs_master_SDL_Linked__List_Node_t* _new_node_1 = _new_0;
  /* temp = this.next */;
  _enc__passive__encore_libs_master_SDL_Linked__List_Node_t* _fieldacc_2 = (*_this)._enc__field_next;
  _enc__passive__encore_libs_master_SDL_Linked__List_Node_t* _temp_3 = _fieldacc_2;
  /* if temp == null then
  this.next = new_node
else
  {while temp.next != null
     temp = temp.next;
   temp.next = new_node} */;
  void* _ite_4;
  if (({int64_t _binop_6 = (({ _temp_3;}) == ((_enc__passive__encore_libs_master_SDL_Linked__List_Node_t*) ({_enc__passive__encore_libs_master_SDL_Linked__List_Node_t* _literal_5 = NULL; _literal_5;}))); _binop_6;}))
  {
    /* this.next = new_node */;
    (*({ _this;}))._enc__field_next = _new_node_1;
    _ite_4 = ((void*) UNIT);
  }
  else
  {
    /* while temp.next != null
  temp = temp.next */;
    void* _while_11;
    while (({int64_t _binop_9 = (({_enc__passive__encore_libs_master_SDL_Linked__List_Node_t* _fieldacc_7 = (*_temp_3)._enc__field_next; _fieldacc_7;}) != ((_enc__passive__encore_libs_master_SDL_Linked__List_Node_t*) ({_enc__passive__encore_libs_master_SDL_Linked__List_Node_t* _literal_8 = NULL; _literal_8;}))); _binop_9;}))
    {
      /* temp = temp.next */;
      _enc__passive__encore_libs_master_SDL_Linked__List_Node_t* _fieldacc_10 = (*_temp_3)._enc__field_next;
      _temp_3 = _fieldacc_10;
      _while_11 = UNIT;
    };
    /* temp.next = new_node */;
    (*({ _temp_3;}))._enc__field_next = _new_node_1;
    _ite_4 = ((void*) UNIT);
  };
  return UNIT;
}


_enc__passive__encore_libs_master_SDL_Linked__List_Node_t* _enc__method__encore_libs_master_SDL_Linked__List_Node_getSucc(pony_ctx_t** _ctx, _enc__passive__encore_libs_master_SDL_Linked__List_Node_t* _this)
{
  pony_type_t* _enc__type_t = (*((_enc__passive__encore_libs_master_SDL_Linked__List_Node_t*) _this))._enc__type_t;
  /* this.next */;
  _enc__passive__encore_libs_master_SDL_Linked__List_Node_t* _fieldacc_0 = (*_this)._enc__field_next;
  return ((_enc__passive__encore_libs_master_SDL_Linked__List_Node_t*) _fieldacc_0);
}


encore_arg_t _enc__method__encore_libs_master_SDL_Linked__List_Node_getData(pony_ctx_t** _ctx, _enc__passive__encore_libs_master_SDL_Linked__List_Node_t* _this)
{
  pony_type_t* _enc__type_t = (*((_enc__passive__encore_libs_master_SDL_Linked__List_Node_t*) _this))._enc__type_t;
  /* this.data */;
  encore_arg_t _fieldacc_0 = (*_this)._enc__field_data;
  return ((encore_arg_t) _fieldacc_0);
}


pony_type_t _enc__passive__encore_libs_master_SDL_Linked__List_Node_type = {.id=_ENC__ID__encore_libs_master_SDL_Linked__List_Node, .size=sizeof(_enc__passive__encore_libs_master_SDL_Linked__List_Node_t), .trace=_enc__trace__encore_libs_master_SDL_Linked__List_Node, .vtable=trait_method_selector};
