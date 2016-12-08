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


struct _enc__active__encore_libs_master_Ped_util_Box_Top_Box_t
{
  encore_actor_t _enc__actor;
  tuple_t* _enc__field_max;
  tuple_t* _enc__field_min;
  _enc__passive__encore_libs_master_Ped_util_Box_Multi_Box_face_t* _enc__field_implementation;
};


void _enc__type_init__encore_libs_master_Ped_util_Box_Top_Box(_enc__active__encore_libs_master_Ped_util_Box_Top_Box_t* this, ... )
{
  va_list params;
  va_start(params, this);
  va_end(params);
}


void _enc__trace__encore_libs_master_Ped_util_Box_Top_Box(pony_ctx_t* _ctx_arg, void* p)
{
  pony_ctx_t** _ctx = (&(_ctx_arg));
  _enc__active__encore_libs_master_Ped_util_Box_Top_Box_t* _this = p;
  tuple_t* _enc__field_max = _this->_enc__field_max;
  encore_trace_object((*_ctx), _enc__field_max, tuple_trace);
  tuple_t* _enc__field_min = _this->_enc__field_min;
  encore_trace_object((*_ctx), _enc__field_min, tuple_trace);
  _enc__passive__encore_libs_master_Ped_util_Box_Multi_Box_face_t* _enc__field_implementation = _this->_enc__field_implementation;
  encore_trace_object((*_ctx), _enc__field_implementation, _enc__trace__encore_libs_master_Ped_util_Box_Multi_Box_face);
}


_enc__active__encore_libs_master_Ped_util_Box_Top_Box_t* _enc__constructor__encore_libs_master_Ped_util_Box_Top_Box(pony_ctx_t** _ctx)
{
  _enc__active__encore_libs_master_Ped_util_Box_Top_Box_t* this = ((_enc__active__encore_libs_master_Ped_util_Box_Top_Box_t*) encore_create((*_ctx), (&(_enc__active__encore_libs_master_Ped_util_Box_Top_Box_type))));
  return this;
}


void* _enc__method__encore_libs_master_Ped_util_Box_Top_Box__init(pony_ctx_t** _ctx, _enc__active__encore_libs_master_Ped_util_Box_Top_Box_t* _this, array_t* _enc__arg_agents)
{
  /* let dx = 0
    dy = 0
in
  {match this.find_extreme(agents) with
     (xmax, ymax, xmin, ymin) => {this.max = (xmax, ymax);
                                  this.min = (xmin, ymin);
                                  this.implementation = new Multi_Box_face(new Multi_Box((this.min, 
                                                                                          this.max), 
                                                                                         new Top_Box_face(this), 
                                                                                         3));
                                  print("top-imp-done\n")}
   ;
   for a in agents
     this.implementation.add(a)} */;
  /* dx = 0 */;
  int64_t _literal_0 = 0;
  int64_t _dx_1 = _literal_0;
  /* dy = 0 */;
  int64_t _literal_2 = 0;
  int64_t _dy_3 = _literal_2;
  /* match this.find_extreme(agents) with
  (xmax, ymax, xmin, ymin) => {this.max = (xmax, ymax);
                               this.min = (xmin, ymin);
                               this.implementation = new Multi_Box_face(new Multi_Box((this.min, 
                                                                                       this.max), 
                                                                                      new Top_Box_face(this), 
                                                                                      3));
                               print("top-imp-done\n")}
 */;
  check_receiver(_this, ".", "this", "find_extreme", "\"./encore-libs-master/Ped_util/Box.enc\" (line 83, column 15)");
  tuple_t* _sync_method_call_5 = _enc__method__encore_libs_master_Ped_util_Box_Top_Box_find_extreme(_ctx, _this, _enc__arg_agents);
  void* _match_4;
  int64_t _xmax_6;
  int64_t _ymax_7;
  int64_t _xmin_8;
  int64_t _ymin_9;
  if ((({int64_t _tupleCheck_21;
         _tupleCheck_21 = 1;
         int64_t _tupleAccess_22 = tuple_get(_sync_method_call_5, 0).i;
         int64_t _varBinding_23;
         _xmax_6 = _tupleAccess_22;
         _varBinding_23 = 1;
         _tupleCheck_21 = (_tupleCheck_21 && _varBinding_23);
         int64_t _tupleAccess_24 = tuple_get(_sync_method_call_5, 1).i;
         int64_t _varBinding_25;
         _ymax_7 = _tupleAccess_24;
         _varBinding_25 = 1;
         _tupleCheck_21 = (_tupleCheck_21 && _varBinding_25);
         int64_t _tupleAccess_26 = tuple_get(_sync_method_call_5, 2).i;
         int64_t _varBinding_27;
         _xmin_8 = _tupleAccess_26;
         _varBinding_27 = 1;
         _tupleCheck_21 = (_tupleCheck_21 && _varBinding_27);
         int64_t _tupleAccess_28 = tuple_get(_sync_method_call_5, 3).i;
         int64_t _varBinding_29;
         _ymin_9 = _tupleAccess_28;
         _varBinding_29 = 1;
         _tupleCheck_21 = (_tupleCheck_21 && _varBinding_29); _tupleCheck_21;}) && ({int64_t _literal_30 = 1/*True*/; _literal_30;})))
  {
    _match_4 = ((void*) ({/* this.max = (xmax, ymax) */;
                          tuple_t* _tuple_10 = tuple_mk(_ctx, 2);
                          tuple_set_type(_tuple_10, 0, ENCORE_PRIMITIVE);
                          tuple_set_type(_tuple_10, 1, ENCORE_PRIMITIVE);
                          tuple_set(_tuple_10, 0, ((encore_arg_t) {.i = _xmax_6}));
                          tuple_set(_tuple_10, 1, ((encore_arg_t) {.i = _ymax_7}));
                          (*({ _this;}))._enc__field_max = _tuple_10;
                          /* this.min = (xmin, ymin) */;
                          tuple_t* _tuple_11 = tuple_mk(_ctx, 2);
                          tuple_set_type(_tuple_11, 0, ENCORE_PRIMITIVE);
                          tuple_set_type(_tuple_11, 1, ENCORE_PRIMITIVE);
                          tuple_set(_tuple_11, 0, ((encore_arg_t) {.i = _xmin_8}));
                          tuple_set(_tuple_11, 1, ((encore_arg_t) {.i = _ymin_9}));
                          (*({ _this;}))._enc__field_min = _tuple_11;
                          /* this.implementation = new Multi_Box_face(new Multi_Box((this.min, 
                                                        this.max), 
                                                       new Top_Box_face(this), 
                                                       3)) */;
                          _enc__passive__encore_libs_master_Ped_util_Box_Multi_Box_face_t* _new_12 = _enc__constructor__encore_libs_master_Ped_util_Box_Multi_Box_face(_ctx);
                          _enc__active__encore_libs_master_Ped_util_Box_Multi_Box_t* _new_13 = _enc__constructor__encore_libs_master_Ped_util_Box_Multi_Box(_ctx);
                          tuple_t* _tuple_14 = tuple_mk(_ctx, 2);
                          tuple_set_type(_tuple_14, 0, (&(tuple_type)));
                          tuple_set_type(_tuple_14, 1, (&(tuple_type)));
                          tuple_t* _fieldacc_15 = (*_this)._enc__field_min;
                          tuple_t* _fieldacc_16 = (*_this)._enc__field_max;
                          tuple_set(_tuple_14, 0, ((encore_arg_t) {.p = _fieldacc_15}));
                          tuple_set(_tuple_14, 1, ((encore_arg_t) {.p = _fieldacc_16}));
                          _enc__passive__encore_libs_master_Ped_util_Box_Top_Box_face_t* _new_17 = _enc__constructor__encore_libs_master_Ped_util_Box_Top_Box_face(_ctx);
                          _enc__type_init__encore_libs_master_Ped_util_Box_Top_Box_face(_new_17);
                          _enc__method__encore_libs_master_Ped_util_Box_Top_Box_face__init(_ctx, _new_17, _this);
                          _enc__trait__encore_libs_master_Ped_util_Box_Box_face_t* _cast_18 = ((_enc__trait__encore_libs_master_Ped_util_Box_Box_face_t*) _new_17);
                          int64_t _literal_19 = 3;
                          _enc__type_init__encore_libs_master_Ped_util_Box_Multi_Box(_new_13);
                          _enc__method__encore_libs_master_Ped_util_Box_Multi_Box__init_one_way(_ctx, _new_13, _tuple_14, ((_enc__trait__encore_libs_master_Ped_util_Box_Box_face_t*) _cast_18), _literal_19);
                          _enc__type_init__encore_libs_master_Ped_util_Box_Multi_Box_face(_new_12);
                          _enc__method__encore_libs_master_Ped_util_Box_Multi_Box_face__init(_ctx, _new_12, _new_13);
                          (*({ _this;}))._enc__field_implementation = _new_12;
                          /* print("top-imp-done\n") */;
                          char* _literal_20 = "top-imp-done\n";
                          printf("%s", _literal_20); UNIT;}));
  }
  else
  {
    printf("*** Runtime error: No matching clause was found ***\n");
    exit(1);
  };
  /* for a in agents
  this.implementation.add(a) */;
  void* _for_31;
  int64_t _start_34 = 0;
  int64_t _stop_35 = (array_size(_enc__arg_agents) - 1);
  int64_t _src_step_37 = 1;
  int64_t _literal_38 = 1;
  int64_t _step_36 = (_literal_38 * _src_step_37);
  range_assert_step(_step_36);
  int64_t _index_32;
  if ((_step_36 > 0))
  {
    _index_32 = _start_34;
  }
  else
  {
    _index_32 = _stop_35;
  };
  while (((_index_32 >= _start_34) && (_index_32 <= _stop_35)))
  {
    _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t* _a_33 = array_get(_enc__arg_agents, _index_32).p;
    /* this.implementation.add(a) */;
    _enc__passive__encore_libs_master_Ped_util_Box_Multi_Box_face_t* _fieldacc_40 = (*_this)._enc__field_implementation;
    check_receiver(_fieldacc_40, ".", "this.implementation", "add", "\"./encore-libs-master/Ped_util/Box.enc\" (line 90, column 13)");
    void* _sync_method_call_39 = _enc__method__encore_libs_master_Ped_util_Box_Multi_Box_face_add(_ctx, _fieldacc_40, _a_33);
    _for_31 = _sync_method_call_39;
    _index_32 = (_index_32 + _step_36);
  };
  /* print("top-setup-done\n") */;
  char* _literal_41 = "top-setup-done\n";
  printf("%s", _literal_41);
  return UNIT;
}


int64_t _enc__method__encore_libs_master_Ped_util_Box_Top_Box_move(pony_ctx_t** _ctx, _enc__active__encore_libs_master_Ped_util_Box_Top_Box_t* _this)
{
  /* get this.implementation.move() */;
  _enc__passive__encore_libs_master_Ped_util_Box_Multi_Box_face_t* _fieldacc_1 = (*_this)._enc__field_implementation;
  check_receiver(_fieldacc_1, ".", "this.implementation", "move", "\"./encore-libs-master/Ped_util/Box.enc\" (line 94, column 28)");
  future_t* _sync_method_call_0 = _enc__method__encore_libs_master_Ped_util_Box_Multi_Box_face_move(_ctx, _fieldacc_1);
  int64_t _tmp_2 = future_get_actor(_ctx, _sync_method_call_0).i;
  return ((int64_t) _tmp_2);
}


int64_t _enc__method__encore_libs_master_Ped_util_Box_Top_Box_external_move(pony_ctx_t** _ctx, _enc__active__encore_libs_master_Ped_util_Box_Top_Box_t* _this, _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t* _enc__arg_b, tuple_t* _enc__arg_a)
{
  /* print("AGENT IS TRYING TO ESCAPE SIMULATION!\n") */;
  char* _literal_0 = "AGENT IS TRYING TO ESCAPE SIMULATION!\n";
  printf("%s", _literal_0);
  /* false */;
  int64_t _literal_1 = 0/*False*/;
  return ((int64_t) _literal_1);
}


void* _enc__method__encore_libs_master_Ped_util_Box_Top_Box_start(pony_ctx_t** _ctx, _enc__active__encore_libs_master_Ped_util_Box_Top_Box_t* _this)
{
  /* print("START\n") */;
  char* _literal_0 = "START\n";
  printf("%s", _literal_0);
  /* println(this.implementation) */;
  _enc__passive__encore_libs_master_Ped_util_Box_Multi_Box_face_t* _fieldacc_1 = (*_this)._enc__field_implementation;
  printf("Box.Multi_Box_face@%p\n", _fieldacc_1);
  /* this.implementation.start() */;
  _enc__passive__encore_libs_master_Ped_util_Box_Multi_Box_face_t* _fieldacc_3 = (*_this)._enc__field_implementation;
  check_receiver(_fieldacc_3, ".", "this.implementation", "start", "\"./encore-libs-master/Ped_util/Box.enc\" (line 99, column 71)");
  void* _sync_method_call_2 = _enc__method__encore_libs_master_Ped_util_Box_Multi_Box_face_start(_ctx, _fieldacc_3);
  /* print("ING\n") */;
  char* _literal_4 = "ING\n";
  printf("%s", _literal_4);
  return UNIT;
}


tuple_t* _enc__method__encore_libs_master_Ped_util_Box_Top_Box_max(pony_ctx_t** _ctx, _enc__active__encore_libs_master_Ped_util_Box_Top_Box_t* _this)
{
  /* this.max */;
  tuple_t* _fieldacc_0 = (*_this)._enc__field_max;
  return ((tuple_t*) _fieldacc_0);
}


tuple_t* _enc__method__encore_libs_master_Ped_util_Box_Top_Box_min(pony_ctx_t** _ctx, _enc__active__encore_libs_master_Ped_util_Box_Top_Box_t* _this)
{
  /* this.min */;
  tuple_t* _fieldacc_0 = (*_this)._enc__field_min;
  return ((tuple_t*) _fieldacc_0);
}


tuple_t* _enc__method__encore_libs_master_Ped_util_Box_Top_Box_space(pony_ctx_t** _ctx, _enc__active__encore_libs_master_Ped_util_Box_Top_Box_t* _this)
{
  /* (this.min, this.max) */;
  tuple_t* _tuple_0 = tuple_mk(_ctx, 2);
  tuple_set_type(_tuple_0, 0, (&(tuple_type)));
  tuple_set_type(_tuple_0, 1, (&(tuple_type)));
  tuple_t* _fieldacc_1 = (*_this)._enc__field_min;
  tuple_t* _fieldacc_2 = (*_this)._enc__field_max;
  tuple_set(_tuple_0, 0, ((encore_arg_t) {.p = _fieldacc_1}));
  tuple_set(_tuple_0, 1, ((encore_arg_t) {.p = _fieldacc_2}));
  return ((tuple_t*) _tuple_0);
}


array_t* _enc__method__encore_libs_master_Ped_util_Box_Top_Box_agents(pony_ctx_t** _ctx, _enc__active__encore_libs_master_Ped_util_Box_Top_Box_t* _this)
{
  /* get this.implementation.agents() */;
  _enc__passive__encore_libs_master_Ped_util_Box_Multi_Box_face_t* _fieldacc_1 = (*_this)._enc__field_implementation;
  check_receiver(_fieldacc_1, ".", "this.implementation", "agents", "\"./encore-libs-master/Ped_util/Box.enc\" (line 104, column 38)");
  future_t* _sync_method_call_0 = _enc__method__encore_libs_master_Ped_util_Box_Multi_Box_face_agents(_ctx, _fieldacc_1);
  array_t* _tmp_2 = future_get_actor(_ctx, _sync_method_call_0).p;
  return ((array_t*) _tmp_2);
}


void* _enc__method__encore_libs_master_Ped_util_Box_Top_Box_done(pony_ctx_t** _ctx, _enc__active__encore_libs_master_Ped_util_Box_Top_Box_t* _this)
{
  /* if |get this.implementation.agents()| == 0 then
  print("THE PROGRAM IS NOW DONE\n") */;
  void* _ite_0;
  if (({int64_t _binop_6 = (({_enc__passive__encore_libs_master_Ped_util_Box_Multi_Box_face_t* _fieldacc_2 = (*_this)._enc__field_implementation;
                              check_receiver(_fieldacc_2, ".", "this.implementation", "agents", "\"./encore-libs-master/Ped_util/Box.enc\" (line 106, column 17)");
                              future_t* _sync_method_call_1 = _enc__method__encore_libs_master_Ped_util_Box_Multi_Box_face_agents(_ctx, _fieldacc_2);
                              array_t* _tmp_3 = future_get_actor(_ctx, _sync_method_call_1).p;
                              int64_t _size_4 = array_size(_tmp_3); _size_4;}) == ({int64_t _literal_5 = 0; _literal_5;})); _binop_6;}))
  {
    /* print("THE PROGRAM IS NOW DONE\n") */;
    char* _literal_7 = "THE PROGRAM IS NOW DONE\n";
    printf("%s", _literal_7);
    _ite_0 = ((void*) UNIT);
  }
  else
  {
    UNIT;
    _ite_0 = ((void*) UNIT);
  };
  return UNIT;
}


tuple_t* _enc__method__encore_libs_master_Ped_util_Box_Top_Box_find_extreme(pony_ctx_t** _ctx, _enc__active__encore_libs_master_Ped_util_Box_Top_Box_t* _this, array_t* _enc__arg_agents)
{
  /* let extreme = (- 10000, - 10000, 10000, 10000) */;
  /* extreme = (- 10000, - 10000, 10000, 10000) */;
  tuple_t* _tuple_0 = tuple_mk(_ctx, 4);
  tuple_set_type(_tuple_0, 0, ENCORE_PRIMITIVE);
  tuple_set_type(_tuple_0, 1, ENCORE_PRIMITIVE);
  tuple_set_type(_tuple_0, 2, ENCORE_PRIMITIVE);
  tuple_set_type(_tuple_0, 3, ENCORE_PRIMITIVE);
  int64_t _literal_1 = 10000;
  int64_t _unary_2 = (- _literal_1);
  int64_t _literal_3 = 10000;
  int64_t _unary_4 = (- _literal_3);
  int64_t _literal_5 = 10000;
  int64_t _literal_6 = 10000;
  tuple_set(_tuple_0, 0, ((encore_arg_t) {.i = _unary_2}));
  tuple_set(_tuple_0, 1, ((encore_arg_t) {.i = _unary_4}));
  tuple_set(_tuple_0, 2, ((encore_arg_t) {.i = _literal_5}));
  tuple_set(_tuple_0, 3, ((encore_arg_t) {.i = _literal_6}));
  tuple_t* _extreme_7 = _tuple_0;
  /* let i = 0 */;
  /* i = 0 */;
  int64_t _literal_8 = 0;
  int64_t _i_9 = _literal_8;
  /* for a in agents
  {i = i + 1;
   extreme = this.extreme_check(a.pos(), extreme);
   for b in a.targets
     extreme = this.extreme_check(b, extreme)} */;
  void* _for_10;
  int64_t _start_13 = 0;
  int64_t _stop_14 = (array_size(_enc__arg_agents) - 1);
  int64_t _src_step_16 = 1;
  int64_t _literal_17 = 1;
  int64_t _step_15 = (_literal_17 * _src_step_16);
  range_assert_step(_step_15);
  int64_t _index_11;
  if ((_step_15 > 0))
  {
    _index_11 = _start_13;
  }
  else
  {
    _index_11 = _stop_14;
  };
  while (((_index_11 >= _start_13) && (_index_11 <= _stop_14)))
  {
    _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t* _a_12 = array_get(_enc__arg_agents, _index_11).p;
    /* i = i + 1 */;
    int64_t _binop_19 = (({ _i_9;}) + ({int64_t _literal_18 = 1; _literal_18;}));
    _i_9 = _binop_19;
    /* extreme = this.extreme_check(a.pos(), extreme) */;
    check_receiver(_this, ".", "this", "extreme_check", "\"./encore-libs-master/Ped_util/Box.enc\" (line 114, column 21)");
    check_receiver(_a_12, ".", "a", "pos", "\"./encore-libs-master/Ped_util/Box.enc\" (line 114, column 40)");
    tuple_t* _sync_method_call_21 = _enc__method__encore_libs_master_Ped_util_Agent_passive_Agent_pos(_ctx, _a_12);
    tuple_t* _sync_method_call_20 = _enc__method__encore_libs_master_Ped_util_Box_Top_Box_extreme_check(_ctx, _this, _sync_method_call_21, _extreme_7);
    _extreme_7 = _sync_method_call_20;
    /* for b in a.targets
  extreme = this.extreme_check(b, extreme) */;
    void* _for_22;
    array_t* _fieldacc_29 = (*_a_12)._enc__field_targets;
    int64_t _start_25 = 0;
    int64_t _stop_26 = (array_size(_fieldacc_29) - 1);
    int64_t _src_step_28 = 1;
    int64_t _literal_30 = 1;
    int64_t _step_27 = (_literal_30 * _src_step_28);
    range_assert_step(_step_27);
    int64_t _index_23;
    if ((_step_27 > 0))
    {
      _index_23 = _start_25;
    }
    else
    {
      _index_23 = _stop_26;
    };
    while (((_index_23 >= _start_25) && (_index_23 <= _stop_26)))
    {
      tuple_t* _b_24 = array_get(_fieldacc_29, _index_23).p;
      /* extreme = this.extreme_check(b, extreme) */;
      check_receiver(_this, ".", "this", "extreme_check", "\"./encore-libs-master/Ped_util/Box.enc\" (line 116, column 25)");
      tuple_t* _sync_method_call_31 = _enc__method__encore_libs_master_Ped_util_Box_Top_Box_extreme_check(_ctx, _this, _b_24, _extreme_7);
      _extreme_7 = _sync_method_call_31;
      _for_22 = UNIT;
      _index_23 = (_index_23 + _step_27);
    };
    _for_10 = _for_22;
    _index_11 = (_index_11 + _step_15);
  };
  /* extreme */;
  return ((tuple_t*) _extreme_7);
}


tuple_t* _enc__method__encore_libs_master_Ped_util_Box_Top_Box_extreme_check(pony_ctx_t** _ctx, _enc__active__encore_libs_master_Ped_util_Box_Top_Box_t* _this, tuple_t* _enc__arg_a, tuple_t* _enc__arg_b)
{
  /* match (a, b) with
  ((x, y), (xmax, ymax, xmin, ymin)) => (max(x, xmax), 
                                         max(y, ymax), 
                                         min(x, xmin), 
                                         min(y, ymin))
 */;
  tuple_t* _tuple_1 = tuple_mk(_ctx, 2);
  tuple_set_type(_tuple_1, 0, (&(tuple_type)));
  tuple_set_type(_tuple_1, 1, (&(tuple_type)));
  tuple_set(_tuple_1, 0, ((encore_arg_t) {.p = _enc__arg_a}));
  tuple_set(_tuple_1, 1, ((encore_arg_t) {.p = _enc__arg_b}));
  tuple_t* _match_0;
  int64_t _x_2;
  int64_t _y_3;
  int64_t _xmax_4;
  int64_t _ymax_5;
  int64_t _xmin_6;
  int64_t _ymin_7;
  if ((({int64_t _tupleCheck_17;
         _tupleCheck_17 = 1;
         tuple_t* _tupleAccess_18 = tuple_get(_tuple_1, 0).p;
         int64_t _tupleCheck_19;
         _tupleCheck_19 = 1;
         int64_t _tupleAccess_20 = tuple_get(_tupleAccess_18, 0).i;
         int64_t _varBinding_21;
         _x_2 = _tupleAccess_20;
         _varBinding_21 = 1;
         _tupleCheck_19 = (_tupleCheck_19 && _varBinding_21);
         int64_t _tupleAccess_22 = tuple_get(_tupleAccess_18, 1).i;
         int64_t _varBinding_23;
         _y_3 = _tupleAccess_22;
         _varBinding_23 = 1;
         _tupleCheck_19 = (_tupleCheck_19 && _varBinding_23);
         _tupleCheck_17 = (_tupleCheck_17 && _tupleCheck_19);
         tuple_t* _tupleAccess_24 = tuple_get(_tuple_1, 1).p;
         int64_t _tupleCheck_25;
         _tupleCheck_25 = 1;
         int64_t _tupleAccess_26 = tuple_get(_tupleAccess_24, 0).i;
         int64_t _varBinding_27;
         _xmax_4 = _tupleAccess_26;
         _varBinding_27 = 1;
         _tupleCheck_25 = (_tupleCheck_25 && _varBinding_27);
         int64_t _tupleAccess_28 = tuple_get(_tupleAccess_24, 1).i;
         int64_t _varBinding_29;
         _ymax_5 = _tupleAccess_28;
         _varBinding_29 = 1;
         _tupleCheck_25 = (_tupleCheck_25 && _varBinding_29);
         int64_t _tupleAccess_30 = tuple_get(_tupleAccess_24, 2).i;
         int64_t _varBinding_31;
         _xmin_6 = _tupleAccess_30;
         _varBinding_31 = 1;
         _tupleCheck_25 = (_tupleCheck_25 && _varBinding_31);
         int64_t _tupleAccess_32 = tuple_get(_tupleAccess_24, 3).i;
         int64_t _varBinding_33;
         _ymin_7 = _tupleAccess_32;
         _varBinding_33 = 1;
         _tupleCheck_25 = (_tupleCheck_25 && _varBinding_33);
         _tupleCheck_17 = (_tupleCheck_17 && _tupleCheck_25); _tupleCheck_17;}) && ({int64_t _literal_34 = 1/*True*/; _literal_34;})))
  {
    _match_0 = ((tuple_t*) ({tuple_t* _tuple_8 = tuple_mk(_ctx, 4);
                             tuple_set_type(_tuple_8, 0, ENCORE_PRIMITIVE);
                             tuple_set_type(_tuple_8, 1, ENCORE_PRIMITIVE);
                             tuple_set_type(_tuple_8, 2, ENCORE_PRIMITIVE);
                             tuple_set_type(_tuple_8, 3, ENCORE_PRIMITIVE);
                             pony_type_t* _tmp_9[] = {};
                             int64_t _global_f_10 = _enc__global_fun__encore_libs_master_Ped_util_Global_funsmax(_ctx, NULL, _x_2, _xmax_4);
                             pony_type_t* _tmp_11[] = {};
                             int64_t _global_f_12 = _enc__global_fun__encore_libs_master_Ped_util_Global_funsmax(_ctx, NULL, _y_3, _ymax_5);
                             pony_type_t* _tmp_13[] = {};
                             int64_t _global_f_14 = _enc__global_fun__encore_libs_master_Ped_util_Global_funsmin(_ctx, NULL, _x_2, _xmin_6);
                             pony_type_t* _tmp_15[] = {};
                             int64_t _global_f_16 = _enc__global_fun__encore_libs_master_Ped_util_Global_funsmin(_ctx, NULL, _y_3, _ymin_7);
                             tuple_set(_tuple_8, 0, ((encore_arg_t) {.i = _global_f_10}));
                             tuple_set(_tuple_8, 1, ((encore_arg_t) {.i = _global_f_12}));
                             tuple_set(_tuple_8, 2, ((encore_arg_t) {.i = _global_f_14}));
                             tuple_set(_tuple_8, 3, ((encore_arg_t) {.i = _global_f_16})); _tuple_8;}));
  }
  else
  {
    printf("*** Runtime error: No matching clause was found ***\n");
    exit(1);
  };
  return ((tuple_t*) _match_0);
}


future_t* _enc__method__encore_libs_master_Ped_util_Box_Top_Box__init_future(pony_ctx_t** _ctx, _enc__active__encore_libs_master_Ped_util_Box_Top_Box_t* _this, array_t* _enc__arg_agents)
{
  future_t* _fut = future_mk(_ctx, ENCORE_PRIMITIVE);
  pony_gc_send((*_ctx));
  encore_trace_object((*_ctx), _enc__arg_agents, array_trace);
  encore_trace_object((*_ctx), _fut, future_trace);
  pony_send_done((*_ctx));
  _enc__fut_msg__encore_libs_master_Ped_util_Box_Top_Box__init_t* msg = ((_enc__fut_msg__encore_libs_master_Ped_util_Box_Top_Box__init_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__fut_msg__encore_libs_master_Ped_util_Box_Top_Box__init_t)), _ENC__FUT_MSG__encore_libs_master_Ped_util_Box_Top_Box__init));
  msg->f1 = _enc__arg_agents;
  msg->_fut = _fut;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
  return _fut;
}


future_t* _enc__method__encore_libs_master_Ped_util_Box_Top_Box_move_future(pony_ctx_t** _ctx, _enc__active__encore_libs_master_Ped_util_Box_Top_Box_t* _this)
{
  future_t* _fut = future_mk(_ctx, ENCORE_PRIMITIVE);
  pony_gc_send((*_ctx));
  encore_trace_object((*_ctx), _fut, future_trace);
  pony_send_done((*_ctx));
  _enc__fut_msg__encore_libs_master_Ped_util_Box_Top_Box_move_t* msg = ((_enc__fut_msg__encore_libs_master_Ped_util_Box_Top_Box_move_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__fut_msg__encore_libs_master_Ped_util_Box_Top_Box_move_t)), _ENC__FUT_MSG__encore_libs_master_Ped_util_Box_Top_Box_move));
  msg->_fut = _fut;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
  return _fut;
}


future_t* _enc__method__encore_libs_master_Ped_util_Box_Top_Box_external_move_future(pony_ctx_t** _ctx, _enc__active__encore_libs_master_Ped_util_Box_Top_Box_t* _this, _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t* _enc__arg_b, tuple_t* _enc__arg_a)
{
  future_t* _fut = future_mk(_ctx, ENCORE_PRIMITIVE);
  pony_gc_send((*_ctx));
  encore_trace_object((*_ctx), _enc__arg_b, _enc__trace__encore_libs_master_Ped_util_Agent_passive_Agent);
  encore_trace_object((*_ctx), _enc__arg_a, tuple_trace);
  encore_trace_object((*_ctx), _fut, future_trace);
  pony_send_done((*_ctx));
  _enc__fut_msg__encore_libs_master_Ped_util_Box_Top_Box_external_move_t* msg = ((_enc__fut_msg__encore_libs_master_Ped_util_Box_Top_Box_external_move_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__fut_msg__encore_libs_master_Ped_util_Box_Top_Box_external_move_t)), _ENC__FUT_MSG__encore_libs_master_Ped_util_Box_Top_Box_external_move));
  msg->f1 = _enc__arg_b;
  msg->f2 = _enc__arg_a;
  msg->_fut = _fut;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
  return _fut;
}


future_t* _enc__method__encore_libs_master_Ped_util_Box_Top_Box_start_future(pony_ctx_t** _ctx, _enc__active__encore_libs_master_Ped_util_Box_Top_Box_t* _this)
{
  future_t* _fut = future_mk(_ctx, ENCORE_PRIMITIVE);
  pony_gc_send((*_ctx));
  encore_trace_object((*_ctx), _fut, future_trace);
  pony_send_done((*_ctx));
  _enc__fut_msg__encore_libs_master_Ped_util_Box_Top_Box_start_t* msg = ((_enc__fut_msg__encore_libs_master_Ped_util_Box_Top_Box_start_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__fut_msg__encore_libs_master_Ped_util_Box_Top_Box_start_t)), _ENC__FUT_MSG__encore_libs_master_Ped_util_Box_Top_Box_start));
  msg->_fut = _fut;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
  return _fut;
}


future_t* _enc__method__encore_libs_master_Ped_util_Box_Top_Box_max_future(pony_ctx_t** _ctx, _enc__active__encore_libs_master_Ped_util_Box_Top_Box_t* _this)
{
  future_t* _fut = future_mk(_ctx, (&(tuple_type)));
  pony_gc_send((*_ctx));
  encore_trace_object((*_ctx), _fut, future_trace);
  pony_send_done((*_ctx));
  _enc__fut_msg__encore_libs_master_Ped_util_Box_Top_Box_max_t* msg = ((_enc__fut_msg__encore_libs_master_Ped_util_Box_Top_Box_max_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__fut_msg__encore_libs_master_Ped_util_Box_Top_Box_max_t)), _ENC__FUT_MSG__encore_libs_master_Ped_util_Box_Top_Box_max));
  msg->_fut = _fut;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
  return _fut;
}


future_t* _enc__method__encore_libs_master_Ped_util_Box_Top_Box_min_future(pony_ctx_t** _ctx, _enc__active__encore_libs_master_Ped_util_Box_Top_Box_t* _this)
{
  future_t* _fut = future_mk(_ctx, (&(tuple_type)));
  pony_gc_send((*_ctx));
  encore_trace_object((*_ctx), _fut, future_trace);
  pony_send_done((*_ctx));
  _enc__fut_msg__encore_libs_master_Ped_util_Box_Top_Box_min_t* msg = ((_enc__fut_msg__encore_libs_master_Ped_util_Box_Top_Box_min_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__fut_msg__encore_libs_master_Ped_util_Box_Top_Box_min_t)), _ENC__FUT_MSG__encore_libs_master_Ped_util_Box_Top_Box_min));
  msg->_fut = _fut;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
  return _fut;
}


future_t* _enc__method__encore_libs_master_Ped_util_Box_Top_Box_space_future(pony_ctx_t** _ctx, _enc__active__encore_libs_master_Ped_util_Box_Top_Box_t* _this)
{
  future_t* _fut = future_mk(_ctx, (&(tuple_type)));
  pony_gc_send((*_ctx));
  encore_trace_object((*_ctx), _fut, future_trace);
  pony_send_done((*_ctx));
  _enc__fut_msg__encore_libs_master_Ped_util_Box_Top_Box_space_t* msg = ((_enc__fut_msg__encore_libs_master_Ped_util_Box_Top_Box_space_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__fut_msg__encore_libs_master_Ped_util_Box_Top_Box_space_t)), _ENC__FUT_MSG__encore_libs_master_Ped_util_Box_Top_Box_space));
  msg->_fut = _fut;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
  return _fut;
}


future_t* _enc__method__encore_libs_master_Ped_util_Box_Top_Box_agents_future(pony_ctx_t** _ctx, _enc__active__encore_libs_master_Ped_util_Box_Top_Box_t* _this)
{
  future_t* _fut = future_mk(_ctx, (&(array_type)));
  pony_gc_send((*_ctx));
  encore_trace_object((*_ctx), _fut, future_trace);
  pony_send_done((*_ctx));
  _enc__fut_msg__encore_libs_master_Ped_util_Box_Top_Box_agents_t* msg = ((_enc__fut_msg__encore_libs_master_Ped_util_Box_Top_Box_agents_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__fut_msg__encore_libs_master_Ped_util_Box_Top_Box_agents_t)), _ENC__FUT_MSG__encore_libs_master_Ped_util_Box_Top_Box_agents));
  msg->_fut = _fut;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
  return _fut;
}


future_t* _enc__method__encore_libs_master_Ped_util_Box_Top_Box_done_future(pony_ctx_t** _ctx, _enc__active__encore_libs_master_Ped_util_Box_Top_Box_t* _this)
{
  future_t* _fut = future_mk(_ctx, ENCORE_PRIMITIVE);
  pony_gc_send((*_ctx));
  encore_trace_object((*_ctx), _fut, future_trace);
  pony_send_done((*_ctx));
  _enc__fut_msg__encore_libs_master_Ped_util_Box_Top_Box_done_t* msg = ((_enc__fut_msg__encore_libs_master_Ped_util_Box_Top_Box_done_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__fut_msg__encore_libs_master_Ped_util_Box_Top_Box_done_t)), _ENC__FUT_MSG__encore_libs_master_Ped_util_Box_Top_Box_done));
  msg->_fut = _fut;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
  return _fut;
}


future_t* _enc__method__encore_libs_master_Ped_util_Box_Top_Box_find_extreme_future(pony_ctx_t** _ctx, _enc__active__encore_libs_master_Ped_util_Box_Top_Box_t* _this, array_t* _enc__arg_agents)
{
  future_t* _fut = future_mk(_ctx, (&(tuple_type)));
  pony_gc_send((*_ctx));
  encore_trace_object((*_ctx), _enc__arg_agents, array_trace);
  encore_trace_object((*_ctx), _fut, future_trace);
  pony_send_done((*_ctx));
  _enc__fut_msg__encore_libs_master_Ped_util_Box_Top_Box_find_extreme_t* msg = ((_enc__fut_msg__encore_libs_master_Ped_util_Box_Top_Box_find_extreme_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__fut_msg__encore_libs_master_Ped_util_Box_Top_Box_find_extreme_t)), _ENC__FUT_MSG__encore_libs_master_Ped_util_Box_Top_Box_find_extreme));
  msg->f1 = _enc__arg_agents;
  msg->_fut = _fut;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
  return _fut;
}


future_t* _enc__method__encore_libs_master_Ped_util_Box_Top_Box_extreme_check_future(pony_ctx_t** _ctx, _enc__active__encore_libs_master_Ped_util_Box_Top_Box_t* _this, tuple_t* _enc__arg_a, tuple_t* _enc__arg_b)
{
  future_t* _fut = future_mk(_ctx, (&(tuple_type)));
  pony_gc_send((*_ctx));
  encore_trace_object((*_ctx), _enc__arg_a, tuple_trace);
  encore_trace_object((*_ctx), _enc__arg_b, tuple_trace);
  encore_trace_object((*_ctx), _fut, future_trace);
  pony_send_done((*_ctx));
  _enc__fut_msg__encore_libs_master_Ped_util_Box_Top_Box_extreme_check_t* msg = ((_enc__fut_msg__encore_libs_master_Ped_util_Box_Top_Box_extreme_check_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__fut_msg__encore_libs_master_Ped_util_Box_Top_Box_extreme_check_t)), _ENC__FUT_MSG__encore_libs_master_Ped_util_Box_Top_Box_extreme_check));
  msg->f1 = _enc__arg_a;
  msg->f2 = _enc__arg_b;
  msg->_fut = _fut;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
  return _fut;
}


void _enc__method__encore_libs_master_Ped_util_Box_Top_Box__init_one_way(pony_ctx_t** _ctx, _enc__active__encore_libs_master_Ped_util_Box_Top_Box_t* _this, array_t* _enc__arg_agents)
{
  pony_gc_send((*_ctx));
  encore_trace_object((*_ctx), _enc__arg_agents, array_trace);
  /* No tracing future for oneway msg */;
  pony_send_done((*_ctx));
  _enc__oneway_msg__encore_libs_master_Ped_util_Box_Top_Box__init_t* msg = ((_enc__oneway_msg__encore_libs_master_Ped_util_Box_Top_Box__init_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__oneway_msg__encore_libs_master_Ped_util_Box_Top_Box__init_t)), _ENC__ONEWAY_MSG__encore_libs_master_Ped_util_Box_Top_Box__init));
  msg->f1 = _enc__arg_agents;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
}


void _enc__method__encore_libs_master_Ped_util_Box_Top_Box_move_one_way(pony_ctx_t** _ctx, _enc__active__encore_libs_master_Ped_util_Box_Top_Box_t* _this)
{
  pony_gc_send((*_ctx));
  /* No tracing future for oneway msg */;
  pony_send_done((*_ctx));
  _enc__oneway_msg__encore_libs_master_Ped_util_Box_Top_Box_move_t* msg = ((_enc__oneway_msg__encore_libs_master_Ped_util_Box_Top_Box_move_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__oneway_msg__encore_libs_master_Ped_util_Box_Top_Box_move_t)), _ENC__ONEWAY_MSG__encore_libs_master_Ped_util_Box_Top_Box_move));
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
}


void _enc__method__encore_libs_master_Ped_util_Box_Top_Box_external_move_one_way(pony_ctx_t** _ctx, _enc__active__encore_libs_master_Ped_util_Box_Top_Box_t* _this, _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t* _enc__arg_b, tuple_t* _enc__arg_a)
{
  pony_gc_send((*_ctx));
  encore_trace_object((*_ctx), _enc__arg_b, _enc__trace__encore_libs_master_Ped_util_Agent_passive_Agent);
  encore_trace_object((*_ctx), _enc__arg_a, tuple_trace);
  /* No tracing future for oneway msg */;
  pony_send_done((*_ctx));
  _enc__oneway_msg__encore_libs_master_Ped_util_Box_Top_Box_external_move_t* msg = ((_enc__oneway_msg__encore_libs_master_Ped_util_Box_Top_Box_external_move_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__oneway_msg__encore_libs_master_Ped_util_Box_Top_Box_external_move_t)), _ENC__ONEWAY_MSG__encore_libs_master_Ped_util_Box_Top_Box_external_move));
  msg->f1 = _enc__arg_b;
  msg->f2 = _enc__arg_a;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
}


void _enc__method__encore_libs_master_Ped_util_Box_Top_Box_start_one_way(pony_ctx_t** _ctx, _enc__active__encore_libs_master_Ped_util_Box_Top_Box_t* _this)
{
  pony_gc_send((*_ctx));
  /* No tracing future for oneway msg */;
  pony_send_done((*_ctx));
  _enc__oneway_msg__encore_libs_master_Ped_util_Box_Top_Box_start_t* msg = ((_enc__oneway_msg__encore_libs_master_Ped_util_Box_Top_Box_start_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__oneway_msg__encore_libs_master_Ped_util_Box_Top_Box_start_t)), _ENC__ONEWAY_MSG__encore_libs_master_Ped_util_Box_Top_Box_start));
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
}


void _enc__method__encore_libs_master_Ped_util_Box_Top_Box_max_one_way(pony_ctx_t** _ctx, _enc__active__encore_libs_master_Ped_util_Box_Top_Box_t* _this)
{
  pony_gc_send((*_ctx));
  /* No tracing future for oneway msg */;
  pony_send_done((*_ctx));
  _enc__oneway_msg__encore_libs_master_Ped_util_Box_Top_Box_max_t* msg = ((_enc__oneway_msg__encore_libs_master_Ped_util_Box_Top_Box_max_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__oneway_msg__encore_libs_master_Ped_util_Box_Top_Box_max_t)), _ENC__ONEWAY_MSG__encore_libs_master_Ped_util_Box_Top_Box_max));
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
}


void _enc__method__encore_libs_master_Ped_util_Box_Top_Box_min_one_way(pony_ctx_t** _ctx, _enc__active__encore_libs_master_Ped_util_Box_Top_Box_t* _this)
{
  pony_gc_send((*_ctx));
  /* No tracing future for oneway msg */;
  pony_send_done((*_ctx));
  _enc__oneway_msg__encore_libs_master_Ped_util_Box_Top_Box_min_t* msg = ((_enc__oneway_msg__encore_libs_master_Ped_util_Box_Top_Box_min_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__oneway_msg__encore_libs_master_Ped_util_Box_Top_Box_min_t)), _ENC__ONEWAY_MSG__encore_libs_master_Ped_util_Box_Top_Box_min));
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
}


void _enc__method__encore_libs_master_Ped_util_Box_Top_Box_space_one_way(pony_ctx_t** _ctx, _enc__active__encore_libs_master_Ped_util_Box_Top_Box_t* _this)
{
  pony_gc_send((*_ctx));
  /* No tracing future for oneway msg */;
  pony_send_done((*_ctx));
  _enc__oneway_msg__encore_libs_master_Ped_util_Box_Top_Box_space_t* msg = ((_enc__oneway_msg__encore_libs_master_Ped_util_Box_Top_Box_space_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__oneway_msg__encore_libs_master_Ped_util_Box_Top_Box_space_t)), _ENC__ONEWAY_MSG__encore_libs_master_Ped_util_Box_Top_Box_space));
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
}


void _enc__method__encore_libs_master_Ped_util_Box_Top_Box_agents_one_way(pony_ctx_t** _ctx, _enc__active__encore_libs_master_Ped_util_Box_Top_Box_t* _this)
{
  pony_gc_send((*_ctx));
  /* No tracing future for oneway msg */;
  pony_send_done((*_ctx));
  _enc__oneway_msg__encore_libs_master_Ped_util_Box_Top_Box_agents_t* msg = ((_enc__oneway_msg__encore_libs_master_Ped_util_Box_Top_Box_agents_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__oneway_msg__encore_libs_master_Ped_util_Box_Top_Box_agents_t)), _ENC__ONEWAY_MSG__encore_libs_master_Ped_util_Box_Top_Box_agents));
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
}


void _enc__method__encore_libs_master_Ped_util_Box_Top_Box_done_one_way(pony_ctx_t** _ctx, _enc__active__encore_libs_master_Ped_util_Box_Top_Box_t* _this)
{
  pony_gc_send((*_ctx));
  /* No tracing future for oneway msg */;
  pony_send_done((*_ctx));
  _enc__oneway_msg__encore_libs_master_Ped_util_Box_Top_Box_done_t* msg = ((_enc__oneway_msg__encore_libs_master_Ped_util_Box_Top_Box_done_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__oneway_msg__encore_libs_master_Ped_util_Box_Top_Box_done_t)), _ENC__ONEWAY_MSG__encore_libs_master_Ped_util_Box_Top_Box_done));
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
}


void _enc__method__encore_libs_master_Ped_util_Box_Top_Box_find_extreme_one_way(pony_ctx_t** _ctx, _enc__active__encore_libs_master_Ped_util_Box_Top_Box_t* _this, array_t* _enc__arg_agents)
{
  pony_gc_send((*_ctx));
  encore_trace_object((*_ctx), _enc__arg_agents, array_trace);
  /* No tracing future for oneway msg */;
  pony_send_done((*_ctx));
  _enc__oneway_msg__encore_libs_master_Ped_util_Box_Top_Box_find_extreme_t* msg = ((_enc__oneway_msg__encore_libs_master_Ped_util_Box_Top_Box_find_extreme_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__oneway_msg__encore_libs_master_Ped_util_Box_Top_Box_find_extreme_t)), _ENC__ONEWAY_MSG__encore_libs_master_Ped_util_Box_Top_Box_find_extreme));
  msg->f1 = _enc__arg_agents;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
}


void _enc__method__encore_libs_master_Ped_util_Box_Top_Box_extreme_check_one_way(pony_ctx_t** _ctx, _enc__active__encore_libs_master_Ped_util_Box_Top_Box_t* _this, tuple_t* _enc__arg_a, tuple_t* _enc__arg_b)
{
  pony_gc_send((*_ctx));
  encore_trace_object((*_ctx), _enc__arg_a, tuple_trace);
  encore_trace_object((*_ctx), _enc__arg_b, tuple_trace);
  /* No tracing future for oneway msg */;
  pony_send_done((*_ctx));
  _enc__oneway_msg__encore_libs_master_Ped_util_Box_Top_Box_extreme_check_t* msg = ((_enc__oneway_msg__encore_libs_master_Ped_util_Box_Top_Box_extreme_check_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__oneway_msg__encore_libs_master_Ped_util_Box_Top_Box_extreme_check_t)), _ENC__ONEWAY_MSG__encore_libs_master_Ped_util_Box_Top_Box_extreme_check));
  msg->f1 = _enc__arg_a;
  msg->f2 = _enc__arg_b;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
}


static void _enc__dispatch__encore_libs_master_Ped_util_Box_Top_Box(pony_ctx_t** _ctx, pony_actor_t* _a, pony_msg_t* _m)
{
  _enc__active__encore_libs_master_Ped_util_Box_Top_Box_t* _this = ((_enc__active__encore_libs_master_Ped_util_Box_Top_Box_t*) _a);
  switch (_m->id)
  {
    case _ENC__MSG_TASK:
    {
      future_t* _fut = ((encore_fut_msg_t*) _m)->_fut;
      encore_task_s* _task = ((encore_task_msg_s*) _m)->_task;
      encore_arg_t task_tmp = task_runner(_task);
      
      // --- GC on receiving ----------------------------------------;
      pony_gc_recv((*_ctx));
      encore_trace_object((*_ctx), _fut, future_type.trace);
      encore_trace_object((*_ctx), _task, NULL);
      //---You need to trace the task env and task dependencies---;
      pony_recv_done((*_ctx));
      // --- GC on sending ----------------------------------------;
      
      future_fulfil(_ctx, _fut, task_tmp);
      task_free(_task);
      break;
    }
    case _ENC__FUT_MSG__encore_libs_master_Ped_util_Box_Top_Box__init:
    {
      future_t* _fut = ((encore_fut_msg_t*) _m)->_fut;
      array_t* _enc__arg_agents = ((_enc__fut_msg__encore_libs_master_Ped_util_Box_Top_Box__init_t*) _m)->f1;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      encore_trace_object((*_ctx), _enc__arg_agents, array_trace);
      encore_trace_object((*_ctx), _fut, future_type.trace);
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      future_fulfil(_ctx, _fut, ((encore_arg_t) {.p = _enc__method__encore_libs_master_Ped_util_Box_Top_Box__init(_ctx, _this, _enc__arg_agents)}));
      break;
    }
    case _ENC__ONEWAY_MSG__encore_libs_master_Ped_util_Box_Top_Box__init:
    {
      array_t* _enc__arg_agents = ((_enc__oneway_msg__encore_libs_master_Ped_util_Box_Top_Box__init_t*) _m)->f1;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      encore_trace_object((*_ctx), _enc__arg_agents, array_trace);
      /* Not tracing the future in a oneWay send */;
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      _enc__method__encore_libs_master_Ped_util_Box_Top_Box__init(_ctx, _this, _enc__arg_agents);
      break;
    }
    case _ENC__FUT_MSG__encore_libs_master_Ped_util_Box_Top_Box_move:
    {
      future_t* _fut = ((encore_fut_msg_t*) _m)->_fut;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      encore_trace_object((*_ctx), _fut, future_type.trace);
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      future_fulfil(_ctx, _fut, ((encore_arg_t) {.i = _enc__method__encore_libs_master_Ped_util_Box_Top_Box_move(_ctx, _this)}));
      break;
    }
    case _ENC__ONEWAY_MSG__encore_libs_master_Ped_util_Box_Top_Box_move:
    {
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      /* Not tracing the future in a oneWay send */;
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      _enc__method__encore_libs_master_Ped_util_Box_Top_Box_move(_ctx, _this);
      break;
    }
    case _ENC__FUT_MSG__encore_libs_master_Ped_util_Box_Top_Box_external_move:
    {
      future_t* _fut = ((encore_fut_msg_t*) _m)->_fut;
      _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t* _enc__arg_b = ((_enc__fut_msg__encore_libs_master_Ped_util_Box_Top_Box_external_move_t*) _m)->f1;
      tuple_t* _enc__arg_a = ((_enc__fut_msg__encore_libs_master_Ped_util_Box_Top_Box_external_move_t*) _m)->f2;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      encore_trace_object((*_ctx), _enc__arg_b, _enc__trace__encore_libs_master_Ped_util_Agent_passive_Agent);
      encore_trace_object((*_ctx), _enc__arg_a, tuple_trace);
      encore_trace_object((*_ctx), _fut, future_type.trace);
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      future_fulfil(_ctx, _fut, ((encore_arg_t) {.i = _enc__method__encore_libs_master_Ped_util_Box_Top_Box_external_move(_ctx, _this, _enc__arg_b, _enc__arg_a)}));
      break;
    }
    case _ENC__ONEWAY_MSG__encore_libs_master_Ped_util_Box_Top_Box_external_move:
    {
      _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t* _enc__arg_b = ((_enc__oneway_msg__encore_libs_master_Ped_util_Box_Top_Box_external_move_t*) _m)->f1;
      tuple_t* _enc__arg_a = ((_enc__oneway_msg__encore_libs_master_Ped_util_Box_Top_Box_external_move_t*) _m)->f2;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      encore_trace_object((*_ctx), _enc__arg_b, _enc__trace__encore_libs_master_Ped_util_Agent_passive_Agent);
      encore_trace_object((*_ctx), _enc__arg_a, tuple_trace);
      /* Not tracing the future in a oneWay send */;
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      _enc__method__encore_libs_master_Ped_util_Box_Top_Box_external_move(_ctx, _this, _enc__arg_b, _enc__arg_a);
      break;
    }
    case _ENC__FUT_MSG__encore_libs_master_Ped_util_Box_Top_Box_start:
    {
      future_t* _fut = ((encore_fut_msg_t*) _m)->_fut;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      encore_trace_object((*_ctx), _fut, future_type.trace);
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      future_fulfil(_ctx, _fut, ((encore_arg_t) {.p = _enc__method__encore_libs_master_Ped_util_Box_Top_Box_start(_ctx, _this)}));
      break;
    }
    case _ENC__ONEWAY_MSG__encore_libs_master_Ped_util_Box_Top_Box_start:
    {
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      /* Not tracing the future in a oneWay send */;
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      _enc__method__encore_libs_master_Ped_util_Box_Top_Box_start(_ctx, _this);
      break;
    }
    case _ENC__FUT_MSG__encore_libs_master_Ped_util_Box_Top_Box_max:
    {
      future_t* _fut = ((encore_fut_msg_t*) _m)->_fut;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      encore_trace_object((*_ctx), _fut, future_type.trace);
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      future_fulfil(_ctx, _fut, ((encore_arg_t) {.p = _enc__method__encore_libs_master_Ped_util_Box_Top_Box_max(_ctx, _this)}));
      break;
    }
    case _ENC__ONEWAY_MSG__encore_libs_master_Ped_util_Box_Top_Box_max:
    {
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      /* Not tracing the future in a oneWay send */;
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      _enc__method__encore_libs_master_Ped_util_Box_Top_Box_max(_ctx, _this);
      break;
    }
    case _ENC__FUT_MSG__encore_libs_master_Ped_util_Box_Top_Box_min:
    {
      future_t* _fut = ((encore_fut_msg_t*) _m)->_fut;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      encore_trace_object((*_ctx), _fut, future_type.trace);
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      future_fulfil(_ctx, _fut, ((encore_arg_t) {.p = _enc__method__encore_libs_master_Ped_util_Box_Top_Box_min(_ctx, _this)}));
      break;
    }
    case _ENC__ONEWAY_MSG__encore_libs_master_Ped_util_Box_Top_Box_min:
    {
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      /* Not tracing the future in a oneWay send */;
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      _enc__method__encore_libs_master_Ped_util_Box_Top_Box_min(_ctx, _this);
      break;
    }
    case _ENC__FUT_MSG__encore_libs_master_Ped_util_Box_Top_Box_space:
    {
      future_t* _fut = ((encore_fut_msg_t*) _m)->_fut;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      encore_trace_object((*_ctx), _fut, future_type.trace);
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      future_fulfil(_ctx, _fut, ((encore_arg_t) {.p = _enc__method__encore_libs_master_Ped_util_Box_Top_Box_space(_ctx, _this)}));
      break;
    }
    case _ENC__ONEWAY_MSG__encore_libs_master_Ped_util_Box_Top_Box_space:
    {
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      /* Not tracing the future in a oneWay send */;
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      _enc__method__encore_libs_master_Ped_util_Box_Top_Box_space(_ctx, _this);
      break;
    }
    case _ENC__FUT_MSG__encore_libs_master_Ped_util_Box_Top_Box_agents:
    {
      future_t* _fut = ((encore_fut_msg_t*) _m)->_fut;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      encore_trace_object((*_ctx), _fut, future_type.trace);
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      future_fulfil(_ctx, _fut, ((encore_arg_t) {.p = _enc__method__encore_libs_master_Ped_util_Box_Top_Box_agents(_ctx, _this)}));
      break;
    }
    case _ENC__ONEWAY_MSG__encore_libs_master_Ped_util_Box_Top_Box_agents:
    {
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      /* Not tracing the future in a oneWay send */;
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      _enc__method__encore_libs_master_Ped_util_Box_Top_Box_agents(_ctx, _this);
      break;
    }
    case _ENC__FUT_MSG__encore_libs_master_Ped_util_Box_Top_Box_done:
    {
      future_t* _fut = ((encore_fut_msg_t*) _m)->_fut;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      encore_trace_object((*_ctx), _fut, future_type.trace);
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      future_fulfil(_ctx, _fut, ((encore_arg_t) {.p = _enc__method__encore_libs_master_Ped_util_Box_Top_Box_done(_ctx, _this)}));
      break;
    }
    case _ENC__ONEWAY_MSG__encore_libs_master_Ped_util_Box_Top_Box_done:
    {
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      /* Not tracing the future in a oneWay send */;
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      _enc__method__encore_libs_master_Ped_util_Box_Top_Box_done(_ctx, _this);
      break;
    }
    case _ENC__FUT_MSG__encore_libs_master_Ped_util_Box_Top_Box_find_extreme:
    {
      future_t* _fut = ((encore_fut_msg_t*) _m)->_fut;
      array_t* _enc__arg_agents = ((_enc__fut_msg__encore_libs_master_Ped_util_Box_Top_Box_find_extreme_t*) _m)->f1;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      encore_trace_object((*_ctx), _enc__arg_agents, array_trace);
      encore_trace_object((*_ctx), _fut, future_type.trace);
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      future_fulfil(_ctx, _fut, ((encore_arg_t) {.p = _enc__method__encore_libs_master_Ped_util_Box_Top_Box_find_extreme(_ctx, _this, _enc__arg_agents)}));
      break;
    }
    case _ENC__ONEWAY_MSG__encore_libs_master_Ped_util_Box_Top_Box_find_extreme:
    {
      array_t* _enc__arg_agents = ((_enc__oneway_msg__encore_libs_master_Ped_util_Box_Top_Box_find_extreme_t*) _m)->f1;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      encore_trace_object((*_ctx), _enc__arg_agents, array_trace);
      /* Not tracing the future in a oneWay send */;
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      _enc__method__encore_libs_master_Ped_util_Box_Top_Box_find_extreme(_ctx, _this, _enc__arg_agents);
      break;
    }
    case _ENC__FUT_MSG__encore_libs_master_Ped_util_Box_Top_Box_extreme_check:
    {
      future_t* _fut = ((encore_fut_msg_t*) _m)->_fut;
      tuple_t* _enc__arg_a = ((_enc__fut_msg__encore_libs_master_Ped_util_Box_Top_Box_extreme_check_t*) _m)->f1;
      tuple_t* _enc__arg_b = ((_enc__fut_msg__encore_libs_master_Ped_util_Box_Top_Box_extreme_check_t*) _m)->f2;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      encore_trace_object((*_ctx), _enc__arg_a, tuple_trace);
      encore_trace_object((*_ctx), _enc__arg_b, tuple_trace);
      encore_trace_object((*_ctx), _fut, future_type.trace);
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      future_fulfil(_ctx, _fut, ((encore_arg_t) {.p = _enc__method__encore_libs_master_Ped_util_Box_Top_Box_extreme_check(_ctx, _this, _enc__arg_a, _enc__arg_b)}));
      break;
    }
    case _ENC__ONEWAY_MSG__encore_libs_master_Ped_util_Box_Top_Box_extreme_check:
    {
      tuple_t* _enc__arg_a = ((_enc__oneway_msg__encore_libs_master_Ped_util_Box_Top_Box_extreme_check_t*) _m)->f1;
      tuple_t* _enc__arg_b = ((_enc__oneway_msg__encore_libs_master_Ped_util_Box_Top_Box_extreme_check_t*) _m)->f2;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      encore_trace_object((*_ctx), _enc__arg_a, tuple_trace);
      encore_trace_object((*_ctx), _enc__arg_b, tuple_trace);
      /* Not tracing the future in a oneWay send */;
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      _enc__method__encore_libs_master_Ped_util_Box_Top_Box_extreme_check(_ctx, _this, _enc__arg_a, _enc__arg_b);
      break;
    }
    default:
    {
      printf("error, got invalid id: %zd", _m->id);
    }
  };
}


pony_type_t _enc__active__encore_libs_master_Ped_util_Box_Top_Box_type = {.id=_ENC__ID__encore_libs_master_Ped_util_Box_Top_Box, .size=sizeof(_enc__active__encore_libs_master_Ped_util_Box_Top_Box_t), .trace=_enc__trace__encore_libs_master_Ped_util_Box_Top_Box, .dispatch=_enc__dispatch__encore_libs_master_Ped_util_Box_Top_Box, .vtable=trait_method_selector};
