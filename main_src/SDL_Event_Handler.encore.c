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


struct _enc__active__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_t
{
  encore_actor_t _enc__actor;
  _enc__active__encore_libs_master_SDL_SDL_Main_Event_Vat_t* _enc__field_mouse_button_vat;
  _enc__active__encore_libs_master_SDL_SDL_Main_Event_Vat_t* _enc__field_mouse_motion_vat;
  _enc__active__encore_libs_master_SDL_SDL_Main_Event_Vat_t* _enc__field_keyboard_vat;
};


void _enc__type_init__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler(_enc__active__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_t* _this, ... )
{
  va_list params;
  va_start(params, _this);
  va_end(params);
}


void _enc__trace__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler(pony_ctx_t* _ctx_arg, void* p)
{
  pony_ctx_t** _ctx = (&(_ctx_arg));
  _enc__active__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_t* _this = p;
  _enc__active__encore_libs_master_SDL_SDL_Main_Event_Vat_t* _enc__field_mouse_button_vat = _this->_enc__field_mouse_button_vat;
  encore_trace_actor((*_ctx), ((pony_actor_t*) _enc__field_mouse_button_vat));
  _enc__active__encore_libs_master_SDL_SDL_Main_Event_Vat_t* _enc__field_mouse_motion_vat = _this->_enc__field_mouse_motion_vat;
  encore_trace_actor((*_ctx), ((pony_actor_t*) _enc__field_mouse_motion_vat));
  _enc__active__encore_libs_master_SDL_SDL_Main_Event_Vat_t* _enc__field_keyboard_vat = _this->_enc__field_keyboard_vat;
  encore_trace_actor((*_ctx), ((pony_actor_t*) _enc__field_keyboard_vat));
}


_enc__active__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_t* _enc__constructor__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler(pony_ctx_t** _ctx, pony_type_t** runtimeType)
{
  _enc__active__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_t* _this = ((_enc__active__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_t*) encore_create((*_ctx), (&(_enc__active__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_type))));
  return _this;
}


void* _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_init(pony_ctx_t** _ctx, _enc__active__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_t* _this, pony_type_t** runtimeType)
{
  ENC_DTRACE3(METHOD_ENTRY, (uintptr_t)*_ctx, (uintptr_t)_this, "init");
  /* this.mouse_button_vat = new Event_Vat<SDL_MouseButtonEvent>() */;
  _enc__active__encore_libs_master_SDL_SDL_Main_Event_Vat_t* _new_0 = _enc__constructor__encore_libs_master_SDL_SDL_Main_Event_Vat(_ctx, NULL);
  pony_type_t* _tmp_1[] = {};
  _enc__type_init__encore_libs_master_SDL_SDL_Main_Event_Vat(_new_0, (&(_enc__passive__encore_libs_master_SDL_SDL_Events_SDL_MouseButtonEvent_type)));
  _enc__method__encore_libs_master_SDL_SDL_Main_Event_Vat_init_one_way(_ctx, _new_0, NULL);
  (*({ENC_DTRACE3(FIELD_WRITE, (uintptr_t)*_ctx, (uintptr_t)_this, "mouse_button_vat"); _this;}))._enc__field_mouse_button_vat = _new_0;
  /* this.keyboard_vat = new Event_Vat<SDL_KeyboardEvent>() */;
  _enc__active__encore_libs_master_SDL_SDL_Main_Event_Vat_t* _new_2 = _enc__constructor__encore_libs_master_SDL_SDL_Main_Event_Vat(_ctx, NULL);
  pony_type_t* _tmp_3[] = {};
  _enc__type_init__encore_libs_master_SDL_SDL_Main_Event_Vat(_new_2, (&(_enc__passive__encore_libs_master_SDL_SDL_Events_SDL_KeyboardEvent_type)));
  _enc__method__encore_libs_master_SDL_SDL_Main_Event_Vat_init_one_way(_ctx, _new_2, NULL);
  (*({ENC_DTRACE3(FIELD_WRITE, (uintptr_t)*_ctx, (uintptr_t)_this, "keyboard_vat"); _this;}))._enc__field_keyboard_vat = _new_2;
  /* this.mouse_motion_vat = new Event_Vat<SDL_MouseMotionEvent>() */;
  _enc__active__encore_libs_master_SDL_SDL_Main_Event_Vat_t* _new_4 = _enc__constructor__encore_libs_master_SDL_SDL_Main_Event_Vat(_ctx, NULL);
  pony_type_t* _tmp_5[] = {};
  _enc__type_init__encore_libs_master_SDL_SDL_Main_Event_Vat(_new_4, (&(_enc__passive__encore_libs_master_SDL_SDL_Events_SDL_MouseMotionEvent_type)));
  _enc__method__encore_libs_master_SDL_SDL_Main_Event_Vat_init_one_way(_ctx, _new_4, NULL);
  (*({ENC_DTRACE3(FIELD_WRITE, (uintptr_t)*_ctx, (uintptr_t)_this, "mouse_motion_vat"); _this;}))._enc__field_mouse_motion_vat = _new_4;
  ENC_DTRACE3(METHOD_EXIT, (uintptr_t)*_ctx, (uintptr_t)_this, "init");
  return UNIT;
}


future_t* _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_init_future(pony_ctx_t** _ctx, _enc__active__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_t* _this, pony_type_t** runtimeType)
{
  future_t* _fut = future_mk(_ctx, ENCORE_PRIMITIVE);
  pony_gc_send((*_ctx));
  encore_trace_object((*_ctx), _fut, future_trace);
  pony_send_done((*_ctx));
  _enc__fut_msg__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_init_t* msg = ((_enc__fut_msg__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_init_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__fut_msg__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_init_t)), _ENC__FUT_MSG__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_init));
  msg->_fut = _fut;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
  return _fut;
}


void _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_init_one_way(pony_ctx_t** _ctx, _enc__active__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_t* _this, pony_type_t** runtimeType)
{
  pony_gc_send((*_ctx));
  /* No tracing future for oneway msg */;
  pony_send_done((*_ctx));
  _enc__oneway_msg__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_init_t* msg = ((_enc__oneway_msg__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_init_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__oneway_msg__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_init_t)), _ENC__ONEWAY_MSG__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_init));
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
}


void* _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_addMouseButtonCallback(pony_ctx_t** _ctx, _enc__active__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_t* _this, pony_type_t** runtimeType, closure_t* _enc__arg_action)
{
  ENC_DTRACE3(METHOD_ENTRY, (uintptr_t)*_ctx, (uintptr_t)_this, "addMouseButtonCallback");
  /* this.mouse_button_vat.registerCallback(action) */;
  ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "mouse_button_vat");
  _enc__active__encore_libs_master_SDL_SDL_Main_Event_Vat_t* _fieldacc_1 = (*_this)._enc__field_mouse_button_vat;
  check_receiver(_fieldacc_1, ".", "this.mouse_button_vat", "registerCallback", "\"./encore-libs-master/SDL/SDL_Main.enc\" (line 380, column 5)");
  pony_type_t* _tmp_2[] = {};
  future_t* _fut_0 = _enc__method__encore_libs_master_SDL_SDL_Main_Event_Vat_registerCallback_future(_ctx, _fieldacc_1, NULL, ((closure_t*) _enc__arg_action));
  ENC_DTRACE3(METHOD_EXIT, (uintptr_t)*_ctx, (uintptr_t)_this, "addMouseButtonCallback");
  return UNIT;
}


future_t* _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_addMouseButtonCallback_future(pony_ctx_t** _ctx, _enc__active__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_t* _this, pony_type_t** runtimeType, closure_t* _enc__arg_action)
{
  future_t* _fut = future_mk(_ctx, ENCORE_PRIMITIVE);
  pony_gc_send((*_ctx));
  encore_trace_object((*_ctx), _enc__arg_action, closure_trace);
  encore_trace_object((*_ctx), _fut, future_trace);
  pony_send_done((*_ctx));
  _enc__fut_msg__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_addMouseButtonCallback_t* msg = ((_enc__fut_msg__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_addMouseButtonCallback_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__fut_msg__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_addMouseButtonCallback_t)), _ENC__FUT_MSG__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_addMouseButtonCallback));
  msg->f1 = _enc__arg_action;
  msg->_fut = _fut;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
  return _fut;
}


void _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_addMouseButtonCallback_one_way(pony_ctx_t** _ctx, _enc__active__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_t* _this, pony_type_t** runtimeType, closure_t* _enc__arg_action)
{
  pony_gc_send((*_ctx));
  encore_trace_object((*_ctx), _enc__arg_action, closure_trace);
  /* No tracing future for oneway msg */;
  pony_send_done((*_ctx));
  _enc__oneway_msg__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_addMouseButtonCallback_t* msg = ((_enc__oneway_msg__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_addMouseButtonCallback_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__oneway_msg__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_addMouseButtonCallback_t)), _ENC__ONEWAY_MSG__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_addMouseButtonCallback));
  msg->f1 = _enc__arg_action;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
}


void* _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_addKeyboardCallback(pony_ctx_t** _ctx, _enc__active__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_t* _this, pony_type_t** runtimeType, closure_t* _enc__arg_action)
{
  ENC_DTRACE3(METHOD_ENTRY, (uintptr_t)*_ctx, (uintptr_t)_this, "addKeyboardCallback");
  /* this.keyboard_vat.registerCallback(action) */;
  ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "keyboard_vat");
  _enc__active__encore_libs_master_SDL_SDL_Main_Event_Vat_t* _fieldacc_1 = (*_this)._enc__field_keyboard_vat;
  check_receiver(_fieldacc_1, ".", "this.keyboard_vat", "registerCallback", "\"./encore-libs-master/SDL/SDL_Main.enc\" (line 385, column 5)");
  pony_type_t* _tmp_2[] = {};
  future_t* _fut_0 = _enc__method__encore_libs_master_SDL_SDL_Main_Event_Vat_registerCallback_future(_ctx, _fieldacc_1, NULL, ((closure_t*) _enc__arg_action));
  ENC_DTRACE3(METHOD_EXIT, (uintptr_t)*_ctx, (uintptr_t)_this, "addKeyboardCallback");
  return UNIT;
}


future_t* _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_addKeyboardCallback_future(pony_ctx_t** _ctx, _enc__active__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_t* _this, pony_type_t** runtimeType, closure_t* _enc__arg_action)
{
  future_t* _fut = future_mk(_ctx, ENCORE_PRIMITIVE);
  pony_gc_send((*_ctx));
  encore_trace_object((*_ctx), _enc__arg_action, closure_trace);
  encore_trace_object((*_ctx), _fut, future_trace);
  pony_send_done((*_ctx));
  _enc__fut_msg__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_addKeyboardCallback_t* msg = ((_enc__fut_msg__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_addKeyboardCallback_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__fut_msg__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_addKeyboardCallback_t)), _ENC__FUT_MSG__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_addKeyboardCallback));
  msg->f1 = _enc__arg_action;
  msg->_fut = _fut;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
  return _fut;
}


void _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_addKeyboardCallback_one_way(pony_ctx_t** _ctx, _enc__active__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_t* _this, pony_type_t** runtimeType, closure_t* _enc__arg_action)
{
  pony_gc_send((*_ctx));
  encore_trace_object((*_ctx), _enc__arg_action, closure_trace);
  /* No tracing future for oneway msg */;
  pony_send_done((*_ctx));
  _enc__oneway_msg__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_addKeyboardCallback_t* msg = ((_enc__oneway_msg__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_addKeyboardCallback_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__oneway_msg__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_addKeyboardCallback_t)), _ENC__ONEWAY_MSG__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_addKeyboardCallback));
  msg->f1 = _enc__arg_action;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
}


void* _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_addMotionCallback(pony_ctx_t** _ctx, _enc__active__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_t* _this, pony_type_t** runtimeType, closure_t* _enc__arg_action)
{
  ENC_DTRACE3(METHOD_ENTRY, (uintptr_t)*_ctx, (uintptr_t)_this, "addMotionCallback");
  /* this.mouse_motion_vat.registerCallback(action) */;
  ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "mouse_motion_vat");
  _enc__active__encore_libs_master_SDL_SDL_Main_Event_Vat_t* _fieldacc_1 = (*_this)._enc__field_mouse_motion_vat;
  check_receiver(_fieldacc_1, ".", "this.mouse_motion_vat", "registerCallback", "\"./encore-libs-master/SDL/SDL_Main.enc\" (line 390, column 5)");
  pony_type_t* _tmp_2[] = {};
  future_t* _fut_0 = _enc__method__encore_libs_master_SDL_SDL_Main_Event_Vat_registerCallback_future(_ctx, _fieldacc_1, NULL, ((closure_t*) _enc__arg_action));
  ENC_DTRACE3(METHOD_EXIT, (uintptr_t)*_ctx, (uintptr_t)_this, "addMotionCallback");
  return UNIT;
}


future_t* _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_addMotionCallback_future(pony_ctx_t** _ctx, _enc__active__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_t* _this, pony_type_t** runtimeType, closure_t* _enc__arg_action)
{
  future_t* _fut = future_mk(_ctx, ENCORE_PRIMITIVE);
  pony_gc_send((*_ctx));
  encore_trace_object((*_ctx), _enc__arg_action, closure_trace);
  encore_trace_object((*_ctx), _fut, future_trace);
  pony_send_done((*_ctx));
  _enc__fut_msg__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_addMotionCallback_t* msg = ((_enc__fut_msg__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_addMotionCallback_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__fut_msg__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_addMotionCallback_t)), _ENC__FUT_MSG__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_addMotionCallback));
  msg->f1 = _enc__arg_action;
  msg->_fut = _fut;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
  return _fut;
}


void _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_addMotionCallback_one_way(pony_ctx_t** _ctx, _enc__active__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_t* _this, pony_type_t** runtimeType, closure_t* _enc__arg_action)
{
  pony_gc_send((*_ctx));
  encore_trace_object((*_ctx), _enc__arg_action, closure_trace);
  /* No tracing future for oneway msg */;
  pony_send_done((*_ctx));
  _enc__oneway_msg__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_addMotionCallback_t* msg = ((_enc__oneway_msg__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_addMotionCallback_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__oneway_msg__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_addMotionCallback_t)), _ENC__ONEWAY_MSG__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_addMotionCallback));
  msg->f1 = _enc__arg_action;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
}


void* _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_handleEvent(pony_ctx_t** _ctx, _enc__active__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_t* _this, pony_type_t** runtimeType, _enc__active__encore_libs_master_SDL_SDL_Main_SDL_Main_t* _enc__arg_main, SDL_Event* _enc__arg_event)
{
  ENC_DTRACE3(METHOD_ENTRY, (uintptr_t)*_ctx, (uintptr_t)_this, "handleEvent");
  /* var event_type = embed int #{event}->type; end */;
  /* event_type = embed int #{event}->type; end */;
  int64_t _embed_0 = ({_enc__arg_event->type;});
  int64_t _event_type_1 = _embed_0;
  /* if event_type == embed int SDL_QUIT; end then
  embed void exit(0); end
else
  if event_type == embed int SDL_MOUSEBUTTONDOWN; end then
    this.mouse_button_vat!pushEvent((main, 
                                     new SDL_MouseButtonEvent(event)))
  else
    if event_type == embed int SDL_MOUSEBUTTONUP; end then
      this.mouse_button_vat!pushEvent((main, 
                                       new SDL_MouseButtonEvent(event)))
    else
      if event_type == embed int SDL_KEYDOWN; end then
        this.keyboard_vat!pushEvent((main, new SDL_KeyboardEvent(event)))
      else
        if event_type == embed int SDL_KEYUP; end then
          this.keyboard_vat!pushEvent((main, new SDL_KeyboardEvent(event)))
        else
          if event_type == embed int SDL_MOUSEMOTION; end then
            this.mouse_motion_vat!pushEvent((main, 
                                             new SDL_MouseMotionEvent(event))) */;
  void* _ite_2;
  if (({int64_t _binop_4 = (({ _event_type_1;}) == ({int64_t _embed_3 = ({SDL_QUIT;}); _embed_3;})); _binop_4;}))
  {
    /* embed void exit(0); end */;
    ({exit(0);});
    _ite_2 = ((void*) UNIT);
  }
  else
  {
    void* _ite_5;
    if (({int64_t _binop_7 = (({ _event_type_1;}) == ({int64_t _embed_6 = ({SDL_MOUSEBUTTONDOWN;}); _embed_6;})); _binop_7;}))
    {
      /* this.mouse_button_vat!pushEvent((main, 
                                 new SDL_MouseButtonEvent(event))) */;
      ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "mouse_button_vat");
      _enc__active__encore_libs_master_SDL_SDL_Main_Event_Vat_t* _fieldacc_8 = (*_this)._enc__field_mouse_button_vat;
      check_receiver(_fieldacc_8, " ! ", "this.mouse_button_vat", "pushEvent", "\"./encore-libs-master/SDL/SDL_Main.enc\" (line 401, column 28)");
      tuple_t* _tuple_9 = tuple_mk(_ctx, 2);
      tuple_set_type(_tuple_9, 0, ENCORE_ACTIVE);
      tuple_set_type(_tuple_9, 1, (&(_enc__passive__encore_libs_master_SDL_SDL_Events_SDL_MouseButtonEvent_type)));
      _enc__passive__encore_libs_master_SDL_SDL_Events_SDL_MouseButtonEvent_t* _new_10 = _enc__constructor__encore_libs_master_SDL_SDL_Events_SDL_MouseButtonEvent(_ctx, NULL);
      pony_type_t* _tmp_11[] = {};
      _enc__type_init__encore_libs_master_SDL_SDL_Events_SDL_MouseButtonEvent(_new_10);
      _enc__method__encore_libs_master_SDL_SDL_Events_SDL_MouseButtonEvent_init(_ctx, _new_10, NULL, _enc__arg_event);
      tuple_set(_tuple_9, 0, ((encore_arg_t) {.p = _enc__arg_main}));
      tuple_set(_tuple_9, 1, ((encore_arg_t) {.p = _new_10}));
      pony_type_t* _tmp_12[] = {};
      _enc__method__encore_libs_master_SDL_SDL_Main_Event_Vat_pushEvent_one_way(_ctx, _fieldacc_8, NULL, ((tuple_t*) _tuple_9));
      _ite_5 = ((void*) UNIT);
    }
    else
    {
      void* _ite_13;
      if (({int64_t _binop_15 = (({ _event_type_1;}) == ({int64_t _embed_14 = ({SDL_MOUSEBUTTONUP;}); _embed_14;})); _binop_15;}))
      {
        /* this.mouse_button_vat!pushEvent((main, 
                                 new SDL_MouseButtonEvent(event))) */;
        ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "mouse_button_vat");
        _enc__active__encore_libs_master_SDL_SDL_Main_Event_Vat_t* _fieldacc_16 = (*_this)._enc__field_mouse_button_vat;
        check_receiver(_fieldacc_16, " ! ", "this.mouse_button_vat", "pushEvent", "\"./encore-libs-master/SDL/SDL_Main.enc\" (line 403, column 28)");
        tuple_t* _tuple_17 = tuple_mk(_ctx, 2);
        tuple_set_type(_tuple_17, 0, ENCORE_ACTIVE);
        tuple_set_type(_tuple_17, 1, (&(_enc__passive__encore_libs_master_SDL_SDL_Events_SDL_MouseButtonEvent_type)));
        _enc__passive__encore_libs_master_SDL_SDL_Events_SDL_MouseButtonEvent_t* _new_18 = _enc__constructor__encore_libs_master_SDL_SDL_Events_SDL_MouseButtonEvent(_ctx, NULL);
        pony_type_t* _tmp_19[] = {};
        _enc__type_init__encore_libs_master_SDL_SDL_Events_SDL_MouseButtonEvent(_new_18);
        _enc__method__encore_libs_master_SDL_SDL_Events_SDL_MouseButtonEvent_init(_ctx, _new_18, NULL, _enc__arg_event);
        tuple_set(_tuple_17, 0, ((encore_arg_t) {.p = _enc__arg_main}));
        tuple_set(_tuple_17, 1, ((encore_arg_t) {.p = _new_18}));
        pony_type_t* _tmp_20[] = {};
        _enc__method__encore_libs_master_SDL_SDL_Main_Event_Vat_pushEvent_one_way(_ctx, _fieldacc_16, NULL, ((tuple_t*) _tuple_17));
        _ite_13 = ((void*) UNIT);
      }
      else
      {
        void* _ite_21;
        if (({int64_t _binop_23 = (({ _event_type_1;}) == ({int64_t _embed_22 = ({SDL_KEYDOWN;}); _embed_22;})); _binop_23;}))
        {
          /* this.keyboard_vat!pushEvent((main, new SDL_KeyboardEvent(event))) */;
          ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "keyboard_vat");
          _enc__active__encore_libs_master_SDL_SDL_Main_Event_Vat_t* _fieldacc_24 = (*_this)._enc__field_keyboard_vat;
          check_receiver(_fieldacc_24, " ! ", "this.keyboard_vat", "pushEvent", "\"./encore-libs-master/SDL/SDL_Main.enc\" (line 405, column 24)");
          tuple_t* _tuple_25 = tuple_mk(_ctx, 2);
          tuple_set_type(_tuple_25, 0, ENCORE_ACTIVE);
          tuple_set_type(_tuple_25, 1, (&(_enc__passive__encore_libs_master_SDL_SDL_Events_SDL_KeyboardEvent_type)));
          _enc__passive__encore_libs_master_SDL_SDL_Events_SDL_KeyboardEvent_t* _new_26 = _enc__constructor__encore_libs_master_SDL_SDL_Events_SDL_KeyboardEvent(_ctx, NULL);
          pony_type_t* _tmp_27[] = {};
          _enc__type_init__encore_libs_master_SDL_SDL_Events_SDL_KeyboardEvent(_new_26);
          _enc__method__encore_libs_master_SDL_SDL_Events_SDL_KeyboardEvent_init(_ctx, _new_26, NULL, _enc__arg_event);
          tuple_set(_tuple_25, 0, ((encore_arg_t) {.p = _enc__arg_main}));
          tuple_set(_tuple_25, 1, ((encore_arg_t) {.p = _new_26}));
          pony_type_t* _tmp_28[] = {};
          _enc__method__encore_libs_master_SDL_SDL_Main_Event_Vat_pushEvent_one_way(_ctx, _fieldacc_24, NULL, ((tuple_t*) _tuple_25));
          _ite_21 = ((void*) UNIT);
        }
        else
        {
          void* _ite_29;
          if (({int64_t _binop_31 = (({ _event_type_1;}) == ({int64_t _embed_30 = ({SDL_KEYUP;}); _embed_30;})); _binop_31;}))
          {
            /* this.keyboard_vat!pushEvent((main, new SDL_KeyboardEvent(event))) */;
            ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "keyboard_vat");
            _enc__active__encore_libs_master_SDL_SDL_Main_Event_Vat_t* _fieldacc_32 = (*_this)._enc__field_keyboard_vat;
            check_receiver(_fieldacc_32, " ! ", "this.keyboard_vat", "pushEvent", "\"./encore-libs-master/SDL/SDL_Main.enc\" (line 407, column 24)");
            tuple_t* _tuple_33 = tuple_mk(_ctx, 2);
            tuple_set_type(_tuple_33, 0, ENCORE_ACTIVE);
            tuple_set_type(_tuple_33, 1, (&(_enc__passive__encore_libs_master_SDL_SDL_Events_SDL_KeyboardEvent_type)));
            _enc__passive__encore_libs_master_SDL_SDL_Events_SDL_KeyboardEvent_t* _new_34 = _enc__constructor__encore_libs_master_SDL_SDL_Events_SDL_KeyboardEvent(_ctx, NULL);
            pony_type_t* _tmp_35[] = {};
            _enc__type_init__encore_libs_master_SDL_SDL_Events_SDL_KeyboardEvent(_new_34);
            _enc__method__encore_libs_master_SDL_SDL_Events_SDL_KeyboardEvent_init(_ctx, _new_34, NULL, _enc__arg_event);
            tuple_set(_tuple_33, 0, ((encore_arg_t) {.p = _enc__arg_main}));
            tuple_set(_tuple_33, 1, ((encore_arg_t) {.p = _new_34}));
            pony_type_t* _tmp_36[] = {};
            _enc__method__encore_libs_master_SDL_SDL_Main_Event_Vat_pushEvent_one_way(_ctx, _fieldacc_32, NULL, ((tuple_t*) _tuple_33));
            _ite_29 = ((void*) UNIT);
          }
          else
          {
            void* _ite_37;
            if (({int64_t _binop_39 = (({ _event_type_1;}) == ({int64_t _embed_38 = ({SDL_MOUSEMOTION;}); _embed_38;})); _binop_39;}))
            {
              /* this.mouse_motion_vat!pushEvent((main, 
                                 new SDL_MouseMotionEvent(event))) */;
              ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "mouse_motion_vat");
              _enc__active__encore_libs_master_SDL_SDL_Main_Event_Vat_t* _fieldacc_40 = (*_this)._enc__field_mouse_motion_vat;
              check_receiver(_fieldacc_40, " ! ", "this.mouse_motion_vat", "pushEvent", "\"./encore-libs-master/SDL/SDL_Main.enc\" (line 409, column 28)");
              tuple_t* _tuple_41 = tuple_mk(_ctx, 2);
              tuple_set_type(_tuple_41, 0, ENCORE_ACTIVE);
              tuple_set_type(_tuple_41, 1, (&(_enc__passive__encore_libs_master_SDL_SDL_Events_SDL_MouseMotionEvent_type)));
              _enc__passive__encore_libs_master_SDL_SDL_Events_SDL_MouseMotionEvent_t* _new_42 = _enc__constructor__encore_libs_master_SDL_SDL_Events_SDL_MouseMotionEvent(_ctx, NULL);
              pony_type_t* _tmp_43[] = {};
              _enc__type_init__encore_libs_master_SDL_SDL_Events_SDL_MouseMotionEvent(_new_42);
              _enc__method__encore_libs_master_SDL_SDL_Events_SDL_MouseMotionEvent_init(_ctx, _new_42, NULL, _enc__arg_event);
              tuple_set(_tuple_41, 0, ((encore_arg_t) {.p = _enc__arg_main}));
              tuple_set(_tuple_41, 1, ((encore_arg_t) {.p = _new_42}));
              pony_type_t* _tmp_44[] = {};
              _enc__method__encore_libs_master_SDL_SDL_Main_Event_Vat_pushEvent_one_way(_ctx, _fieldacc_40, NULL, ((tuple_t*) _tuple_41));
              _ite_37 = ((void*) UNIT);
            }
            else
            {
              UNIT;
              _ite_37 = ((void*) UNIT);
            };
            _ite_29 = ((void*) _ite_37);
          };
          _ite_21 = ((void*) _ite_29);
        };
        _ite_13 = ((void*) _ite_21);
      };
      _ite_5 = ((void*) _ite_13);
    };
    _ite_2 = ((void*) _ite_5);
  };
  /* embed void //The copied event should be unused by now
      free(#{event});
    end */;
  ({//The copied event should be unused by now
      free(_enc__arg_event);
   });
  ENC_DTRACE3(METHOD_EXIT, (uintptr_t)*_ctx, (uintptr_t)_this, "handleEvent");
  return UNIT;
}


future_t* _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_handleEvent_future(pony_ctx_t** _ctx, _enc__active__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_t* _this, pony_type_t** runtimeType, _enc__active__encore_libs_master_SDL_SDL_Main_SDL_Main_t* _enc__arg_main, SDL_Event* _enc__arg_event)
{
  future_t* _fut = future_mk(_ctx, ENCORE_PRIMITIVE);
  pony_gc_send((*_ctx));
  encore_trace_actor((*_ctx), ((pony_actor_t*) _enc__arg_main));
  pony_trace((*_ctx), _enc__arg_event);
  encore_trace_object((*_ctx), _fut, future_trace);
  pony_send_done((*_ctx));
  _enc__fut_msg__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_handleEvent_t* msg = ((_enc__fut_msg__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_handleEvent_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__fut_msg__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_handleEvent_t)), _ENC__FUT_MSG__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_handleEvent));
  msg->f1 = _enc__arg_main;
  msg->f2 = _enc__arg_event;
  msg->_fut = _fut;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
  return _fut;
}


void _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_handleEvent_one_way(pony_ctx_t** _ctx, _enc__active__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_t* _this, pony_type_t** runtimeType, _enc__active__encore_libs_master_SDL_SDL_Main_SDL_Main_t* _enc__arg_main, SDL_Event* _enc__arg_event)
{
  pony_gc_send((*_ctx));
  encore_trace_actor((*_ctx), ((pony_actor_t*) _enc__arg_main));
  pony_trace((*_ctx), _enc__arg_event);
  /* No tracing future for oneway msg */;
  pony_send_done((*_ctx));
  _enc__oneway_msg__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_handleEvent_t* msg = ((_enc__oneway_msg__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_handleEvent_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__oneway_msg__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_handleEvent_t)), _ENC__ONEWAY_MSG__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_handleEvent));
  msg->f1 = _enc__arg_main;
  msg->f2 = _enc__arg_event;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
}


static void _enc__dispatch__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler(pony_ctx_t** _ctx, pony_actor_t* _a, pony_msg_t* _m)
{
  _enc__active__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_t* _this = ((_enc__active__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_t*) _a);
  switch (_m->id)
  {
    case _ENC__FUT_MSG__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_init:
    {
      future_t* _fut = ((encore_fut_msg_t*) _m)->_fut;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      encore_trace_object((*_ctx), _fut, future_type.trace);
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      pony_type_t* methodTypeVars[] = {};
      future_fulfil(_ctx, _fut, ((encore_arg_t) {.p = _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_init(_ctx, _this, methodTypeVars)}));
      break;
    }
    case _ENC__ONEWAY_MSG__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_init:
    {
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      /* Not tracing the future in a oneWay send */;
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      pony_type_t* methodTypeVars[] = {};
      _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_init(_ctx, _this, methodTypeVars);
      break;
    }
    case _ENC__FUT_MSG__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_addMouseButtonCallback:
    {
      future_t* _fut = ((encore_fut_msg_t*) _m)->_fut;
      closure_t* _enc__arg_action = ((_enc__fut_msg__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_addMouseButtonCallback_t*) _m)->f1;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      encore_trace_object((*_ctx), _enc__arg_action, closure_trace);
      encore_trace_object((*_ctx), _fut, future_type.trace);
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      pony_type_t* methodTypeVars[] = {};
      future_fulfil(_ctx, _fut, ((encore_arg_t) {.p = _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_addMouseButtonCallback(_ctx, _this, methodTypeVars, _enc__arg_action)}));
      break;
    }
    case _ENC__ONEWAY_MSG__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_addMouseButtonCallback:
    {
      closure_t* _enc__arg_action = ((_enc__oneway_msg__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_addMouseButtonCallback_t*) _m)->f1;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      encore_trace_object((*_ctx), _enc__arg_action, closure_trace);
      /* Not tracing the future in a oneWay send */;
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      pony_type_t* methodTypeVars[] = {};
      _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_addMouseButtonCallback(_ctx, _this, methodTypeVars, _enc__arg_action);
      break;
    }
    case _ENC__FUT_MSG__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_addKeyboardCallback:
    {
      future_t* _fut = ((encore_fut_msg_t*) _m)->_fut;
      closure_t* _enc__arg_action = ((_enc__fut_msg__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_addKeyboardCallback_t*) _m)->f1;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      encore_trace_object((*_ctx), _enc__arg_action, closure_trace);
      encore_trace_object((*_ctx), _fut, future_type.trace);
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      pony_type_t* methodTypeVars[] = {};
      future_fulfil(_ctx, _fut, ((encore_arg_t) {.p = _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_addKeyboardCallback(_ctx, _this, methodTypeVars, _enc__arg_action)}));
      break;
    }
    case _ENC__ONEWAY_MSG__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_addKeyboardCallback:
    {
      closure_t* _enc__arg_action = ((_enc__oneway_msg__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_addKeyboardCallback_t*) _m)->f1;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      encore_trace_object((*_ctx), _enc__arg_action, closure_trace);
      /* Not tracing the future in a oneWay send */;
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      pony_type_t* methodTypeVars[] = {};
      _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_addKeyboardCallback(_ctx, _this, methodTypeVars, _enc__arg_action);
      break;
    }
    case _ENC__FUT_MSG__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_addMotionCallback:
    {
      future_t* _fut = ((encore_fut_msg_t*) _m)->_fut;
      closure_t* _enc__arg_action = ((_enc__fut_msg__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_addMotionCallback_t*) _m)->f1;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      encore_trace_object((*_ctx), _enc__arg_action, closure_trace);
      encore_trace_object((*_ctx), _fut, future_type.trace);
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      pony_type_t* methodTypeVars[] = {};
      future_fulfil(_ctx, _fut, ((encore_arg_t) {.p = _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_addMotionCallback(_ctx, _this, methodTypeVars, _enc__arg_action)}));
      break;
    }
    case _ENC__ONEWAY_MSG__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_addMotionCallback:
    {
      closure_t* _enc__arg_action = ((_enc__oneway_msg__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_addMotionCallback_t*) _m)->f1;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      encore_trace_object((*_ctx), _enc__arg_action, closure_trace);
      /* Not tracing the future in a oneWay send */;
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      pony_type_t* methodTypeVars[] = {};
      _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_addMotionCallback(_ctx, _this, methodTypeVars, _enc__arg_action);
      break;
    }
    case _ENC__FUT_MSG__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_handleEvent:
    {
      future_t* _fut = ((encore_fut_msg_t*) _m)->_fut;
      _enc__active__encore_libs_master_SDL_SDL_Main_SDL_Main_t* _enc__arg_main = ((_enc__fut_msg__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_handleEvent_t*) _m)->f1;
      SDL_Event* _enc__arg_event = ((_enc__fut_msg__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_handleEvent_t*) _m)->f2;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      encore_trace_actor((*_ctx), ((pony_actor_t*) _enc__arg_main));
      pony_trace((*_ctx), _enc__arg_event);
      encore_trace_object((*_ctx), _fut, future_type.trace);
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      pony_type_t* methodTypeVars[] = {};
      future_fulfil(_ctx, _fut, ((encore_arg_t) {.p = _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_handleEvent(_ctx, _this, methodTypeVars, _enc__arg_main, _enc__arg_event)}));
      break;
    }
    case _ENC__ONEWAY_MSG__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_handleEvent:
    {
      _enc__active__encore_libs_master_SDL_SDL_Main_SDL_Main_t* _enc__arg_main = ((_enc__oneway_msg__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_handleEvent_t*) _m)->f1;
      SDL_Event* _enc__arg_event = ((_enc__oneway_msg__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_handleEvent_t*) _m)->f2;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      encore_trace_actor((*_ctx), ((pony_actor_t*) _enc__arg_main));
      pony_trace((*_ctx), _enc__arg_event);
      /* Not tracing the future in a oneWay send */;
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      pony_type_t* methodTypeVars[] = {};
      _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_handleEvent(_ctx, _this, methodTypeVars, _enc__arg_main, _enc__arg_event);
      break;
    }
    default:
    {
      printf("error, got invalid id: %zd", _m->id);
    }
  };
}


pony_type_t _enc__active__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_type = {.id=_ENC__ID__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler, .size=sizeof(_enc__active__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_t), .trace=_enc__trace__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler, .dispatch=_enc__dispatch__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler, .vtable=trait_method_selector};
