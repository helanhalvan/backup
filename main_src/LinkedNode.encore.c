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


void _enc__type_init__encore_libs_master_Collections_LinkedList_LinkedNode(_enc__passive__encore_libs_master_Collections_LinkedList_LinkedNode_t* this, ... )
{
  va_list params;
  va_start(params, this);
  this->_enc__type_t = va_arg(params, pony_type_t *);
  va_end(params);
}


void _enc__trace__encore_libs_master_Collections_LinkedList_LinkedNode(pony_ctx_t* _ctx_arg, void* p)
{
  pony_ctx_t** _ctx = (&(_ctx_arg));
  _enc__passive__encore_libs_master_Collections_LinkedList_LinkedNode_t* _this = p;
  encore_arg_t _enc__field_value = _this->_enc__field_value;
  encore_trace_polymorphic_variable((*_ctx), _this->_enc__type_t, _enc__field_value);
  option_t* _enc__field_prev = _this->_enc__field_prev;
  encore_trace_object((*_ctx), _enc__field_prev, option_trace);
  option_t* _enc__field_next = _this->_enc__field_next;
  encore_trace_object((*_ctx), _enc__field_next, option_trace);
}


_enc__passive__encore_libs_master_Collections_LinkedList_LinkedNode_t* _enc__constructor__encore_libs_master_Collections_LinkedList_LinkedNode(pony_ctx_t** _ctx)
{
  _enc__passive__encore_libs_master_Collections_LinkedList_LinkedNode_t* this = ((_enc__passive__encore_libs_master_Collections_LinkedList_LinkedNode_t*) encore_alloc((*_ctx), sizeof(_enc__passive__encore_libs_master_Collections_LinkedList_LinkedNode_t)));
  this->_enc__self_type = (&(_enc__passive__encore_libs_master_Collections_LinkedList_LinkedNode_type));
  return this;
}


void* _enc__method__encore_libs_master_Collections_LinkedList_LinkedNode__init(pony_ctx_t** _ctx, _enc__passive__encore_libs_master_Collections_LinkedList_LinkedNode_t* _this, encore_arg_t _enc__arg_value, option_t* _enc__arg_prev, option_t* _enc__arg_next)
{
  pony_type_t* _enc__type_t = (*((_enc__passive__encore_libs_master_Collections_LinkedList_LinkedNode_t*) _this))._enc__type_t;
  /* this.value = value */;
  (*({ _this;}))._enc__field_value = _enc__arg_value;
  /* this.prev = prev */;
  (*({ _this;}))._enc__field_prev = _enc__arg_prev;
  /* this.next = next */;
  (*({ _this;}))._enc__field_next = _enc__arg_next;
  return UNIT;
}


pony_type_t _enc__passive__encore_libs_master_Collections_LinkedList_LinkedNode_type = {.id=_ENC__ID__encore_libs_master_Collections_LinkedList_LinkedNode, .size=sizeof(_enc__passive__encore_libs_master_Collections_LinkedList_LinkedNode_t), .trace=_enc__trace__encore_libs_master_Collections_LinkedList_LinkedNode, .vtable=trait_method_selector};
