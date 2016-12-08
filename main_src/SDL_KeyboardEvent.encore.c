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


void _enc__type_init__encore_libs_master_SDL_SDL_Events_SDL_KeyboardEvent(_enc__passive__encore_libs_master_SDL_SDL_Events_SDL_KeyboardEvent_t* this, ... )
{
  va_list params;
  va_start(params, this);
  va_end(params);
}


void _enc__trace__encore_libs_master_SDL_SDL_Events_SDL_KeyboardEvent(pony_ctx_t* _ctx_arg, void* p)
{
  pony_ctx_t** _ctx = (&(_ctx_arg));
  _enc__passive__encore_libs_master_SDL_SDL_Events_SDL_KeyboardEvent_t* _this = p;
  uint64_t _enc__field_timestamp = _this->_enc__field_timestamp;
  /* Not tracing field '_enc__field_timestamp' */;
  uint64_t _enc__field_windowID = _this->_enc__field_windowID;
  /* Not tracing field '_enc__field_windowID' */;
  uint64_t _enc__field_state = _this->_enc__field_state;
  /* Not tracing field '_enc__field_state' */;
  uint64_t _enc__field_repeated = _this->_enc__field_repeated;
  /* Not tracing field '_enc__field_repeated' */;
  uint64_t _enc__field_keycode = _this->_enc__field_keycode;
  /* Not tracing field '_enc__field_keycode' */;
}


_enc__passive__encore_libs_master_SDL_SDL_Events_SDL_KeyboardEvent_t* _enc__constructor__encore_libs_master_SDL_SDL_Events_SDL_KeyboardEvent(pony_ctx_t** _ctx)
{
  _enc__passive__encore_libs_master_SDL_SDL_Events_SDL_KeyboardEvent_t* this = ((_enc__passive__encore_libs_master_SDL_SDL_Events_SDL_KeyboardEvent_t*) encore_alloc((*_ctx), sizeof(_enc__passive__encore_libs_master_SDL_SDL_Events_SDL_KeyboardEvent_t)));
  this->_enc__self_type = (&(_enc__passive__encore_libs_master_SDL_SDL_Events_SDL_KeyboardEvent_type));
  return this;
}


void* _enc__method__encore_libs_master_SDL_SDL_Events_SDL_KeyboardEvent__init(pony_ctx_t** _ctx, _enc__passive__encore_libs_master_SDL_SDL_Events_SDL_KeyboardEvent_t* _this, SDL_Event* _enc__arg_event)
{
  /* let timestamp = this.timestamp */;
  /* timestamp = this.timestamp */;
  uint64_t _fieldacc_0 = (*_this)._enc__field_timestamp;
  uint64_t _timestamp_1 = _fieldacc_0;
  /* let windowID = this.windowID */;
  /* windowID = this.windowID */;
  uint64_t _fieldacc_2 = (*_this)._enc__field_windowID;
  uint64_t _windowID_3 = _fieldacc_2;
  /* let state = this.state */;
  /* state = this.state */;
  uint64_t _fieldacc_4 = (*_this)._enc__field_state;
  uint64_t _state_5 = _fieldacc_4;
  /* let repeated = this.repeated */;
  /* repeated = this.repeated */;
  uint64_t _fieldacc_6 = (*_this)._enc__field_repeated;
  uint64_t _repeated_7 = _fieldacc_6;
  /* let keycode = this.keycode */;
  /* keycode = this.keycode */;
  uint64_t _fieldacc_8 = (*_this)._enc__field_keycode;
  uint64_t _keycode_9 = _fieldacc_8;
  /* embed void SDL_KeyboardEvent* key_event = (SDL_KeyboardEvent*)#{event}#;
        #{timestamp}#= key_event->timestamp;
        #{windowID}#= key_event->windowID;
        #{state}#= key_event->state;
        #{repeated}#= key_event->repeat;
        #{keycode}#= key_event->keysym.sym; end */;
  ({SDL_KeyboardEvent* key_event = (SDL_KeyboardEvent*)_enc__arg_event;
        _timestamp_1= key_event->timestamp;
        _windowID_3= key_event->windowID;
        _state_5= key_event->state;
        _repeated_7= key_event->repeat;
        _keycode_9= key_event->keysym.sym;});
  /* this.timestamp = timestamp */;
  (*({ _this;}))._enc__field_timestamp = _timestamp_1;
  /* this.windowID = windowID */;
  (*({ _this;}))._enc__field_windowID = _windowID_3;
  /* this.state = state */;
  (*({ _this;}))._enc__field_state = _state_5;
  /* this.repeated = repeated */;
  (*({ _this;}))._enc__field_repeated = _repeated_7;
  /* this.keycode = keycode */;
  (*({ _this;}))._enc__field_keycode = _keycode_9;
  return UNIT;
}


pony_type_t _enc__passive__encore_libs_master_SDL_SDL_Events_SDL_KeyboardEvent_type = {.id=_ENC__ID__encore_libs_master_SDL_SDL_Events_SDL_KeyboardEvent, .size=sizeof(_enc__passive__encore_libs_master_SDL_SDL_Events_SDL_KeyboardEvent_t), .trace=_enc__trace__encore_libs_master_SDL_SDL_Events_SDL_KeyboardEvent, .vtable=trait_method_selector};
