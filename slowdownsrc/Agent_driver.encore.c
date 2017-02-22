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


struct _enc__active__slow_down_Agent_driver_t
{
  encore_actor_t _enc__actor;
  array_t* _enc__field_links;
  int64_t _enc__field_index;
};


void _enc__type_init__slow_down_Agent_driver(_enc__active__slow_down_Agent_driver_t* _this, ... )
{
  va_list params;
  va_start(params, _this);
  va_end(params);
}


void _enc__trace__slow_down_Agent_driver(pony_ctx_t* _ctx_arg, void* p)
{
  pony_ctx_t** _ctx = (&(_ctx_arg));
  _enc__active__slow_down_Agent_driver_t* _this = p;
  array_t* _enc__field_links = _this->_enc__field_links;
  encore_trace_object((*_ctx), _enc__field_links, array_trace);
  int64_t _enc__field_index = _this->_enc__field_index;
  /* Not tracing field '_enc__field_index' */;
}


_enc__active__slow_down_Agent_driver_t* _enc__constructor__slow_down_Agent_driver(pony_ctx_t** _ctx, pony_type_t** runtimeType)
{
  _enc__active__slow_down_Agent_driver_t* _this = ((_enc__active__slow_down_Agent_driver_t*) encore_create((*_ctx), (&(_enc__active__slow_down_Agent_driver_type))));
  return _this;
}


void* _enc__method__slow_down_Agent_driver_init(pony_ctx_t** _ctx, _enc__active__slow_down_Agent_driver_t* _this, pony_type_t** runtimeType, int64_t _enc__arg_size)
{
  ENC_DTRACE3(METHOD_ENTRY, (uintptr_t)*_ctx, (uintptr_t)_this, "init");
  /* this.links = new [Agent_driver](size - 1) */;
  int64_t _binop_2 = (({ _enc__arg_size;}) - ({int64_t _literal_1 = 1; _literal_1;}));
  array_t* _array_0 = array_mk(_ctx, _binop_2, ENCORE_ACTIVE);
  (*({ENC_DTRACE3(FIELD_WRITE, (uintptr_t)*_ctx, (uintptr_t)_this, "links"); _this;}))._enc__field_links = _array_0;
  /* this.index = 0 */;
  int64_t _literal_3 = 0;
  (*({ENC_DTRACE3(FIELD_WRITE, (uintptr_t)*_ctx, (uintptr_t)_this, "index"); _this;}))._enc__field_index = _literal_3;
  ENC_DTRACE3(METHOD_EXIT, (uintptr_t)*_ctx, (uintptr_t)_this, "init");
  return UNIT;
}


future_t* _enc__method__slow_down_Agent_driver_init_future(pony_ctx_t** _ctx, _enc__active__slow_down_Agent_driver_t* _this, pony_type_t** runtimeType, int64_t _enc__arg_size)
{
  future_t* _fut = future_mk(_ctx, ENCORE_PRIMITIVE);
  pony_gc_send((*_ctx));
  /* Not tracing field '_enc__arg_size' */;
  encore_trace_object((*_ctx), _fut, future_trace);
  pony_send_done((*_ctx));
  _enc__fut_msg__slow_down_Agent_driver_init_t* msg = ((_enc__fut_msg__slow_down_Agent_driver_init_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__fut_msg__slow_down_Agent_driver_init_t)), _ENC__FUT_MSG__slow_down_Agent_driver_init));
  msg->f1 = _enc__arg_size;
  msg->_fut = _fut;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
  return _fut;
}


void _enc__method__slow_down_Agent_driver_init_one_way(pony_ctx_t** _ctx, _enc__active__slow_down_Agent_driver_t* _this, pony_type_t** runtimeType, int64_t _enc__arg_size)
{
  pony_gc_send((*_ctx));
  /* Not tracing field '_enc__arg_size' */;
  /* No tracing future for oneway msg */;
  pony_send_done((*_ctx));
  _enc__oneway_msg__slow_down_Agent_driver_init_t* msg = ((_enc__oneway_msg__slow_down_Agent_driver_init_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__oneway_msg__slow_down_Agent_driver_init_t)), _ENC__ONEWAY_MSG__slow_down_Agent_driver_init));
  msg->f1 = _enc__arg_size;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
}


void* _enc__method__slow_down_Agent_driver_link(pony_ctx_t** _ctx, _enc__active__slow_down_Agent_driver_t* _this, pony_type_t** runtimeType, _enc__active__slow_down_Agent_driver_t* _enc__arg_a)
{
  ENC_DTRACE3(METHOD_ENTRY, (uintptr_t)*_ctx, (uintptr_t)_this, "link");
  /* this.links[this.index] = a */;
  ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "links");
  array_t* _fieldacc_0 = (*_this)._enc__field_links;
  ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "index");
  int64_t _fieldacc_1 = (*_this)._enc__field_index;
  array_set(_fieldacc_0, _fieldacc_1, ((encore_arg_t) {.p = _enc__arg_a}));
  /* this.index = this.index + 1 */;
  int64_t _binop_4 = (({ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "index");
                        int64_t _fieldacc_2 = (*_this)._enc__field_index; _fieldacc_2;}) + ({int64_t _literal_3 = 1; _literal_3;}));
  (*({ENC_DTRACE3(FIELD_WRITE, (uintptr_t)*_ctx, (uintptr_t)_this, "index"); _this;}))._enc__field_index = _binop_4;
  ENC_DTRACE3(METHOD_EXIT, (uintptr_t)*_ctx, (uintptr_t)_this, "link");
  return UNIT;
}


future_t* _enc__method__slow_down_Agent_driver_link_future(pony_ctx_t** _ctx, _enc__active__slow_down_Agent_driver_t* _this, pony_type_t** runtimeType, _enc__active__slow_down_Agent_driver_t* _enc__arg_a)
{
  future_t* _fut = future_mk(_ctx, ENCORE_PRIMITIVE);
  pony_gc_send((*_ctx));
  encore_trace_actor((*_ctx), ((pony_actor_t*) _enc__arg_a));
  encore_trace_object((*_ctx), _fut, future_trace);
  pony_send_done((*_ctx));
  _enc__fut_msg__slow_down_Agent_driver_link_t* msg = ((_enc__fut_msg__slow_down_Agent_driver_link_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__fut_msg__slow_down_Agent_driver_link_t)), _ENC__FUT_MSG__slow_down_Agent_driver_link));
  msg->f1 = _enc__arg_a;
  msg->_fut = _fut;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
  return _fut;
}


void _enc__method__slow_down_Agent_driver_link_one_way(pony_ctx_t** _ctx, _enc__active__slow_down_Agent_driver_t* _this, pony_type_t** runtimeType, _enc__active__slow_down_Agent_driver_t* _enc__arg_a)
{
  pony_gc_send((*_ctx));
  encore_trace_actor((*_ctx), ((pony_actor_t*) _enc__arg_a));
  /* No tracing future for oneway msg */;
  pony_send_done((*_ctx));
  _enc__oneway_msg__slow_down_Agent_driver_link_t* msg = ((_enc__oneway_msg__slow_down_Agent_driver_link_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__oneway_msg__slow_down_Agent_driver_link_t)), _ENC__ONEWAY_MSG__slow_down_Agent_driver_link));
  msg->f1 = _enc__arg_a;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
}


void* _enc__method__slow_down_Agent_driver_move(pony_ctx_t** _ctx, _enc__active__slow_down_Agent_driver_t* _this, pony_type_t** runtimeType)
{
  ENC_DTRACE3(METHOD_ENTRY, (uintptr_t)*_ctx, (uintptr_t)_this, "move");
  /* var futures = new [Fut void](|this.links|) */;
  /* futures = new [Fut void](|this.links|) */;
  ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "links");
  array_t* _fieldacc_1 = (*_this)._enc__field_links;
  int64_t _size_2 = array_size(_fieldacc_1);
  array_t* _array_0 = array_mk(_ctx, _size_2, (&(future_type)));
  array_t* _futures_3 = _array_0;
  /* var i = 0 */;
  /* i = 0 */;
  int64_t _literal_4 = 0;
  int64_t _i_5 = _literal_4;
  /* var full = false */;
  /* full = false */;
  int64_t _literal_6 = 0/*False*/;
  int64_t _full_7 = _literal_6;
  /* for a in this.links
  {futures[i] = a.there();
   i = i + 1} */;
  void* _for_8;
  ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "links");
  array_t* _fieldacc_15 = (*_this)._enc__field_links;
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
    _enc__active__slow_down_Agent_driver_t* _a_10 = array_get(_fieldacc_15, _index_9).p;
    /* futures[i] = a.there() */;
    check_receiver(_a_10, ".", "a", "there", "\"slow_down.enc\" (line 67, column 24)");
    pony_type_t* _tmp_18[] = {};
    future_t* _fut_17 = _enc__method__slow_down_Agent_driver_there_future(_ctx, _a_10, NULL);
    array_set(_futures_3, _i_5, ((encore_arg_t) {.p = _fut_17}));
    /* i = i + 1 */;
    int64_t _binop_20 = (({ _i_5;}) + ({int64_t _literal_19 = 1; _literal_19;}));
    _i_5 = _binop_20;
    _for_8 = UNIT;
    _index_9 = (_index_9 + _step_13);
  };
  /* i = 0 */;
  int64_t _literal_21 = 0;
  _i_5 = _literal_21;
  /* for a in futures
  await a */;
  void* _for_22;
  int64_t _start_25 = 0;
  int64_t _stop_26 = (array_size(_futures_3) - 1);
  int64_t _src_step_28 = 1;
  int64_t _literal_29 = 1;
  int64_t _step_27 = (_literal_29 * _src_step_28);
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
    future_t* _a_24 = array_get(_futures_3, _index_23).p;
    future_await(_ctx, _a_24);
    _for_22 = UNIT;
    _index_23 = (_index_23 + _step_27);
  };
  /* () */;
  UNIT;
  ENC_DTRACE3(METHOD_EXIT, (uintptr_t)*_ctx, (uintptr_t)_this, "move");
  return UNIT;
}


future_t* _enc__method__slow_down_Agent_driver_move_future(pony_ctx_t** _ctx, _enc__active__slow_down_Agent_driver_t* _this, pony_type_t** runtimeType)
{
  future_t* _fut = future_mk(_ctx, ENCORE_PRIMITIVE);
  pony_gc_send((*_ctx));
  encore_trace_object((*_ctx), _fut, future_trace);
  pony_send_done((*_ctx));
  _enc__fut_msg__slow_down_Agent_driver_move_t* msg = ((_enc__fut_msg__slow_down_Agent_driver_move_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__fut_msg__slow_down_Agent_driver_move_t)), _ENC__FUT_MSG__slow_down_Agent_driver_move));
  msg->_fut = _fut;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
  return _fut;
}


void _enc__method__slow_down_Agent_driver_move_one_way(pony_ctx_t** _ctx, _enc__active__slow_down_Agent_driver_t* _this, pony_type_t** runtimeType)
{
  pony_gc_send((*_ctx));
  /* No tracing future for oneway msg */;
  pony_send_done((*_ctx));
  _enc__oneway_msg__slow_down_Agent_driver_move_t* msg = ((_enc__oneway_msg__slow_down_Agent_driver_move_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__oneway_msg__slow_down_Agent_driver_move_t)), _ENC__ONEWAY_MSG__slow_down_Agent_driver_move));
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
}


void* _enc__method__slow_down_Agent_driver_there(pony_ctx_t** _ctx, _enc__active__slow_down_Agent_driver_t* _this, pony_type_t** runtimeType)
{
  ENC_DTRACE3(METHOD_ENTRY, (uintptr_t)*_ctx, (uintptr_t)_this, "there");
  /* () */;
  UNIT;
  ENC_DTRACE3(METHOD_EXIT, (uintptr_t)*_ctx, (uintptr_t)_this, "there");
  return UNIT;
}


future_t* _enc__method__slow_down_Agent_driver_there_future(pony_ctx_t** _ctx, _enc__active__slow_down_Agent_driver_t* _this, pony_type_t** runtimeType)
{
  future_t* _fut = future_mk(_ctx, ENCORE_PRIMITIVE);
  pony_gc_send((*_ctx));
  encore_trace_object((*_ctx), _fut, future_trace);
  pony_send_done((*_ctx));
  _enc__fut_msg__slow_down_Agent_driver_there_t* msg = ((_enc__fut_msg__slow_down_Agent_driver_there_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__fut_msg__slow_down_Agent_driver_there_t)), _ENC__FUT_MSG__slow_down_Agent_driver_there));
  msg->_fut = _fut;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
  return _fut;
}


void _enc__method__slow_down_Agent_driver_there_one_way(pony_ctx_t** _ctx, _enc__active__slow_down_Agent_driver_t* _this, pony_type_t** runtimeType)
{
  pony_gc_send((*_ctx));
  /* No tracing future for oneway msg */;
  pony_send_done((*_ctx));
  _enc__oneway_msg__slow_down_Agent_driver_there_t* msg = ((_enc__oneway_msg__slow_down_Agent_driver_there_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__oneway_msg__slow_down_Agent_driver_there_t)), _ENC__ONEWAY_MSG__slow_down_Agent_driver_there));
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
}


static void _enc__dispatch__slow_down_Agent_driver(pony_ctx_t** _ctx, pony_actor_t* _a, pony_msg_t* _m)
{
  _enc__active__slow_down_Agent_driver_t* _this = ((_enc__active__slow_down_Agent_driver_t*) _a);
  switch (_m->id)
  {
    case _ENC__FUT_MSG__slow_down_Agent_driver_init:
    {
      future_t* _fut = ((encore_fut_msg_t*) _m)->_fut;
      int64_t _enc__arg_size = ((_enc__fut_msg__slow_down_Agent_driver_init_t*) _m)->f1;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      /* Not tracing field '_enc__arg_size' */;
      encore_trace_object((*_ctx), _fut, future_type.trace);
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      pony_type_t* methodTypeVars[] = {};
      future_fulfil(_ctx, _fut, ((encore_arg_t) {.p = _enc__method__slow_down_Agent_driver_init(_ctx, _this, methodTypeVars, _enc__arg_size)}));
      break;
    }
    case _ENC__ONEWAY_MSG__slow_down_Agent_driver_init:
    {
      int64_t _enc__arg_size = ((_enc__oneway_msg__slow_down_Agent_driver_init_t*) _m)->f1;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      /* Not tracing field '_enc__arg_size' */;
      /* Not tracing the future in a oneWay send */;
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      pony_type_t* methodTypeVars[] = {};
      _enc__method__slow_down_Agent_driver_init(_ctx, _this, methodTypeVars, _enc__arg_size);
      break;
    }
    case _ENC__FUT_MSG__slow_down_Agent_driver_link:
    {
      future_t* _fut = ((encore_fut_msg_t*) _m)->_fut;
      _enc__active__slow_down_Agent_driver_t* _enc__arg_a = ((_enc__fut_msg__slow_down_Agent_driver_link_t*) _m)->f1;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      encore_trace_actor((*_ctx), ((pony_actor_t*) _enc__arg_a));
      encore_trace_object((*_ctx), _fut, future_type.trace);
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      pony_type_t* methodTypeVars[] = {};
      future_fulfil(_ctx, _fut, ((encore_arg_t) {.p = _enc__method__slow_down_Agent_driver_link(_ctx, _this, methodTypeVars, _enc__arg_a)}));
      break;
    }
    case _ENC__ONEWAY_MSG__slow_down_Agent_driver_link:
    {
      _enc__active__slow_down_Agent_driver_t* _enc__arg_a = ((_enc__oneway_msg__slow_down_Agent_driver_link_t*) _m)->f1;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      encore_trace_actor((*_ctx), ((pony_actor_t*) _enc__arg_a));
      /* Not tracing the future in a oneWay send */;
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      pony_type_t* methodTypeVars[] = {};
      _enc__method__slow_down_Agent_driver_link(_ctx, _this, methodTypeVars, _enc__arg_a);
      break;
    }
    case _ENC__FUT_MSG__slow_down_Agent_driver_move:
    {
      future_t* _fut = ((encore_fut_msg_t*) _m)->_fut;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      encore_trace_object((*_ctx), _fut, future_type.trace);
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      pony_type_t* methodTypeVars[] = {};
      future_fulfil(_ctx, _fut, ((encore_arg_t) {.p = _enc__method__slow_down_Agent_driver_move(_ctx, _this, methodTypeVars)}));
      break;
    }
    case _ENC__ONEWAY_MSG__slow_down_Agent_driver_move:
    {
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      /* Not tracing the future in a oneWay send */;
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      pony_type_t* methodTypeVars[] = {};
      _enc__method__slow_down_Agent_driver_move(_ctx, _this, methodTypeVars);
      break;
    }
    case _ENC__FUT_MSG__slow_down_Agent_driver_there:
    {
      future_t* _fut = ((encore_fut_msg_t*) _m)->_fut;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      encore_trace_object((*_ctx), _fut, future_type.trace);
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      pony_type_t* methodTypeVars[] = {};
      future_fulfil(_ctx, _fut, ((encore_arg_t) {.p = _enc__method__slow_down_Agent_driver_there(_ctx, _this, methodTypeVars)}));
      break;
    }
    case _ENC__ONEWAY_MSG__slow_down_Agent_driver_there:
    {
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      /* Not tracing the future in a oneWay send */;
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      pony_type_t* methodTypeVars[] = {};
      _enc__method__slow_down_Agent_driver_there(_ctx, _this, methodTypeVars);
      break;
    }
    default:
    {
      printf("error, got invalid id: %zd", _m->id);
    }
  };
}


pony_type_t _enc__active__slow_down_Agent_driver_type = {.id=_ENC__ID__slow_down_Agent_driver, .size=sizeof(_enc__active__slow_down_Agent_driver_t), .trace=_enc__trace__slow_down_Agent_driver, .dispatch=_enc__dispatch__slow_down_Agent_driver, .vtable=trait_method_selector};
