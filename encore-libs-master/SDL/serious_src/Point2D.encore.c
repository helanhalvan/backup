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


void _enc__type_init_Point2D(_enc__passive_Point2D_t* this, ... )
{
  va_list params;
  va_start(params, this);
  va_end(params);
}


void _enc__trace_Point2D(pony_ctx_t* _ctx_arg, void* p)
{
  pony_ctx_t** _ctx = (&(_ctx_arg));
  _enc__passive_Point2D_t* _this = p;
  int64_t _enc__field_x = _this->_enc__field_x;
  /* Not tracing field '_enc__field_x' */;
  int64_t _enc__field_y = _this->_enc__field_y;
  /* Not tracing field '_enc__field_y' */;
}


_enc__passive_Point2D_t* _enc__constructor_Point2D(pony_ctx_t** _ctx)
{
  _enc__passive_Point2D_t* this = ((_enc__passive_Point2D_t*) encore_alloc((*_ctx), sizeof(_enc__passive_Point2D_t)));
  this->_enc__self_type = (&(_enc__passive_Point2D_type));
  return this;
}


void* _enc__method_Point2D__init(pony_ctx_t** _ctx, _enc__passive_Point2D_t* _this, int64_t _enc__arg_x, int64_t _enc__arg_y)
{
  /* this.x = x */;
  (*({ _this;}))._enc__field_x = _enc__arg_x;
  /* this.y = y */;
  (*({ _this;}))._enc__field_y = _enc__arg_y;
  return UNIT;
}


static void _enc__dispatch_Point2D(pony_ctx_t** _ctx, pony_actor_t* _a, pony_msg_t* _m)
{
  /* Stub! Might be used when we have dynamic dispatch on passive classes */
}


pony_type_t _enc__passive_Point2D_type = {.id=_ENC__ID_Point2D, .size=sizeof(_enc__passive_Point2D_t), .trace=_enc__trace_Point2D, .dispatch=_enc__dispatch_Point2D, .vtable=trait_method_selector};
