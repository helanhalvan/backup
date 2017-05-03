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


struct _enc__active_Main_t
{
  encore_actor_t _enc__actor;
};


void _enc__type_init_Main(_enc__active_Main_t* this, ... )
{
  va_list params;
  va_start(params, this);
  va_end(params);
}


void _enc__trace_Main(pony_ctx_t* _ctx_arg, void* p)
{
  pony_ctx_t** _ctx = (&(_ctx_arg));
  _enc__active_Main_t* _this = p;
}


_enc__active_Main_t* _enc__constructor_Main(pony_ctx_t** _ctx)
{
  _enc__active_Main_t* this = ((_enc__active_Main_t*) encore_create((*_ctx), (&(_enc__active_Main_type))));
  return this;
}


void* _enc__method_Main__init(pony_ctx_t** _ctx, _enc__active_Main_t* _this)
{
  UNIT;
  return UNIT;
}


struct _enc__env_closure2
{
  _enc__active_MouseFiddler_t* _enc__field_mauser;
};


static void _enc__trace_closure2(pony_ctx_t* _ctx_arg, void* p)
{
  pony_ctx_t** _ctx = (&(_ctx_arg));
  struct _enc__env_closure2* _this = p;
  pony_traceactor((*_ctx), ((pony_actor_t*) _this->_enc__field_mauser));
}


static value_t _enc__closure_fun_closure2(pony_ctx_t** _ctx, pony_type_t** runtimeType, value_t _args[], void* _env)
{
  tuple_t* _enc__arg_a = (_args[0]).p;
  _enc__active_MouseFiddler_t* _enc__field_mauser = (*((struct _enc__env_closure2*) _env))._enc__field_mauser;
  /* mauser!draw(a) */;
  check_receiver(_enc__field_mauser, " ! ", "mauser", "draw", "\"serious.enc\" (line 83, column 56)");
  _enc__method_MouseFiddler_draw_one_way(_ctx, _enc__field_mauser, _enc__arg_a);
  /* true */;
  int64_t _literal_0 = 1/*True*/;
  return ((encore_arg_t) {.i = _literal_0});
}


struct _enc__env_closure1
{
  _enc__active_MouseFiddler_t* _enc__field_mauser;
};


static void _enc__trace_closure1(pony_ctx_t* _ctx_arg, void* p)
{
  pony_ctx_t** _ctx = (&(_ctx_arg));
  struct _enc__env_closure1* _this = p;
  pony_traceactor((*_ctx), ((pony_actor_t*) _this->_enc__field_mauser));
}


static value_t _enc__closure_fun_closure1(pony_ctx_t** _ctx, pony_type_t** runtimeType, value_t _args[], void* _env)
{
  tuple_t* _enc__arg_a = (_args[0]).p;
  _enc__active_MouseFiddler_t* _enc__field_mauser = (*((struct _enc__env_closure1*) _env))._enc__field_mauser;
  /* mauser!key(a) */;
  check_receiver(_enc__field_mauser, " ! ", "mauser", "key", "\"serious.enc\" (line 80, column 53)");
  _enc__method_MouseFiddler_key_one_way(_ctx, _enc__field_mauser, _enc__arg_a);
  /* true */;
  int64_t _literal_0 = 1/*True*/;
  return ((encore_arg_t) {.i = _literal_0});
}


struct _enc__env_closure0
{
  _enc__active_MouseFiddler_t* _enc__field_mauser;
};


static void _enc__trace_closure0(pony_ctx_t* _ctx_arg, void* p)
{
  pony_ctx_t** _ctx = (&(_ctx_arg));
  struct _enc__env_closure0* _this = p;
  pony_traceactor((*_ctx), ((pony_actor_t*) _this->_enc__field_mauser));
}


static value_t _enc__closure_fun_closure0(pony_ctx_t** _ctx, pony_type_t** runtimeType, value_t _args[], void* _env)
{
  tuple_t* _enc__arg_a = (_args[0]).p;
  _enc__active_MouseFiddler_t* _enc__field_mauser = (*((struct _enc__env_closure0*) _env))._enc__field_mauser;
  /* mauser!down(a) */;
  check_receiver(_enc__field_mauser, " ! ", "mauser", "down", "\"serious.enc\" (line 77, column 56)");
  _enc__method_MouseFiddler_down_one_way(_ctx, _enc__field_mauser, _enc__arg_a);
  /* true */;
  int64_t _literal_0 = 1/*True*/;
  return ((encore_arg_t) {.i = _literal_0});
}


void* _enc__method_Main_main(pony_ctx_t** _ctx, _enc__active_Main_t* _this, array_t* _argv)
{
  /* let sdl_main = new SDL_Main(500, 500) */;
  /* sdl_main = new SDL_Main(500, 500) */;
  _enc__active_SDL_Main_t* _new_0 = _enc__constructor_SDL_Main(_ctx);
  int64_t _literal_1 = 500;
  int64_t _literal_2 = 500;
  _enc__type_init_SDL_Main(_new_0);
  _enc__method_SDL_Main__init_one_way(_ctx, _new_0, _literal_1, _literal_2);
  _enc__active_SDL_Main_t* _sdl_main_3 = _new_0;
  /* let sdl_handler = new SDL_Event_Handler() */;
  /* sdl_handler = new SDL_Event_Handler() */;
  _enc__active_SDL_Event_Handler_t* _new_4 = _enc__constructor_SDL_Event_Handler(_ctx);
  _enc__type_init_SDL_Event_Handler(_new_4);
  _enc__method_SDL_Event_Handler__init_one_way(_ctx, _new_4);
  _enc__active_SDL_Event_Handler_t* _sdl_handler_5 = _new_4;
  /* let mauser = new MouseFiddler() */;
  /* mauser = new MouseFiddler() */;
  _enc__active_MouseFiddler_t* _new_6 = _enc__constructor_MouseFiddler(_ctx);
  _enc__type_init_MouseFiddler(_new_6);
  _enc__method_MouseFiddler__init_one_way(_ctx, _new_6);
  _enc__active_MouseFiddler_t* _mauser_7 = _new_6;
  /* get sdl_main.clearAll() */;
  check_receiver(_sdl_main_3, ".", "sdl_main", "clearAll", "\"serious.enc\" (line 72, column 9)");
  future_t* _fut_8 = _enc__method_SDL_Main_clearAll_future(_ctx, _sdl_main_3);
  void* _tmp_9 = future_get_actor(_ctx, _fut_8).p;
  /* get sdl_main.setRenderColor(new ColorRGBA(254, 254, 254, 254)) */;
  check_receiver(_sdl_main_3, ".", "sdl_main", "setRenderColor", "\"serious.enc\" (line 73, column 9)");
  _enc__passive_ColorRGBA_t* _new_11 = _enc__constructor_ColorRGBA(_ctx);
  int64_t _literal_12 = 254;
  int64_t _literal_13 = 254;
  int64_t _literal_14 = 254;
  int64_t _literal_15 = 254;
  _enc__type_init_ColorRGBA(_new_11);
  _enc__method_ColorRGBA__init(_ctx, _new_11, _literal_12, _literal_13, _literal_14, _literal_15);
  future_t* _fut_10 = _enc__method_SDL_Main_setRenderColor_future(_ctx, _sdl_main_3, _new_11);
  void* _tmp_16 = future_get_actor(_ctx, _fut_10).p;
  /* get sdl_main.fillRectangle(new Rectangle(0, 0, 500, 500)) */;
  check_receiver(_sdl_main_3, ".", "sdl_main", "fillRectangle", "\"serious.enc\" (line 74, column 9)");
  _enc__passive_Rectangle_t* _new_18 = _enc__constructor_Rectangle(_ctx);
  int64_t _literal_19 = 0;
  int64_t _literal_20 = 0;
  int64_t _literal_21 = 500;
  int64_t _literal_22 = 500;
  _enc__type_init_Rectangle(_new_18);
  _enc__method_Rectangle__init(_ctx, _new_18, _literal_19, _literal_20, _literal_21, _literal_22);
  future_t* _fut_17 = _enc__method_SDL_Main_fillRectangle_future(_ctx, _sdl_main_3, _new_18);
  void* _tmp_23 = future_get_actor(_ctx, _fut_17).p;
  /* get sdl_main.refresh() */;
  check_receiver(_sdl_main_3, ".", "sdl_main", "refresh", "\"serious.enc\" (line 75, column 9)");
  future_t* _fut_24 = _enc__method_SDL_Main_refresh_future(_ctx, _sdl_main_3);
  void* _tmp_25 = future_get_actor(_ctx, _fut_24).p;
  /* sdl_handler.addMouseButtonCallback(\(a : (SDL_Main, SDL_MouseButtonEvent)) -> {mauser!down(a);
                                                                               true}) */;
  check_receiver(_sdl_handler_5, ".", "sdl_handler", "addMouseButtonCallback", "\"serious.enc\" (line 76, column 5)");
  struct _enc__env_closure0* _enc__env_closure0 = encore_alloc((*_ctx), sizeof(struct _enc__env_closure0));
  (*_enc__env_closure0)._enc__field_mauser = _mauser_7;
  closure_t* _tmp_27 = closure_mk(_ctx, _enc__closure_fun_closure0, _enc__env_closure0, _enc__trace_closure0, NULL);
  future_t* _fut_26 = _enc__method_SDL_Event_Handler_addMouseButtonCallback_future(_ctx, _sdl_handler_5, _tmp_27);
  /* sdl_handler.addKeyboardCallback(\(a : (SDL_Main, SDL_KeyboardEvent)) -> {mauser!key(a);
                                                                         true}) */;
  check_receiver(_sdl_handler_5, ".", "sdl_handler", "addKeyboardCallback", "\"serious.enc\" (line 79, column 5)");
  struct _enc__env_closure1* _enc__env_closure1 = encore_alloc((*_ctx), sizeof(struct _enc__env_closure1));
  (*_enc__env_closure1)._enc__field_mauser = _mauser_7;
  closure_t* _tmp_29 = closure_mk(_ctx, _enc__closure_fun_closure1, _enc__env_closure1, _enc__trace_closure1, NULL);
  future_t* _fut_28 = _enc__method_SDL_Event_Handler_addKeyboardCallback_future(_ctx, _sdl_handler_5, _tmp_29);
  /* sdl_handler.addMotionCallback(\(a : (SDL_Main, SDL_MouseMotionEvent)) -> {mauser!draw(a);
                                                                          true}) */;
  check_receiver(_sdl_handler_5, ".", "sdl_handler", "addMotionCallback", "\"serious.enc\" (line 82, column 5)");
  struct _enc__env_closure2* _enc__env_closure2 = encore_alloc((*_ctx), sizeof(struct _enc__env_closure2));
  (*_enc__env_closure2)._enc__field_mauser = _mauser_7;
  closure_t* _tmp_31 = closure_mk(_ctx, _enc__closure_fun_closure2, _enc__env_closure2, _enc__trace_closure2, NULL);
  future_t* _fut_30 = _enc__method_SDL_Event_Handler_addMotionCallback_future(_ctx, _sdl_handler_5, _tmp_31);
  /* while true
  {get sdl_main.refresh();
   sdl_main.waitForEvent(sdl_handler, 50)} */;
  future_t* _while_37;
  while (({int64_t _literal_32 = 1/*True*/; _literal_32;}))
  {
    /* get sdl_main.refresh() */;
    check_receiver(_sdl_main_3, ".", "sdl_main", "refresh", "\"serious.enc\" (line 86, column 11)");
    future_t* _fut_33 = _enc__method_SDL_Main_refresh_future(_ctx, _sdl_main_3);
    void* _tmp_34 = future_get_actor(_ctx, _fut_33).p;
    /* sdl_main.waitForEvent(sdl_handler, 50) */;
    check_receiver(_sdl_main_3, ".", "sdl_main", "waitForEvent", "\"serious.enc\" (line 87, column 7)");
    int64_t _literal_36 = 50;
    future_t* _fut_35 = _enc__method_SDL_Main_waitForEvent_future(_ctx, _sdl_main_3, _sdl_handler_5, _literal_36);
    _while_37 = _fut_35;
  };
  return UNIT;
}


future_t* _enc__method_Main__init_future(pony_ctx_t** _ctx, _enc__active_Main_t* _this)
{
  future_t* _fut = future_mk(_ctx, ENCORE_PRIMITIVE);
  pony_gc_send((*_ctx));
  pony_traceobject((*_ctx), _fut, future_trace);
  pony_send_done((*_ctx));
  _enc__fut_msg_Main__init_t* msg = ((_enc__fut_msg_Main__init_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__fut_msg_Main__init_t)), _ENC__FUT_MSG_Main__init));
  msg->_fut = _fut;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
  return _fut;
}


future_t* _enc__method_Main_main_future(pony_ctx_t** _ctx, _enc__active_Main_t* _this)
{
  future_t* _fut = future_mk(_ctx, ENCORE_PRIMITIVE);
  pony_gc_send((*_ctx));
  pony_traceobject((*_ctx), _fut, future_trace);
  pony_send_done((*_ctx));
  _enc__fut_msg_Main_main_t* msg = ((_enc__fut_msg_Main_main_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__fut_msg_Main_main_t)), _ENC__FUT_MSG_Main_main));
  msg->_fut = _fut;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
  return _fut;
}


void _enc__method_Main__init_one_way(pony_ctx_t** _ctx, _enc__active_Main_t* _this)
{
  pony_gc_send((*_ctx));
  /* No tracing future for oneway msg */;
  pony_send_done((*_ctx));
  _enc__oneway_msg_Main__init_t* msg = ((_enc__oneway_msg_Main__init_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__oneway_msg_Main__init_t)), _ENC__ONEWAY_MSG_Main__init));
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
}


void _enc__method_Main_main_one_way(pony_ctx_t** _ctx, _enc__active_Main_t* _this)
{
  pony_gc_send((*_ctx));
  /* No tracing future for oneway msg */;
  pony_send_done((*_ctx));
  _enc__oneway_msg_Main_main_t* msg = ((_enc__oneway_msg_Main_main_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__oneway_msg_Main_main_t)), _ENC__ONEWAY_MSG_Main_main));
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
}


static void _enc__dispatch_Main(pony_ctx_t** _ctx, pony_actor_t* _a, pony_msg_t* _m)
{
  _enc__active_Main_t* _this = ((_enc__active_Main_t*) _a);
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
    case _ENC__MSG_MAIN:
    {
      pony_main_msg_t* msg = ((pony_main_msg_t*) _m);
      _enc__method_Main_main(_ctx, ((_enc__active_Main_t*) _a), _init_argv(_ctx, msg->argc, msg->argv));
      break;
    }
    case _ENC__FUT_MSG_Main__init:
    {
      future_t* _fut = ((encore_fut_msg_t*) _m)->_fut;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      pony_traceobject((*_ctx), _fut, future_type.trace);
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      future_fulfil(_ctx, _fut, ((encore_arg_t) {.p = _enc__method_Main__init(_ctx, _this)}));
      break;
    }
    case _ENC__ONEWAY_MSG_Main__init:
    {
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      /* Not tracing the future in a oneWay send */;
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      _enc__method_Main__init(_ctx, _this);
      break;
    }
    default:
    {
      printf("error, got invalid id: %zd", _m->id);
    }
  };
}


pony_type_t _enc__active_Main_type = {.id=_ENC__ID_Main, .size=sizeof(_enc__active_Main_t), .trace=_enc__trace_Main, .dispatch=_enc__dispatch_Main, .vtable=trait_method_selector};
