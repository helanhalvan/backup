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


void _enc__type_init__encore_libs_master_SDL_SDL_Primitives_Rectangle(_enc__passive__encore_libs_master_SDL_SDL_Primitives_Rectangle_t* _this, ... )
{
  va_list params;
  va_start(params, _this);
  va_end(params);
}


void _enc__trace__encore_libs_master_SDL_SDL_Primitives_Rectangle(pony_ctx_t* _ctx_arg, void* p)
{
  pony_ctx_t** _ctx = (&(_ctx_arg));
  _enc__passive__encore_libs_master_SDL_SDL_Primitives_Rectangle_t* _this = p;
  int64_t _enc__field_x = _this->_enc__field_x;
  /* Not tracing field '_enc__field_x' */;
  int64_t _enc__field_y = _this->_enc__field_y;
  /* Not tracing field '_enc__field_y' */;
  int64_t _enc__field_w = _this->_enc__field_w;
  /* Not tracing field '_enc__field_w' */;
  int64_t _enc__field_h = _this->_enc__field_h;
  /* Not tracing field '_enc__field_h' */;
}


_enc__passive__encore_libs_master_SDL_SDL_Primitives_Rectangle_t* _enc__constructor__encore_libs_master_SDL_SDL_Primitives_Rectangle(pony_ctx_t** _ctx, pony_type_t** runtimeType)
{
  _enc__passive__encore_libs_master_SDL_SDL_Primitives_Rectangle_t* _this = ((_enc__passive__encore_libs_master_SDL_SDL_Primitives_Rectangle_t*) encore_alloc((*_ctx), sizeof(_enc__passive__encore_libs_master_SDL_SDL_Primitives_Rectangle_t)));
  _this->_enc__self_type = (&(_enc__passive__encore_libs_master_SDL_SDL_Primitives_Rectangle_type));
  return _this;
}


void* _enc__method__encore_libs_master_SDL_SDL_Primitives_Rectangle_init(pony_ctx_t** _ctx, _enc__passive__encore_libs_master_SDL_SDL_Primitives_Rectangle_t* _this, pony_type_t** runtimeType, int64_t _enc__arg_x, int64_t _enc__arg_y, int64_t _enc__arg_w, int64_t _enc__arg_h)
{
  ENC_DTRACE3(METHOD_ENTRY, (uintptr_t)*_ctx, (uintptr_t)_this, "init");
  /* this.x = x */;
  (*({ENC_DTRACE3(FIELD_WRITE, (uintptr_t)*_ctx, (uintptr_t)_this, "x"); _this;}))._enc__field_x = _enc__arg_x;
  /* this.y = y */;
  (*({ENC_DTRACE3(FIELD_WRITE, (uintptr_t)*_ctx, (uintptr_t)_this, "y"); _this;}))._enc__field_y = _enc__arg_y;
  /* this.w = w */;
  (*({ENC_DTRACE3(FIELD_WRITE, (uintptr_t)*_ctx, (uintptr_t)_this, "w"); _this;}))._enc__field_w = _enc__arg_w;
  /* this.h = h */;
  (*({ENC_DTRACE3(FIELD_WRITE, (uintptr_t)*_ctx, (uintptr_t)_this, "h"); _this;}))._enc__field_h = _enc__arg_h;
  ENC_DTRACE3(METHOD_EXIT, (uintptr_t)*_ctx, (uintptr_t)_this, "init");
  return UNIT;
}


pony_type_t _enc__passive__encore_libs_master_SDL_SDL_Primitives_Rectangle_type = {.id=_ENC__ID__encore_libs_master_SDL_SDL_Primitives_Rectangle, .size=sizeof(_enc__passive__encore_libs_master_SDL_SDL_Primitives_Rectangle_t), .trace=_enc__trace__encore_libs_master_SDL_SDL_Primitives_Rectangle, .vtable=trait_method_selector};
