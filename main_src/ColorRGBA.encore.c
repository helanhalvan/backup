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


void _enc__type_init__encore_libs_master_SDL_SDL_Primitives_ColorRGBA(_enc__passive__encore_libs_master_SDL_SDL_Primitives_ColorRGBA_t* _this, ... )
{
  va_list params;
  va_start(params, _this);
  va_end(params);
}


void _enc__trace__encore_libs_master_SDL_SDL_Primitives_ColorRGBA(pony_ctx_t* _ctx_arg, void* p)
{
  pony_ctx_t** _ctx = (&(_ctx_arg));
  _enc__passive__encore_libs_master_SDL_SDL_Primitives_ColorRGBA_t* _this = p;
  int64_t _enc__field_r = _this->_enc__field_r;
  /* Not tracing field '_enc__field_r' */;
  int64_t _enc__field_g = _this->_enc__field_g;
  /* Not tracing field '_enc__field_g' */;
  int64_t _enc__field_b = _this->_enc__field_b;
  /* Not tracing field '_enc__field_b' */;
  int64_t _enc__field_a = _this->_enc__field_a;
  /* Not tracing field '_enc__field_a' */;
}


_enc__passive__encore_libs_master_SDL_SDL_Primitives_ColorRGBA_t* _enc__constructor__encore_libs_master_SDL_SDL_Primitives_ColorRGBA(pony_ctx_t** _ctx, pony_type_t** runtimeType)
{
  _enc__passive__encore_libs_master_SDL_SDL_Primitives_ColorRGBA_t* _this = ((_enc__passive__encore_libs_master_SDL_SDL_Primitives_ColorRGBA_t*) encore_alloc((*_ctx), sizeof(_enc__passive__encore_libs_master_SDL_SDL_Primitives_ColorRGBA_t)));
  _this->_enc__self_type = (&(_enc__passive__encore_libs_master_SDL_SDL_Primitives_ColorRGBA_type));
  return _this;
}


void* _enc__method__encore_libs_master_SDL_SDL_Primitives_ColorRGBA_init(pony_ctx_t** _ctx, _enc__passive__encore_libs_master_SDL_SDL_Primitives_ColorRGBA_t* _this, pony_type_t** runtimeType, int64_t _enc__arg_r, int64_t _enc__arg_g, int64_t _enc__arg_b, int64_t _enc__arg_a)
{
  ENC_DTRACE3(METHOD_ENTRY, (uintptr_t)*_ctx, (uintptr_t)_this, "init");
  /* this.r = r */;
  (*({ENC_DTRACE3(FIELD_WRITE, (uintptr_t)*_ctx, (uintptr_t)_this, "r"); _this;}))._enc__field_r = _enc__arg_r;
  /* this.g = g */;
  (*({ENC_DTRACE3(FIELD_WRITE, (uintptr_t)*_ctx, (uintptr_t)_this, "g"); _this;}))._enc__field_g = _enc__arg_g;
  /* this.b = b */;
  (*({ENC_DTRACE3(FIELD_WRITE, (uintptr_t)*_ctx, (uintptr_t)_this, "b"); _this;}))._enc__field_b = _enc__arg_b;
  /* this.a = a */;
  (*({ENC_DTRACE3(FIELD_WRITE, (uintptr_t)*_ctx, (uintptr_t)_this, "a"); _this;}))._enc__field_a = _enc__arg_a;
  ENC_DTRACE3(METHOD_EXIT, (uintptr_t)*_ctx, (uintptr_t)_this, "init");
  return UNIT;
}


SDL_Color _enc__method__encore_libs_master_SDL_SDL_Primitives_ColorRGBA_getCRepresentation(pony_ctx_t** _ctx, _enc__passive__encore_libs_master_SDL_SDL_Primitives_ColorRGBA_t* _this, pony_type_t** runtimeType)
{
  ENC_DTRACE3(METHOD_ENTRY, (uintptr_t)*_ctx, (uintptr_t)_this, "getCRepresentation");
  /* var r = this.r */;
  /* r = this.r */;
  ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "r");
  int64_t _fieldacc_0 = (*_this)._enc__field_r;
  int64_t _r_1 = _fieldacc_0;
  /* var g = this.g */;
  /* g = this.g */;
  ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "g");
  int64_t _fieldacc_2 = (*_this)._enc__field_g;
  int64_t _g_3 = _fieldacc_2;
  /* var b = this.b */;
  /* b = this.b */;
  ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "b");
  int64_t _fieldacc_4 = (*_this)._enc__field_b;
  int64_t _b_5 = _fieldacc_4;
  /* var a = this.a */;
  /* a = this.a */;
  ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "a");
  int64_t _fieldacc_6 = (*_this)._enc__field_a;
  int64_t _a_7 = _fieldacc_6;
  /* embed SDL_Color (SDL_Color){#{r}, #{g}, #{b}, #{a}};
    end */;
  SDL_Color _embed_8 = ({(SDL_Color){_r_1, _g_3, _b_5, _a_7};
   });
  ENC_DTRACE3(METHOD_EXIT, (uintptr_t)*_ctx, (uintptr_t)_this, "getCRepresentation");
  return ((SDL_Color) _embed_8);
}


pony_type_t _enc__passive__encore_libs_master_SDL_SDL_Primitives_ColorRGBA_type = {.id=_ENC__ID__encore_libs_master_SDL_SDL_Primitives_ColorRGBA, .size=sizeof(_enc__passive__encore_libs_master_SDL_SDL_Primitives_ColorRGBA_t), .trace=_enc__trace__encore_libs_master_SDL_SDL_Primitives_ColorRGBA, .vtable=trait_method_selector};
