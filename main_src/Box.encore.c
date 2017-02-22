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


struct _enc__active__encore_libs_master_Ped_util_Regions_Box_t
{
  encore_actor_t _enc__actor;
  int64_t _enc__field_xmax;
  int64_t _enc__field_ymax;
  int64_t _enc__field_xmin;
  int64_t _enc__field_ymin;
  _enc__active__encore_libs_master_Ped_util_Regions_Box_t* _enc__field_up;
  _enc__active__encore_libs_master_Ped_util_Regions_Box_t* _enc__field_down;
  _enc__active__encore_libs_master_Ped_util_Regions_Box_t* _enc__field_left;
  _enc__active__encore_libs_master_Ped_util_Regions_Box_t* _enc__field_right;
  _enc__active__encore_libs_master_Ped_util_Regions_Box_t* _enc__field_top_right;
  _enc__active__encore_libs_master_Ped_util_Regions_Box_t* _enc__field_top_left;
  _enc__active__encore_libs_master_Ped_util_Regions_Box_t* _enc__field_bottom_left;
  _enc__active__encore_libs_master_Ped_util_Regions_Box_t* _enc__field_bottom_right;
  _enc__passive__encore_libs_master_Ped_util_Quad_tree_Quad_tree_t* _enc__field_matrix;
  _enc__passive__encore_libs_master_Ped_util_Regions_Item_t* _enc__field_agents;
  _enc__passive__encore_libs_master_Ped_util_Regions_Item_t* _enc__field_last;
  _enc__passive__encore_libs_master_Ped_util_Regions_Item_t* _enc__field_newcommers;
  _enc__passive__encore_libs_master_Ped_util_Regions_Item_t* _enc__field_to_early;
  int64_t _enc__field_ttl;
  int64_t _enc__field_size;
  int64_t _enc__field_moving;
};


void _enc__type_init__encore_libs_master_Ped_util_Regions_Box(_enc__active__encore_libs_master_Ped_util_Regions_Box_t* _this, ... )
{
  va_list params;
  va_start(params, _this);
  va_end(params);
}


void _enc__trace__encore_libs_master_Ped_util_Regions_Box(pony_ctx_t* _ctx_arg, void* p)
{
  pony_ctx_t** _ctx = (&(_ctx_arg));
  _enc__active__encore_libs_master_Ped_util_Regions_Box_t* _this = p;
  int64_t _enc__field_xmax = _this->_enc__field_xmax;
  /* Not tracing field '_enc__field_xmax' */;
  int64_t _enc__field_ymax = _this->_enc__field_ymax;
  /* Not tracing field '_enc__field_ymax' */;
  int64_t _enc__field_xmin = _this->_enc__field_xmin;
  /* Not tracing field '_enc__field_xmin' */;
  int64_t _enc__field_ymin = _this->_enc__field_ymin;
  /* Not tracing field '_enc__field_ymin' */;
  _enc__active__encore_libs_master_Ped_util_Regions_Box_t* _enc__field_up = _this->_enc__field_up;
  encore_trace_actor((*_ctx), ((pony_actor_t*) _enc__field_up));
  _enc__active__encore_libs_master_Ped_util_Regions_Box_t* _enc__field_down = _this->_enc__field_down;
  encore_trace_actor((*_ctx), ((pony_actor_t*) _enc__field_down));
  _enc__active__encore_libs_master_Ped_util_Regions_Box_t* _enc__field_left = _this->_enc__field_left;
  encore_trace_actor((*_ctx), ((pony_actor_t*) _enc__field_left));
  _enc__active__encore_libs_master_Ped_util_Regions_Box_t* _enc__field_right = _this->_enc__field_right;
  encore_trace_actor((*_ctx), ((pony_actor_t*) _enc__field_right));
  _enc__active__encore_libs_master_Ped_util_Regions_Box_t* _enc__field_top_right = _this->_enc__field_top_right;
  encore_trace_actor((*_ctx), ((pony_actor_t*) _enc__field_top_right));
  _enc__active__encore_libs_master_Ped_util_Regions_Box_t* _enc__field_top_left = _this->_enc__field_top_left;
  encore_trace_actor((*_ctx), ((pony_actor_t*) _enc__field_top_left));
  _enc__active__encore_libs_master_Ped_util_Regions_Box_t* _enc__field_bottom_left = _this->_enc__field_bottom_left;
  encore_trace_actor((*_ctx), ((pony_actor_t*) _enc__field_bottom_left));
  _enc__active__encore_libs_master_Ped_util_Regions_Box_t* _enc__field_bottom_right = _this->_enc__field_bottom_right;
  encore_trace_actor((*_ctx), ((pony_actor_t*) _enc__field_bottom_right));
  _enc__passive__encore_libs_master_Ped_util_Quad_tree_Quad_tree_t* _enc__field_matrix = _this->_enc__field_matrix;
  encore_trace_object((*_ctx), _enc__field_matrix, _enc__trace__encore_libs_master_Ped_util_Quad_tree_Quad_tree);
  _enc__passive__encore_libs_master_Ped_util_Regions_Item_t* _enc__field_agents = _this->_enc__field_agents;
  encore_trace_object((*_ctx), _enc__field_agents, _enc__trace__encore_libs_master_Ped_util_Regions_Item);
  _enc__passive__encore_libs_master_Ped_util_Regions_Item_t* _enc__field_last = _this->_enc__field_last;
  encore_trace_object((*_ctx), _enc__field_last, _enc__trace__encore_libs_master_Ped_util_Regions_Item);
  _enc__passive__encore_libs_master_Ped_util_Regions_Item_t* _enc__field_newcommers = _this->_enc__field_newcommers;
  encore_trace_object((*_ctx), _enc__field_newcommers, _enc__trace__encore_libs_master_Ped_util_Regions_Item);
  _enc__passive__encore_libs_master_Ped_util_Regions_Item_t* _enc__field_to_early = _this->_enc__field_to_early;
  encore_trace_object((*_ctx), _enc__field_to_early, _enc__trace__encore_libs_master_Ped_util_Regions_Item);
  int64_t _enc__field_ttl = _this->_enc__field_ttl;
  /* Not tracing field '_enc__field_ttl' */;
  int64_t _enc__field_size = _this->_enc__field_size;
  /* Not tracing field '_enc__field_size' */;
  int64_t _enc__field_moving = _this->_enc__field_moving;
  /* Not tracing field '_enc__field_moving' */;
}


_enc__active__encore_libs_master_Ped_util_Regions_Box_t* _enc__constructor__encore_libs_master_Ped_util_Regions_Box(pony_ctx_t** _ctx, pony_type_t** runtimeType)
{
  _enc__active__encore_libs_master_Ped_util_Regions_Box_t* _this = ((_enc__active__encore_libs_master_Ped_util_Regions_Box_t*) encore_create((*_ctx), (&(_enc__active__encore_libs_master_Ped_util_Regions_Box_type))));
  return _this;
}


void* _enc__method__encore_libs_master_Ped_util_Regions_Box_init(pony_ctx_t** _ctx, _enc__active__encore_libs_master_Ped_util_Regions_Box_t* _this, pony_type_t** runtimeType, tuple_t* _enc__arg_in_max, tuple_t* _enc__arg_in_min)
{
  ENC_DTRACE3(METHOD_ENTRY, (uintptr_t)*_ctx, (uintptr_t)_this, "init");
  /* this.matrix = new Quad_tree(in_max, in_min) */;
  _enc__passive__encore_libs_master_Ped_util_Quad_tree_Quad_tree_t* _new_0 = _enc__constructor__encore_libs_master_Ped_util_Quad_tree_Quad_tree(_ctx, NULL);
  pony_type_t* _tmp_1[] = {};
  _enc__type_init__encore_libs_master_Ped_util_Quad_tree_Quad_tree(_new_0);
  _enc__method__encore_libs_master_Ped_util_Quad_tree_Quad_tree_init(_ctx, _new_0, NULL, _enc__arg_in_max, _enc__arg_in_min);
  (*({ENC_DTRACE3(FIELD_WRITE, (uintptr_t)*_ctx, (uintptr_t)_this, "matrix"); _this;}))._enc__field_matrix = _new_0;
  /* match in_max with
  (x, y) => {this.xmax = x;
             this.ymax = y}
 */;
  void* _match_2;
  int64_t _x_3;
  int64_t _y_4;
  if ((({int64_t _tupleCheck_5;
         _tupleCheck_5 = 1;
         int64_t _tupleAccess_6 = tuple_get(_enc__arg_in_max, 0).i;
         int64_t _varBinding_7;
         _x_3 = _tupleAccess_6;
         _varBinding_7 = 1;
         _tupleCheck_5 = (_tupleCheck_5 && _varBinding_7);
         int64_t _tupleAccess_8 = tuple_get(_enc__arg_in_max, 1).i;
         int64_t _varBinding_9;
         _y_4 = _tupleAccess_8;
         _varBinding_9 = 1;
         _tupleCheck_5 = (_tupleCheck_5 && _varBinding_9); _tupleCheck_5;}) && ({int64_t _literal_10 = 1/*True*/; _literal_10;})))
  {
    _match_2 = ((void*) ({/* this.xmax = x */;
                          (*({ENC_DTRACE3(FIELD_WRITE, (uintptr_t)*_ctx, (uintptr_t)_this, "xmax"); _this;}))._enc__field_xmax = _x_3;
                          /* this.ymax = y */;
                          (*({ENC_DTRACE3(FIELD_WRITE, (uintptr_t)*_ctx, (uintptr_t)_this, "ymax"); _this;}))._enc__field_ymax = _y_4; UNIT;}));
  }
  else
  {
    fprintf(stderr, "*** Runtime error: No matching clause was found ***\n");
    exit(1);
  };
  /* match in_min with
  (x, y) => {this.xmin = x;
             this.ymin = y}
 */;
  void* _match_11;
  int64_t _x_12;
  int64_t _y_13;
  if ((({int64_t _tupleCheck_14;
         _tupleCheck_14 = 1;
         int64_t _tupleAccess_15 = tuple_get(_enc__arg_in_min, 0).i;
         int64_t _varBinding_16;
         _x_12 = _tupleAccess_15;
         _varBinding_16 = 1;
         _tupleCheck_14 = (_tupleCheck_14 && _varBinding_16);
         int64_t _tupleAccess_17 = tuple_get(_enc__arg_in_min, 1).i;
         int64_t _varBinding_18;
         _y_13 = _tupleAccess_17;
         _varBinding_18 = 1;
         _tupleCheck_14 = (_tupleCheck_14 && _varBinding_18); _tupleCheck_14;}) && ({int64_t _literal_19 = 1/*True*/; _literal_19;})))
  {
    _match_11 = ((void*) ({/* this.xmin = x */;
                           (*({ENC_DTRACE3(FIELD_WRITE, (uintptr_t)*_ctx, (uintptr_t)_this, "xmin"); _this;}))._enc__field_xmin = _x_12;
                           /* this.ymin = y */;
                           (*({ENC_DTRACE3(FIELD_WRITE, (uintptr_t)*_ctx, (uintptr_t)_this, "ymin"); _this;}))._enc__field_ymin = _y_13; UNIT;}));
  }
  else
  {
    fprintf(stderr, "*** Runtime error: No matching clause was found ***\n");
    exit(1);
  };
  /* this.ttl = 10001 */;
  int64_t _literal_20 = 10001;
  (*({ENC_DTRACE3(FIELD_WRITE, (uintptr_t)*_ctx, (uintptr_t)_this, "ttl"); _this;}))._enc__field_ttl = _literal_20;
  /* this.size = 0 */;
  int64_t _literal_21 = 0;
  (*({ENC_DTRACE3(FIELD_WRITE, (uintptr_t)*_ctx, (uintptr_t)_this, "size"); _this;}))._enc__field_size = _literal_21;
  /* this.moving = false */;
  int64_t _literal_22 = 0/*False*/;
  (*({ENC_DTRACE3(FIELD_WRITE, (uintptr_t)*_ctx, (uintptr_t)_this, "moving"); _this;}))._enc__field_moving = _literal_22;
  ENC_DTRACE3(METHOD_EXIT, (uintptr_t)*_ctx, (uintptr_t)_this, "init");
  return UNIT;
}


future_t* _enc__method__encore_libs_master_Ped_util_Regions_Box_init_future(pony_ctx_t** _ctx, _enc__active__encore_libs_master_Ped_util_Regions_Box_t* _this, pony_type_t** runtimeType, tuple_t* _enc__arg_in_max, tuple_t* _enc__arg_in_min)
{
  future_t* _fut = future_mk(_ctx, ENCORE_PRIMITIVE);
  pony_gc_send((*_ctx));
  encore_trace_object((*_ctx), _enc__arg_in_max, tuple_trace);
  encore_trace_object((*_ctx), _enc__arg_in_min, tuple_trace);
  encore_trace_object((*_ctx), _fut, future_trace);
  pony_send_done((*_ctx));
  _enc__fut_msg__encore_libs_master_Ped_util_Regions_Box_init_t* msg = ((_enc__fut_msg__encore_libs_master_Ped_util_Regions_Box_init_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__fut_msg__encore_libs_master_Ped_util_Regions_Box_init_t)), _ENC__FUT_MSG__encore_libs_master_Ped_util_Regions_Box_init));
  msg->f1 = _enc__arg_in_max;
  msg->f2 = _enc__arg_in_min;
  msg->_fut = _fut;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
  return _fut;
}


void _enc__method__encore_libs_master_Ped_util_Regions_Box_init_one_way(pony_ctx_t** _ctx, _enc__active__encore_libs_master_Ped_util_Regions_Box_t* _this, pony_type_t** runtimeType, tuple_t* _enc__arg_in_max, tuple_t* _enc__arg_in_min)
{
  pony_gc_send((*_ctx));
  encore_trace_object((*_ctx), _enc__arg_in_max, tuple_trace);
  encore_trace_object((*_ctx), _enc__arg_in_min, tuple_trace);
  /* No tracing future for oneway msg */;
  pony_send_done((*_ctx));
  _enc__oneway_msg__encore_libs_master_Ped_util_Regions_Box_init_t* msg = ((_enc__oneway_msg__encore_libs_master_Ped_util_Regions_Box_init_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__oneway_msg__encore_libs_master_Ped_util_Regions_Box_init_t)), _ENC__ONEWAY_MSG__encore_libs_master_Ped_util_Regions_Box_init));
  msg->f1 = _enc__arg_in_max;
  msg->f2 = _enc__arg_in_min;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
}


tuple_t* _enc__method__encore_libs_master_Ped_util_Regions_Box_min(pony_ctx_t** _ctx, _enc__active__encore_libs_master_Ped_util_Regions_Box_t* _this, pony_type_t** runtimeType)
{
  ENC_DTRACE3(METHOD_ENTRY, (uintptr_t)*_ctx, (uintptr_t)_this, "min");
  /* (this.xmin, this.ymin) */;
  tuple_t* _tuple_0 = tuple_mk(_ctx, 2);
  tuple_set_type(_tuple_0, 0, ENCORE_PRIMITIVE);
  tuple_set_type(_tuple_0, 1, ENCORE_PRIMITIVE);
  ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "xmin");
  int64_t _fieldacc_1 = (*_this)._enc__field_xmin;
  ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "ymin");
  int64_t _fieldacc_2 = (*_this)._enc__field_ymin;
  tuple_set(_tuple_0, 0, ((encore_arg_t) {.i = _fieldacc_1}));
  tuple_set(_tuple_0, 1, ((encore_arg_t) {.i = _fieldacc_2}));
  ENC_DTRACE3(METHOD_EXIT, (uintptr_t)*_ctx, (uintptr_t)_this, "min");
  return ((tuple_t*) _tuple_0);
}


future_t* _enc__method__encore_libs_master_Ped_util_Regions_Box_min_future(pony_ctx_t** _ctx, _enc__active__encore_libs_master_Ped_util_Regions_Box_t* _this, pony_type_t** runtimeType)
{
  future_t* _fut = future_mk(_ctx, (&(tuple_type)));
  pony_gc_send((*_ctx));
  encore_trace_object((*_ctx), _fut, future_trace);
  pony_send_done((*_ctx));
  _enc__fut_msg__encore_libs_master_Ped_util_Regions_Box_min_t* msg = ((_enc__fut_msg__encore_libs_master_Ped_util_Regions_Box_min_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__fut_msg__encore_libs_master_Ped_util_Regions_Box_min_t)), _ENC__FUT_MSG__encore_libs_master_Ped_util_Regions_Box_min));
  msg->_fut = _fut;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
  return _fut;
}


void _enc__method__encore_libs_master_Ped_util_Regions_Box_min_one_way(pony_ctx_t** _ctx, _enc__active__encore_libs_master_Ped_util_Regions_Box_t* _this, pony_type_t** runtimeType)
{
  pony_gc_send((*_ctx));
  /* No tracing future for oneway msg */;
  pony_send_done((*_ctx));
  _enc__oneway_msg__encore_libs_master_Ped_util_Regions_Box_min_t* msg = ((_enc__oneway_msg__encore_libs_master_Ped_util_Regions_Box_min_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__oneway_msg__encore_libs_master_Ped_util_Regions_Box_min_t)), _ENC__ONEWAY_MSG__encore_libs_master_Ped_util_Regions_Box_min));
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
}


tuple_t* _enc__method__encore_libs_master_Ped_util_Regions_Box_max(pony_ctx_t** _ctx, _enc__active__encore_libs_master_Ped_util_Regions_Box_t* _this, pony_type_t** runtimeType)
{
  ENC_DTRACE3(METHOD_ENTRY, (uintptr_t)*_ctx, (uintptr_t)_this, "max");
  /* (this.xmax, this.ymax) */;
  tuple_t* _tuple_0 = tuple_mk(_ctx, 2);
  tuple_set_type(_tuple_0, 0, ENCORE_PRIMITIVE);
  tuple_set_type(_tuple_0, 1, ENCORE_PRIMITIVE);
  ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "xmax");
  int64_t _fieldacc_1 = (*_this)._enc__field_xmax;
  ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "ymax");
  int64_t _fieldacc_2 = (*_this)._enc__field_ymax;
  tuple_set(_tuple_0, 0, ((encore_arg_t) {.i = _fieldacc_1}));
  tuple_set(_tuple_0, 1, ((encore_arg_t) {.i = _fieldacc_2}));
  ENC_DTRACE3(METHOD_EXIT, (uintptr_t)*_ctx, (uintptr_t)_this, "max");
  return ((tuple_t*) _tuple_0);
}


future_t* _enc__method__encore_libs_master_Ped_util_Regions_Box_max_future(pony_ctx_t** _ctx, _enc__active__encore_libs_master_Ped_util_Regions_Box_t* _this, pony_type_t** runtimeType)
{
  future_t* _fut = future_mk(_ctx, (&(tuple_type)));
  pony_gc_send((*_ctx));
  encore_trace_object((*_ctx), _fut, future_trace);
  pony_send_done((*_ctx));
  _enc__fut_msg__encore_libs_master_Ped_util_Regions_Box_max_t* msg = ((_enc__fut_msg__encore_libs_master_Ped_util_Regions_Box_max_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__fut_msg__encore_libs_master_Ped_util_Regions_Box_max_t)), _ENC__FUT_MSG__encore_libs_master_Ped_util_Regions_Box_max));
  msg->_fut = _fut;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
  return _fut;
}


void _enc__method__encore_libs_master_Ped_util_Regions_Box_max_one_way(pony_ctx_t** _ctx, _enc__active__encore_libs_master_Ped_util_Regions_Box_t* _this, pony_type_t** runtimeType)
{
  pony_gc_send((*_ctx));
  /* No tracing future for oneway msg */;
  pony_send_done((*_ctx));
  _enc__oneway_msg__encore_libs_master_Ped_util_Regions_Box_max_t* msg = ((_enc__oneway_msg__encore_libs_master_Ped_util_Regions_Box_max_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__oneway_msg__encore_libs_master_Ped_util_Regions_Box_max_t)), _ENC__ONEWAY_MSG__encore_libs_master_Ped_util_Regions_Box_max));
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
}


void* _enc__method__encore_libs_master_Ped_util_Regions_Box_check_newcommers(pony_ctx_t** _ctx, _enc__active__encore_libs_master_Ped_util_Regions_Box_t* _this, pony_type_t** runtimeType)
{
  ENC_DTRACE3(METHOD_ENTRY, (uintptr_t)*_ctx, (uintptr_t)_this, "check_newcommers");
  /* var cur = this.newcommers */;
  /* cur = this.newcommers */;
  ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "newcommers");
  _enc__passive__encore_libs_master_Ped_util_Regions_Item_t* _fieldacc_0 = (*_this)._enc__field_newcommers;
  _enc__passive__encore_libs_master_Ped_util_Regions_Item_t* _cur_1 = _fieldacc_0;
  /* var i = 1 */;
  /* i = 1 */;
  int64_t _literal_2 = 1;
  int64_t _i_3 = _literal_2;
  /* print("Is newcommers related to last? ") */;
  char* _literal_4 = "Is newcommers related to last? ";
  fprintf(stdout, "%s", _literal_4);
  /* while cur != this.last
  {if cur.a == null then
     {print("GHOST IN THE CHAIN\n");
      while true
        ()};
   cur = cur.next;
   i = i + 1} */;
  void* _while_17;
  while (({int64_t _binop_6 = (({ _cur_1;}) != ((_enc__passive__encore_libs_master_Ped_util_Regions_Item_t*) ({ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "last");
                                                                                                               _enc__passive__encore_libs_master_Ped_util_Regions_Item_t* _fieldacc_5 = (*_this)._enc__field_last; _fieldacc_5;}))); _binop_6;}))
  {
    /* if cur.a == null then
  {print("GHOST IN THE CHAIN\n");
   while true
     ()} */;
    void* _ite_7;
    if (({int64_t _binop_10 = (({ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_cur_1, "a");
                                 _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t* _fieldacc_8 = (*_cur_1)._enc__field_a; _fieldacc_8;}) == ((_enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t*) ({_enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t* _literal_9 = NULL; _literal_9;}))); _binop_10;}))
    {
      /* print("GHOST IN THE CHAIN\n") */;
      char* _literal_11 = "GHOST IN THE CHAIN\n";
      fprintf(stdout, "%s", _literal_11);
      /* while true
  () */;
      void* _while_13;
      while (({int64_t _literal_12 = 1/*True*/; _literal_12;}))
      {
        /* () */;
        UNIT;
        _while_13 = UNIT;
      };
      _ite_7 = ((void*) _while_13);
    }
    else
    {
      UNIT;
      _ite_7 = ((void*) UNIT);
    };
    /* cur = cur.next */;
    ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_cur_1, "next");
    _enc__passive__encore_libs_master_Ped_util_Regions_Item_t* _fieldacc_14 = (*_cur_1)._enc__field_next;
    _cur_1 = _fieldacc_14;
    /* i = i + 1 */;
    int64_t _binop_16 = (({ _i_3;}) + ({int64_t _literal_15 = 1; _literal_15;}));
    _i_3 = _binop_16;
    _while_17 = UNIT;
  };
  /* print(" Yes {}\n", i) */;
  fprintf(stdout, " Yes %lli\n", _i_3);
  ENC_DTRACE3(METHOD_EXIT, (uintptr_t)*_ctx, (uintptr_t)_this, "check_newcommers");
  return UNIT;
}


future_t* _enc__method__encore_libs_master_Ped_util_Regions_Box_check_newcommers_future(pony_ctx_t** _ctx, _enc__active__encore_libs_master_Ped_util_Regions_Box_t* _this, pony_type_t** runtimeType)
{
  future_t* _fut = future_mk(_ctx, ENCORE_PRIMITIVE);
  pony_gc_send((*_ctx));
  encore_trace_object((*_ctx), _fut, future_trace);
  pony_send_done((*_ctx));
  _enc__fut_msg__encore_libs_master_Ped_util_Regions_Box_check_newcommers_t* msg = ((_enc__fut_msg__encore_libs_master_Ped_util_Regions_Box_check_newcommers_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__fut_msg__encore_libs_master_Ped_util_Regions_Box_check_newcommers_t)), _ENC__FUT_MSG__encore_libs_master_Ped_util_Regions_Box_check_newcommers));
  msg->_fut = _fut;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
  return _fut;
}


void _enc__method__encore_libs_master_Ped_util_Regions_Box_check_newcommers_one_way(pony_ctx_t** _ctx, _enc__active__encore_libs_master_Ped_util_Regions_Box_t* _this, pony_type_t** runtimeType)
{
  pony_gc_send((*_ctx));
  /* No tracing future for oneway msg */;
  pony_send_done((*_ctx));
  _enc__oneway_msg__encore_libs_master_Ped_util_Regions_Box_check_newcommers_t* msg = ((_enc__oneway_msg__encore_libs_master_Ped_util_Regions_Box_check_newcommers_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__oneway_msg__encore_libs_master_Ped_util_Regions_Box_check_newcommers_t)), _ENC__ONEWAY_MSG__encore_libs_master_Ped_util_Regions_Box_check_newcommers));
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
}


void* _enc__method__encore_libs_master_Ped_util_Regions_Box_check_channeling(pony_ctx_t** _ctx, _enc__active__encore_libs_master_Ped_util_Regions_Box_t* _this, pony_type_t** runtimeType)
{
  ENC_DTRACE3(METHOD_ENTRY, (uintptr_t)*_ctx, (uintptr_t)_this, "check_channeling");
  /* var cur = this.agents */;
  /* cur = this.agents */;
  ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "agents");
  _enc__passive__encore_libs_master_Ped_util_Regions_Item_t* _fieldacc_0 = (*_this)._enc__field_agents;
  _enc__passive__encore_libs_master_Ped_util_Regions_Item_t* _cur_1 = _fieldacc_0;
  /* var i = 0 */;
  /* i = 0 */;
  int64_t _literal_2 = 0;
  int64_t _i_3 = _literal_2;
  /* while cur != null
  {i = i + 1;
   cur = cur.next} */;
  void* _while_9;
  while (({int64_t _binop_5 = (({ _cur_1;}) != ((_enc__passive__encore_libs_master_Ped_util_Regions_Item_t*) ({_enc__passive__encore_libs_master_Ped_util_Regions_Item_t* _literal_4 = NULL; _literal_4;}))); _binop_5;}))
  {
    /* i = i + 1 */;
    int64_t _binop_7 = (({ _i_3;}) + ({int64_t _literal_6 = 1; _literal_6;}));
    _i_3 = _binop_7;
    /* cur = cur.next */;
    ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_cur_1, "next");
    _enc__passive__encore_libs_master_Ped_util_Regions_Item_t* _fieldacc_8 = (*_cur_1)._enc__field_next;
    _cur_1 = _fieldacc_8;
    _while_9 = UNIT;
  };
  /* var j = this.matrix.size() */;
  /* j = this.matrix.size() */;
  ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "matrix");
  _enc__passive__encore_libs_master_Ped_util_Quad_tree_Quad_tree_t* _fieldacc_11 = (*_this)._enc__field_matrix;
  check_receiver(_fieldacc_11, ".", "this.matrix", "size", "\"./encore-libs-master/Ped_util/Regions.enc\" (line 168, column 11)");
  pony_type_t* _tmp_12[] = {};
  int64_t _sync_method_call_10 = _enc__method__encore_libs_master_Ped_util_Quad_tree_Quad_tree_size(_ctx, _fieldacc_11, NULL);
  int64_t _j_13 = _sync_method_call_10;
  /* if i > j then
  print("more linked list agents ") */;
  void* _ite_14;
  if (({int64_t _binop_15 = (({ _i_3;}) > ({ _j_13;})); _binop_15;}))
  {
    char* _literal_16 = "more linked list agents ";
    fprintf(stdout, "%s", _literal_16);
    _ite_14 = ((void*) UNIT);
  }
  else
  {
    UNIT;
    _ite_14 = ((void*) UNIT);
  };
  /* if i < j then
  print("more matrix agents ") */;
  void* _ite_17;
  if (({int64_t _binop_18 = (({ _i_3;}) < ({ _j_13;})); _binop_18;}))
  {
    char* _literal_19 = "more matrix agents ";
    fprintf(stdout, "%s", _literal_19);
    _ite_17 = ((void*) UNIT);
  }
  else
  {
    UNIT;
    _ite_17 = ((void*) UNIT);
  };
  /* if i != j then
  {println((i, j, this.size));
   cur = this.agents;
   i = 0;
   while cur != null
     {if this.matrix.get_val(cur.a.x, cur.a.y) == false then
        print("AGENT'S pos not in MATRIX {} {} {}\n", 
              cur.a.hash_code, 
              i, 
              (this.xmax, this.ymax));
      i = i + 1;
      cur = cur.next};
   while true
     ()} */;
  void* _ite_20;
  if (({int64_t _binop_21 = (({ _i_3;}) != ({ _j_13;})); _binop_21;}))
  {
    /* println((i, j, this.size)) */;
    tuple_t* _tuple_22 = tuple_mk(_ctx, 3);
    tuple_set_type(_tuple_22, 0, ENCORE_PRIMITIVE);
    tuple_set_type(_tuple_22, 1, ENCORE_PRIMITIVE);
    tuple_set_type(_tuple_22, 2, ENCORE_PRIMITIVE);
    ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "size");
    int64_t _fieldacc_23 = (*_this)._enc__field_size;
    tuple_set(_tuple_22, 0, ((encore_arg_t) {.i = _i_3}));
    tuple_set(_tuple_22, 1, ((encore_arg_t) {.i = _j_13}));
    tuple_set(_tuple_22, 2, ((encore_arg_t) {.i = _fieldacc_23}));
    fprintf(stdout, "(%lli, %lli, %lli)\n", tuple_get(_tuple_22, 0).i, tuple_get(_tuple_22, 1).i, tuple_get(_tuple_22, 2).i);
    /* cur = this.agents */;
    ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "agents");
    _enc__passive__encore_libs_master_Ped_util_Regions_Item_t* _fieldacc_24 = (*_this)._enc__field_agents;
    _cur_1 = _fieldacc_24;
    /* i = 0 */;
    int64_t _literal_25 = 0;
    _i_3 = _literal_25;
    /* while cur != null
  {if this.matrix.get_val(cur.a.x, cur.a.y) == false then
     print("AGENT'S pos not in MATRIX {} {} {}\n", 
           cur.a.hash_code, 
           i, 
           (this.xmax, this.ymax));
   i = i + 1;
   cur = cur.next} */;
    void* _while_46;
    while (({int64_t _binop_27 = (({ _cur_1;}) != ((_enc__passive__encore_libs_master_Ped_util_Regions_Item_t*) ({_enc__passive__encore_libs_master_Ped_util_Regions_Item_t* _literal_26 = NULL; _literal_26;}))); _binop_27;}))
    {
      /* if this.matrix.get_val(cur.a.x, cur.a.y) == false then
  print("AGENT'S pos not in MATRIX {} {} {}\n", 
        cur.a.hash_code, 
        i, 
        (this.xmax, this.ymax)) */;
      void* _ite_28;
      if (({int64_t _binop_37 = (({ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "matrix");
                                   _enc__passive__encore_libs_master_Ped_util_Quad_tree_Quad_tree_t* _fieldacc_30 = (*_this)._enc__field_matrix;
                                   check_receiver(_fieldacc_30, ".", "this.matrix", "get_val", "\"./encore-libs-master/Ped_util/Regions.enc\" (line 176, column 21)");
                                   ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_cur_1, "a");
                                   _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t* _fieldacc_31 = (*_cur_1)._enc__field_a;
                                   ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_fieldacc_31, "x");
                                   int64_t _fieldacc_32 = (*_fieldacc_31)._enc__field_x;
                                   ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_cur_1, "a");
                                   _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t* _fieldacc_33 = (*_cur_1)._enc__field_a;
                                   ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_fieldacc_33, "y");
                                   int64_t _fieldacc_34 = (*_fieldacc_33)._enc__field_y;
                                   pony_type_t* _tmp_35[] = {};
                                   int64_t _sync_method_call_29 = _enc__method__encore_libs_master_Ped_util_Quad_tree_Quad_tree_get_val(_ctx, _fieldacc_30, NULL, _fieldacc_32, _fieldacc_34); _sync_method_call_29;}) == ({int64_t _literal_36 = 0/*False*/; _literal_36;})); _binop_37;}))
      {
        /* print("AGENT'S pos not in MATRIX {} {} {}\n", 
      cur.a.hash_code, 
      i, 
      (this.xmax, this.ymax)) */;
        ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_cur_1, "a");
        _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t* _fieldacc_38 = (*_cur_1)._enc__field_a;
        ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_fieldacc_38, "hash_code");
        uint64_t _fieldacc_39 = (*_fieldacc_38)._enc__field_hash_code;
        tuple_t* _tuple_40 = tuple_mk(_ctx, 2);
        tuple_set_type(_tuple_40, 0, ENCORE_PRIMITIVE);
        tuple_set_type(_tuple_40, 1, ENCORE_PRIMITIVE);
        ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "xmax");
        int64_t _fieldacc_41 = (*_this)._enc__field_xmax;
        ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "ymax");
        int64_t _fieldacc_42 = (*_this)._enc__field_ymax;
        tuple_set(_tuple_40, 0, ((encore_arg_t) {.i = _fieldacc_41}));
        tuple_set(_tuple_40, 1, ((encore_arg_t) {.i = _fieldacc_42}));
        fprintf(stdout, "AGENT'S pos not in MATRIX %llu %lli (%lli, %lli)\n", _fieldacc_39, _i_3, tuple_get(_tuple_40, 0).i, tuple_get(_tuple_40, 1).i);
        _ite_28 = ((void*) UNIT);
      }
      else
      {
        UNIT;
        _ite_28 = ((void*) UNIT);
      };
      /* i = i + 1 */;
      int64_t _binop_44 = (({ _i_3;}) + ({int64_t _literal_43 = 1; _literal_43;}));
      _i_3 = _binop_44;
      /* cur = cur.next */;
      ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_cur_1, "next");
      _enc__passive__encore_libs_master_Ped_util_Regions_Item_t* _fieldacc_45 = (*_cur_1)._enc__field_next;
      _cur_1 = _fieldacc_45;
      _while_46 = UNIT;
    };
    /* while true
  () */;
    void* _while_48;
    while (({int64_t _literal_47 = 1/*True*/; _literal_47;}))
    {
      /* () */;
      UNIT;
      _while_48 = UNIT;
    };
    _ite_20 = ((void*) _while_48);
  }
  else
  {
    UNIT;
    _ite_20 = ((void*) UNIT);
  };
  ENC_DTRACE3(METHOD_EXIT, (uintptr_t)*_ctx, (uintptr_t)_this, "check_channeling");
  return UNIT;
}


future_t* _enc__method__encore_libs_master_Ped_util_Regions_Box_check_channeling_future(pony_ctx_t** _ctx, _enc__active__encore_libs_master_Ped_util_Regions_Box_t* _this, pony_type_t** runtimeType)
{
  future_t* _fut = future_mk(_ctx, ENCORE_PRIMITIVE);
  pony_gc_send((*_ctx));
  encore_trace_object((*_ctx), _fut, future_trace);
  pony_send_done((*_ctx));
  _enc__fut_msg__encore_libs_master_Ped_util_Regions_Box_check_channeling_t* msg = ((_enc__fut_msg__encore_libs_master_Ped_util_Regions_Box_check_channeling_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__fut_msg__encore_libs_master_Ped_util_Regions_Box_check_channeling_t)), _ENC__FUT_MSG__encore_libs_master_Ped_util_Regions_Box_check_channeling));
  msg->_fut = _fut;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
  return _fut;
}


void _enc__method__encore_libs_master_Ped_util_Regions_Box_check_channeling_one_way(pony_ctx_t** _ctx, _enc__active__encore_libs_master_Ped_util_Regions_Box_t* _this, pony_type_t** runtimeType)
{
  pony_gc_send((*_ctx));
  /* No tracing future for oneway msg */;
  pony_send_done((*_ctx));
  _enc__oneway_msg__encore_libs_master_Ped_util_Regions_Box_check_channeling_t* msg = ((_enc__oneway_msg__encore_libs_master_Ped_util_Regions_Box_check_channeling_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__oneway_msg__encore_libs_master_Ped_util_Regions_Box_check_channeling_t)), _ENC__ONEWAY_MSG__encore_libs_master_Ped_util_Regions_Box_check_channeling));
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
}


array_t* _enc__method__encore_libs_master_Ped_util_Regions_Box_agents(pony_ctx_t** _ctx, _enc__active__encore_libs_master_Ped_util_Regions_Box_t* _this, pony_type_t** runtimeType)
{
  ENC_DTRACE3(METHOD_ENTRY, (uintptr_t)*_ctx, (uintptr_t)_this, "agents");
  /* this.merge() */;
  check_receiver(_this, ".", "this", "merge", "\"./encore-libs-master/Ped_util/Regions.enc\" (line 184, column 5)");
  pony_type_t* _tmp_1[] = {};
  void* _sync_method_call_0 = _enc__method__encore_libs_master_Ped_util_Regions_Box_merge(_ctx, _this, NULL);
  /* if this.agents == null then
  new [(int, int)](0)
else
  {var cur = this.agents;
   var i = 0;
   while cur != null
     {i = i + 1;
      cur = cur.next};
   var ret = new [(int, int)](i);
   cur = this.agents;
   i = 0;
   while cur != null
     {ret[i] = cur.a.pos();
      i = i + 1;
      cur = cur.next};
   ret} */;
  array_t* _ite_2;
  if (({int64_t _binop_5 = (({ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "agents");
                              _enc__passive__encore_libs_master_Ped_util_Regions_Item_t* _fieldacc_3 = (*_this)._enc__field_agents; _fieldacc_3;}) == ((_enc__passive__encore_libs_master_Ped_util_Regions_Item_t*) ({_enc__passive__encore_libs_master_Ped_util_Regions_Item_t* _literal_4 = NULL; _literal_4;}))); _binop_5;}))
  {
    /* new [(int, int)](0) */;
    int64_t _literal_7 = 0;
    array_t* _array_6 = array_mk(_ctx, _literal_7, (&(tuple_type)));
    _ite_2 = ((array_t*) _array_6);
  }
  else
  {
    /* var cur = this.agents */;
    /* cur = this.agents */;
    ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "agents");
    _enc__passive__encore_libs_master_Ped_util_Regions_Item_t* _fieldacc_8 = (*_this)._enc__field_agents;
    _enc__passive__encore_libs_master_Ped_util_Regions_Item_t* _cur_9 = _fieldacc_8;
    /* var i = 0 */;
    /* i = 0 */;
    int64_t _literal_10 = 0;
    int64_t _i_11 = _literal_10;
    /* while cur != null
  {i = i + 1;
   cur = cur.next} */;
    void* _while_17;
    while (({int64_t _binop_13 = (({ _cur_9;}) != ((_enc__passive__encore_libs_master_Ped_util_Regions_Item_t*) ({_enc__passive__encore_libs_master_Ped_util_Regions_Item_t* _literal_12 = NULL; _literal_12;}))); _binop_13;}))
    {
      /* i = i + 1 */;
      int64_t _binop_15 = (({ _i_11;}) + ({int64_t _literal_14 = 1; _literal_14;}));
      _i_11 = _binop_15;
      /* cur = cur.next */;
      ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_cur_9, "next");
      _enc__passive__encore_libs_master_Ped_util_Regions_Item_t* _fieldacc_16 = (*_cur_9)._enc__field_next;
      _cur_9 = _fieldacc_16;
      _while_17 = UNIT;
    };
    /* var ret = new [(int, int)](i) */;
    /* ret = new [(int, int)](i) */;
    array_t* _array_18 = array_mk(_ctx, _i_11, (&(tuple_type)));
    array_t* _ret_19 = _array_18;
    /* cur = this.agents */;
    ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "agents");
    _enc__passive__encore_libs_master_Ped_util_Regions_Item_t* _fieldacc_20 = (*_this)._enc__field_agents;
    _cur_9 = _fieldacc_20;
    /* i = 0 */;
    int64_t _literal_21 = 0;
    _i_11 = _literal_21;
    /* while cur != null
  {ret[i] = cur.a.pos();
   i = i + 1;
   cur = cur.next} */;
    void* _while_30;
    while (({int64_t _binop_23 = (({ _cur_9;}) != ((_enc__passive__encore_libs_master_Ped_util_Regions_Item_t*) ({_enc__passive__encore_libs_master_Ped_util_Regions_Item_t* _literal_22 = NULL; _literal_22;}))); _binop_23;}))
    {
      /* ret[i] = cur.a.pos() */;
      ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_cur_9, "a");
      _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t* _fieldacc_25 = (*_cur_9)._enc__field_a;
      check_receiver(_fieldacc_25, ".", "cur.a", "pos", "\"./encore-libs-master/Ped_util/Regions.enc\" (line 193, column 16)");
      pony_type_t* _tmp_26[] = {};
      tuple_t* _sync_method_call_24 = _enc__method__encore_libs_master_Ped_util_Agent_passive_Agent_pos(_ctx, _fieldacc_25, NULL);
      array_set(_ret_19, _i_11, ((encore_arg_t) {.p = _sync_method_call_24}));
      /* i = i + 1 */;
      int64_t _binop_28 = (({ _i_11;}) + ({int64_t _literal_27 = 1; _literal_27;}));
      _i_11 = _binop_28;
      /* cur = cur.next */;
      ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_cur_9, "next");
      _enc__passive__encore_libs_master_Ped_util_Regions_Item_t* _fieldacc_29 = (*_cur_9)._enc__field_next;
      _cur_9 = _fieldacc_29;
      _while_30 = UNIT;
    };
    /* ret */;
    _ite_2 = ((array_t*) _ret_19);
  };
  ENC_DTRACE3(METHOD_EXIT, (uintptr_t)*_ctx, (uintptr_t)_this, "agents");
  return ((array_t*) _ite_2);
}


future_t* _enc__method__encore_libs_master_Ped_util_Regions_Box_agents_future(pony_ctx_t** _ctx, _enc__active__encore_libs_master_Ped_util_Regions_Box_t* _this, pony_type_t** runtimeType)
{
  future_t* _fut = future_mk(_ctx, (&(array_type)));
  pony_gc_send((*_ctx));
  encore_trace_object((*_ctx), _fut, future_trace);
  pony_send_done((*_ctx));
  _enc__fut_msg__encore_libs_master_Ped_util_Regions_Box_agents_t* msg = ((_enc__fut_msg__encore_libs_master_Ped_util_Regions_Box_agents_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__fut_msg__encore_libs_master_Ped_util_Regions_Box_agents_t)), _ENC__FUT_MSG__encore_libs_master_Ped_util_Regions_Box_agents));
  msg->_fut = _fut;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
  return _fut;
}


void _enc__method__encore_libs_master_Ped_util_Regions_Box_agents_one_way(pony_ctx_t** _ctx, _enc__active__encore_libs_master_Ped_util_Regions_Box_t* _this, pony_type_t** runtimeType)
{
  pony_gc_send((*_ctx));
  /* No tracing future for oneway msg */;
  pony_send_done((*_ctx));
  _enc__oneway_msg__encore_libs_master_Ped_util_Regions_Box_agents_t* msg = ((_enc__oneway_msg__encore_libs_master_Ped_util_Regions_Box_agents_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__oneway_msg__encore_libs_master_Ped_util_Regions_Box_agents_t)), _ENC__ONEWAY_MSG__encore_libs_master_Ped_util_Regions_Box_agents));
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
}


int64_t _enc__method__encore_libs_master_Ped_util_Regions_Box_add(pony_ctx_t** _ctx, _enc__active__encore_libs_master_Ped_util_Regions_Box_t* _this, pony_type_t** runtimeType, _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t* _enc__arg_a)
{
  ENC_DTRACE3(METHOD_ENTRY, (uintptr_t)*_ctx, (uintptr_t)_this, "add");
  /* if a.x > this.xmax or a.x < this.xmin or a.y > this.ymax or a.y < this.ymin then
  false
else
  this.add_internal(a) */;
  int64_t _ite_0;
  if (({int64_t _binop_15 = (({int64_t _binop_11 = (({int64_t _binop_7 = (({int64_t _binop_3 = (({ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_enc__arg_a, "x");
                                                                                                  int64_t _fieldacc_1 = (*_enc__arg_a)._enc__field_x; _fieldacc_1;}) > ({ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "xmax");
                                                                                                                                                                         int64_t _fieldacc_2 = (*_this)._enc__field_xmax; _fieldacc_2;})); _binop_3;}) || ({int64_t _binop_6 = (({ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_enc__arg_a, "x");
                                                                                                                                                                                                                                                                                  int64_t _fieldacc_4 = (*_enc__arg_a)._enc__field_x; _fieldacc_4;}) < ({ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "xmin");
                                                                                                                                                                                                                                                                                                                                                         int64_t _fieldacc_5 = (*_this)._enc__field_xmin; _fieldacc_5;})); _binop_6;})); _binop_7;}) || ({int64_t _binop_10 = (({ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_enc__arg_a, "y");
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 int64_t _fieldacc_8 = (*_enc__arg_a)._enc__field_y; _fieldacc_8;}) > ({ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "ymax");
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        int64_t _fieldacc_9 = (*_this)._enc__field_ymax; _fieldacc_9;})); _binop_10;})); _binop_11;}) || ({int64_t _binop_14 = (({ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_enc__arg_a, "y");
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  int64_t _fieldacc_12 = (*_enc__arg_a)._enc__field_y; _fieldacc_12;}) < ({ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "ymin");
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           int64_t _fieldacc_13 = (*_this)._enc__field_ymin; _fieldacc_13;})); _binop_14;})); _binop_15;}))
  {
    int64_t _literal_16 = 0/*False*/;
    _ite_0 = ((int64_t) _literal_16);
  }
  else
  {
    /* this.add_internal(a) */;
    check_receiver(_this, ".", "this", "add_internal", "\"./encore-libs-master/Ped_util/Regions.enc\" (line 203, column 9)");
    pony_type_t* _tmp_18[] = {};
    int64_t _sync_method_call_17 = _enc__method__encore_libs_master_Ped_util_Regions_Box_add_internal(_ctx, _this, NULL, _enc__arg_a);
    _ite_0 = ((int64_t) _sync_method_call_17);
  };
  ENC_DTRACE3(METHOD_EXIT, (uintptr_t)*_ctx, (uintptr_t)_this, "add");
  return ((int64_t) _ite_0);
}


future_t* _enc__method__encore_libs_master_Ped_util_Regions_Box_add_future(pony_ctx_t** _ctx, _enc__active__encore_libs_master_Ped_util_Regions_Box_t* _this, pony_type_t** runtimeType, _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t* _enc__arg_a)
{
  future_t* _fut = future_mk(_ctx, ENCORE_PRIMITIVE);
  pony_gc_send((*_ctx));
  encore_trace_object((*_ctx), _enc__arg_a, _enc__trace__encore_libs_master_Ped_util_Agent_passive_Agent);
  encore_trace_object((*_ctx), _fut, future_trace);
  pony_send_done((*_ctx));
  _enc__fut_msg__encore_libs_master_Ped_util_Regions_Box_add_t* msg = ((_enc__fut_msg__encore_libs_master_Ped_util_Regions_Box_add_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__fut_msg__encore_libs_master_Ped_util_Regions_Box_add_t)), _ENC__FUT_MSG__encore_libs_master_Ped_util_Regions_Box_add));
  msg->f1 = _enc__arg_a;
  msg->_fut = _fut;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
  return _fut;
}


void _enc__method__encore_libs_master_Ped_util_Regions_Box_add_one_way(pony_ctx_t** _ctx, _enc__active__encore_libs_master_Ped_util_Regions_Box_t* _this, pony_type_t** runtimeType, _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t* _enc__arg_a)
{
  pony_gc_send((*_ctx));
  encore_trace_object((*_ctx), _enc__arg_a, _enc__trace__encore_libs_master_Ped_util_Agent_passive_Agent);
  /* No tracing future for oneway msg */;
  pony_send_done((*_ctx));
  _enc__oneway_msg__encore_libs_master_Ped_util_Regions_Box_add_t* msg = ((_enc__oneway_msg__encore_libs_master_Ped_util_Regions_Box_add_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__oneway_msg__encore_libs_master_Ped_util_Regions_Box_add_t)), _ENC__ONEWAY_MSG__encore_libs_master_Ped_util_Regions_Box_add));
  msg->f1 = _enc__arg_a;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
}


int64_t _enc__method__encore_libs_master_Ped_util_Regions_Box_external_move(pony_ctx_t** _ctx, _enc__active__encore_libs_master_Ped_util_Regions_Box_t* _this, pony_type_t** runtimeType, _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t* _enc__arg_a, int64_t _enc__arg_x, int64_t _enc__arg_y)
{
  ENC_DTRACE3(METHOD_ENTRY, (uintptr_t)*_ctx, (uintptr_t)_this, "external_move");
  /* if x > this.xmax or x < this.xmin or y > this.ymax or y < this.ymin then
  false
else
  if this.matrix.get_val(x, y) == true then
    false
  else
    {a.move_int(x, y);
     this.add_internal(a)} */;
  int64_t _ite_0;
  if (({int64_t _binop_11 = (({int64_t _binop_8 = (({int64_t _binop_5 = (({int64_t _binop_2 = (({ _enc__arg_x;}) > ({ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "xmax");
                                                                                                                     int64_t _fieldacc_1 = (*_this)._enc__field_xmax; _fieldacc_1;})); _binop_2;}) || ({int64_t _binop_4 = (({ _enc__arg_x;}) < ({ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "xmin");
                                                                                                                                                                                                                                                  int64_t _fieldacc_3 = (*_this)._enc__field_xmin; _fieldacc_3;})); _binop_4;})); _binop_5;}) || ({int64_t _binop_7 = (({ _enc__arg_y;}) > ({ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "ymax");
                                                                                                                                                                                                                                                                                                                                                                                             int64_t _fieldacc_6 = (*_this)._enc__field_ymax; _fieldacc_6;})); _binop_7;})); _binop_8;}) || ({int64_t _binop_10 = (({ _enc__arg_y;}) < ({ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "ymin");
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         int64_t _fieldacc_9 = (*_this)._enc__field_ymin; _fieldacc_9;})); _binop_10;})); _binop_11;}))
  {
    /* false */;
    int64_t _literal_12 = 0/*False*/;
    _ite_0 = ((int64_t) _literal_12);
  }
  else
  {
    /* if this.matrix.get_val(x, y) == true then
  false
else
  {a.move_int(x, y);
   this.add_internal(a)} */;
    int64_t _ite_13;
    if (({int64_t _binop_18 = (({ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "matrix");
                                 _enc__passive__encore_libs_master_Ped_util_Quad_tree_Quad_tree_t* _fieldacc_15 = (*_this)._enc__field_matrix;
                                 check_receiver(_fieldacc_15, ".", "this.matrix", "get_val", "\"./encore-libs-master/Ped_util/Regions.enc\" (line 211, column 8)");
                                 pony_type_t* _tmp_16[] = {};
                                 int64_t _sync_method_call_14 = _enc__method__encore_libs_master_Ped_util_Quad_tree_Quad_tree_get_val(_ctx, _fieldacc_15, NULL, _enc__arg_x, _enc__arg_y); _sync_method_call_14;}) == ({int64_t _literal_17 = 1/*True*/; _literal_17;})); _binop_18;}))
    {
      /* false */;
      int64_t _literal_19 = 0/*False*/;
      _ite_13 = ((int64_t) _literal_19);
    }
    else
    {
      /* a.move_int(x, y) */;
      check_receiver(_enc__arg_a, ".", "a", "move_int", "\"./encore-libs-master/Ped_util/Regions.enc\" (line 212, column 9)");
      pony_type_t* _tmp_21[] = {};
      void* _sync_method_call_20 = _enc__method__encore_libs_master_Ped_util_Agent_passive_Agent_move_int(_ctx, _enc__arg_a, NULL, _enc__arg_x, _enc__arg_y);
      /* this.add_internal(a) */;
      check_receiver(_this, ".", "this", "add_internal", "\"./encore-libs-master/Ped_util/Regions.enc\" (line 213, column 9)");
      pony_type_t* _tmp_23[] = {};
      int64_t _sync_method_call_22 = _enc__method__encore_libs_master_Ped_util_Regions_Box_add_internal(_ctx, _this, NULL, _enc__arg_a);
      _ite_13 = ((int64_t) _sync_method_call_22);
    };
    _ite_0 = ((int64_t) _ite_13);
  };
  ENC_DTRACE3(METHOD_EXIT, (uintptr_t)*_ctx, (uintptr_t)_this, "external_move");
  return ((int64_t) _ite_0);
}


future_t* _enc__method__encore_libs_master_Ped_util_Regions_Box_external_move_future(pony_ctx_t** _ctx, _enc__active__encore_libs_master_Ped_util_Regions_Box_t* _this, pony_type_t** runtimeType, _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t* _enc__arg_a, int64_t _enc__arg_x, int64_t _enc__arg_y)
{
  future_t* _fut = future_mk(_ctx, ENCORE_PRIMITIVE);
  pony_gc_send((*_ctx));
  encore_trace_object((*_ctx), _enc__arg_a, _enc__trace__encore_libs_master_Ped_util_Agent_passive_Agent);
  /* Not tracing field '_enc__arg_x' */;
  /* Not tracing field '_enc__arg_y' */;
  encore_trace_object((*_ctx), _fut, future_trace);
  pony_send_done((*_ctx));
  _enc__fut_msg__encore_libs_master_Ped_util_Regions_Box_external_move_t* msg = ((_enc__fut_msg__encore_libs_master_Ped_util_Regions_Box_external_move_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__fut_msg__encore_libs_master_Ped_util_Regions_Box_external_move_t)), _ENC__FUT_MSG__encore_libs_master_Ped_util_Regions_Box_external_move));
  msg->f1 = _enc__arg_a;
  msg->f2 = _enc__arg_x;
  msg->f3 = _enc__arg_y;
  msg->_fut = _fut;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
  return _fut;
}


void _enc__method__encore_libs_master_Ped_util_Regions_Box_external_move_one_way(pony_ctx_t** _ctx, _enc__active__encore_libs_master_Ped_util_Regions_Box_t* _this, pony_type_t** runtimeType, _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t* _enc__arg_a, int64_t _enc__arg_x, int64_t _enc__arg_y)
{
  pony_gc_send((*_ctx));
  encore_trace_object((*_ctx), _enc__arg_a, _enc__trace__encore_libs_master_Ped_util_Agent_passive_Agent);
  /* Not tracing field '_enc__arg_x' */;
  /* Not tracing field '_enc__arg_y' */;
  /* No tracing future for oneway msg */;
  pony_send_done((*_ctx));
  _enc__oneway_msg__encore_libs_master_Ped_util_Regions_Box_external_move_t* msg = ((_enc__oneway_msg__encore_libs_master_Ped_util_Regions_Box_external_move_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__oneway_msg__encore_libs_master_Ped_util_Regions_Box_external_move_t)), _ENC__ONEWAY_MSG__encore_libs_master_Ped_util_Regions_Box_external_move));
  msg->f1 = _enc__arg_a;
  msg->f2 = _enc__arg_x;
  msg->f3 = _enc__arg_y;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
}


int64_t _enc__method__encore_libs_master_Ped_util_Regions_Box_add_internal(pony_ctx_t** _ctx, _enc__active__encore_libs_master_Ped_util_Regions_Box_t* _this, pony_type_t** runtimeType, _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t* _enc__arg_a)
{
  ENC_DTRACE3(METHOD_ENTRY, (uintptr_t)*_ctx, (uintptr_t)_this, "add_internal");
  /* if this.matrix.get_val(a.x, a.y) == true then
  {print("AGENTS IN TOP OF eachother\n");
   while true
     ();
   true}
else
  {this.matrix.set(a.x, a.y);
   if this.newcommers == null then
     this.newcommers = new Item(a)
   else
     if this.last == null then
       {this.last = new Item(a);
        this.newcommers.append(this.last)}
     else
       {var new_wraper = new Item(a);
        this.last.append(new_wraper);
        this.last = new_wraper};
   this.size = this.size + 1;
   true} */;
  int64_t _ite_0;
  if (({int64_t _binop_7 = (({ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "matrix");
                              _enc__passive__encore_libs_master_Ped_util_Quad_tree_Quad_tree_t* _fieldacc_2 = (*_this)._enc__field_matrix;
                              check_receiver(_fieldacc_2, ".", "this.matrix", "get_val", "\"./encore-libs-master/Ped_util/Regions.enc\" (line 217, column 8)");
                              ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_enc__arg_a, "x");
                              int64_t _fieldacc_3 = (*_enc__arg_a)._enc__field_x;
                              ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_enc__arg_a, "y");
                              int64_t _fieldacc_4 = (*_enc__arg_a)._enc__field_y;
                              pony_type_t* _tmp_5[] = {};
                              int64_t _sync_method_call_1 = _enc__method__encore_libs_master_Ped_util_Quad_tree_Quad_tree_get_val(_ctx, _fieldacc_2, NULL, _fieldacc_3, _fieldacc_4); _sync_method_call_1;}) == ({int64_t _literal_6 = 1/*True*/; _literal_6;})); _binop_7;}))
  {
    /* print("AGENTS IN TOP OF eachother\n") */;
    char* _literal_8 = "AGENTS IN TOP OF eachother\n";
    fprintf(stdout, "%s", _literal_8);
    /* while true
  () */;
    void* _while_10;
    while (({int64_t _literal_9 = 1/*True*/; _literal_9;}))
    {
      /* () */;
      UNIT;
      _while_10 = UNIT;
    };
    /* true */;
    int64_t _literal_11 = 1/*True*/;
    _ite_0 = ((int64_t) _literal_11);
  }
  else
  {
    /* this.matrix.set(a.x, a.y) */;
    ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "matrix");
    _enc__passive__encore_libs_master_Ped_util_Quad_tree_Quad_tree_t* _fieldacc_13 = (*_this)._enc__field_matrix;
    check_receiver(_fieldacc_13, ".", "this.matrix", "set", "\"./encore-libs-master/Ped_util/Regions.enc\" (line 218, column 9)");
    ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_enc__arg_a, "x");
    int64_t _fieldacc_14 = (*_enc__arg_a)._enc__field_x;
    ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_enc__arg_a, "y");
    int64_t _fieldacc_15 = (*_enc__arg_a)._enc__field_y;
    pony_type_t* _tmp_16[] = {};
    void* _sync_method_call_12 = _enc__method__encore_libs_master_Ped_util_Quad_tree_Quad_tree_set(_ctx, _fieldacc_13, NULL, _fieldacc_14, _fieldacc_15);
    /* if this.newcommers == null then
  this.newcommers = new Item(a)
else
  if this.last == null then
    {this.last = new Item(a);
     this.newcommers.append(this.last)}
  else
    {var new_wraper = new Item(a);
     this.last.append(new_wraper);
     this.last = new_wraper} */;
    void* _ite_17;
    if (({int64_t _binop_20 = (({ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "newcommers");
                                 _enc__passive__encore_libs_master_Ped_util_Regions_Item_t* _fieldacc_18 = (*_this)._enc__field_newcommers; _fieldacc_18;}) == ((_enc__passive__encore_libs_master_Ped_util_Regions_Item_t*) ({_enc__passive__encore_libs_master_Ped_util_Regions_Item_t* _literal_19 = NULL; _literal_19;}))); _binop_20;}))
    {
      /* this.newcommers = new Item(a) */;
      _enc__passive__encore_libs_master_Ped_util_Regions_Item_t* _new_21 = _enc__constructor__encore_libs_master_Ped_util_Regions_Item(_ctx, NULL);
      pony_type_t* _tmp_22[] = {};
      _enc__type_init__encore_libs_master_Ped_util_Regions_Item(_new_21);
      _enc__method__encore_libs_master_Ped_util_Regions_Item_init(_ctx, _new_21, NULL, _enc__arg_a);
      (*({ENC_DTRACE3(FIELD_WRITE, (uintptr_t)*_ctx, (uintptr_t)_this, "newcommers"); _this;}))._enc__field_newcommers = _new_21;
      _ite_17 = ((void*) UNIT);
    }
    else
    {
      void* _ite_23;
      if (({int64_t _binop_26 = (({ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "last");
                                   _enc__passive__encore_libs_master_Ped_util_Regions_Item_t* _fieldacc_24 = (*_this)._enc__field_last; _fieldacc_24;}) == ((_enc__passive__encore_libs_master_Ped_util_Regions_Item_t*) ({_enc__passive__encore_libs_master_Ped_util_Regions_Item_t* _literal_25 = NULL; _literal_25;}))); _binop_26;}))
      {
        /* this.last = new Item(a) */;
        _enc__passive__encore_libs_master_Ped_util_Regions_Item_t* _new_27 = _enc__constructor__encore_libs_master_Ped_util_Regions_Item(_ctx, NULL);
        pony_type_t* _tmp_28[] = {};
        _enc__type_init__encore_libs_master_Ped_util_Regions_Item(_new_27);
        _enc__method__encore_libs_master_Ped_util_Regions_Item_init(_ctx, _new_27, NULL, _enc__arg_a);
        (*({ENC_DTRACE3(FIELD_WRITE, (uintptr_t)*_ctx, (uintptr_t)_this, "last"); _this;}))._enc__field_last = _new_27;
        /* this.newcommers.append(this.last) */;
        ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "newcommers");
        _enc__passive__encore_libs_master_Ped_util_Regions_Item_t* _fieldacc_30 = (*_this)._enc__field_newcommers;
        check_receiver(_fieldacc_30, ".", "this.newcommers", "append", "\"./encore-libs-master/Ped_util/Regions.enc\" (line 223, column 13)");
        ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "last");
        _enc__passive__encore_libs_master_Ped_util_Regions_Item_t* _fieldacc_31 = (*_this)._enc__field_last;
        pony_type_t* _tmp_32[] = {};
        void* _sync_method_call_29 = _enc__method__encore_libs_master_Ped_util_Regions_Item_append(_ctx, _fieldacc_30, NULL, _fieldacc_31);
        _ite_23 = ((void*) _sync_method_call_29);
      }
      else
      {
        /* var new_wraper = new Item(a) */;
        /* new_wraper = new Item(a) */;
        _enc__passive__encore_libs_master_Ped_util_Regions_Item_t* _new_33 = _enc__constructor__encore_libs_master_Ped_util_Regions_Item(_ctx, NULL);
        pony_type_t* _tmp_34[] = {};
        _enc__type_init__encore_libs_master_Ped_util_Regions_Item(_new_33);
        _enc__method__encore_libs_master_Ped_util_Regions_Item_init(_ctx, _new_33, NULL, _enc__arg_a);
        _enc__passive__encore_libs_master_Ped_util_Regions_Item_t* _new_wraper_35 = _new_33;
        /* this.last.append(new_wraper) */;
        ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "last");
        _enc__passive__encore_libs_master_Ped_util_Regions_Item_t* _fieldacc_37 = (*_this)._enc__field_last;
        check_receiver(_fieldacc_37, ".", "this.last", "append", "\"./encore-libs-master/Ped_util/Regions.enc\" (line 226, column 13)");
        pony_type_t* _tmp_38[] = {};
        void* _sync_method_call_36 = _enc__method__encore_libs_master_Ped_util_Regions_Item_append(_ctx, _fieldacc_37, NULL, _new_wraper_35);
        /* this.last = new_wraper */;
        (*({ENC_DTRACE3(FIELD_WRITE, (uintptr_t)*_ctx, (uintptr_t)_this, "last"); _this;}))._enc__field_last = _new_wraper_35;
        _ite_23 = ((void*) UNIT);
      };
      _ite_17 = ((void*) _ite_23);
    };
    /* this.size = this.size + 1 */;
    int64_t _binop_41 = (({ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "size");
                           int64_t _fieldacc_39 = (*_this)._enc__field_size; _fieldacc_39;}) + ({int64_t _literal_40 = 1; _literal_40;}));
    (*({ENC_DTRACE3(FIELD_WRITE, (uintptr_t)*_ctx, (uintptr_t)_this, "size"); _this;}))._enc__field_size = _binop_41;
    /* true */;
    int64_t _literal_42 = 1/*True*/;
    _ite_0 = ((int64_t) _literal_42);
  };
  ENC_DTRACE3(METHOD_EXIT, (uintptr_t)*_ctx, (uintptr_t)_this, "add_internal");
  return ((int64_t) _ite_0);
}


future_t* _enc__method__encore_libs_master_Ped_util_Regions_Box_add_internal_future(pony_ctx_t** _ctx, _enc__active__encore_libs_master_Ped_util_Regions_Box_t* _this, pony_type_t** runtimeType, _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t* _enc__arg_a)
{
  future_t* _fut = future_mk(_ctx, ENCORE_PRIMITIVE);
  pony_gc_send((*_ctx));
  encore_trace_object((*_ctx), _enc__arg_a, _enc__trace__encore_libs_master_Ped_util_Agent_passive_Agent);
  encore_trace_object((*_ctx), _fut, future_trace);
  pony_send_done((*_ctx));
  _enc__fut_msg__encore_libs_master_Ped_util_Regions_Box_add_internal_t* msg = ((_enc__fut_msg__encore_libs_master_Ped_util_Regions_Box_add_internal_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__fut_msg__encore_libs_master_Ped_util_Regions_Box_add_internal_t)), _ENC__FUT_MSG__encore_libs_master_Ped_util_Regions_Box_add_internal));
  msg->f1 = _enc__arg_a;
  msg->_fut = _fut;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
  return _fut;
}


void _enc__method__encore_libs_master_Ped_util_Regions_Box_add_internal_one_way(pony_ctx_t** _ctx, _enc__active__encore_libs_master_Ped_util_Regions_Box_t* _this, pony_type_t** runtimeType, _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t* _enc__arg_a)
{
  pony_gc_send((*_ctx));
  encore_trace_object((*_ctx), _enc__arg_a, _enc__trace__encore_libs_master_Ped_util_Agent_passive_Agent);
  /* No tracing future for oneway msg */;
  pony_send_done((*_ctx));
  _enc__oneway_msg__encore_libs_master_Ped_util_Regions_Box_add_internal_t* msg = ((_enc__oneway_msg__encore_libs_master_Ped_util_Regions_Box_add_internal_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__oneway_msg__encore_libs_master_Ped_util_Regions_Box_add_internal_t)), _ENC__ONEWAY_MSG__encore_libs_master_Ped_util_Regions_Box_add_internal));
  msg->f1 = _enc__arg_a;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
}


int64_t _enc__method__encore_libs_master_Ped_util_Regions_Box_link(pony_ctx_t** _ctx, _enc__active__encore_libs_master_Ped_util_Regions_Box_t* _this, pony_type_t** runtimeType, _enc__active__encore_libs_master_Ped_util_Regions_Box_t* _enc__arg_a)
{
  ENC_DTRACE3(METHOD_ENTRY, (uintptr_t)*_ctx, (uintptr_t)_this, "link");
  /* var c = a.max() */;
  /* c = a.max() */;
  check_receiver(_enc__arg_a, ".", "a", "max", "\"./encore-libs-master/Ped_util/Regions.enc\" (line 236, column 11)");
  pony_type_t* _tmp_1[] = {};
  future_t* _fut_0 = _enc__method__encore_libs_master_Ped_util_Regions_Box_max_future(_ctx, _enc__arg_a, NULL);
  future_t* _c_2 = _fut_0;
  /* var d = a.min() */;
  /* d = a.min() */;
  check_receiver(_enc__arg_a, ".", "a", "min", "\"./encore-libs-master/Ped_util/Regions.enc\" (line 237, column 11)");
  pony_type_t* _tmp_4[] = {};
  future_t* _fut_3 = _enc__method__encore_libs_master_Ped_util_Regions_Box_min_future(_ctx, _enc__arg_a, NULL);
  future_t* _d_5 = _fut_3;
  /* await c */;
  future_await(_ctx, _c_2);
  /* await d */;
  future_await(_ctx, _d_5);
  /* match (this.xmax, 
       this.ymax, 
       this.xmin, 
       this.ymin, 
       get c, 
       get d) with
  (x_max_1, 
   y_max_1, 
   x_min_1, 
   y_min_1, 
   (x_max_2, y_max_2), 
   (x_min_2, y_min_2)) => {var top = y_max_1 + 1 == y_min_2;
                           var bottom = y_min_1 - 1 == y_max_2;
                           var right = x_max_1 + 1 == x_min_2;
                           var left = x_min_1 - 1 == x_max_2;
                           if not left or right or top or bottom then
                             false
                           else
                             if top then
                               if right then
                                 if this.top_right == null then
                                   {this.top_right = a;
                                    true}
                                 else
                                   false
                               else
                                 if left then
                                   if this.top_left == null then
                                     {this.top_left = a;
                                      true}
                                   else
                                     false
                                 else
                                   if this.up == null then
                                     {this.up = a;
                                      true}
                                   else
                                     false
                             else
                               if bottom then
                                 if right then
                                   if this.bottom_right == null then
                                     {this.bottom_right = a;
                                      true}
                                   else
                                     false
                                 else
                                   if left then
                                     if this.bottom_left == null then
                                       {this.bottom_left = a;
                                        true}
                                     else
                                       false
                                   else
                                     if this.down == null then
                                       {this.down = a;
                                        true}
                                     else
                                       false
                               else
                                 if right then
                                   if this.right == null then
                                     {this.right = a;
                                      true}
                                   else
                                     false
                                 else
                                   if this.left == null then
                                     {this.left = a;
                                      true}
                                   else
                                     false}
 */;
  tuple_t* _tuple_7 = tuple_mk(_ctx, 6);
  tuple_set_type(_tuple_7, 0, ENCORE_PRIMITIVE);
  tuple_set_type(_tuple_7, 1, ENCORE_PRIMITIVE);
  tuple_set_type(_tuple_7, 2, ENCORE_PRIMITIVE);
  tuple_set_type(_tuple_7, 3, ENCORE_PRIMITIVE);
  tuple_set_type(_tuple_7, 4, (&(tuple_type)));
  tuple_set_type(_tuple_7, 5, (&(tuple_type)));
  ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "xmax");
  int64_t _fieldacc_8 = (*_this)._enc__field_xmax;
  ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "ymax");
  int64_t _fieldacc_9 = (*_this)._enc__field_ymax;
  ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "xmin");
  int64_t _fieldacc_10 = (*_this)._enc__field_xmin;
  ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "ymin");
  int64_t _fieldacc_11 = (*_this)._enc__field_ymin;
  tuple_t* _tmp_12 = future_get_actor(_ctx, _c_2).p;
  tuple_t* _tmp_13 = future_get_actor(_ctx, _d_5).p;
  tuple_set(_tuple_7, 0, ((encore_arg_t) {.i = _fieldacc_8}));
  tuple_set(_tuple_7, 1, ((encore_arg_t) {.i = _fieldacc_9}));
  tuple_set(_tuple_7, 2, ((encore_arg_t) {.i = _fieldacc_10}));
  tuple_set(_tuple_7, 3, ((encore_arg_t) {.i = _fieldacc_11}));
  tuple_set(_tuple_7, 4, ((encore_arg_t) {.p = _tmp_12}));
  tuple_set(_tuple_7, 5, ((encore_arg_t) {.p = _tmp_13}));
  int64_t _match_6;
  int64_t _x_max_1_14;
  int64_t _y_max_1_15;
  int64_t _x_min_1_16;
  int64_t _y_min_1_17;
  int64_t _x_max_2_18;
  int64_t _y_max_2_19;
  int64_t _x_min_2_20;
  int64_t _y_min_2_21;
  if ((({int64_t _tupleCheck_99;
         _tupleCheck_99 = 1;
         int64_t _tupleAccess_100 = tuple_get(_tuple_7, 0).i;
         int64_t _varBinding_101;
         _x_max_1_14 = _tupleAccess_100;
         _varBinding_101 = 1;
         _tupleCheck_99 = (_tupleCheck_99 && _varBinding_101);
         int64_t _tupleAccess_102 = tuple_get(_tuple_7, 1).i;
         int64_t _varBinding_103;
         _y_max_1_15 = _tupleAccess_102;
         _varBinding_103 = 1;
         _tupleCheck_99 = (_tupleCheck_99 && _varBinding_103);
         int64_t _tupleAccess_104 = tuple_get(_tuple_7, 2).i;
         int64_t _varBinding_105;
         _x_min_1_16 = _tupleAccess_104;
         _varBinding_105 = 1;
         _tupleCheck_99 = (_tupleCheck_99 && _varBinding_105);
         int64_t _tupleAccess_106 = tuple_get(_tuple_7, 3).i;
         int64_t _varBinding_107;
         _y_min_1_17 = _tupleAccess_106;
         _varBinding_107 = 1;
         _tupleCheck_99 = (_tupleCheck_99 && _varBinding_107);
         tuple_t* _tupleAccess_108 = tuple_get(_tuple_7, 4).p;
         int64_t _tupleCheck_109;
         _tupleCheck_109 = 1;
         int64_t _tupleAccess_110 = tuple_get(_tupleAccess_108, 0).i;
         int64_t _varBinding_111;
         _x_max_2_18 = _tupleAccess_110;
         _varBinding_111 = 1;
         _tupleCheck_109 = (_tupleCheck_109 && _varBinding_111);
         int64_t _tupleAccess_112 = tuple_get(_tupleAccess_108, 1).i;
         int64_t _varBinding_113;
         _y_max_2_19 = _tupleAccess_112;
         _varBinding_113 = 1;
         _tupleCheck_109 = (_tupleCheck_109 && _varBinding_113);
         _tupleCheck_99 = (_tupleCheck_99 && _tupleCheck_109);
         tuple_t* _tupleAccess_114 = tuple_get(_tuple_7, 5).p;
         int64_t _tupleCheck_115;
         _tupleCheck_115 = 1;
         int64_t _tupleAccess_116 = tuple_get(_tupleAccess_114, 0).i;
         int64_t _varBinding_117;
         _x_min_2_20 = _tupleAccess_116;
         _varBinding_117 = 1;
         _tupleCheck_115 = (_tupleCheck_115 && _varBinding_117);
         int64_t _tupleAccess_118 = tuple_get(_tupleAccess_114, 1).i;
         int64_t _varBinding_119;
         _y_min_2_21 = _tupleAccess_118;
         _varBinding_119 = 1;
         _tupleCheck_115 = (_tupleCheck_115 && _varBinding_119);
         _tupleCheck_99 = (_tupleCheck_99 && _tupleCheck_115); _tupleCheck_99;}) && ({int64_t _literal_120 = 1/*True*/; _literal_120;})))
  {
    _match_6 = ((int64_t) ({/* var top = y_max_1 + 1 == y_min_2 */;
                            /* top = y_max_1 + 1 == y_min_2 */;
                            int64_t _binop_24 = (({int64_t _binop_23 = (({ _y_max_1_15;}) + ({int64_t _literal_22 = 1; _literal_22;})); _binop_23;}) == ({ _y_min_2_21;}));
                            int64_t _top_25 = _binop_24;
                            /* var bottom = y_min_1 - 1 == y_max_2 */;
                            /* bottom = y_min_1 - 1 == y_max_2 */;
                            int64_t _binop_28 = (({int64_t _binop_27 = (({ _y_min_1_17;}) - ({int64_t _literal_26 = 1; _literal_26;})); _binop_27;}) == ({ _y_max_2_19;}));
                            int64_t _bottom_29 = _binop_28;
                            /* var right = x_max_1 + 1 == x_min_2 */;
                            /* right = x_max_1 + 1 == x_min_2 */;
                            int64_t _binop_32 = (({int64_t _binop_31 = (({ _x_max_1_14;}) + ({int64_t _literal_30 = 1; _literal_30;})); _binop_31;}) == ({ _x_min_2_20;}));
                            int64_t _right_33 = _binop_32;
                            /* var left = x_min_1 - 1 == x_max_2 */;
                            /* left = x_min_1 - 1 == x_max_2 */;
                            int64_t _binop_36 = (({int64_t _binop_35 = (({ _x_min_1_16;}) - ({int64_t _literal_34 = 1; _literal_34;})); _binop_35;}) == ({ _x_max_2_18;}));
                            int64_t _left_37 = _binop_36;
                            /* if not left or right or top or bottom then
  false
else
  if top then
    if right then
      if this.top_right == null then
        {this.top_right = a;
         true}
      else
        false
    else
      if left then
        if this.top_left == null then
          {this.top_left = a;
           true}
        else
          false
      else
        if this.up == null then
          {this.up = a;
           true}
        else
          false
  else
    if bottom then
      if right then
        if this.bottom_right == null then
          {this.bottom_right = a;
           true}
        else
          false
      else
        if left then
          if this.bottom_left == null then
            {this.bottom_left = a;
             true}
          else
            false
        else
          if this.down == null then
            {this.down = a;
             true}
          else
            false
    else
      if right then
        if this.right == null then
          {this.right = a;
           true}
        else
          false
      else
        if this.left == null then
          {this.left = a;
           true}
        else
          false */;
                            int64_t _ite_38;
                            if (({int64_t _binop_41 = (({int64_t _binop_40 = (({int64_t _binop_39 = (({ _left_37;}) || ({ _right_33;})); _binop_39;}) || ({ _top_25;})); _binop_40;}) || ({ _bottom_29;}));
                                  int64_t _unary_42 = (! _binop_41); _unary_42;}))
                            {
                              int64_t _literal_43 = 0/*False*/;
                              _ite_38 = ((int64_t) _literal_43);
                            }
                            else
                            {
                              /* if top then
  if right then
    if this.top_right == null then
      {this.top_right = a;
       true}
    else
      false
  else
    if left then
      if this.top_left == null then
        {this.top_left = a;
         true}
      else
        false
    else
      if this.up == null then
        {this.up = a;
         true}
      else
        false
else
  if bottom then
    if right then
      if this.bottom_right == null then
        {this.bottom_right = a;
         true}
      else
        false
    else
      if left then
        if this.bottom_left == null then
          {this.bottom_left = a;
           true}
        else
          false
      else
        if this.down == null then
          {this.down = a;
           true}
        else
          false
  else
    if right then
      if this.right == null then
        {this.right = a;
         true}
      else
        false
    else
      if this.left == null then
        {this.left = a;
         true}
      else
        false */;
                              int64_t _ite_44;
                              if (({ _top_25;}))
                              {
                                /* if right then
  if this.top_right == null then
    {this.top_right = a;
     true}
  else
    false
else
  if left then
    if this.top_left == null then
      {this.top_left = a;
       true}
    else
      false
  else
    if this.up == null then
      {this.up = a;
       true}
    else
      false */;
                                int64_t _ite_45;
                                if (({ _right_33;}))
                                {
                                  /* if this.top_right == null then
  {this.top_right = a;
   true}
else
  false */;
                                  int64_t _ite_46;
                                  if (({int64_t _binop_49 = (({ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "top_right");
                                                               _enc__active__encore_libs_master_Ped_util_Regions_Box_t* _fieldacc_47 = (*_this)._enc__field_top_right; _fieldacc_47;}) == ((_enc__active__encore_libs_master_Ped_util_Regions_Box_t*) ({_enc__active__encore_libs_master_Ped_util_Regions_Box_t* _literal_48 = NULL; _literal_48;}))); _binop_49;}))
                                  {
                                    /* this.top_right = a */;
                                    (*({ENC_DTRACE3(FIELD_WRITE, (uintptr_t)*_ctx, (uintptr_t)_this, "top_right"); _this;}))._enc__field_top_right = _enc__arg_a;
                                    /* true */;
                                    int64_t _literal_50 = 1/*True*/;
                                    _ite_46 = ((int64_t) _literal_50);
                                  }
                                  else
                                  {
                                    int64_t _literal_51 = 0/*False*/;
                                    _ite_46 = ((int64_t) _literal_51);
                                  };
                                  _ite_45 = ((int64_t) _ite_46);
                                }
                                else
                                {
                                  int64_t _ite_52;
                                  if (({ _left_37;}))
                                  {
                                    /* if this.top_left == null then
  {this.top_left = a;
   true}
else
  false */;
                                    int64_t _ite_53;
                                    if (({int64_t _binop_56 = (({ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "top_left");
                                                                 _enc__active__encore_libs_master_Ped_util_Regions_Box_t* _fieldacc_54 = (*_this)._enc__field_top_left; _fieldacc_54;}) == ((_enc__active__encore_libs_master_Ped_util_Regions_Box_t*) ({_enc__active__encore_libs_master_Ped_util_Regions_Box_t* _literal_55 = NULL; _literal_55;}))); _binop_56;}))
                                    {
                                      /* this.top_left = a */;
                                      (*({ENC_DTRACE3(FIELD_WRITE, (uintptr_t)*_ctx, (uintptr_t)_this, "top_left"); _this;}))._enc__field_top_left = _enc__arg_a;
                                      /* true */;
                                      int64_t _literal_57 = 1/*True*/;
                                      _ite_53 = ((int64_t) _literal_57);
                                    }
                                    else
                                    {
                                      int64_t _literal_58 = 0/*False*/;
                                      _ite_53 = ((int64_t) _literal_58);
                                    };
                                    _ite_52 = ((int64_t) _ite_53);
                                  }
                                  else
                                  {
                                    /* if this.up == null then
  {this.up = a;
   true}
else
  false */;
                                    int64_t _ite_59;
                                    if (({int64_t _binop_62 = (({ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "up");
                                                                 _enc__active__encore_libs_master_Ped_util_Regions_Box_t* _fieldacc_60 = (*_this)._enc__field_up; _fieldacc_60;}) == ((_enc__active__encore_libs_master_Ped_util_Regions_Box_t*) ({_enc__active__encore_libs_master_Ped_util_Regions_Box_t* _literal_61 = NULL; _literal_61;}))); _binop_62;}))
                                    {
                                      /* this.up = a */;
                                      (*({ENC_DTRACE3(FIELD_WRITE, (uintptr_t)*_ctx, (uintptr_t)_this, "up"); _this;}))._enc__field_up = _enc__arg_a;
                                      /* true */;
                                      int64_t _literal_63 = 1/*True*/;
                                      _ite_59 = ((int64_t) _literal_63);
                                    }
                                    else
                                    {
                                      int64_t _literal_64 = 0/*False*/;
                                      _ite_59 = ((int64_t) _literal_64);
                                    };
                                    _ite_52 = ((int64_t) _ite_59);
                                  };
                                  _ite_45 = ((int64_t) _ite_52);
                                };
                                _ite_44 = ((int64_t) _ite_45);
                              }
                              else
                              {
                                int64_t _ite_65;
                                if (({ _bottom_29;}))
                                {
                                  /* if right then
  if this.bottom_right == null then
    {this.bottom_right = a;
     true}
  else
    false
else
  if left then
    if this.bottom_left == null then
      {this.bottom_left = a;
       true}
    else
      false
  else
    if this.down == null then
      {this.down = a;
       true}
    else
      false */;
                                  int64_t _ite_66;
                                  if (({ _right_33;}))
                                  {
                                    /* if this.bottom_right == null then
  {this.bottom_right = a;
   true}
else
  false */;
                                    int64_t _ite_67;
                                    if (({int64_t _binop_70 = (({ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "bottom_right");
                                                                 _enc__active__encore_libs_master_Ped_util_Regions_Box_t* _fieldacc_68 = (*_this)._enc__field_bottom_right; _fieldacc_68;}) == ((_enc__active__encore_libs_master_Ped_util_Regions_Box_t*) ({_enc__active__encore_libs_master_Ped_util_Regions_Box_t* _literal_69 = NULL; _literal_69;}))); _binop_70;}))
                                    {
                                      /* this.bottom_right = a */;
                                      (*({ENC_DTRACE3(FIELD_WRITE, (uintptr_t)*_ctx, (uintptr_t)_this, "bottom_right"); _this;}))._enc__field_bottom_right = _enc__arg_a;
                                      /* true */;
                                      int64_t _literal_71 = 1/*True*/;
                                      _ite_67 = ((int64_t) _literal_71);
                                    }
                                    else
                                    {
                                      int64_t _literal_72 = 0/*False*/;
                                      _ite_67 = ((int64_t) _literal_72);
                                    };
                                    _ite_66 = ((int64_t) _ite_67);
                                  }
                                  else
                                  {
                                    int64_t _ite_73;
                                    if (({ _left_37;}))
                                    {
                                      /* if this.bottom_left == null then
  {this.bottom_left = a;
   true}
else
  false */;
                                      int64_t _ite_74;
                                      if (({int64_t _binop_77 = (({ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "bottom_left");
                                                                   _enc__active__encore_libs_master_Ped_util_Regions_Box_t* _fieldacc_75 = (*_this)._enc__field_bottom_left; _fieldacc_75;}) == ((_enc__active__encore_libs_master_Ped_util_Regions_Box_t*) ({_enc__active__encore_libs_master_Ped_util_Regions_Box_t* _literal_76 = NULL; _literal_76;}))); _binop_77;}))
                                      {
                                        /* this.bottom_left = a */;
                                        (*({ENC_DTRACE3(FIELD_WRITE, (uintptr_t)*_ctx, (uintptr_t)_this, "bottom_left"); _this;}))._enc__field_bottom_left = _enc__arg_a;
                                        /* true */;
                                        int64_t _literal_78 = 1/*True*/;
                                        _ite_74 = ((int64_t) _literal_78);
                                      }
                                      else
                                      {
                                        int64_t _literal_79 = 0/*False*/;
                                        _ite_74 = ((int64_t) _literal_79);
                                      };
                                      _ite_73 = ((int64_t) _ite_74);
                                    }
                                    else
                                    {
                                      /* if this.down == null then
  {this.down = a;
   true}
else
  false */;
                                      int64_t _ite_80;
                                      if (({int64_t _binop_83 = (({ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "down");
                                                                   _enc__active__encore_libs_master_Ped_util_Regions_Box_t* _fieldacc_81 = (*_this)._enc__field_down; _fieldacc_81;}) == ((_enc__active__encore_libs_master_Ped_util_Regions_Box_t*) ({_enc__active__encore_libs_master_Ped_util_Regions_Box_t* _literal_82 = NULL; _literal_82;}))); _binop_83;}))
                                      {
                                        /* this.down = a */;
                                        (*({ENC_DTRACE3(FIELD_WRITE, (uintptr_t)*_ctx, (uintptr_t)_this, "down"); _this;}))._enc__field_down = _enc__arg_a;
                                        /* true */;
                                        int64_t _literal_84 = 1/*True*/;
                                        _ite_80 = ((int64_t) _literal_84);
                                      }
                                      else
                                      {
                                        int64_t _literal_85 = 0/*False*/;
                                        _ite_80 = ((int64_t) _literal_85);
                                      };
                                      _ite_73 = ((int64_t) _ite_80);
                                    };
                                    _ite_66 = ((int64_t) _ite_73);
                                  };
                                  _ite_65 = ((int64_t) _ite_66);
                                }
                                else
                                {
                                  int64_t _ite_86;
                                  if (({ _right_33;}))
                                  {
                                    /* if this.right == null then
  {this.right = a;
   true}
else
  false */;
                                    int64_t _ite_87;
                                    if (({int64_t _binop_90 = (({ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "right");
                                                                 _enc__active__encore_libs_master_Ped_util_Regions_Box_t* _fieldacc_88 = (*_this)._enc__field_right; _fieldacc_88;}) == ((_enc__active__encore_libs_master_Ped_util_Regions_Box_t*) ({_enc__active__encore_libs_master_Ped_util_Regions_Box_t* _literal_89 = NULL; _literal_89;}))); _binop_90;}))
                                    {
                                      /* this.right = a */;
                                      (*({ENC_DTRACE3(FIELD_WRITE, (uintptr_t)*_ctx, (uintptr_t)_this, "right"); _this;}))._enc__field_right = _enc__arg_a;
                                      /* true */;
                                      int64_t _literal_91 = 1/*True*/;
                                      _ite_87 = ((int64_t) _literal_91);
                                    }
                                    else
                                    {
                                      int64_t _literal_92 = 0/*False*/;
                                      _ite_87 = ((int64_t) _literal_92);
                                    };
                                    _ite_86 = ((int64_t) _ite_87);
                                  }
                                  else
                                  {
                                    /* if this.left == null then
  {this.left = a;
   true}
else
  false */;
                                    int64_t _ite_93;
                                    if (({int64_t _binop_96 = (({ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "left");
                                                                 _enc__active__encore_libs_master_Ped_util_Regions_Box_t* _fieldacc_94 = (*_this)._enc__field_left; _fieldacc_94;}) == ((_enc__active__encore_libs_master_Ped_util_Regions_Box_t*) ({_enc__active__encore_libs_master_Ped_util_Regions_Box_t* _literal_95 = NULL; _literal_95;}))); _binop_96;}))
                                    {
                                      /* this.left = a */;
                                      (*({ENC_DTRACE3(FIELD_WRITE, (uintptr_t)*_ctx, (uintptr_t)_this, "left"); _this;}))._enc__field_left = _enc__arg_a;
                                      /* true */;
                                      int64_t _literal_97 = 1/*True*/;
                                      _ite_93 = ((int64_t) _literal_97);
                                    }
                                    else
                                    {
                                      int64_t _literal_98 = 0/*False*/;
                                      _ite_93 = ((int64_t) _literal_98);
                                    };
                                    _ite_86 = ((int64_t) _ite_93);
                                  };
                                  _ite_65 = ((int64_t) _ite_86);
                                };
                                _ite_44 = ((int64_t) _ite_65);
                              };
                              _ite_38 = ((int64_t) _ite_44);
                            }; _ite_38;}));
  }
  else
  {
    fprintf(stderr, "*** Runtime error: No matching clause was found ***\n");
    exit(1);
  };
  ENC_DTRACE3(METHOD_EXIT, (uintptr_t)*_ctx, (uintptr_t)_this, "link");
  return ((int64_t) _match_6);
}


future_t* _enc__method__encore_libs_master_Ped_util_Regions_Box_link_future(pony_ctx_t** _ctx, _enc__active__encore_libs_master_Ped_util_Regions_Box_t* _this, pony_type_t** runtimeType, _enc__active__encore_libs_master_Ped_util_Regions_Box_t* _enc__arg_a)
{
  future_t* _fut = future_mk(_ctx, ENCORE_PRIMITIVE);
  pony_gc_send((*_ctx));
  encore_trace_actor((*_ctx), ((pony_actor_t*) _enc__arg_a));
  encore_trace_object((*_ctx), _fut, future_trace);
  pony_send_done((*_ctx));
  _enc__fut_msg__encore_libs_master_Ped_util_Regions_Box_link_t* msg = ((_enc__fut_msg__encore_libs_master_Ped_util_Regions_Box_link_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__fut_msg__encore_libs_master_Ped_util_Regions_Box_link_t)), _ENC__FUT_MSG__encore_libs_master_Ped_util_Regions_Box_link));
  msg->f1 = _enc__arg_a;
  msg->_fut = _fut;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
  return _fut;
}


void _enc__method__encore_libs_master_Ped_util_Regions_Box_link_one_way(pony_ctx_t** _ctx, _enc__active__encore_libs_master_Ped_util_Regions_Box_t* _this, pony_type_t** runtimeType, _enc__active__encore_libs_master_Ped_util_Regions_Box_t* _enc__arg_a)
{
  pony_gc_send((*_ctx));
  encore_trace_actor((*_ctx), ((pony_actor_t*) _enc__arg_a));
  /* No tracing future for oneway msg */;
  pony_send_done((*_ctx));
  _enc__oneway_msg__encore_libs_master_Ped_util_Regions_Box_link_t* msg = ((_enc__oneway_msg__encore_libs_master_Ped_util_Regions_Box_link_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__oneway_msg__encore_libs_master_Ped_util_Regions_Box_link_t)), _ENC__ONEWAY_MSG__encore_libs_master_Ped_util_Regions_Box_link));
  msg->f1 = _enc__arg_a;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
}


void* _enc__method__encore_libs_master_Ped_util_Regions_Box_merge(pony_ctx_t** _ctx, _enc__active__encore_libs_master_Ped_util_Regions_Box_t* _this, pony_type_t** runtimeType)
{
  ENC_DTRACE3(METHOD_ENTRY, (uintptr_t)*_ctx, (uintptr_t)_this, "merge");
  /* if this.newcommers != null then
  {if this.agents != null then
     {if this.last == null then
        this.newcommers.append(this.agents)
      else
        this.last.append(this.agents);
      this.agents = this.newcommers}
   else
     this.agents = this.newcommers;
   this.newcommers = null;
   this.last = null} */;
  void* _ite_0;
  if (({int64_t _binop_3 = (({ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "newcommers");
                              _enc__passive__encore_libs_master_Ped_util_Regions_Item_t* _fieldacc_1 = (*_this)._enc__field_newcommers; _fieldacc_1;}) != ((_enc__passive__encore_libs_master_Ped_util_Regions_Item_t*) ({_enc__passive__encore_libs_master_Ped_util_Regions_Item_t* _literal_2 = NULL; _literal_2;}))); _binop_3;}))
  {
    /* if this.agents != null then
  {if this.last == null then
     this.newcommers.append(this.agents)
   else
     this.last.append(this.agents);
   this.agents = this.newcommers}
else
  this.agents = this.newcommers */;
    void* _ite_4;
    if (({int64_t _binop_7 = (({ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "agents");
                                _enc__passive__encore_libs_master_Ped_util_Regions_Item_t* _fieldacc_5 = (*_this)._enc__field_agents; _fieldacc_5;}) != ((_enc__passive__encore_libs_master_Ped_util_Regions_Item_t*) ({_enc__passive__encore_libs_master_Ped_util_Regions_Item_t* _literal_6 = NULL; _literal_6;}))); _binop_7;}))
    {
      /* if this.last == null then
  this.newcommers.append(this.agents)
else
  this.last.append(this.agents) */;
      void* _ite_8;
      if (({int64_t _binop_11 = (({ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "last");
                                   _enc__passive__encore_libs_master_Ped_util_Regions_Item_t* _fieldacc_9 = (*_this)._enc__field_last; _fieldacc_9;}) == ((_enc__passive__encore_libs_master_Ped_util_Regions_Item_t*) ({_enc__passive__encore_libs_master_Ped_util_Regions_Item_t* _literal_10 = NULL; _literal_10;}))); _binop_11;}))
      {
        /* this.newcommers.append(this.agents) */;
        ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "newcommers");
        _enc__passive__encore_libs_master_Ped_util_Regions_Item_t* _fieldacc_13 = (*_this)._enc__field_newcommers;
        check_receiver(_fieldacc_13, ".", "this.newcommers", "append", "\"./encore-libs-master/Ped_util/Regions.enc\" (line 276, column 21)");
        ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "agents");
        _enc__passive__encore_libs_master_Ped_util_Regions_Item_t* _fieldacc_14 = (*_this)._enc__field_agents;
        pony_type_t* _tmp_15[] = {};
        void* _sync_method_call_12 = _enc__method__encore_libs_master_Ped_util_Regions_Item_append(_ctx, _fieldacc_13, NULL, _fieldacc_14);
        _ite_8 = ((void*) _sync_method_call_12);
      }
      else
      {
        /* this.last.append(this.agents) */;
        ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "last");
        _enc__passive__encore_libs_master_Ped_util_Regions_Item_t* _fieldacc_17 = (*_this)._enc__field_last;
        check_receiver(_fieldacc_17, ".", "this.last", "append", "\"./encore-libs-master/Ped_util/Regions.enc\" (line 279, column 22)");
        ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "agents");
        _enc__passive__encore_libs_master_Ped_util_Regions_Item_t* _fieldacc_18 = (*_this)._enc__field_agents;
        pony_type_t* _tmp_19[] = {};
        void* _sync_method_call_16 = _enc__method__encore_libs_master_Ped_util_Regions_Item_append(_ctx, _fieldacc_17, NULL, _fieldacc_18);
        _ite_8 = ((void*) _sync_method_call_16);
      };
      /* this.agents = this.newcommers */;
      ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "newcommers");
      _enc__passive__encore_libs_master_Ped_util_Regions_Item_t* _fieldacc_20 = (*_this)._enc__field_newcommers;
      (*({ENC_DTRACE3(FIELD_WRITE, (uintptr_t)*_ctx, (uintptr_t)_this, "agents"); _this;}))._enc__field_agents = _fieldacc_20;
      _ite_4 = ((void*) UNIT);
    }
    else
    {
      /* this.agents = this.newcommers */;
      ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "newcommers");
      _enc__passive__encore_libs_master_Ped_util_Regions_Item_t* _fieldacc_21 = (*_this)._enc__field_newcommers;
      (*({ENC_DTRACE3(FIELD_WRITE, (uintptr_t)*_ctx, (uintptr_t)_this, "agents"); _this;}))._enc__field_agents = _fieldacc_21;
      _ite_4 = ((void*) UNIT);
    };
    /* this.newcommers = null */;
    _enc__passive__encore_libs_master_Ped_util_Regions_Item_t* _literal_22 = NULL;
    (*({ENC_DTRACE3(FIELD_WRITE, (uintptr_t)*_ctx, (uintptr_t)_this, "newcommers"); _this;}))._enc__field_newcommers = _literal_22;
    /* this.last = null */;
    _enc__passive__encore_libs_master_Ped_util_Regions_Item_t* _literal_23 = NULL;
    (*({ENC_DTRACE3(FIELD_WRITE, (uintptr_t)*_ctx, (uintptr_t)_this, "last"); _this;}))._enc__field_last = _literal_23;
    _ite_0 = ((void*) UNIT);
  }
  else
  {
    UNIT;
    _ite_0 = ((void*) UNIT);
  };
  ENC_DTRACE3(METHOD_EXIT, (uintptr_t)*_ctx, (uintptr_t)_this, "merge");
  return UNIT;
}


future_t* _enc__method__encore_libs_master_Ped_util_Regions_Box_merge_future(pony_ctx_t** _ctx, _enc__active__encore_libs_master_Ped_util_Regions_Box_t* _this, pony_type_t** runtimeType)
{
  future_t* _fut = future_mk(_ctx, ENCORE_PRIMITIVE);
  pony_gc_send((*_ctx));
  encore_trace_object((*_ctx), _fut, future_trace);
  pony_send_done((*_ctx));
  _enc__fut_msg__encore_libs_master_Ped_util_Regions_Box_merge_t* msg = ((_enc__fut_msg__encore_libs_master_Ped_util_Regions_Box_merge_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__fut_msg__encore_libs_master_Ped_util_Regions_Box_merge_t)), _ENC__FUT_MSG__encore_libs_master_Ped_util_Regions_Box_merge));
  msg->_fut = _fut;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
  return _fut;
}


void _enc__method__encore_libs_master_Ped_util_Regions_Box_merge_one_way(pony_ctx_t** _ctx, _enc__active__encore_libs_master_Ped_util_Regions_Box_t* _this, pony_type_t** runtimeType)
{
  pony_gc_send((*_ctx));
  /* No tracing future for oneway msg */;
  pony_send_done((*_ctx));
  _enc__oneway_msg__encore_libs_master_Ped_util_Regions_Box_merge_t* msg = ((_enc__oneway_msg__encore_libs_master_Ped_util_Regions_Box_merge_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__oneway_msg__encore_libs_master_Ped_util_Regions_Box_merge_t)), _ENC__ONEWAY_MSG__encore_libs_master_Ped_util_Regions_Box_merge));
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
}


int64_t _enc__method__encore_libs_master_Ped_util_Regions_Box_move(pony_ctx_t** _ctx, _enc__active__encore_libs_master_Ped_util_Regions_Box_t* _this, pony_type_t** runtimeType)
{
  ENC_DTRACE3(METHOD_ENTRY, (uintptr_t)*_ctx, (uintptr_t)_this, "move");
  /* this.ttl = this.ttl - 1 */;
  int64_t _binop_2 = (({ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "ttl");
                        int64_t _fieldacc_0 = (*_this)._enc__field_ttl; _fieldacc_0;}) - ({int64_t _literal_1 = 1; _literal_1;}));
  (*({ENC_DTRACE3(FIELD_WRITE, (uintptr_t)*_ctx, (uintptr_t)_this, "ttl"); _this;}))._enc__field_ttl = _binop_2;
  /* this.merge() */;
  check_receiver(_this, ".", "this", "merge", "\"./encore-libs-master/Ped_util/Regions.enc\" (line 295, column 9)");
  pony_type_t* _tmp_4[] = {};
  void* _sync_method_call_3 = _enc__method__encore_libs_master_Ped_util_Regions_Box_merge(_ctx, _this, NULL);
  /* var parent = this.agents */;
  /* parent = this.agents */;
  ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "agents");
  _enc__passive__encore_libs_master_Ped_util_Regions_Item_t* _fieldacc_5 = (*_this)._enc__field_agents;
  _enc__passive__encore_libs_master_Ped_util_Regions_Item_t* _parent_6 = _fieldacc_5;
  /* var a = this.agents */;
  /* a = this.agents */;
  ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "agents");
  _enc__passive__encore_libs_master_Ped_util_Regions_Item_t* _fieldacc_7 = (*_this)._enc__field_agents;
  _enc__passive__encore_libs_master_Ped_util_Regions_Item_t* _a_8 = _fieldacc_7;
  /* var desired = new [int](6) */;
  /* desired = new [int](6) */;
  int64_t _literal_10 = 6;
  array_t* _array_9 = array_mk(_ctx, _literal_10, ENCORE_PRIMITIVE);
  array_t* _desired_11 = _array_9;
  /* while a != null
  {if a.a.ttl == this.ttl then
     {a.a.ttl = a.a.ttl - 1;
      a.a.next(desired);
      var i = 0;
      var nejbor = null : Fut bool;
      var moved = false;
      var x2 = 0;
      var y2 = 0;
      while i < |desired| and moved == false
        {val x = desired[i];
         val y = desired[i + 1];
         nejbor = null;
         let up = y > this.ymax
             down = y < this.ymin
             right = x > this.xmax
             left = x < this.xmin
             border = if up then
                        if right then
                          this.top_right
                        else
                          if left then
                            this.top_left
                          else
                            this.up
                      else
                        if down then
                          if right then
                            this.bottom_right
                          else
                            if left then
                              this.bottom_left
                            else
                              this.down
                        else
                          if left then
                            this.left
                          else
                            if right then
                              this.right
                            else
                              null : Box
         in
           {if up or down or left or right then
              if border == null then
                nejbor = mk_Future(false)
              else
                {x2 = a.a.x;
                 y2 = a.a.y;
                 nejbor = border.external_move(a.a, x, y)};
            if nejbor == null then
              if this.matrix.get_val(x, y) == false then
                {unless this.matrix.remove(a.a.x, a.a.y) then
                   {print("remove failed\n");
                    while true
                      ()};
                 this.matrix.set(x, y);
                 a.a.move_int(x, y);
                 moved = true}
            else
              {await nejbor;
               if get nejbor then
                 {this.size = this.size - 1;
                  unless this.matrix.remove(x2, y2) then
                    {print("remove failed 2\n");
                     while true
                       ()};
                  moved = true;
                  if a == this.agents then
                    this.agents = a.next;
                  a.delete()}};
            i = i + 2}}};
   a = a.next} */;
  void* _while_150;
  while (({int64_t _binop_13 = (({ _a_8;}) != ((_enc__passive__encore_libs_master_Ped_util_Regions_Item_t*) ({_enc__passive__encore_libs_master_Ped_util_Regions_Item_t* _literal_12 = NULL; _literal_12;}))); _binop_13;}))
  {
    /* if a.a.ttl == this.ttl then
  {a.a.ttl = a.a.ttl - 1;
   a.a.next(desired);
   var i = 0;
   var nejbor = null : Fut bool;
   var moved = false;
   var x2 = 0;
   var y2 = 0;
   while i < |desired| and moved == false
     {val x = desired[i];
      val y = desired[i + 1];
      nejbor = null;
      let up = y > this.ymax
          down = y < this.ymin
          right = x > this.xmax
          left = x < this.xmin
          border = if up then
                     if right then
                       this.top_right
                     else
                       if left then
                         this.top_left
                       else
                         this.up
                   else
                     if down then
                       if right then
                         this.bottom_right
                       else
                         if left then
                           this.bottom_left
                         else
                           this.down
                     else
                       if left then
                         this.left
                       else
                         if right then
                           this.right
                         else
                           null : Box
      in
        {if up or down or left or right then
           if border == null then
             nejbor = mk_Future(false)
           else
             {x2 = a.a.x;
              y2 = a.a.y;
              nejbor = border.external_move(a.a, x, y)};
         if nejbor == null then
           if this.matrix.get_val(x, y) == false then
             {unless this.matrix.remove(a.a.x, a.a.y) then
                {print("remove failed\n");
                 while true
                   ()};
              this.matrix.set(x, y);
              a.a.move_int(x, y);
              moved = true}
         else
           {await nejbor;
            if get nejbor then
              {this.size = this.size - 1;
               unless this.matrix.remove(x2, y2) then
                 {print("remove failed 2\n");
                  while true
                    ()};
               moved = true;
               if a == this.agents then
                 this.agents = a.next;
               a.delete()}};
         i = i + 2}}} */;
    void* _ite_14;
    if (({int64_t _binop_18 = (({ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_a_8, "a");
                                 _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t* _fieldacc_15 = (*_a_8)._enc__field_a;
                                 ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_fieldacc_15, "ttl");
                                 int64_t _fieldacc_16 = (*_fieldacc_15)._enc__field_ttl; _fieldacc_16;}) == ({ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "ttl");
                                                                                                              int64_t _fieldacc_17 = (*_this)._enc__field_ttl; _fieldacc_17;})); _binop_18;}))
    {
      /* a.a.ttl = a.a.ttl - 1 */;
      int64_t _binop_22 = (({ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_a_8, "a");
                             _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t* _fieldacc_19 = (*_a_8)._enc__field_a;
                             ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_fieldacc_19, "ttl");
                             int64_t _fieldacc_20 = (*_fieldacc_19)._enc__field_ttl; _fieldacc_20;}) - ({int64_t _literal_21 = 1; _literal_21;}));
      (*({ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_a_8, "a");
          _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t* _fieldacc_23 = (*_a_8)._enc__field_a;
          ENC_DTRACE3(FIELD_WRITE, (uintptr_t)*_ctx, (uintptr_t)_fieldacc_23, "ttl"); _fieldacc_23;}))._enc__field_ttl = _binop_22;
      /* a.a.next(desired) */;
      ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_a_8, "a");
      _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t* _fieldacc_25 = (*_a_8)._enc__field_a;
      check_receiver(_fieldacc_25, ".", "a.a", "next", "\"./encore-libs-master/Ped_util/Regions.enc\" (line 303, column 17)");
      pony_type_t* _tmp_26[] = {};
      void* _sync_method_call_24 = _enc__method__encore_libs_master_Ped_util_Agent_passive_Agent_next(_ctx, _fieldacc_25, NULL, _desired_11);
      /* var i = 0 */;
      /* i = 0 */;
      int64_t _literal_27 = 0;
      int64_t _i_28 = _literal_27;
      /* var nejbor = null : Fut bool */;
      /* nejbor = null : Fut bool */;
      future_t* _literal_29 = NULL;
      future_t* _cast_30 = ((future_t*) _literal_29);
      future_t* _nejbor_31 = _cast_30;
      /* var moved = false */;
      /* moved = false */;
      int64_t _literal_32 = 0/*False*/;
      int64_t _moved_33 = _literal_32;
      /* var x2 = 0 */;
      /* x2 = 0 */;
      int64_t _literal_34 = 0;
      int64_t _x2_35 = _literal_34;
      /* var y2 = 0 */;
      /* y2 = 0 */;
      int64_t _literal_36 = 0;
      int64_t _y2_37 = _literal_36;
      /* while i < |desired| and moved == false
  {val x = desired[i];
   val y = desired[i + 1];
   nejbor = null;
   let up = y > this.ymax
       down = y < this.ymin
       right = x > this.xmax
       left = x < this.xmin
       border = if up then
                  if right then
                    this.top_right
                  else
                    if left then
                      this.top_left
                    else
                      this.up
                else
                  if down then
                    if right then
                      this.bottom_right
                    else
                      if left then
                        this.bottom_left
                      else
                        this.down
                  else
                    if left then
                      this.left
                    else
                      if right then
                        this.right
                      else
                        null : Box
   in
     {if up or down or left or right then
        if border == null then
          nejbor = mk_Future(false)
        else
          {x2 = a.a.x;
           y2 = a.a.y;
           nejbor = border.external_move(a.a, x, y)};
      if nejbor == null then
        if this.matrix.get_val(x, y) == false then
          {unless this.matrix.remove(a.a.x, a.a.y) then
             {print("remove failed\n");
              while true
                ()};
           this.matrix.set(x, y);
           a.a.move_int(x, y);
           moved = true}
      else
        {await nejbor;
         if get nejbor then
           {this.size = this.size - 1;
            unless this.matrix.remove(x2, y2) then
              {print("remove failed 2\n");
               while true
                 ()};
            moved = true;
            if a == this.agents then
              this.agents = a.next;
            a.delete()}};
      i = i + 2}} */;
      void* _while_148;
      while (({int64_t _binop_42 = (({int64_t _binop_39 = (({ _i_28;}) < ({int64_t _size_38 = array_size(_desired_11); _size_38;})); _binop_39;}) && ({int64_t _binop_41 = (({ _moved_33;}) == ({int64_t _literal_40 = 0/*False*/; _literal_40;})); _binop_41;})); _binop_42;}))
      {
        /* val x = desired[i] */;
        /* x = desired[i] */;
        int64_t _access_43 = array_get(_desired_11, _i_28).i;
        int64_t _x_44 = _access_43;
        /* val y = desired[i + 1] */;
        /* y = desired[i + 1] */;
        int64_t _binop_46 = (({ _i_28;}) + ({int64_t _literal_45 = 1; _literal_45;}));
        int64_t _access_47 = array_get(_desired_11, _binop_46).i;
        int64_t _y_48 = _access_47;
        /* nejbor = null */;
        future_t* _literal_49 = NULL;
        _nejbor_31 = _literal_49;
        /* let up = y > this.ymax
    down = y < this.ymin
    right = x > this.xmax
    left = x < this.xmin
    border = if up then
               if right then
                 this.top_right
               else
                 if left then
                   this.top_left
                 else
                   this.up
             else
               if down then
                 if right then
                   this.bottom_right
                 else
                   if left then
                     this.bottom_left
                   else
                     this.down
               else
                 if left then
                   this.left
                 else
                   if right then
                     this.right
                   else
                     null : Box
in
  {if up or down or left or right then
     if border == null then
       nejbor = mk_Future(false)
     else
       {x2 = a.a.x;
        y2 = a.a.y;
        nejbor = border.external_move(a.a, x, y)};
   if nejbor == null then
     if this.matrix.get_val(x, y) == false then
       {unless this.matrix.remove(a.a.x, a.a.y) then
          {print("remove failed\n");
           while true
             ()};
        this.matrix.set(x, y);
        a.a.move_int(x, y);
        moved = true}
   else
     {await nejbor;
      if get nejbor then
        {this.size = this.size - 1;
         unless this.matrix.remove(x2, y2) then
           {print("remove failed 2\n");
            while true
              ()};
         moved = true;
         if a == this.agents then
           this.agents = a.next;
         a.delete()}};
   i = i + 2} */;
        /* up = y > this.ymax */;
        int64_t _binop_51 = (({ _y_48;}) > ({ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "ymax");
                                             int64_t _fieldacc_50 = (*_this)._enc__field_ymax; _fieldacc_50;}));
        int64_t _up_52 = _binop_51;
        /* down = y < this.ymin */;
        int64_t _binop_54 = (({ _y_48;}) < ({ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "ymin");
                                             int64_t _fieldacc_53 = (*_this)._enc__field_ymin; _fieldacc_53;}));
        int64_t _down_55 = _binop_54;
        /* right = x > this.xmax */;
        int64_t _binop_57 = (({ _x_44;}) > ({ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "xmax");
                                             int64_t _fieldacc_56 = (*_this)._enc__field_xmax; _fieldacc_56;}));
        int64_t _right_58 = _binop_57;
        /* left = x < this.xmin */;
        int64_t _binop_60 = (({ _x_44;}) < ({ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "xmin");
                                             int64_t _fieldacc_59 = (*_this)._enc__field_xmin; _fieldacc_59;}));
        int64_t _left_61 = _binop_60;
        /* border = if up then
  if right then
    this.top_right
  else
    if left then
      this.top_left
    else
      this.up
else
  if down then
    if right then
      this.bottom_right
    else
      if left then
        this.bottom_left
      else
        this.down
  else
    if left then
      this.left
    else
      if right then
        this.right
      else
        null : Box */;
        /* if up then
  if right then
    this.top_right
  else
    if left then
      this.top_left
    else
      this.up
else
  if down then
    if right then
      this.bottom_right
    else
      if left then
        this.bottom_left
      else
        this.down
  else
    if left then
      this.left
    else
      if right then
        this.right
      else
        null : Box */;
        _enc__active__encore_libs_master_Ped_util_Regions_Box_t* _ite_62;
        if (({ _up_52;}))
        {
          /* if right then
  this.top_right
else
  if left then
    this.top_left
  else
    this.up */;
          _enc__active__encore_libs_master_Ped_util_Regions_Box_t* _ite_63;
          if (({ _right_58;}))
          {
            /* this.top_right */;
            ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "top_right");
            _enc__active__encore_libs_master_Ped_util_Regions_Box_t* _fieldacc_64 = (*_this)._enc__field_top_right;
            _ite_63 = ((_enc__active__encore_libs_master_Ped_util_Regions_Box_t*) _fieldacc_64);
          }
          else
          {
            _enc__active__encore_libs_master_Ped_util_Regions_Box_t* _ite_65;
            if (({ _left_61;}))
            {
              /* this.top_left */;
              ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "top_left");
              _enc__active__encore_libs_master_Ped_util_Regions_Box_t* _fieldacc_66 = (*_this)._enc__field_top_left;
              _ite_65 = ((_enc__active__encore_libs_master_Ped_util_Regions_Box_t*) _fieldacc_66);
            }
            else
            {
              /* this.up */;
              ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "up");
              _enc__active__encore_libs_master_Ped_util_Regions_Box_t* _fieldacc_67 = (*_this)._enc__field_up;
              _ite_65 = ((_enc__active__encore_libs_master_Ped_util_Regions_Box_t*) _fieldacc_67);
            };
            _ite_63 = ((_enc__active__encore_libs_master_Ped_util_Regions_Box_t*) _ite_65);
          };
          _ite_62 = ((_enc__active__encore_libs_master_Ped_util_Regions_Box_t*) _ite_63);
        }
        else
        {
          _enc__active__encore_libs_master_Ped_util_Regions_Box_t* _ite_68;
          if (({ _down_55;}))
          {
            /* if right then
  this.bottom_right
else
  if left then
    this.bottom_left
  else
    this.down */;
            _enc__active__encore_libs_master_Ped_util_Regions_Box_t* _ite_69;
            if (({ _right_58;}))
            {
              /* this.bottom_right */;
              ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "bottom_right");
              _enc__active__encore_libs_master_Ped_util_Regions_Box_t* _fieldacc_70 = (*_this)._enc__field_bottom_right;
              _ite_69 = ((_enc__active__encore_libs_master_Ped_util_Regions_Box_t*) _fieldacc_70);
            }
            else
            {
              _enc__active__encore_libs_master_Ped_util_Regions_Box_t* _ite_71;
              if (({ _left_61;}))
              {
                /* this.bottom_left */;
                ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "bottom_left");
                _enc__active__encore_libs_master_Ped_util_Regions_Box_t* _fieldacc_72 = (*_this)._enc__field_bottom_left;
                _ite_71 = ((_enc__active__encore_libs_master_Ped_util_Regions_Box_t*) _fieldacc_72);
              }
              else
              {
                /* this.down */;
                ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "down");
                _enc__active__encore_libs_master_Ped_util_Regions_Box_t* _fieldacc_73 = (*_this)._enc__field_down;
                _ite_71 = ((_enc__active__encore_libs_master_Ped_util_Regions_Box_t*) _fieldacc_73);
              };
              _ite_69 = ((_enc__active__encore_libs_master_Ped_util_Regions_Box_t*) _ite_71);
            };
            _ite_68 = ((_enc__active__encore_libs_master_Ped_util_Regions_Box_t*) _ite_69);
          }
          else
          {
            _enc__active__encore_libs_master_Ped_util_Regions_Box_t* _ite_74;
            if (({ _left_61;}))
            {
              /* this.left */;
              ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "left");
              _enc__active__encore_libs_master_Ped_util_Regions_Box_t* _fieldacc_75 = (*_this)._enc__field_left;
              _ite_74 = ((_enc__active__encore_libs_master_Ped_util_Regions_Box_t*) _fieldacc_75);
            }
            else
            {
              _enc__active__encore_libs_master_Ped_util_Regions_Box_t* _ite_76;
              if (({ _right_58;}))
              {
                /* this.right */;
                ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "right");
                _enc__active__encore_libs_master_Ped_util_Regions_Box_t* _fieldacc_77 = (*_this)._enc__field_right;
                _ite_76 = ((_enc__active__encore_libs_master_Ped_util_Regions_Box_t*) _fieldacc_77);
              }
              else
              {
                /* null : Box */;
                _enc__active__encore_libs_master_Ped_util_Regions_Box_t* _literal_78 = NULL;
                _enc__active__encore_libs_master_Ped_util_Regions_Box_t* _cast_79 = ((_enc__active__encore_libs_master_Ped_util_Regions_Box_t*) _literal_78);
                _ite_76 = ((_enc__active__encore_libs_master_Ped_util_Regions_Box_t*) _cast_79);
              };
              _ite_74 = ((_enc__active__encore_libs_master_Ped_util_Regions_Box_t*) _ite_76);
            };
            _ite_68 = ((_enc__active__encore_libs_master_Ped_util_Regions_Box_t*) _ite_74);
          };
          _ite_62 = ((_enc__active__encore_libs_master_Ped_util_Regions_Box_t*) _ite_68);
        };
        _enc__active__encore_libs_master_Ped_util_Regions_Box_t* _border_80 = _ite_62;
        /* if up or down or left or right then
  if border == null then
    nejbor = mk_Future(false)
  else
    {x2 = a.a.x;
     y2 = a.a.y;
     nejbor = border.external_move(a.a, x, y)} */;
        void* _ite_81;
        if (({int64_t _binop_84 = (({int64_t _binop_83 = (({int64_t _binop_82 = (({ _up_52;}) || ({ _down_55;})); _binop_82;}) || ({ _left_61;})); _binop_83;}) || ({ _right_58;})); _binop_84;}))
        {
          /* if border == null then
  nejbor = mk_Future(false)
else
  {x2 = a.a.x;
   y2 = a.a.y;
   nejbor = border.external_move(a.a, x, y)} */;
          void* _ite_85;
          if (({int64_t _binop_87 = (({ _border_80;}) == ((_enc__active__encore_libs_master_Ped_util_Regions_Box_t*) ({_enc__active__encore_libs_master_Ped_util_Regions_Box_t* _literal_86 = NULL; _literal_86;}))); _binop_87;}))
          {
            /* nejbor = mk_Future(false) */;
            int64_t _literal_88 = 0/*False*/;
            ENC_DTRACE2(FUNCTION_CALL, (uintptr_t)*_ctx, "Global_funs.mk_Future");
            pony_type_t* _tmp_89[] = {};
            future_t* _fun_call_90 = _enc__global_fun__encore_libs_master_Ped_util_Global_funsmk_Future(_ctx, NULL, _literal_88);
            _nejbor_31 = _fun_call_90;
            _ite_85 = ((void*) UNIT);
          }
          else
          {
            /* x2 = a.a.x */;
            ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_a_8, "a");
            _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t* _fieldacc_91 = (*_a_8)._enc__field_a;
            ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_fieldacc_91, "x");
            int64_t _fieldacc_92 = (*_fieldacc_91)._enc__field_x;
            _x2_35 = _fieldacc_92;
            /* y2 = a.a.y */;
            ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_a_8, "a");
            _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t* _fieldacc_93 = (*_a_8)._enc__field_a;
            ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_fieldacc_93, "y");
            int64_t _fieldacc_94 = (*_fieldacc_93)._enc__field_y;
            _y2_37 = _fieldacc_94;
            /* nejbor = border.external_move(a.a, x, y) */;
            check_receiver(_border_80, ".", "border", "external_move", "\"./encore-libs-master/Ped_util/Regions.enc\" (line 345, column 40)");
            ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_a_8, "a");
            _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t* _fieldacc_96 = (*_a_8)._enc__field_a;
            pony_type_t* _tmp_97[] = {};
            future_t* _fut_95 = _enc__method__encore_libs_master_Ped_util_Regions_Box_external_move_future(_ctx, _border_80, NULL, _fieldacc_96, _x_44, _y_48);
            _nejbor_31 = _fut_95;
            _ite_85 = ((void*) UNIT);
          };
          _ite_81 = ((void*) _ite_85);
        }
        else
        {
          UNIT;
          _ite_81 = ((void*) UNIT);
        };
        /* if nejbor == null then
  if this.matrix.get_val(x, y) == false then
    {unless this.matrix.remove(a.a.x, a.a.y) then
       {print("remove failed\n");
        while true
          ()};
     this.matrix.set(x, y);
     a.a.move_int(x, y);
     moved = true}
else
  {await nejbor;
   if get nejbor then
     {this.size = this.size - 1;
      unless this.matrix.remove(x2, y2) then
        {print("remove failed 2\n");
         while true
           ()};
      moved = true;
      if a == this.agents then
        this.agents = a.next;
      a.delete()}} */;
        void* _ite_98;
        if (({int64_t _binop_100 = (({ _nejbor_31;}) == ({future_t* _literal_99 = NULL; _literal_99;})); _binop_100;}))
        {
          /* if this.matrix.get_val(x, y) == false then
  {unless this.matrix.remove(a.a.x, a.a.y) then
     {print("remove failed\n");
      while true
        ()};
   this.matrix.set(x, y);
   a.a.move_int(x, y);
   moved = true} */;
          void* _ite_101;
          if (({int64_t _binop_106 = (({ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "matrix");
                                        _enc__passive__encore_libs_master_Ped_util_Quad_tree_Quad_tree_t* _fieldacc_103 = (*_this)._enc__field_matrix;
                                        check_receiver(_fieldacc_103, ".", "this.matrix", "get_val", "\"./encore-libs-master/Ped_util/Regions.enc\" (line 350, column 32)");
                                        pony_type_t* _tmp_104[] = {};
                                        int64_t _sync_method_call_102 = _enc__method__encore_libs_master_Ped_util_Quad_tree_Quad_tree_get_val(_ctx, _fieldacc_103, NULL, _x_44, _y_48); _sync_method_call_102;}) == ({int64_t _literal_105 = 0/*False*/; _literal_105;})); _binop_106;}))
          {
            /* unless this.matrix.remove(a.a.x, a.a.y) then
  {print("remove failed\n");
   while true
     ()} */;
            void* _ite_107;
            if (({ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "matrix");
                  _enc__passive__encore_libs_master_Ped_util_Quad_tree_Quad_tree_t* _fieldacc_109 = (*_this)._enc__field_matrix;
                  check_receiver(_fieldacc_109, ".", "this.matrix", "remove", "\"./encore-libs-master/Ped_util/Regions.enc\" (line 352, column 40)");
                  ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_a_8, "a");
                  _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t* _fieldacc_110 = (*_a_8)._enc__field_a;
                  ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_fieldacc_110, "x");
                  int64_t _fieldacc_111 = (*_fieldacc_110)._enc__field_x;
                  ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_a_8, "a");
                  _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t* _fieldacc_112 = (*_a_8)._enc__field_a;
                  ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_fieldacc_112, "y");
                  int64_t _fieldacc_113 = (*_fieldacc_112)._enc__field_y;
                  pony_type_t* _tmp_114[] = {};
                  int64_t _sync_method_call_108 = _enc__method__encore_libs_master_Ped_util_Quad_tree_Quad_tree_remove(_ctx, _fieldacc_109, NULL, _fieldacc_111, _fieldacc_113);
                  int64_t _unary_115 = (! _sync_method_call_108); _unary_115;}))
            {
              /* print("remove failed\n") */;
              char* _literal_116 = "remove failed\n";
              fprintf(stdout, "%s", _literal_116);
              /* while true
  () */;
              void* _while_118;
              while (({int64_t _literal_117 = 1/*True*/; _literal_117;}))
              {
                /* () */;
                UNIT;
                _while_118 = UNIT;
              };
              _ite_107 = ((void*) _while_118);
            }
            else
            {
              UNIT;
              _ite_107 = ((void*) UNIT);
            };
            /* this.matrix.set(x, y) */;
            ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "matrix");
            _enc__passive__encore_libs_master_Ped_util_Quad_tree_Quad_tree_t* _fieldacc_120 = (*_this)._enc__field_matrix;
            check_receiver(_fieldacc_120, ".", "this.matrix", "set", "\"./encore-libs-master/Ped_util/Regions.enc\" (line 353, column 33)");
            pony_type_t* _tmp_121[] = {};
            void* _sync_method_call_119 = _enc__method__encore_libs_master_Ped_util_Quad_tree_Quad_tree_set(_ctx, _fieldacc_120, NULL, _x_44, _y_48);
            /* a.a.move_int(x, y) */;
            ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_a_8, "a");
            _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t* _fieldacc_123 = (*_a_8)._enc__field_a;
            check_receiver(_fieldacc_123, ".", "a.a", "move_int", "\"./encore-libs-master/Ped_util/Regions.enc\" (line 354, column 33)");
            pony_type_t* _tmp_124[] = {};
            void* _sync_method_call_122 = _enc__method__encore_libs_master_Ped_util_Agent_passive_Agent_move_int(_ctx, _fieldacc_123, NULL, _x_44, _y_48);
            /* moved = true */;
            int64_t _literal_125 = 1/*True*/;
            _moved_33 = _literal_125;
            _ite_101 = ((void*) UNIT);
          }
          else
          {
            UNIT;
            _ite_101 = ((void*) UNIT);
          };
          _ite_98 = ((void*) _ite_101);
        }
        else
        {
          /* await nejbor */;
          future_await(_ctx, _nejbor_31);
          /* if get nejbor then
  {this.size = this.size - 1;
   unless this.matrix.remove(x2, y2) then
     {print("remove failed 2\n");
      while true
        ()};
   moved = true;
   if a == this.agents then
     this.agents = a.next;
   a.delete()} */;
          void* _ite_126;
          if (({int64_t _tmp_127 = future_get_actor(_ctx, _nejbor_31).i; _tmp_127;}))
          {
            /* this.size = this.size - 1 */;
            int64_t _binop_130 = (({ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "size");
                                    int64_t _fieldacc_128 = (*_this)._enc__field_size; _fieldacc_128;}) - ({int64_t _literal_129 = 1; _literal_129;}));
            (*({ENC_DTRACE3(FIELD_WRITE, (uintptr_t)*_ctx, (uintptr_t)_this, "size"); _this;}))._enc__field_size = _binop_130;
            /* unless this.matrix.remove(x2, y2) then
  {print("remove failed 2\n");
   while true
     ()} */;
            void* _ite_131;
            if (({ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "matrix");
                  _enc__passive__encore_libs_master_Ped_util_Quad_tree_Quad_tree_t* _fieldacc_133 = (*_this)._enc__field_matrix;
                  check_receiver(_fieldacc_133, ".", "this.matrix", "remove", "\"./encore-libs-master/Ped_util/Regions.enc\" (line 363, column 40)");
                  pony_type_t* _tmp_134[] = {};
                  int64_t _sync_method_call_132 = _enc__method__encore_libs_master_Ped_util_Quad_tree_Quad_tree_remove(_ctx, _fieldacc_133, NULL, _x2_35, _y2_37);
                  int64_t _unary_135 = (! _sync_method_call_132); _unary_135;}))
            {
              /* print("remove failed 2\n") */;
              char* _literal_136 = "remove failed 2\n";
              fprintf(stdout, "%s", _literal_136);
              /* while true
  () */;
              void* _while_138;
              while (({int64_t _literal_137 = 1/*True*/; _literal_137;}))
              {
                /* () */;
                UNIT;
                _while_138 = UNIT;
              };
              _ite_131 = ((void*) _while_138);
            }
            else
            {
              UNIT;
              _ite_131 = ((void*) UNIT);
            };
            /* moved = true */;
            int64_t _literal_139 = 1/*True*/;
            _moved_33 = _literal_139;
            /* if a == this.agents then
  this.agents = a.next */;
            void* _ite_140;
            if (({int64_t _binop_142 = (({ _a_8;}) == ((_enc__passive__encore_libs_master_Ped_util_Regions_Item_t*) ({ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "agents");
                                                                                                                      _enc__passive__encore_libs_master_Ped_util_Regions_Item_t* _fieldacc_141 = (*_this)._enc__field_agents; _fieldacc_141;}))); _binop_142;}))
            {
              /* this.agents = a.next */;
              ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_a_8, "next");
              _enc__passive__encore_libs_master_Ped_util_Regions_Item_t* _fieldacc_143 = (*_a_8)._enc__field_next;
              (*({ENC_DTRACE3(FIELD_WRITE, (uintptr_t)*_ctx, (uintptr_t)_this, "agents"); _this;}))._enc__field_agents = _fieldacc_143;
              _ite_140 = ((void*) UNIT);
            }
            else
            {
              UNIT;
              _ite_140 = ((void*) UNIT);
            };
            /* a.delete() */;
            check_receiver(_a_8, ".", "a", "delete", "\"./encore-libs-master/Ped_util/Regions.enc\" (line 366, column 33)");
            pony_type_t* _tmp_145[] = {};
            void* _sync_method_call_144 = _enc__method__encore_libs_master_Ped_util_Regions_Item_delete(_ctx, _a_8, NULL);
            _ite_126 = ((void*) _sync_method_call_144);
          }
          else
          {
            UNIT;
            _ite_126 = ((void*) UNIT);
          };
          _ite_98 = ((void*) _ite_126);
        };
        /* i = i + 2 */;
        int64_t _binop_147 = (({ _i_28;}) + ({int64_t _literal_146 = 2; _literal_146;}));
        _i_28 = _binop_147;
        _while_148 = UNIT;
      };
      _ite_14 = ((void*) _while_148);
    }
    else
    {
      UNIT;
      _ite_14 = ((void*) UNIT);
    };
    /* a = a.next */;
    ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_a_8, "next");
    _enc__passive__encore_libs_master_Ped_util_Regions_Item_t* _fieldacc_149 = (*_a_8)._enc__field_next;
    _a_8 = _fieldacc_149;
    _while_150 = UNIT;
  };
  /* this.moving = false */;
  int64_t _literal_151 = 0/*False*/;
  (*({ENC_DTRACE3(FIELD_WRITE, (uintptr_t)*_ctx, (uintptr_t)_this, "moving"); _this;}))._enc__field_moving = _literal_151;
  /* true */;
  int64_t _literal_152 = 1/*True*/;
  ENC_DTRACE3(METHOD_EXIT, (uintptr_t)*_ctx, (uintptr_t)_this, "move");
  return ((int64_t) _literal_152);
}


future_t* _enc__method__encore_libs_master_Ped_util_Regions_Box_move_future(pony_ctx_t** _ctx, _enc__active__encore_libs_master_Ped_util_Regions_Box_t* _this, pony_type_t** runtimeType)
{
  future_t* _fut = future_mk(_ctx, ENCORE_PRIMITIVE);
  pony_gc_send((*_ctx));
  encore_trace_object((*_ctx), _fut, future_trace);
  pony_send_done((*_ctx));
  _enc__fut_msg__encore_libs_master_Ped_util_Regions_Box_move_t* msg = ((_enc__fut_msg__encore_libs_master_Ped_util_Regions_Box_move_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__fut_msg__encore_libs_master_Ped_util_Regions_Box_move_t)), _ENC__FUT_MSG__encore_libs_master_Ped_util_Regions_Box_move));
  msg->_fut = _fut;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
  return _fut;
}


void _enc__method__encore_libs_master_Ped_util_Regions_Box_move_one_way(pony_ctx_t** _ctx, _enc__active__encore_libs_master_Ped_util_Regions_Box_t* _this, pony_type_t** runtimeType)
{
  pony_gc_send((*_ctx));
  /* No tracing future for oneway msg */;
  pony_send_done((*_ctx));
  _enc__oneway_msg__encore_libs_master_Ped_util_Regions_Box_move_t* msg = ((_enc__oneway_msg__encore_libs_master_Ped_util_Regions_Box_move_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__oneway_msg__encore_libs_master_Ped_util_Regions_Box_move_t)), _ENC__ONEWAY_MSG__encore_libs_master_Ped_util_Regions_Box_move));
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
}


static void _enc__dispatch__encore_libs_master_Ped_util_Regions_Box(pony_ctx_t** _ctx, pony_actor_t* _a, pony_msg_t* _m)
{
  _enc__active__encore_libs_master_Ped_util_Regions_Box_t* _this = ((_enc__active__encore_libs_master_Ped_util_Regions_Box_t*) _a);
  switch (_m->id)
  {
    case _ENC__FUT_MSG__encore_libs_master_Ped_util_Regions_Box_init:
    {
      future_t* _fut = ((encore_fut_msg_t*) _m)->_fut;
      tuple_t* _enc__arg_in_max = ((_enc__fut_msg__encore_libs_master_Ped_util_Regions_Box_init_t*) _m)->f1;
      tuple_t* _enc__arg_in_min = ((_enc__fut_msg__encore_libs_master_Ped_util_Regions_Box_init_t*) _m)->f2;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      encore_trace_object((*_ctx), _enc__arg_in_max, tuple_trace);
      encore_trace_object((*_ctx), _enc__arg_in_min, tuple_trace);
      encore_trace_object((*_ctx), _fut, future_type.trace);
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      pony_type_t* methodTypeVars[] = {};
      future_fulfil(_ctx, _fut, ((encore_arg_t) {.p = _enc__method__encore_libs_master_Ped_util_Regions_Box_init(_ctx, _this, methodTypeVars, _enc__arg_in_max, _enc__arg_in_min)}));
      break;
    }
    case _ENC__ONEWAY_MSG__encore_libs_master_Ped_util_Regions_Box_init:
    {
      tuple_t* _enc__arg_in_max = ((_enc__oneway_msg__encore_libs_master_Ped_util_Regions_Box_init_t*) _m)->f1;
      tuple_t* _enc__arg_in_min = ((_enc__oneway_msg__encore_libs_master_Ped_util_Regions_Box_init_t*) _m)->f2;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      encore_trace_object((*_ctx), _enc__arg_in_max, tuple_trace);
      encore_trace_object((*_ctx), _enc__arg_in_min, tuple_trace);
      /* Not tracing the future in a oneWay send */;
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      pony_type_t* methodTypeVars[] = {};
      _enc__method__encore_libs_master_Ped_util_Regions_Box_init(_ctx, _this, methodTypeVars, _enc__arg_in_max, _enc__arg_in_min);
      break;
    }
    case _ENC__FUT_MSG__encore_libs_master_Ped_util_Regions_Box_min:
    {
      future_t* _fut = ((encore_fut_msg_t*) _m)->_fut;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      encore_trace_object((*_ctx), _fut, future_type.trace);
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      pony_type_t* methodTypeVars[] = {};
      future_fulfil(_ctx, _fut, ((encore_arg_t) {.p = _enc__method__encore_libs_master_Ped_util_Regions_Box_min(_ctx, _this, methodTypeVars)}));
      break;
    }
    case _ENC__ONEWAY_MSG__encore_libs_master_Ped_util_Regions_Box_min:
    {
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      /* Not tracing the future in a oneWay send */;
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      pony_type_t* methodTypeVars[] = {};
      _enc__method__encore_libs_master_Ped_util_Regions_Box_min(_ctx, _this, methodTypeVars);
      break;
    }
    case _ENC__FUT_MSG__encore_libs_master_Ped_util_Regions_Box_max:
    {
      future_t* _fut = ((encore_fut_msg_t*) _m)->_fut;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      encore_trace_object((*_ctx), _fut, future_type.trace);
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      pony_type_t* methodTypeVars[] = {};
      future_fulfil(_ctx, _fut, ((encore_arg_t) {.p = _enc__method__encore_libs_master_Ped_util_Regions_Box_max(_ctx, _this, methodTypeVars)}));
      break;
    }
    case _ENC__ONEWAY_MSG__encore_libs_master_Ped_util_Regions_Box_max:
    {
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      /* Not tracing the future in a oneWay send */;
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      pony_type_t* methodTypeVars[] = {};
      _enc__method__encore_libs_master_Ped_util_Regions_Box_max(_ctx, _this, methodTypeVars);
      break;
    }
    case _ENC__FUT_MSG__encore_libs_master_Ped_util_Regions_Box_check_newcommers:
    {
      future_t* _fut = ((encore_fut_msg_t*) _m)->_fut;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      encore_trace_object((*_ctx), _fut, future_type.trace);
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      pony_type_t* methodTypeVars[] = {};
      future_fulfil(_ctx, _fut, ((encore_arg_t) {.p = _enc__method__encore_libs_master_Ped_util_Regions_Box_check_newcommers(_ctx, _this, methodTypeVars)}));
      break;
    }
    case _ENC__ONEWAY_MSG__encore_libs_master_Ped_util_Regions_Box_check_newcommers:
    {
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      /* Not tracing the future in a oneWay send */;
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      pony_type_t* methodTypeVars[] = {};
      _enc__method__encore_libs_master_Ped_util_Regions_Box_check_newcommers(_ctx, _this, methodTypeVars);
      break;
    }
    case _ENC__FUT_MSG__encore_libs_master_Ped_util_Regions_Box_check_channeling:
    {
      future_t* _fut = ((encore_fut_msg_t*) _m)->_fut;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      encore_trace_object((*_ctx), _fut, future_type.trace);
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      pony_type_t* methodTypeVars[] = {};
      future_fulfil(_ctx, _fut, ((encore_arg_t) {.p = _enc__method__encore_libs_master_Ped_util_Regions_Box_check_channeling(_ctx, _this, methodTypeVars)}));
      break;
    }
    case _ENC__ONEWAY_MSG__encore_libs_master_Ped_util_Regions_Box_check_channeling:
    {
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      /* Not tracing the future in a oneWay send */;
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      pony_type_t* methodTypeVars[] = {};
      _enc__method__encore_libs_master_Ped_util_Regions_Box_check_channeling(_ctx, _this, methodTypeVars);
      break;
    }
    case _ENC__FUT_MSG__encore_libs_master_Ped_util_Regions_Box_agents:
    {
      future_t* _fut = ((encore_fut_msg_t*) _m)->_fut;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      encore_trace_object((*_ctx), _fut, future_type.trace);
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      pony_type_t* methodTypeVars[] = {};
      future_fulfil(_ctx, _fut, ((encore_arg_t) {.p = _enc__method__encore_libs_master_Ped_util_Regions_Box_agents(_ctx, _this, methodTypeVars)}));
      break;
    }
    case _ENC__ONEWAY_MSG__encore_libs_master_Ped_util_Regions_Box_agents:
    {
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      /* Not tracing the future in a oneWay send */;
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      pony_type_t* methodTypeVars[] = {};
      _enc__method__encore_libs_master_Ped_util_Regions_Box_agents(_ctx, _this, methodTypeVars);
      break;
    }
    case _ENC__FUT_MSG__encore_libs_master_Ped_util_Regions_Box_add:
    {
      future_t* _fut = ((encore_fut_msg_t*) _m)->_fut;
      _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t* _enc__arg_a = ((_enc__fut_msg__encore_libs_master_Ped_util_Regions_Box_add_t*) _m)->f1;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      encore_trace_object((*_ctx), _enc__arg_a, _enc__trace__encore_libs_master_Ped_util_Agent_passive_Agent);
      encore_trace_object((*_ctx), _fut, future_type.trace);
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      pony_type_t* methodTypeVars[] = {};
      future_fulfil(_ctx, _fut, ((encore_arg_t) {.i = _enc__method__encore_libs_master_Ped_util_Regions_Box_add(_ctx, _this, methodTypeVars, _enc__arg_a)}));
      break;
    }
    case _ENC__ONEWAY_MSG__encore_libs_master_Ped_util_Regions_Box_add:
    {
      _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t* _enc__arg_a = ((_enc__oneway_msg__encore_libs_master_Ped_util_Regions_Box_add_t*) _m)->f1;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      encore_trace_object((*_ctx), _enc__arg_a, _enc__trace__encore_libs_master_Ped_util_Agent_passive_Agent);
      /* Not tracing the future in a oneWay send */;
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      pony_type_t* methodTypeVars[] = {};
      _enc__method__encore_libs_master_Ped_util_Regions_Box_add(_ctx, _this, methodTypeVars, _enc__arg_a);
      break;
    }
    case _ENC__FUT_MSG__encore_libs_master_Ped_util_Regions_Box_external_move:
    {
      future_t* _fut = ((encore_fut_msg_t*) _m)->_fut;
      _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t* _enc__arg_a = ((_enc__fut_msg__encore_libs_master_Ped_util_Regions_Box_external_move_t*) _m)->f1;
      int64_t _enc__arg_x = ((_enc__fut_msg__encore_libs_master_Ped_util_Regions_Box_external_move_t*) _m)->f2;
      int64_t _enc__arg_y = ((_enc__fut_msg__encore_libs_master_Ped_util_Regions_Box_external_move_t*) _m)->f3;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      encore_trace_object((*_ctx), _enc__arg_a, _enc__trace__encore_libs_master_Ped_util_Agent_passive_Agent);
      /* Not tracing field '_enc__arg_x' */;
      /* Not tracing field '_enc__arg_y' */;
      encore_trace_object((*_ctx), _fut, future_type.trace);
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      pony_type_t* methodTypeVars[] = {};
      future_fulfil(_ctx, _fut, ((encore_arg_t) {.i = _enc__method__encore_libs_master_Ped_util_Regions_Box_external_move(_ctx, _this, methodTypeVars, _enc__arg_a, _enc__arg_x, _enc__arg_y)}));
      break;
    }
    case _ENC__ONEWAY_MSG__encore_libs_master_Ped_util_Regions_Box_external_move:
    {
      _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t* _enc__arg_a = ((_enc__oneway_msg__encore_libs_master_Ped_util_Regions_Box_external_move_t*) _m)->f1;
      int64_t _enc__arg_x = ((_enc__oneway_msg__encore_libs_master_Ped_util_Regions_Box_external_move_t*) _m)->f2;
      int64_t _enc__arg_y = ((_enc__oneway_msg__encore_libs_master_Ped_util_Regions_Box_external_move_t*) _m)->f3;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      encore_trace_object((*_ctx), _enc__arg_a, _enc__trace__encore_libs_master_Ped_util_Agent_passive_Agent);
      /* Not tracing field '_enc__arg_x' */;
      /* Not tracing field '_enc__arg_y' */;
      /* Not tracing the future in a oneWay send */;
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      pony_type_t* methodTypeVars[] = {};
      _enc__method__encore_libs_master_Ped_util_Regions_Box_external_move(_ctx, _this, methodTypeVars, _enc__arg_a, _enc__arg_x, _enc__arg_y);
      break;
    }
    case _ENC__FUT_MSG__encore_libs_master_Ped_util_Regions_Box_add_internal:
    {
      future_t* _fut = ((encore_fut_msg_t*) _m)->_fut;
      _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t* _enc__arg_a = ((_enc__fut_msg__encore_libs_master_Ped_util_Regions_Box_add_internal_t*) _m)->f1;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      encore_trace_object((*_ctx), _enc__arg_a, _enc__trace__encore_libs_master_Ped_util_Agent_passive_Agent);
      encore_trace_object((*_ctx), _fut, future_type.trace);
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      pony_type_t* methodTypeVars[] = {};
      future_fulfil(_ctx, _fut, ((encore_arg_t) {.i = _enc__method__encore_libs_master_Ped_util_Regions_Box_add_internal(_ctx, _this, methodTypeVars, _enc__arg_a)}));
      break;
    }
    case _ENC__ONEWAY_MSG__encore_libs_master_Ped_util_Regions_Box_add_internal:
    {
      _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t* _enc__arg_a = ((_enc__oneway_msg__encore_libs_master_Ped_util_Regions_Box_add_internal_t*) _m)->f1;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      encore_trace_object((*_ctx), _enc__arg_a, _enc__trace__encore_libs_master_Ped_util_Agent_passive_Agent);
      /* Not tracing the future in a oneWay send */;
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      pony_type_t* methodTypeVars[] = {};
      _enc__method__encore_libs_master_Ped_util_Regions_Box_add_internal(_ctx, _this, methodTypeVars, _enc__arg_a);
      break;
    }
    case _ENC__FUT_MSG__encore_libs_master_Ped_util_Regions_Box_link:
    {
      future_t* _fut = ((encore_fut_msg_t*) _m)->_fut;
      _enc__active__encore_libs_master_Ped_util_Regions_Box_t* _enc__arg_a = ((_enc__fut_msg__encore_libs_master_Ped_util_Regions_Box_link_t*) _m)->f1;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      encore_trace_actor((*_ctx), ((pony_actor_t*) _enc__arg_a));
      encore_trace_object((*_ctx), _fut, future_type.trace);
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      pony_type_t* methodTypeVars[] = {};
      future_fulfil(_ctx, _fut, ((encore_arg_t) {.i = _enc__method__encore_libs_master_Ped_util_Regions_Box_link(_ctx, _this, methodTypeVars, _enc__arg_a)}));
      break;
    }
    case _ENC__ONEWAY_MSG__encore_libs_master_Ped_util_Regions_Box_link:
    {
      _enc__active__encore_libs_master_Ped_util_Regions_Box_t* _enc__arg_a = ((_enc__oneway_msg__encore_libs_master_Ped_util_Regions_Box_link_t*) _m)->f1;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      encore_trace_actor((*_ctx), ((pony_actor_t*) _enc__arg_a));
      /* Not tracing the future in a oneWay send */;
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      pony_type_t* methodTypeVars[] = {};
      _enc__method__encore_libs_master_Ped_util_Regions_Box_link(_ctx, _this, methodTypeVars, _enc__arg_a);
      break;
    }
    case _ENC__FUT_MSG__encore_libs_master_Ped_util_Regions_Box_merge:
    {
      future_t* _fut = ((encore_fut_msg_t*) _m)->_fut;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      encore_trace_object((*_ctx), _fut, future_type.trace);
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      pony_type_t* methodTypeVars[] = {};
      future_fulfil(_ctx, _fut, ((encore_arg_t) {.p = _enc__method__encore_libs_master_Ped_util_Regions_Box_merge(_ctx, _this, methodTypeVars)}));
      break;
    }
    case _ENC__ONEWAY_MSG__encore_libs_master_Ped_util_Regions_Box_merge:
    {
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      /* Not tracing the future in a oneWay send */;
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      pony_type_t* methodTypeVars[] = {};
      _enc__method__encore_libs_master_Ped_util_Regions_Box_merge(_ctx, _this, methodTypeVars);
      break;
    }
    case _ENC__FUT_MSG__encore_libs_master_Ped_util_Regions_Box_move:
    {
      future_t* _fut = ((encore_fut_msg_t*) _m)->_fut;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      encore_trace_object((*_ctx), _fut, future_type.trace);
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      pony_type_t* methodTypeVars[] = {};
      future_fulfil(_ctx, _fut, ((encore_arg_t) {.i = _enc__method__encore_libs_master_Ped_util_Regions_Box_move(_ctx, _this, methodTypeVars)}));
      break;
    }
    case _ENC__ONEWAY_MSG__encore_libs_master_Ped_util_Regions_Box_move:
    {
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      /* Not tracing the future in a oneWay send */;
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      pony_type_t* methodTypeVars[] = {};
      _enc__method__encore_libs_master_Ped_util_Regions_Box_move(_ctx, _this, methodTypeVars);
      break;
    }
    default:
    {
      printf("error, got invalid id: %zd", _m->id);
    }
  };
}


pony_type_t _enc__active__encore_libs_master_Ped_util_Regions_Box_type = {.id=_ENC__ID__encore_libs_master_Ped_util_Regions_Box, .size=sizeof(_enc__active__encore_libs_master_Ped_util_Regions_Box_t), .trace=_enc__trace__encore_libs_master_Ped_util_Regions_Box, .dispatch=_enc__dispatch__encore_libs_master_Ped_util_Regions_Box, .vtable=trait_method_selector};
