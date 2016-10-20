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


struct _enc__active_MouseFiddler_t
{
  encore_actor_t _enc__actor;
  int64_t _enc__field_accept;
  int64_t _enc__field_count;
  double _enc__field_scale;
  int64_t _enc__field_draw;
};


void _enc__type_init_MouseFiddler(_enc__active_MouseFiddler_t* this, ... )
{
  va_list params;
  va_start(params, this);
  va_end(params);
}


void _enc__trace_MouseFiddler(pony_ctx_t* _ctx_arg, void* p)
{
  pony_ctx_t** _ctx = (&(_ctx_arg));
  _enc__active_MouseFiddler_t* _this = p;
  int64_t _enc__field_accept = _this->_enc__field_accept;
  /* Not tracing field '_enc__field_accept' */;
  int64_t _enc__field_count = _this->_enc__field_count;
  /* Not tracing field '_enc__field_count' */;
  double _enc__field_scale = _this->_enc__field_scale;
  /* Not tracing field '_enc__field_scale' */;
  int64_t _enc__field_draw = _this->_enc__field_draw;
  /* Not tracing field '_enc__field_draw' */;
}


_enc__active_MouseFiddler_t* _enc__constructor_MouseFiddler(pony_ctx_t** _ctx)
{
  _enc__active_MouseFiddler_t* this = ((_enc__active_MouseFiddler_t*) encore_create((*_ctx), (&(_enc__active_MouseFiddler_type))));
  return this;
}


void* _enc__method_MouseFiddler__init(pony_ctx_t** _ctx, _enc__active_MouseFiddler_t* _this)
{
  /* this.accept = true */;
  int64_t _literal_0 = 1/*True*/;
  (*({ _this;}))._enc__field_accept = _literal_0;
  /* this.count = 0 */;
  int64_t _literal_1 = 0;
  (*({ _this;}))._enc__field_count = _literal_1;
  /* this.scale = 0.1 */;
  double _literal_2 = 0.1;
  (*({ _this;}))._enc__field_scale = _literal_2;
  /* this.draw = false */;
  int64_t _literal_3 = 0/*False*/;
  (*({ _this;}))._enc__field_draw = _literal_3;
  return UNIT;
}


int64_t _enc__method_MouseFiddler_getCount(pony_ctx_t** _ctx, _enc__active_MouseFiddler_t* _this)
{
  /* this.count */;
  int64_t _fieldacc_0 = (*_this)._enc__field_count;
  return _fieldacc_0;
}


void* _enc__method_MouseFiddler_up(pony_ctx_t** _ctx, _enc__active_MouseFiddler_t* _this, _enc__active_SDL_Main_t* _enc__arg_main, SDL_Event* _enc__arg_event)
{
  /* this.accept = true */;
  int64_t _literal_0 = 1/*True*/;
  (*({ _this;}))._enc__field_accept = _literal_0;
  return UNIT;
}


int64_t _enc__method_MouseFiddler_key(pony_ctx_t** _ctx, _enc__active_MouseFiddler_t* _this, tuple_t* _enc__arg_tup)
{
  /* let main = null : SDL_Main */;
  /* main = null : SDL_Main */;
  _enc__active_SDL_Main_t* _literal_0 = NULL;
  _enc__active_SDL_Main_t* _cast_1 = ((_enc__active_SDL_Main_t*) _literal_0);
  _enc__active_SDL_Main_t* _main_2 = _cast_1;
  /* let event = null : SDL_KeyboardEvent */;
  /* event = null : SDL_KeyboardEvent */;
  _enc__passive_SDL_KeyboardEvent_t* _literal_3 = NULL;
  _enc__passive_SDL_KeyboardEvent_t* _cast_4 = ((_enc__passive_SDL_KeyboardEvent_t*) _literal_3);
  _enc__passive_SDL_KeyboardEvent_t* _event_5 = _cast_4;
  /* match tup with
  (main_, event_) => {main = main_;
                      event = event_}
 */;
  void* _match_6;
  _enc__active_SDL_Main_t* _main__7;
  _enc__passive_SDL_KeyboardEvent_t* _event__8;
  if ((({int64_t _tupleCheck_9;
         _tupleCheck_9 = 1;
         _enc__active_SDL_Main_t* _tupleAccess_10 = tuple_get(_enc__arg_tup, 0).p;
         int64_t _varBinding_11;
         _main__7 = _tupleAccess_10;
         _varBinding_11 = 1;
         _tupleCheck_9 = (_tupleCheck_9 && _varBinding_11);
         _enc__passive_SDL_KeyboardEvent_t* _tupleAccess_12 = tuple_get(_enc__arg_tup, 1).p;
         int64_t _varBinding_13;
         _event__8 = _tupleAccess_12;
         _varBinding_13 = 1;
         _tupleCheck_9 = (_tupleCheck_9 && _varBinding_13); _tupleCheck_9;}) && ({int64_t _literal_14 = 1/*True*/; _literal_14;})))
  {
    _match_6 = ((void*) ({/* main = main_ */;
                          _main_2 = _main__7;
                          /* event = event_ */;
                          _event_5 = _event__8; UNIT;}));
  }
  else
  {
    printf("*** Runtime error: No matching clause was found ***\n");
    exit(1);
  };
  /* if event.state == embed uint SDL_PRESSED; end then
  if event.keycode == embed uint SDLK_UP; end then
    this.scale = this.scale + 1.0e-2
  else
    if event.keycode == embed uint SDLK_DOWN; end then
      this.scale = this.scale - 1.0e-2 */;
  void* _ite_15;
  if (({int64_t _binop_18 = (({uint64_t _fieldacc_16 = (*_event_5)._enc__field_state; _fieldacc_16;}) == ({uint64_t _embed_17 = ({SDL_PRESSED;}); _embed_17;})); _binop_18;}))
  {
    /* if event.keycode == embed uint SDLK_UP; end then
  this.scale = this.scale + 1.0e-2
else
  if event.keycode == embed uint SDLK_DOWN; end then
    this.scale = this.scale - 1.0e-2 */;
    void* _ite_19;
    if (({int64_t _binop_22 = (({uint64_t _fieldacc_20 = (*_event_5)._enc__field_keycode; _fieldacc_20;}) == ({uint64_t _embed_21 = ({SDLK_UP;}); _embed_21;})); _binop_22;}))
    {
      /* this.scale = this.scale + 1.0e-2 */;
      double _binop_25 = (({double _fieldacc_23 = (*_this)._enc__field_scale; _fieldacc_23;}) + ({double _literal_24 = 1.0e-2; _literal_24;}));
      (*({ _this;}))._enc__field_scale = _binop_25;
      _ite_19 = ((void*) UNIT);
    }
    else
    {
      void* _ite_26;
      if (({int64_t _binop_29 = (({uint64_t _fieldacc_27 = (*_event_5)._enc__field_keycode; _fieldacc_27;}) == ({uint64_t _embed_28 = ({SDLK_DOWN;}); _embed_28;})); _binop_29;}))
      {
        /* this.scale = this.scale - 1.0e-2 */;
        double _binop_32 = (({double _fieldacc_30 = (*_this)._enc__field_scale; _fieldacc_30;}) - ({double _literal_31 = 1.0e-2; _literal_31;}));
        (*({ _this;}))._enc__field_scale = _binop_32;
        _ite_26 = ((void*) UNIT);
      }
      else
      {
        UNIT;
        _ite_26 = ((void*) UNIT);
      };
      _ite_19 = ((void*) _ite_26);
    };
    _ite_15 = ((void*) _ite_19);
  }
  else
  {
    UNIT;
    _ite_15 = ((void*) UNIT);
  };
  /* true */;
  int64_t _literal_33 = 1/*True*/;
  return _literal_33;
}


int64_t _enc__method_MouseFiddler_draw(pony_ctx_t** _ctx, _enc__active_MouseFiddler_t* _this, tuple_t* _enc__arg_tup)
{
  /* let main = null : SDL_Main */;
  /* main = null : SDL_Main */;
  _enc__active_SDL_Main_t* _literal_0 = NULL;
  _enc__active_SDL_Main_t* _cast_1 = ((_enc__active_SDL_Main_t*) _literal_0);
  _enc__active_SDL_Main_t* _main_2 = _cast_1;
  /* let event = null : SDL_MouseMotionEvent */;
  /* event = null : SDL_MouseMotionEvent */;
  _enc__passive_SDL_MouseMotionEvent_t* _literal_3 = NULL;
  _enc__passive_SDL_MouseMotionEvent_t* _cast_4 = ((_enc__passive_SDL_MouseMotionEvent_t*) _literal_3);
  _enc__passive_SDL_MouseMotionEvent_t* _event_5 = _cast_4;
  /* match tup with
  (main_, event_) => {main = main_;
                      event = event_}
 */;
  void* _match_6;
  _enc__active_SDL_Main_t* _main__7;
  _enc__passive_SDL_MouseMotionEvent_t* _event__8;
  if ((({int64_t _tupleCheck_9;
         _tupleCheck_9 = 1;
         _enc__active_SDL_Main_t* _tupleAccess_10 = tuple_get(_enc__arg_tup, 0).p;
         int64_t _varBinding_11;
         _main__7 = _tupleAccess_10;
         _varBinding_11 = 1;
         _tupleCheck_9 = (_tupleCheck_9 && _varBinding_11);
         _enc__passive_SDL_MouseMotionEvent_t* _tupleAccess_12 = tuple_get(_enc__arg_tup, 1).p;
         int64_t _varBinding_13;
         _event__8 = _tupleAccess_12;
         _varBinding_13 = 1;
         _tupleCheck_9 = (_tupleCheck_9 && _varBinding_13); _tupleCheck_9;}) && ({int64_t _literal_14 = 1/*True*/; _literal_14;})))
  {
    _match_6 = ((void*) ({/* main = main_ */;
                          _main_2 = _main__7;
                          /* event = event_ */;
                          _event_5 = _event__8; UNIT;}));
  }
  else
  {
    printf("*** Runtime error: No matching clause was found ***\n");
    exit(1);
  };
  /* if this.draw then
  main!drawImage("tux.png", event.x, event.y, this.scale, this.scale) */;
  void* _ite_15;
  if (({int64_t _fieldacc_16 = (*_this)._enc__field_draw; _fieldacc_16;}))
  {
    /* main!drawImage("tux.png", event.x, event.y, this.scale, this.scale) */;
    check_receiver(_main_2, " ! ", "main", "drawImage", "\"serious.enc\" (line 47, column 11)");
    _enc__passive_String_t* _new_17 = _enc__constructor_String(_ctx);
    char* _embed_18 = ({"tux.png";});
    _enc__type_init_String(_new_17);
    _enc__method_String__init(_ctx, _new_17, _embed_18);
    int64_t _fieldacc_19 = (*_event_5)._enc__field_x;
    int64_t _fieldacc_20 = (*_event_5)._enc__field_y;
    double _fieldacc_21 = (*_this)._enc__field_scale;
    double _fieldacc_22 = (*_this)._enc__field_scale;
    _enc__method_SDL_Main_drawImage_one_way(_ctx, _main_2, _new_17, _fieldacc_19, _fieldacc_20, _fieldacc_21, _fieldacc_22);
    _ite_15 = ((void*) UNIT);
  }
  else
  {
    UNIT;
    _ite_15 = ((void*) UNIT);
  };
  /* true */;
  int64_t _literal_23 = 1/*True*/;
  return _literal_23;
}


int64_t _enc__method_MouseFiddler_down(pony_ctx_t** _ctx, _enc__active_MouseFiddler_t* _this, tuple_t* _enc__arg_tup)
{
  /* let main = null : SDL_Main */;
  /* main = null : SDL_Main */;
  _enc__active_SDL_Main_t* _literal_0 = NULL;
  _enc__active_SDL_Main_t* _cast_1 = ((_enc__active_SDL_Main_t*) _literal_0);
  _enc__active_SDL_Main_t* _main_2 = _cast_1;
  /* let event = null : SDL_MouseButtonEvent */;
  /* event = null : SDL_MouseButtonEvent */;
  _enc__passive_SDL_MouseButtonEvent_t* _literal_3 = NULL;
  _enc__passive_SDL_MouseButtonEvent_t* _cast_4 = ((_enc__passive_SDL_MouseButtonEvent_t*) _literal_3);
  _enc__passive_SDL_MouseButtonEvent_t* _event_5 = _cast_4;
  /* match tup with
  (main_, event_) => {main = main_;
                      event = event_}
 */;
  void* _match_6;
  _enc__active_SDL_Main_t* _main__7;
  _enc__passive_SDL_MouseButtonEvent_t* _event__8;
  if ((({int64_t _tupleCheck_9;
         _tupleCheck_9 = 1;
         _enc__active_SDL_Main_t* _tupleAccess_10 = tuple_get(_enc__arg_tup, 0).p;
         int64_t _varBinding_11;
         _main__7 = _tupleAccess_10;
         _varBinding_11 = 1;
         _tupleCheck_9 = (_tupleCheck_9 && _varBinding_11);
         _enc__passive_SDL_MouseButtonEvent_t* _tupleAccess_12 = tuple_get(_enc__arg_tup, 1).p;
         int64_t _varBinding_13;
         _event__8 = _tupleAccess_12;
         _varBinding_13 = 1;
         _tupleCheck_9 = (_tupleCheck_9 && _varBinding_13); _tupleCheck_9;}) && ({int64_t _literal_14 = 1/*True*/; _literal_14;})))
  {
    _match_6 = ((void*) ({/* main = main_ */;
                          _main_2 = _main__7;
                          /* event = event_ */;
                          _event_5 = _event__8; UNIT;}));
  }
  else
  {
    printf("*** Runtime error: No matching clause was found ***\n");
    exit(1);
  };
  /* if event.state == embed uint SDL_PRESSED; end then
  {this.draw = true;
   main!drawImage("tux.png", 
                  event.x, 
                  event.y, 
                  this.scale, 
                  this.scale)}
else
  this.draw = false */;
  void* _ite_15;
  if (({int64_t _binop_18 = (({uint64_t _fieldacc_16 = (*_event_5)._enc__field_state; _fieldacc_16;}) == ({uint64_t _embed_17 = ({SDL_PRESSED;}); _embed_17;})); _binop_18;}))
  {
    /* this.draw = true */;
    int64_t _literal_19 = 1/*True*/;
    (*({ _this;}))._enc__field_draw = _literal_19;
    /* main!drawImage("tux.png", event.x, event.y, this.scale, this.scale) */;
    check_receiver(_main_2, " ! ", "main", "drawImage", "\"serious.enc\" (line 59, column 11)");
    _enc__passive_String_t* _new_20 = _enc__constructor_String(_ctx);
    char* _embed_21 = ({"tux.png";});
    _enc__type_init_String(_new_20);
    _enc__method_String__init(_ctx, _new_20, _embed_21);
    int64_t _fieldacc_22 = (*_event_5)._enc__field_x;
    int64_t _fieldacc_23 = (*_event_5)._enc__field_y;
    double _fieldacc_24 = (*_this)._enc__field_scale;
    double _fieldacc_25 = (*_this)._enc__field_scale;
    _enc__method_SDL_Main_drawImage_one_way(_ctx, _main_2, _new_20, _fieldacc_22, _fieldacc_23, _fieldacc_24, _fieldacc_25);
    _ite_15 = ((void*) UNIT);
  }
  else
  {
    /* this.draw = false */;
    int64_t _literal_26 = 0/*False*/;
    (*({ _this;}))._enc__field_draw = _literal_26;
    _ite_15 = ((void*) UNIT);
  };
  /* true */;
  int64_t _literal_27 = 1/*True*/;
  return _literal_27;
}


future_t* _enc__method_MouseFiddler__init_future(pony_ctx_t** _ctx, _enc__active_MouseFiddler_t* _this)
{
  future_t* _fut = future_mk(_ctx, ENCORE_PRIMITIVE);
  pony_gc_send((*_ctx));
  pony_traceobject((*_ctx), _fut, future_trace);
  pony_send_done((*_ctx));
  _enc__fut_msg_MouseFiddler__init_t* msg = ((_enc__fut_msg_MouseFiddler__init_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__fut_msg_MouseFiddler__init_t)), _ENC__FUT_MSG_MouseFiddler__init));
  msg->_fut = _fut;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
  return _fut;
}


future_t* _enc__method_MouseFiddler_getCount_future(pony_ctx_t** _ctx, _enc__active_MouseFiddler_t* _this)
{
  future_t* _fut = future_mk(_ctx, ENCORE_PRIMITIVE);
  pony_gc_send((*_ctx));
  pony_traceobject((*_ctx), _fut, future_trace);
  pony_send_done((*_ctx));
  _enc__fut_msg_MouseFiddler_getCount_t* msg = ((_enc__fut_msg_MouseFiddler_getCount_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__fut_msg_MouseFiddler_getCount_t)), _ENC__FUT_MSG_MouseFiddler_getCount));
  msg->_fut = _fut;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
  return _fut;
}


future_t* _enc__method_MouseFiddler_up_future(pony_ctx_t** _ctx, _enc__active_MouseFiddler_t* _this, _enc__active_SDL_Main_t* _enc__arg_main, SDL_Event* _enc__arg_event)
{
  future_t* _fut = future_mk(_ctx, ENCORE_PRIMITIVE);
  pony_gc_send((*_ctx));
  pony_traceactor((*_ctx), ((pony_actor_t*) _enc__arg_main));
  pony_trace((*_ctx), _enc__arg_event);
  pony_traceobject((*_ctx), _fut, future_trace);
  pony_send_done((*_ctx));
  _enc__fut_msg_MouseFiddler_up_t* msg = ((_enc__fut_msg_MouseFiddler_up_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__fut_msg_MouseFiddler_up_t)), _ENC__FUT_MSG_MouseFiddler_up));
  msg->f1 = _enc__arg_main;
  msg->f2 = _enc__arg_event;
  msg->_fut = _fut;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
  return _fut;
}


future_t* _enc__method_MouseFiddler_key_future(pony_ctx_t** _ctx, _enc__active_MouseFiddler_t* _this, tuple_t* _enc__arg_tup)
{
  future_t* _fut = future_mk(_ctx, ENCORE_PRIMITIVE);
  pony_gc_send((*_ctx));
  pony_traceobject((*_ctx), _enc__arg_tup, tuple_trace);
  pony_traceobject((*_ctx), _fut, future_trace);
  pony_send_done((*_ctx));
  _enc__fut_msg_MouseFiddler_key_t* msg = ((_enc__fut_msg_MouseFiddler_key_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__fut_msg_MouseFiddler_key_t)), _ENC__FUT_MSG_MouseFiddler_key));
  msg->f1 = _enc__arg_tup;
  msg->_fut = _fut;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
  return _fut;
}


future_t* _enc__method_MouseFiddler_draw_future(pony_ctx_t** _ctx, _enc__active_MouseFiddler_t* _this, tuple_t* _enc__arg_tup)
{
  future_t* _fut = future_mk(_ctx, ENCORE_PRIMITIVE);
  pony_gc_send((*_ctx));
  pony_traceobject((*_ctx), _enc__arg_tup, tuple_trace);
  pony_traceobject((*_ctx), _fut, future_trace);
  pony_send_done((*_ctx));
  _enc__fut_msg_MouseFiddler_draw_t* msg = ((_enc__fut_msg_MouseFiddler_draw_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__fut_msg_MouseFiddler_draw_t)), _ENC__FUT_MSG_MouseFiddler_draw));
  msg->f1 = _enc__arg_tup;
  msg->_fut = _fut;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
  return _fut;
}


future_t* _enc__method_MouseFiddler_down_future(pony_ctx_t** _ctx, _enc__active_MouseFiddler_t* _this, tuple_t* _enc__arg_tup)
{
  future_t* _fut = future_mk(_ctx, ENCORE_PRIMITIVE);
  pony_gc_send((*_ctx));
  pony_traceobject((*_ctx), _enc__arg_tup, tuple_trace);
  pony_traceobject((*_ctx), _fut, future_trace);
  pony_send_done((*_ctx));
  _enc__fut_msg_MouseFiddler_down_t* msg = ((_enc__fut_msg_MouseFiddler_down_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__fut_msg_MouseFiddler_down_t)), _ENC__FUT_MSG_MouseFiddler_down));
  msg->f1 = _enc__arg_tup;
  msg->_fut = _fut;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
  return _fut;
}


void _enc__method_MouseFiddler__init_one_way(pony_ctx_t** _ctx, _enc__active_MouseFiddler_t* _this)
{
  pony_gc_send((*_ctx));
  /* No tracing future for oneway msg */;
  pony_send_done((*_ctx));
  _enc__oneway_msg_MouseFiddler__init_t* msg = ((_enc__oneway_msg_MouseFiddler__init_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__oneway_msg_MouseFiddler__init_t)), _ENC__ONEWAY_MSG_MouseFiddler__init));
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
}


void _enc__method_MouseFiddler_getCount_one_way(pony_ctx_t** _ctx, _enc__active_MouseFiddler_t* _this)
{
  pony_gc_send((*_ctx));
  /* No tracing future for oneway msg */;
  pony_send_done((*_ctx));
  _enc__oneway_msg_MouseFiddler_getCount_t* msg = ((_enc__oneway_msg_MouseFiddler_getCount_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__oneway_msg_MouseFiddler_getCount_t)), _ENC__ONEWAY_MSG_MouseFiddler_getCount));
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
}


void _enc__method_MouseFiddler_up_one_way(pony_ctx_t** _ctx, _enc__active_MouseFiddler_t* _this, _enc__active_SDL_Main_t* _enc__arg_main, SDL_Event* _enc__arg_event)
{
  pony_gc_send((*_ctx));
  pony_traceactor((*_ctx), ((pony_actor_t*) _enc__arg_main));
  pony_trace((*_ctx), _enc__arg_event);
  /* No tracing future for oneway msg */;
  pony_send_done((*_ctx));
  _enc__oneway_msg_MouseFiddler_up_t* msg = ((_enc__oneway_msg_MouseFiddler_up_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__oneway_msg_MouseFiddler_up_t)), _ENC__ONEWAY_MSG_MouseFiddler_up));
  msg->f1 = _enc__arg_main;
  msg->f2 = _enc__arg_event;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
}


void _enc__method_MouseFiddler_key_one_way(pony_ctx_t** _ctx, _enc__active_MouseFiddler_t* _this, tuple_t* _enc__arg_tup)
{
  pony_gc_send((*_ctx));
  pony_traceobject((*_ctx), _enc__arg_tup, tuple_trace);
  /* No tracing future for oneway msg */;
  pony_send_done((*_ctx));
  _enc__oneway_msg_MouseFiddler_key_t* msg = ((_enc__oneway_msg_MouseFiddler_key_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__oneway_msg_MouseFiddler_key_t)), _ENC__ONEWAY_MSG_MouseFiddler_key));
  msg->f1 = _enc__arg_tup;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
}


void _enc__method_MouseFiddler_draw_one_way(pony_ctx_t** _ctx, _enc__active_MouseFiddler_t* _this, tuple_t* _enc__arg_tup)
{
  pony_gc_send((*_ctx));
  pony_traceobject((*_ctx), _enc__arg_tup, tuple_trace);
  /* No tracing future for oneway msg */;
  pony_send_done((*_ctx));
  _enc__oneway_msg_MouseFiddler_draw_t* msg = ((_enc__oneway_msg_MouseFiddler_draw_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__oneway_msg_MouseFiddler_draw_t)), _ENC__ONEWAY_MSG_MouseFiddler_draw));
  msg->f1 = _enc__arg_tup;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
}


void _enc__method_MouseFiddler_down_one_way(pony_ctx_t** _ctx, _enc__active_MouseFiddler_t* _this, tuple_t* _enc__arg_tup)
{
  pony_gc_send((*_ctx));
  pony_traceobject((*_ctx), _enc__arg_tup, tuple_trace);
  /* No tracing future for oneway msg */;
  pony_send_done((*_ctx));
  _enc__oneway_msg_MouseFiddler_down_t* msg = ((_enc__oneway_msg_MouseFiddler_down_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__oneway_msg_MouseFiddler_down_t)), _ENC__ONEWAY_MSG_MouseFiddler_down));
  msg->f1 = _enc__arg_tup;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
}


static void _enc__dispatch_MouseFiddler(pony_ctx_t** _ctx, pony_actor_t* _a, pony_msg_t* _m)
{
  _enc__active_MouseFiddler_t* _this = ((_enc__active_MouseFiddler_t*) _a);
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
    case _ENC__FUT_MSG_MouseFiddler__init:
    {
      future_t* _fut = ((encore_fut_msg_t*) _m)->_fut;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      pony_traceobject((*_ctx), _fut, future_type.trace);
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      future_fulfil(_ctx, _fut, ((encore_arg_t) {.p = _enc__method_MouseFiddler__init(_ctx, _this)}));
      break;
    }
    case _ENC__ONEWAY_MSG_MouseFiddler__init:
    {
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      /* Not tracing the future in a oneWay send */;
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      _enc__method_MouseFiddler__init(_ctx, _this);
      break;
    }
    case _ENC__FUT_MSG_MouseFiddler_getCount:
    {
      future_t* _fut = ((encore_fut_msg_t*) _m)->_fut;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      pony_traceobject((*_ctx), _fut, future_type.trace);
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      future_fulfil(_ctx, _fut, ((encore_arg_t) {.i = _enc__method_MouseFiddler_getCount(_ctx, _this)}));
      break;
    }
    case _ENC__ONEWAY_MSG_MouseFiddler_getCount:
    {
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      /* Not tracing the future in a oneWay send */;
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      _enc__method_MouseFiddler_getCount(_ctx, _this);
      break;
    }
    case _ENC__FUT_MSG_MouseFiddler_up:
    {
      future_t* _fut = ((encore_fut_msg_t*) _m)->_fut;
      _enc__active_SDL_Main_t* _enc__arg_main = ((_enc__fut_msg_MouseFiddler_up_t*) _m)->f1;
      SDL_Event* _enc__arg_event = ((_enc__fut_msg_MouseFiddler_up_t*) _m)->f2;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      pony_traceactor((*_ctx), ((pony_actor_t*) _enc__arg_main));
      pony_trace((*_ctx), _enc__arg_event);
      pony_traceobject((*_ctx), _fut, future_type.trace);
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      future_fulfil(_ctx, _fut, ((encore_arg_t) {.p = _enc__method_MouseFiddler_up(_ctx, _this, _enc__arg_main, _enc__arg_event)}));
      break;
    }
    case _ENC__ONEWAY_MSG_MouseFiddler_up:
    {
      _enc__active_SDL_Main_t* _enc__arg_main = ((_enc__oneway_msg_MouseFiddler_up_t*) _m)->f1;
      SDL_Event* _enc__arg_event = ((_enc__oneway_msg_MouseFiddler_up_t*) _m)->f2;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      pony_traceactor((*_ctx), ((pony_actor_t*) _enc__arg_main));
      pony_trace((*_ctx), _enc__arg_event);
      /* Not tracing the future in a oneWay send */;
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      _enc__method_MouseFiddler_up(_ctx, _this, _enc__arg_main, _enc__arg_event);
      break;
    }
    case _ENC__FUT_MSG_MouseFiddler_key:
    {
      future_t* _fut = ((encore_fut_msg_t*) _m)->_fut;
      tuple_t* _enc__arg_tup = ((_enc__fut_msg_MouseFiddler_key_t*) _m)->f1;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      pony_traceobject((*_ctx), _enc__arg_tup, tuple_trace);
      pony_traceobject((*_ctx), _fut, future_type.trace);
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      future_fulfil(_ctx, _fut, ((encore_arg_t) {.i = _enc__method_MouseFiddler_key(_ctx, _this, _enc__arg_tup)}));
      break;
    }
    case _ENC__ONEWAY_MSG_MouseFiddler_key:
    {
      tuple_t* _enc__arg_tup = ((_enc__oneway_msg_MouseFiddler_key_t*) _m)->f1;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      pony_traceobject((*_ctx), _enc__arg_tup, tuple_trace);
      /* Not tracing the future in a oneWay send */;
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      _enc__method_MouseFiddler_key(_ctx, _this, _enc__arg_tup);
      break;
    }
    case _ENC__FUT_MSG_MouseFiddler_draw:
    {
      future_t* _fut = ((encore_fut_msg_t*) _m)->_fut;
      tuple_t* _enc__arg_tup = ((_enc__fut_msg_MouseFiddler_draw_t*) _m)->f1;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      pony_traceobject((*_ctx), _enc__arg_tup, tuple_trace);
      pony_traceobject((*_ctx), _fut, future_type.trace);
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      future_fulfil(_ctx, _fut, ((encore_arg_t) {.i = _enc__method_MouseFiddler_draw(_ctx, _this, _enc__arg_tup)}));
      break;
    }
    case _ENC__ONEWAY_MSG_MouseFiddler_draw:
    {
      tuple_t* _enc__arg_tup = ((_enc__oneway_msg_MouseFiddler_draw_t*) _m)->f1;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      pony_traceobject((*_ctx), _enc__arg_tup, tuple_trace);
      /* Not tracing the future in a oneWay send */;
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      _enc__method_MouseFiddler_draw(_ctx, _this, _enc__arg_tup);
      break;
    }
    case _ENC__FUT_MSG_MouseFiddler_down:
    {
      future_t* _fut = ((encore_fut_msg_t*) _m)->_fut;
      tuple_t* _enc__arg_tup = ((_enc__fut_msg_MouseFiddler_down_t*) _m)->f1;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      pony_traceobject((*_ctx), _enc__arg_tup, tuple_trace);
      pony_traceobject((*_ctx), _fut, future_type.trace);
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      future_fulfil(_ctx, _fut, ((encore_arg_t) {.i = _enc__method_MouseFiddler_down(_ctx, _this, _enc__arg_tup)}));
      break;
    }
    case _ENC__ONEWAY_MSG_MouseFiddler_down:
    {
      tuple_t* _enc__arg_tup = ((_enc__oneway_msg_MouseFiddler_down_t*) _m)->f1;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      pony_traceobject((*_ctx), _enc__arg_tup, tuple_trace);
      /* Not tracing the future in a oneWay send */;
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      _enc__method_MouseFiddler_down(_ctx, _this, _enc__arg_tup);
      break;
    }
    default:
    {
      printf("error, got invalid id: %zd", _m->id);
    }
  };
}


pony_type_t _enc__active_MouseFiddler_type = {.id=_ENC__ID_MouseFiddler, .size=sizeof(_enc__active_MouseFiddler_t), .trace=_enc__trace_MouseFiddler, .dispatch=_enc__dispatch_MouseFiddler, .vtable=trait_method_selector};
