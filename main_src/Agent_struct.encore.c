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


void _enc__type_init_Agent_struct(_enc__passive_Agent_struct_t* this, ... )
{
  va_list params;
  va_start(params, this);
  va_end(params);
}


void _enc__trace_Agent_struct(pony_ctx_t* _ctx_arg, void* p)
{
  pony_ctx_t** _ctx = (&(_ctx_arg));
  _enc__passive_Agent_struct_t* _this = p;
  array_t* _enc__field_ss = _this->_enc__field_ss;
  pony_traceobject((*_ctx), _enc__field_ss, array_trace);
}


_enc__passive_Agent_struct_t* _enc__constructor_Agent_struct(pony_ctx_t** _ctx)
{
  _enc__passive_Agent_struct_t* this = ((_enc__passive_Agent_struct_t*) encore_alloc((*_ctx), sizeof(_enc__passive_Agent_struct_t)));
  this->_enc__self_type = (&(_enc__passive_Agent_struct_type));
  return this;
}


void* _enc__method_Agent_struct__init(pony_ctx_t** _ctx, _enc__passive_Agent_struct_t* _this, array_t* _enc__arg_a)
{
  /* this.ss = new [Agent](0) */;
  int64_t _literal_1 = 0;
  array_t* _array_0 = array_mk(_ctx, _literal_1, (&(_enc__passive_Agent_type)));
  (*({ _this;}))._enc__field_ss = _array_0;
  /* this.add(a) */;
  check_receiver(_this, ".", "this", "add", "\"./encore-libs-master/Ped_util/agent_passive.enc\" (line 17, column 9)");
  void* _sync_method_call_2 = _enc__method_Agent_struct_add(_ctx, _this, _enc__arg_a);
  return UNIT;
}


int64_t _enc__method_Agent_struct_isin(pony_ctx_t** _ctx, _enc__passive_Agent_struct_t* _this, tuple_t* _enc__arg_pos)
{
  /* let ret = false */;
  /* ret = false */;
  int64_t _literal_0 = 0/*False*/;
  int64_t _ret_1 = _literal_0;
  /* for a in this.ss
  match a.pos() with
    _ when equal(pos, a.pos()) => ret = true
    _ => ()
   */;
  void* _for_2;
  array_t* _fieldacc_9 = (*_this)._enc__field_ss;
  int64_t _start_5 = 0;
  int64_t _stop_6 = (array_size(_fieldacc_9) - 1);
  int64_t _src_step_8 = 1;
  int64_t _literal_10 = 1;
  int64_t _step_7 = (_literal_10 * _src_step_8);
  range_assert_step(_step_7);
  int64_t _index_3;
  if ((_step_7 > 0))
  {
    _index_3 = _start_5;
  }
  else
  {
    _index_3 = _stop_6;
  };
  while (((_index_3 >= _start_5) && (_index_3 <= _stop_6)))
  {
    _enc__passive_Agent_t* _a_4 = array_get(_fieldacc_9, _index_3).p;
    check_receiver(_a_4, ".", "a", "pos", "\"./encore-libs-master/Ped_util/agent_passive.enc\" (line 22, column 14)");
    tuple_t* _sync_method_call_12 = _enc__method_Agent_pos(_ctx, _a_4);
    void* _match_11;
    tuple_t* ___13;
    if ((({int64_t _varBinding_18;
           ___13 = _sync_method_call_12;
           _varBinding_18 = 1; _varBinding_18;}) && ({check_receiver(_a_4, ".", "a", "pos", "\"./encore-libs-master/Ped_util/agent_passive.enc\" (line 23, column 27)");
                                                      tuple_t* _sync_method_call_19 = _enc__method_Agent_pos(_ctx, _a_4);
                                                      pony_type_t* _tmp_20[] = {};
                                                      int64_t _global_f_21 = _enc__global_fun_equal(_ctx, NULL, _enc__arg_pos, _sync_method_call_19); _global_f_21;})))
    {
      _match_11 = ((void*) ({/* ret = true */;
                             int64_t _literal_14 = 1/*True*/;
                             _ret_1 = _literal_14; UNIT;}));
    }
    else
    {
      tuple_t* ___15;
      if ((({int64_t _varBinding_16;
             ___15 = _sync_method_call_12;
             _varBinding_16 = 1; _varBinding_16;}) && ({int64_t _literal_17 = 1/*True*/; _literal_17;})))
      {
        _match_11 = ((void*) ({UNIT; UNIT;}));
      }
      else
      {
        printf("*** Runtime error: No matching clause was found ***\n");
        exit(1);
      };
    };
    _for_2 = _match_11;
    _index_3 = (_index_3 + _step_7);
  };
  /* ret */;
  return _ret_1;
}


void* _enc__method_Agent_struct_add(pony_ctx_t** _ctx, _enc__passive_Agent_struct_t* _this, array_t* _enc__arg_a)
{
  /* let sss = new [Agent](|a| + |this.ss|) */;
  /* sss = new [Agent](|a| + |this.ss|) */;
  int64_t _binop_4 = (({int64_t _size_1 = array_size(_enc__arg_a); _size_1;}) + ({array_t* _fieldacc_2 = (*_this)._enc__field_ss;
                                                                                  int64_t _size_3 = array_size(_fieldacc_2); _size_3;}));
  array_t* _array_0 = array_mk(_ctx, _binop_4, (&(_enc__passive_Agent_type)));
  array_t* _sss_5 = _array_0;
  /* let i = 0 */;
  /* i = 0 */;
  int64_t _literal_6 = 0;
  int64_t _i_7 = _literal_6;
  /* for t in this.ss
  {sss[i] = t;
   i = i + 1} */;
  void* _for_8;
  array_t* _fieldacc_15 = (*_this)._enc__field_ss;
  int64_t _start_11 = 0;
  int64_t _stop_12 = (array_size(_fieldacc_15) - 1);
  int64_t _src_step_14 = 1;
  int64_t _literal_16 = 1;
  int64_t _step_13 = (_literal_16 * _src_step_14);
  range_assert_step(_step_13);
  int64_t _index_9;
  if ((_step_13 > 0))
  {
    _index_9 = _start_11;
  }
  else
  {
    _index_9 = _stop_12;
  };
  while (((_index_9 >= _start_11) && (_index_9 <= _stop_12)))
  {
    _enc__passive_Agent_t* _t_10 = array_get(_fieldacc_15, _index_9).p;
    /* sss[i] = t */;
    array_set(_sss_5, _i_7, ((encore_arg_t) {.p = _t_10}));
    /* i = i + 1 */;
    int64_t _binop_18 = (({ _i_7;}) + ({int64_t _literal_17 = 1; _literal_17;}));
    _i_7 = _binop_18;
    _for_8 = UNIT;
    _index_9 = (_index_9 + _step_13);
  };
  /* for t in a
  {sss[i] = t;
   i = i + 1} */;
  void* _for_19;
  int64_t _start_22 = 0;
  int64_t _stop_23 = (array_size(_enc__arg_a) - 1);
  int64_t _src_step_25 = 1;
  int64_t _literal_26 = 1;
  int64_t _step_24 = (_literal_26 * _src_step_25);
  range_assert_step(_step_24);
  int64_t _index_20;
  if ((_step_24 > 0))
  {
    _index_20 = _start_22;
  }
  else
  {
    _index_20 = _stop_23;
  };
  while (((_index_20 >= _start_22) && (_index_20 <= _stop_23)))
  {
    _enc__passive_Agent_t* _t_21 = array_get(_enc__arg_a, _index_20).p;
    /* sss[i] = t */;
    array_set(_sss_5, _i_7, ((encore_arg_t) {.p = _t_21}));
    /* i = i + 1 */;
    int64_t _binop_28 = (({ _i_7;}) + ({int64_t _literal_27 = 1; _literal_27;}));
    _i_7 = _binop_28;
    _for_19 = UNIT;
    _index_20 = (_index_20 + _step_24);
  };
  /* this.ss = sss */;
  (*({ _this;}))._enc__field_ss = _sss_5;
  return UNIT;
}


void* _enc__method_Agent_struct_remove(pony_ctx_t** _ctx, _enc__passive_Agent_struct_t* _this, _enc__passive_Agent_t* _enc__arg_a)
{
  /* let sss = new [Agent](|this.ss| - 1) */;
  /* sss = new [Agent](|this.ss| - 1) */;
  int64_t _binop_4 = (({array_t* _fieldacc_1 = (*_this)._enc__field_ss;
                        int64_t _size_2 = array_size(_fieldacc_1); _size_2;}) - ({int64_t _literal_3 = 1; _literal_3;}));
  array_t* _array_0 = array_mk(_ctx, _binop_4, (&(_enc__passive_Agent_type)));
  array_t* _sss_5 = _array_0;
  /* let i = 0 */;
  /* i = 0 */;
  int64_t _literal_6 = 0;
  int64_t _i_7 = _literal_6;
  /* for t in this.ss
  if not t == a then
    {sss[i] = t;
     i = i + 1} */;
  void* _for_8;
  array_t* _fieldacc_15 = (*_this)._enc__field_ss;
  int64_t _start_11 = 0;
  int64_t _stop_12 = (array_size(_fieldacc_15) - 1);
  int64_t _src_step_14 = 1;
  int64_t _literal_16 = 1;
  int64_t _step_13 = (_literal_16 * _src_step_14);
  range_assert_step(_step_13);
  int64_t _index_9;
  if ((_step_13 > 0))
  {
    _index_9 = _start_11;
  }
  else
  {
    _index_9 = _stop_12;
  };
  while (((_index_9 >= _start_11) && (_index_9 <= _stop_12)))
  {
    _enc__passive_Agent_t* _t_10 = array_get(_fieldacc_15, _index_9).p;
    /* if not t == a then
  {sss[i] = t;
   i = i + 1} */;
    void* _ite_17;
    if (({int64_t _binop_18 = (({ _t_10;}) == ((_enc__passive_Agent_t*) ({ _enc__arg_a;})));
          int64_t _unary_19 = (! _binop_18); _unary_19;}))
    {
      /* sss[i] = t */;
      array_set(_sss_5, _i_7, ((encore_arg_t) {.p = _t_10}));
      /* i = i + 1 */;
      int64_t _binop_21 = (({ _i_7;}) + ({int64_t _literal_20 = 1; _literal_20;}));
      _i_7 = _binop_21;
      _ite_17 = ((void*) UNIT);
    }
    else
    {
      UNIT;
      _ite_17 = ((void*) UNIT);
    };
    _for_8 = _ite_17;
    _index_9 = (_index_9 + _step_13);
  };
  /* this.ss = sss */;
  (*({ _this;}))._enc__field_ss = _sss_5;
  return UNIT;
}


int64_t _enc__method_Agent_struct_size(pony_ctx_t** _ctx, _enc__passive_Agent_struct_t* _this)
{
  /* |this.ss| */;
  array_t* _fieldacc_0 = (*_this)._enc__field_ss;
  int64_t _size_1 = array_size(_fieldacc_0);
  return _size_1;
}


array_t* _enc__method_Agent_struct_get_data(pony_ctx_t** _ctx, _enc__passive_Agent_struct_t* _this)
{
  /* this.ss */;
  array_t* _fieldacc_0 = (*_this)._enc__field_ss;
  return _fieldacc_0;
}


static void _enc__dispatch_Agent_struct(pony_ctx_t** _ctx, pony_actor_t* _a, pony_msg_t* _m)
{
  /* Stub! Might be used when we have dynamic dispatch on passive classes */
}


pony_type_t _enc__passive_Agent_struct_type = {.id=_ENC__ID_Agent_struct, .size=sizeof(_enc__passive_Agent_struct_t), .trace=_enc__trace_Agent_struct, .dispatch=_enc__dispatch_Agent_struct, .vtable=trait_method_selector};
