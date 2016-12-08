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


void _enc__type_init__encore_libs_master_SDL_SDL_Primitives_ColorRGBA(_enc__passive__encore_libs_master_SDL_SDL_Primitives_ColorRGBA_t* this, ... )
{
  va_list params;
  va_start(params, this);
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


_enc__passive__encore_libs_master_SDL_SDL_Primitives_ColorRGBA_t* _enc__constructor__encore_libs_master_SDL_SDL_Primitives_ColorRGBA(pony_ctx_t** _ctx)
{
  _enc__passive__encore_libs_master_SDL_SDL_Primitives_ColorRGBA_t* this = ((_enc__passive__encore_libs_master_SDL_SDL_Primitives_ColorRGBA_t*) encore_alloc((*_ctx), sizeof(_enc__passive__encore_libs_master_SDL_SDL_Primitives_ColorRGBA_t)));
  this->_enc__self_type = (&(_enc__passive__encore_libs_master_SDL_SDL_Primitives_ColorRGBA_type));
  return this;
}


void* _enc__method__encore_libs_master_SDL_SDL_Primitives_ColorRGBA__init(pony_ctx_t** _ctx, _enc__passive__encore_libs_master_SDL_SDL_Primitives_ColorRGBA_t* _this, int64_t _enc__arg_r, int64_t _enc__arg_g, int64_t _enc__arg_b, int64_t _enc__arg_a)
{
  /* this.r = r */;
  (*({ _this;}))._enc__field_r = _enc__arg_r;
  /* this.g = g */;
  (*({ _this;}))._enc__field_g = _enc__arg_g;
  /* this.b = b */;
  (*({ _this;}))._enc__field_b = _enc__arg_b;
  /* this.a = a */;
  (*({ _this;}))._enc__field_a = _enc__arg_a;
  return UNIT;
}


SDL_Color _enc__method__encore_libs_master_SDL_SDL_Primitives_ColorRGBA_getCRepresentation(pony_ctx_t** _ctx, _enc__passive__encore_libs_master_SDL_SDL_Primitives_ColorRGBA_t* _this)
{
  /* let r = this.r */;
  /* r = this.r */;
  int64_t _fieldacc_0 = (*_this)._enc__field_r;
  int64_t _r_1 = _fieldacc_0;
  /* let g = this.g */;
  /* g = this.g */;
  int64_t _fieldacc_2 = (*_this)._enc__field_g;
  int64_t _g_3 = _fieldacc_2;
  /* let b = this.b */;
  /* b = this.b */;
  int64_t _fieldacc_4 = (*_this)._enc__field_b;
  int64_t _b_5 = _fieldacc_4;
  /* let a = this.a */;
  /* a = this.a */;
  int64_t _fieldacc_6 = (*_this)._enc__field_a;
  int64_t _a_7 = _fieldacc_6;
  /* embed SDL_Color (SDL_Color){#{r}#, #{g}#, #{b}#, #{a}#}; end */;
  SDL_Color _embed_8 = ({(SDL_Color){_r_1, _g_3, _b_5, _a_7};});
  return ((SDL_Color) _embed_8);
}


pony_type_t _enc__passive__encore_libs_master_SDL_SDL_Primitives_ColorRGBA_type = {.id=_ENC__ID__encore_libs_master_SDL_SDL_Primitives_ColorRGBA, .size=sizeof(_enc__passive__encore_libs_master_SDL_SDL_Primitives_ColorRGBA_t), .trace=_enc__trace__encore_libs_master_SDL_SDL_Primitives_ColorRGBA, .vtable=trait_method_selector};
