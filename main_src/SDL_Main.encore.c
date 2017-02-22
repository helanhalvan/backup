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


struct _enc__active__encore_libs_master_SDL_SDL_Main_SDL_Main_t
{
  encore_actor_t _enc__actor;
  sdl_object* _enc__field_sdl_settings;
  sdl_texture* _enc__field_sdl_texture;
  TTF_Font* _enc__field_sdl_font;
  int64_t _enc__field_quit;
};


void _enc__type_init__encore_libs_master_SDL_SDL_Main_SDL_Main(_enc__active__encore_libs_master_SDL_SDL_Main_SDL_Main_t* _this, ... )
{
  va_list params;
  va_start(params, _this);
  va_end(params);
}


void _enc__trace__encore_libs_master_SDL_SDL_Main_SDL_Main(pony_ctx_t* _ctx_arg, void* p)
{
  pony_ctx_t** _ctx = (&(_ctx_arg));
  _enc__active__encore_libs_master_SDL_SDL_Main_SDL_Main_t* _this = p;
  sdl_object* _enc__field_sdl_settings = _this->_enc__field_sdl_settings;
  pony_trace((*_ctx), _enc__field_sdl_settings);
  sdl_texture* _enc__field_sdl_texture = _this->_enc__field_sdl_texture;
  pony_trace((*_ctx), _enc__field_sdl_texture);
  TTF_Font* _enc__field_sdl_font = _this->_enc__field_sdl_font;
  pony_trace((*_ctx), _enc__field_sdl_font);
  int64_t _enc__field_quit = _this->_enc__field_quit;
  /* Not tracing field '_enc__field_quit' */;
}


_enc__active__encore_libs_master_SDL_SDL_Main_SDL_Main_t* _enc__constructor__encore_libs_master_SDL_SDL_Main_SDL_Main(pony_ctx_t** _ctx, pony_type_t** runtimeType)
{
  _enc__active__encore_libs_master_SDL_SDL_Main_SDL_Main_t* _this = ((_enc__active__encore_libs_master_SDL_SDL_Main_SDL_Main_t*) encore_create((*_ctx), (&(_enc__active__encore_libs_master_SDL_SDL_Main_SDL_Main_type))));
  return _this;
}


void* _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Main_drawRectangle(pony_ctx_t** _ctx, _enc__active__encore_libs_master_SDL_SDL_Main_SDL_Main_t* _this, pony_type_t** runtimeType, _enc__passive__encore_libs_master_SDL_SDL_Primitives_Rectangle_t* _enc__arg_rec)
{
  ENC_DTRACE3(METHOD_ENTRY, (uintptr_t)*_ctx, (uintptr_t)_this, "drawRectangle");
  /* var sdl_settings = this.sdl_settings */;
  /* sdl_settings = this.sdl_settings */;
  ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "sdl_settings");
  sdl_object* _fieldacc_0 = (*_this)._enc__field_sdl_settings;
  sdl_object* _sdl_settings_1 = _fieldacc_0;
  /* var sdl_texture = this.sdl_texture */;
  /* sdl_texture = this.sdl_texture */;
  ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "sdl_texture");
  sdl_texture* _fieldacc_2 = (*_this)._enc__field_sdl_texture;
  sdl_texture* _sdl_texture_3 = _fieldacc_2;
  /* var x = rec.x */;
  /* x = rec.x */;
  ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_enc__arg_rec, "x");
  int64_t _fieldacc_4 = (*_enc__arg_rec)._enc__field_x;
  int64_t _x_5 = _fieldacc_4;
  /* var y = rec.y */;
  /* y = rec.y */;
  ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_enc__arg_rec, "y");
  int64_t _fieldacc_6 = (*_enc__arg_rec)._enc__field_y;
  int64_t _y_7 = _fieldacc_6;
  /* var w = rec.w */;
  /* w = rec.w */;
  ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_enc__arg_rec, "w");
  int64_t _fieldacc_8 = (*_enc__arg_rec)._enc__field_w;
  int64_t _w_9 = _fieldacc_8;
  /* var h = rec.h */;
  /* h = rec.h */;
  ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_enc__arg_rec, "h");
  int64_t _fieldacc_10 = (*_enc__arg_rec)._enc__field_h;
  int64_t _h_11 = _fieldacc_10;
  /* embed void SDL_Rect rect;
      rect.x = #{x};
      rect.y = #{y};
      rect.w = #{w};
      rect.h = #{h};
      SDL_RenderDrawRect(#{sdl_settings}->renderer, &rect);
    end */;
  ({SDL_Rect rect;
      rect.x = _x_5;
      rect.y = _y_7;
      rect.w = _w_9;
      rect.h = _h_11;
      SDL_RenderDrawRect(_sdl_settings_1->renderer, &rect);
   });
  ENC_DTRACE3(METHOD_EXIT, (uintptr_t)*_ctx, (uintptr_t)_this, "drawRectangle");
  return UNIT;
}


future_t* _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Main_drawRectangle_future(pony_ctx_t** _ctx, _enc__active__encore_libs_master_SDL_SDL_Main_SDL_Main_t* _this, pony_type_t** runtimeType, _enc__passive__encore_libs_master_SDL_SDL_Primitives_Rectangle_t* _enc__arg_rec)
{
  future_t* _fut = future_mk(_ctx, ENCORE_PRIMITIVE);
  pony_gc_send((*_ctx));
  encore_trace_object((*_ctx), _enc__arg_rec, _enc__trace__encore_libs_master_SDL_SDL_Primitives_Rectangle);
  encore_trace_object((*_ctx), _fut, future_trace);
  pony_send_done((*_ctx));
  _enc__fut_msg__encore_libs_master_SDL_SDL_Main_SDL_Main_drawRectangle_t* msg = ((_enc__fut_msg__encore_libs_master_SDL_SDL_Main_SDL_Main_drawRectangle_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__fut_msg__encore_libs_master_SDL_SDL_Main_SDL_Main_drawRectangle_t)), _ENC__FUT_MSG__encore_libs_master_SDL_SDL_Main_SDL_Main_drawRectangle));
  msg->f1 = _enc__arg_rec;
  msg->_fut = _fut;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
  return _fut;
}


void _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Main_drawRectangle_one_way(pony_ctx_t** _ctx, _enc__active__encore_libs_master_SDL_SDL_Main_SDL_Main_t* _this, pony_type_t** runtimeType, _enc__passive__encore_libs_master_SDL_SDL_Primitives_Rectangle_t* _enc__arg_rec)
{
  pony_gc_send((*_ctx));
  encore_trace_object((*_ctx), _enc__arg_rec, _enc__trace__encore_libs_master_SDL_SDL_Primitives_Rectangle);
  /* No tracing future for oneway msg */;
  pony_send_done((*_ctx));
  _enc__oneway_msg__encore_libs_master_SDL_SDL_Main_SDL_Main_drawRectangle_t* msg = ((_enc__oneway_msg__encore_libs_master_SDL_SDL_Main_SDL_Main_drawRectangle_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__oneway_msg__encore_libs_master_SDL_SDL_Main_SDL_Main_drawRectangle_t)), _ENC__ONEWAY_MSG__encore_libs_master_SDL_SDL_Main_SDL_Main_drawRectangle));
  msg->f1 = _enc__arg_rec;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
}


void* _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Main_fillRectangle(pony_ctx_t** _ctx, _enc__active__encore_libs_master_SDL_SDL_Main_SDL_Main_t* _this, pony_type_t** runtimeType, _enc__passive__encore_libs_master_SDL_SDL_Primitives_Rectangle_t* _enc__arg_rec)
{
  ENC_DTRACE3(METHOD_ENTRY, (uintptr_t)*_ctx, (uintptr_t)_this, "fillRectangle");
  /* var sdl_settings = this.sdl_settings */;
  /* sdl_settings = this.sdl_settings */;
  ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "sdl_settings");
  sdl_object* _fieldacc_0 = (*_this)._enc__field_sdl_settings;
  sdl_object* _sdl_settings_1 = _fieldacc_0;
  /* var sdl_texture = this.sdl_texture */;
  /* sdl_texture = this.sdl_texture */;
  ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "sdl_texture");
  sdl_texture* _fieldacc_2 = (*_this)._enc__field_sdl_texture;
  sdl_texture* _sdl_texture_3 = _fieldacc_2;
  /* var x = rec.x */;
  /* x = rec.x */;
  ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_enc__arg_rec, "x");
  int64_t _fieldacc_4 = (*_enc__arg_rec)._enc__field_x;
  int64_t _x_5 = _fieldacc_4;
  /* var y = rec.y */;
  /* y = rec.y */;
  ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_enc__arg_rec, "y");
  int64_t _fieldacc_6 = (*_enc__arg_rec)._enc__field_y;
  int64_t _y_7 = _fieldacc_6;
  /* var w = rec.w */;
  /* w = rec.w */;
  ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_enc__arg_rec, "w");
  int64_t _fieldacc_8 = (*_enc__arg_rec)._enc__field_w;
  int64_t _w_9 = _fieldacc_8;
  /* var h = rec.h */;
  /* h = rec.h */;
  ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_enc__arg_rec, "h");
  int64_t _fieldacc_10 = (*_enc__arg_rec)._enc__field_h;
  int64_t _h_11 = _fieldacc_10;
  /* embed void SDL_Rect rect;
      rect.x = #{x};
      rect.y = #{y};
      rect.w = #{w};
      rect.h = #{h};
      SDL_RenderFillRect(#{sdl_settings}->renderer, &rect);
    end */;
  ({SDL_Rect rect;
      rect.x = _x_5;
      rect.y = _y_7;
      rect.w = _w_9;
      rect.h = _h_11;
      SDL_RenderFillRect(_sdl_settings_1->renderer, &rect);
   });
  ENC_DTRACE3(METHOD_EXIT, (uintptr_t)*_ctx, (uintptr_t)_this, "fillRectangle");
  return UNIT;
}


future_t* _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Main_fillRectangle_future(pony_ctx_t** _ctx, _enc__active__encore_libs_master_SDL_SDL_Main_SDL_Main_t* _this, pony_type_t** runtimeType, _enc__passive__encore_libs_master_SDL_SDL_Primitives_Rectangle_t* _enc__arg_rec)
{
  future_t* _fut = future_mk(_ctx, ENCORE_PRIMITIVE);
  pony_gc_send((*_ctx));
  encore_trace_object((*_ctx), _enc__arg_rec, _enc__trace__encore_libs_master_SDL_SDL_Primitives_Rectangle);
  encore_trace_object((*_ctx), _fut, future_trace);
  pony_send_done((*_ctx));
  _enc__fut_msg__encore_libs_master_SDL_SDL_Main_SDL_Main_fillRectangle_t* msg = ((_enc__fut_msg__encore_libs_master_SDL_SDL_Main_SDL_Main_fillRectangle_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__fut_msg__encore_libs_master_SDL_SDL_Main_SDL_Main_fillRectangle_t)), _ENC__FUT_MSG__encore_libs_master_SDL_SDL_Main_SDL_Main_fillRectangle));
  msg->f1 = _enc__arg_rec;
  msg->_fut = _fut;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
  return _fut;
}


void _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Main_fillRectangle_one_way(pony_ctx_t** _ctx, _enc__active__encore_libs_master_SDL_SDL_Main_SDL_Main_t* _this, pony_type_t** runtimeType, _enc__passive__encore_libs_master_SDL_SDL_Primitives_Rectangle_t* _enc__arg_rec)
{
  pony_gc_send((*_ctx));
  encore_trace_object((*_ctx), _enc__arg_rec, _enc__trace__encore_libs_master_SDL_SDL_Primitives_Rectangle);
  /* No tracing future for oneway msg */;
  pony_send_done((*_ctx));
  _enc__oneway_msg__encore_libs_master_SDL_SDL_Main_SDL_Main_fillRectangle_t* msg = ((_enc__oneway_msg__encore_libs_master_SDL_SDL_Main_SDL_Main_fillRectangle_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__oneway_msg__encore_libs_master_SDL_SDL_Main_SDL_Main_fillRectangle_t)), _ENC__ONEWAY_MSG__encore_libs_master_SDL_SDL_Main_SDL_Main_fillRectangle));
  msg->f1 = _enc__arg_rec;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
}


void* _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Main_setRenderColor(pony_ctx_t** _ctx, _enc__active__encore_libs_master_SDL_SDL_Main_SDL_Main_t* _this, pony_type_t** runtimeType, _enc__passive__encore_libs_master_SDL_SDL_Primitives_ColorRGBA_t* _enc__arg_c)
{
  ENC_DTRACE3(METHOD_ENTRY, (uintptr_t)*_ctx, (uintptr_t)_this, "setRenderColor");
  /* var sdl_settings = this.sdl_settings */;
  /* sdl_settings = this.sdl_settings */;
  ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "sdl_settings");
  sdl_object* _fieldacc_0 = (*_this)._enc__field_sdl_settings;
  sdl_object* _sdl_settings_1 = _fieldacc_0;
  /* var sdl_texture = this.sdl_texture */;
  /* sdl_texture = this.sdl_texture */;
  ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "sdl_texture");
  sdl_texture* _fieldacc_2 = (*_this)._enc__field_sdl_texture;
  sdl_texture* _sdl_texture_3 = _fieldacc_2;
  /* var r = c.r */;
  /* r = c.r */;
  ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_enc__arg_c, "r");
  int64_t _fieldacc_4 = (*_enc__arg_c)._enc__field_r;
  int64_t _r_5 = _fieldacc_4;
  /* var g = c.g */;
  /* g = c.g */;
  ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_enc__arg_c, "g");
  int64_t _fieldacc_6 = (*_enc__arg_c)._enc__field_g;
  int64_t _g_7 = _fieldacc_6;
  /* var b = c.b */;
  /* b = c.b */;
  ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_enc__arg_c, "b");
  int64_t _fieldacc_8 = (*_enc__arg_c)._enc__field_b;
  int64_t _b_9 = _fieldacc_8;
  /* var a = c.a */;
  /* a = c.a */;
  ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_enc__arg_c, "a");
  int64_t _fieldacc_10 = (*_enc__arg_c)._enc__field_a;
  int64_t _a_11 = _fieldacc_10;
  /* embed void SDL_SetRenderDrawColor(#{sdl_settings}->renderer,
                             #{r},
                             #{g},
                             #{b},
                             #{a});
    end */;
  ({SDL_SetRenderDrawColor(_sdl_settings_1->renderer,
                             _r_5,
                             _g_7,
                             _b_9,
                             _a_11);
   });
  ENC_DTRACE3(METHOD_EXIT, (uintptr_t)*_ctx, (uintptr_t)_this, "setRenderColor");
  return UNIT;
}


future_t* _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Main_setRenderColor_future(pony_ctx_t** _ctx, _enc__active__encore_libs_master_SDL_SDL_Main_SDL_Main_t* _this, pony_type_t** runtimeType, _enc__passive__encore_libs_master_SDL_SDL_Primitives_ColorRGBA_t* _enc__arg_c)
{
  future_t* _fut = future_mk(_ctx, ENCORE_PRIMITIVE);
  pony_gc_send((*_ctx));
  encore_trace_object((*_ctx), _enc__arg_c, _enc__trace__encore_libs_master_SDL_SDL_Primitives_ColorRGBA);
  encore_trace_object((*_ctx), _fut, future_trace);
  pony_send_done((*_ctx));
  _enc__fut_msg__encore_libs_master_SDL_SDL_Main_SDL_Main_setRenderColor_t* msg = ((_enc__fut_msg__encore_libs_master_SDL_SDL_Main_SDL_Main_setRenderColor_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__fut_msg__encore_libs_master_SDL_SDL_Main_SDL_Main_setRenderColor_t)), _ENC__FUT_MSG__encore_libs_master_SDL_SDL_Main_SDL_Main_setRenderColor));
  msg->f1 = _enc__arg_c;
  msg->_fut = _fut;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
  return _fut;
}


void _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Main_setRenderColor_one_way(pony_ctx_t** _ctx, _enc__active__encore_libs_master_SDL_SDL_Main_SDL_Main_t* _this, pony_type_t** runtimeType, _enc__passive__encore_libs_master_SDL_SDL_Primitives_ColorRGBA_t* _enc__arg_c)
{
  pony_gc_send((*_ctx));
  encore_trace_object((*_ctx), _enc__arg_c, _enc__trace__encore_libs_master_SDL_SDL_Primitives_ColorRGBA);
  /* No tracing future for oneway msg */;
  pony_send_done((*_ctx));
  _enc__oneway_msg__encore_libs_master_SDL_SDL_Main_SDL_Main_setRenderColor_t* msg = ((_enc__oneway_msg__encore_libs_master_SDL_SDL_Main_SDL_Main_setRenderColor_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__oneway_msg__encore_libs_master_SDL_SDL_Main_SDL_Main_setRenderColor_t)), _ENC__ONEWAY_MSG__encore_libs_master_SDL_SDL_Main_SDL_Main_setRenderColor));
  msg->f1 = _enc__arg_c;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
}


void* _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Main_drawImage(pony_ctx_t** _ctx, _enc__active__encore_libs_master_SDL_SDL_Main_SDL_Main_t* _this, pony_type_t** runtimeType, _enc__passive_String_String_t* _enc__arg_image_path, int64_t _enc__arg_x, int64_t _enc__arg_y, double _enc__arg_x_scale, double _enc__arg_y_scale)
{
  ENC_DTRACE3(METHOD_ENTRY, (uintptr_t)*_ctx, (uintptr_t)_this, "drawImage");
  /* var sdl_settings = this.sdl_settings */;
  /* sdl_settings = this.sdl_settings */;
  ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "sdl_settings");
  sdl_object* _fieldacc_0 = (*_this)._enc__field_sdl_settings;
  sdl_object* _sdl_settings_1 = _fieldacc_0;
  /* var image_path = image_path.data */;
  /* image_path = image_path.data */;
  ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_enc__arg_image_path, "data");
  char* _fieldacc_2 = (*_enc__arg_image_path)._enc__field_data;
  char* _image_path_3 = _fieldacc_2;
  /* embed void SDL_Texture *img = NULL;
      int w, h;
      img = IMG_LoadTexture(#{sdl_settings}->renderer, #{image_path});
      if(img == NULL){
        fprintf(stderr,"Error occuered while loading image:\n%s",#{image_path});
      }
      SDL_QueryTexture(img, NULL, NULL, &w, &h);
      SDL_Rect rect;
      rect.x = #{x};
      rect.y = #{y};
      rect.w = (int)(w*#{x_scale});
      rect.h = (int)(h*#{y_scale});
      SDL_RenderCopy(#{sdl_settings}->renderer, img, NULL, &rect);
      SDL_DestroyTexture(img);
    end */;
  ({SDL_Texture *img = NULL;
      int w, h;
      img = IMG_LoadTexture(_sdl_settings_1->renderer, _image_path_3);
      if(img == NULL){
        fprintf(stderr,"Error occuered while loading image:\n%s",_image_path_3);
      }
      SDL_QueryTexture(img, NULL, NULL, &w, &h);
      SDL_Rect rect;
      rect.x = _enc__arg_x;
      rect.y = _enc__arg_y;
      rect.w = (int)(w*_enc__arg_x_scale);
      rect.h = (int)(h*_enc__arg_y_scale);
      SDL_RenderCopy(_sdl_settings_1->renderer, img, NULL, &rect);
      SDL_DestroyTexture(img);
   });
  ENC_DTRACE3(METHOD_EXIT, (uintptr_t)*_ctx, (uintptr_t)_this, "drawImage");
  return UNIT;
}


future_t* _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Main_drawImage_future(pony_ctx_t** _ctx, _enc__active__encore_libs_master_SDL_SDL_Main_SDL_Main_t* _this, pony_type_t** runtimeType, _enc__passive_String_String_t* _enc__arg_image_path, int64_t _enc__arg_x, int64_t _enc__arg_y, double _enc__arg_x_scale, double _enc__arg_y_scale)
{
  future_t* _fut = future_mk(_ctx, ENCORE_PRIMITIVE);
  pony_gc_send((*_ctx));
  encore_trace_object((*_ctx), _enc__arg_image_path, _enc__trace_String_String);
  /* Not tracing field '_enc__arg_x' */;
  /* Not tracing field '_enc__arg_y' */;
  /* Not tracing field '_enc__arg_x_scale' */;
  /* Not tracing field '_enc__arg_y_scale' */;
  encore_trace_object((*_ctx), _fut, future_trace);
  pony_send_done((*_ctx));
  _enc__fut_msg__encore_libs_master_SDL_SDL_Main_SDL_Main_drawImage_t* msg = ((_enc__fut_msg__encore_libs_master_SDL_SDL_Main_SDL_Main_drawImage_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__fut_msg__encore_libs_master_SDL_SDL_Main_SDL_Main_drawImage_t)), _ENC__FUT_MSG__encore_libs_master_SDL_SDL_Main_SDL_Main_drawImage));
  msg->f1 = _enc__arg_image_path;
  msg->f2 = _enc__arg_x;
  msg->f3 = _enc__arg_y;
  msg->f4 = _enc__arg_x_scale;
  msg->f5 = _enc__arg_y_scale;
  msg->_fut = _fut;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
  return _fut;
}


void _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Main_drawImage_one_way(pony_ctx_t** _ctx, _enc__active__encore_libs_master_SDL_SDL_Main_SDL_Main_t* _this, pony_type_t** runtimeType, _enc__passive_String_String_t* _enc__arg_image_path, int64_t _enc__arg_x, int64_t _enc__arg_y, double _enc__arg_x_scale, double _enc__arg_y_scale)
{
  pony_gc_send((*_ctx));
  encore_trace_object((*_ctx), _enc__arg_image_path, _enc__trace_String_String);
  /* Not tracing field '_enc__arg_x' */;
  /* Not tracing field '_enc__arg_y' */;
  /* Not tracing field '_enc__arg_x_scale' */;
  /* Not tracing field '_enc__arg_y_scale' */;
  /* No tracing future for oneway msg */;
  pony_send_done((*_ctx));
  _enc__oneway_msg__encore_libs_master_SDL_SDL_Main_SDL_Main_drawImage_t* msg = ((_enc__oneway_msg__encore_libs_master_SDL_SDL_Main_SDL_Main_drawImage_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__oneway_msg__encore_libs_master_SDL_SDL_Main_SDL_Main_drawImage_t)), _ENC__ONEWAY_MSG__encore_libs_master_SDL_SDL_Main_SDL_Main_drawImage));
  msg->f1 = _enc__arg_image_path;
  msg->f2 = _enc__arg_x;
  msg->f3 = _enc__arg_y;
  msg->f4 = _enc__arg_x_scale;
  msg->f5 = _enc__arg_y_scale;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
}


void* _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Main_drawLine(pony_ctx_t** _ctx, _enc__active__encore_libs_master_SDL_SDL_Main_SDL_Main_t* _this, pony_type_t** runtimeType, _enc__passive__encore_libs_master_SDL_SDL_Primitives_Point2D_t* _enc__arg_p1, _enc__passive__encore_libs_master_SDL_SDL_Primitives_Point2D_t* _enc__arg_p2)
{
  ENC_DTRACE3(METHOD_ENTRY, (uintptr_t)*_ctx, (uintptr_t)_this, "drawLine");
  /* var sdl_settings = this.sdl_settings */;
  /* sdl_settings = this.sdl_settings */;
  ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "sdl_settings");
  sdl_object* _fieldacc_0 = (*_this)._enc__field_sdl_settings;
  sdl_object* _sdl_settings_1 = _fieldacc_0;
  /* var sdl_texture = this.sdl_texture */;
  /* sdl_texture = this.sdl_texture */;
  ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "sdl_texture");
  sdl_texture* _fieldacc_2 = (*_this)._enc__field_sdl_texture;
  sdl_texture* _sdl_texture_3 = _fieldacc_2;
  /* var x1 = p1.x */;
  /* x1 = p1.x */;
  ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_enc__arg_p1, "x");
  int64_t _fieldacc_4 = (*_enc__arg_p1)._enc__field_x;
  int64_t _x1_5 = _fieldacc_4;
  /* var y1 = p1.y */;
  /* y1 = p1.y */;
  ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_enc__arg_p1, "y");
  int64_t _fieldacc_6 = (*_enc__arg_p1)._enc__field_y;
  int64_t _y1_7 = _fieldacc_6;
  /* var x2 = p2.x */;
  /* x2 = p2.x */;
  ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_enc__arg_p2, "x");
  int64_t _fieldacc_8 = (*_enc__arg_p2)._enc__field_x;
  int64_t _x2_9 = _fieldacc_8;
  /* var y2 = p2.y */;
  /* y2 = p2.y */;
  ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_enc__arg_p2, "y");
  int64_t _fieldacc_10 = (*_enc__arg_p2)._enc__field_y;
  int64_t _y2_11 = _fieldacc_10;
  /* embed void SDL_RenderDrawLine(#{sdl_settings}->renderer,
                         #{x1},
                         #{y1},
                         #{x2},
                         #{y2});
    end */;
  ({SDL_RenderDrawLine(_sdl_settings_1->renderer,
                         _x1_5,
                         _y1_7,
                         _x2_9,
                         _y2_11);
   });
  ENC_DTRACE3(METHOD_EXIT, (uintptr_t)*_ctx, (uintptr_t)_this, "drawLine");
  return UNIT;
}


future_t* _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Main_drawLine_future(pony_ctx_t** _ctx, _enc__active__encore_libs_master_SDL_SDL_Main_SDL_Main_t* _this, pony_type_t** runtimeType, _enc__passive__encore_libs_master_SDL_SDL_Primitives_Point2D_t* _enc__arg_p1, _enc__passive__encore_libs_master_SDL_SDL_Primitives_Point2D_t* _enc__arg_p2)
{
  future_t* _fut = future_mk(_ctx, ENCORE_PRIMITIVE);
  pony_gc_send((*_ctx));
  encore_trace_object((*_ctx), _enc__arg_p1, _enc__trace__encore_libs_master_SDL_SDL_Primitives_Point2D);
  encore_trace_object((*_ctx), _enc__arg_p2, _enc__trace__encore_libs_master_SDL_SDL_Primitives_Point2D);
  encore_trace_object((*_ctx), _fut, future_trace);
  pony_send_done((*_ctx));
  _enc__fut_msg__encore_libs_master_SDL_SDL_Main_SDL_Main_drawLine_t* msg = ((_enc__fut_msg__encore_libs_master_SDL_SDL_Main_SDL_Main_drawLine_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__fut_msg__encore_libs_master_SDL_SDL_Main_SDL_Main_drawLine_t)), _ENC__FUT_MSG__encore_libs_master_SDL_SDL_Main_SDL_Main_drawLine));
  msg->f1 = _enc__arg_p1;
  msg->f2 = _enc__arg_p2;
  msg->_fut = _fut;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
  return _fut;
}


void _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Main_drawLine_one_way(pony_ctx_t** _ctx, _enc__active__encore_libs_master_SDL_SDL_Main_SDL_Main_t* _this, pony_type_t** runtimeType, _enc__passive__encore_libs_master_SDL_SDL_Primitives_Point2D_t* _enc__arg_p1, _enc__passive__encore_libs_master_SDL_SDL_Primitives_Point2D_t* _enc__arg_p2)
{
  pony_gc_send((*_ctx));
  encore_trace_object((*_ctx), _enc__arg_p1, _enc__trace__encore_libs_master_SDL_SDL_Primitives_Point2D);
  encore_trace_object((*_ctx), _enc__arg_p2, _enc__trace__encore_libs_master_SDL_SDL_Primitives_Point2D);
  /* No tracing future for oneway msg */;
  pony_send_done((*_ctx));
  _enc__oneway_msg__encore_libs_master_SDL_SDL_Main_SDL_Main_drawLine_t* msg = ((_enc__oneway_msg__encore_libs_master_SDL_SDL_Main_SDL_Main_drawLine_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__oneway_msg__encore_libs_master_SDL_SDL_Main_SDL_Main_drawLine_t)), _ENC__ONEWAY_MSG__encore_libs_master_SDL_SDL_Main_SDL_Main_drawLine));
  msg->f1 = _enc__arg_p1;
  msg->f2 = _enc__arg_p2;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
}


void* _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Main_clearAll(pony_ctx_t** _ctx, _enc__active__encore_libs_master_SDL_SDL_Main_SDL_Main_t* _this, pony_type_t** runtimeType)
{
  ENC_DTRACE3(METHOD_ENTRY, (uintptr_t)*_ctx, (uintptr_t)_this, "clearAll");
  /* var sdl_settings = this.sdl_settings */;
  /* sdl_settings = this.sdl_settings */;
  ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "sdl_settings");
  sdl_object* _fieldacc_0 = (*_this)._enc__field_sdl_settings;
  sdl_object* _sdl_settings_1 = _fieldacc_0;
  /* embed void SDL_SetRenderDrawColor(#{sdl_settings}->renderer,
                             0,
                             0,
                             0,
                             255);
      SDL_RenderClear(#{sdl_settings}->renderer);
    end */;
  ({SDL_SetRenderDrawColor(_sdl_settings_1->renderer,
                             0,
                             0,
                             0,
                             255);
      SDL_RenderClear(_sdl_settings_1->renderer);
   });
  ENC_DTRACE3(METHOD_EXIT, (uintptr_t)*_ctx, (uintptr_t)_this, "clearAll");
  return UNIT;
}


future_t* _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Main_clearAll_future(pony_ctx_t** _ctx, _enc__active__encore_libs_master_SDL_SDL_Main_SDL_Main_t* _this, pony_type_t** runtimeType)
{
  future_t* _fut = future_mk(_ctx, ENCORE_PRIMITIVE);
  pony_gc_send((*_ctx));
  encore_trace_object((*_ctx), _fut, future_trace);
  pony_send_done((*_ctx));
  _enc__fut_msg__encore_libs_master_SDL_SDL_Main_SDL_Main_clearAll_t* msg = ((_enc__fut_msg__encore_libs_master_SDL_SDL_Main_SDL_Main_clearAll_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__fut_msg__encore_libs_master_SDL_SDL_Main_SDL_Main_clearAll_t)), _ENC__FUT_MSG__encore_libs_master_SDL_SDL_Main_SDL_Main_clearAll));
  msg->_fut = _fut;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
  return _fut;
}


void _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Main_clearAll_one_way(pony_ctx_t** _ctx, _enc__active__encore_libs_master_SDL_SDL_Main_SDL_Main_t* _this, pony_type_t** runtimeType)
{
  pony_gc_send((*_ctx));
  /* No tracing future for oneway msg */;
  pony_send_done((*_ctx));
  _enc__oneway_msg__encore_libs_master_SDL_SDL_Main_SDL_Main_clearAll_t* msg = ((_enc__oneway_msg__encore_libs_master_SDL_SDL_Main_SDL_Main_clearAll_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__oneway_msg__encore_libs_master_SDL_SDL_Main_SDL_Main_clearAll_t)), _ENC__ONEWAY_MSG__encore_libs_master_SDL_SDL_Main_SDL_Main_clearAll));
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
}


void* _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Main_fillAll(pony_ctx_t** _ctx, _enc__active__encore_libs_master_SDL_SDL_Main_SDL_Main_t* _this, pony_type_t** runtimeType)
{
  ENC_DTRACE3(METHOD_ENTRY, (uintptr_t)*_ctx, (uintptr_t)_this, "fillAll");
  /* var sdl_settings = this.sdl_settings */;
  /* sdl_settings = this.sdl_settings */;
  ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "sdl_settings");
  sdl_object* _fieldacc_0 = (*_this)._enc__field_sdl_settings;
  sdl_object* _sdl_settings_1 = _fieldacc_0;
  /* embed void SDL_RenderClear(#{sdl_settings}->renderer);
    end */;
  ({SDL_RenderClear(_sdl_settings_1->renderer);
   });
  ENC_DTRACE3(METHOD_EXIT, (uintptr_t)*_ctx, (uintptr_t)_this, "fillAll");
  return UNIT;
}


future_t* _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Main_fillAll_future(pony_ctx_t** _ctx, _enc__active__encore_libs_master_SDL_SDL_Main_SDL_Main_t* _this, pony_type_t** runtimeType)
{
  future_t* _fut = future_mk(_ctx, ENCORE_PRIMITIVE);
  pony_gc_send((*_ctx));
  encore_trace_object((*_ctx), _fut, future_trace);
  pony_send_done((*_ctx));
  _enc__fut_msg__encore_libs_master_SDL_SDL_Main_SDL_Main_fillAll_t* msg = ((_enc__fut_msg__encore_libs_master_SDL_SDL_Main_SDL_Main_fillAll_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__fut_msg__encore_libs_master_SDL_SDL_Main_SDL_Main_fillAll_t)), _ENC__FUT_MSG__encore_libs_master_SDL_SDL_Main_SDL_Main_fillAll));
  msg->_fut = _fut;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
  return _fut;
}


void _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Main_fillAll_one_way(pony_ctx_t** _ctx, _enc__active__encore_libs_master_SDL_SDL_Main_SDL_Main_t* _this, pony_type_t** runtimeType)
{
  pony_gc_send((*_ctx));
  /* No tracing future for oneway msg */;
  pony_send_done((*_ctx));
  _enc__oneway_msg__encore_libs_master_SDL_SDL_Main_SDL_Main_fillAll_t* msg = ((_enc__oneway_msg__encore_libs_master_SDL_SDL_Main_SDL_Main_fillAll_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__oneway_msg__encore_libs_master_SDL_SDL_Main_SDL_Main_fillAll_t)), _ENC__ONEWAY_MSG__encore_libs_master_SDL_SDL_Main_SDL_Main_fillAll));
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
}


void* _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Main_initFont(pony_ctx_t** _ctx, _enc__active__encore_libs_master_SDL_SDL_Main_SDL_Main_t* _this, pony_type_t** runtimeType, _enc__passive_String_String_t* _enc__arg_font_name, int64_t _enc__arg_size)
{
  ENC_DTRACE3(METHOD_ENTRY, (uintptr_t)*_ctx, (uintptr_t)_this, "initFont");
  /* var font = this.sdl_font */;
  /* font = this.sdl_font */;
  ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "sdl_font");
  TTF_Font* _fieldacc_0 = (*_this)._enc__field_sdl_font;
  TTF_Font* _font_1 = _fieldacc_0;
  /* var font_path = font_name.data */;
  /* font_path = font_name.data */;
  ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_enc__arg_font_name, "data");
  char* _fieldacc_2 = (*_enc__arg_font_name)._enc__field_data;
  char* _font_path_3 = _fieldacc_2;
  /* embed void #{font}= TTF_OpenFont(#{font_path}, #{size});
      if (#{font}== NULL) {
          fprintf(stderr, "error: font not found\n");
          exit(EXIT_FAILURE);
      }
    end */;
  ({_font_1= TTF_OpenFont(_font_path_3, _enc__arg_size);
      if (_font_1== NULL) {
          fprintf(stderr, "error: font not found\n");
          exit(EXIT_FAILURE);
      }
   });
  /* this.sdl_font = font */;
  (*({ENC_DTRACE3(FIELD_WRITE, (uintptr_t)*_ctx, (uintptr_t)_this, "sdl_font"); _this;}))._enc__field_sdl_font = _font_1;
  ENC_DTRACE3(METHOD_EXIT, (uintptr_t)*_ctx, (uintptr_t)_this, "initFont");
  return UNIT;
}


future_t* _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Main_initFont_future(pony_ctx_t** _ctx, _enc__active__encore_libs_master_SDL_SDL_Main_SDL_Main_t* _this, pony_type_t** runtimeType, _enc__passive_String_String_t* _enc__arg_font_name, int64_t _enc__arg_size)
{
  future_t* _fut = future_mk(_ctx, ENCORE_PRIMITIVE);
  pony_gc_send((*_ctx));
  encore_trace_object((*_ctx), _enc__arg_font_name, _enc__trace_String_String);
  /* Not tracing field '_enc__arg_size' */;
  encore_trace_object((*_ctx), _fut, future_trace);
  pony_send_done((*_ctx));
  _enc__fut_msg__encore_libs_master_SDL_SDL_Main_SDL_Main_initFont_t* msg = ((_enc__fut_msg__encore_libs_master_SDL_SDL_Main_SDL_Main_initFont_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__fut_msg__encore_libs_master_SDL_SDL_Main_SDL_Main_initFont_t)), _ENC__FUT_MSG__encore_libs_master_SDL_SDL_Main_SDL_Main_initFont));
  msg->f1 = _enc__arg_font_name;
  msg->f2 = _enc__arg_size;
  msg->_fut = _fut;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
  return _fut;
}


void _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Main_initFont_one_way(pony_ctx_t** _ctx, _enc__active__encore_libs_master_SDL_SDL_Main_SDL_Main_t* _this, pony_type_t** runtimeType, _enc__passive_String_String_t* _enc__arg_font_name, int64_t _enc__arg_size)
{
  pony_gc_send((*_ctx));
  encore_trace_object((*_ctx), _enc__arg_font_name, _enc__trace_String_String);
  /* Not tracing field '_enc__arg_size' */;
  /* No tracing future for oneway msg */;
  pony_send_done((*_ctx));
  _enc__oneway_msg__encore_libs_master_SDL_SDL_Main_SDL_Main_initFont_t* msg = ((_enc__oneway_msg__encore_libs_master_SDL_SDL_Main_SDL_Main_initFont_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__oneway_msg__encore_libs_master_SDL_SDL_Main_SDL_Main_initFont_t)), _ENC__ONEWAY_MSG__encore_libs_master_SDL_SDL_Main_SDL_Main_initFont));
  msg->f1 = _enc__arg_font_name;
  msg->f2 = _enc__arg_size;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
}


void* _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Main_drawText(pony_ctx_t** _ctx, _enc__active__encore_libs_master_SDL_SDL_Main_SDL_Main_t* _this, pony_type_t** runtimeType, _enc__passive_String_String_t* _enc__arg_text, int64_t _enc__arg_x, int64_t _enc__arg_y, _enc__passive__encore_libs_master_SDL_SDL_Primitives_ColorRGBA_t* _enc__arg_color)
{
  ENC_DTRACE3(METHOD_ENTRY, (uintptr_t)*_ctx, (uintptr_t)_this, "drawText");
  /* var text_color = color.getCRepresentation() */;
  /* text_color = color.getCRepresentation() */;
  check_receiver(_enc__arg_color, ".", "color", "getCRepresentation", "\"./encore-libs-master/SDL/SDL_Main.enc\" (line 202, column 22)");
  pony_type_t* _tmp_1[] = {};
  SDL_Color _sync_method_call_0 = _enc__method__encore_libs_master_SDL_SDL_Primitives_ColorRGBA_getCRepresentation(_ctx, _enc__arg_color, NULL);
  SDL_Color _text_color_2 = _sync_method_call_0;
  /* var sdl_settings = this.sdl_settings */;
  /* sdl_settings = this.sdl_settings */;
  ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "sdl_settings");
  sdl_object* _fieldacc_3 = (*_this)._enc__field_sdl_settings;
  sdl_object* _sdl_settings_4 = _fieldacc_3;
  /* var font = this.sdl_font */;
  /* font = this.sdl_font */;
  ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "sdl_font");
  TTF_Font* _fieldacc_5 = (*_this)._enc__field_sdl_font;
  TTF_Font* _font_6 = _fieldacc_5;
  /* var c_text = text.data */;
  /* c_text = text.data */;
  ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_enc__arg_text, "data");
  char* _fieldacc_7 = (*_enc__arg_text)._enc__field_data;
  char* _c_text_8 = _fieldacc_7;
  /* embed void if(#{font}== NULL){
        fputs("Tried to draw font with no font loaded!",stderr);
        exit(1);
      }
      int text_width;
      int text_height;
      SDL_Surface *surface;
      SDL_Rect rect;
      SDL_Color textColor = {255, 255, 255, 0};

      surface = TTF_RenderText_Solid(#{font}, #{c_text}, #{text_color});
      SDL_Texture *texture = SDL_CreateTextureFromSurface(#{sdl_settings}->renderer, surface);
      text_width = surface->w;
      text_height = surface->h;
      SDL_FreeSurface(surface);
      rect.x = #{x};
      rect.y = #{y};
      rect.w = text_width;
      rect.h = text_height;
      SDL_RenderCopy(#{sdl_settings}->renderer, texture, NULL, &rect);
      SDL_DestroyTexture(texture);
    end */;
  ({if(_font_6== NULL){
        fputs("Tried to draw font with no font loaded!",stderr);
        exit(1);
      }
      int text_width;
      int text_height;
      SDL_Surface *surface;
      SDL_Rect rect;
      SDL_Color textColor = {255, 255, 255, 0};

      surface = TTF_RenderText_Solid(_font_6, _c_text_8, _text_color_2);
      SDL_Texture *texture = SDL_CreateTextureFromSurface(_sdl_settings_4->renderer, surface);
      text_width = surface->w;
      text_height = surface->h;
      SDL_FreeSurface(surface);
      rect.x = _enc__arg_x;
      rect.y = _enc__arg_y;
      rect.w = text_width;
      rect.h = text_height;
      SDL_RenderCopy(_sdl_settings_4->renderer, texture, NULL, &rect);
      SDL_DestroyTexture(texture);
   });
  ENC_DTRACE3(METHOD_EXIT, (uintptr_t)*_ctx, (uintptr_t)_this, "drawText");
  return UNIT;
}


future_t* _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Main_drawText_future(pony_ctx_t** _ctx, _enc__active__encore_libs_master_SDL_SDL_Main_SDL_Main_t* _this, pony_type_t** runtimeType, _enc__passive_String_String_t* _enc__arg_text, int64_t _enc__arg_x, int64_t _enc__arg_y, _enc__passive__encore_libs_master_SDL_SDL_Primitives_ColorRGBA_t* _enc__arg_color)
{
  future_t* _fut = future_mk(_ctx, ENCORE_PRIMITIVE);
  pony_gc_send((*_ctx));
  encore_trace_object((*_ctx), _enc__arg_text, _enc__trace_String_String);
  /* Not tracing field '_enc__arg_x' */;
  /* Not tracing field '_enc__arg_y' */;
  encore_trace_object((*_ctx), _enc__arg_color, _enc__trace__encore_libs_master_SDL_SDL_Primitives_ColorRGBA);
  encore_trace_object((*_ctx), _fut, future_trace);
  pony_send_done((*_ctx));
  _enc__fut_msg__encore_libs_master_SDL_SDL_Main_SDL_Main_drawText_t* msg = ((_enc__fut_msg__encore_libs_master_SDL_SDL_Main_SDL_Main_drawText_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__fut_msg__encore_libs_master_SDL_SDL_Main_SDL_Main_drawText_t)), _ENC__FUT_MSG__encore_libs_master_SDL_SDL_Main_SDL_Main_drawText));
  msg->f1 = _enc__arg_text;
  msg->f2 = _enc__arg_x;
  msg->f3 = _enc__arg_y;
  msg->f4 = _enc__arg_color;
  msg->_fut = _fut;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
  return _fut;
}


void _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Main_drawText_one_way(pony_ctx_t** _ctx, _enc__active__encore_libs_master_SDL_SDL_Main_SDL_Main_t* _this, pony_type_t** runtimeType, _enc__passive_String_String_t* _enc__arg_text, int64_t _enc__arg_x, int64_t _enc__arg_y, _enc__passive__encore_libs_master_SDL_SDL_Primitives_ColorRGBA_t* _enc__arg_color)
{
  pony_gc_send((*_ctx));
  encore_trace_object((*_ctx), _enc__arg_text, _enc__trace_String_String);
  /* Not tracing field '_enc__arg_x' */;
  /* Not tracing field '_enc__arg_y' */;
  encore_trace_object((*_ctx), _enc__arg_color, _enc__trace__encore_libs_master_SDL_SDL_Primitives_ColorRGBA);
  /* No tracing future for oneway msg */;
  pony_send_done((*_ctx));
  _enc__oneway_msg__encore_libs_master_SDL_SDL_Main_SDL_Main_drawText_t* msg = ((_enc__oneway_msg__encore_libs_master_SDL_SDL_Main_SDL_Main_drawText_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__oneway_msg__encore_libs_master_SDL_SDL_Main_SDL_Main_drawText_t)), _ENC__ONEWAY_MSG__encore_libs_master_SDL_SDL_Main_SDL_Main_drawText));
  msg->f1 = _enc__arg_text;
  msg->f2 = _enc__arg_x;
  msg->f3 = _enc__arg_y;
  msg->f4 = _enc__arg_color;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
}


void* _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Main_init(pony_ctx_t** _ctx, _enc__active__encore_libs_master_SDL_SDL_Main_SDL_Main_t* _this, pony_type_t** runtimeType, int64_t _enc__arg_width, int64_t _enc__arg_height)
{
  ENC_DTRACE3(METHOD_ENTRY, (uintptr_t)*_ctx, (uintptr_t)_this, "init");
  /* this.quit = false */;
  int64_t _literal_0 = 0/*False*/;
  (*({ENC_DTRACE3(FIELD_WRITE, (uintptr_t)*_ctx, (uintptr_t)_this, "quit"); _this;}))._enc__field_quit = _literal_0;
  /* var sdl_settings = this.sdl_settings */;
  /* sdl_settings = this.sdl_settings */;
  ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "sdl_settings");
  sdl_object* _fieldacc_1 = (*_this)._enc__field_sdl_settings;
  sdl_object* _sdl_settings_2 = _fieldacc_1;
  /* var sdl_texture = this.sdl_texture */;
  /* sdl_texture = this.sdl_texture */;
  ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "sdl_texture");
  sdl_texture* _fieldacc_3 = (*_this)._enc__field_sdl_texture;
  sdl_texture* _sdl_texture_4 = _fieldacc_3;
  /* var sdl_font = this.sdl_font */;
  /* sdl_font = this.sdl_font */;
  ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "sdl_font");
  TTF_Font* _fieldacc_5 = (*_this)._enc__field_sdl_font;
  TTF_Font* _sdl_font_6 = _fieldacc_5;
  /* embed void #{sdl_font}= NULL;
      SDL_Init(SDL_INIT_VIDEO);
      TTF_Init();
      sdl_object* sdl_settings = (sdl_object*)malloc(sizeof(sdl_object));
      sdl_settings->width = #{width};
      sdl_settings->height = #{height};
      sdl_settings->window = SDL_CreateWindow("Encore Program",
            SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, #{width}, #{height}, 0);
      sdl_settings->renderer = SDL_CreateRenderer(sdl_settings->window, -1, 0);
      sdl_settings->event = malloc(sizeof(SDL_Event));
      #{sdl_settings}= sdl_settings;

      sdl_texture* sdl_only_texture = malloc(sizeof(sdl_texture));
      sdl_only_texture->width = #{width};
      sdl_only_texture->height = #{height};
      sdl_only_texture->texture =  SDL_CreateTexture(sdl_settings->renderer,
            SDL_PIXELFORMAT_RGB888, SDL_TEXTUREACCESS_STATIC, #{width}, #{height});
      sdl_only_texture->pixels = malloc(sdl_only_texture->width*sdl_only_texture->height*sizeof(pixel));

      #{sdl_texture}= sdl_only_texture;

    end */;
  ({_sdl_font_6= NULL;
      SDL_Init(SDL_INIT_VIDEO);
      TTF_Init();
      sdl_object* sdl_settings = (sdl_object*)malloc(sizeof(sdl_object));
      sdl_settings->width = _enc__arg_width;
      sdl_settings->height = _enc__arg_height;
      sdl_settings->window = SDL_CreateWindow("Encore Program",
            SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, _enc__arg_width, _enc__arg_height, 0);
      sdl_settings->renderer = SDL_CreateRenderer(sdl_settings->window, -1, 0);
      sdl_settings->event = malloc(sizeof(SDL_Event));
      _sdl_settings_2= sdl_settings;

      sdl_texture* sdl_only_texture = malloc(sizeof(sdl_texture));
      sdl_only_texture->width = _enc__arg_width;
      sdl_only_texture->height = _enc__arg_height;
      sdl_only_texture->texture =  SDL_CreateTexture(sdl_settings->renderer,
            SDL_PIXELFORMAT_RGB888, SDL_TEXTUREACCESS_STATIC, _enc__arg_width, _enc__arg_height);
      sdl_only_texture->pixels = malloc(sdl_only_texture->width*sdl_only_texture->height*sizeof(pixel));

      _sdl_texture_4= sdl_only_texture;

   });
  /* this.sdl_settings = sdl_settings */;
  (*({ENC_DTRACE3(FIELD_WRITE, (uintptr_t)*_ctx, (uintptr_t)_this, "sdl_settings"); _this;}))._enc__field_sdl_settings = _sdl_settings_2;
  /* this.sdl_texture = sdl_texture */;
  (*({ENC_DTRACE3(FIELD_WRITE, (uintptr_t)*_ctx, (uintptr_t)_this, "sdl_texture"); _this;}))._enc__field_sdl_texture = _sdl_texture_4;
  /* this.sdl_font = sdl_font */;
  (*({ENC_DTRACE3(FIELD_WRITE, (uintptr_t)*_ctx, (uintptr_t)_this, "sdl_font"); _this;}))._enc__field_sdl_font = _sdl_font_6;
  ENC_DTRACE3(METHOD_EXIT, (uintptr_t)*_ctx, (uintptr_t)_this, "init");
  return UNIT;
}


future_t* _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Main_init_future(pony_ctx_t** _ctx, _enc__active__encore_libs_master_SDL_SDL_Main_SDL_Main_t* _this, pony_type_t** runtimeType, int64_t _enc__arg_width, int64_t _enc__arg_height)
{
  future_t* _fut = future_mk(_ctx, ENCORE_PRIMITIVE);
  pony_gc_send((*_ctx));
  /* Not tracing field '_enc__arg_width' */;
  /* Not tracing field '_enc__arg_height' */;
  encore_trace_object((*_ctx), _fut, future_trace);
  pony_send_done((*_ctx));
  _enc__fut_msg__encore_libs_master_SDL_SDL_Main_SDL_Main_init_t* msg = ((_enc__fut_msg__encore_libs_master_SDL_SDL_Main_SDL_Main_init_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__fut_msg__encore_libs_master_SDL_SDL_Main_SDL_Main_init_t)), _ENC__FUT_MSG__encore_libs_master_SDL_SDL_Main_SDL_Main_init));
  msg->f1 = _enc__arg_width;
  msg->f2 = _enc__arg_height;
  msg->_fut = _fut;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
  return _fut;
}


void _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Main_init_one_way(pony_ctx_t** _ctx, _enc__active__encore_libs_master_SDL_SDL_Main_SDL_Main_t* _this, pony_type_t** runtimeType, int64_t _enc__arg_width, int64_t _enc__arg_height)
{
  pony_gc_send((*_ctx));
  /* Not tracing field '_enc__arg_width' */;
  /* Not tracing field '_enc__arg_height' */;
  /* No tracing future for oneway msg */;
  pony_send_done((*_ctx));
  _enc__oneway_msg__encore_libs_master_SDL_SDL_Main_SDL_Main_init_t* msg = ((_enc__oneway_msg__encore_libs_master_SDL_SDL_Main_SDL_Main_init_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__oneway_msg__encore_libs_master_SDL_SDL_Main_SDL_Main_init_t)), _ENC__ONEWAY_MSG__encore_libs_master_SDL_SDL_Main_SDL_Main_init));
  msg->f1 = _enc__arg_width;
  msg->f2 = _enc__arg_height;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
}


int64_t _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Main_getHeight(pony_ctx_t** _ctx, _enc__active__encore_libs_master_SDL_SDL_Main_SDL_Main_t* _this, pony_type_t** runtimeType)
{
  ENC_DTRACE3(METHOD_ENTRY, (uintptr_t)*_ctx, (uintptr_t)_this, "getHeight");
  /* var sdl_settings = this.sdl_settings */;
  /* sdl_settings = this.sdl_settings */;
  ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "sdl_settings");
  sdl_object* _fieldacc_0 = (*_this)._enc__field_sdl_settings;
  sdl_object* _sdl_settings_1 = _fieldacc_0;
  /* embed int #{sdl_settings}->height; end */;
  int64_t _embed_2 = ({_sdl_settings_1->height;});
  ENC_DTRACE3(METHOD_EXIT, (uintptr_t)*_ctx, (uintptr_t)_this, "getHeight");
  return ((int64_t) _embed_2);
}


future_t* _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Main_getHeight_future(pony_ctx_t** _ctx, _enc__active__encore_libs_master_SDL_SDL_Main_SDL_Main_t* _this, pony_type_t** runtimeType)
{
  future_t* _fut = future_mk(_ctx, ENCORE_PRIMITIVE);
  pony_gc_send((*_ctx));
  encore_trace_object((*_ctx), _fut, future_trace);
  pony_send_done((*_ctx));
  _enc__fut_msg__encore_libs_master_SDL_SDL_Main_SDL_Main_getHeight_t* msg = ((_enc__fut_msg__encore_libs_master_SDL_SDL_Main_SDL_Main_getHeight_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__fut_msg__encore_libs_master_SDL_SDL_Main_SDL_Main_getHeight_t)), _ENC__FUT_MSG__encore_libs_master_SDL_SDL_Main_SDL_Main_getHeight));
  msg->_fut = _fut;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
  return _fut;
}


void _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Main_getHeight_one_way(pony_ctx_t** _ctx, _enc__active__encore_libs_master_SDL_SDL_Main_SDL_Main_t* _this, pony_type_t** runtimeType)
{
  pony_gc_send((*_ctx));
  /* No tracing future for oneway msg */;
  pony_send_done((*_ctx));
  _enc__oneway_msg__encore_libs_master_SDL_SDL_Main_SDL_Main_getHeight_t* msg = ((_enc__oneway_msg__encore_libs_master_SDL_SDL_Main_SDL_Main_getHeight_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__oneway_msg__encore_libs_master_SDL_SDL_Main_SDL_Main_getHeight_t)), _ENC__ONEWAY_MSG__encore_libs_master_SDL_SDL_Main_SDL_Main_getHeight));
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
}


int64_t _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Main_getWidth(pony_ctx_t** _ctx, _enc__active__encore_libs_master_SDL_SDL_Main_SDL_Main_t* _this, pony_type_t** runtimeType)
{
  ENC_DTRACE3(METHOD_ENTRY, (uintptr_t)*_ctx, (uintptr_t)_this, "getWidth");
  /* var sdl_settings = this.sdl_settings */;
  /* sdl_settings = this.sdl_settings */;
  ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "sdl_settings");
  sdl_object* _fieldacc_0 = (*_this)._enc__field_sdl_settings;
  sdl_object* _sdl_settings_1 = _fieldacc_0;
  /* embed int #{sdl_settings}->width; end */;
  int64_t _embed_2 = ({_sdl_settings_1->width;});
  ENC_DTRACE3(METHOD_EXIT, (uintptr_t)*_ctx, (uintptr_t)_this, "getWidth");
  return ((int64_t) _embed_2);
}


future_t* _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Main_getWidth_future(pony_ctx_t** _ctx, _enc__active__encore_libs_master_SDL_SDL_Main_SDL_Main_t* _this, pony_type_t** runtimeType)
{
  future_t* _fut = future_mk(_ctx, ENCORE_PRIMITIVE);
  pony_gc_send((*_ctx));
  encore_trace_object((*_ctx), _fut, future_trace);
  pony_send_done((*_ctx));
  _enc__fut_msg__encore_libs_master_SDL_SDL_Main_SDL_Main_getWidth_t* msg = ((_enc__fut_msg__encore_libs_master_SDL_SDL_Main_SDL_Main_getWidth_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__fut_msg__encore_libs_master_SDL_SDL_Main_SDL_Main_getWidth_t)), _ENC__FUT_MSG__encore_libs_master_SDL_SDL_Main_SDL_Main_getWidth));
  msg->_fut = _fut;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
  return _fut;
}


void _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Main_getWidth_one_way(pony_ctx_t** _ctx, _enc__active__encore_libs_master_SDL_SDL_Main_SDL_Main_t* _this, pony_type_t** runtimeType)
{
  pony_gc_send((*_ctx));
  /* No tracing future for oneway msg */;
  pony_send_done((*_ctx));
  _enc__oneway_msg__encore_libs_master_SDL_SDL_Main_SDL_Main_getWidth_t* msg = ((_enc__oneway_msg__encore_libs_master_SDL_SDL_Main_SDL_Main_getWidth_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__oneway_msg__encore_libs_master_SDL_SDL_Main_SDL_Main_getWidth_t)), _ENC__ONEWAY_MSG__encore_libs_master_SDL_SDL_Main_SDL_Main_getWidth));
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
}


void* _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Main_refresh(pony_ctx_t** _ctx, _enc__active__encore_libs_master_SDL_SDL_Main_SDL_Main_t* _this, pony_type_t** runtimeType)
{
  ENC_DTRACE3(METHOD_ENTRY, (uintptr_t)*_ctx, (uintptr_t)_this, "refresh");
  /* var sdl_settings = this.sdl_settings */;
  /* sdl_settings = this.sdl_settings */;
  ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "sdl_settings");
  sdl_object* _fieldacc_0 = (*_this)._enc__field_sdl_settings;
  sdl_object* _sdl_settings_1 = _fieldacc_0;
  /* var sdl_texture = this.sdl_texture */;
  /* sdl_texture = this.sdl_texture */;
  ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "sdl_texture");
  sdl_texture* _fieldacc_2 = (*_this)._enc__field_sdl_texture;
  sdl_texture* _sdl_texture_3 = _fieldacc_2;
  /* var quit = this.quit */;
  /* quit = this.quit */;
  ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "quit");
  int64_t _fieldacc_4 = (*_this)._enc__field_quit;
  int64_t _quit_5 = _fieldacc_4;
  /* embed void SDL_RenderPresent(#{sdl_settings}->renderer);
    end */;
  ({SDL_RenderPresent(_sdl_settings_1->renderer);
   });
  ENC_DTRACE3(METHOD_EXIT, (uintptr_t)*_ctx, (uintptr_t)_this, "refresh");
  return UNIT;
}


future_t* _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Main_refresh_future(pony_ctx_t** _ctx, _enc__active__encore_libs_master_SDL_SDL_Main_SDL_Main_t* _this, pony_type_t** runtimeType)
{
  future_t* _fut = future_mk(_ctx, ENCORE_PRIMITIVE);
  pony_gc_send((*_ctx));
  encore_trace_object((*_ctx), _fut, future_trace);
  pony_send_done((*_ctx));
  _enc__fut_msg__encore_libs_master_SDL_SDL_Main_SDL_Main_refresh_t* msg = ((_enc__fut_msg__encore_libs_master_SDL_SDL_Main_SDL_Main_refresh_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__fut_msg__encore_libs_master_SDL_SDL_Main_SDL_Main_refresh_t)), _ENC__FUT_MSG__encore_libs_master_SDL_SDL_Main_SDL_Main_refresh));
  msg->_fut = _fut;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
  return _fut;
}


void _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Main_refresh_one_way(pony_ctx_t** _ctx, _enc__active__encore_libs_master_SDL_SDL_Main_SDL_Main_t* _this, pony_type_t** runtimeType)
{
  pony_gc_send((*_ctx));
  /* No tracing future for oneway msg */;
  pony_send_done((*_ctx));
  _enc__oneway_msg__encore_libs_master_SDL_SDL_Main_SDL_Main_refresh_t* msg = ((_enc__oneway_msg__encore_libs_master_SDL_SDL_Main_SDL_Main_refresh_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__oneway_msg__encore_libs_master_SDL_SDL_Main_SDL_Main_refresh_t)), _ENC__ONEWAY_MSG__encore_libs_master_SDL_SDL_Main_SDL_Main_refresh));
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
}


SDL_Event* _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Main_event_clone(pony_ctx_t** _ctx, _enc__active__encore_libs_master_SDL_SDL_Main_SDL_Main_t* _this, pony_type_t** runtimeType)
{
  ENC_DTRACE3(METHOD_ENTRY, (uintptr_t)*_ctx, (uintptr_t)_this, "event_clone");
  /* var sdl_settings = this.sdl_settings */;
  /* sdl_settings = this.sdl_settings */;
  ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "sdl_settings");
  sdl_object* _fieldacc_0 = (*_this)._enc__field_sdl_settings;
  sdl_object* _sdl_settings_1 = _fieldacc_0;
  /* embed SDL_Event SDL_Event* copy = malloc(sizeof(SDL_Event));
      (SDL_Event*)memcpy(copy,#{sdl_settings}->event,sizeof(SDL_Event));
      copy;
    end */;
  SDL_Event* _embed_2 = ({SDL_Event* copy = malloc(sizeof(SDL_Event));
      (SDL_Event*)memcpy(copy,_sdl_settings_1->event,sizeof(SDL_Event));
      copy;
   });
  ENC_DTRACE3(METHOD_EXIT, (uintptr_t)*_ctx, (uintptr_t)_this, "event_clone");
  return ((SDL_Event*) _embed_2);
}


future_t* _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Main_event_clone_future(pony_ctx_t** _ctx, _enc__active__encore_libs_master_SDL_SDL_Main_SDL_Main_t* _this, pony_type_t** runtimeType)
{
  future_t* _fut = future_mk(_ctx, ENCORE_PRIMITIVE);
  pony_gc_send((*_ctx));
  encore_trace_object((*_ctx), _fut, future_trace);
  pony_send_done((*_ctx));
  _enc__fut_msg__encore_libs_master_SDL_SDL_Main_SDL_Main_event_clone_t* msg = ((_enc__fut_msg__encore_libs_master_SDL_SDL_Main_SDL_Main_event_clone_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__fut_msg__encore_libs_master_SDL_SDL_Main_SDL_Main_event_clone_t)), _ENC__FUT_MSG__encore_libs_master_SDL_SDL_Main_SDL_Main_event_clone));
  msg->_fut = _fut;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
  return _fut;
}


void _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Main_event_clone_one_way(pony_ctx_t** _ctx, _enc__active__encore_libs_master_SDL_SDL_Main_SDL_Main_t* _this, pony_type_t** runtimeType)
{
  pony_gc_send((*_ctx));
  /* No tracing future for oneway msg */;
  pony_send_done((*_ctx));
  _enc__oneway_msg__encore_libs_master_SDL_SDL_Main_SDL_Main_event_clone_t* msg = ((_enc__oneway_msg__encore_libs_master_SDL_SDL_Main_SDL_Main_event_clone_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__oneway_msg__encore_libs_master_SDL_SDL_Main_SDL_Main_event_clone_t)), _ENC__ONEWAY_MSG__encore_libs_master_SDL_SDL_Main_SDL_Main_event_clone));
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
}


void* _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Main_pollEvent(pony_ctx_t** _ctx, _enc__active__encore_libs_master_SDL_SDL_Main_SDL_Main_t* _this, pony_type_t** runtimeType, _enc__active__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_t* _enc__arg_handler)
{
  ENC_DTRACE3(METHOD_ENTRY, (uintptr_t)*_ctx, (uintptr_t)_this, "pollEvent");
  /* var sdl_settings = this.sdl_settings */;
  /* sdl_settings = this.sdl_settings */;
  ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "sdl_settings");
  sdl_object* _fieldacc_0 = (*_this)._enc__field_sdl_settings;
  sdl_object* _sdl_settings_1 = _fieldacc_0;
  /* var event_present = 0 */;
  /* event_present = 0 */;
  int64_t _literal_2 = 0;
  int64_t _event_present_3 = _literal_2;
  /* embed void #{event_present}= SDL_PollEvent(#{sdl_settings}->event);
    end */;
  ({_event_present_3= SDL_PollEvent(_sdl_settings_1->event);
   });
  /* if event_present == 1 then
  handler!handleEvent(this, this.event_clone()) */;
  void* _ite_4;
  if (({int64_t _binop_6 = (({ _event_present_3;}) == ({int64_t _literal_5 = 1; _literal_5;})); _binop_6;}))
  {
    /* handler!handleEvent(this, this.event_clone()) */;
    check_receiver(_enc__arg_handler, " ! ", "handler", "handleEvent", "\"./encore-libs-master/SDL/SDL_Main.enc\" (line 309, column 14)");
    check_receiver(_this, ".", "this", "event_clone", "\"./encore-libs-master/SDL/SDL_Main.enc\" (line 309, column 33)");
    pony_type_t* _tmp_8[] = {};
    SDL_Event* _sync_method_call_7 = _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Main_event_clone(_ctx, _this, NULL);
    pony_type_t* _tmp_9[] = {};
    _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_handleEvent_one_way(_ctx, _enc__arg_handler, NULL, _this, _sync_method_call_7);
    _ite_4 = ((void*) UNIT);
  }
  else
  {
    UNIT;
    _ite_4 = ((void*) UNIT);
  };
  ENC_DTRACE3(METHOD_EXIT, (uintptr_t)*_ctx, (uintptr_t)_this, "pollEvent");
  return UNIT;
}


future_t* _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Main_pollEvent_future(pony_ctx_t** _ctx, _enc__active__encore_libs_master_SDL_SDL_Main_SDL_Main_t* _this, pony_type_t** runtimeType, _enc__active__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_t* _enc__arg_handler)
{
  future_t* _fut = future_mk(_ctx, ENCORE_PRIMITIVE);
  pony_gc_send((*_ctx));
  encore_trace_actor((*_ctx), ((pony_actor_t*) _enc__arg_handler));
  encore_trace_object((*_ctx), _fut, future_trace);
  pony_send_done((*_ctx));
  _enc__fut_msg__encore_libs_master_SDL_SDL_Main_SDL_Main_pollEvent_t* msg = ((_enc__fut_msg__encore_libs_master_SDL_SDL_Main_SDL_Main_pollEvent_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__fut_msg__encore_libs_master_SDL_SDL_Main_SDL_Main_pollEvent_t)), _ENC__FUT_MSG__encore_libs_master_SDL_SDL_Main_SDL_Main_pollEvent));
  msg->f1 = _enc__arg_handler;
  msg->_fut = _fut;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
  return _fut;
}


void _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Main_pollEvent_one_way(pony_ctx_t** _ctx, _enc__active__encore_libs_master_SDL_SDL_Main_SDL_Main_t* _this, pony_type_t** runtimeType, _enc__active__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_t* _enc__arg_handler)
{
  pony_gc_send((*_ctx));
  encore_trace_actor((*_ctx), ((pony_actor_t*) _enc__arg_handler));
  /* No tracing future for oneway msg */;
  pony_send_done((*_ctx));
  _enc__oneway_msg__encore_libs_master_SDL_SDL_Main_SDL_Main_pollEvent_t* msg = ((_enc__oneway_msg__encore_libs_master_SDL_SDL_Main_SDL_Main_pollEvent_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__oneway_msg__encore_libs_master_SDL_SDL_Main_SDL_Main_pollEvent_t)), _ENC__ONEWAY_MSG__encore_libs_master_SDL_SDL_Main_SDL_Main_pollEvent));
  msg->f1 = _enc__arg_handler;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
}


void* _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Main_waitForEvent(pony_ctx_t** _ctx, _enc__active__encore_libs_master_SDL_SDL_Main_SDL_Main_t* _this, pony_type_t** runtimeType, _enc__active__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_t* _enc__arg_handler, int64_t _enc__arg_timeout)
{
  ENC_DTRACE3(METHOD_ENTRY, (uintptr_t)*_ctx, (uintptr_t)_this, "waitForEvent");
  /* var sdl_settings = this.sdl_settings */;
  /* sdl_settings = this.sdl_settings */;
  ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "sdl_settings");
  sdl_object* _fieldacc_0 = (*_this)._enc__field_sdl_settings;
  sdl_object* _sdl_settings_1 = _fieldacc_0;
  /* if timeout == 0 then
  embed void SDL_WaitEvent(#{sdl_settings}->event);
      end
else
  embed void SDL_WaitEventTimeout(#{sdl_settings}->event,#{timeout});
      end */;
  void* _ite_2;
  if (({int64_t _binop_4 = (({ _enc__arg_timeout;}) == ({int64_t _literal_3 = 0; _literal_3;})); _binop_4;}))
  {
    /* embed void SDL_WaitEvent(#{sdl_settings}->event);
      end */;
    ({SDL_WaitEvent(_sdl_settings_1->event);
     });
    _ite_2 = ((void*) UNIT);
  }
  else
  {
    /* embed void SDL_WaitEventTimeout(#{sdl_settings}->event,#{timeout});
      end */;
    ({SDL_WaitEventTimeout(_sdl_settings_1->event,_enc__arg_timeout);
     });
    _ite_2 = ((void*) UNIT);
  };
  /* handler!handleEvent(this, this.event_clone()) */;
  check_receiver(_enc__arg_handler, " ! ", "handler", "handleEvent", "\"./encore-libs-master/SDL/SDL_Main.enc\" (line 330, column 12)");
  check_receiver(_this, ".", "this", "event_clone", "\"./encore-libs-master/SDL/SDL_Main.enc\" (line 330, column 31)");
  pony_type_t* _tmp_6[] = {};
  SDL_Event* _sync_method_call_5 = _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Main_event_clone(_ctx, _this, NULL);
  pony_type_t* _tmp_7[] = {};
  _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_handleEvent_one_way(_ctx, _enc__arg_handler, NULL, _this, _sync_method_call_5);
  ENC_DTRACE3(METHOD_EXIT, (uintptr_t)*_ctx, (uintptr_t)_this, "waitForEvent");
  return UNIT;
}


future_t* _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Main_waitForEvent_future(pony_ctx_t** _ctx, _enc__active__encore_libs_master_SDL_SDL_Main_SDL_Main_t* _this, pony_type_t** runtimeType, _enc__active__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_t* _enc__arg_handler, int64_t _enc__arg_timeout)
{
  future_t* _fut = future_mk(_ctx, ENCORE_PRIMITIVE);
  pony_gc_send((*_ctx));
  encore_trace_actor((*_ctx), ((pony_actor_t*) _enc__arg_handler));
  /* Not tracing field '_enc__arg_timeout' */;
  encore_trace_object((*_ctx), _fut, future_trace);
  pony_send_done((*_ctx));
  _enc__fut_msg__encore_libs_master_SDL_SDL_Main_SDL_Main_waitForEvent_t* msg = ((_enc__fut_msg__encore_libs_master_SDL_SDL_Main_SDL_Main_waitForEvent_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__fut_msg__encore_libs_master_SDL_SDL_Main_SDL_Main_waitForEvent_t)), _ENC__FUT_MSG__encore_libs_master_SDL_SDL_Main_SDL_Main_waitForEvent));
  msg->f1 = _enc__arg_handler;
  msg->f2 = _enc__arg_timeout;
  msg->_fut = _fut;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
  return _fut;
}


void _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Main_waitForEvent_one_way(pony_ctx_t** _ctx, _enc__active__encore_libs_master_SDL_SDL_Main_SDL_Main_t* _this, pony_type_t** runtimeType, _enc__active__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_t* _enc__arg_handler, int64_t _enc__arg_timeout)
{
  pony_gc_send((*_ctx));
  encore_trace_actor((*_ctx), ((pony_actor_t*) _enc__arg_handler));
  /* Not tracing field '_enc__arg_timeout' */;
  /* No tracing future for oneway msg */;
  pony_send_done((*_ctx));
  _enc__oneway_msg__encore_libs_master_SDL_SDL_Main_SDL_Main_waitForEvent_t* msg = ((_enc__oneway_msg__encore_libs_master_SDL_SDL_Main_SDL_Main_waitForEvent_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__oneway_msg__encore_libs_master_SDL_SDL_Main_SDL_Main_waitForEvent_t)), _ENC__ONEWAY_MSG__encore_libs_master_SDL_SDL_Main_SDL_Main_waitForEvent));
  msg->f1 = _enc__arg_handler;
  msg->f2 = _enc__arg_timeout;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
}


void* _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Main_quit(pony_ctx_t** _ctx, _enc__active__encore_libs_master_SDL_SDL_Main_SDL_Main_t* _this, pony_type_t** runtimeType)
{
  ENC_DTRACE3(METHOD_ENTRY, (uintptr_t)*_ctx, (uintptr_t)_this, "quit");
  /* embed void SDL_Quit();
        10;
    end */;
  ({SDL_Quit();
        10;
   });
  ENC_DTRACE3(METHOD_EXIT, (uintptr_t)*_ctx, (uintptr_t)_this, "quit");
  return UNIT;
}


future_t* _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Main_quit_future(pony_ctx_t** _ctx, _enc__active__encore_libs_master_SDL_SDL_Main_SDL_Main_t* _this, pony_type_t** runtimeType)
{
  future_t* _fut = future_mk(_ctx, ENCORE_PRIMITIVE);
  pony_gc_send((*_ctx));
  encore_trace_object((*_ctx), _fut, future_trace);
  pony_send_done((*_ctx));
  _enc__fut_msg__encore_libs_master_SDL_SDL_Main_SDL_Main_quit_t* msg = ((_enc__fut_msg__encore_libs_master_SDL_SDL_Main_SDL_Main_quit_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__fut_msg__encore_libs_master_SDL_SDL_Main_SDL_Main_quit_t)), _ENC__FUT_MSG__encore_libs_master_SDL_SDL_Main_SDL_Main_quit));
  msg->_fut = _fut;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
  return _fut;
}


void _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Main_quit_one_way(pony_ctx_t** _ctx, _enc__active__encore_libs_master_SDL_SDL_Main_SDL_Main_t* _this, pony_type_t** runtimeType)
{
  pony_gc_send((*_ctx));
  /* No tracing future for oneway msg */;
  pony_send_done((*_ctx));
  _enc__oneway_msg__encore_libs_master_SDL_SDL_Main_SDL_Main_quit_t* msg = ((_enc__oneway_msg__encore_libs_master_SDL_SDL_Main_SDL_Main_quit_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__oneway_msg__encore_libs_master_SDL_SDL_Main_SDL_Main_quit_t)), _ENC__ONEWAY_MSG__encore_libs_master_SDL_SDL_Main_SDL_Main_quit));
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
}


static void _enc__dispatch__encore_libs_master_SDL_SDL_Main_SDL_Main(pony_ctx_t** _ctx, pony_actor_t* _a, pony_msg_t* _m)
{
  _enc__active__encore_libs_master_SDL_SDL_Main_SDL_Main_t* _this = ((_enc__active__encore_libs_master_SDL_SDL_Main_SDL_Main_t*) _a);
  switch (_m->id)
  {
    case _ENC__FUT_MSG__encore_libs_master_SDL_SDL_Main_SDL_Main_drawRectangle:
    {
      future_t* _fut = ((encore_fut_msg_t*) _m)->_fut;
      _enc__passive__encore_libs_master_SDL_SDL_Primitives_Rectangle_t* _enc__arg_rec = ((_enc__fut_msg__encore_libs_master_SDL_SDL_Main_SDL_Main_drawRectangle_t*) _m)->f1;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      encore_trace_object((*_ctx), _enc__arg_rec, _enc__trace__encore_libs_master_SDL_SDL_Primitives_Rectangle);
      encore_trace_object((*_ctx), _fut, future_type.trace);
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      pony_type_t* methodTypeVars[] = {};
      future_fulfil(_ctx, _fut, ((encore_arg_t) {.p = _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Main_drawRectangle(_ctx, _this, methodTypeVars, _enc__arg_rec)}));
      break;
    }
    case _ENC__ONEWAY_MSG__encore_libs_master_SDL_SDL_Main_SDL_Main_drawRectangle:
    {
      _enc__passive__encore_libs_master_SDL_SDL_Primitives_Rectangle_t* _enc__arg_rec = ((_enc__oneway_msg__encore_libs_master_SDL_SDL_Main_SDL_Main_drawRectangle_t*) _m)->f1;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      encore_trace_object((*_ctx), _enc__arg_rec, _enc__trace__encore_libs_master_SDL_SDL_Primitives_Rectangle);
      /* Not tracing the future in a oneWay send */;
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      pony_type_t* methodTypeVars[] = {};
      _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Main_drawRectangle(_ctx, _this, methodTypeVars, _enc__arg_rec);
      break;
    }
    case _ENC__FUT_MSG__encore_libs_master_SDL_SDL_Main_SDL_Main_fillRectangle:
    {
      future_t* _fut = ((encore_fut_msg_t*) _m)->_fut;
      _enc__passive__encore_libs_master_SDL_SDL_Primitives_Rectangle_t* _enc__arg_rec = ((_enc__fut_msg__encore_libs_master_SDL_SDL_Main_SDL_Main_fillRectangle_t*) _m)->f1;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      encore_trace_object((*_ctx), _enc__arg_rec, _enc__trace__encore_libs_master_SDL_SDL_Primitives_Rectangle);
      encore_trace_object((*_ctx), _fut, future_type.trace);
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      pony_type_t* methodTypeVars[] = {};
      future_fulfil(_ctx, _fut, ((encore_arg_t) {.p = _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Main_fillRectangle(_ctx, _this, methodTypeVars, _enc__arg_rec)}));
      break;
    }
    case _ENC__ONEWAY_MSG__encore_libs_master_SDL_SDL_Main_SDL_Main_fillRectangle:
    {
      _enc__passive__encore_libs_master_SDL_SDL_Primitives_Rectangle_t* _enc__arg_rec = ((_enc__oneway_msg__encore_libs_master_SDL_SDL_Main_SDL_Main_fillRectangle_t*) _m)->f1;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      encore_trace_object((*_ctx), _enc__arg_rec, _enc__trace__encore_libs_master_SDL_SDL_Primitives_Rectangle);
      /* Not tracing the future in a oneWay send */;
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      pony_type_t* methodTypeVars[] = {};
      _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Main_fillRectangle(_ctx, _this, methodTypeVars, _enc__arg_rec);
      break;
    }
    case _ENC__FUT_MSG__encore_libs_master_SDL_SDL_Main_SDL_Main_setRenderColor:
    {
      future_t* _fut = ((encore_fut_msg_t*) _m)->_fut;
      _enc__passive__encore_libs_master_SDL_SDL_Primitives_ColorRGBA_t* _enc__arg_c = ((_enc__fut_msg__encore_libs_master_SDL_SDL_Main_SDL_Main_setRenderColor_t*) _m)->f1;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      encore_trace_object((*_ctx), _enc__arg_c, _enc__trace__encore_libs_master_SDL_SDL_Primitives_ColorRGBA);
      encore_trace_object((*_ctx), _fut, future_type.trace);
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      pony_type_t* methodTypeVars[] = {};
      future_fulfil(_ctx, _fut, ((encore_arg_t) {.p = _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Main_setRenderColor(_ctx, _this, methodTypeVars, _enc__arg_c)}));
      break;
    }
    case _ENC__ONEWAY_MSG__encore_libs_master_SDL_SDL_Main_SDL_Main_setRenderColor:
    {
      _enc__passive__encore_libs_master_SDL_SDL_Primitives_ColorRGBA_t* _enc__arg_c = ((_enc__oneway_msg__encore_libs_master_SDL_SDL_Main_SDL_Main_setRenderColor_t*) _m)->f1;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      encore_trace_object((*_ctx), _enc__arg_c, _enc__trace__encore_libs_master_SDL_SDL_Primitives_ColorRGBA);
      /* Not tracing the future in a oneWay send */;
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      pony_type_t* methodTypeVars[] = {};
      _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Main_setRenderColor(_ctx, _this, methodTypeVars, _enc__arg_c);
      break;
    }
    case _ENC__FUT_MSG__encore_libs_master_SDL_SDL_Main_SDL_Main_drawImage:
    {
      future_t* _fut = ((encore_fut_msg_t*) _m)->_fut;
      _enc__passive_String_String_t* _enc__arg_image_path = ((_enc__fut_msg__encore_libs_master_SDL_SDL_Main_SDL_Main_drawImage_t*) _m)->f1;
      int64_t _enc__arg_x = ((_enc__fut_msg__encore_libs_master_SDL_SDL_Main_SDL_Main_drawImage_t*) _m)->f2;
      int64_t _enc__arg_y = ((_enc__fut_msg__encore_libs_master_SDL_SDL_Main_SDL_Main_drawImage_t*) _m)->f3;
      double _enc__arg_x_scale = ((_enc__fut_msg__encore_libs_master_SDL_SDL_Main_SDL_Main_drawImage_t*) _m)->f4;
      double _enc__arg_y_scale = ((_enc__fut_msg__encore_libs_master_SDL_SDL_Main_SDL_Main_drawImage_t*) _m)->f5;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      encore_trace_object((*_ctx), _enc__arg_image_path, _enc__trace_String_String);
      /* Not tracing field '_enc__arg_x' */;
      /* Not tracing field '_enc__arg_y' */;
      /* Not tracing field '_enc__arg_x_scale' */;
      /* Not tracing field '_enc__arg_y_scale' */;
      encore_trace_object((*_ctx), _fut, future_type.trace);
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      pony_type_t* methodTypeVars[] = {};
      future_fulfil(_ctx, _fut, ((encore_arg_t) {.p = _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Main_drawImage(_ctx, _this, methodTypeVars, _enc__arg_image_path, _enc__arg_x, _enc__arg_y, _enc__arg_x_scale, _enc__arg_y_scale)}));
      break;
    }
    case _ENC__ONEWAY_MSG__encore_libs_master_SDL_SDL_Main_SDL_Main_drawImage:
    {
      _enc__passive_String_String_t* _enc__arg_image_path = ((_enc__oneway_msg__encore_libs_master_SDL_SDL_Main_SDL_Main_drawImage_t*) _m)->f1;
      int64_t _enc__arg_x = ((_enc__oneway_msg__encore_libs_master_SDL_SDL_Main_SDL_Main_drawImage_t*) _m)->f2;
      int64_t _enc__arg_y = ((_enc__oneway_msg__encore_libs_master_SDL_SDL_Main_SDL_Main_drawImage_t*) _m)->f3;
      double _enc__arg_x_scale = ((_enc__oneway_msg__encore_libs_master_SDL_SDL_Main_SDL_Main_drawImage_t*) _m)->f4;
      double _enc__arg_y_scale = ((_enc__oneway_msg__encore_libs_master_SDL_SDL_Main_SDL_Main_drawImage_t*) _m)->f5;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      encore_trace_object((*_ctx), _enc__arg_image_path, _enc__trace_String_String);
      /* Not tracing field '_enc__arg_x' */;
      /* Not tracing field '_enc__arg_y' */;
      /* Not tracing field '_enc__arg_x_scale' */;
      /* Not tracing field '_enc__arg_y_scale' */;
      /* Not tracing the future in a oneWay send */;
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      pony_type_t* methodTypeVars[] = {};
      _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Main_drawImage(_ctx, _this, methodTypeVars, _enc__arg_image_path, _enc__arg_x, _enc__arg_y, _enc__arg_x_scale, _enc__arg_y_scale);
      break;
    }
    case _ENC__FUT_MSG__encore_libs_master_SDL_SDL_Main_SDL_Main_drawLine:
    {
      future_t* _fut = ((encore_fut_msg_t*) _m)->_fut;
      _enc__passive__encore_libs_master_SDL_SDL_Primitives_Point2D_t* _enc__arg_p1 = ((_enc__fut_msg__encore_libs_master_SDL_SDL_Main_SDL_Main_drawLine_t*) _m)->f1;
      _enc__passive__encore_libs_master_SDL_SDL_Primitives_Point2D_t* _enc__arg_p2 = ((_enc__fut_msg__encore_libs_master_SDL_SDL_Main_SDL_Main_drawLine_t*) _m)->f2;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      encore_trace_object((*_ctx), _enc__arg_p1, _enc__trace__encore_libs_master_SDL_SDL_Primitives_Point2D);
      encore_trace_object((*_ctx), _enc__arg_p2, _enc__trace__encore_libs_master_SDL_SDL_Primitives_Point2D);
      encore_trace_object((*_ctx), _fut, future_type.trace);
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      pony_type_t* methodTypeVars[] = {};
      future_fulfil(_ctx, _fut, ((encore_arg_t) {.p = _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Main_drawLine(_ctx, _this, methodTypeVars, _enc__arg_p1, _enc__arg_p2)}));
      break;
    }
    case _ENC__ONEWAY_MSG__encore_libs_master_SDL_SDL_Main_SDL_Main_drawLine:
    {
      _enc__passive__encore_libs_master_SDL_SDL_Primitives_Point2D_t* _enc__arg_p1 = ((_enc__oneway_msg__encore_libs_master_SDL_SDL_Main_SDL_Main_drawLine_t*) _m)->f1;
      _enc__passive__encore_libs_master_SDL_SDL_Primitives_Point2D_t* _enc__arg_p2 = ((_enc__oneway_msg__encore_libs_master_SDL_SDL_Main_SDL_Main_drawLine_t*) _m)->f2;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      encore_trace_object((*_ctx), _enc__arg_p1, _enc__trace__encore_libs_master_SDL_SDL_Primitives_Point2D);
      encore_trace_object((*_ctx), _enc__arg_p2, _enc__trace__encore_libs_master_SDL_SDL_Primitives_Point2D);
      /* Not tracing the future in a oneWay send */;
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      pony_type_t* methodTypeVars[] = {};
      _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Main_drawLine(_ctx, _this, methodTypeVars, _enc__arg_p1, _enc__arg_p2);
      break;
    }
    case _ENC__FUT_MSG__encore_libs_master_SDL_SDL_Main_SDL_Main_clearAll:
    {
      future_t* _fut = ((encore_fut_msg_t*) _m)->_fut;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      encore_trace_object((*_ctx), _fut, future_type.trace);
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      pony_type_t* methodTypeVars[] = {};
      future_fulfil(_ctx, _fut, ((encore_arg_t) {.p = _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Main_clearAll(_ctx, _this, methodTypeVars)}));
      break;
    }
    case _ENC__ONEWAY_MSG__encore_libs_master_SDL_SDL_Main_SDL_Main_clearAll:
    {
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      /* Not tracing the future in a oneWay send */;
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      pony_type_t* methodTypeVars[] = {};
      _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Main_clearAll(_ctx, _this, methodTypeVars);
      break;
    }
    case _ENC__FUT_MSG__encore_libs_master_SDL_SDL_Main_SDL_Main_fillAll:
    {
      future_t* _fut = ((encore_fut_msg_t*) _m)->_fut;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      encore_trace_object((*_ctx), _fut, future_type.trace);
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      pony_type_t* methodTypeVars[] = {};
      future_fulfil(_ctx, _fut, ((encore_arg_t) {.p = _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Main_fillAll(_ctx, _this, methodTypeVars)}));
      break;
    }
    case _ENC__ONEWAY_MSG__encore_libs_master_SDL_SDL_Main_SDL_Main_fillAll:
    {
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      /* Not tracing the future in a oneWay send */;
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      pony_type_t* methodTypeVars[] = {};
      _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Main_fillAll(_ctx, _this, methodTypeVars);
      break;
    }
    case _ENC__FUT_MSG__encore_libs_master_SDL_SDL_Main_SDL_Main_initFont:
    {
      future_t* _fut = ((encore_fut_msg_t*) _m)->_fut;
      _enc__passive_String_String_t* _enc__arg_font_name = ((_enc__fut_msg__encore_libs_master_SDL_SDL_Main_SDL_Main_initFont_t*) _m)->f1;
      int64_t _enc__arg_size = ((_enc__fut_msg__encore_libs_master_SDL_SDL_Main_SDL_Main_initFont_t*) _m)->f2;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      encore_trace_object((*_ctx), _enc__arg_font_name, _enc__trace_String_String);
      /* Not tracing field '_enc__arg_size' */;
      encore_trace_object((*_ctx), _fut, future_type.trace);
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      pony_type_t* methodTypeVars[] = {};
      future_fulfil(_ctx, _fut, ((encore_arg_t) {.p = _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Main_initFont(_ctx, _this, methodTypeVars, _enc__arg_font_name, _enc__arg_size)}));
      break;
    }
    case _ENC__ONEWAY_MSG__encore_libs_master_SDL_SDL_Main_SDL_Main_initFont:
    {
      _enc__passive_String_String_t* _enc__arg_font_name = ((_enc__oneway_msg__encore_libs_master_SDL_SDL_Main_SDL_Main_initFont_t*) _m)->f1;
      int64_t _enc__arg_size = ((_enc__oneway_msg__encore_libs_master_SDL_SDL_Main_SDL_Main_initFont_t*) _m)->f2;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      encore_trace_object((*_ctx), _enc__arg_font_name, _enc__trace_String_String);
      /* Not tracing field '_enc__arg_size' */;
      /* Not tracing the future in a oneWay send */;
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      pony_type_t* methodTypeVars[] = {};
      _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Main_initFont(_ctx, _this, methodTypeVars, _enc__arg_font_name, _enc__arg_size);
      break;
    }
    case _ENC__FUT_MSG__encore_libs_master_SDL_SDL_Main_SDL_Main_drawText:
    {
      future_t* _fut = ((encore_fut_msg_t*) _m)->_fut;
      _enc__passive_String_String_t* _enc__arg_text = ((_enc__fut_msg__encore_libs_master_SDL_SDL_Main_SDL_Main_drawText_t*) _m)->f1;
      int64_t _enc__arg_x = ((_enc__fut_msg__encore_libs_master_SDL_SDL_Main_SDL_Main_drawText_t*) _m)->f2;
      int64_t _enc__arg_y = ((_enc__fut_msg__encore_libs_master_SDL_SDL_Main_SDL_Main_drawText_t*) _m)->f3;
      _enc__passive__encore_libs_master_SDL_SDL_Primitives_ColorRGBA_t* _enc__arg_color = ((_enc__fut_msg__encore_libs_master_SDL_SDL_Main_SDL_Main_drawText_t*) _m)->f4;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      encore_trace_object((*_ctx), _enc__arg_text, _enc__trace_String_String);
      /* Not tracing field '_enc__arg_x' */;
      /* Not tracing field '_enc__arg_y' */;
      encore_trace_object((*_ctx), _enc__arg_color, _enc__trace__encore_libs_master_SDL_SDL_Primitives_ColorRGBA);
      encore_trace_object((*_ctx), _fut, future_type.trace);
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      pony_type_t* methodTypeVars[] = {};
      future_fulfil(_ctx, _fut, ((encore_arg_t) {.p = _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Main_drawText(_ctx, _this, methodTypeVars, _enc__arg_text, _enc__arg_x, _enc__arg_y, _enc__arg_color)}));
      break;
    }
    case _ENC__ONEWAY_MSG__encore_libs_master_SDL_SDL_Main_SDL_Main_drawText:
    {
      _enc__passive_String_String_t* _enc__arg_text = ((_enc__oneway_msg__encore_libs_master_SDL_SDL_Main_SDL_Main_drawText_t*) _m)->f1;
      int64_t _enc__arg_x = ((_enc__oneway_msg__encore_libs_master_SDL_SDL_Main_SDL_Main_drawText_t*) _m)->f2;
      int64_t _enc__arg_y = ((_enc__oneway_msg__encore_libs_master_SDL_SDL_Main_SDL_Main_drawText_t*) _m)->f3;
      _enc__passive__encore_libs_master_SDL_SDL_Primitives_ColorRGBA_t* _enc__arg_color = ((_enc__oneway_msg__encore_libs_master_SDL_SDL_Main_SDL_Main_drawText_t*) _m)->f4;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      encore_trace_object((*_ctx), _enc__arg_text, _enc__trace_String_String);
      /* Not tracing field '_enc__arg_x' */;
      /* Not tracing field '_enc__arg_y' */;
      encore_trace_object((*_ctx), _enc__arg_color, _enc__trace__encore_libs_master_SDL_SDL_Primitives_ColorRGBA);
      /* Not tracing the future in a oneWay send */;
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      pony_type_t* methodTypeVars[] = {};
      _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Main_drawText(_ctx, _this, methodTypeVars, _enc__arg_text, _enc__arg_x, _enc__arg_y, _enc__arg_color);
      break;
    }
    case _ENC__FUT_MSG__encore_libs_master_SDL_SDL_Main_SDL_Main_init:
    {
      future_t* _fut = ((encore_fut_msg_t*) _m)->_fut;
      int64_t _enc__arg_width = ((_enc__fut_msg__encore_libs_master_SDL_SDL_Main_SDL_Main_init_t*) _m)->f1;
      int64_t _enc__arg_height = ((_enc__fut_msg__encore_libs_master_SDL_SDL_Main_SDL_Main_init_t*) _m)->f2;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      /* Not tracing field '_enc__arg_width' */;
      /* Not tracing field '_enc__arg_height' */;
      encore_trace_object((*_ctx), _fut, future_type.trace);
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      pony_type_t* methodTypeVars[] = {};
      future_fulfil(_ctx, _fut, ((encore_arg_t) {.p = _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Main_init(_ctx, _this, methodTypeVars, _enc__arg_width, _enc__arg_height)}));
      break;
    }
    case _ENC__ONEWAY_MSG__encore_libs_master_SDL_SDL_Main_SDL_Main_init:
    {
      int64_t _enc__arg_width = ((_enc__oneway_msg__encore_libs_master_SDL_SDL_Main_SDL_Main_init_t*) _m)->f1;
      int64_t _enc__arg_height = ((_enc__oneway_msg__encore_libs_master_SDL_SDL_Main_SDL_Main_init_t*) _m)->f2;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      /* Not tracing field '_enc__arg_width' */;
      /* Not tracing field '_enc__arg_height' */;
      /* Not tracing the future in a oneWay send */;
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      pony_type_t* methodTypeVars[] = {};
      _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Main_init(_ctx, _this, methodTypeVars, _enc__arg_width, _enc__arg_height);
      break;
    }
    case _ENC__FUT_MSG__encore_libs_master_SDL_SDL_Main_SDL_Main_getHeight:
    {
      future_t* _fut = ((encore_fut_msg_t*) _m)->_fut;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      encore_trace_object((*_ctx), _fut, future_type.trace);
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      pony_type_t* methodTypeVars[] = {};
      future_fulfil(_ctx, _fut, ((encore_arg_t) {.i = _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Main_getHeight(_ctx, _this, methodTypeVars)}));
      break;
    }
    case _ENC__ONEWAY_MSG__encore_libs_master_SDL_SDL_Main_SDL_Main_getHeight:
    {
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      /* Not tracing the future in a oneWay send */;
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      pony_type_t* methodTypeVars[] = {};
      _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Main_getHeight(_ctx, _this, methodTypeVars);
      break;
    }
    case _ENC__FUT_MSG__encore_libs_master_SDL_SDL_Main_SDL_Main_getWidth:
    {
      future_t* _fut = ((encore_fut_msg_t*) _m)->_fut;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      encore_trace_object((*_ctx), _fut, future_type.trace);
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      pony_type_t* methodTypeVars[] = {};
      future_fulfil(_ctx, _fut, ((encore_arg_t) {.i = _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Main_getWidth(_ctx, _this, methodTypeVars)}));
      break;
    }
    case _ENC__ONEWAY_MSG__encore_libs_master_SDL_SDL_Main_SDL_Main_getWidth:
    {
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      /* Not tracing the future in a oneWay send */;
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      pony_type_t* methodTypeVars[] = {};
      _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Main_getWidth(_ctx, _this, methodTypeVars);
      break;
    }
    case _ENC__FUT_MSG__encore_libs_master_SDL_SDL_Main_SDL_Main_refresh:
    {
      future_t* _fut = ((encore_fut_msg_t*) _m)->_fut;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      encore_trace_object((*_ctx), _fut, future_type.trace);
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      pony_type_t* methodTypeVars[] = {};
      future_fulfil(_ctx, _fut, ((encore_arg_t) {.p = _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Main_refresh(_ctx, _this, methodTypeVars)}));
      break;
    }
    case _ENC__ONEWAY_MSG__encore_libs_master_SDL_SDL_Main_SDL_Main_refresh:
    {
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      /* Not tracing the future in a oneWay send */;
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      pony_type_t* methodTypeVars[] = {};
      _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Main_refresh(_ctx, _this, methodTypeVars);
      break;
    }
    case _ENC__FUT_MSG__encore_libs_master_SDL_SDL_Main_SDL_Main_event_clone:
    {
      future_t* _fut = ((encore_fut_msg_t*) _m)->_fut;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      encore_trace_object((*_ctx), _fut, future_type.trace);
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      pony_type_t* methodTypeVars[] = {};
      future_fulfil(_ctx, _fut, ((encore_arg_t) {.p = _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Main_event_clone(_ctx, _this, methodTypeVars)}));
      break;
    }
    case _ENC__ONEWAY_MSG__encore_libs_master_SDL_SDL_Main_SDL_Main_event_clone:
    {
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      /* Not tracing the future in a oneWay send */;
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      pony_type_t* methodTypeVars[] = {};
      _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Main_event_clone(_ctx, _this, methodTypeVars);
      break;
    }
    case _ENC__FUT_MSG__encore_libs_master_SDL_SDL_Main_SDL_Main_pollEvent:
    {
      future_t* _fut = ((encore_fut_msg_t*) _m)->_fut;
      _enc__active__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_t* _enc__arg_handler = ((_enc__fut_msg__encore_libs_master_SDL_SDL_Main_SDL_Main_pollEvent_t*) _m)->f1;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      encore_trace_actor((*_ctx), ((pony_actor_t*) _enc__arg_handler));
      encore_trace_object((*_ctx), _fut, future_type.trace);
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      pony_type_t* methodTypeVars[] = {};
      future_fulfil(_ctx, _fut, ((encore_arg_t) {.p = _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Main_pollEvent(_ctx, _this, methodTypeVars, _enc__arg_handler)}));
      break;
    }
    case _ENC__ONEWAY_MSG__encore_libs_master_SDL_SDL_Main_SDL_Main_pollEvent:
    {
      _enc__active__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_t* _enc__arg_handler = ((_enc__oneway_msg__encore_libs_master_SDL_SDL_Main_SDL_Main_pollEvent_t*) _m)->f1;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      encore_trace_actor((*_ctx), ((pony_actor_t*) _enc__arg_handler));
      /* Not tracing the future in a oneWay send */;
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      pony_type_t* methodTypeVars[] = {};
      _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Main_pollEvent(_ctx, _this, methodTypeVars, _enc__arg_handler);
      break;
    }
    case _ENC__FUT_MSG__encore_libs_master_SDL_SDL_Main_SDL_Main_waitForEvent:
    {
      future_t* _fut = ((encore_fut_msg_t*) _m)->_fut;
      _enc__active__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_t* _enc__arg_handler = ((_enc__fut_msg__encore_libs_master_SDL_SDL_Main_SDL_Main_waitForEvent_t*) _m)->f1;
      int64_t _enc__arg_timeout = ((_enc__fut_msg__encore_libs_master_SDL_SDL_Main_SDL_Main_waitForEvent_t*) _m)->f2;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      encore_trace_actor((*_ctx), ((pony_actor_t*) _enc__arg_handler));
      /* Not tracing field '_enc__arg_timeout' */;
      encore_trace_object((*_ctx), _fut, future_type.trace);
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      pony_type_t* methodTypeVars[] = {};
      future_fulfil(_ctx, _fut, ((encore_arg_t) {.p = _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Main_waitForEvent(_ctx, _this, methodTypeVars, _enc__arg_handler, _enc__arg_timeout)}));
      break;
    }
    case _ENC__ONEWAY_MSG__encore_libs_master_SDL_SDL_Main_SDL_Main_waitForEvent:
    {
      _enc__active__encore_libs_master_SDL_SDL_Main_SDL_Event_Handler_t* _enc__arg_handler = ((_enc__oneway_msg__encore_libs_master_SDL_SDL_Main_SDL_Main_waitForEvent_t*) _m)->f1;
      int64_t _enc__arg_timeout = ((_enc__oneway_msg__encore_libs_master_SDL_SDL_Main_SDL_Main_waitForEvent_t*) _m)->f2;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      encore_trace_actor((*_ctx), ((pony_actor_t*) _enc__arg_handler));
      /* Not tracing field '_enc__arg_timeout' */;
      /* Not tracing the future in a oneWay send */;
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      pony_type_t* methodTypeVars[] = {};
      _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Main_waitForEvent(_ctx, _this, methodTypeVars, _enc__arg_handler, _enc__arg_timeout);
      break;
    }
    case _ENC__FUT_MSG__encore_libs_master_SDL_SDL_Main_SDL_Main_quit:
    {
      future_t* _fut = ((encore_fut_msg_t*) _m)->_fut;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      encore_trace_object((*_ctx), _fut, future_type.trace);
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      pony_type_t* methodTypeVars[] = {};
      future_fulfil(_ctx, _fut, ((encore_arg_t) {.p = _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Main_quit(_ctx, _this, methodTypeVars)}));
      break;
    }
    case _ENC__ONEWAY_MSG__encore_libs_master_SDL_SDL_Main_SDL_Main_quit:
    {
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      /* Not tracing the future in a oneWay send */;
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      pony_type_t* methodTypeVars[] = {};
      _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Main_quit(_ctx, _this, methodTypeVars);
      break;
    }
    default:
    {
      printf("error, got invalid id: %zd", _m->id);
    }
  };
}


pony_type_t _enc__active__encore_libs_master_SDL_SDL_Main_SDL_Main_type = {.id=_ENC__ID__encore_libs_master_SDL_SDL_Main_SDL_Main, .size=sizeof(_enc__active__encore_libs_master_SDL_SDL_Main_SDL_Main_t), .trace=_enc__trace__encore_libs_master_SDL_SDL_Main_SDL_Main, .dispatch=_enc__dispatch__encore_libs_master_SDL_SDL_Main_SDL_Main, .vtable=trait_method_selector};
