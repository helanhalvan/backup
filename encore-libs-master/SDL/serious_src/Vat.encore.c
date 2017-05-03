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


struct _enc__active_Vat_t
{
  encore_actor_t _enc__actor;
  pony_type_t* _enc__type_t;
  option_t* _enc__field_field;
  _enc__passive_LinkedList_t* _enc__field_pre_actions;
  _enc__passive_LinkedList_t* _enc__field_post_actions;
  _enc__passive_LinkedList_t* _enc__field_trans_actions;
  _enc__passive_LinkedList_t* _enc__field_fail_actions;
  int64_t _enc__field_open;
};


void _enc__type_init_Vat(_enc__active_Vat_t* this, ... )
{
  va_list params;
  va_start(params, this);
  this->_enc__type_t = va_arg(params, pony_type_t *);
  va_end(params);
}


void _enc__trace_Vat(pony_ctx_t* _ctx_arg, void* p)
{
  pony_ctx_t** _ctx = (&(_ctx_arg));
  _enc__active_Vat_t* _this = p;
  option_t* _enc__field_field = _this->_enc__field_field;
  pony_traceobject((*_ctx), _enc__field_field, option_trace);
  _enc__passive_LinkedList_t* _enc__field_pre_actions = _this->_enc__field_pre_actions;
  pony_traceobject((*_ctx), _enc__field_pre_actions, _enc__trace_LinkedList);
  _enc__passive_LinkedList_t* _enc__field_post_actions = _this->_enc__field_post_actions;
  pony_traceobject((*_ctx), _enc__field_post_actions, _enc__trace_LinkedList);
  _enc__passive_LinkedList_t* _enc__field_trans_actions = _this->_enc__field_trans_actions;
  pony_traceobject((*_ctx), _enc__field_trans_actions, _enc__trace_LinkedList);
  _enc__passive_LinkedList_t* _enc__field_fail_actions = _this->_enc__field_fail_actions;
  pony_traceobject((*_ctx), _enc__field_fail_actions, _enc__trace_LinkedList);
  int64_t _enc__field_open = _this->_enc__field_open;
  /* Not tracing field '_enc__field_open' */;
}


_enc__active_Vat_t* _enc__constructor_Vat(pony_ctx_t** _ctx)
{
  _enc__active_Vat_t* this = ((_enc__active_Vat_t*) encore_create((*_ctx), (&(_enc__active_Vat_type))));
  return this;
}


void* _enc__method_Vat__init(pony_ctx_t** _ctx, _enc__active_Vat_t* _this)
{
  pony_type_t* _enc__type_t = (*((_enc__active_Vat_t*) _this))._enc__type_t;
  /* this.field = Nothing */;
  option_t* _option_0 = (&(DEFAULT_NOTHING));
  (*({ _this;}))._enc__field_field = _option_0;
  /* this.pre_actions = new LinkedList<Pre_action<t>>() */;
  _enc__passive_LinkedList_t* _new_1 = _enc__constructor_LinkedList(_ctx);
  _enc__type_init_LinkedList(_new_1, (&(closure_type)));
  _enc__method_LinkedList__init(_ctx, _new_1);
  (*({ _this;}))._enc__field_pre_actions = _new_1;
  /* this.trans_actions = new LinkedList<Transformation_action<t>>() */;
  _enc__passive_LinkedList_t* _new_2 = _enc__constructor_LinkedList(_ctx);
  _enc__type_init_LinkedList(_new_2, (&(closure_type)));
  _enc__method_LinkedList__init(_ctx, _new_2);
  (*({ _this;}))._enc__field_trans_actions = _new_2;
  /* this.fail_actions = new LinkedList<Post_Fail_action<t>>() */;
  _enc__passive_LinkedList_t* _new_3 = _enc__constructor_LinkedList(_ctx);
  _enc__type_init_LinkedList(_new_3, (&(closure_type)));
  _enc__method_LinkedList__init(_ctx, _new_3);
  (*({ _this;}))._enc__field_fail_actions = _new_3;
  /* this.post_actions = new LinkedList<Post_Fail_action<t>>() */;
  _enc__passive_LinkedList_t* _new_4 = _enc__constructor_LinkedList(_ctx);
  _enc__type_init_LinkedList(_new_4, (&(closure_type)));
  _enc__method_LinkedList__init(_ctx, _new_4);
  (*({ _this;}))._enc__field_post_actions = _new_4;
  /* this.open = true */;
  int64_t _literal_5 = 1/*True*/;
  (*({ _this;}))._enc__field_open = _literal_5;
  return UNIT;
}


void* _enc__method_Vat_openVat(pony_ctx_t** _ctx, _enc__active_Vat_t* _this)
{
  pony_type_t* _enc__type_t = (*((_enc__active_Vat_t*) _this))._enc__type_t;
  /* this.open = true */;
  int64_t _literal_0 = 1/*True*/;
  (*({ _this;}))._enc__field_open = _literal_0;
  return UNIT;
}


void* _enc__method_Vat_closeVat(pony_ctx_t** _ctx, _enc__active_Vat_t* _this)
{
  pony_type_t* _enc__type_t = (*((_enc__active_Vat_t*) _this))._enc__type_t;
  /* this.open = false */;
  int64_t _literal_0 = 0/*False*/;
  (*({ _this;}))._enc__field_open = _literal_0;
  return UNIT;
}


void* _enc__method_Vat_block_me(pony_ctx_t** _ctx, _enc__active_Vat_t* _this)
{
  pony_type_t* _enc__type_t = (*((_enc__active_Vat_t*) _this))._enc__type_t;
  /* () */;
  UNIT;
  return UNIT;
}


int64_t _enc__method_Vat_condRegPost(pony_ctx_t** _ctx, _enc__active_Vat_t* _this, closure_t* _enc__arg_action, closure_t* _enc__arg_condition, closure_t* _enc__arg_callback)
{
  pony_type_t* _enc__type_t = (*((_enc__active_Vat_t*) _this))._enc__type_t;
  /* if condition(this.field) then
  {this.registerPost(action);
   true}
else
  {callback(this.field);
   false} */;
  int64_t _ite_0;
  if (({value_t _tmp_2[] = {((encore_arg_t) {.p = ({option_t* _fieldacc_1 = (*_this)._enc__field_field; _fieldacc_1;})})};
        int64_t _clos_3 = closure_call(_ctx, _enc__arg_condition, _tmp_2).i; _clos_3;}))
  {
    /* this.registerPost(action) */;
    check_receiver(_this, ".", "this", "registerPost", "\"./Vat.enc\" (line 43, column 7)");
    void* _sync_method_call_4 = _enc__method_Vat_registerPost(_ctx, _this, _enc__arg_action);
    /* true */;
    int64_t _literal_5 = 1/*True*/;
    _ite_0 = ((int64_t) _literal_5);
  }
  else
  {
    /* callback(this.field) */;
    value_t _tmp_7[] = {((encore_arg_t) {.p = ({option_t* _fieldacc_6 = (*_this)._enc__field_field; _fieldacc_6;})})};
    closure_call(_ctx, _enc__arg_callback, _tmp_7).p;
    /* false */;
    int64_t _literal_8 = 0/*False*/;
    _ite_0 = ((int64_t) _literal_8);
  };
  return _ite_0;
}


void* _enc__method_Vat_registerPre(pony_ctx_t** _ctx, _enc__active_Vat_t* _this, closure_t* _enc__arg_pre)
{
  pony_type_t* _enc__type_t = (*((_enc__active_Vat_t*) _this))._enc__type_t;
  /* this.pre_actions.append(pre) */;
  _enc__passive_LinkedList_t* _fieldacc_1 = (*_this)._enc__field_pre_actions;
  check_receiver(_fieldacc_1, ".", "this.pre_actions", "append", "\"./Vat.enc\" (line 52, column 5)");
  void* _sync_method_call_0 = _enc__method_LinkedList_append(_ctx, _fieldacc_1, ((encore_arg_t) {.p = _enc__arg_pre}));
  return UNIT;
}


void* _enc__method_Vat_registerPost(pony_ctx_t** _ctx, _enc__active_Vat_t* _this, closure_t* _enc__arg_post)
{
  pony_type_t* _enc__type_t = (*((_enc__active_Vat_t*) _this))._enc__type_t;
  /* this.post_actions.append(post) */;
  _enc__passive_LinkedList_t* _fieldacc_1 = (*_this)._enc__field_post_actions;
  check_receiver(_fieldacc_1, ".", "this.post_actions", "append", "\"./Vat.enc\" (line 56, column 5)");
  void* _sync_method_call_0 = _enc__method_LinkedList_append(_ctx, _fieldacc_1, ((encore_arg_t) {.p = _enc__arg_post}));
  return UNIT;
}


void* _enc__method_Vat_registerFail(pony_ctx_t** _ctx, _enc__active_Vat_t* _this, closure_t* _enc__arg_fail)
{
  pony_type_t* _enc__type_t = (*((_enc__active_Vat_t*) _this))._enc__type_t;
  /* this.fail_actions.append(fail) */;
  _enc__passive_LinkedList_t* _fieldacc_1 = (*_this)._enc__field_fail_actions;
  check_receiver(_fieldacc_1, ".", "this.fail_actions", "append", "\"./Vat.enc\" (line 60, column 5)");
  void* _sync_method_call_0 = _enc__method_LinkedList_append(_ctx, _fieldacc_1, ((encore_arg_t) {.p = _enc__arg_fail}));
  return UNIT;
}


void* _enc__method_Vat_registerTrans(pony_ctx_t** _ctx, _enc__active_Vat_t* _this, closure_t* _enc__arg_trans)
{
  pony_type_t* _enc__type_t = (*((_enc__active_Vat_t*) _this))._enc__type_t;
  /* this.trans_actions.append(trans) */;
  _enc__passive_LinkedList_t* _fieldacc_1 = (*_this)._enc__field_trans_actions;
  check_receiver(_fieldacc_1, ".", "this.trans_actions", "append", "\"./Vat.enc\" (line 64, column 5)");
  void* _sync_method_call_0 = _enc__method_LinkedList_append(_ctx, _fieldacc_1, ((encore_arg_t) {.p = _enc__arg_trans}));
  return UNIT;
}


tuple_t* _enc__method_Vat_readOrRegPost(pony_ctx_t** _ctx, _enc__active_Vat_t* _this, closure_t* _enc__arg_post)
{
  pony_type_t* _enc__type_t = (*((_enc__active_Vat_t*) _this))._enc__type_t;
  /* if this.field != Nothing then
  (false, this.field)
else
  {this.registerPost(post);
   (true, this.field)} */;
  tuple_t* _ite_0;
  if (({int64_t _binop_3 = (({option_t* _fieldacc_1 = (*_this)._enc__field_field; _fieldacc_1;}) != ({option_t* _option_2 = (&(DEFAULT_NOTHING)); _option_2;})); _binop_3;}))
  {
    /* (false, this.field) */;
    tuple_t* _tuple_4 = tuple_mk(_ctx, 2);
    tuple_set_type(_tuple_4, 0, ENCORE_PRIMITIVE);
    tuple_set_type(_tuple_4, 1, (&(option_type)));
    int64_t _literal_5 = 0/*False*/;
    option_t* _fieldacc_6 = (*_this)._enc__field_field;
    tuple_set(_tuple_4, 0, ((encore_arg_t) {.i = _literal_5}));
    tuple_set(_tuple_4, 1, ((encore_arg_t) {.p = _fieldacc_6}));
    _ite_0 = ((tuple_t*) _tuple_4);
  }
  else
  {
    /* this.registerPost(post) */;
    check_receiver(_this, ".", "this", "registerPost", "\"./Vat.enc\" (line 71, column 7)");
    void* _sync_method_call_7 = _enc__method_Vat_registerPost(_ctx, _this, _enc__arg_post);
    /* (true, this.field) */;
    tuple_t* _tuple_8 = tuple_mk(_ctx, 2);
    tuple_set_type(_tuple_8, 0, ENCORE_PRIMITIVE);
    tuple_set_type(_tuple_8, 1, (&(option_type)));
    int64_t _literal_9 = 1/*True*/;
    option_t* _fieldacc_10 = (*_this)._enc__field_field;
    tuple_set(_tuple_8, 0, ((encore_arg_t) {.i = _literal_9}));
    tuple_set(_tuple_8, 1, ((encore_arg_t) {.p = _fieldacc_10}));
    _ite_0 = ((tuple_t*) _tuple_8);
  };
  return _ite_0;
}


tuple_t* _enc__method_Vat_readOrRegFail(pony_ctx_t** _ctx, _enc__active_Vat_t* _this, closure_t* _enc__arg_fail)
{
  pony_type_t* _enc__type_t = (*((_enc__active_Vat_t*) _this))._enc__type_t;
  /* if this.field != Nothing then
  (false, this.field)
else
  {this.registerFail(fail);
   (true, this.field)} */;
  tuple_t* _ite_0;
  if (({int64_t _binop_3 = (({option_t* _fieldacc_1 = (*_this)._enc__field_field; _fieldacc_1;}) != ({option_t* _option_2 = (&(DEFAULT_NOTHING)); _option_2;})); _binop_3;}))
  {
    /* (false, this.field) */;
    tuple_t* _tuple_4 = tuple_mk(_ctx, 2);
    tuple_set_type(_tuple_4, 0, ENCORE_PRIMITIVE);
    tuple_set_type(_tuple_4, 1, (&(option_type)));
    int64_t _literal_5 = 0/*False*/;
    option_t* _fieldacc_6 = (*_this)._enc__field_field;
    tuple_set(_tuple_4, 0, ((encore_arg_t) {.i = _literal_5}));
    tuple_set(_tuple_4, 1, ((encore_arg_t) {.p = _fieldacc_6}));
    _ite_0 = ((tuple_t*) _tuple_4);
  }
  else
  {
    /* this.registerFail(fail) */;
    check_receiver(_this, ".", "this", "registerFail", "\"./Vat.enc\" (line 80, column 7)");
    void* _sync_method_call_7 = _enc__method_Vat_registerFail(_ctx, _this, _enc__arg_fail);
    /* (true, this.field) */;
    tuple_t* _tuple_8 = tuple_mk(_ctx, 2);
    tuple_set_type(_tuple_8, 0, ENCORE_PRIMITIVE);
    tuple_set_type(_tuple_8, 1, (&(option_type)));
    int64_t _literal_9 = 1/*True*/;
    option_t* _fieldacc_10 = (*_this)._enc__field_field;
    tuple_set(_tuple_8, 0, ((encore_arg_t) {.i = _literal_9}));
    tuple_set(_tuple_8, 1, ((encore_arg_t) {.p = _fieldacc_10}));
    _ite_0 = ((tuple_t*) _tuple_8);
  };
  return _ite_0;
}


tuple_t* _enc__method_Vat_readOrRegTrans(pony_ctx_t** _ctx, _enc__active_Vat_t* _this, closure_t* _enc__arg_trans)
{
  pony_type_t* _enc__type_t = (*((_enc__active_Vat_t*) _this))._enc__type_t;
  /* if this.field != Nothing then
  (false, this.field)
else
  {this.registerTrans(trans);
   (true, this.field)} */;
  tuple_t* _ite_0;
  if (({int64_t _binop_3 = (({option_t* _fieldacc_1 = (*_this)._enc__field_field; _fieldacc_1;}) != ({option_t* _option_2 = (&(DEFAULT_NOTHING)); _option_2;})); _binop_3;}))
  {
    /* (false, this.field) */;
    tuple_t* _tuple_4 = tuple_mk(_ctx, 2);
    tuple_set_type(_tuple_4, 0, ENCORE_PRIMITIVE);
    tuple_set_type(_tuple_4, 1, (&(option_type)));
    int64_t _literal_5 = 0/*False*/;
    option_t* _fieldacc_6 = (*_this)._enc__field_field;
    tuple_set(_tuple_4, 0, ((encore_arg_t) {.i = _literal_5}));
    tuple_set(_tuple_4, 1, ((encore_arg_t) {.p = _fieldacc_6}));
    _ite_0 = ((tuple_t*) _tuple_4);
  }
  else
  {
    /* this.registerTrans(trans) */;
    check_receiver(_this, ".", "this", "registerTrans", "\"./Vat.enc\" (line 89, column 7)");
    void* _sync_method_call_7 = _enc__method_Vat_registerTrans(_ctx, _this, _enc__arg_trans);
    /* (true, this.field) */;
    tuple_t* _tuple_8 = tuple_mk(_ctx, 2);
    tuple_set_type(_tuple_8, 0, ENCORE_PRIMITIVE);
    tuple_set_type(_tuple_8, 1, (&(option_type)));
    int64_t _literal_9 = 1/*True*/;
    option_t* _fieldacc_10 = (*_this)._enc__field_field;
    tuple_set(_tuple_8, 0, ((encore_arg_t) {.i = _literal_9}));
    tuple_set(_tuple_8, 1, ((encore_arg_t) {.p = _fieldacc_10}));
    _ite_0 = ((tuple_t*) _tuple_8);
  };
  return _ite_0;
}


tuple_t* _enc__method_Vat_readOrRegPre(pony_ctx_t** _ctx, _enc__active_Vat_t* _this, closure_t* _enc__arg_pre)
{
  pony_type_t* _enc__type_t = (*((_enc__active_Vat_t*) _this))._enc__type_t;
  /* if this.field != Nothing then
  (false, this.field)
else
  {this.registerPre(pre);
   (true, this.field)} */;
  tuple_t* _ite_0;
  if (({int64_t _binop_3 = (({option_t* _fieldacc_1 = (*_this)._enc__field_field; _fieldacc_1;}) != ({option_t* _option_2 = (&(DEFAULT_NOTHING)); _option_2;})); _binop_3;}))
  {
    /* (false, this.field) */;
    tuple_t* _tuple_4 = tuple_mk(_ctx, 2);
    tuple_set_type(_tuple_4, 0, ENCORE_PRIMITIVE);
    tuple_set_type(_tuple_4, 1, (&(option_type)));
    int64_t _literal_5 = 0/*False*/;
    option_t* _fieldacc_6 = (*_this)._enc__field_field;
    tuple_set(_tuple_4, 0, ((encore_arg_t) {.i = _literal_5}));
    tuple_set(_tuple_4, 1, ((encore_arg_t) {.p = _fieldacc_6}));
    _ite_0 = ((tuple_t*) _tuple_4);
  }
  else
  {
    /* this.registerPre(pre) */;
    check_receiver(_this, ".", "this", "registerPre", "\"./Vat.enc\" (line 98, column 7)");
    void* _sync_method_call_7 = _enc__method_Vat_registerPre(_ctx, _this, _enc__arg_pre);
    /* (true, this.field) */;
    tuple_t* _tuple_8 = tuple_mk(_ctx, 2);
    tuple_set_type(_tuple_8, 0, ENCORE_PRIMITIVE);
    tuple_set_type(_tuple_8, 1, (&(option_type)));
    int64_t _literal_9 = 1/*True*/;
    option_t* _fieldacc_10 = (*_this)._enc__field_field;
    tuple_set(_tuple_8, 0, ((encore_arg_t) {.i = _literal_9}));
    tuple_set(_tuple_8, 1, ((encore_arg_t) {.p = _fieldacc_10}));
    _ite_0 = ((tuple_t*) _tuple_8);
  };
  return _ite_0;
}


int64_t _enc__method_Vat_executePreActions(pony_ctx_t** _ctx, _enc__active_Vat_t* _this, encore_arg_t _enc__arg_new_val)
{
  pony_type_t* _enc__type_t = (*((_enc__active_Vat_t*) _this))._enc__type_t;
  /* let current = this.pre_actions.first */;
  /* current = this.pre_actions.first */;
  _enc__passive_LinkedList_t* _fieldacc_0 = (*_this)._enc__field_pre_actions;
  _enc__passive_Node_t* _fieldacc_1 = (*_fieldacc_0)._enc__field_first;
  _enc__passive_Node_t* _current_2 = _fieldacc_1;
  /* let old = null : Node<Pre_action<t>> */;
  /* old = null : Node<Pre_action<t>> */;
  _enc__passive_Node_t* _literal_3 = NULL;
  _enc__passive_Node_t* _cast_4 = ((_enc__passive_Node_t*) _literal_3);
  _enc__passive_Node_t* _old_5 = _cast_4;
  /* let success = true */;
  /* success = true */;
  int64_t _literal_6 = 1/*True*/;
  int64_t _success_7 = _literal_6;
  /* if current == null then
  ()
else
  while current != null and success
    {let keep = true;
     let f = current.data;
     match f(this.field, new_val) with
       (keep_, val_) => {keep = keep_;
                         success = val_}
     ;
     if not keep then
       {if old == null then
          this.pre_actions.first = old
        else
          old.next = current.next;
        current = current.next}
     else
       {old = current;
        current = current.next}} */;
  void* _ite_8;
  if (({int64_t _binop_10 = (({ _current_2;}) == ((_enc__passive_Node_t*) ({_enc__passive_Node_t* _literal_9 = NULL; _literal_9;}))); _binop_10;}))
  {
    /* () */;
    UNIT;
    _ite_8 = ((void*) UNIT);
  }
  else
  {
    /* while current != null and success
  {let keep = true;
   let f = current.data;
   match f(this.field, new_val) with
     (keep_, val_) => {keep = keep_;
                       success = val_}
   ;
   if not keep then
     {if old == null then
        this.pre_actions.first = old
      else
        old.next = current.next;
      current = current.next}
   else
     {old = current;
      current = current.next}} */;
    void* _while_39;
    while (({int64_t _binop_13 = (({int64_t _binop_12 = (({ _current_2;}) != ((_enc__passive_Node_t*) ({_enc__passive_Node_t* _literal_11 = NULL; _literal_11;}))); _binop_12;}) && ({ _success_7;})); _binop_13;}))
    {
      /* let keep = true */;
      /* keep = true */;
      int64_t _literal_14 = 1/*True*/;
      int64_t _keep_15 = _literal_14;
      /* let f = current.data */;
      /* f = current.data */;
      closure_t* _fieldacc_16 = (*_current_2)._enc__field_data.p;
      closure_t* _f_17 = _fieldacc_16;
      /* match f(this.field, new_val) with
  (keep_, val_) => {keep = keep_;
                    success = val_}
 */;
      value_t _tmp_20[] = {((encore_arg_t) {.p = ({option_t* _fieldacc_19 = (*_this)._enc__field_field; _fieldacc_19;})}), ({ _enc__arg_new_val;})};
      tuple_t* _clos_21 = closure_call(_ctx, _f_17, _tmp_20).p;
      void* _match_18;
      int64_t _keep__22;
      int64_t _val__23;
      if ((({int64_t _tupleCheck_24;
             _tupleCheck_24 = 1;
             int64_t _tupleAccess_25 = tuple_get(_clos_21, 0).i;
             int64_t _varBinding_26;
             _keep__22 = _tupleAccess_25;
             _varBinding_26 = 1;
             _tupleCheck_24 = (_tupleCheck_24 && _varBinding_26);
             int64_t _tupleAccess_27 = tuple_get(_clos_21, 1).i;
             int64_t _varBinding_28;
             _val__23 = _tupleAccess_27;
             _varBinding_28 = 1;
             _tupleCheck_24 = (_tupleCheck_24 && _varBinding_28); _tupleCheck_24;}) && ({int64_t _literal_29 = 1/*True*/; _literal_29;})))
      {
        _match_18 = ((void*) ({/* keep = keep_ */;
                               _keep_15 = _keep__22;
                               /* success = val_ */;
                               _success_7 = _val__23; UNIT;}));
      }
      else
      {
        printf("*** Runtime error: No matching clause was found ***\n");
        exit(1);
      };
      /* if not keep then
  {if old == null then
     this.pre_actions.first = old
   else
     old.next = current.next;
   current = current.next}
else
  {old = current;
   current = current.next} */;
      void* _ite_30;
      if (({int64_t _unary_31 = (! _keep_15); _unary_31;}))
      {
        /* if old == null then
  this.pre_actions.first = old
else
  old.next = current.next */;
        void* _ite_32;
        if (({int64_t _binop_34 = (({ _old_5;}) == ((_enc__passive_Node_t*) ({_enc__passive_Node_t* _literal_33 = NULL; _literal_33;}))); _binop_34;}))
        {
          /* this.pre_actions.first = old */;
          (*({_enc__passive_LinkedList_t* _fieldacc_35 = (*_this)._enc__field_pre_actions; _fieldacc_35;}))._enc__field_first = _old_5;
          _ite_32 = ((void*) UNIT);
        }
        else
        {
          /* old.next = current.next */;
          _enc__passive_Node_t* _fieldacc_36 = (*_current_2)._enc__field_next;
          (*({ _old_5;}))._enc__field_next = _fieldacc_36;
          _ite_32 = ((void*) UNIT);
        };
        /* current = current.next */;
        _enc__passive_Node_t* _fieldacc_37 = (*_current_2)._enc__field_next;
        _current_2 = _fieldacc_37;
        _ite_30 = ((void*) UNIT);
      }
      else
      {
        /* old = current */;
        _old_5 = _current_2;
        /* current = current.next */;
        _enc__passive_Node_t* _fieldacc_38 = (*_current_2)._enc__field_next;
        _current_2 = _fieldacc_38;
        _ite_30 = ((void*) UNIT);
      };
      _while_39 = _ite_30;
    };
    _ite_8 = ((void*) _while_39);
  };
  /* if success then
  {let transformed = this.executeTransActions(new_val);
   this.executePostOrFail(this.post_actions, transformed);
   this.field = Just transformed}
else
  this.executePostOrFail(this.fail_actions, new_val) */;
  void* _ite_40;
  if (({ _success_7;}))
  {
    /* let transformed = this.executeTransActions(new_val) */;
    /* transformed = this.executeTransActions(new_val) */;
    check_receiver(_this, ".", "this", "executeTransActions", "\"./Vat.enc\" (line 136, column 25)");
    encore_arg_t _sync_method_call_41 = _enc__method_Vat_executeTransActions(_ctx, _this, _enc__arg_new_val);
    encore_arg_t _transformed_42 = _sync_method_call_41;
    /* this.executePostOrFail(this.post_actions, transformed) */;
    check_receiver(_this, ".", "this", "executePostOrFail", "\"./Vat.enc\" (line 137, column 7)");
    _enc__passive_LinkedList_t* _fieldacc_44 = (*_this)._enc__field_post_actions;
    void* _sync_method_call_43 = _enc__method_Vat_executePostOrFail(_ctx, _this, _fieldacc_44, _transformed_42);
    /* this.field = Just transformed */;
    option_t* _option_45 = option_mk(_ctx, JUST, _transformed_42, _enc__type_t);
    (*({ _this;}))._enc__field_field = _option_45;
    _ite_40 = ((void*) UNIT);
  }
  else
  {
    /* this.executePostOrFail(this.fail_actions, new_val) */;
    check_receiver(_this, ".", "this", "executePostOrFail", "\"./Vat.enc\" (line 140, column 7)");
    _enc__passive_LinkedList_t* _fieldacc_47 = (*_this)._enc__field_fail_actions;
    void* _sync_method_call_46 = _enc__method_Vat_executePostOrFail(_ctx, _this, _fieldacc_47, _enc__arg_new_val);
    _ite_40 = ((void*) _sync_method_call_46);
  };
  /* success */;
  return _success_7;
}


encore_arg_t _enc__method_Vat_executeTransActions(pony_ctx_t** _ctx, _enc__active_Vat_t* _this, encore_arg_t _enc__arg_new_val)
{
  pony_type_t* _enc__type_t = (*((_enc__active_Vat_t*) _this))._enc__type_t;
  /* let current = this.trans_actions.first */;
  /* current = this.trans_actions.first */;
  _enc__passive_LinkedList_t* _fieldacc_0 = (*_this)._enc__field_trans_actions;
  _enc__passive_Node_t* _fieldacc_1 = (*_fieldacc_0)._enc__field_first;
  _enc__passive_Node_t* _current_2 = _fieldacc_1;
  /* let old = null : Node<Transformation_action<t>> */;
  /* old = null : Node<Transformation_action<t>> */;
  _enc__passive_Node_t* _literal_3 = NULL;
  _enc__passive_Node_t* _cast_4 = ((_enc__passive_Node_t*) _literal_3);
  _enc__passive_Node_t* _old_5 = _cast_4;
  /* if current == null then
  ()
else
  while current != null
    {let f = current.data;
     let keep = true;
     match f(this.field, new_val) with
       (keep_, val_) => {keep = keep_;
                         new_val = val_}
     ;
     if not keep then
       {if old == null then
          this.trans_actions.first = old
        else
          old.next = current.next;
        current = current.next}
     else
       {old = current;
        current = current.next}} */;
  void* _ite_6;
  if (({int64_t _binop_8 = (({ _current_2;}) == ((_enc__passive_Node_t*) ({_enc__passive_Node_t* _literal_7 = NULL; _literal_7;}))); _binop_8;}))
  {
    /* () */;
    UNIT;
    _ite_6 = ((void*) UNIT);
  }
  else
  {
    /* while current != null
  {let f = current.data;
   let keep = true;
   match f(this.field, new_val) with
     (keep_, val_) => {keep = keep_;
                       new_val = val_}
   ;
   if not keep then
     {if old == null then
        this.trans_actions.first = old
      else
        old.next = current.next;
      current = current.next}
   else
     {old = current;
      current = current.next}} */;
    void* _while_36;
    while (({int64_t _binop_10 = (({ _current_2;}) != ((_enc__passive_Node_t*) ({_enc__passive_Node_t* _literal_9 = NULL; _literal_9;}))); _binop_10;}))
    {
      /* let f = current.data */;
      /* f = current.data */;
      closure_t* _fieldacc_11 = (*_current_2)._enc__field_data.p;
      closure_t* _f_12 = _fieldacc_11;
      /* let keep = true */;
      /* keep = true */;
      int64_t _literal_13 = 1/*True*/;
      int64_t _keep_14 = _literal_13;
      /* match f(this.field, new_val) with
  (keep_, val_) => {keep = keep_;
                    new_val = val_}
 */;
      value_t _tmp_17[] = {((encore_arg_t) {.p = ({option_t* _fieldacc_16 = (*_this)._enc__field_field; _fieldacc_16;})}), ({ _enc__arg_new_val;})};
      tuple_t* _clos_18 = closure_call(_ctx, _f_12, _tmp_17).p;
      void* _match_15;
      int64_t _keep__19;
      encore_arg_t _val__20;
      if ((({int64_t _tupleCheck_21;
             _tupleCheck_21 = 1;
             int64_t _tupleAccess_22 = tuple_get(_clos_18, 0).i;
             int64_t _varBinding_23;
             _keep__19 = _tupleAccess_22;
             _varBinding_23 = 1;
             _tupleCheck_21 = (_tupleCheck_21 && _varBinding_23);
             encore_arg_t _tupleAccess_24 = tuple_get(_clos_18, 1);
             int64_t _varBinding_25;
             _val__20 = _tupleAccess_24;
             _varBinding_25 = 1;
             _tupleCheck_21 = (_tupleCheck_21 && _varBinding_25); _tupleCheck_21;}) && ({int64_t _literal_26 = 1/*True*/; _literal_26;})))
      {
        _match_15 = ((void*) ({/* keep = keep_ */;
                               _keep_14 = _keep__19;
                               /* new_val = val_ */;
                               _enc__arg_new_val = _val__20; UNIT;}));
      }
      else
      {
        printf("*** Runtime error: No matching clause was found ***\n");
        exit(1);
      };
      /* if not keep then
  {if old == null then
     this.trans_actions.first = old
   else
     old.next = current.next;
   current = current.next}
else
  {old = current;
   current = current.next} */;
      void* _ite_27;
      if (({int64_t _unary_28 = (! _keep_14); _unary_28;}))
      {
        /* if old == null then
  this.trans_actions.first = old
else
  old.next = current.next */;
        void* _ite_29;
        if (({int64_t _binop_31 = (({ _old_5;}) == ((_enc__passive_Node_t*) ({_enc__passive_Node_t* _literal_30 = NULL; _literal_30;}))); _binop_31;}))
        {
          /* this.trans_actions.first = old */;
          (*({_enc__passive_LinkedList_t* _fieldacc_32 = (*_this)._enc__field_trans_actions; _fieldacc_32;}))._enc__field_first = _old_5;
          _ite_29 = ((void*) UNIT);
        }
        else
        {
          /* old.next = current.next */;
          _enc__passive_Node_t* _fieldacc_33 = (*_current_2)._enc__field_next;
          (*({ _old_5;}))._enc__field_next = _fieldacc_33;
          _ite_29 = ((void*) UNIT);
        };
        /* current = current.next */;
        _enc__passive_Node_t* _fieldacc_34 = (*_current_2)._enc__field_next;
        _current_2 = _fieldacc_34;
        _ite_27 = ((void*) UNIT);
      }
      else
      {
        /* old = current */;
        _old_5 = _current_2;
        /* current = current.next */;
        _enc__passive_Node_t* _fieldacc_35 = (*_current_2)._enc__field_next;
        _current_2 = _fieldacc_35;
        _ite_27 = ((void*) UNIT);
      };
      _while_36 = _ite_27;
    };
    _ite_6 = ((void*) _while_36);
  };
  /* new_val */;
  return _enc__arg_new_val;
}


void* _enc__method_Vat_executePostOrFail(pony_ctx_t** _ctx, _enc__active_Vat_t* _this, _enc__passive_LinkedList_t* _enc__arg_actions, encore_arg_t _enc__arg_new_val)
{
  pony_type_t* _enc__type_t = (*((_enc__active_Vat_t*) _this))._enc__type_t;
  /* let current = actions.first */;
  /* current = actions.first */;
  _enc__passive_Node_t* _fieldacc_0 = (*_enc__arg_actions)._enc__field_first;
  _enc__passive_Node_t* _current_1 = _fieldacc_0;
  /* let old = null : Node<Post_Fail_action<t>> */;
  /* old = null : Node<Post_Fail_action<t>> */;
  _enc__passive_Node_t* _literal_2 = NULL;
  _enc__passive_Node_t* _cast_3 = ((_enc__passive_Node_t*) _literal_2);
  _enc__passive_Node_t* _old_4 = _cast_3;
  /* if current == null then
  ()
else
  while current != null
    {let f = current.data;
     let keep = f(this.field, new_val);
     if not keep then
       {if old == null then
          actions.first = old
        else
          old.next = current.next;
        current = current.next}
     else
       {old = current;
        current = current.next}} */;
  void* _ite_5;
  if (({int64_t _binop_7 = (({ _current_1;}) == ((_enc__passive_Node_t*) ({_enc__passive_Node_t* _literal_6 = NULL; _literal_6;}))); _binop_7;}))
  {
    /* () */;
    UNIT;
    _ite_5 = ((void*) UNIT);
  }
  else
  {
    /* while current != null
  {let f = current.data;
   let keep = f(this.field, new_val);
   if not keep then
     {if old == null then
        actions.first = old
      else
        old.next = current.next;
      current = current.next}
   else
     {old = current;
      current = current.next}} */;
    void* _while_24;
    while (({int64_t _binop_9 = (({ _current_1;}) != ((_enc__passive_Node_t*) ({_enc__passive_Node_t* _literal_8 = NULL; _literal_8;}))); _binop_9;}))
    {
      /* let f = current.data */;
      /* f = current.data */;
      closure_t* _fieldacc_10 = (*_current_1)._enc__field_data.p;
      closure_t* _f_11 = _fieldacc_10;
      /* let keep = f(this.field, new_val) */;
      /* keep = f(this.field, new_val) */;
      value_t _tmp_13[] = {((encore_arg_t) {.p = ({option_t* _fieldacc_12 = (*_this)._enc__field_field; _fieldacc_12;})}), ({ _enc__arg_new_val;})};
      int64_t _clos_14 = closure_call(_ctx, _f_11, _tmp_13).i;
      int64_t _keep_15 = _clos_14;
      /* if not keep then
  {if old == null then
     actions.first = old
   else
     old.next = current.next;
   current = current.next}
else
  {old = current;
   current = current.next} */;
      void* _ite_16;
      if (({int64_t _unary_17 = (! _keep_15); _unary_17;}))
      {
        /* if old == null then
  actions.first = old
else
  old.next = current.next */;
        void* _ite_18;
        if (({int64_t _binop_20 = (({ _old_4;}) == ((_enc__passive_Node_t*) ({_enc__passive_Node_t* _literal_19 = NULL; _literal_19;}))); _binop_20;}))
        {
          /* actions.first = old */;
          (*({ _enc__arg_actions;}))._enc__field_first = _old_4;
          _ite_18 = ((void*) UNIT);
        }
        else
        {
          /* old.next = current.next */;
          _enc__passive_Node_t* _fieldacc_21 = (*_current_1)._enc__field_next;
          (*({ _old_4;}))._enc__field_next = _fieldacc_21;
          _ite_18 = ((void*) UNIT);
        };
        /* current = current.next */;
        _enc__passive_Node_t* _fieldacc_22 = (*_current_1)._enc__field_next;
        _current_1 = _fieldacc_22;
        _ite_16 = ((void*) UNIT);
      }
      else
      {
        /* old = current */;
        _old_4 = _current_1;
        /* current = current.next */;
        _enc__passive_Node_t* _fieldacc_23 = (*_current_1)._enc__field_next;
        _current_1 = _fieldacc_23;
        _ite_16 = ((void*) UNIT);
      };
      _while_24 = _ite_16;
    };
    _ite_5 = ((void*) _while_24);
  };
  return UNIT;
}


int64_t _enc__method_Vat_write(pony_ctx_t** _ctx, _enc__active_Vat_t* _this, encore_arg_t _enc__arg_new_val)
{
  pony_type_t* _enc__type_t = (*((_enc__active_Vat_t*) _this))._enc__type_t;
  /* if this.open then
  this.executePreActions(new_val)
else
  false */;
  int64_t _ite_0;
  if (({int64_t _fieldacc_1 = (*_this)._enc__field_open; _fieldacc_1;}))
  {
    /* this.executePreActions(new_val) */;
    check_receiver(_this, ".", "this", "executePreActions", "\"./Vat.enc\" (line 207, column 7)");
    int64_t _sync_method_call_2 = _enc__method_Vat_executePreActions(_ctx, _this, _enc__arg_new_val);
    _ite_0 = ((int64_t) _sync_method_call_2);
  }
  else
  {
    /* false */;
    int64_t _literal_3 = 0/*False*/;
    _ite_0 = ((int64_t) _literal_3);
  };
  /* true */;
  int64_t _literal_4 = 1/*True*/;
  return _literal_4;
}


option_t* _enc__method_Vat_read(pony_ctx_t** _ctx, _enc__active_Vat_t* _this)
{
  pony_type_t* _enc__type_t = (*((_enc__active_Vat_t*) _this))._enc__type_t;
  /* this.field */;
  option_t* _fieldacc_0 = (*_this)._enc__field_field;
  return _fieldacc_0;
}


future_t* _enc__method_Vat__init_future(pony_ctx_t** _ctx, _enc__active_Vat_t* _this)
{
  future_t* _fut = future_mk(_ctx, ENCORE_PRIMITIVE);
  pony_gc_send((*_ctx));
  pony_traceobject((*_ctx), _fut, future_trace);
  pony_send_done((*_ctx));
  _enc__fut_msg_Vat__init_t* msg = ((_enc__fut_msg_Vat__init_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__fut_msg_Vat__init_t)), _ENC__FUT_MSG_Vat__init));
  msg->_fut = _fut;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
  return _fut;
}


future_t* _enc__method_Vat_openVat_future(pony_ctx_t** _ctx, _enc__active_Vat_t* _this)
{
  future_t* _fut = future_mk(_ctx, ENCORE_PRIMITIVE);
  pony_gc_send((*_ctx));
  pony_traceobject((*_ctx), _fut, future_trace);
  pony_send_done((*_ctx));
  _enc__fut_msg_Vat_openVat_t* msg = ((_enc__fut_msg_Vat_openVat_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__fut_msg_Vat_openVat_t)), _ENC__FUT_MSG_Vat_openVat));
  msg->_fut = _fut;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
  return _fut;
}


future_t* _enc__method_Vat_closeVat_future(pony_ctx_t** _ctx, _enc__active_Vat_t* _this)
{
  future_t* _fut = future_mk(_ctx, ENCORE_PRIMITIVE);
  pony_gc_send((*_ctx));
  pony_traceobject((*_ctx), _fut, future_trace);
  pony_send_done((*_ctx));
  _enc__fut_msg_Vat_closeVat_t* msg = ((_enc__fut_msg_Vat_closeVat_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__fut_msg_Vat_closeVat_t)), _ENC__FUT_MSG_Vat_closeVat));
  msg->_fut = _fut;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
  return _fut;
}


future_t* _enc__method_Vat_block_me_future(pony_ctx_t** _ctx, _enc__active_Vat_t* _this)
{
  future_t* _fut = future_mk(_ctx, ENCORE_PRIMITIVE);
  pony_gc_send((*_ctx));
  pony_traceobject((*_ctx), _fut, future_trace);
  pony_send_done((*_ctx));
  _enc__fut_msg_Vat_block_me_t* msg = ((_enc__fut_msg_Vat_block_me_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__fut_msg_Vat_block_me_t)), _ENC__FUT_MSG_Vat_block_me));
  msg->_fut = _fut;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
  return _fut;
}


future_t* _enc__method_Vat_condRegPost_future(pony_ctx_t** _ctx, _enc__active_Vat_t* _this, closure_t* _enc__arg_action, closure_t* _enc__arg_condition, closure_t* _enc__arg_callback)
{
  future_t* _fut = future_mk(_ctx, ENCORE_PRIMITIVE);
  pony_gc_send((*_ctx));
  pony_traceobject((*_ctx), _enc__arg_action, closure_trace);
  pony_traceobject((*_ctx), _enc__arg_condition, closure_trace);
  pony_traceobject((*_ctx), _enc__arg_callback, closure_trace);
  pony_traceobject((*_ctx), _fut, future_trace);
  pony_send_done((*_ctx));
  _enc__fut_msg_Vat_condRegPost_t* msg = ((_enc__fut_msg_Vat_condRegPost_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__fut_msg_Vat_condRegPost_t)), _ENC__FUT_MSG_Vat_condRegPost));
  msg->f1 = _enc__arg_action;
  msg->f2 = _enc__arg_condition;
  msg->f3 = _enc__arg_callback;
  msg->_fut = _fut;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
  return _fut;
}


future_t* _enc__method_Vat_registerPre_future(pony_ctx_t** _ctx, _enc__active_Vat_t* _this, closure_t* _enc__arg_pre)
{
  future_t* _fut = future_mk(_ctx, ENCORE_PRIMITIVE);
  pony_gc_send((*_ctx));
  pony_traceobject((*_ctx), _enc__arg_pre, closure_trace);
  pony_traceobject((*_ctx), _fut, future_trace);
  pony_send_done((*_ctx));
  _enc__fut_msg_Vat_registerPre_t* msg = ((_enc__fut_msg_Vat_registerPre_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__fut_msg_Vat_registerPre_t)), _ENC__FUT_MSG_Vat_registerPre));
  msg->f1 = _enc__arg_pre;
  msg->_fut = _fut;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
  return _fut;
}


future_t* _enc__method_Vat_registerPost_future(pony_ctx_t** _ctx, _enc__active_Vat_t* _this, closure_t* _enc__arg_post)
{
  future_t* _fut = future_mk(_ctx, ENCORE_PRIMITIVE);
  pony_gc_send((*_ctx));
  pony_traceobject((*_ctx), _enc__arg_post, closure_trace);
  pony_traceobject((*_ctx), _fut, future_trace);
  pony_send_done((*_ctx));
  _enc__fut_msg_Vat_registerPost_t* msg = ((_enc__fut_msg_Vat_registerPost_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__fut_msg_Vat_registerPost_t)), _ENC__FUT_MSG_Vat_registerPost));
  msg->f1 = _enc__arg_post;
  msg->_fut = _fut;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
  return _fut;
}


future_t* _enc__method_Vat_registerFail_future(pony_ctx_t** _ctx, _enc__active_Vat_t* _this, closure_t* _enc__arg_fail)
{
  future_t* _fut = future_mk(_ctx, ENCORE_PRIMITIVE);
  pony_gc_send((*_ctx));
  pony_traceobject((*_ctx), _enc__arg_fail, closure_trace);
  pony_traceobject((*_ctx), _fut, future_trace);
  pony_send_done((*_ctx));
  _enc__fut_msg_Vat_registerFail_t* msg = ((_enc__fut_msg_Vat_registerFail_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__fut_msg_Vat_registerFail_t)), _ENC__FUT_MSG_Vat_registerFail));
  msg->f1 = _enc__arg_fail;
  msg->_fut = _fut;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
  return _fut;
}


future_t* _enc__method_Vat_registerTrans_future(pony_ctx_t** _ctx, _enc__active_Vat_t* _this, closure_t* _enc__arg_trans)
{
  future_t* _fut = future_mk(_ctx, ENCORE_PRIMITIVE);
  pony_gc_send((*_ctx));
  pony_traceobject((*_ctx), _enc__arg_trans, closure_trace);
  pony_traceobject((*_ctx), _fut, future_trace);
  pony_send_done((*_ctx));
  _enc__fut_msg_Vat_registerTrans_t* msg = ((_enc__fut_msg_Vat_registerTrans_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__fut_msg_Vat_registerTrans_t)), _ENC__FUT_MSG_Vat_registerTrans));
  msg->f1 = _enc__arg_trans;
  msg->_fut = _fut;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
  return _fut;
}


future_t* _enc__method_Vat_readOrRegPost_future(pony_ctx_t** _ctx, _enc__active_Vat_t* _this, closure_t* _enc__arg_post)
{
  future_t* _fut = future_mk(_ctx, (&(tuple_type)));
  pony_gc_send((*_ctx));
  pony_traceobject((*_ctx), _enc__arg_post, closure_trace);
  pony_traceobject((*_ctx), _fut, future_trace);
  pony_send_done((*_ctx));
  _enc__fut_msg_Vat_readOrRegPost_t* msg = ((_enc__fut_msg_Vat_readOrRegPost_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__fut_msg_Vat_readOrRegPost_t)), _ENC__FUT_MSG_Vat_readOrRegPost));
  msg->f1 = _enc__arg_post;
  msg->_fut = _fut;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
  return _fut;
}


future_t* _enc__method_Vat_readOrRegFail_future(pony_ctx_t** _ctx, _enc__active_Vat_t* _this, closure_t* _enc__arg_fail)
{
  future_t* _fut = future_mk(_ctx, (&(tuple_type)));
  pony_gc_send((*_ctx));
  pony_traceobject((*_ctx), _enc__arg_fail, closure_trace);
  pony_traceobject((*_ctx), _fut, future_trace);
  pony_send_done((*_ctx));
  _enc__fut_msg_Vat_readOrRegFail_t* msg = ((_enc__fut_msg_Vat_readOrRegFail_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__fut_msg_Vat_readOrRegFail_t)), _ENC__FUT_MSG_Vat_readOrRegFail));
  msg->f1 = _enc__arg_fail;
  msg->_fut = _fut;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
  return _fut;
}


future_t* _enc__method_Vat_readOrRegTrans_future(pony_ctx_t** _ctx, _enc__active_Vat_t* _this, closure_t* _enc__arg_trans)
{
  future_t* _fut = future_mk(_ctx, (&(tuple_type)));
  pony_gc_send((*_ctx));
  pony_traceobject((*_ctx), _enc__arg_trans, closure_trace);
  pony_traceobject((*_ctx), _fut, future_trace);
  pony_send_done((*_ctx));
  _enc__fut_msg_Vat_readOrRegTrans_t* msg = ((_enc__fut_msg_Vat_readOrRegTrans_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__fut_msg_Vat_readOrRegTrans_t)), _ENC__FUT_MSG_Vat_readOrRegTrans));
  msg->f1 = _enc__arg_trans;
  msg->_fut = _fut;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
  return _fut;
}


future_t* _enc__method_Vat_readOrRegPre_future(pony_ctx_t** _ctx, _enc__active_Vat_t* _this, closure_t* _enc__arg_pre)
{
  future_t* _fut = future_mk(_ctx, (&(tuple_type)));
  pony_gc_send((*_ctx));
  pony_traceobject((*_ctx), _enc__arg_pre, closure_trace);
  pony_traceobject((*_ctx), _fut, future_trace);
  pony_send_done((*_ctx));
  _enc__fut_msg_Vat_readOrRegPre_t* msg = ((_enc__fut_msg_Vat_readOrRegPre_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__fut_msg_Vat_readOrRegPre_t)), _ENC__FUT_MSG_Vat_readOrRegPre));
  msg->f1 = _enc__arg_pre;
  msg->_fut = _fut;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
  return _fut;
}


future_t* _enc__method_Vat_executePreActions_future(pony_ctx_t** _ctx, _enc__active_Vat_t* _this, encore_arg_t _enc__arg_new_val)
{
  future_t* _fut = future_mk(_ctx, ENCORE_PRIMITIVE);
  pony_gc_send((*_ctx));
  encore_trace_polymorphic_variable((*_ctx), _this->_enc__type_t, _enc__arg_new_val);
  pony_traceobject((*_ctx), _fut, future_trace);
  pony_send_done((*_ctx));
  _enc__fut_msg_Vat_executePreActions_t* msg = ((_enc__fut_msg_Vat_executePreActions_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__fut_msg_Vat_executePreActions_t)), _ENC__FUT_MSG_Vat_executePreActions));
  msg->f1 = _enc__arg_new_val;
  msg->_fut = _fut;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
  return _fut;
}


future_t* _enc__method_Vat_executeTransActions_future(pony_ctx_t** _ctx, _enc__active_Vat_t* _this, encore_arg_t _enc__arg_new_val)
{
  pony_type_t* _enc__type_t = _this->_enc__type_t;
  future_t* _fut = future_mk(_ctx, _enc__type_t);
  pony_gc_send((*_ctx));
  encore_trace_polymorphic_variable((*_ctx), _this->_enc__type_t, _enc__arg_new_val);
  pony_traceobject((*_ctx), _fut, future_trace);
  pony_send_done((*_ctx));
  _enc__fut_msg_Vat_executeTransActions_t* msg = ((_enc__fut_msg_Vat_executeTransActions_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__fut_msg_Vat_executeTransActions_t)), _ENC__FUT_MSG_Vat_executeTransActions));
  msg->f1 = _enc__arg_new_val;
  msg->_fut = _fut;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
  return _fut;
}


future_t* _enc__method_Vat_executePostOrFail_future(pony_ctx_t** _ctx, _enc__active_Vat_t* _this, _enc__passive_LinkedList_t* _enc__arg_actions, encore_arg_t _enc__arg_new_val)
{
  future_t* _fut = future_mk(_ctx, ENCORE_PRIMITIVE);
  pony_gc_send((*_ctx));
  pony_traceobject((*_ctx), _enc__arg_actions, _enc__trace_LinkedList);
  encore_trace_polymorphic_variable((*_ctx), _this->_enc__type_t, _enc__arg_new_val);
  pony_traceobject((*_ctx), _fut, future_trace);
  pony_send_done((*_ctx));
  _enc__fut_msg_Vat_executePostOrFail_t* msg = ((_enc__fut_msg_Vat_executePostOrFail_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__fut_msg_Vat_executePostOrFail_t)), _ENC__FUT_MSG_Vat_executePostOrFail));
  msg->f1 = _enc__arg_actions;
  msg->f2 = _enc__arg_new_val;
  msg->_fut = _fut;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
  return _fut;
}


future_t* _enc__method_Vat_write_future(pony_ctx_t** _ctx, _enc__active_Vat_t* _this, encore_arg_t _enc__arg_new_val)
{
  future_t* _fut = future_mk(_ctx, ENCORE_PRIMITIVE);
  pony_gc_send((*_ctx));
  encore_trace_polymorphic_variable((*_ctx), _this->_enc__type_t, _enc__arg_new_val);
  pony_traceobject((*_ctx), _fut, future_trace);
  pony_send_done((*_ctx));
  _enc__fut_msg_Vat_write_t* msg = ((_enc__fut_msg_Vat_write_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__fut_msg_Vat_write_t)), _ENC__FUT_MSG_Vat_write));
  msg->f1 = _enc__arg_new_val;
  msg->_fut = _fut;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
  return _fut;
}


future_t* _enc__method_Vat_read_future(pony_ctx_t** _ctx, _enc__active_Vat_t* _this)
{
  future_t* _fut = future_mk(_ctx, (&(option_type)));
  pony_gc_send((*_ctx));
  pony_traceobject((*_ctx), _fut, future_trace);
  pony_send_done((*_ctx));
  _enc__fut_msg_Vat_read_t* msg = ((_enc__fut_msg_Vat_read_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__fut_msg_Vat_read_t)), _ENC__FUT_MSG_Vat_read));
  msg->_fut = _fut;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
  return _fut;
}


void _enc__method_Vat__init_one_way(pony_ctx_t** _ctx, _enc__active_Vat_t* _this)
{
  pony_gc_send((*_ctx));
  /* No tracing future for oneway msg */;
  pony_send_done((*_ctx));
  _enc__oneway_msg_Vat__init_t* msg = ((_enc__oneway_msg_Vat__init_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__oneway_msg_Vat__init_t)), _ENC__ONEWAY_MSG_Vat__init));
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
}


void _enc__method_Vat_openVat_one_way(pony_ctx_t** _ctx, _enc__active_Vat_t* _this)
{
  pony_gc_send((*_ctx));
  /* No tracing future for oneway msg */;
  pony_send_done((*_ctx));
  _enc__oneway_msg_Vat_openVat_t* msg = ((_enc__oneway_msg_Vat_openVat_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__oneway_msg_Vat_openVat_t)), _ENC__ONEWAY_MSG_Vat_openVat));
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
}


void _enc__method_Vat_closeVat_one_way(pony_ctx_t** _ctx, _enc__active_Vat_t* _this)
{
  pony_gc_send((*_ctx));
  /* No tracing future for oneway msg */;
  pony_send_done((*_ctx));
  _enc__oneway_msg_Vat_closeVat_t* msg = ((_enc__oneway_msg_Vat_closeVat_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__oneway_msg_Vat_closeVat_t)), _ENC__ONEWAY_MSG_Vat_closeVat));
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
}


void _enc__method_Vat_block_me_one_way(pony_ctx_t** _ctx, _enc__active_Vat_t* _this)
{
  pony_gc_send((*_ctx));
  /* No tracing future for oneway msg */;
  pony_send_done((*_ctx));
  _enc__oneway_msg_Vat_block_me_t* msg = ((_enc__oneway_msg_Vat_block_me_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__oneway_msg_Vat_block_me_t)), _ENC__ONEWAY_MSG_Vat_block_me));
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
}


void _enc__method_Vat_condRegPost_one_way(pony_ctx_t** _ctx, _enc__active_Vat_t* _this, closure_t* _enc__arg_action, closure_t* _enc__arg_condition, closure_t* _enc__arg_callback)
{
  pony_gc_send((*_ctx));
  pony_traceobject((*_ctx), _enc__arg_action, closure_trace);
  pony_traceobject((*_ctx), _enc__arg_condition, closure_trace);
  pony_traceobject((*_ctx), _enc__arg_callback, closure_trace);
  /* No tracing future for oneway msg */;
  pony_send_done((*_ctx));
  _enc__oneway_msg_Vat_condRegPost_t* msg = ((_enc__oneway_msg_Vat_condRegPost_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__oneway_msg_Vat_condRegPost_t)), _ENC__ONEWAY_MSG_Vat_condRegPost));
  msg->f1 = _enc__arg_action;
  msg->f2 = _enc__arg_condition;
  msg->f3 = _enc__arg_callback;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
}


void _enc__method_Vat_registerPre_one_way(pony_ctx_t** _ctx, _enc__active_Vat_t* _this, closure_t* _enc__arg_pre)
{
  pony_gc_send((*_ctx));
  pony_traceobject((*_ctx), _enc__arg_pre, closure_trace);
  /* No tracing future for oneway msg */;
  pony_send_done((*_ctx));
  _enc__oneway_msg_Vat_registerPre_t* msg = ((_enc__oneway_msg_Vat_registerPre_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__oneway_msg_Vat_registerPre_t)), _ENC__ONEWAY_MSG_Vat_registerPre));
  msg->f1 = _enc__arg_pre;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
}


void _enc__method_Vat_registerPost_one_way(pony_ctx_t** _ctx, _enc__active_Vat_t* _this, closure_t* _enc__arg_post)
{
  pony_gc_send((*_ctx));
  pony_traceobject((*_ctx), _enc__arg_post, closure_trace);
  /* No tracing future for oneway msg */;
  pony_send_done((*_ctx));
  _enc__oneway_msg_Vat_registerPost_t* msg = ((_enc__oneway_msg_Vat_registerPost_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__oneway_msg_Vat_registerPost_t)), _ENC__ONEWAY_MSG_Vat_registerPost));
  msg->f1 = _enc__arg_post;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
}


void _enc__method_Vat_registerFail_one_way(pony_ctx_t** _ctx, _enc__active_Vat_t* _this, closure_t* _enc__arg_fail)
{
  pony_gc_send((*_ctx));
  pony_traceobject((*_ctx), _enc__arg_fail, closure_trace);
  /* No tracing future for oneway msg */;
  pony_send_done((*_ctx));
  _enc__oneway_msg_Vat_registerFail_t* msg = ((_enc__oneway_msg_Vat_registerFail_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__oneway_msg_Vat_registerFail_t)), _ENC__ONEWAY_MSG_Vat_registerFail));
  msg->f1 = _enc__arg_fail;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
}


void _enc__method_Vat_registerTrans_one_way(pony_ctx_t** _ctx, _enc__active_Vat_t* _this, closure_t* _enc__arg_trans)
{
  pony_gc_send((*_ctx));
  pony_traceobject((*_ctx), _enc__arg_trans, closure_trace);
  /* No tracing future for oneway msg */;
  pony_send_done((*_ctx));
  _enc__oneway_msg_Vat_registerTrans_t* msg = ((_enc__oneway_msg_Vat_registerTrans_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__oneway_msg_Vat_registerTrans_t)), _ENC__ONEWAY_MSG_Vat_registerTrans));
  msg->f1 = _enc__arg_trans;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
}


void _enc__method_Vat_readOrRegPost_one_way(pony_ctx_t** _ctx, _enc__active_Vat_t* _this, closure_t* _enc__arg_post)
{
  pony_gc_send((*_ctx));
  pony_traceobject((*_ctx), _enc__arg_post, closure_trace);
  /* No tracing future for oneway msg */;
  pony_send_done((*_ctx));
  _enc__oneway_msg_Vat_readOrRegPost_t* msg = ((_enc__oneway_msg_Vat_readOrRegPost_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__oneway_msg_Vat_readOrRegPost_t)), _ENC__ONEWAY_MSG_Vat_readOrRegPost));
  msg->f1 = _enc__arg_post;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
}


void _enc__method_Vat_readOrRegFail_one_way(pony_ctx_t** _ctx, _enc__active_Vat_t* _this, closure_t* _enc__arg_fail)
{
  pony_gc_send((*_ctx));
  pony_traceobject((*_ctx), _enc__arg_fail, closure_trace);
  /* No tracing future for oneway msg */;
  pony_send_done((*_ctx));
  _enc__oneway_msg_Vat_readOrRegFail_t* msg = ((_enc__oneway_msg_Vat_readOrRegFail_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__oneway_msg_Vat_readOrRegFail_t)), _ENC__ONEWAY_MSG_Vat_readOrRegFail));
  msg->f1 = _enc__arg_fail;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
}


void _enc__method_Vat_readOrRegTrans_one_way(pony_ctx_t** _ctx, _enc__active_Vat_t* _this, closure_t* _enc__arg_trans)
{
  pony_gc_send((*_ctx));
  pony_traceobject((*_ctx), _enc__arg_trans, closure_trace);
  /* No tracing future for oneway msg */;
  pony_send_done((*_ctx));
  _enc__oneway_msg_Vat_readOrRegTrans_t* msg = ((_enc__oneway_msg_Vat_readOrRegTrans_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__oneway_msg_Vat_readOrRegTrans_t)), _ENC__ONEWAY_MSG_Vat_readOrRegTrans));
  msg->f1 = _enc__arg_trans;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
}


void _enc__method_Vat_readOrRegPre_one_way(pony_ctx_t** _ctx, _enc__active_Vat_t* _this, closure_t* _enc__arg_pre)
{
  pony_gc_send((*_ctx));
  pony_traceobject((*_ctx), _enc__arg_pre, closure_trace);
  /* No tracing future for oneway msg */;
  pony_send_done((*_ctx));
  _enc__oneway_msg_Vat_readOrRegPre_t* msg = ((_enc__oneway_msg_Vat_readOrRegPre_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__oneway_msg_Vat_readOrRegPre_t)), _ENC__ONEWAY_MSG_Vat_readOrRegPre));
  msg->f1 = _enc__arg_pre;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
}


void _enc__method_Vat_executePreActions_one_way(pony_ctx_t** _ctx, _enc__active_Vat_t* _this, encore_arg_t _enc__arg_new_val)
{
  pony_gc_send((*_ctx));
  encore_trace_polymorphic_variable((*_ctx), _this->_enc__type_t, _enc__arg_new_val);
  /* No tracing future for oneway msg */;
  pony_send_done((*_ctx));
  _enc__oneway_msg_Vat_executePreActions_t* msg = ((_enc__oneway_msg_Vat_executePreActions_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__oneway_msg_Vat_executePreActions_t)), _ENC__ONEWAY_MSG_Vat_executePreActions));
  msg->f1 = _enc__arg_new_val;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
}


void _enc__method_Vat_executeTransActions_one_way(pony_ctx_t** _ctx, _enc__active_Vat_t* _this, encore_arg_t _enc__arg_new_val)
{
  pony_gc_send((*_ctx));
  encore_trace_polymorphic_variable((*_ctx), _this->_enc__type_t, _enc__arg_new_val);
  /* No tracing future for oneway msg */;
  pony_send_done((*_ctx));
  _enc__oneway_msg_Vat_executeTransActions_t* msg = ((_enc__oneway_msg_Vat_executeTransActions_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__oneway_msg_Vat_executeTransActions_t)), _ENC__ONEWAY_MSG_Vat_executeTransActions));
  msg->f1 = _enc__arg_new_val;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
}


void _enc__method_Vat_executePostOrFail_one_way(pony_ctx_t** _ctx, _enc__active_Vat_t* _this, _enc__passive_LinkedList_t* _enc__arg_actions, encore_arg_t _enc__arg_new_val)
{
  pony_gc_send((*_ctx));
  pony_traceobject((*_ctx), _enc__arg_actions, _enc__trace_LinkedList);
  encore_trace_polymorphic_variable((*_ctx), _this->_enc__type_t, _enc__arg_new_val);
  /* No tracing future for oneway msg */;
  pony_send_done((*_ctx));
  _enc__oneway_msg_Vat_executePostOrFail_t* msg = ((_enc__oneway_msg_Vat_executePostOrFail_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__oneway_msg_Vat_executePostOrFail_t)), _ENC__ONEWAY_MSG_Vat_executePostOrFail));
  msg->f1 = _enc__arg_actions;
  msg->f2 = _enc__arg_new_val;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
}


void _enc__method_Vat_write_one_way(pony_ctx_t** _ctx, _enc__active_Vat_t* _this, encore_arg_t _enc__arg_new_val)
{
  pony_gc_send((*_ctx));
  encore_trace_polymorphic_variable((*_ctx), _this->_enc__type_t, _enc__arg_new_val);
  /* No tracing future for oneway msg */;
  pony_send_done((*_ctx));
  _enc__oneway_msg_Vat_write_t* msg = ((_enc__oneway_msg_Vat_write_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__oneway_msg_Vat_write_t)), _ENC__ONEWAY_MSG_Vat_write));
  msg->f1 = _enc__arg_new_val;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
}


void _enc__method_Vat_read_one_way(pony_ctx_t** _ctx, _enc__active_Vat_t* _this)
{
  pony_gc_send((*_ctx));
  /* No tracing future for oneway msg */;
  pony_send_done((*_ctx));
  _enc__oneway_msg_Vat_read_t* msg = ((_enc__oneway_msg_Vat_read_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__oneway_msg_Vat_read_t)), _ENC__ONEWAY_MSG_Vat_read));
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
}


static void _enc__dispatch_Vat(pony_ctx_t** _ctx, pony_actor_t* _a, pony_msg_t* _m)
{
  _enc__active_Vat_t* _this = ((_enc__active_Vat_t*) _a);
  switch (_m->id)
  {
    case _ENC__MSG_TASK:
    {
      future_t* _fut = ((encore_fut_msg_t*) _m)->_fut;
      encore_task_s* _task = ((encore_task_msg_s*) _m)->_task;
      encore_arg_t task_tmp = task_runner(_task);
      
      // --- GC on receiving ----------------------------------------;
      pony_gc_recv((*_ctx));
      pony_traceobject((*_ctx), _fut, future_type.trace);
      pony_traceobject((*_ctx), _task, NULL);
      //---You need to trace the task env and task dependencies---;
      pony_recv_done((*_ctx));
      // --- GC on sending ----------------------------------------;
      
      future_fulfil(_ctx, _fut, task_tmp);
      task_free(_task);
      break;
    }
    case _ENC__FUT_MSG_Vat__init:
    {
      future_t* _fut = ((encore_fut_msg_t*) _m)->_fut;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      pony_traceobject((*_ctx), _fut, future_type.trace);
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      future_fulfil(_ctx, _fut, ((encore_arg_t) {.p = _enc__method_Vat__init(_ctx, _this)}));
      break;
    }
    case _ENC__ONEWAY_MSG_Vat__init:
    {
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      /* Not tracing the future in a oneWay send */;
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      _enc__method_Vat__init(_ctx, _this);
      break;
    }
    case _ENC__FUT_MSG_Vat_openVat:
    {
      future_t* _fut = ((encore_fut_msg_t*) _m)->_fut;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      pony_traceobject((*_ctx), _fut, future_type.trace);
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      future_fulfil(_ctx, _fut, ((encore_arg_t) {.p = _enc__method_Vat_openVat(_ctx, _this)}));
      break;
    }
    case _ENC__ONEWAY_MSG_Vat_openVat:
    {
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      /* Not tracing the future in a oneWay send */;
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      _enc__method_Vat_openVat(_ctx, _this);
      break;
    }
    case _ENC__FUT_MSG_Vat_closeVat:
    {
      future_t* _fut = ((encore_fut_msg_t*) _m)->_fut;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      pony_traceobject((*_ctx), _fut, future_type.trace);
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      future_fulfil(_ctx, _fut, ((encore_arg_t) {.p = _enc__method_Vat_closeVat(_ctx, _this)}));
      break;
    }
    case _ENC__ONEWAY_MSG_Vat_closeVat:
    {
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      /* Not tracing the future in a oneWay send */;
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      _enc__method_Vat_closeVat(_ctx, _this);
      break;
    }
    case _ENC__FUT_MSG_Vat_block_me:
    {
      future_t* _fut = ((encore_fut_msg_t*) _m)->_fut;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      pony_traceobject((*_ctx), _fut, future_type.trace);
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      future_fulfil(_ctx, _fut, ((encore_arg_t) {.p = _enc__method_Vat_block_me(_ctx, _this)}));
      break;
    }
    case _ENC__ONEWAY_MSG_Vat_block_me:
    {
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      /* Not tracing the future in a oneWay send */;
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      _enc__method_Vat_block_me(_ctx, _this);
      break;
    }
    case _ENC__FUT_MSG_Vat_condRegPost:
    {
      future_t* _fut = ((encore_fut_msg_t*) _m)->_fut;
      closure_t* _enc__arg_action = ((_enc__fut_msg_Vat_condRegPost_t*) _m)->f1;
      closure_t* _enc__arg_condition = ((_enc__fut_msg_Vat_condRegPost_t*) _m)->f2;
      closure_t* _enc__arg_callback = ((_enc__fut_msg_Vat_condRegPost_t*) _m)->f3;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      pony_traceobject((*_ctx), _enc__arg_action, closure_trace);
      pony_traceobject((*_ctx), _enc__arg_condition, closure_trace);
      pony_traceobject((*_ctx), _enc__arg_callback, closure_trace);
      pony_traceobject((*_ctx), _fut, future_type.trace);
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      future_fulfil(_ctx, _fut, ((encore_arg_t) {.i = _enc__method_Vat_condRegPost(_ctx, _this, _enc__arg_action, _enc__arg_condition, _enc__arg_callback)}));
      break;
    }
    case _ENC__ONEWAY_MSG_Vat_condRegPost:
    {
      closure_t* _enc__arg_action = ((_enc__oneway_msg_Vat_condRegPost_t*) _m)->f1;
      closure_t* _enc__arg_condition = ((_enc__oneway_msg_Vat_condRegPost_t*) _m)->f2;
      closure_t* _enc__arg_callback = ((_enc__oneway_msg_Vat_condRegPost_t*) _m)->f3;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      pony_traceobject((*_ctx), _enc__arg_action, closure_trace);
      pony_traceobject((*_ctx), _enc__arg_condition, closure_trace);
      pony_traceobject((*_ctx), _enc__arg_callback, closure_trace);
      /* Not tracing the future in a oneWay send */;
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      _enc__method_Vat_condRegPost(_ctx, _this, _enc__arg_action, _enc__arg_condition, _enc__arg_callback);
      break;
    }
    case _ENC__FUT_MSG_Vat_registerPre:
    {
      future_t* _fut = ((encore_fut_msg_t*) _m)->_fut;
      closure_t* _enc__arg_pre = ((_enc__fut_msg_Vat_registerPre_t*) _m)->f1;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      pony_traceobject((*_ctx), _enc__arg_pre, closure_trace);
      pony_traceobject((*_ctx), _fut, future_type.trace);
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      future_fulfil(_ctx, _fut, ((encore_arg_t) {.p = _enc__method_Vat_registerPre(_ctx, _this, _enc__arg_pre)}));
      break;
    }
    case _ENC__ONEWAY_MSG_Vat_registerPre:
    {
      closure_t* _enc__arg_pre = ((_enc__oneway_msg_Vat_registerPre_t*) _m)->f1;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      pony_traceobject((*_ctx), _enc__arg_pre, closure_trace);
      /* Not tracing the future in a oneWay send */;
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      _enc__method_Vat_registerPre(_ctx, _this, _enc__arg_pre);
      break;
    }
    case _ENC__FUT_MSG_Vat_registerPost:
    {
      future_t* _fut = ((encore_fut_msg_t*) _m)->_fut;
      closure_t* _enc__arg_post = ((_enc__fut_msg_Vat_registerPost_t*) _m)->f1;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      pony_traceobject((*_ctx), _enc__arg_post, closure_trace);
      pony_traceobject((*_ctx), _fut, future_type.trace);
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      future_fulfil(_ctx, _fut, ((encore_arg_t) {.p = _enc__method_Vat_registerPost(_ctx, _this, _enc__arg_post)}));
      break;
    }
    case _ENC__ONEWAY_MSG_Vat_registerPost:
    {
      closure_t* _enc__arg_post = ((_enc__oneway_msg_Vat_registerPost_t*) _m)->f1;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      pony_traceobject((*_ctx), _enc__arg_post, closure_trace);
      /* Not tracing the future in a oneWay send */;
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      _enc__method_Vat_registerPost(_ctx, _this, _enc__arg_post);
      break;
    }
    case _ENC__FUT_MSG_Vat_registerFail:
    {
      future_t* _fut = ((encore_fut_msg_t*) _m)->_fut;
      closure_t* _enc__arg_fail = ((_enc__fut_msg_Vat_registerFail_t*) _m)->f1;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      pony_traceobject((*_ctx), _enc__arg_fail, closure_trace);
      pony_traceobject((*_ctx), _fut, future_type.trace);
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      future_fulfil(_ctx, _fut, ((encore_arg_t) {.p = _enc__method_Vat_registerFail(_ctx, _this, _enc__arg_fail)}));
      break;
    }
    case _ENC__ONEWAY_MSG_Vat_registerFail:
    {
      closure_t* _enc__arg_fail = ((_enc__oneway_msg_Vat_registerFail_t*) _m)->f1;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      pony_traceobject((*_ctx), _enc__arg_fail, closure_trace);
      /* Not tracing the future in a oneWay send */;
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      _enc__method_Vat_registerFail(_ctx, _this, _enc__arg_fail);
      break;
    }
    case _ENC__FUT_MSG_Vat_registerTrans:
    {
      future_t* _fut = ((encore_fut_msg_t*) _m)->_fut;
      closure_t* _enc__arg_trans = ((_enc__fut_msg_Vat_registerTrans_t*) _m)->f1;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      pony_traceobject((*_ctx), _enc__arg_trans, closure_trace);
      pony_traceobject((*_ctx), _fut, future_type.trace);
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      future_fulfil(_ctx, _fut, ((encore_arg_t) {.p = _enc__method_Vat_registerTrans(_ctx, _this, _enc__arg_trans)}));
      break;
    }
    case _ENC__ONEWAY_MSG_Vat_registerTrans:
    {
      closure_t* _enc__arg_trans = ((_enc__oneway_msg_Vat_registerTrans_t*) _m)->f1;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      pony_traceobject((*_ctx), _enc__arg_trans, closure_trace);
      /* Not tracing the future in a oneWay send */;
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      _enc__method_Vat_registerTrans(_ctx, _this, _enc__arg_trans);
      break;
    }
    case _ENC__FUT_MSG_Vat_readOrRegPost:
    {
      future_t* _fut = ((encore_fut_msg_t*) _m)->_fut;
      closure_t* _enc__arg_post = ((_enc__fut_msg_Vat_readOrRegPost_t*) _m)->f1;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      pony_traceobject((*_ctx), _enc__arg_post, closure_trace);
      pony_traceobject((*_ctx), _fut, future_type.trace);
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      future_fulfil(_ctx, _fut, ((encore_arg_t) {.p = _enc__method_Vat_readOrRegPost(_ctx, _this, _enc__arg_post)}));
      break;
    }
    case _ENC__ONEWAY_MSG_Vat_readOrRegPost:
    {
      closure_t* _enc__arg_post = ((_enc__oneway_msg_Vat_readOrRegPost_t*) _m)->f1;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      pony_traceobject((*_ctx), _enc__arg_post, closure_trace);
      /* Not tracing the future in a oneWay send */;
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      _enc__method_Vat_readOrRegPost(_ctx, _this, _enc__arg_post);
      break;
    }
    case _ENC__FUT_MSG_Vat_readOrRegFail:
    {
      future_t* _fut = ((encore_fut_msg_t*) _m)->_fut;
      closure_t* _enc__arg_fail = ((_enc__fut_msg_Vat_readOrRegFail_t*) _m)->f1;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      pony_traceobject((*_ctx), _enc__arg_fail, closure_trace);
      pony_traceobject((*_ctx), _fut, future_type.trace);
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      future_fulfil(_ctx, _fut, ((encore_arg_t) {.p = _enc__method_Vat_readOrRegFail(_ctx, _this, _enc__arg_fail)}));
      break;
    }
    case _ENC__ONEWAY_MSG_Vat_readOrRegFail:
    {
      closure_t* _enc__arg_fail = ((_enc__oneway_msg_Vat_readOrRegFail_t*) _m)->f1;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      pony_traceobject((*_ctx), _enc__arg_fail, closure_trace);
      /* Not tracing the future in a oneWay send */;
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      _enc__method_Vat_readOrRegFail(_ctx, _this, _enc__arg_fail);
      break;
    }
    case _ENC__FUT_MSG_Vat_readOrRegTrans:
    {
      future_t* _fut = ((encore_fut_msg_t*) _m)->_fut;
      closure_t* _enc__arg_trans = ((_enc__fut_msg_Vat_readOrRegTrans_t*) _m)->f1;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      pony_traceobject((*_ctx), _enc__arg_trans, closure_trace);
      pony_traceobject((*_ctx), _fut, future_type.trace);
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      future_fulfil(_ctx, _fut, ((encore_arg_t) {.p = _enc__method_Vat_readOrRegTrans(_ctx, _this, _enc__arg_trans)}));
      break;
    }
    case _ENC__ONEWAY_MSG_Vat_readOrRegTrans:
    {
      closure_t* _enc__arg_trans = ((_enc__oneway_msg_Vat_readOrRegTrans_t*) _m)->f1;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      pony_traceobject((*_ctx), _enc__arg_trans, closure_trace);
      /* Not tracing the future in a oneWay send */;
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      _enc__method_Vat_readOrRegTrans(_ctx, _this, _enc__arg_trans);
      break;
    }
    case _ENC__FUT_MSG_Vat_readOrRegPre:
    {
      future_t* _fut = ((encore_fut_msg_t*) _m)->_fut;
      closure_t* _enc__arg_pre = ((_enc__fut_msg_Vat_readOrRegPre_t*) _m)->f1;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      pony_traceobject((*_ctx), _enc__arg_pre, closure_trace);
      pony_traceobject((*_ctx), _fut, future_type.trace);
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      future_fulfil(_ctx, _fut, ((encore_arg_t) {.p = _enc__method_Vat_readOrRegPre(_ctx, _this, _enc__arg_pre)}));
      break;
    }
    case _ENC__ONEWAY_MSG_Vat_readOrRegPre:
    {
      closure_t* _enc__arg_pre = ((_enc__oneway_msg_Vat_readOrRegPre_t*) _m)->f1;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      pony_traceobject((*_ctx), _enc__arg_pre, closure_trace);
      /* Not tracing the future in a oneWay send */;
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      _enc__method_Vat_readOrRegPre(_ctx, _this, _enc__arg_pre);
      break;
    }
    case _ENC__FUT_MSG_Vat_executePreActions:
    {
      future_t* _fut = ((encore_fut_msg_t*) _m)->_fut;
      encore_arg_t _enc__arg_new_val = ((_enc__fut_msg_Vat_executePreActions_t*) _m)->f1;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      encore_trace_polymorphic_variable((*_ctx), _this->_enc__type_t, _enc__arg_new_val);
      pony_traceobject((*_ctx), _fut, future_type.trace);
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      future_fulfil(_ctx, _fut, ((encore_arg_t) {.i = _enc__method_Vat_executePreActions(_ctx, _this, _enc__arg_new_val)}));
      break;
    }
    case _ENC__ONEWAY_MSG_Vat_executePreActions:
    {
      encore_arg_t _enc__arg_new_val = ((_enc__oneway_msg_Vat_executePreActions_t*) _m)->f1;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      encore_trace_polymorphic_variable((*_ctx), _this->_enc__type_t, _enc__arg_new_val);
      /* Not tracing the future in a oneWay send */;
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      _enc__method_Vat_executePreActions(_ctx, _this, _enc__arg_new_val);
      break;
    }
    case _ENC__FUT_MSG_Vat_executeTransActions:
    {
      future_t* _fut = ((encore_fut_msg_t*) _m)->_fut;
      encore_arg_t _enc__arg_new_val = ((_enc__fut_msg_Vat_executeTransActions_t*) _m)->f1;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      encore_trace_polymorphic_variable((*_ctx), _this->_enc__type_t, _enc__arg_new_val);
      pony_traceobject((*_ctx), _fut, future_type.trace);
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      future_fulfil(_ctx, _fut, _enc__method_Vat_executeTransActions(_ctx, _this, _enc__arg_new_val));
      break;
    }
    case _ENC__ONEWAY_MSG_Vat_executeTransActions:
    {
      encore_arg_t _enc__arg_new_val = ((_enc__oneway_msg_Vat_executeTransActions_t*) _m)->f1;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      encore_trace_polymorphic_variable((*_ctx), _this->_enc__type_t, _enc__arg_new_val);
      /* Not tracing the future in a oneWay send */;
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      _enc__method_Vat_executeTransActions(_ctx, _this, _enc__arg_new_val);
      break;
    }
    case _ENC__FUT_MSG_Vat_executePostOrFail:
    {
      future_t* _fut = ((encore_fut_msg_t*) _m)->_fut;
      _enc__passive_LinkedList_t* _enc__arg_actions = ((_enc__fut_msg_Vat_executePostOrFail_t*) _m)->f1;
      encore_arg_t _enc__arg_new_val = ((_enc__fut_msg_Vat_executePostOrFail_t*) _m)->f2;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      pony_traceobject((*_ctx), _enc__arg_actions, _enc__trace_LinkedList);
      encore_trace_polymorphic_variable((*_ctx), _this->_enc__type_t, _enc__arg_new_val);
      pony_traceobject((*_ctx), _fut, future_type.trace);
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      future_fulfil(_ctx, _fut, ((encore_arg_t) {.p = _enc__method_Vat_executePostOrFail(_ctx, _this, _enc__arg_actions, _enc__arg_new_val)}));
      break;
    }
    case _ENC__ONEWAY_MSG_Vat_executePostOrFail:
    {
      _enc__passive_LinkedList_t* _enc__arg_actions = ((_enc__oneway_msg_Vat_executePostOrFail_t*) _m)->f1;
      encore_arg_t _enc__arg_new_val = ((_enc__oneway_msg_Vat_executePostOrFail_t*) _m)->f2;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      pony_traceobject((*_ctx), _enc__arg_actions, _enc__trace_LinkedList);
      encore_trace_polymorphic_variable((*_ctx), _this->_enc__type_t, _enc__arg_new_val);
      /* Not tracing the future in a oneWay send */;
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      _enc__method_Vat_executePostOrFail(_ctx, _this, _enc__arg_actions, _enc__arg_new_val);
      break;
    }
    case _ENC__FUT_MSG_Vat_write:
    {
      future_t* _fut = ((encore_fut_msg_t*) _m)->_fut;
      encore_arg_t _enc__arg_new_val = ((_enc__fut_msg_Vat_write_t*) _m)->f1;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      encore_trace_polymorphic_variable((*_ctx), _this->_enc__type_t, _enc__arg_new_val);
      pony_traceobject((*_ctx), _fut, future_type.trace);
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      future_fulfil(_ctx, _fut, ((encore_arg_t) {.i = _enc__method_Vat_write(_ctx, _this, _enc__arg_new_val)}));
      break;
    }
    case _ENC__ONEWAY_MSG_Vat_write:
    {
      encore_arg_t _enc__arg_new_val = ((_enc__oneway_msg_Vat_write_t*) _m)->f1;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      encore_trace_polymorphic_variable((*_ctx), _this->_enc__type_t, _enc__arg_new_val);
      /* Not tracing the future in a oneWay send */;
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      _enc__method_Vat_write(_ctx, _this, _enc__arg_new_val);
      break;
    }
    case _ENC__FUT_MSG_Vat_read:
    {
      future_t* _fut = ((encore_fut_msg_t*) _m)->_fut;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      pony_traceobject((*_ctx), _fut, future_type.trace);
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      future_fulfil(_ctx, _fut, ((encore_arg_t) {.p = _enc__method_Vat_read(_ctx, _this)}));
      break;
    }
    case _ENC__ONEWAY_MSG_Vat_read:
    {
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      /* Not tracing the future in a oneWay send */;
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      _enc__method_Vat_read(_ctx, _this);
      break;
    }
    default:
    {
      printf("error, got invalid id: %zd", _m->id);
    }
  };
}


pony_type_t _enc__active_Vat_type = {.id=_ENC__ID_Vat, .size=sizeof(_enc__active_Vat_t), .trace=_enc__trace_Vat, .dispatch=_enc__dispatch_Vat, .vtable=trait_method_selector};
