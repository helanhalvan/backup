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


struct _enc__active__encore_libs_master_SDL_SDL_Main_Event_Vat_t
{
  encore_actor_t _enc__actor;
  pony_type_t* _enc__type_event_type;
  _enc__active__encore_libs_master_SDL_Vat_Vat_t* _enc__field_vat;
};


void _enc__type_init__encore_libs_master_SDL_SDL_Main_Event_Vat(_enc__active__encore_libs_master_SDL_SDL_Main_Event_Vat_t* _this, ... )
{
  va_list params;
  va_start(params, _this);
  _this->_enc__type_event_type = va_arg(params, pony_type_t *);
  va_end(params);
}


void _enc__trace__encore_libs_master_SDL_SDL_Main_Event_Vat(pony_ctx_t* _ctx_arg, void* p)
{
  pony_ctx_t** _ctx = (&(_ctx_arg));
  _enc__active__encore_libs_master_SDL_SDL_Main_Event_Vat_t* _this = p;
  pony_type_t* _enc__type_event_type = _this->_enc__type_event_type;
  _enc__active__encore_libs_master_SDL_Vat_Vat_t* _enc__field_vat = _this->_enc__field_vat;
  encore_trace_actor((*_ctx), ((pony_actor_t*) _enc__field_vat));
}


_enc__active__encore_libs_master_SDL_SDL_Main_Event_Vat_t* _enc__constructor__encore_libs_master_SDL_SDL_Main_Event_Vat(pony_ctx_t** _ctx, pony_type_t** runtimeType)
{
  _enc__active__encore_libs_master_SDL_SDL_Main_Event_Vat_t* _this = ((_enc__active__encore_libs_master_SDL_SDL_Main_Event_Vat_t*) encore_create((*_ctx), (&(_enc__active__encore_libs_master_SDL_SDL_Main_Event_Vat_type))));
  return _this;
}


void* _enc__method__encore_libs_master_SDL_SDL_Main_Event_Vat_init(pony_ctx_t** _ctx, _enc__active__encore_libs_master_SDL_SDL_Main_Event_Vat_t* _this, pony_type_t** runtimeType)
{
  ENC_DTRACE3(METHOD_ENTRY, (uintptr_t)*_ctx, (uintptr_t)_this, "init");
  pony_type_t* _enc__type_event_type = (*((_enc__active__encore_libs_master_SDL_SDL_Main_Event_Vat_t*) _this))._enc__type_event_type;
  /* this.vat = new Vat<(SDL_Main, event_type)>() */;
  _enc__active__encore_libs_master_SDL_Vat_Vat_t* _new_0 = _enc__constructor__encore_libs_master_SDL_Vat_Vat(_ctx, NULL);
  pony_type_t* _tmp_1[] = {};
  _enc__type_init__encore_libs_master_SDL_Vat_Vat(_new_0, (&(tuple_type)));
  _enc__method__encore_libs_master_SDL_Vat_Vat_init_one_way(_ctx, _new_0, NULL);
  (*({ENC_DTRACE3(FIELD_WRITE, (uintptr_t)*_ctx, (uintptr_t)_this, "vat"); _this;}))._enc__field_vat = _new_0;
  ENC_DTRACE3(METHOD_EXIT, (uintptr_t)*_ctx, (uintptr_t)_this, "init");
  return UNIT;
}


future_t* _enc__method__encore_libs_master_SDL_SDL_Main_Event_Vat_init_future(pony_ctx_t** _ctx, _enc__active__encore_libs_master_SDL_SDL_Main_Event_Vat_t* _this, pony_type_t** runtimeType)
{
  pony_type_t* _enc__type_event_type = (*((_enc__active__encore_libs_master_SDL_SDL_Main_Event_Vat_t*) _this))._enc__type_event_type;
  future_t* _fut = future_mk(_ctx, ENCORE_PRIMITIVE);
  pony_gc_send((*_ctx));
  encore_trace_object((*_ctx), _fut, future_trace);
  pony_send_done((*_ctx));
  _enc__fut_msg__encore_libs_master_SDL_SDL_Main_Event_Vat_init_t* msg = ((_enc__fut_msg__encore_libs_master_SDL_SDL_Main_Event_Vat_init_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__fut_msg__encore_libs_master_SDL_SDL_Main_Event_Vat_init_t)), _ENC__FUT_MSG__encore_libs_master_SDL_SDL_Main_Event_Vat_init));
  msg->_fut = _fut;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
  return _fut;
}


void _enc__method__encore_libs_master_SDL_SDL_Main_Event_Vat_init_one_way(pony_ctx_t** _ctx, _enc__active__encore_libs_master_SDL_SDL_Main_Event_Vat_t* _this, pony_type_t** runtimeType)
{
  pony_type_t* _enc__type_event_type = (*((_enc__active__encore_libs_master_SDL_SDL_Main_Event_Vat_t*) _this))._enc__type_event_type;
  pony_gc_send((*_ctx));
  /* No tracing future for oneway msg */;
  pony_send_done((*_ctx));
  _enc__oneway_msg__encore_libs_master_SDL_SDL_Main_Event_Vat_init_t* msg = ((_enc__oneway_msg__encore_libs_master_SDL_SDL_Main_Event_Vat_init_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__oneway_msg__encore_libs_master_SDL_SDL_Main_Event_Vat_init_t)), _ENC__ONEWAY_MSG__encore_libs_master_SDL_SDL_Main_Event_Vat_init));
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
}


struct _enc__env_closure0
{
  closure_t* _enc__field_action;
  pony_type_t* _enc__type_event_type;
};


static void _enc__trace_closure0(pony_ctx_t* _ctx_arg, void* p)
{
  pony_ctx_t** _ctx = (&(_ctx_arg));
  struct _enc__env_closure0* _env = p;
  closure_t* _enc__field_action = (*((struct _enc__env_closure0*) _env))._enc__field_action;
  pony_type_t* _enc__type_event_type = (*((struct _enc__env_closure0*) _env))._enc__type_event_type;
  encore_assert(((intptr_t) _enc__type_event_type));
  encore_trace_object((*_ctx), _env->_enc__field_action, closure_trace);
}


static value_t _enc__closure_fun_closure0(pony_ctx_t** _ctx, pony_type_t** runtimeType, value_t _args[], void* _env)
{
  ENC_DTRACE1(CLOSURE_ENTRY, (uintptr_t)*_ctx);
  option_t* _enc__arg_a = (_args[0]).p;
  tuple_t* _enc__arg_b = (_args[1]).p;
  closure_t* _enc__field_action = (*((struct _enc__env_closure0*) _env))._enc__field_action;
  pony_type_t* _enc__type_event_type = (*((struct _enc__env_closure0*) _env))._enc__type_event_type;
  encore_assert(((intptr_t) _enc__type_event_type));
  value_t _tmp_0[] = {((encore_arg_t) {.p = ({ _enc__arg_b;})})};
  ENC_DTRACE2(CLOSURE_CALL, (uintptr_t)*_ctx, "action");
  int64_t _clos_1 = closure_call(_ctx, _enc__field_action, _tmp_0).i;
  ENC_DTRACE1(CLOSURE_EXIT, (uintptr_t)*_ctx);
  return ((encore_arg_t) {.i = _clos_1});
}


void* _enc__method__encore_libs_master_SDL_SDL_Main_Event_Vat_registerCallback(pony_ctx_t** _ctx, _enc__active__encore_libs_master_SDL_SDL_Main_Event_Vat_t* _this, pony_type_t** runtimeType, closure_t* _enc__arg_action)
{
  ENC_DTRACE3(METHOD_ENTRY, (uintptr_t)*_ctx, (uintptr_t)_this, "registerCallback");
  pony_type_t* _enc__type_event_type = (*((_enc__active__encore_libs_master_SDL_SDL_Main_Event_Vat_t*) _this))._enc__type_event_type;
  /* this.vat.registerPost(\(a : Maybe (SDL_Main, event_type), 
                        b : (SDL_Main, event_type)) -> action(b)) */;
  ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "vat");
  _enc__active__encore_libs_master_SDL_Vat_Vat_t* _fieldacc_1 = (*_this)._enc__field_vat;
  check_receiver(_fieldacc_1, ".", "this.vat", "registerPost", "\"./encore-libs-master/SDL/SDL_Main.enc\" (line 352, column 5)");
  struct _enc__env_closure0* _enc__env_closure0 = encore_alloc((*_ctx), sizeof(struct _enc__env_closure0));
  (*_enc__env_closure0)._enc__field_action = _enc__arg_action;
  (*_enc__env_closure0)._enc__type_event_type = _enc__type_event_type;
  closure_t* _tmp_2 = closure_mk(_ctx, _enc__closure_fun_closure0, _enc__env_closure0, _enc__trace_closure0, NULL);
  pony_type_t* _tmp_3[] = {};
  future_t* _fut_0 = _enc__method__encore_libs_master_SDL_Vat_Vat_registerPost_future(_ctx, _fieldacc_1, NULL, ((closure_t*) _tmp_2));
  ENC_DTRACE3(METHOD_EXIT, (uintptr_t)*_ctx, (uintptr_t)_this, "registerCallback");
  return UNIT;
}


future_t* _enc__method__encore_libs_master_SDL_SDL_Main_Event_Vat_registerCallback_future(pony_ctx_t** _ctx, _enc__active__encore_libs_master_SDL_SDL_Main_Event_Vat_t* _this, pony_type_t** runtimeType, closure_t* _enc__arg_action)
{
  pony_type_t* _enc__type_event_type = (*((_enc__active__encore_libs_master_SDL_SDL_Main_Event_Vat_t*) _this))._enc__type_event_type;
  future_t* _fut = future_mk(_ctx, ENCORE_PRIMITIVE);
  pony_gc_send((*_ctx));
  encore_trace_object((*_ctx), _enc__arg_action, closure_trace);
  encore_trace_object((*_ctx), _fut, future_trace);
  pony_send_done((*_ctx));
  _enc__fut_msg__encore_libs_master_SDL_SDL_Main_Event_Vat_registerCallback_t* msg = ((_enc__fut_msg__encore_libs_master_SDL_SDL_Main_Event_Vat_registerCallback_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__fut_msg__encore_libs_master_SDL_SDL_Main_Event_Vat_registerCallback_t)), _ENC__FUT_MSG__encore_libs_master_SDL_SDL_Main_Event_Vat_registerCallback));
  msg->f1 = _enc__arg_action;
  msg->_fut = _fut;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
  return _fut;
}


void _enc__method__encore_libs_master_SDL_SDL_Main_Event_Vat_registerCallback_one_way(pony_ctx_t** _ctx, _enc__active__encore_libs_master_SDL_SDL_Main_Event_Vat_t* _this, pony_type_t** runtimeType, closure_t* _enc__arg_action)
{
  pony_type_t* _enc__type_event_type = (*((_enc__active__encore_libs_master_SDL_SDL_Main_Event_Vat_t*) _this))._enc__type_event_type;
  pony_gc_send((*_ctx));
  encore_trace_object((*_ctx), _enc__arg_action, closure_trace);
  /* No tracing future for oneway msg */;
  pony_send_done((*_ctx));
  _enc__oneway_msg__encore_libs_master_SDL_SDL_Main_Event_Vat_registerCallback_t* msg = ((_enc__oneway_msg__encore_libs_master_SDL_SDL_Main_Event_Vat_registerCallback_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__oneway_msg__encore_libs_master_SDL_SDL_Main_Event_Vat_registerCallback_t)), _ENC__ONEWAY_MSG__encore_libs_master_SDL_SDL_Main_Event_Vat_registerCallback));
  msg->f1 = _enc__arg_action;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
}


void* _enc__method__encore_libs_master_SDL_SDL_Main_Event_Vat_pushEvent(pony_ctx_t** _ctx, _enc__active__encore_libs_master_SDL_SDL_Main_Event_Vat_t* _this, pony_type_t** runtimeType, tuple_t* _enc__arg_event)
{
  ENC_DTRACE3(METHOD_ENTRY, (uintptr_t)*_ctx, (uintptr_t)_this, "pushEvent");
  pony_type_t* _enc__type_event_type = (*((_enc__active__encore_libs_master_SDL_SDL_Main_Event_Vat_t*) _this))._enc__type_event_type;
  /* this.vat!write(event) */;
  ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "vat");
  _enc__active__encore_libs_master_SDL_Vat_Vat_t* _fieldacc_0 = (*_this)._enc__field_vat;
  check_receiver(_fieldacc_0, " ! ", "this.vat", "write", "\"./encore-libs-master/SDL/SDL_Main.enc\" (line 358, column 13)");
  pony_type_t* _tmp_1[] = {};
  _enc__method__encore_libs_master_SDL_Vat_Vat_write_one_way(_ctx, _fieldacc_0, NULL, ((encore_arg_t) {.p = _enc__arg_event}));
  ENC_DTRACE3(METHOD_EXIT, (uintptr_t)*_ctx, (uintptr_t)_this, "pushEvent");
  return UNIT;
}


future_t* _enc__method__encore_libs_master_SDL_SDL_Main_Event_Vat_pushEvent_future(pony_ctx_t** _ctx, _enc__active__encore_libs_master_SDL_SDL_Main_Event_Vat_t* _this, pony_type_t** runtimeType, tuple_t* _enc__arg_event)
{
  pony_type_t* _enc__type_event_type = (*((_enc__active__encore_libs_master_SDL_SDL_Main_Event_Vat_t*) _this))._enc__type_event_type;
  future_t* _fut = future_mk(_ctx, ENCORE_PRIMITIVE);
  pony_gc_send((*_ctx));
  encore_trace_object((*_ctx), _enc__arg_event, tuple_trace);
  encore_trace_object((*_ctx), _fut, future_trace);
  pony_send_done((*_ctx));
  _enc__fut_msg__encore_libs_master_SDL_SDL_Main_Event_Vat_pushEvent_t* msg = ((_enc__fut_msg__encore_libs_master_SDL_SDL_Main_Event_Vat_pushEvent_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__fut_msg__encore_libs_master_SDL_SDL_Main_Event_Vat_pushEvent_t)), _ENC__FUT_MSG__encore_libs_master_SDL_SDL_Main_Event_Vat_pushEvent));
  msg->f1 = _enc__arg_event;
  msg->_fut = _fut;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
  return _fut;
}


void _enc__method__encore_libs_master_SDL_SDL_Main_Event_Vat_pushEvent_one_way(pony_ctx_t** _ctx, _enc__active__encore_libs_master_SDL_SDL_Main_Event_Vat_t* _this, pony_type_t** runtimeType, tuple_t* _enc__arg_event)
{
  pony_type_t* _enc__type_event_type = (*((_enc__active__encore_libs_master_SDL_SDL_Main_Event_Vat_t*) _this))._enc__type_event_type;
  pony_gc_send((*_ctx));
  encore_trace_object((*_ctx), _enc__arg_event, tuple_trace);
  /* No tracing future for oneway msg */;
  pony_send_done((*_ctx));
  _enc__oneway_msg__encore_libs_master_SDL_SDL_Main_Event_Vat_pushEvent_t* msg = ((_enc__oneway_msg__encore_libs_master_SDL_SDL_Main_Event_Vat_pushEvent_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__oneway_msg__encore_libs_master_SDL_SDL_Main_Event_Vat_pushEvent_t)), _ENC__ONEWAY_MSG__encore_libs_master_SDL_SDL_Main_Event_Vat_pushEvent));
  msg->f1 = _enc__arg_event;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
}


static void _enc__dispatch__encore_libs_master_SDL_SDL_Main_Event_Vat(pony_ctx_t** _ctx, pony_actor_t* _a, pony_msg_t* _m)
{
  _enc__active__encore_libs_master_SDL_SDL_Main_Event_Vat_t* _this = ((_enc__active__encore_libs_master_SDL_SDL_Main_Event_Vat_t*) _a);
  pony_type_t* _enc__type_event_type = _this->_enc__type_event_type;
  switch (_m->id)
  {
    case _ENC__FUT_MSG__encore_libs_master_SDL_SDL_Main_Event_Vat_init:
    {
      future_t* _fut = ((encore_fut_msg_t*) _m)->_fut;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      encore_trace_object((*_ctx), _fut, future_type.trace);
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      pony_type_t* methodTypeVars[] = {};
      future_fulfil(_ctx, _fut, ((encore_arg_t) {.p = _enc__method__encore_libs_master_SDL_SDL_Main_Event_Vat_init(_ctx, _this, methodTypeVars)}));
      break;
    }
    case _ENC__ONEWAY_MSG__encore_libs_master_SDL_SDL_Main_Event_Vat_init:
    {
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      /* Not tracing the future in a oneWay send */;
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      pony_type_t* methodTypeVars[] = {};
      _enc__method__encore_libs_master_SDL_SDL_Main_Event_Vat_init(_ctx, _this, methodTypeVars);
      break;
    }
    case _ENC__FUT_MSG__encore_libs_master_SDL_SDL_Main_Event_Vat_registerCallback:
    {
      future_t* _fut = ((encore_fut_msg_t*) _m)->_fut;
      closure_t* _enc__arg_action = ((_enc__fut_msg__encore_libs_master_SDL_SDL_Main_Event_Vat_registerCallback_t*) _m)->f1;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      encore_trace_object((*_ctx), _enc__arg_action, closure_trace);
      encore_trace_object((*_ctx), _fut, future_type.trace);
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      pony_type_t* methodTypeVars[] = {};
      future_fulfil(_ctx, _fut, ((encore_arg_t) {.p = _enc__method__encore_libs_master_SDL_SDL_Main_Event_Vat_registerCallback(_ctx, _this, methodTypeVars, _enc__arg_action)}));
      break;
    }
    case _ENC__ONEWAY_MSG__encore_libs_master_SDL_SDL_Main_Event_Vat_registerCallback:
    {
      closure_t* _enc__arg_action = ((_enc__oneway_msg__encore_libs_master_SDL_SDL_Main_Event_Vat_registerCallback_t*) _m)->f1;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      encore_trace_object((*_ctx), _enc__arg_action, closure_trace);
      /* Not tracing the future in a oneWay send */;
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      pony_type_t* methodTypeVars[] = {};
      _enc__method__encore_libs_master_SDL_SDL_Main_Event_Vat_registerCallback(_ctx, _this, methodTypeVars, _enc__arg_action);
      break;
    }
    case _ENC__FUT_MSG__encore_libs_master_SDL_SDL_Main_Event_Vat_pushEvent:
    {
      future_t* _fut = ((encore_fut_msg_t*) _m)->_fut;
      tuple_t* _enc__arg_event = ((_enc__fut_msg__encore_libs_master_SDL_SDL_Main_Event_Vat_pushEvent_t*) _m)->f1;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      encore_trace_object((*_ctx), _enc__arg_event, tuple_trace);
      encore_trace_object((*_ctx), _fut, future_type.trace);
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      pony_type_t* methodTypeVars[] = {};
      future_fulfil(_ctx, _fut, ((encore_arg_t) {.p = _enc__method__encore_libs_master_SDL_SDL_Main_Event_Vat_pushEvent(_ctx, _this, methodTypeVars, _enc__arg_event)}));
      break;
    }
    case _ENC__ONEWAY_MSG__encore_libs_master_SDL_SDL_Main_Event_Vat_pushEvent:
    {
      tuple_t* _enc__arg_event = ((_enc__oneway_msg__encore_libs_master_SDL_SDL_Main_Event_Vat_pushEvent_t*) _m)->f1;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      encore_trace_object((*_ctx), _enc__arg_event, tuple_trace);
      /* Not tracing the future in a oneWay send */;
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      pony_type_t* methodTypeVars[] = {};
      _enc__method__encore_libs_master_SDL_SDL_Main_Event_Vat_pushEvent(_ctx, _this, methodTypeVars, _enc__arg_event);
      break;
    }
    default:
    {
      printf("error, got invalid id: %zd", _m->id);
    }
  };
}


pony_type_t _enc__active__encore_libs_master_SDL_SDL_Main_Event_Vat_type = {.id=_ENC__ID__encore_libs_master_SDL_SDL_Main_Event_Vat, .size=sizeof(_enc__active__encore_libs_master_SDL_SDL_Main_Event_Vat_t), .trace=_enc__trace__encore_libs_master_SDL_SDL_Main_Event_Vat, .dispatch=_enc__dispatch__encore_libs_master_SDL_SDL_Main_Event_Vat, .vtable=trait_method_selector};
