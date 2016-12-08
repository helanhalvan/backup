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


void _enc__type_init__encore_libs_master_Collections_LinkedList_LinkedIterator(_enc__passive__encore_libs_master_Collections_LinkedList_LinkedIterator_t* this, ... )
{
  va_list params;
  va_start(params, this);
  this->_enc__type_t = va_arg(params, pony_type_t *);
  va_end(params);
}


void _enc__trace__encore_libs_master_Collections_LinkedList_LinkedIterator(pony_ctx_t* _ctx_arg, void* p)
{
  pony_ctx_t** _ctx = (&(_ctx_arg));
  _enc__passive__encore_libs_master_Collections_LinkedList_LinkedIterator_t* _this = p;
  _enc__passive__encore_libs_master_Collections_LinkedList_LinkedList_t* _enc__field_list = _this->_enc__field_list;
  encore_trace_object((*_ctx), _enc__field_list, _enc__trace__encore_libs_master_Collections_LinkedList_LinkedList);
  option_t* _enc__field_cursor = _this->_enc__field_cursor;
  encore_trace_object((*_ctx), _enc__field_cursor, option_trace);
}


_enc__passive__encore_libs_master_Collections_LinkedList_LinkedIterator_t* _enc__constructor__encore_libs_master_Collections_LinkedList_LinkedIterator(pony_ctx_t** _ctx)
{
  _enc__passive__encore_libs_master_Collections_LinkedList_LinkedIterator_t* this = ((_enc__passive__encore_libs_master_Collections_LinkedList_LinkedIterator_t*) encore_alloc((*_ctx), sizeof(_enc__passive__encore_libs_master_Collections_LinkedList_LinkedIterator_t)));
  this->_enc__self_type = (&(_enc__passive__encore_libs_master_Collections_LinkedList_LinkedIterator_type));
  return this;
}


void* _enc__method__encore_libs_master_Collections_LinkedList_LinkedIterator__init(pony_ctx_t** _ctx, _enc__passive__encore_libs_master_Collections_LinkedList_LinkedIterator_t* _this, _enc__passive__encore_libs_master_Collections_LinkedList_LinkedList_t* _enc__arg_list)
{
  pony_type_t* _enc__type_t = (*((_enc__passive__encore_libs_master_Collections_LinkedList_LinkedIterator_t*) _this))._enc__type_t;
  /* this.list = list */;
  (*({ _this;}))._enc__field_list = _enc__arg_list;
  /* this.cursor = list.top */;
  option_t* _fieldacc_0 = (*_enc__arg_list)._enc__field_top;
  (*({ _this;}))._enc__field_cursor = _fieldacc_0;
  return UNIT;
}


option_t* _enc__method__encore_libs_master_Collections_LinkedList_LinkedIterator_next(pony_ctx_t** _ctx, _enc__passive__encore_libs_master_Collections_LinkedList_LinkedIterator_t* _this)
{
  pony_type_t* _enc__type_t = (*((_enc__passive__encore_libs_master_Collections_LinkedList_LinkedIterator_t*) _this))._enc__type_t;
  /* let current = this.cursor
in
  if current == Nothing then
    Nothing
  else
    {match this.cursor with
       Just node => this.cursor = node.next
     ;
     current} */;
  /* current = this.cursor */;
  option_t* _fieldacc_0 = (*_this)._enc__field_cursor;
  option_t* _current_1 = _fieldacc_0;
  /* if current == Nothing then
  Nothing
else
  {match this.cursor with
     Just node => this.cursor = node.next
   ;
   current} */;
  option_t* _ite_2;
  if (({int64_t _binop_4 = (({ _current_1;}) == ({option_t* _option_3 = (&(DEFAULT_NOTHING)); _option_3;})); _binop_4;}))
  {
    /* Nothing */;
    option_t* _option_5 = (&(DEFAULT_NOTHING));
    _ite_2 = ((option_t*) _option_5);
  }
  else
  {
    /* match this.cursor with
  Just node => this.cursor = node.next
 */;
    option_t* _fieldacc_7 = (*_this)._enc__field_cursor;
    void* _match_6;
    _enc__passive__encore_libs_master_Collections_LinkedList_LinkedNode_t* _node_8;
    if ((({int64_t _optionCheck_11;
           _optionCheck_11 = ((JUST == (*_fieldacc_7).tag) && ({int64_t _varBinding_12;
                                                                _enc__passive__encore_libs_master_Collections_LinkedList_LinkedNode_t* _optionVal_10 = (*_fieldacc_7).val.p;
                                                                _node_8 = _optionVal_10;
                                                                _varBinding_12 = 1; _varBinding_12;})); _optionCheck_11;}) && ({int64_t _literal_13 = 1/*True*/; _literal_13;})))
    {
      _match_6 = ((void*) ({option_t* _fieldacc_9 = (*_node_8)._enc__field_next;
                            (*({ _this;}))._enc__field_cursor = _fieldacc_9; UNIT;}));
    }
    else
    {
      printf("*** Runtime error: No matching clause was found ***\n");
      exit(1);
    };
    /* current */;
    _ite_2 = ((option_t*) _current_1);
  };
  return ((option_t*) _ite_2);
}


int64_t _enc__method__encore_libs_master_Collections_LinkedList_LinkedIterator_has_next(pony_ctx_t** _ctx, _enc__passive__encore_libs_master_Collections_LinkedList_LinkedIterator_t* _this)
{
  pony_type_t* _enc__type_t = (*((_enc__passive__encore_libs_master_Collections_LinkedList_LinkedIterator_t*) _this))._enc__type_t;
  /* this.cursor != Nothing */;
  int64_t _binop_2 = (({option_t* _fieldacc_0 = (*_this)._enc__field_cursor; _fieldacc_0;}) != ({option_t* _option_1 = (&(DEFAULT_NOTHING)); _option_1;}));
  return ((int64_t) _binop_2);
}


pony_type_t _enc__passive__encore_libs_master_Collections_LinkedList_LinkedIterator_type = {.id=_ENC__ID__encore_libs_master_Collections_LinkedList_LinkedIterator, .size=sizeof(_enc__passive__encore_libs_master_Collections_LinkedList_LinkedIterator_t), .trace=_enc__trace__encore_libs_master_Collections_LinkedList_LinkedIterator, .vtable=trait_method_selector};
