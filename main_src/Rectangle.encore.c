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


void _enc__type_init_Rectangle(_enc__passive_Rectangle_t* this, ... )
{
  va_list params;
  va_start(params, this);
  va_end(params);
}


void _enc__trace_Rectangle(pony_ctx_t* _ctx_arg, void* p)
{
  pony_ctx_t** _ctx = (&(_ctx_arg));
  _enc__passive_Rectangle_t* _this = p;
  int64_t _enc__field_x = _this->_enc__field_x;
  /* Not tracing field '_enc__field_x' */;
  int64_t _enc__field_y = _this->_enc__field_y;
  /* Not tracing field '_enc__field_y' */;
  int64_t _enc__field_w = _this->_enc__field_w;
  /* Not tracing field '_enc__field_w' */;
  int64_t _enc__field_h = _this->_enc__field_h;
  /* Not tracing field '_enc__field_h' */;
}


_enc__passive_Rectangle_t* _enc__constructor_Rectangle(pony_ctx_t** _ctx)
{
  _enc__passive_Rectangle_t* this = ((_enc__passive_Rectangle_t*) encore_alloc((*_ctx), sizeof(_enc__passive_Rectangle_t)));
  this->_enc__self_type = (&(_enc__passive_Rectangle_type));
  return this;
}


void* _enc__method_Rectangle__init(pony_ctx_t** _ctx, _enc__passive_Rectangle_t* _this, int64_t _enc__arg_x, int64_t _enc__arg_y, int64_t _enc__arg_w, int64_t _enc__arg_h)
{
  /* this.x = x */;
  (*({ _this;}))._enc__field_x = _enc__arg_x;
  /* this.y = y */;
  (*({ _this;}))._enc__field_y = _enc__arg_y;
  /* this.w = w */;
  (*({ _this;}))._enc__field_w = _enc__arg_w;
  /* this.h = h */;
  (*({ _this;}))._enc__field_h = _enc__arg_h;
  return UNIT;
}


pony_type_t _enc__passive_Rectangle_type = {.id=_ENC__ID_Rectangle, .size=sizeof(_enc__passive_Rectangle_t), .trace=_enc__trace_Rectangle, .vtable=trait_method_selector};
