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


struct _enc__active__slow_down_Main_t
{
  encore_actor_t _enc__actor;
  array_t* _enc__field_drivers;
  array_t* _enc__field_futures;
};


void _enc__type_init__slow_down_Main(_enc__active__slow_down_Main_t* _this, ... )
{
  va_list params;
  va_start(params, _this);
  va_end(params);
}


void _enc__trace__slow_down_Main(pony_ctx_t* _ctx_arg, void* p)
{
  pony_ctx_t** _ctx = (&(_ctx_arg));
  _enc__active__slow_down_Main_t* _this = p;
  array_t* _enc__field_drivers = _this->_enc__field_drivers;
  encore_trace_object((*_ctx), _enc__field_drivers, array_trace);
  array_t* _enc__field_futures = _this->_enc__field_futures;
  encore_trace_object((*_ctx), _enc__field_futures, array_trace);
}


_enc__active__slow_down_Main_t* _enc__constructor__slow_down_Main(pony_ctx_t** _ctx, pony_type_t** runtimeType)
{
  _enc__active__slow_down_Main_t* _this = ((_enc__active__slow_down_Main_t*) encore_create((*_ctx), (&(_enc__active__slow_down_Main_type))));
  return _this;
}


void* _enc__method__slow_down_Main_init(pony_ctx_t** _ctx, _enc__active__slow_down_Main_t* _this, pony_type_t** runtimeType)
{
  ENC_DTRACE3(METHOD_ENTRY, (uintptr_t)*_ctx, (uintptr_t)_this, "init");
  UNIT;
  ENC_DTRACE3(METHOD_EXIT, (uintptr_t)*_ctx, (uintptr_t)_this, "init");
  return UNIT;
}


future_t* _enc__method__slow_down_Main_init_future(pony_ctx_t** _ctx, _enc__active__slow_down_Main_t* _this, pony_type_t** runtimeType)
{
  future_t* _fut = future_mk(_ctx, ENCORE_PRIMITIVE);
  pony_gc_send((*_ctx));
  encore_trace_object((*_ctx), _fut, future_trace);
  pony_send_done((*_ctx));
  _enc__fut_msg__slow_down_Main_init_t* msg = ((_enc__fut_msg__slow_down_Main_init_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__fut_msg__slow_down_Main_init_t)), _ENC__FUT_MSG__slow_down_Main_init));
  msg->_fut = _fut;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
  return _fut;
}


void _enc__method__slow_down_Main_init_one_way(pony_ctx_t** _ctx, _enc__active__slow_down_Main_t* _this, pony_type_t** runtimeType)
{
  pony_gc_send((*_ctx));
  /* No tracing future for oneway msg */;
  pony_send_done((*_ctx));
  _enc__oneway_msg__slow_down_Main_init_t* msg = ((_enc__oneway_msg__slow_down_Main_init_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__oneway_msg__slow_down_Main_init_t)), _ENC__ONEWAY_MSG__slow_down_Main_init));
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
}


void* _enc__method__slow_down_Main_main(pony_ctx_t** _ctx, _enc__active__slow_down_Main_t* _this, pony_type_t** runtimeType, array_t* _enc__arg_args)
{
  ENC_DTRACE3(METHOD_ENTRY, (uintptr_t)*_ctx, (uintptr_t)_this, "main");
  /* this!baseline(20) */;
  check_receiver(_this, " ! ", "this", "baseline", "\"slow_down.enc\" (line 10, column 13)");
  int64_t _literal_0 = 20;
  pony_type_t* _tmp_1[] = {};
  _enc__method__slow_down_Main_baseline_one_way(_ctx, _this, NULL, _literal_0);
  ENC_DTRACE3(METHOD_EXIT, (uintptr_t)*_ctx, (uintptr_t)_this, "main");
  return UNIT;
}


future_t* _enc__method__slow_down_Main_main_future(pony_ctx_t** _ctx, _enc__active__slow_down_Main_t* _this, pony_type_t** runtimeType, array_t* _enc__arg_args)
{
  future_t* _fut = future_mk(_ctx, ENCORE_PRIMITIVE);
  pony_gc_send((*_ctx));
  encore_trace_object((*_ctx), _enc__arg_args, array_trace);
  encore_trace_object((*_ctx), _fut, future_trace);
  pony_send_done((*_ctx));
  _enc__fut_msg__slow_down_Main_main_t* msg = ((_enc__fut_msg__slow_down_Main_main_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__fut_msg__slow_down_Main_main_t)), _ENC__FUT_MSG__slow_down_Main_main));
  msg->f1 = _enc__arg_args;
  msg->_fut = _fut;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
  return _fut;
}


void _enc__method__slow_down_Main_main_one_way(pony_ctx_t** _ctx, _enc__active__slow_down_Main_t* _this, pony_type_t** runtimeType, array_t* _enc__arg_args)
{
  pony_gc_send((*_ctx));
  encore_trace_object((*_ctx), _enc__arg_args, array_trace);
  /* No tracing future for oneway msg */;
  pony_send_done((*_ctx));
  _enc__oneway_msg__slow_down_Main_main_t* msg = ((_enc__oneway_msg__slow_down_Main_main_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__oneway_msg__slow_down_Main_main_t)), _ENC__ONEWAY_MSG__slow_down_Main_main));
  msg->f1 = _enc__arg_args;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
}


void* _enc__method__slow_down_Main_baseline(pony_ctx_t** _ctx, _enc__active__slow_down_Main_t* _this, pony_type_t** runtimeType, int64_t _enc__arg_size)
{
  ENC_DTRACE3(METHOD_ENTRY, (uintptr_t)*_ctx, (uintptr_t)_this, "baseline");
  /* var i = 0 */;
  /* i = 0 */;
  int64_t _literal_0 = 0;
  int64_t _i_1 = _literal_0;
  /* this.drivers = new [Agent_driver](size) */;
  array_t* _array_2 = array_mk(_ctx, _enc__arg_size, ENCORE_ACTIVE);
  (*({ENC_DTRACE3(FIELD_WRITE, (uintptr_t)*_ctx, (uintptr_t)_this, "drivers"); _this;}))._enc__field_drivers = _array_2;
  /* this.futures = new [Fut void](size) */;
  array_t* _array_3 = array_mk(_ctx, _enc__arg_size, (&(future_type)));
  (*({ENC_DTRACE3(FIELD_WRITE, (uintptr_t)*_ctx, (uintptr_t)_this, "futures"); _this;}))._enc__field_futures = _array_3;
  /* var j = 0 */;
  /* j = 0 */;
  int64_t _literal_4 = 0;
  int64_t _j_5 = _literal_4;
  /* for i in [ 0 , size - 1 by 1 ]
  this.drivers[i] = new Agent_driver(size) */;
  void* _for_6;
  /* Range not generated */;
  int64_t _literal_13 = 0;
  int64_t _binop_15 = (({ _enc__arg_size;}) - ({int64_t _literal_14 = 1; _literal_14;}));
  int64_t _literal_16 = 1;
  int64_t _literal_17 = 1;
  int64_t _step_11 = (_literal_17 * _literal_16);
  range_assert_step(_step_11);
  int64_t _index_7;
  if ((_step_11 > 0))
  {
    _index_7 = _literal_13;
  }
  else
  {
    _index_7 = _binop_15;
  };
  while (((_index_7 >= _literal_13) && (_index_7 <= _binop_15)))
  {
    int64_t _i_8 = _index_7;
    /* this.drivers[i] = new Agent_driver(size) */;
    _enc__active__slow_down_Agent_driver_t* _new_18 = _enc__constructor__slow_down_Agent_driver(_ctx, NULL);
    pony_type_t* _tmp_19[] = {};
    _enc__type_init__slow_down_Agent_driver(_new_18);
    _enc__method__slow_down_Agent_driver_init_one_way(_ctx, _new_18, NULL, _enc__arg_size);
    ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "drivers");
    array_t* _fieldacc_20 = (*_this)._enc__field_drivers;
    array_set(_fieldacc_20, _i_8, ((encore_arg_t) {.p = _new_18}));
    _for_6 = UNIT;
    _index_7 = (_index_7 + _step_11);
  };
  /* i = 0 */;
  int64_t _literal_21 = 0;
  _i_1 = _literal_21;
  /* for a in this.drivers
  for b in this.drivers
    unless a == b then
      a!link(b) */;
  void* _for_22;
  ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "drivers");
  array_t* _fieldacc_29 = (*_this)._enc__field_drivers;
  int64_t _start_25 = 0;
  int64_t _stop_26 = (array_size(_fieldacc_29) - 1);
  int64_t _src_step_28 = 1;
  int64_t _literal_30 = 1;
  int64_t _step_27 = (_literal_30 * _src_step_28);
  range_assert_step(_step_27);
  int64_t _index_23;
  if ((_step_27 > 0))
  {
    _index_23 = _start_25;
  }
  else
  {
    _index_23 = _stop_26;
  };
  while (((_index_23 >= _start_25) && (_index_23 <= _stop_26)))
  {
    _enc__active__slow_down_Agent_driver_t* _a_24 = array_get(_fieldacc_29, _index_23).p;
    /* for b in this.drivers
  unless a == b then
    a!link(b) */;
    void* _for_31;
    ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "drivers");
    array_t* _fieldacc_38 = (*_this)._enc__field_drivers;
    int64_t _start_34 = 0;
    int64_t _stop_35 = (array_size(_fieldacc_38) - 1);
    int64_t _src_step_37 = 1;
    int64_t _literal_39 = 1;
    int64_t _step_36 = (_literal_39 * _src_step_37);
    range_assert_step(_step_36);
    int64_t _index_32;
    if ((_step_36 > 0))
    {
      _index_32 = _start_34;
    }
    else
    {
      _index_32 = _stop_35;
    };
    while (((_index_32 >= _start_34) && (_index_32 <= _stop_35)))
    {
      _enc__active__slow_down_Agent_driver_t* _b_33 = array_get(_fieldacc_38, _index_32).p;
      /* unless a == b then
  a!link(b) */;
      void* _ite_40;
      if (({int64_t _binop_41 = (({ _a_24;}) == ((_enc__active__slow_down_Agent_driver_t*) ({ _b_33;})));
            int64_t _unary_42 = (! _binop_41); _unary_42;}))
      {
        /* a!link(b) */;
        check_receiver(_a_24, " ! ", "a", "link", "\"slow_down.enc\" (line 24, column 19)");
        pony_type_t* _tmp_43[] = {};
        _enc__method__slow_down_Agent_driver_link_one_way(_ctx, _a_24, NULL, _b_33);
        _ite_40 = ((void*) UNIT);
      }
      else
      {
        UNIT;
        _ite_40 = ((void*) UNIT);
      };
      _for_31 = _ite_40;
      _index_32 = (_index_32 + _step_36);
    };
    _for_22 = _for_31;
    _index_23 = (_index_23 + _step_27);
  };
  /* this!baseline_loop(4000, 0) */;
  check_receiver(_this, " ! ", "this", "baseline_loop", "\"slow_down.enc\" (line 28, column 14)");
  int64_t _literal_44 = 4000;
  int64_t _literal_45 = 0;
  pony_type_t* _tmp_46[] = {};
  _enc__method__slow_down_Main_baseline_loop_one_way(_ctx, _this, NULL, _literal_44, _literal_45);
  ENC_DTRACE3(METHOD_EXIT, (uintptr_t)*_ctx, (uintptr_t)_this, "baseline");
  return UNIT;
}


future_t* _enc__method__slow_down_Main_baseline_future(pony_ctx_t** _ctx, _enc__active__slow_down_Main_t* _this, pony_type_t** runtimeType, int64_t _enc__arg_size)
{
  future_t* _fut = future_mk(_ctx, ENCORE_PRIMITIVE);
  pony_gc_send((*_ctx));
  /* Not tracing field '_enc__arg_size' */;
  encore_trace_object((*_ctx), _fut, future_trace);
  pony_send_done((*_ctx));
  _enc__fut_msg__slow_down_Main_baseline_t* msg = ((_enc__fut_msg__slow_down_Main_baseline_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__fut_msg__slow_down_Main_baseline_t)), _ENC__FUT_MSG__slow_down_Main_baseline));
  msg->f1 = _enc__arg_size;
  msg->_fut = _fut;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
  return _fut;
}


void _enc__method__slow_down_Main_baseline_one_way(pony_ctx_t** _ctx, _enc__active__slow_down_Main_t* _this, pony_type_t** runtimeType, int64_t _enc__arg_size)
{
  pony_gc_send((*_ctx));
  /* Not tracing field '_enc__arg_size' */;
  /* No tracing future for oneway msg */;
  pony_send_done((*_ctx));
  _enc__oneway_msg__slow_down_Main_baseline_t* msg = ((_enc__oneway_msg__slow_down_Main_baseline_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__oneway_msg__slow_down_Main_baseline_t)), _ENC__ONEWAY_MSG__slow_down_Main_baseline));
  msg->f1 = _enc__arg_size;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
}


void* _enc__method__slow_down_Main_baseline_loop(pony_ctx_t** _ctx, _enc__active__slow_down_Main_t* _this, pony_type_t** runtimeType, int64_t _enc__arg_i, int64_t _enc__arg_times)
{
  ENC_DTRACE3(METHOD_ENTRY, (uintptr_t)*_ctx, (uintptr_t)_this, "baseline_loop");
  /* var j = 0 */;
  /* j = 0 */;
  int64_t _literal_0 = 0;
  int64_t _j_1 = _literal_0;
  /* var last_time = clock() */;
  /* last_time = clock() */;
  ENC_DTRACE2(FUNCTION_CALL, (uintptr_t)*_ctx, "clock");
  pony_type_t* _tmp_2[] = {};
  int64_t _fun_call_3 = _enc__global_fun__slow_downclock(_ctx, NULL);
  int64_t _last_time_4 = _fun_call_3;
  /* var t = times */;
  /* t = times */;
  int64_t _t_5 = _enc__arg_times;
  /* for a in this.drivers
  {this.futures[j] = a.move();
   j = j + 1} */;
  void* _for_6;
  ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "drivers");
  array_t* _fieldacc_13 = (*_this)._enc__field_drivers;
  int64_t _start_9 = 0;
  int64_t _stop_10 = (array_size(_fieldacc_13) - 1);
  int64_t _src_step_12 = 1;
  int64_t _literal_14 = 1;
  int64_t _step_11 = (_literal_14 * _src_step_12);
  range_assert_step(_step_11);
  int64_t _index_7;
  if ((_step_11 > 0))
  {
    _index_7 = _start_9;
  }
  else
  {
    _index_7 = _stop_10;
  };
  while (((_index_7 >= _start_9) && (_index_7 <= _stop_10)))
  {
    _enc__active__slow_down_Agent_driver_t* _a_8 = array_get(_fieldacc_13, _index_7).p;
    /* this.futures[j] = a.move() */;
    check_receiver(_a_8, ".", "a", "move", "\"slow_down.enc\" (line 35, column 30)");
    pony_type_t* _tmp_16[] = {};
    future_t* _fut_15 = _enc__method__slow_down_Agent_driver_move_future(_ctx, _a_8, NULL);
    ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "futures");
    array_t* _fieldacc_17 = (*_this)._enc__field_futures;
    array_set(_fieldacc_17, _j_1, ((encore_arg_t) {.p = _fut_15}));
    /* j = j + 1 */;
    int64_t _binop_19 = (({ _j_1;}) + ({int64_t _literal_18 = 1; _literal_18;}));
    _j_1 = _binop_19;
    _for_6 = UNIT;
    _index_7 = (_index_7 + _step_11);
  };
  /* for a in this.futures
  get a */;
  void* _for_20;
  ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "futures");
  array_t* _fieldacc_27 = (*_this)._enc__field_futures;
  int64_t _start_23 = 0;
  int64_t _stop_24 = (array_size(_fieldacc_27) - 1);
  int64_t _src_step_26 = 1;
  int64_t _literal_28 = 1;
  int64_t _step_25 = (_literal_28 * _src_step_26);
  range_assert_step(_step_25);
  int64_t _index_21;
  if ((_step_25 > 0))
  {
    _index_21 = _start_23;
  }
  else
  {
    _index_21 = _stop_24;
  };
  while (((_index_21 >= _start_23) && (_index_21 <= _stop_24)))
  {
    future_t* _a_22 = array_get(_fieldacc_27, _index_21).p;
    /* get a */;
    void* _tmp_29 = future_get_actor(_ctx, _a_22).p;
    _for_20 = _tmp_29;
    _index_21 = (_index_21 + _step_25);
  };
  /* if i % 100 == 0 then
  {print("{} {}\n", i, t);
   t = 0}
else
  t = t + clock() - last_time */;
  void* _ite_30;
  if (({int64_t _binop_34 = (({int64_t _binop_32 = (({ _enc__arg_i;}) % ({int64_t _literal_31 = 100; _literal_31;})); _binop_32;}) == ({int64_t _literal_33 = 0; _literal_33;})); _binop_34;}))
  {
    /* print("{} {}\n", i, t) */;
    fprintf(stdout, "%lli %lli\n", _enc__arg_i, _t_5);
    /* t = 0 */;
    int64_t _literal_35 = 0;
    _t_5 = _literal_35;
    _ite_30 = ((void*) UNIT);
  }
  else
  {
    /* t = t + clock() - last_time */;
    int64_t _binop_39 = (({int64_t _binop_38 = (({ _t_5;}) + ({ENC_DTRACE2(FUNCTION_CALL, (uintptr_t)*_ctx, "clock");
                                                               pony_type_t* _tmp_36[] = {};
                                                               int64_t _fun_call_37 = _enc__global_fun__slow_downclock(_ctx, NULL); _fun_call_37;})); _binop_38;}) - ({ _last_time_4;}));
    _t_5 = _binop_39;
    _ite_30 = ((void*) UNIT);
  };
  /* if i > 0 then
  this!baseline_loop(i - 1, t) */;
  void* _ite_40;
  if (({int64_t _binop_42 = (({ _enc__arg_i;}) > ({int64_t _literal_41 = 0; _literal_41;})); _binop_42;}))
  {
    check_receiver(_this, " ! ", "this", "baseline_loop", "\"slow_down.enc\" (line 47, column 25)");
    int64_t _binop_44 = (({ _enc__arg_i;}) - ({int64_t _literal_43 = 1; _literal_43;}));
    pony_type_t* _tmp_45[] = {};
    _enc__method__slow_down_Main_baseline_loop_one_way(_ctx, _this, NULL, _binop_44, _t_5);
    _ite_40 = ((void*) UNIT);
  }
  else
  {
    UNIT;
    _ite_40 = ((void*) UNIT);
  };
  ENC_DTRACE3(METHOD_EXIT, (uintptr_t)*_ctx, (uintptr_t)_this, "baseline_loop");
  return UNIT;
}


future_t* _enc__method__slow_down_Main_baseline_loop_future(pony_ctx_t** _ctx, _enc__active__slow_down_Main_t* _this, pony_type_t** runtimeType, int64_t _enc__arg_i, int64_t _enc__arg_times)
{
  future_t* _fut = future_mk(_ctx, ENCORE_PRIMITIVE);
  pony_gc_send((*_ctx));
  /* Not tracing field '_enc__arg_i' */;
  /* Not tracing field '_enc__arg_times' */;
  encore_trace_object((*_ctx), _fut, future_trace);
  pony_send_done((*_ctx));
  _enc__fut_msg__slow_down_Main_baseline_loop_t* msg = ((_enc__fut_msg__slow_down_Main_baseline_loop_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__fut_msg__slow_down_Main_baseline_loop_t)), _ENC__FUT_MSG__slow_down_Main_baseline_loop));
  msg->f1 = _enc__arg_i;
  msg->f2 = _enc__arg_times;
  msg->_fut = _fut;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
  return _fut;
}


void _enc__method__slow_down_Main_baseline_loop_one_way(pony_ctx_t** _ctx, _enc__active__slow_down_Main_t* _this, pony_type_t** runtimeType, int64_t _enc__arg_i, int64_t _enc__arg_times)
{
  pony_gc_send((*_ctx));
  /* Not tracing field '_enc__arg_i' */;
  /* Not tracing field '_enc__arg_times' */;
  /* No tracing future for oneway msg */;
  pony_send_done((*_ctx));
  _enc__oneway_msg__slow_down_Main_baseline_loop_t* msg = ((_enc__oneway_msg__slow_down_Main_baseline_loop_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__oneway_msg__slow_down_Main_baseline_loop_t)), _ENC__ONEWAY_MSG__slow_down_Main_baseline_loop));
  msg->f1 = _enc__arg_i;
  msg->f2 = _enc__arg_times;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
}


static void _enc__dispatch__slow_down_Main(pony_ctx_t** _ctx, pony_actor_t* _a, pony_msg_t* _m)
{
  _enc__active__slow_down_Main_t* _this = ((_enc__active__slow_down_Main_t*) _a);
  switch (_m->id)
  {
    case _ENC__MSG_MAIN:
    {
      pony_main_msg_t* msg = ((pony_main_msg_t*) _m);
      _enc__method__slow_down_Main_main(_ctx, ((_enc__active__slow_down_Main_t*) _a), NULL, _init_argv(_ctx, msg->argc, msg->argv));
      break;
    }
    case _ENC__FUT_MSG__slow_down_Main_init:
    {
      future_t* _fut = ((encore_fut_msg_t*) _m)->_fut;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      encore_trace_object((*_ctx), _fut, future_type.trace);
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      pony_type_t* methodTypeVars[] = {};
      future_fulfil(_ctx, _fut, ((encore_arg_t) {.p = _enc__method__slow_down_Main_init(_ctx, _this, methodTypeVars)}));
      break;
    }
    case _ENC__ONEWAY_MSG__slow_down_Main_init:
    {
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      /* Not tracing the future in a oneWay send */;
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      pony_type_t* methodTypeVars[] = {};
      _enc__method__slow_down_Main_init(_ctx, _this, methodTypeVars);
      break;
    }
    case _ENC__FUT_MSG__slow_down_Main_baseline:
    {
      future_t* _fut = ((encore_fut_msg_t*) _m)->_fut;
      int64_t _enc__arg_size = ((_enc__fut_msg__slow_down_Main_baseline_t*) _m)->f1;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      /* Not tracing field '_enc__arg_size' */;
      encore_trace_object((*_ctx), _fut, future_type.trace);
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      pony_type_t* methodTypeVars[] = {};
      future_fulfil(_ctx, _fut, ((encore_arg_t) {.p = _enc__method__slow_down_Main_baseline(_ctx, _this, methodTypeVars, _enc__arg_size)}));
      break;
    }
    case _ENC__ONEWAY_MSG__slow_down_Main_baseline:
    {
      int64_t _enc__arg_size = ((_enc__oneway_msg__slow_down_Main_baseline_t*) _m)->f1;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      /* Not tracing field '_enc__arg_size' */;
      /* Not tracing the future in a oneWay send */;
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      pony_type_t* methodTypeVars[] = {};
      _enc__method__slow_down_Main_baseline(_ctx, _this, methodTypeVars, _enc__arg_size);
      break;
    }
    case _ENC__FUT_MSG__slow_down_Main_baseline_loop:
    {
      future_t* _fut = ((encore_fut_msg_t*) _m)->_fut;
      int64_t _enc__arg_i = ((_enc__fut_msg__slow_down_Main_baseline_loop_t*) _m)->f1;
      int64_t _enc__arg_times = ((_enc__fut_msg__slow_down_Main_baseline_loop_t*) _m)->f2;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      /* Not tracing field '_enc__arg_i' */;
      /* Not tracing field '_enc__arg_times' */;
      encore_trace_object((*_ctx), _fut, future_type.trace);
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      pony_type_t* methodTypeVars[] = {};
      future_fulfil(_ctx, _fut, ((encore_arg_t) {.p = _enc__method__slow_down_Main_baseline_loop(_ctx, _this, methodTypeVars, _enc__arg_i, _enc__arg_times)}));
      break;
    }
    case _ENC__ONEWAY_MSG__slow_down_Main_baseline_loop:
    {
      int64_t _enc__arg_i = ((_enc__oneway_msg__slow_down_Main_baseline_loop_t*) _m)->f1;
      int64_t _enc__arg_times = ((_enc__oneway_msg__slow_down_Main_baseline_loop_t*) _m)->f2;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      /* Not tracing field '_enc__arg_i' */;
      /* Not tracing field '_enc__arg_times' */;
      /* Not tracing the future in a oneWay send */;
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      pony_type_t* methodTypeVars[] = {};
      _enc__method__slow_down_Main_baseline_loop(_ctx, _this, methodTypeVars, _enc__arg_i, _enc__arg_times);
      break;
    }
    default:
    {
      printf("error, got invalid id: %zd", _m->id);
    }
  };
}


pony_type_t _enc__active__slow_down_Main_type = {.id=_ENC__ID__slow_down_Main, .size=sizeof(_enc__active__slow_down_Main_t), .trace=_enc__trace__slow_down_Main, .dispatch=_enc__dispatch__slow_down_Main, .vtable=trait_method_selector};
