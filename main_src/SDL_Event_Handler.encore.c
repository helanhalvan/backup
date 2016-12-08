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


void _enc__type_init__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler(_enc__active__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_t* this, ... )
{
  va_list params;
  va_start(params, this);
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


_enc__active__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_t* _enc__constructor__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler(pony_ctx_t** _ctx)
{
  _enc__active__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_t* this = ((_enc__active__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_t*) encore_create((*_ctx), (&(_enc__active__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_type))));
  return this;
}


void* _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler__init(pony_ctx_t** _ctx, _enc__active__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_t* _this)
{
  /* this.mouse_button_vat = new Event_Vat<SDL_MouseButtonEvent>() */;
  _enc__active__encore_libs_master_SDL_SDL_Main_Event_Vat_t* _new_0 = _enc__constructor__encore_libs_master_SDL_SDL_Main_Event_Vat(_ctx);
  _enc__type_init__encore_libs_master_SDL_SDL_Main_Event_Vat(_new_0, (&(_enc__passive__encore_libs_master_SDL_SDL_Events_SDL_MouseButtonEvent_type)));
  _enc__method__encore_libs_master_SDL_SDL_Main_Event_Vat__init_one_way(_ctx, _new_0);
  (*({ _this;}))._enc__field_mouse_button_vat = _new_0;
  /* this.keyboard_vat = new Event_Vat<SDL_KeyboardEvent>() */;
  _enc__active__encore_libs_master_SDL_SDL_Main_Event_Vat_t* _new_1 = _enc__constructor__encore_libs_master_SDL_SDL_Main_Event_Vat(_ctx);
  _enc__type_init__encore_libs_master_SDL_SDL_Main_Event_Vat(_new_1, (&(_enc__passive__encore_libs_master_SDL_SDL_Events_SDL_KeyboardEvent_type)));
  _enc__method__encore_libs_master_SDL_SDL_Main_Event_Vat__init_one_way(_ctx, _new_1);
  (*({ _this;}))._enc__field_keyboard_vat = _new_1;
  /* this.mouse_motion_vat = new Event_Vat<SDL_MouseMotionEvent>() */;
  _enc__active__encore_libs_master_SDL_SDL_Main_Event_Vat_t* _new_2 = _enc__constructor__encore_libs_master_SDL_SDL_Main_Event_Vat(_ctx);
  _enc__type_init__encore_libs_master_SDL_SDL_Main_Event_Vat(_new_2, (&(_enc__passive__encore_libs_master_SDL_SDL_Events_SDL_MouseMotionEvent_type)));
  _enc__method__encore_libs_master_SDL_SDL_Main_Event_Vat__init_one_way(_ctx, _new_2);
  (*({ _this;}))._enc__field_mouse_motion_vat = _new_2;
  return UNIT;
}


void* _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_addMouseButtonCallback(pony_ctx_t** _ctx, _enc__active__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_t* _this, closure_t* _enc__arg_action)
{
  /* this.mouse_button_vat.registerCallback(action) */;
  _enc__active__encore_libs_master_SDL_SDL_Main_Event_Vat_t* _fieldacc_1 = (*_this)._enc__field_mouse_button_vat;
  check_receiver(_fieldacc_1, ".", "this.mouse_button_vat", "registerCallback", "\"./encore-libs-master/SDL/SDL_Main.enc\" (line 380, column 5)");
  future_t* _fut_0 = _enc__method__encore_libs_master_SDL_SDL_Main_Event_Vat_registerCallback_future(_ctx, _fieldacc_1, ((closure_t*) _enc__arg_action));
  return UNIT;
}


void* _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_addKeyboardCallback(pony_ctx_t** _ctx, _enc__active__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_t* _this, closure_t* _enc__arg_action)
{
  /* this.keyboard_vat.registerCallback(action) */;
  _enc__active__encore_libs_master_SDL_SDL_Main_Event_Vat_t* _fieldacc_1 = (*_this)._enc__field_keyboard_vat;
  check_receiver(_fieldacc_1, ".", "this.keyboard_vat", "registerCallback", "\"./encore-libs-master/SDL/SDL_Main.enc\" (line 385, column 5)");
  future_t* _fut_0 = _enc__method__encore_libs_master_SDL_SDL_Main_Event_Vat_registerCallback_future(_ctx, _fieldacc_1, ((closure_t*) _enc__arg_action));
  return UNIT;
}


void* _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_addMotionCallback(pony_ctx_t** _ctx, _enc__active__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_t* _this, closure_t* _enc__arg_action)
{
  /* this.mouse_motion_vat.registerCallback(action) */;
  _enc__active__encore_libs_master_SDL_SDL_Main_Event_Vat_t* _fieldacc_1 = (*_this)._enc__field_mouse_motion_vat;
  check_receiver(_fieldacc_1, ".", "this.mouse_motion_vat", "registerCallback", "\"./encore-libs-master/SDL/SDL_Main.enc\" (line 390, column 5)");
  future_t* _fut_0 = _enc__method__encore_libs_master_SDL_SDL_Main_Event_Vat_registerCallback_future(_ctx, _fieldacc_1, ((closure_t*) _enc__arg_action));
  return UNIT;
}


void* _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_handleEvent(pony_ctx_t** _ctx, _enc__active__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_t* _this, _enc__active__encore_libs_master_SDL_SDL_Main_SDL_Main_t* _enc__arg_main, SDL_Event* _enc__arg_event)
{
  /* let event_type = embed int #{event}#->type; end */;
  /* event_type = embed int #{event}#->type; end */;
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
      _enc__active__encore_libs_master_SDL_SDL_Main_Event_Vat_t* _fieldacc_8 = (*_this)._enc__field_mouse_button_vat;
      check_receiver(_fieldacc_8, " ! ", "this.mouse_button_vat", "pushEvent", "\"./encore-libs-master/SDL/SDL_Main.enc\" (line 401, column 28)");
      tuple_t* _tuple_9 = tuple_mk(_ctx, 2);
      tuple_set_type(_tuple_9, 0, ENCORE_ACTIVE);
      tuple_set_type(_tuple_9, 1, (&(_enc__passive__encore_libs_master_SDL_SDL_Events_SDL_MouseButtonEvent_type)));
      _enc__passive__encore_libs_master_SDL_SDL_Events_SDL_MouseButtonEvent_t* _new_10 = _enc__constructor__encore_libs_master_SDL_SDL_Events_SDL_MouseButtonEvent(_ctx);
      _enc__type_init__encore_libs_master_SDL_SDL_Events_SDL_MouseButtonEvent(_new_10);
      _enc__method__encore_libs_master_SDL_SDL_Events_SDL_MouseButtonEvent__init(_ctx, _new_10, _enc__arg_event);
      tuple_set(_tuple_9, 0, ((encore_arg_t) {.p = _enc__arg_main}));
      tuple_set(_tuple_9, 1, ((encore_arg_t) {.p = _new_10}));
      _enc__method__encore_libs_master_SDL_SDL_Main_Event_Vat_pushEvent_one_way(_ctx, _fieldacc_8, ((tuple_t*) _tuple_9));
      _ite_5 = ((void*) UNIT);
    }
    else
    {
      void* _ite_11;
      if (({int64_t _binop_13 = (({ _event_type_1;}) == ({int64_t _embed_12 = ({SDL_MOUSEBUTTONUP;}); _embed_12;})); _binop_13;}))
      {
        /* this.mouse_button_vat!pushEvent((main, 
                                 new SDL_MouseButtonEvent(event))) */;
        _enc__active__encore_libs_master_SDL_SDL_Main_Event_Vat_t* _fieldacc_14 = (*_this)._enc__field_mouse_button_vat;
        check_receiver(_fieldacc_14, " ! ", "this.mouse_button_vat", "pushEvent", "\"./encore-libs-master/SDL/SDL_Main.enc\" (line 403, column 28)");
        tuple_t* _tuple_15 = tuple_mk(_ctx, 2);
        tuple_set_type(_tuple_15, 0, ENCORE_ACTIVE);
        tuple_set_type(_tuple_15, 1, (&(_enc__passive__encore_libs_master_SDL_SDL_Events_SDL_MouseButtonEvent_type)));
        _enc__passive__encore_libs_master_SDL_SDL_Events_SDL_MouseButtonEvent_t* _new_16 = _enc__constructor__encore_libs_master_SDL_SDL_Events_SDL_MouseButtonEvent(_ctx);
        _enc__type_init__encore_libs_master_SDL_SDL_Events_SDL_MouseButtonEvent(_new_16);
        _enc__method__encore_libs_master_SDL_SDL_Events_SDL_MouseButtonEvent__init(_ctx, _new_16, _enc__arg_event);
        tuple_set(_tuple_15, 0, ((encore_arg_t) {.p = _enc__arg_main}));
        tuple_set(_tuple_15, 1, ((encore_arg_t) {.p = _new_16}));
        _enc__method__encore_libs_master_SDL_SDL_Main_Event_Vat_pushEvent_one_way(_ctx, _fieldacc_14, ((tuple_t*) _tuple_15));
        _ite_11 = ((void*) UNIT);
      }
      else
      {
        void* _ite_17;
        if (({int64_t _binop_19 = (({ _event_type_1;}) == ({int64_t _embed_18 = ({SDL_KEYDOWN;}); _embed_18;})); _binop_19;}))
        {
          /* this.keyboard_vat!pushEvent((main, new SDL_KeyboardEvent(event))) */;
          _enc__active__encore_libs_master_SDL_SDL_Main_Event_Vat_t* _fieldacc_20 = (*_this)._enc__field_keyboard_vat;
          check_receiver(_fieldacc_20, " ! ", "this.keyboard_vat", "pushEvent", "\"./encore-libs-master/SDL/SDL_Main.enc\" (line 405, column 24)");
          tuple_t* _tuple_21 = tuple_mk(_ctx, 2);
          tuple_set_type(_tuple_21, 0, ENCORE_ACTIVE);
          tuple_set_type(_tuple_21, 1, (&(_enc__passive__encore_libs_master_SDL_SDL_Events_SDL_KeyboardEvent_type)));
          _enc__passive__encore_libs_master_SDL_SDL_Events_SDL_KeyboardEvent_t* _new_22 = _enc__constructor__encore_libs_master_SDL_SDL_Events_SDL_KeyboardEvent(_ctx);
          _enc__type_init__encore_libs_master_SDL_SDL_Events_SDL_KeyboardEvent(_new_22);
          _enc__method__encore_libs_master_SDL_SDL_Events_SDL_KeyboardEvent__init(_ctx, _new_22, _enc__arg_event);
          tuple_set(_tuple_21, 0, ((encore_arg_t) {.p = _enc__arg_main}));
          tuple_set(_tuple_21, 1, ((encore_arg_t) {.p = _new_22}));
          _enc__method__encore_libs_master_SDL_SDL_Main_Event_Vat_pushEvent_one_way(_ctx, _fieldacc_20, ((tuple_t*) _tuple_21));
          _ite_17 = ((void*) UNIT);
        }
        else
        {
          void* _ite_23;
          if (({int64_t _binop_25 = (({ _event_type_1;}) == ({int64_t _embed_24 = ({SDL_KEYUP;}); _embed_24;})); _binop_25;}))
          {
            /* this.keyboard_vat!pushEvent((main, new SDL_KeyboardEvent(event))) */;
            _enc__active__encore_libs_master_SDL_SDL_Main_Event_Vat_t* _fieldacc_26 = (*_this)._enc__field_keyboard_vat;
            check_receiver(_fieldacc_26, " ! ", "this.keyboard_vat", "pushEvent", "\"./encore-libs-master/SDL/SDL_Main.enc\" (line 407, column 24)");
            tuple_t* _tuple_27 = tuple_mk(_ctx, 2);
            tuple_set_type(_tuple_27, 0, ENCORE_ACTIVE);
            tuple_set_type(_tuple_27, 1, (&(_enc__passive__encore_libs_master_SDL_SDL_Events_SDL_KeyboardEvent_type)));
            _enc__passive__encore_libs_master_SDL_SDL_Events_SDL_KeyboardEvent_t* _new_28 = _enc__constructor__encore_libs_master_SDL_SDL_Events_SDL_KeyboardEvent(_ctx);
            _enc__type_init__encore_libs_master_SDL_SDL_Events_SDL_KeyboardEvent(_new_28);
            _enc__method__encore_libs_master_SDL_SDL_Events_SDL_KeyboardEvent__init(_ctx, _new_28, _enc__arg_event);
            tuple_set(_tuple_27, 0, ((encore_arg_t) {.p = _enc__arg_main}));
            tuple_set(_tuple_27, 1, ((encore_arg_t) {.p = _new_28}));
            _enc__method__encore_libs_master_SDL_SDL_Main_Event_Vat_pushEvent_one_way(_ctx, _fieldacc_26, ((tuple_t*) _tuple_27));
            _ite_23 = ((void*) UNIT);
          }
          else
          {
            void* _ite_29;
            if (({int64_t _binop_31 = (({ _event_type_1;}) == ({int64_t _embed_30 = ({SDL_MOUSEMOTION;}); _embed_30;})); _binop_31;}))
            {
              /* this.mouse_motion_vat!pushEvent((main, 
                                 new SDL_MouseMotionEvent(event))) */;
              _enc__active__encore_libs_master_SDL_SDL_Main_Event_Vat_t* _fieldacc_32 = (*_this)._enc__field_mouse_motion_vat;
              check_receiver(_fieldacc_32, " ! ", "this.mouse_motion_vat", "pushEvent", "\"./encore-libs-master/SDL/SDL_Main.enc\" (line 409, column 28)");
              tuple_t* _tuple_33 = tuple_mk(_ctx, 2);
              tuple_set_type(_tuple_33, 0, ENCORE_ACTIVE);
              tuple_set_type(_tuple_33, 1, (&(_enc__passive__encore_libs_master_SDL_SDL_Events_SDL_MouseMotionEvent_type)));
              _enc__passive__encore_libs_master_SDL_SDL_Events_SDL_MouseMotionEvent_t* _new_34 = _enc__constructor__encore_libs_master_SDL_SDL_Events_SDL_MouseMotionEvent(_ctx);
              _enc__type_init__encore_libs_master_SDL_SDL_Events_SDL_MouseMotionEvent(_new_34);
              _enc__method__encore_libs_master_SDL_SDL_Events_SDL_MouseMotionEvent__init(_ctx, _new_34, _enc__arg_event);
              tuple_set(_tuple_33, 0, ((encore_arg_t) {.p = _enc__arg_main}));
              tuple_set(_tuple_33, 1, ((encore_arg_t) {.p = _new_34}));
              _enc__method__encore_libs_master_SDL_SDL_Main_Event_Vat_pushEvent_one_way(_ctx, _fieldacc_32, ((tuple_t*) _tuple_33));
              _ite_29 = ((void*) UNIT);
            }
            else
            {
              UNIT;
              _ite_29 = ((void*) UNIT);
            };
            _ite_23 = ((void*) _ite_29);
          };
          _ite_17 = ((void*) _ite_23);
        };
        _ite_11 = ((void*) _ite_17);
      };
      _ite_5 = ((void*) _ite_11);
    };
    _ite_2 = ((void*) _ite_5);
  };
  /* embed void //The copied event should be unused by now
      free(#{event}#); end */;
  ({//The copied event should be unused by now
      free(_enc__arg_event);});
  return UNIT;
}


future_t* _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler__init_future(pony_ctx_t** _ctx, _enc__active__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_t* _this)
{
  future_t* _fut = future_mk(_ctx, ENCORE_PRIMITIVE);
  pony_gc_send((*_ctx));
  encore_trace_object((*_ctx), _fut, future_trace);
  pony_send_done((*_ctx));
  _enc__fut_msg__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler__init_t* msg = ((_enc__fut_msg__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler__init_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__fut_msg__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler__init_t)), _ENC__FUT_MSG__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler__init));
  msg->_fut = _fut;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
  return _fut;
}


future_t* _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_addMouseButtonCallback_future(pony_ctx_t** _ctx, _enc__active__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_t* _this, closure_t* _enc__arg_action)
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


future_t* _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_addKeyboardCallback_future(pony_ctx_t** _ctx, _enc__active__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_t* _this, closure_t* _enc__arg_action)
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


future_t* _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_addMotionCallback_future(pony_ctx_t** _ctx, _enc__active__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_t* _this, closure_t* _enc__arg_action)
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


future_t* _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_handleEvent_future(pony_ctx_t** _ctx, _enc__active__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_t* _this, _enc__active__encore_libs_master_SDL_SDL_Main_SDL_Main_t* _enc__arg_main, SDL_Event* _enc__arg_event)
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


void _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler__init_one_way(pony_ctx_t** _ctx, _enc__active__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_t* _this)
{
  pony_gc_send((*_ctx));
  /* No tracing future for oneway msg */;
  pony_send_done((*_ctx));
  _enc__oneway_msg__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler__init_t* msg = ((_enc__oneway_msg__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler__init_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__oneway_msg__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler__init_t)), _ENC__ONEWAY_MSG__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler__init));
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
}


void _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_addMouseButtonCallback_one_way(pony_ctx_t** _ctx, _enc__active__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_t* _this, closure_t* _enc__arg_action)
{
  pony_gc_send((*_ctx));
  encore_trace_object((*_ctx), _enc__arg_action, closure_trace);
  /* No tracing future for oneway msg */;
  pony_send_done((*_ctx));
  _enc__oneway_msg__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_addMouseButtonCallback_t* msg = ((_enc__oneway_msg__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_addMouseButtonCallback_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__oneway_msg__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_addMouseButtonCallback_t)), _ENC__ONEWAY_MSG__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_addMouseButtonCallback));
  msg->f1 = _enc__arg_action;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
}


void _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_addKeyboardCallback_one_way(pony_ctx_t** _ctx, _enc__active__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_t* _this, closure_t* _enc__arg_action)
{
  pony_gc_send((*_ctx));
  encore_trace_object((*_ctx), _enc__arg_action, closure_trace);
  /* No tracing future for oneway msg */;
  pony_send_done((*_ctx));
  _enc__oneway_msg__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_addKeyboardCallback_t* msg = ((_enc__oneway_msg__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_addKeyboardCallback_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__oneway_msg__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_addKeyboardCallback_t)), _ENC__ONEWAY_MSG__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_addKeyboardCallback));
  msg->f1 = _enc__arg_action;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
}


void _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_addMotionCallback_one_way(pony_ctx_t** _ctx, _enc__active__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_t* _this, closure_t* _enc__arg_action)
{
  pony_gc_send((*_ctx));
  encore_trace_object((*_ctx), _enc__arg_action, closure_trace);
  /* No tracing future for oneway msg */;
  pony_send_done((*_ctx));
  _enc__oneway_msg__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_addMotionCallback_t* msg = ((_enc__oneway_msg__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_addMotionCallback_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__oneway_msg__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_addMotionCallback_t)), _ENC__ONEWAY_MSG__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_addMotionCallback));
  msg->f1 = _enc__arg_action;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
}


void _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_handleEvent_one_way(pony_ctx_t** _ctx, _enc__active__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_t* _this, _enc__active__encore_libs_master_SDL_SDL_Main_SDL_Main_t* _enc__arg_main, SDL_Event* _enc__arg_event)
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
    case _ENC__MSG_TASK:
    {
      future_t* _fut = ((encore_fut_msg_t*) _m)->_fut;
      encore_task_s* _task = ((encore_task_msg_s*) _m)->_task;
      encore_arg_t task_tmp = task_runner(_task);
      
      // --- GC on receiving ----------------------------------------;
      pony_gc_recv((*_ctx));
      encore_trace_object((*_ctx), _fut, future_type.trace);
      encore_trace_object((*_ctx), _task, NULL);
      //---You need to trace the task env and task dependencies---;
      pony_recv_done((*_ctx));
      // --- GC on sending ----------------------------------------;
      
      future_fulfil(_ctx, _fut, task_tmp);
      task_free(_task);
      break;
    }
    case _ENC__FUT_MSG__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler__init:
    {
      future_t* _fut = ((encore_fut_msg_t*) _m)->_fut;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      encore_trace_object((*_ctx), _fut, future_type.trace);
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      future_fulfil(_ctx, _fut, ((encore_arg_t) {.p = _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler__init(_ctx, _this)}));
      break;
    }
    case _ENC__ONEWAY_MSG__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler__init:
    {
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      /* Not tracing the future in a oneWay send */;
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler__init(_ctx, _this);
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
      
      future_fulfil(_ctx, _fut, ((encore_arg_t) {.p = _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_addMouseButtonCallback(_ctx, _this, _enc__arg_action)}));
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
      
      _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_addMouseButtonCallback(_ctx, _this, _enc__arg_action);
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
      
      future_fulfil(_ctx, _fut, ((encore_arg_t) {.p = _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_addKeyboardCallback(_ctx, _this, _enc__arg_action)}));
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
      
      _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_addKeyboardCallback(_ctx, _this, _enc__arg_action);
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
      
      future_fulfil(_ctx, _fut, ((encore_arg_t) {.p = _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_addMotionCallback(_ctx, _this, _enc__arg_action)}));
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
      
      _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_addMotionCallback(_ctx, _this, _enc__arg_action);
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
      
      future_fulfil(_ctx, _fut, ((encore_arg_t) {.p = _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_handleEvent(_ctx, _this, _enc__arg_main, _enc__arg_event)}));
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
      
      _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_handleEvent(_ctx, _this, _enc__arg_main, _enc__arg_event);
      break;
    }
    default:
    {
      printf("error, got invalid id: %zd", _m->id);
    }
  };
}


pony_type_t _enc__active__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_type = {.id=_ENC__ID__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler, .size=sizeof(_enc__active__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_t), .trace=_enc__trace__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler, .dispatch=_enc__dispatch__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler, .vtable=trait_method_selector};
