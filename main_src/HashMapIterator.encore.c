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


void _enc__type_init__encore_libs_master_Collections_HashMap_HashMapIterator(_enc__passive__encore_libs_master_Collections_HashMap_HashMapIterator_t* this, ... )
{
  va_list params;
  va_start(params, this);
  this->_enc__type_v = va_arg(params, pony_type_t *);
  va_end(params);
}


void _enc__trace__encore_libs_master_Collections_HashMap_HashMapIterator(pony_ctx_t* _ctx_arg, void* p)
{
  pony_ctx_t** _ctx = (&(_ctx_arg));
  _enc__passive__encore_libs_master_Collections_HashMap_HashMapIterator_t* _this = p;
  _enc__passive__encore_libs_master_Collections_HashMap_HashMap_t* _enc__field_map = _this->_enc__field_map;
  encore_trace_object((*_ctx), _enc__field_map, _enc__trace__encore_libs_master_Collections_HashMap_HashMap);
  uint64_t _enc__field_current_index = _this->_enc__field_current_index;
  /* Not tracing field '_enc__field_current_index' */;
  option_t* _enc__field_current_node = _this->_enc__field_current_node;
  encore_trace_object((*_ctx), _enc__field_current_node, option_trace);
}


_enc__passive__encore_libs_master_Collections_HashMap_HashMapIterator_t* _enc__constructor__encore_libs_master_Collections_HashMap_HashMapIterator(pony_ctx_t** _ctx)
{
  _enc__passive__encore_libs_master_Collections_HashMap_HashMapIterator_t* this = ((_enc__passive__encore_libs_master_Collections_HashMap_HashMapIterator_t*) encore_alloc((*_ctx), sizeof(_enc__passive__encore_libs_master_Collections_HashMap_HashMapIterator_t)));
  this->_enc__self_type = (&(_enc__passive__encore_libs_master_Collections_HashMap_HashMapIterator_type));
  return this;
}


void* _enc__method__encore_libs_master_Collections_HashMap_HashMapIterator__init(pony_ctx_t** _ctx, _enc__passive__encore_libs_master_Collections_HashMap_HashMapIterator_t* _this, _enc__passive__encore_libs_master_Collections_HashMap_HashMap_t* _enc__arg_map)
{
  pony_type_t* _enc__type_v = (*((_enc__passive__encore_libs_master_Collections_HashMap_HashMapIterator_t*) _this))._enc__type_v;
  /* this.map = map */;
  (*({ _this;}))._enc__field_map = _enc__arg_map;
  /* this.current_index = - 1 */;
  int64_t _literal_0 = 1;
  int64_t _unary_1 = (- _literal_0);
  (*({ _this;}))._enc__field_current_index = ((uint64_t) _unary_1);
  /* this.current_node = Nothing */;
  option_t* _option_2 = (&(DEFAULT_NOTHING));
  (*({ _this;}))._enc__field_current_node = _option_2;
  /* this.current_node = this.locate_next() */;
  check_receiver(_this, ".", "this", "locate_next", "\"./encore-libs-master/Collections/HashMap.enc\" (line 43, column 29)");
  option_t* _sync_method_call_3 = _enc__method__encore_libs_master_Collections_HashMap_HashMapIterator_locate_next(_ctx, _this);
  (*({ _this;}))._enc__field_current_node = _sync_method_call_3;
  return UNIT;
}


struct _enc__env_closure0
{
  _enc__passive__encore_libs_master_Collections_HashMap_HashMapIterator_t* _enc__field_this;
  pony_type_t* _enc__type_v;
};


static void _enc__trace_closure0(pony_ctx_t* _ctx_arg, void* p)
{
  pony_ctx_t** _ctx = (&(_ctx_arg));
  struct _enc__env_closure0* _this = p;
  encore_trace_object((*_ctx), _this->_enc__field_this, _enc__trace__encore_libs_master_Collections_HashMap_HashMapIterator);
}


static value_t _enc__closure_fun_closure0(pony_ctx_t** _ctx, pony_type_t** runtimeType, value_t _args[], void* _env)
{
  _enc__passive__encore_libs_master_Collections_HashMap_HashMapIterator_t* _enc__field_this = (*((struct _enc__env_closure0*) _env))._enc__field_this;
  pony_type_t* _enc__type_v = (*((struct _enc__env_closure0*) _env))._enc__type_v;
  /* let ret = Nothing : Maybe LinkedNode<Entry<v>>
in
  {this.current_index = this.current_index + 1;
   while this.current_index < this.map.size and ret == Nothing
     let list = this.map.map[this.current_index]
     in
       if list.length > 0 then
         ret = list.top
       else
         this.current_index = this.current_index + 1;
   ret} */;
  /* ret = Nothing : Maybe LinkedNode<Entry<v>> */;
  option_t* _option_0 = (&(DEFAULT_NOTHING));
  option_t* _cast_1 = ((option_t*) _option_0);
  option_t* _ret_2 = _cast_1;
  /* this.current_index = this.current_index + 1 */;
  uint64_t _binop_5 = (({uint64_t _fieldacc_3 = (*_enc__field_this)._enc__field_current_index; _fieldacc_3;}) + ({int64_t _literal_4 = 1; _literal_4;}));
  (*({ _enc__field_this;}))._enc__field_current_index = _binop_5;
  /* while this.current_index < this.map.size and ret == Nothing
  let list = this.map.map[this.current_index]
  in
    if list.length > 0 then
      ret = list.top
    else
      this.current_index = this.current_index + 1 */;
  void* _while_26;
  while (({int64_t _binop_12 = (({int64_t _binop_9 = (({uint64_t _fieldacc_6 = (*_enc__field_this)._enc__field_current_index; _fieldacc_6;}) < ({_enc__passive__encore_libs_master_Collections_HashMap_HashMap_t* _fieldacc_7 = (*_enc__field_this)._enc__field_map;
                                                                                                                                                 uint64_t _fieldacc_8 = (*_fieldacc_7)._enc__field_size; _fieldacc_8;})); _binop_9;}) && ({int64_t _binop_11 = (({ _ret_2;}) == ({option_t* _option_10 = (&(DEFAULT_NOTHING)); _option_10;})); _binop_11;})); _binop_12;}))
  {
    /* let list = this.map.map[this.current_index]
in
  if list.length > 0 then
    ret = list.top
  else
    this.current_index = this.current_index + 1 */;
    /* list = this.map.map[this.current_index] */;
    _enc__passive__encore_libs_master_Collections_HashMap_HashMap_t* _fieldacc_13 = (*_enc__field_this)._enc__field_map;
    array_t* _fieldacc_14 = (*_fieldacc_13)._enc__field_map;
    uint64_t _fieldacc_15 = (*_enc__field_this)._enc__field_current_index;
    _enc__passive__encore_libs_master_Collections_LinkedList_LinkedList_t* _access_16 = array_get(_fieldacc_14, _fieldacc_15).p;
    _enc__passive__encore_libs_master_Collections_LinkedList_LinkedList_t* _list_17 = _access_16;
    /* if list.length > 0 then
  ret = list.top
else
  this.current_index = this.current_index + 1 */;
    void* _ite_18;
    if (({int64_t _binop_21 = (({int64_t _fieldacc_19 = (*_list_17)._enc__field_length; _fieldacc_19;}) > ({int64_t _literal_20 = 0; _literal_20;})); _binop_21;}))
    {
      /* ret = list.top */;
      option_t* _fieldacc_22 = (*_list_17)._enc__field_top;
      _ret_2 = _fieldacc_22;
      _ite_18 = ((void*) UNIT);
    }
    else
    {
      /* this.current_index = this.current_index + 1 */;
      uint64_t _binop_25 = (({uint64_t _fieldacc_23 = (*_enc__field_this)._enc__field_current_index; _fieldacc_23;}) + ({int64_t _literal_24 = 1; _literal_24;}));
      (*({ _enc__field_this;}))._enc__field_current_index = _binop_25;
      _ite_18 = ((void*) UNIT);
    };
    _while_26 = _ite_18;
  };
  /* ret */;
  return ((encore_arg_t) {.p = _ret_2});
}


option_t* _enc__method__encore_libs_master_Collections_HashMap_HashMapIterator_locate_next(pony_ctx_t** _ctx, _enc__passive__encore_libs_master_Collections_HashMap_HashMapIterator_t* _this)
{
  pony_type_t* _enc__type_v = (*((_enc__passive__encore_libs_master_Collections_HashMap_HashMapIterator_t*) _this))._enc__type_v;
  /* let retval = Nothing : Maybe LinkedNode<Entry<v>>
    get_next_top = \() -> let ret = Nothing : Maybe LinkedNode<Entry<v>>
                          in
                            {this.current_index = this.current_index + 1;
                             while this.current_index < this.map.size and ret == Nothing
                               let list = this.map.map[this.current_index]
                               in
                                 if list.length > 0 then
                                   ret = list.top
                                 else
                                   this.current_index = this.current_index + 1;
                             ret}
in
  {match this.current_node with
     Just current => match current.next with
                       Just n => retval = current.next
                       Nothing => retval = get_next_top()
                     
     Nothing => retval = get_next_top()
   ;
   retval} */;
  /* retval = Nothing : Maybe LinkedNode<Entry<v>> */;
  option_t* _option_0 = (&(DEFAULT_NOTHING));
  option_t* _cast_1 = ((option_t*) _option_0);
  option_t* _retval_2 = _cast_1;
  /* get_next_top = \() -> let ret = Nothing : Maybe LinkedNode<Entry<v>>
       in
         {this.current_index = this.current_index + 1;
          while this.current_index < this.map.size and ret == Nothing
            let list = this.map.map[this.current_index]
            in
              if list.length > 0 then
                ret = list.top
              else
                this.current_index = this.current_index + 1;
          ret} */;
  struct _enc__env_closure0* _enc__env_closure0 = encore_alloc((*_ctx), sizeof(struct _enc__env_closure0));
  (*_enc__env_closure0)._enc__field_this = _this;
  closure_t* _tmp_3 = closure_mk(_ctx, _enc__closure_fun_closure0, _enc__env_closure0, _enc__trace_closure0, NULL);
  closure_t* _get_next_top_4 = _tmp_3;
  /* match this.current_node with
  Just current => match current.next with
                    Just n => retval = current.next
                    Nothing => retval = get_next_top()
                  
  Nothing => retval = get_next_top()
 */;
  option_t* _fieldacc_6 = (*_this)._enc__field_current_node;
  void* _match_5;
  _enc__passive__encore_libs_master_Collections_LinkedList_LinkedNode_t* _current_7;
  if ((({int64_t _optionCheck_27;
         _optionCheck_27 = ((JUST == (*_fieldacc_6).tag) && ({int64_t _varBinding_28;
                                                              _enc__passive__encore_libs_master_Collections_LinkedList_LinkedNode_t* _optionVal_26 = (*_fieldacc_6).val.p;
                                                              _current_7 = _optionVal_26;
                                                              _varBinding_28 = 1; _varBinding_28;})); _optionCheck_27;}) && ({int64_t _literal_29 = 1/*True*/; _literal_29;})))
  {
    _match_5 = ((void*) ({/* match current.next with
  Just n => retval = current.next
  Nothing => retval = get_next_top()
 */;
                          option_t* _fieldacc_9 = (*_current_7)._enc__field_next;
                          void* _match_8;
                          _enc__passive__encore_libs_master_Collections_LinkedList_LinkedNode_t* _n_10;
                          if ((({int64_t _optionCheck_18;
                                 _optionCheck_18 = ((JUST == (*_fieldacc_9).tag) && ({int64_t _varBinding_19;
                                                                                      _enc__passive__encore_libs_master_Collections_LinkedList_LinkedNode_t* _optionVal_17 = (*_fieldacc_9).val.p;
                                                                                      _n_10 = _optionVal_17;
                                                                                      _varBinding_19 = 1; _varBinding_19;})); _optionCheck_18;}) && ({int64_t _literal_20 = 1/*True*/; _literal_20;})))
                          {
                            _match_8 = ((void*) ({option_t* _fieldacc_11 = (*_current_7)._enc__field_next;
                                                  _retval_2 = _fieldacc_11; UNIT;}));
                          }
                          else
                          {
                            if ((({int64_t _valueCheck_14;
                                   _valueCheck_14 = (({option_t* _option_15 = (&(DEFAULT_NOTHING)); _option_15;}) == _fieldacc_9); _valueCheck_14;}) && ({int64_t _literal_16 = 1/*True*/; _literal_16;})))
                            {
                              _match_8 = ((void*) ({value_t _tmp_12[] = {};
                                                    option_t* _clos_13 = closure_call(_ctx, _get_next_top_4, _tmp_12).p;
                                                    _retval_2 = _clos_13; UNIT;}));
                            }
                            else
                            {
                              printf("*** Runtime error: No matching clause was found ***\n");
                              exit(1);
                            };
                          }; _match_8;}));
  }
  else
  {
    if ((({int64_t _valueCheck_23;
           _valueCheck_23 = (({option_t* _option_24 = (&(DEFAULT_NOTHING)); _option_24;}) == _fieldacc_6); _valueCheck_23;}) && ({int64_t _literal_25 = 1/*True*/; _literal_25;})))
    {
      _match_5 = ((void*) ({value_t _tmp_21[] = {};
                            option_t* _clos_22 = closure_call(_ctx, _get_next_top_4, _tmp_21).p;
                            _retval_2 = _clos_22; UNIT;}));
    }
    else
    {
      printf("*** Runtime error: No matching clause was found ***\n");
      exit(1);
    };
  };
  /* retval */;
  return ((option_t*) _retval_2);
}


option_t* _enc__method__encore_libs_master_Collections_HashMap_HashMapIterator_next(pony_ctx_t** _ctx, _enc__passive__encore_libs_master_Collections_HashMap_HashMapIterator_t* _this)
{
  pony_type_t* _enc__type_v = (*((_enc__passive__encore_libs_master_Collections_HashMap_HashMapIterator_t*) _this))._enc__type_v;
  /* let current = this.current_node
in
  {if this.has_next() then
     this.current_node = this.locate_next();
   match current with
     Just node => Just node.value
     Nothing => Nothing
   } */;
  /* current = this.current_node */;
  option_t* _fieldacc_0 = (*_this)._enc__field_current_node;
  option_t* _current_1 = _fieldacc_0;
  /* if this.has_next() then
  this.current_node = this.locate_next() */;
  void* _ite_2;
  if (({check_receiver(_this, ".", "this", "has_next", "\"./encore-libs-master/Collections/HashMap.enc\" (line 93, column 16)");
        int64_t _sync_method_call_3 = _enc__method__encore_libs_master_Collections_HashMap_HashMapIterator_has_next(_ctx, _this); _sync_method_call_3;}))
  {
    /* this.current_node = this.locate_next() */;
    check_receiver(_this, ".", "this", "locate_next", "\"./encore-libs-master/Collections/HashMap.enc\" (line 94, column 37)");
    option_t* _sync_method_call_4 = _enc__method__encore_libs_master_Collections_HashMap_HashMapIterator_locate_next(_ctx, _this);
    (*({ _this;}))._enc__field_current_node = _sync_method_call_4;
    _ite_2 = ((void*) UNIT);
  }
  else
  {
    UNIT;
    _ite_2 = ((void*) UNIT);
  };
  /* match current with
  Just node => Just node.value
  Nothing => Nothing
 */;
  option_t* _match_5;
  _enc__passive__encore_libs_master_Collections_LinkedList_LinkedNode_t* _node_6;
  if ((({int64_t _optionCheck_14;
         _optionCheck_14 = ((JUST == (*_current_1).tag) && ({int64_t _varBinding_15;
                                                             _enc__passive__encore_libs_master_Collections_LinkedList_LinkedNode_t* _optionVal_13 = (*_current_1).val.p;
                                                             _node_6 = _optionVal_13;
                                                             _varBinding_15 = 1; _varBinding_15;})); _optionCheck_14;}) && ({int64_t _literal_16 = 1/*True*/; _literal_16;})))
  {
    _match_5 = ((option_t*) ({_enc__passive__encore_libs_master_Collections_HashMap_Entry_t* _fieldacc_7 = (*_node_6)._enc__field_value.p;
                              option_t* _option_8 = option_mk(_ctx, JUST, ((encore_arg_t) {.p = _fieldacc_7}), (&(_enc__passive__encore_libs_master_Collections_HashMap_Entry_type))); _option_8;}));
  }
  else
  {
    if ((({int64_t _valueCheck_10;
           _valueCheck_10 = (({option_t* _option_11 = (&(DEFAULT_NOTHING)); _option_11;}) == _current_1); _valueCheck_10;}) && ({int64_t _literal_12 = 1/*True*/; _literal_12;})))
    {
      _match_5 = ((option_t*) ({option_t* _option_9 = (&(DEFAULT_NOTHING)); _option_9;}));
    }
    else
    {
      printf("*** Runtime error: No matching clause was found ***\n");
      exit(1);
    };
  };
  return ((option_t*) _match_5);
}


int64_t _enc__method__encore_libs_master_Collections_HashMap_HashMapIterator_has_next(pony_ctx_t** _ctx, _enc__passive__encore_libs_master_Collections_HashMap_HashMapIterator_t* _this)
{
  pony_type_t* _enc__type_v = (*((_enc__passive__encore_libs_master_Collections_HashMap_HashMapIterator_t*) _this))._enc__type_v;
  /* this.current_node != Nothing */;
  int64_t _binop_2 = (({option_t* _fieldacc_0 = (*_this)._enc__field_current_node; _fieldacc_0;}) != ({option_t* _option_1 = (&(DEFAULT_NOTHING)); _option_1;}));
  return ((int64_t) _binop_2);
}


pony_type_t _enc__passive__encore_libs_master_Collections_HashMap_HashMapIterator_type = {.id=_ENC__ID__encore_libs_master_Collections_HashMap_HashMapIterator, .size=sizeof(_enc__passive__encore_libs_master_Collections_HashMap_HashMapIterator_t), .trace=_enc__trace__encore_libs_master_Collections_HashMap_HashMapIterator, .vtable=trait_method_selector};
