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


void _enc__type_init__encore_libs_master_SDL_SDL_Primitives_Point2D(_enc__passive__encore_libs_master_SDL_SDL_Primitives_Point2D_t* this, ... )
{
  va_list params;
  va_start(params, this);
  va_end(params);
}


void _enc__trace__encore_libs_master_SDL_SDL_Primitives_Point2D(pony_ctx_t* _ctx_arg, void* p)
{
  pony_ctx_t** _ctx = (&(_ctx_arg));
  _enc__passive__encore_libs_master_SDL_SDL_Primitives_Point2D_t* _this = p;
  int64_t _enc__field_x = _this->_enc__field_x;
  /* Not tracing field '_enc__field_x' */;
  int64_t _enc__field_y = _this->_enc__field_y;
  /* Not tracing field '_enc__field_y' */;
}


_enc__passive__encore_libs_master_SDL_SDL_Primitives_Point2D_t* _enc__constructor__encore_libs_master_SDL_SDL_Primitives_Point2D(pony_ctx_t** _ctx)
{
  _enc__passive__encore_libs_master_SDL_SDL_Primitives_Point2D_t* this = ((_enc__passive__encore_libs_master_SDL_SDL_Primitives_Point2D_t*) encore_alloc((*_ctx), sizeof(_enc__passive__encore_libs_master_SDL_SDL_Primitives_Point2D_t)));
  this->_enc__self_type = (&(_enc__passive__encore_libs_master_SDL_SDL_Primitives_Point2D_type));
  return this;
}


void* _enc__method__encore_libs_master_SDL_SDL_Primitives_Point2D__init(pony_ctx_t** _ctx, _enc__passive__encore_libs_master_SDL_SDL_Primitives_Point2D_t* _this, int64_t _enc__arg_x, int64_t _enc__arg_y)
{
  /* this.x = x */;
  (*({ _this;}))._enc__field_x = _enc__arg_x;
  /* this.y = y */;
  (*({ _this;}))._enc__field_y = _enc__arg_y;
  return UNIT;
}


pony_type_t _enc__passive__encore_libs_master_SDL_SDL_Primitives_Point2D_type = {.id=_ENC__ID__encore_libs_master_SDL_SDL_Primitives_Point2D, .size=sizeof(_enc__passive__encore_libs_master_SDL_SDL_Primitives_Point2D_t), .trace=_enc__trace__encore_libs_master_SDL_SDL_Primitives_Point2D, .vtable=trait_method_selector};
