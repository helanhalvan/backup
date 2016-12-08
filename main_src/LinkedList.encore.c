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


void _enc__type_init__encore_libs_master_Collections_LinkedList_LinkedList(_enc__passive__encore_libs_master_Collections_LinkedList_LinkedList_t* this, ... )
{
  va_list params;
  va_start(params, this);
  this->_enc__type_t = va_arg(params, pony_type_t *);
  va_end(params);
}


void _enc__trace__encore_libs_master_Collections_LinkedList_LinkedList(pony_ctx_t* _ctx_arg, void* p)
{
  pony_ctx_t** _ctx = (&(_ctx_arg));
  _enc__passive__encore_libs_master_Collections_LinkedList_LinkedList_t* _this = p;
  option_t* _enc__field_top = _this->_enc__field_top;
  encore_trace_object((*_ctx), _enc__field_top, option_trace);
  int64_t _enc__field_length = _this->_enc__field_length;
  /* Not tracing field '_enc__field_length' */;
}


_enc__passive__encore_libs_master_Collections_LinkedList_LinkedList_t* _enc__constructor__encore_libs_master_Collections_LinkedList_LinkedList(pony_ctx_t** _ctx)
{
  _enc__passive__encore_libs_master_Collections_LinkedList_LinkedList_t* this = ((_enc__passive__encore_libs_master_Collections_LinkedList_LinkedList_t*) encore_alloc((*_ctx), sizeof(_enc__passive__encore_libs_master_Collections_LinkedList_LinkedList_t)));
  this->_enc__self_type = (&(_enc__passive__encore_libs_master_Collections_LinkedList_LinkedList_type));
  return this;
}


void* _enc__method__encore_libs_master_Collections_LinkedList_LinkedList__init(pony_ctx_t** _ctx, _enc__passive__encore_libs_master_Collections_LinkedList_LinkedList_t* _this)
{
  pony_type_t* _enc__type_t = (*((_enc__passive__encore_libs_master_Collections_LinkedList_LinkedList_t*) _this))._enc__type_t;
  /* this.top = Nothing : Maybe LinkedNode<t> */;
  option_t* _option_0 = (&(DEFAULT_NOTHING));
  option_t* _cast_1 = ((option_t*) _option_0);
  (*({ _this;}))._enc__field_top = _cast_1;
  /* this.length = 0 */;
  int64_t _literal_2 = 0;
  (*({ _this;}))._enc__field_length = _literal_2;
  return UNIT;
}


_enc__passive__encore_libs_master_Collections_LinkedList_LinkedIterator_t* _enc__method__encore_libs_master_Collections_LinkedList_LinkedList_iterator(pony_ctx_t** _ctx, _enc__passive__encore_libs_master_Collections_LinkedList_LinkedList_t* _this)
{
  pony_type_t* _enc__type_t = (*((_enc__passive__encore_libs_master_Collections_LinkedList_LinkedList_t*) _this))._enc__type_t;
  /* new LinkedIterator<t>(this) */;
  _enc__passive__encore_libs_master_Collections_LinkedList_LinkedIterator_t* _new_0 = _enc__constructor__encore_libs_master_Collections_LinkedList_LinkedIterator(_ctx);
  _enc__type_init__encore_libs_master_Collections_LinkedList_LinkedIterator(_new_0, _enc__type_t);
  _enc__method__encore_libs_master_Collections_LinkedList_LinkedIterator__init(_ctx, _new_0, _this);
  return ((_enc__passive__encore_libs_master_Collections_LinkedList_LinkedIterator_t*) _new_0);
}


void* _enc__method__encore_libs_master_Collections_LinkedList_LinkedList_push(pony_ctx_t** _ctx, _enc__passive__encore_libs_master_Collections_LinkedList_LinkedList_t* _this, encore_arg_t _enc__arg_value)
{
  pony_type_t* _enc__type_t = (*((_enc__passive__encore_libs_master_Collections_LinkedList_LinkedList_t*) _this))._enc__type_t;
  /* let new_node = Just new LinkedNode<t>(value, Nothing, this.top)
in
  {if this.top != Nothing then
     match this.top with
       Just node => node.prev = new_node
     ;
   this.top = new_node;
   this.length = this.length + 1} */;
  /* new_node = Just new LinkedNode<t>(value, Nothing, this.top) */;
  _enc__passive__encore_libs_master_Collections_LinkedList_LinkedNode_t* _new_0 = _enc__constructor__encore_libs_master_Collections_LinkedList_LinkedNode(_ctx);
  option_t* _option_1 = (&(DEFAULT_NOTHING));
  option_t* _cast_2 = ((option_t*) _option_1);
  option_t* _fieldacc_3 = (*_this)._enc__field_top;
  _enc__type_init__encore_libs_master_Collections_LinkedList_LinkedNode(_new_0, _enc__type_t);
  _enc__method__encore_libs_master_Collections_LinkedList_LinkedNode__init(_ctx, _new_0, _enc__arg_value, ((option_t*) _cast_2), _fieldacc_3);
  option_t* _option_4 = option_mk(_ctx, JUST, ((encore_arg_t) {.p = _new_0}), (&(_enc__passive__encore_libs_master_Collections_LinkedList_LinkedNode_type)));
  option_t* _new_node_5 = _option_4;
  /* if this.top != Nothing then
  match this.top with
    Just node => node.prev = new_node
   */;
  void* _ite_6;
  if (({int64_t _binop_9 = (({option_t* _fieldacc_7 = (*_this)._enc__field_top; _fieldacc_7;}) != ({option_t* _option_8 = (&(DEFAULT_NOTHING)); _option_8;})); _binop_9;}))
  {
    /* match this.top with
  Just node => node.prev = new_node
 */;
    option_t* _fieldacc_11 = (*_this)._enc__field_top;
    void* _match_10;
    _enc__passive__encore_libs_master_Collections_LinkedList_LinkedNode_t* _node_12;
    if ((({int64_t _optionCheck_14;
           _optionCheck_14 = ((JUST == (*_fieldacc_11).tag) && ({int64_t _varBinding_15;
                                                                 _enc__passive__encore_libs_master_Collections_LinkedList_LinkedNode_t* _optionVal_13 = (*_fieldacc_11).val.p;
                                                                 _node_12 = _optionVal_13;
                                                                 _varBinding_15 = 1; _varBinding_15;})); _optionCheck_14;}) && ({int64_t _literal_16 = 1/*True*/; _literal_16;})))
    {
      _match_10 = ((void*) ({(*({ _node_12;}))._enc__field_prev = _new_node_5; UNIT;}));
    }
    else
    {
      printf("*** Runtime error: No matching clause was found ***\n");
      exit(1);
    };
    _ite_6 = ((void*) _match_10);
  }
  else
  {
    UNIT;
    _ite_6 = ((void*) UNIT);
  };
  /* this.top = new_node */;
  (*({ _this;}))._enc__field_top = _new_node_5;
  /* this.length = this.length + 1 */;
  int64_t _binop_19 = (({int64_t _fieldacc_17 = (*_this)._enc__field_length; _fieldacc_17;}) + ({int64_t _literal_18 = 1; _literal_18;}));
  (*({ _this;}))._enc__field_length = _binop_19;
  return UNIT;
}


void* _enc__method__encore_libs_master_Collections_LinkedList_LinkedList_drop(pony_ctx_t** _ctx, _enc__passive__encore_libs_master_Collections_LinkedList_LinkedList_t* _this, _enc__passive__encore_libs_master_Collections_LinkedList_LinkedNode_t* _enc__arg_node)
{
  pony_type_t* _enc__type_t = (*((_enc__passive__encore_libs_master_Collections_LinkedList_LinkedList_t*) _this))._enc__type_t;
  /* let prev = node.prev : Maybe LinkedNode<t>
    next = node.next : Maybe LinkedNode<t>
in
  {match prev with
     Just n => n.next = next
     Nothing => ()
   ;
   match next with
     Just n => n.prev = prev
     Nothing => ()
   ;
   match this.top with
     Just n => if n == node then
                 this.top = next
     Nothing => ()
   ;
   this.length = this.length - 1} */;
  /* prev = node.prev : Maybe LinkedNode<t> */;
  option_t* _fieldacc_0 = (*_enc__arg_node)._enc__field_prev;
  option_t* _cast_1 = ((option_t*) _fieldacc_0);
  option_t* _prev_2 = _cast_1;
  /* next = node.next : Maybe LinkedNode<t> */;
  option_t* _fieldacc_3 = (*_enc__arg_node)._enc__field_next;
  option_t* _cast_4 = ((option_t*) _fieldacc_3);
  option_t* _next_5 = _cast_4;
  /* match prev with
  Just n => n.next = next
  Nothing => ()
 */;
  void* _match_6;
  _enc__passive__encore_libs_master_Collections_LinkedList_LinkedNode_t* _n_7;
  if ((({int64_t _optionCheck_12;
         _optionCheck_12 = ((JUST == (*_prev_2).tag) && ({int64_t _varBinding_13;
                                                          _enc__passive__encore_libs_master_Collections_LinkedList_LinkedNode_t* _optionVal_11 = (*_prev_2).val.p;
                                                          _n_7 = _optionVal_11;
                                                          _varBinding_13 = 1; _varBinding_13;})); _optionCheck_12;}) && ({int64_t _literal_14 = 1/*True*/; _literal_14;})))
  {
    _match_6 = ((void*) ({(*({ _n_7;}))._enc__field_next = _next_5; UNIT;}));
  }
  else
  {
    if ((({int64_t _valueCheck_8;
           _valueCheck_8 = (({option_t* _option_9 = (&(DEFAULT_NOTHING)); _option_9;}) == _prev_2); _valueCheck_8;}) && ({int64_t _literal_10 = 1/*True*/; _literal_10;})))
    {
      _match_6 = ((void*) ({UNIT; UNIT;}));
    }
    else
    {
      printf("*** Runtime error: No matching clause was found ***\n");
      exit(1);
    };
  };
  /* match next with
  Just n => n.prev = prev
  Nothing => ()
 */;
  void* _match_15;
  _enc__passive__encore_libs_master_Collections_LinkedList_LinkedNode_t* _n_16;
  if ((({int64_t _optionCheck_21;
         _optionCheck_21 = ((JUST == (*_next_5).tag) && ({int64_t _varBinding_22;
                                                          _enc__passive__encore_libs_master_Collections_LinkedList_LinkedNode_t* _optionVal_20 = (*_next_5).val.p;
                                                          _n_16 = _optionVal_20;
                                                          _varBinding_22 = 1; _varBinding_22;})); _optionCheck_21;}) && ({int64_t _literal_23 = 1/*True*/; _literal_23;})))
  {
    _match_15 = ((void*) ({(*({ _n_16;}))._enc__field_prev = _prev_2; UNIT;}));
  }
  else
  {
    if ((({int64_t _valueCheck_17;
           _valueCheck_17 = (({option_t* _option_18 = (&(DEFAULT_NOTHING)); _option_18;}) == _next_5); _valueCheck_17;}) && ({int64_t _literal_19 = 1/*True*/; _literal_19;})))
    {
      _match_15 = ((void*) ({UNIT; UNIT;}));
    }
    else
    {
      printf("*** Runtime error: No matching clause was found ***\n");
      exit(1);
    };
  };
  /* match this.top with
  Just n => if n == node then
              this.top = next
  Nothing => ()
 */;
  option_t* _fieldacc_25 = (*_this)._enc__field_top;
  void* _match_24;
  _enc__passive__encore_libs_master_Collections_LinkedList_LinkedNode_t* _n_26;
  if ((({int64_t _optionCheck_33;
         _optionCheck_33 = ((JUST == (*_fieldacc_25).tag) && ({int64_t _varBinding_34;
                                                               _enc__passive__encore_libs_master_Collections_LinkedList_LinkedNode_t* _optionVal_32 = (*_fieldacc_25).val.p;
                                                               _n_26 = _optionVal_32;
                                                               _varBinding_34 = 1; _varBinding_34;})); _optionCheck_33;}) && ({int64_t _literal_35 = 1/*True*/; _literal_35;})))
  {
    _match_24 = ((void*) ({void* _ite_27;
                           if (({int64_t _binop_28 = (({ _n_26;}) == ((_enc__passive__encore_libs_master_Collections_LinkedList_LinkedNode_t*) ({ _enc__arg_node;}))); _binop_28;}))
                           {
                             (*({ _this;}))._enc__field_top = _next_5;
                             _ite_27 = ((void*) UNIT);
                           }
                           else
                           {
                             UNIT;
                             _ite_27 = ((void*) UNIT);
                           }; _ite_27;}));
  }
  else
  {
    if ((({int64_t _valueCheck_29;
           _valueCheck_29 = (({option_t* _option_30 = (&(DEFAULT_NOTHING)); _option_30;}) == _fieldacc_25); _valueCheck_29;}) && ({int64_t _literal_31 = 1/*True*/; _literal_31;})))
    {
      _match_24 = ((void*) ({UNIT; UNIT;}));
    }
    else
    {
      printf("*** Runtime error: No matching clause was found ***\n");
      exit(1);
    };
  };
  /* this.length = this.length - 1 */;
  int64_t _binop_38 = (({int64_t _fieldacc_36 = (*_this)._enc__field_length; _fieldacc_36;}) - ({int64_t _literal_37 = 1; _literal_37;}));
  (*({ _this;}))._enc__field_length = _binop_38;
  return UNIT;
}


void* _enc__method__encore_libs_master_Collections_LinkedList_LinkedList_remove_all(pony_ctx_t** _ctx, _enc__passive__encore_libs_master_Collections_LinkedList_LinkedList_t* _this, encore_arg_t _enc__arg_value)
{
  pony_type_t* _enc__type_t = (*((_enc__passive__encore_libs_master_Collections_LinkedList_LinkedList_t*) _this))._enc__type_t;
  /* let remove = new LinkedList<LinkedNode<t>>()
    iter = this.iterator()
in
  {while iter.has_next()
     let current = iter.next()
     in
       match current with
         Just node => if node.value == value then
                        remove.push(node)
       ;
   let rem_iter = remove.iterator()
   in
     while rem_iter.has_next()
       let current = rem_iter.next()
       in
         match current with
           Just node => this.drop(node.value)
         } */;
  /* remove = new LinkedList<LinkedNode<t>>() */;
  _enc__passive__encore_libs_master_Collections_LinkedList_LinkedList_t* _new_0 = _enc__constructor__encore_libs_master_Collections_LinkedList_LinkedList(_ctx);
  _enc__type_init__encore_libs_master_Collections_LinkedList_LinkedList(_new_0, (&(_enc__passive__encore_libs_master_Collections_LinkedList_LinkedNode_type)));
  _enc__method__encore_libs_master_Collections_LinkedList_LinkedList__init(_ctx, _new_0);
  _enc__passive__encore_libs_master_Collections_LinkedList_LinkedList_t* _remove_1 = _new_0;
  /* iter = this.iterator() */;
  check_receiver(_this, ".", "this", "iterator", "\"./encore-libs-master/Collections/LinkedList.enc\" (line 75, column 24)");
  _enc__passive__encore_libs_master_Collections_LinkedList_LinkedIterator_t* _sync_method_call_2 = _enc__method__encore_libs_master_Collections_LinkedList_LinkedList_iterator(_ctx, _this);
  _enc__passive__encore_libs_master_Collections_LinkedList_LinkedIterator_t* _iter_3 = _sync_method_call_2;
  /* while iter.has_next()
  let current = iter.next()
  in
    match current with
      Just node => if node.value == value then
                     remove.push(node)
     */;
  void* _while_17;
  while (({check_receiver(_iter_3, ".", "iter", "has_next", "\"./encore-libs-master/Collections/LinkedList.enc\" (line 78, column 24)");
           int64_t _sync_method_call_4 = _enc__method__encore_libs_master_Collections_LinkedList_LinkedIterator_has_next(_ctx, _iter_3); _sync_method_call_4;}))
  {
    /* let current = iter.next()
in
  match current with
    Just node => if node.value == value then
                   remove.push(node)
   */;
    /* current = iter.next() */;
    check_receiver(_iter_3, ".", "iter", "next", "\"./encore-libs-master/Collections/LinkedList.enc\" (line 79, column 35)");
    option_t* _sync_method_call_5 = _enc__method__encore_libs_master_Collections_LinkedList_LinkedIterator_next(_ctx, _iter_3);
    option_t* _current_6 = _sync_method_call_5;
    /* match current with
  Just node => if node.value == value then
                 remove.push(node)
 */;
    void* _match_7;
    _enc__passive__encore_libs_master_Collections_LinkedList_LinkedNode_t* _node_8;
    if ((({int64_t _optionCheck_14;
           _optionCheck_14 = ((JUST == (*_current_6).tag) && ({int64_t _varBinding_15;
                                                               _enc__passive__encore_libs_master_Collections_LinkedList_LinkedNode_t* _optionVal_13 = (*_current_6).val.p;
                                                               _node_8 = _optionVal_13;
                                                               _varBinding_15 = 1; _varBinding_15;})); _optionCheck_14;}) && ({int64_t _literal_16 = 1/*True*/; _literal_16;})))
    {
      _match_7 = ((void*) ({/* if node.value == value then
  remove.push(node) */;
                            void* _ite_9;
                            if (({int64_t _binop_11 = (({encore_arg_t _fieldacc_10 = (*_node_8)._enc__field_value; _fieldacc_10.p;}) == ({ _enc__arg_value.p;})); _binop_11;}))
                            {
                              /* remove.push(node) */;
                              check_receiver(_remove_1, ".", "remove", "push", "\"./encore-libs-master/Collections/LinkedList.enc\" (line 84, column 37)");
                              void* _sync_method_call_12 = _enc__method__encore_libs_master_Collections_LinkedList_LinkedList_push(_ctx, _remove_1, ((encore_arg_t) {.p = _node_8}));
                              _ite_9 = ((void*) _sync_method_call_12);
                            }
                            else
                            {
                              UNIT;
                              _ite_9 = ((void*) UNIT);
                            }; _ite_9;}));
    }
    else
    {
      printf("*** Runtime error: No matching clause was found ***\n");
      exit(1);
    };
    _while_17 = _match_7;
  };
  /* let rem_iter = remove.iterator()
in
  while rem_iter.has_next()
    let current = rem_iter.next()
    in
      match current with
        Just node => this.drop(node.value)
       */;
  /* rem_iter = remove.iterator() */;
  check_receiver(_remove_1, ".", "remove", "iterator", "\"./encore-libs-master/Collections/LinkedList.enc\" (line 91, column 32)");
  _enc__passive__encore_libs_master_Collections_LinkedList_LinkedIterator_t* _sync_method_call_18 = _enc__method__encore_libs_master_Collections_LinkedList_LinkedList_iterator(_ctx, _remove_1);
  _enc__passive__encore_libs_master_Collections_LinkedList_LinkedIterator_t* _rem_iter_19 = _sync_method_call_18;
  /* while rem_iter.has_next()
  let current = rem_iter.next()
  in
    match current with
      Just node => this.drop(node.value)
     */;
  void* _while_31;
  while (({check_receiver(_rem_iter_19, ".", "rem_iter", "has_next", "\"./encore-libs-master/Collections/LinkedList.enc\" (line 92, column 27)");
           int64_t _sync_method_call_20 = _enc__method__encore_libs_master_Collections_LinkedList_LinkedIterator_has_next(_ctx, _rem_iter_19); _sync_method_call_20;}))
  {
    /* let current = rem_iter.next()
in
  match current with
    Just node => this.drop(node.value)
   */;
    /* current = rem_iter.next() */;
    check_receiver(_rem_iter_19, ".", "rem_iter", "next", "\"./encore-libs-master/Collections/LinkedList.enc\" (line 93, column 39)");
    option_t* _sync_method_call_21 = _enc__method__encore_libs_master_Collections_LinkedList_LinkedIterator_next(_ctx, _rem_iter_19);
    option_t* _current_22 = _sync_method_call_21;
    /* match current with
  Just node => this.drop(node.value)
 */;
    void* _match_23;
    _enc__passive__encore_libs_master_Collections_LinkedList_LinkedNode_t* _node_24;
    if ((({int64_t _optionCheck_28;
           _optionCheck_28 = ((JUST == (*_current_22).tag) && ({int64_t _varBinding_29;
                                                                _enc__passive__encore_libs_master_Collections_LinkedList_LinkedNode_t* _optionVal_27 = (*_current_22).val.p;
                                                                _node_24 = _optionVal_27;
                                                                _varBinding_29 = 1; _varBinding_29;})); _optionCheck_28;}) && ({int64_t _literal_30 = 1/*True*/; _literal_30;})))
    {
      _match_23 = ((void*) ({check_receiver(_this, ".", "this", "drop", "\"./encore-libs-master/Collections/LinkedList.enc\" (line 96, column 46)");
                             _enc__passive__encore_libs_master_Collections_LinkedList_LinkedNode_t* _fieldacc_26 = (*_node_24)._enc__field_value.p;
                             void* _sync_method_call_25 = _enc__method__encore_libs_master_Collections_LinkedList_LinkedList_drop(_ctx, _this, _fieldacc_26); _sync_method_call_25;}));
    }
    else
    {
      printf("*** Runtime error: No matching clause was found ***\n");
      exit(1);
    };
    _while_31 = _match_23;
  };
  return UNIT;
}


pony_type_t _enc__passive__encore_libs_master_Collections_LinkedList_LinkedList_type = {.id=_ENC__ID__encore_libs_master_Collections_LinkedList_LinkedList, .size=sizeof(_enc__passive__encore_libs_master_Collections_LinkedList_LinkedList_t), .trace=_enc__trace__encore_libs_master_Collections_LinkedList_LinkedList, .vtable=trait_method_selector};
