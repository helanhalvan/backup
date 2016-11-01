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


void _enc__type_init_LinkedList(_enc__passive_LinkedList_t* this, ... )
{
  va_list params;
  va_start(params, this);
  this->_enc__type_t = va_arg(params, pony_type_t *);
  va_end(params);
}


void _enc__trace_LinkedList(pony_ctx_t* _ctx_arg, void* p)
{
  pony_ctx_t** _ctx = (&(_ctx_arg));
  _enc__passive_LinkedList_t* _this = p;
  _enc__passive_Node_t* _enc__field_first = _this->_enc__field_first;
  encore_trace_object((*_ctx), _enc__field_first, _enc__trace_Node);
}


_enc__passive_LinkedList_t* _enc__constructor_LinkedList(pony_ctx_t** _ctx)
{
  _enc__passive_LinkedList_t* this = ((_enc__passive_LinkedList_t*) encore_alloc((*_ctx), sizeof(_enc__passive_LinkedList_t)));
  this->_enc__self_type = (&(_enc__passive_LinkedList_type));
  return this;
}


void* _enc__method_LinkedList__init(pony_ctx_t** _ctx, _enc__passive_LinkedList_t* _this)
{
  pony_type_t* _enc__type_t = (*((_enc__passive_LinkedList_t*) _this))._enc__type_t;
  UNIT;
  return UNIT;
}


void* _enc__method_LinkedList_preppend(pony_ctx_t** _ctx, _enc__passive_LinkedList_t* _this, encore_arg_t _enc__arg_data)
{
  pony_type_t* _enc__type_t = (*((_enc__passive_LinkedList_t*) _this))._enc__type_t;
  /* if this.first == null then
  this.first = new Node<t>(data)
else
  this.first.preppend(data) */;
  void* _ite_0;
  if (({int64_t _binop_3 = (({_enc__passive_Node_t* _fieldacc_1 = (*_this)._enc__field_first; _fieldacc_1;}) == ((_enc__passive_Node_t*) ({_enc__passive_Node_t* _literal_2 = NULL; _literal_2;}))); _binop_3;}))
  {
    /* this.first = new Node<t>(data) */;
    _enc__passive_Node_t* _new_4 = _enc__constructor_Node(_ctx);
    _enc__type_init_Node(_new_4, _enc__type_t);
    _enc__method_Node__init(_ctx, _new_4, _enc__arg_data);
    (*({ _this;}))._enc__field_first = _new_4;
    _ite_0 = ((void*) UNIT);
  }
  else
  {
    /* this.first.preppend(data) */;
    _enc__passive_Node_t* _fieldacc_6 = (*_this)._enc__field_first;
    check_receiver(_fieldacc_6, ".", "this.first", "preppend", "\"./encore-libs-master/SDL/List.enc\" (line 10, column 25)");
    void* _sync_method_call_5 = _enc__method_Node_preppend(_ctx, _fieldacc_6, _enc__arg_data);
    _ite_0 = ((void*) _sync_method_call_5);
  };
  return UNIT;
}


void* _enc__method_LinkedList_append(pony_ctx_t** _ctx, _enc__passive_LinkedList_t* _this, encore_arg_t _enc__arg_data)
{
  pony_type_t* _enc__type_t = (*((_enc__passive_LinkedList_t*) _this))._enc__type_t;
  /* if this.first == null then
  this.first = new Node<t>(data)
else
  this.first.append(data) */;
  void* _ite_0;
  if (({int64_t _binop_3 = (({_enc__passive_Node_t* _fieldacc_1 = (*_this)._enc__field_first; _fieldacc_1;}) == ((_enc__passive_Node_t*) ({_enc__passive_Node_t* _literal_2 = NULL; _literal_2;}))); _binop_3;}))
  {
    /* this.first = new Node<t>(data) */;
    _enc__passive_Node_t* _new_4 = _enc__constructor_Node(_ctx);
    _enc__type_init_Node(_new_4, _enc__type_t);
    _enc__method_Node__init(_ctx, _new_4, _enc__arg_data);
    (*({ _this;}))._enc__field_first = _new_4;
    _ite_0 = ((void*) UNIT);
  }
  else
  {
    /* this.first.append(data) */;
    _enc__passive_Node_t* _fieldacc_6 = (*_this)._enc__field_first;
    check_receiver(_fieldacc_6, ".", "this.first", "append", "\"./encore-libs-master/SDL/List.enc\" (line 18, column 25)");
    void* _sync_method_call_5 = _enc__method_Node_append(_ctx, _fieldacc_6, _enc__arg_data);
    _ite_0 = ((void*) _sync_method_call_5);
  };
  return UNIT;
}


int64_t _enc__method_LinkedList_length(pony_ctx_t** _ctx, _enc__passive_LinkedList_t* _this)
{
  pony_type_t* _enc__type_t = (*((_enc__passive_LinkedList_t*) _this))._enc__type_t;
  /* let counter = 0
    next = null : Node<t>
in
  {if this.first != null then
     {counter = 1;
      next = this.first.next;
      while next != null
        {counter = counter + 1;
         next = next.next}};
   counter} */;
  /* counter = 0 */;
  int64_t _literal_0 = 0;
  int64_t _counter_1 = _literal_0;
  /* next = null : Node<t> */;
  _enc__passive_Node_t* _literal_2 = NULL;
  _enc__passive_Node_t* _cast_3 = ((_enc__passive_Node_t*) _literal_2);
  _enc__passive_Node_t* _next_4 = _cast_3;
  /* if this.first != null then
  {counter = 1;
   next = this.first.next;
   while next != null
     {counter = counter + 1;
      next = next.next}} */;
  void* _ite_5;
  if (({int64_t _binop_8 = (({_enc__passive_Node_t* _fieldacc_6 = (*_this)._enc__field_first; _fieldacc_6;}) != ((_enc__passive_Node_t*) ({_enc__passive_Node_t* _literal_7 = NULL; _literal_7;}))); _binop_8;}))
  {
    /* counter = 1 */;
    int64_t _literal_9 = 1;
    _counter_1 = _literal_9;
    /* next = this.first.next */;
    _enc__passive_Node_t* _fieldacc_10 = (*_this)._enc__field_first;
    _enc__passive_Node_t* _fieldacc_11 = (*_fieldacc_10)._enc__field_next;
    _next_4 = _fieldacc_11;
    /* while next != null
  {counter = counter + 1;
   next = next.next} */;
    void* _while_17;
    while (({int64_t _binop_13 = (({ _next_4;}) != ((_enc__passive_Node_t*) ({_enc__passive_Node_t* _literal_12 = NULL; _literal_12;}))); _binop_13;}))
    {
      /* counter = counter + 1 */;
      int64_t _binop_15 = (({ _counter_1;}) + ({int64_t _literal_14 = 1; _literal_14;}));
      _counter_1 = _binop_15;
      /* next = next.next */;
      _enc__passive_Node_t* _fieldacc_16 = (*_next_4)._enc__field_next;
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
  return ((int64_t) _counter_1);
}


pony_type_t _enc__passive_LinkedList_type = {.id=_ENC__ID_LinkedList, .size=sizeof(_enc__passive_LinkedList_t), .trace=_enc__trace_LinkedList, .vtable=trait_method_selector};
