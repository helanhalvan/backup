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


void _enc__type_init__encore_libs_master_SDL_SDL_Events_SDL_MouseButtonEvent(_enc__passive__encore_libs_master_SDL_SDL_Events_SDL_MouseButtonEvent_t* this, ... )
{
  va_list params;
  va_start(params, this);
  va_end(params);
}


void _enc__trace__encore_libs_master_SDL_SDL_Events_SDL_MouseButtonEvent(pony_ctx_t* _ctx_arg, void* p)
{
  pony_ctx_t** _ctx = (&(_ctx_arg));
  _enc__passive__encore_libs_master_SDL_SDL_Events_SDL_MouseButtonEvent_t* _this = p;
  uint64_t _enc__field_timestamp = _this->_enc__field_timestamp;
  /* Not tracing field '_enc__field_timestamp' */;
  uint64_t _enc__field_windowID = _this->_enc__field_windowID;
  /* Not tracing field '_enc__field_windowID' */;
  uint64_t _enc__field_which = _this->_enc__field_which;
  /* Not tracing field '_enc__field_which' */;
  uint64_t _enc__field_button = _this->_enc__field_button;
  /* Not tracing field '_enc__field_button' */;
  uint64_t _enc__field_state = _this->_enc__field_state;
  /* Not tracing field '_enc__field_state' */;
  uint64_t _enc__field_clicks = _this->_enc__field_clicks;
  /* Not tracing field '_enc__field_clicks' */;
  int64_t _enc__field_x = _this->_enc__field_x;
  /* Not tracing field '_enc__field_x' */;
  int64_t _enc__field_y = _this->_enc__field_y;
  /* Not tracing field '_enc__field_y' */;
}


_enc__passive__encore_libs_master_SDL_SDL_Events_SDL_MouseButtonEvent_t* _enc__constructor__encore_libs_master_SDL_SDL_Events_SDL_MouseButtonEvent(pony_ctx_t** _ctx)
{
  _enc__passive__encore_libs_master_SDL_SDL_Events_SDL_MouseButtonEvent_t* this = ((_enc__passive__encore_libs_master_SDL_SDL_Events_SDL_MouseButtonEvent_t*) encore_alloc((*_ctx), sizeof(_enc__passive__encore_libs_master_SDL_SDL_Events_SDL_MouseButtonEvent_t)));
  this->_enc__self_type = (&(_enc__passive__encore_libs_master_SDL_SDL_Events_SDL_MouseButtonEvent_type));
  return this;
}


void* _enc__method__encore_libs_master_SDL_SDL_Events_SDL_MouseButtonEvent__init(pony_ctx_t** _ctx, _enc__passive__encore_libs_master_SDL_SDL_Events_SDL_MouseButtonEvent_t* _this, SDL_Event* _enc__arg_event)
{
  /* let timestamp = this.timestamp */;
  /* timestamp = this.timestamp */;
  uint64_t _fieldacc_0 = (*_this)._enc__field_timestamp;
  uint64_t _timestamp_1 = _fieldacc_0;
  /* let windowID = this.windowID */;
  /* windowID = this.windowID */;
  uint64_t _fieldacc_2 = (*_this)._enc__field_windowID;
  uint64_t _windowID_3 = _fieldacc_2;
  /* let which = this.which */;
  /* which = this.which */;
  uint64_t _fieldacc_4 = (*_this)._enc__field_which;
  uint64_t _which_5 = _fieldacc_4;
  /* let button = this.button */;
  /* button = this.button */;
  uint64_t _fieldacc_6 = (*_this)._enc__field_button;
  uint64_t _button_7 = _fieldacc_6;
  /* let state = this.state */;
  /* state = this.state */;
  uint64_t _fieldacc_8 = (*_this)._enc__field_state;
  uint64_t _state_9 = _fieldacc_8;
  /* let clicks = this.clicks */;
  /* clicks = this.clicks */;
  uint64_t _fieldacc_10 = (*_this)._enc__field_clicks;
  uint64_t _clicks_11 = _fieldacc_10;
  /* let x = this.x */;
  /* x = this.x */;
  int64_t _fieldacc_12 = (*_this)._enc__field_x;
  int64_t _x_13 = _fieldacc_12;
  /* let y = this.y */;
  /* y = this.y */;
  int64_t _fieldacc_14 = (*_this)._enc__field_y;
  int64_t _y_15 = _fieldacc_14;
  /* embed void SDL_MouseButtonEvent* mouse_event = (SDL_MouseButtonEvent*)#{event}#;
      #{timestamp}#=  mouse_event->timestamp;
      #{windowID}#=  mouse_event->windowID;
      #{which}#=  mouse_event->which;
      #{button}#=  mouse_event->button;
      #{state}#=  mouse_event->state;
      #{clicks}#=  mouse_event->clicks;
      #{x}#=  mouse_event->x;
      #{y}#=  mouse_event->y; end */;
  ({SDL_MouseButtonEvent* mouse_event = (SDL_MouseButtonEvent*)_enc__arg_event;
      _timestamp_1=  mouse_event->timestamp;
      _windowID_3=  mouse_event->windowID;
      _which_5=  mouse_event->which;
      _button_7=  mouse_event->button;
      _state_9=  mouse_event->state;
      _clicks_11=  mouse_event->clicks;
      _x_13=  mouse_event->x;
      _y_15=  mouse_event->y;});
  /* this.timestamp = timestamp */;
  (*({ _this;}))._enc__field_timestamp = _timestamp_1;
  /* this.windowID = windowID */;
  (*({ _this;}))._enc__field_windowID = _windowID_3;
  /* this.which = which */;
  (*({ _this;}))._enc__field_which = _which_5;
  /* this.button = button */;
  (*({ _this;}))._enc__field_button = _button_7;
  /* this.state = state */;
  (*({ _this;}))._enc__field_state = _state_9;
  /* this.clicks = clicks */;
  (*({ _this;}))._enc__field_clicks = _clicks_11;
  /* this.x = x */;
  (*({ _this;}))._enc__field_x = _x_13;
  /* this.y = y */;
  (*({ _this;}))._enc__field_y = _y_15;
  return UNIT;
}


pony_type_t _enc__passive__encore_libs_master_SDL_SDL_Events_SDL_MouseButtonEvent_type = {.id=_ENC__ID__encore_libs_master_SDL_SDL_Events_SDL_MouseButtonEvent, .size=sizeof(_enc__passive__encore_libs_master_SDL_SDL_Events_SDL_MouseButtonEvent_t), .trace=_enc__trace__encore_libs_master_SDL_SDL_Events_SDL_MouseButtonEvent, .vtable=trait_method_selector};
