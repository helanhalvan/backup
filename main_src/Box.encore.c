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


struct _enc__active_Box_t
{
  encore_actor_t _enc__actor;
  tuple_t* _enc__field_max;
  tuple_t* _enc__field_min;
  _enc__active_Box_t* _enc__field_up;
  _enc__active_Box_t* _enc__field_down;
  _enc__active_Box_t* _enc__field_left;
  _enc__active_Box_t* _enc__field_right;
  _enc__passive_Agent_struct_t* _enc__field_agents;
};


void _enc__type_init_Box(_enc__active_Box_t* this, ... )
{
  va_list params;
  va_start(params, this);
  va_end(params);
}


void _enc__trace_Box(pony_ctx_t* _ctx_arg, void* p)
{
  pony_ctx_t** _ctx = (&(_ctx_arg));
  _enc__active_Box_t* _this = p;
  tuple_t* _enc__field_max = _this->_enc__field_max;
  pony_traceobject((*_ctx), _enc__field_max, tuple_trace);
  tuple_t* _enc__field_min = _this->_enc__field_min;
  pony_traceobject((*_ctx), _enc__field_min, tuple_trace);
  _enc__active_Box_t* _enc__field_up = _this->_enc__field_up;
  pony_traceactor((*_ctx), ((pony_actor_t*) _enc__field_up));
  _enc__active_Box_t* _enc__field_down = _this->_enc__field_down;
  pony_traceactor((*_ctx), ((pony_actor_t*) _enc__field_down));
  _enc__active_Box_t* _enc__field_left = _this->_enc__field_left;
  pony_traceactor((*_ctx), ((pony_actor_t*) _enc__field_left));
  _enc__active_Box_t* _enc__field_right = _this->_enc__field_right;
  pony_traceactor((*_ctx), ((pony_actor_t*) _enc__field_right));
  _enc__passive_Agent_struct_t* _enc__field_agents = _this->_enc__field_agents;
  pony_traceobject((*_ctx), _enc__field_agents, _enc__trace_Agent_struct);
}


_enc__active_Box_t* _enc__constructor_Box(pony_ctx_t** _ctx)
{
  _enc__active_Box_t* this = ((_enc__active_Box_t*) encore_create((*_ctx), (&(_enc__active_Box_type))));
  return this;
}


void* _enc__method_Box__init(pony_ctx_t** _ctx, _enc__active_Box_t* _this, tuple_t* _enc__arg_in_max, tuple_t* _enc__arg_in_min)
{
  /* this.agents = new Agent_struct(new [Agent](0)) */;
  _enc__passive_Agent_struct_t* _new_0 = _enc__constructor_Agent_struct(_ctx);
  int64_t _literal_2 = 0;
  array_t* _array_1 = array_mk(_ctx, _literal_2, (&(_enc__passive_Agent_type)));
  _enc__type_init_Agent_struct(_new_0);
  _enc__method_Agent_struct__init(_ctx, _new_0, _array_1);
  (*({ _this;}))._enc__field_agents = _new_0;
  /* this.max = in_max */;
  (*({ _this;}))._enc__field_max = _enc__arg_in_max;
  /* this.min = in_min */;
  (*({ _this;}))._enc__field_min = _enc__arg_in_min;
  return UNIT;
}


tuple_t* _enc__method_Box_min(pony_ctx_t** _ctx, _enc__active_Box_t* _this)
{
  /* this.min */;
  tuple_t* _fieldacc_0 = (*_this)._enc__field_min;
  return _fieldacc_0;
}


tuple_t* _enc__method_Box_max(pony_ctx_t** _ctx, _enc__active_Box_t* _this)
{
  /* this.max */;
  tuple_t* _fieldacc_0 = (*_this)._enc__field_max;
  return _fieldacc_0;
}


array_t* _enc__method_Box_agents(pony_ctx_t** _ctx, _enc__active_Box_t* _this)
{
  /* let a = this.agents.get_data() */;
  /* a = this.agents.get_data() */;
  _enc__passive_Agent_struct_t* _fieldacc_1 = (*_this)._enc__field_agents;
  check_receiver(_fieldacc_1, ".", "this.agents", "get_data", "\"main.enc\" (line 280, column 11)");
  array_t* _sync_method_call_0 = _enc__method_Agent_struct_get_data(_ctx, _fieldacc_1);
  array_t* _a_2 = _sync_method_call_0;
  /* let b = new [Agent](|a|) */;
  /* b = new [Agent](|a|) */;
  int64_t _size_4 = array_size(_a_2);
  array_t* _array_3 = array_mk(_ctx, _size_4, (&(_enc__passive_Agent_type)));
  array_t* _b_5 = _array_3;
  /* let i = 0 */;
  /* i = 0 */;
  int64_t _literal_6 = 0;
  int64_t _i_7 = _literal_6;
  /* for c in a
  {b[i] = c.copy();
   i = i + 1} */;
  void* _for_8;
  int64_t _start_11 = 0;
  int64_t _stop_12 = (array_size(_a_2) - 1);
  int64_t _src_step_14 = 1;
  int64_t _literal_15 = 1;
  int64_t _step_13 = (_literal_15 * _src_step_14);
  range_assert_step(_step_13);
  int64_t _index_9;
  if ((_step_13 > 0))
  {
    _index_9 = _start_11;
  }
  else
  {
    _index_9 = _stop_12;
  };
  while (((_index_9 >= _start_11) && (_index_9 <= _stop_12)))
  {
    _enc__passive_Agent_t* _c_10 = array_get(_a_2, _index_9).p;
    /* b[i] = c.copy() */;
    check_receiver(_c_10, ".", "c", "copy", "\"main.enc\" (line 284, column 14)");
    _enc__passive_Agent_t* _sync_method_call_16 = _enc__method_Agent_copy(_ctx, _c_10);
    array_set(_b_5, _i_7, ((encore_arg_t) {.p = _sync_method_call_16}));
    /* i = i + 1 */;
    int64_t _binop_18 = (({ _i_7;}) + ({int64_t _literal_17 = 1; _literal_17;}));
    _i_7 = _binop_18;
    _for_8 = UNIT;
    _index_9 = (_index_9 + _step_13);
  };
  /* b */;
  return _b_5;
}


int64_t _enc__method_Box_add(pony_ctx_t** _ctx, _enc__active_Box_t* _this, _enc__passive_Agent_t* _enc__arg_a)
{
  /* match (a.pos(), this.max, this.min) with
  ((x, y), 
   (xmax, ymax), 
   (xmin, 
    ymin)) when x > xmax or x < xmin or y > ymax or y < ymin => false
  _ => {this.agents.add([a]);
        true}
 */;
  tuple_t* _tuple_1 = tuple_mk(_ctx, 3);
  tuple_set_type(_tuple_1, 0, (&(tuple_type)));
  tuple_set_type(_tuple_1, 1, (&(tuple_type)));
  tuple_set_type(_tuple_1, 2, (&(tuple_type)));
  check_receiver(_enc__arg_a, ".", "a", "pos", "\"main.enc\" (line 293, column 12)");
  tuple_t* _sync_method_call_2 = _enc__method_Agent_pos(_ctx, _enc__arg_a);
  tuple_t* _fieldacc_3 = (*_this)._enc__field_max;
  tuple_t* _fieldacc_4 = (*_this)._enc__field_min;
  tuple_set(_tuple_1, 0, ((encore_arg_t) {.p = _sync_method_call_2}));
  tuple_set(_tuple_1, 1, ((encore_arg_t) {.p = _fieldacc_3}));
  tuple_set(_tuple_1, 2, ((encore_arg_t) {.p = _fieldacc_4}));
  int64_t _match_0;
  int64_t _x_5;
  int64_t _y_6;
  int64_t _xmax_7;
  int64_t _ymax_8;
  int64_t _xmin_9;
  int64_t _ymin_10;
  if ((({int64_t _tupleCheck_19;
         _tupleCheck_19 = 1;
         tuple_t* _tupleAccess_20 = tuple_get(_tuple_1, 0).p;
         int64_t _tupleCheck_21;
         _tupleCheck_21 = 1;
         int64_t _tupleAccess_22 = tuple_get(_tupleAccess_20, 0).i;
         int64_t _varBinding_23;
         _x_5 = _tupleAccess_22;
         _varBinding_23 = 1;
         _tupleCheck_21 = (_tupleCheck_21 && _varBinding_23);
         int64_t _tupleAccess_24 = tuple_get(_tupleAccess_20, 1).i;
         int64_t _varBinding_25;
         _y_6 = _tupleAccess_24;
         _varBinding_25 = 1;
         _tupleCheck_21 = (_tupleCheck_21 && _varBinding_25);
         _tupleCheck_19 = (_tupleCheck_19 && _tupleCheck_21);
         tuple_t* _tupleAccess_26 = tuple_get(_tuple_1, 1).p;
         int64_t _tupleCheck_27;
         _tupleCheck_27 = 1;
         int64_t _tupleAccess_28 = tuple_get(_tupleAccess_26, 0).i;
         int64_t _varBinding_29;
         _xmax_7 = _tupleAccess_28;
         _varBinding_29 = 1;
         _tupleCheck_27 = (_tupleCheck_27 && _varBinding_29);
         int64_t _tupleAccess_30 = tuple_get(_tupleAccess_26, 1).i;
         int64_t _varBinding_31;
         _ymax_8 = _tupleAccess_30;
         _varBinding_31 = 1;
         _tupleCheck_27 = (_tupleCheck_27 && _varBinding_31);
         _tupleCheck_19 = (_tupleCheck_19 && _tupleCheck_27);
         tuple_t* _tupleAccess_32 = tuple_get(_tuple_1, 2).p;
         int64_t _tupleCheck_33;
         _tupleCheck_33 = 1;
         int64_t _tupleAccess_34 = tuple_get(_tupleAccess_32, 0).i;
         int64_t _varBinding_35;
         _xmin_9 = _tupleAccess_34;
         _varBinding_35 = 1;
         _tupleCheck_33 = (_tupleCheck_33 && _varBinding_35);
         int64_t _tupleAccess_36 = tuple_get(_tupleAccess_32, 1).i;
         int64_t _varBinding_37;
         _ymin_10 = _tupleAccess_36;
         _varBinding_37 = 1;
         _tupleCheck_33 = (_tupleCheck_33 && _varBinding_37);
         _tupleCheck_19 = (_tupleCheck_19 && _tupleCheck_33); _tupleCheck_19;}) && ({int64_t _binop_44 = (({int64_t _binop_42 = (({int64_t _binop_40 = (({int64_t _binop_38 = (({ _x_5;}) > ({ _xmax_7;})); _binop_38;}) || ({int64_t _binop_39 = (({ _x_5;}) < ({ _xmin_9;})); _binop_39;})); _binop_40;}) || ({int64_t _binop_41 = (({ _y_6;}) > ({ _ymax_8;})); _binop_41;})); _binop_42;}) || ({int64_t _binop_43 = (({ _y_6;}) < ({ _ymin_10;})); _binop_43;})); _binop_44;})))
  {
    _match_0 = ((int64_t) ({int64_t _literal_11 = 0/*False*/; _literal_11;}));
  }
  else
  {
    tuple_t* ___12;
    if ((({int64_t _varBinding_17;
           ___12 = _tuple_1;
           _varBinding_17 = 1; _varBinding_17;}) && ({int64_t _literal_18 = 1/*True*/; _literal_18;})))
    {
      _match_0 = ((int64_t) ({/* this.agents.add([a]) */;
                              _enc__passive_Agent_struct_t* _fieldacc_14 = (*_this)._enc__field_agents;
                              check_receiver(_fieldacc_14, ".", "this.agents", "add", "\"main.enc\" (line 295, column 15)");
                              array_t* _array_15 = array_mk(_ctx, 1, (&(_enc__passive_Agent_type)));
                              array_set(_array_15, 0, ((encore_arg_t) {.p = _enc__arg_a}));
                              void* _sync_method_call_13 = _enc__method_Agent_struct_add(_ctx, _fieldacc_14, _array_15);
                              /* true */;
                              int64_t _literal_16 = 1/*True*/; _literal_16;}));
    }
    else
    {
      printf("*** Runtime error: No matching clause was found ***\n");
      exit(1);
    };
  };
  return _match_0;
}


int64_t _enc__method_Box_link(pony_ctx_t** _ctx, _enc__active_Box_t* _this, _enc__active_Box_t* _enc__arg_a)
{
  /* let c = a.max() */;
  /* c = a.max() */;
  check_receiver(_enc__arg_a, ".", "a", "max", "\"main.enc\" (line 300, column 11)");
  future_t* _fut_0 = _enc__method_Box_max_future(_ctx, _enc__arg_a);
  future_t* _c_1 = _fut_0;
  /* let d = a.min() */;
  /* d = a.min() */;
  check_receiver(_enc__arg_a, ".", "a", "min", "\"main.enc\" (line 301, column 11)");
  future_t* _fut_2 = _enc__method_Box_min_future(_ctx, _enc__arg_a);
  future_t* _d_3 = _fut_2;
  /* await c */;
  future_await(_ctx, _c_1);
  /* await d */;
  future_await(_ctx, _d_3);
  /* match (this.max, this.min, get c, get d) with
  ((x_max_1, y_max_1), 
   (x_min_1, y_min_1), 
   (x_max_2, y_max_2), 
   (x_min_2, y_min_2)) when x_max_1 + 1 == x_min_2 => {this.right = a;
                                                       print("right\n");
                                                       true}
  ((x_max_1, y_max_1), 
   (x_min_1, y_min_1), 
   (x_max_2, y_max_2), 
   (x_min_2, y_min_2)) when y_max_1 + 1 == y_min_2 => {this.up = a;
                                                       print("up\n");
                                                       true}
  ((x_max_1, y_max_1), 
   (x_min_1, y_min_1), 
   (x_max_2, y_max_2), 
   (x_min_2, y_min_2)) when x_max_2 + 1 == x_min_1 => {this.left = a;
                                                       print("left\n");
                                                       true}
  ((x_max_1, y_max_1), 
   (x_min_1, y_min_1), 
   (x_max_2, y_max_2), 
   (x_min_2, y_min_2)) when y_max_2 + 1 == y_min_1 => {this.down = a;
                                                       print("down\n");
                                                       true}
  _ => false
 */;
  tuple_t* _tuple_5 = tuple_mk(_ctx, 4);
  tuple_set_type(_tuple_5, 0, (&(tuple_type)));
  tuple_set_type(_tuple_5, 1, (&(tuple_type)));
  tuple_set_type(_tuple_5, 2, (&(tuple_type)));
  tuple_set_type(_tuple_5, 3, (&(tuple_type)));
  tuple_t* _fieldacc_6 = (*_this)._enc__field_max;
  tuple_t* _fieldacc_7 = (*_this)._enc__field_min;
  tuple_t* _tmp_8 = future_get_actor(_ctx, _c_1).p;
  tuple_t* _tmp_9 = future_get_actor(_ctx, _d_3).p;
  tuple_set(_tuple_5, 0, ((encore_arg_t) {.p = _fieldacc_6}));
  tuple_set(_tuple_5, 1, ((encore_arg_t) {.p = _fieldacc_7}));
  tuple_set(_tuple_5, 2, ((encore_arg_t) {.p = _tmp_8}));
  tuple_set(_tuple_5, 3, ((encore_arg_t) {.p = _tmp_9}));
  int64_t _match_4;
  int64_t _x_max_1_10;
  int64_t _y_max_1_11;
  int64_t _x_min_1_12;
  int64_t _y_min_1_13;
  int64_t _x_max_2_14;
  int64_t _y_max_2_15;
  int64_t _x_min_2_16;
  int64_t _y_min_2_17;
  if ((({int64_t _tupleCheck_142;
         _tupleCheck_142 = 1;
         tuple_t* _tupleAccess_143 = tuple_get(_tuple_5, 0).p;
         int64_t _tupleCheck_144;
         _tupleCheck_144 = 1;
         int64_t _tupleAccess_145 = tuple_get(_tupleAccess_143, 0).i;
         int64_t _varBinding_146;
         _x_max_1_10 = _tupleAccess_145;
         _varBinding_146 = 1;
         _tupleCheck_144 = (_tupleCheck_144 && _varBinding_146);
         int64_t _tupleAccess_147 = tuple_get(_tupleAccess_143, 1).i;
         int64_t _varBinding_148;
         _y_max_1_11 = _tupleAccess_147;
         _varBinding_148 = 1;
         _tupleCheck_144 = (_tupleCheck_144 && _varBinding_148);
         _tupleCheck_142 = (_tupleCheck_142 && _tupleCheck_144);
         tuple_t* _tupleAccess_149 = tuple_get(_tuple_5, 1).p;
         int64_t _tupleCheck_150;
         _tupleCheck_150 = 1;
         int64_t _tupleAccess_151 = tuple_get(_tupleAccess_149, 0).i;
         int64_t _varBinding_152;
         _x_min_1_12 = _tupleAccess_151;
         _varBinding_152 = 1;
         _tupleCheck_150 = (_tupleCheck_150 && _varBinding_152);
         int64_t _tupleAccess_153 = tuple_get(_tupleAccess_149, 1).i;
         int64_t _varBinding_154;
         _y_min_1_13 = _tupleAccess_153;
         _varBinding_154 = 1;
         _tupleCheck_150 = (_tupleCheck_150 && _varBinding_154);
         _tupleCheck_142 = (_tupleCheck_142 && _tupleCheck_150);
         tuple_t* _tupleAccess_155 = tuple_get(_tuple_5, 2).p;
         int64_t _tupleCheck_156;
         _tupleCheck_156 = 1;
         int64_t _tupleAccess_157 = tuple_get(_tupleAccess_155, 0).i;
         int64_t _varBinding_158;
         _x_max_2_14 = _tupleAccess_157;
         _varBinding_158 = 1;
         _tupleCheck_156 = (_tupleCheck_156 && _varBinding_158);
         int64_t _tupleAccess_159 = tuple_get(_tupleAccess_155, 1).i;
         int64_t _varBinding_160;
         _y_max_2_15 = _tupleAccess_159;
         _varBinding_160 = 1;
         _tupleCheck_156 = (_tupleCheck_156 && _varBinding_160);
         _tupleCheck_142 = (_tupleCheck_142 && _tupleCheck_156);
         tuple_t* _tupleAccess_161 = tuple_get(_tuple_5, 3).p;
         int64_t _tupleCheck_162;
         _tupleCheck_162 = 1;
         int64_t _tupleAccess_163 = tuple_get(_tupleAccess_161, 0).i;
         int64_t _varBinding_164;
         _x_min_2_16 = _tupleAccess_163;
         _varBinding_164 = 1;
         _tupleCheck_162 = (_tupleCheck_162 && _varBinding_164);
         int64_t _tupleAccess_165 = tuple_get(_tupleAccess_161, 1).i;
         int64_t _varBinding_166;
         _y_min_2_17 = _tupleAccess_165;
         _varBinding_166 = 1;
         _tupleCheck_162 = (_tupleCheck_162 && _varBinding_166);
         _tupleCheck_142 = (_tupleCheck_142 && _tupleCheck_162); _tupleCheck_142;}) && ({int64_t _binop_169 = (({int64_t _binop_168 = (({ _x_max_1_10;}) + ({int64_t _literal_167 = 1; _literal_167;})); _binop_168;}) == ({ _x_min_2_16;})); _binop_169;})))
  {
    _match_4 = ((int64_t) ({/* this.right = a */;
                            (*({ _this;}))._enc__field_right = _enc__arg_a;
                            /* print("right\n") */;
                            _enc__passive_String_t* _new_18 = _enc__constructor_String(_ctx);
                            char* _embed_19 = ({"right\n";});
                            _enc__type_init_String(_new_18);
                            _enc__method_String__init(_ctx, _new_18, _embed_19);
                            printf("%s", ((_enc__passive_String_t*) _new_18)->_enc__field_data);
                            /* true */;
                            int64_t _literal_20 = 1/*True*/; _literal_20;}));
  }
  else
  {
    int64_t _x_max_1_21;
    int64_t _y_max_1_22;
    int64_t _x_min_1_23;
    int64_t _y_min_1_24;
    int64_t _x_max_2_25;
    int64_t _y_max_2_26;
    int64_t _x_min_2_27;
    int64_t _y_min_2_28;
    if ((({int64_t _tupleCheck_114;
           _tupleCheck_114 = 1;
           tuple_t* _tupleAccess_115 = tuple_get(_tuple_5, 0).p;
           int64_t _tupleCheck_116;
           _tupleCheck_116 = 1;
           int64_t _tupleAccess_117 = tuple_get(_tupleAccess_115, 0).i;
           int64_t _varBinding_118;
           _x_max_1_21 = _tupleAccess_117;
           _varBinding_118 = 1;
           _tupleCheck_116 = (_tupleCheck_116 && _varBinding_118);
           int64_t _tupleAccess_119 = tuple_get(_tupleAccess_115, 1).i;
           int64_t _varBinding_120;
           _y_max_1_22 = _tupleAccess_119;
           _varBinding_120 = 1;
           _tupleCheck_116 = (_tupleCheck_116 && _varBinding_120);
           _tupleCheck_114 = (_tupleCheck_114 && _tupleCheck_116);
           tuple_t* _tupleAccess_121 = tuple_get(_tuple_5, 1).p;
           int64_t _tupleCheck_122;
           _tupleCheck_122 = 1;
           int64_t _tupleAccess_123 = tuple_get(_tupleAccess_121, 0).i;
           int64_t _varBinding_124;
           _x_min_1_23 = _tupleAccess_123;
           _varBinding_124 = 1;
           _tupleCheck_122 = (_tupleCheck_122 && _varBinding_124);
           int64_t _tupleAccess_125 = tuple_get(_tupleAccess_121, 1).i;
           int64_t _varBinding_126;
           _y_min_1_24 = _tupleAccess_125;
           _varBinding_126 = 1;
           _tupleCheck_122 = (_tupleCheck_122 && _varBinding_126);
           _tupleCheck_114 = (_tupleCheck_114 && _tupleCheck_122);
           tuple_t* _tupleAccess_127 = tuple_get(_tuple_5, 2).p;
           int64_t _tupleCheck_128;
           _tupleCheck_128 = 1;
           int64_t _tupleAccess_129 = tuple_get(_tupleAccess_127, 0).i;
           int64_t _varBinding_130;
           _x_max_2_25 = _tupleAccess_129;
           _varBinding_130 = 1;
           _tupleCheck_128 = (_tupleCheck_128 && _varBinding_130);
           int64_t _tupleAccess_131 = tuple_get(_tupleAccess_127, 1).i;
           int64_t _varBinding_132;
           _y_max_2_26 = _tupleAccess_131;
           _varBinding_132 = 1;
           _tupleCheck_128 = (_tupleCheck_128 && _varBinding_132);
           _tupleCheck_114 = (_tupleCheck_114 && _tupleCheck_128);
           tuple_t* _tupleAccess_133 = tuple_get(_tuple_5, 3).p;
           int64_t _tupleCheck_134;
           _tupleCheck_134 = 1;
           int64_t _tupleAccess_135 = tuple_get(_tupleAccess_133, 0).i;
           int64_t _varBinding_136;
           _x_min_2_27 = _tupleAccess_135;
           _varBinding_136 = 1;
           _tupleCheck_134 = (_tupleCheck_134 && _varBinding_136);
           int64_t _tupleAccess_137 = tuple_get(_tupleAccess_133, 1).i;
           int64_t _varBinding_138;
           _y_min_2_28 = _tupleAccess_137;
           _varBinding_138 = 1;
           _tupleCheck_134 = (_tupleCheck_134 && _varBinding_138);
           _tupleCheck_114 = (_tupleCheck_114 && _tupleCheck_134); _tupleCheck_114;}) && ({int64_t _binop_141 = (({int64_t _binop_140 = (({ _y_max_1_22;}) + ({int64_t _literal_139 = 1; _literal_139;})); _binop_140;}) == ({ _y_min_2_28;})); _binop_141;})))
    {
      _match_4 = ((int64_t) ({/* this.up = a */;
                              (*({ _this;}))._enc__field_up = _enc__arg_a;
                              /* print("up\n") */;
                              _enc__passive_String_t* _new_29 = _enc__constructor_String(_ctx);
                              char* _embed_30 = ({"up\n";});
                              _enc__type_init_String(_new_29);
                              _enc__method_String__init(_ctx, _new_29, _embed_30);
                              printf("%s", ((_enc__passive_String_t*) _new_29)->_enc__field_data);
                              /* true */;
                              int64_t _literal_31 = 1/*True*/; _literal_31;}));
    }
    else
    {
      int64_t _x_max_1_32;
      int64_t _y_max_1_33;
      int64_t _x_min_1_34;
      int64_t _y_min_1_35;
      int64_t _x_max_2_36;
      int64_t _y_max_2_37;
      int64_t _x_min_2_38;
      int64_t _y_min_2_39;
      if ((({int64_t _tupleCheck_86;
             _tupleCheck_86 = 1;
             tuple_t* _tupleAccess_87 = tuple_get(_tuple_5, 0).p;
             int64_t _tupleCheck_88;
             _tupleCheck_88 = 1;
             int64_t _tupleAccess_89 = tuple_get(_tupleAccess_87, 0).i;
             int64_t _varBinding_90;
             _x_max_1_32 = _tupleAccess_89;
             _varBinding_90 = 1;
             _tupleCheck_88 = (_tupleCheck_88 && _varBinding_90);
             int64_t _tupleAccess_91 = tuple_get(_tupleAccess_87, 1).i;
             int64_t _varBinding_92;
             _y_max_1_33 = _tupleAccess_91;
             _varBinding_92 = 1;
             _tupleCheck_88 = (_tupleCheck_88 && _varBinding_92);
             _tupleCheck_86 = (_tupleCheck_86 && _tupleCheck_88);
             tuple_t* _tupleAccess_93 = tuple_get(_tuple_5, 1).p;
             int64_t _tupleCheck_94;
             _tupleCheck_94 = 1;
             int64_t _tupleAccess_95 = tuple_get(_tupleAccess_93, 0).i;
             int64_t _varBinding_96;
             _x_min_1_34 = _tupleAccess_95;
             _varBinding_96 = 1;
             _tupleCheck_94 = (_tupleCheck_94 && _varBinding_96);
             int64_t _tupleAccess_97 = tuple_get(_tupleAccess_93, 1).i;
             int64_t _varBinding_98;
             _y_min_1_35 = _tupleAccess_97;
             _varBinding_98 = 1;
             _tupleCheck_94 = (_tupleCheck_94 && _varBinding_98);
             _tupleCheck_86 = (_tupleCheck_86 && _tupleCheck_94);
             tuple_t* _tupleAccess_99 = tuple_get(_tuple_5, 2).p;
             int64_t _tupleCheck_100;
             _tupleCheck_100 = 1;
             int64_t _tupleAccess_101 = tuple_get(_tupleAccess_99, 0).i;
             int64_t _varBinding_102;
             _x_max_2_36 = _tupleAccess_101;
             _varBinding_102 = 1;
             _tupleCheck_100 = (_tupleCheck_100 && _varBinding_102);
             int64_t _tupleAccess_103 = tuple_get(_tupleAccess_99, 1).i;
             int64_t _varBinding_104;
             _y_max_2_37 = _tupleAccess_103;
             _varBinding_104 = 1;
             _tupleCheck_100 = (_tupleCheck_100 && _varBinding_104);
             _tupleCheck_86 = (_tupleCheck_86 && _tupleCheck_100);
             tuple_t* _tupleAccess_105 = tuple_get(_tuple_5, 3).p;
             int64_t _tupleCheck_106;
             _tupleCheck_106 = 1;
             int64_t _tupleAccess_107 = tuple_get(_tupleAccess_105, 0).i;
             int64_t _varBinding_108;
             _x_min_2_38 = _tupleAccess_107;
             _varBinding_108 = 1;
             _tupleCheck_106 = (_tupleCheck_106 && _varBinding_108);
             int64_t _tupleAccess_109 = tuple_get(_tupleAccess_105, 1).i;
             int64_t _varBinding_110;
             _y_min_2_39 = _tupleAccess_109;
             _varBinding_110 = 1;
             _tupleCheck_106 = (_tupleCheck_106 && _varBinding_110);
             _tupleCheck_86 = (_tupleCheck_86 && _tupleCheck_106); _tupleCheck_86;}) && ({int64_t _binop_113 = (({int64_t _binop_112 = (({ _x_max_2_36;}) + ({int64_t _literal_111 = 1; _literal_111;})); _binop_112;}) == ({ _x_min_1_34;})); _binop_113;})))
      {
        _match_4 = ((int64_t) ({/* this.left = a */;
                                (*({ _this;}))._enc__field_left = _enc__arg_a;
                                /* print("left\n") */;
                                _enc__passive_String_t* _new_40 = _enc__constructor_String(_ctx);
                                char* _embed_41 = ({"left\n";});
                                _enc__type_init_String(_new_40);
                                _enc__method_String__init(_ctx, _new_40, _embed_41);
                                printf("%s", ((_enc__passive_String_t*) _new_40)->_enc__field_data);
                                /* true */;
                                int64_t _literal_42 = 1/*True*/; _literal_42;}));
      }
      else
      {
        int64_t _x_max_1_43;
        int64_t _y_max_1_44;
        int64_t _x_min_1_45;
        int64_t _y_min_1_46;
        int64_t _x_max_2_47;
        int64_t _y_max_2_48;
        int64_t _x_min_2_49;
        int64_t _y_min_2_50;
        if ((({int64_t _tupleCheck_58;
               _tupleCheck_58 = 1;
               tuple_t* _tupleAccess_59 = tuple_get(_tuple_5, 0).p;
               int64_t _tupleCheck_60;
               _tupleCheck_60 = 1;
               int64_t _tupleAccess_61 = tuple_get(_tupleAccess_59, 0).i;
               int64_t _varBinding_62;
               _x_max_1_43 = _tupleAccess_61;
               _varBinding_62 = 1;
               _tupleCheck_60 = (_tupleCheck_60 && _varBinding_62);
               int64_t _tupleAccess_63 = tuple_get(_tupleAccess_59, 1).i;
               int64_t _varBinding_64;
               _y_max_1_44 = _tupleAccess_63;
               _varBinding_64 = 1;
               _tupleCheck_60 = (_tupleCheck_60 && _varBinding_64);
               _tupleCheck_58 = (_tupleCheck_58 && _tupleCheck_60);
               tuple_t* _tupleAccess_65 = tuple_get(_tuple_5, 1).p;
               int64_t _tupleCheck_66;
               _tupleCheck_66 = 1;
               int64_t _tupleAccess_67 = tuple_get(_tupleAccess_65, 0).i;
               int64_t _varBinding_68;
               _x_min_1_45 = _tupleAccess_67;
               _varBinding_68 = 1;
               _tupleCheck_66 = (_tupleCheck_66 && _varBinding_68);
               int64_t _tupleAccess_69 = tuple_get(_tupleAccess_65, 1).i;
               int64_t _varBinding_70;
               _y_min_1_46 = _tupleAccess_69;
               _varBinding_70 = 1;
               _tupleCheck_66 = (_tupleCheck_66 && _varBinding_70);
               _tupleCheck_58 = (_tupleCheck_58 && _tupleCheck_66);
               tuple_t* _tupleAccess_71 = tuple_get(_tuple_5, 2).p;
               int64_t _tupleCheck_72;
               _tupleCheck_72 = 1;
               int64_t _tupleAccess_73 = tuple_get(_tupleAccess_71, 0).i;
               int64_t _varBinding_74;
               _x_max_2_47 = _tupleAccess_73;
               _varBinding_74 = 1;
               _tupleCheck_72 = (_tupleCheck_72 && _varBinding_74);
               int64_t _tupleAccess_75 = tuple_get(_tupleAccess_71, 1).i;
               int64_t _varBinding_76;
               _y_max_2_48 = _tupleAccess_75;
               _varBinding_76 = 1;
               _tupleCheck_72 = (_tupleCheck_72 && _varBinding_76);
               _tupleCheck_58 = (_tupleCheck_58 && _tupleCheck_72);
               tuple_t* _tupleAccess_77 = tuple_get(_tuple_5, 3).p;
               int64_t _tupleCheck_78;
               _tupleCheck_78 = 1;
               int64_t _tupleAccess_79 = tuple_get(_tupleAccess_77, 0).i;
               int64_t _varBinding_80;
               _x_min_2_49 = _tupleAccess_79;
               _varBinding_80 = 1;
               _tupleCheck_78 = (_tupleCheck_78 && _varBinding_80);
               int64_t _tupleAccess_81 = tuple_get(_tupleAccess_77, 1).i;
               int64_t _varBinding_82;
               _y_min_2_50 = _tupleAccess_81;
               _varBinding_82 = 1;
               _tupleCheck_78 = (_tupleCheck_78 && _varBinding_82);
               _tupleCheck_58 = (_tupleCheck_58 && _tupleCheck_78); _tupleCheck_58;}) && ({int64_t _binop_85 = (({int64_t _binop_84 = (({ _y_max_2_48;}) + ({int64_t _literal_83 = 1; _literal_83;})); _binop_84;}) == ({ _y_min_1_46;})); _binop_85;})))
        {
          _match_4 = ((int64_t) ({/* this.down = a */;
                                  (*({ _this;}))._enc__field_down = _enc__arg_a;
                                  /* print("down\n") */;
                                  _enc__passive_String_t* _new_51 = _enc__constructor_String(_ctx);
                                  char* _embed_52 = ({"down\n";});
                                  _enc__type_init_String(_new_51);
                                  _enc__method_String__init(_ctx, _new_51, _embed_52);
                                  printf("%s", ((_enc__passive_String_t*) _new_51)->_enc__field_data);
                                  /* true */;
                                  int64_t _literal_53 = 1/*True*/; _literal_53;}));
        }
        else
        {
          tuple_t* ___54;
          if ((({int64_t _varBinding_56;
                 ___54 = _tuple_5;
                 _varBinding_56 = 1; _varBinding_56;}) && ({int64_t _literal_57 = 1/*True*/; _literal_57;})))
          {
            _match_4 = ((int64_t) ({/* false */;
                                    int64_t _literal_55 = 0/*False*/; _literal_55;}));
          }
          else
          {
            printf("*** Runtime error: No matching clause was found ***\n");
            exit(1);
          };
        };
      };
    };
  };
  return _match_4;
}


int64_t _enc__method_Box_move(pony_ctx_t** _ctx, _enc__active_Box_t* _this)
{
  /* if this.agents.size() == 0 then
  false
else
  {for a in this.agents.get_data()
     {let desired = a.next();
      let i = 0;
      let nejbor = null : Fut bool;
      while i < |desired|
        {match (desired[i], this.max, this.min) with
           _ when this.agents.isin(desired[i]) => {i = i + 1;
                                                   embed void { continue; } end;
                                                   ()}
           ((x, y), 
            (x_max, y_max), 
            (x_min, 
             y_min)) when x <= x_max and x >= x_min and y <= y_max and y >= y_min => {a.move((x, 
                                                                                              y));
                                                                                      embed void { break; } end}
           ((x, y), 
            (x_max, y_max), 
            (x_min, 
             y_min)) when x > x_max and y < y_min or y > y_max or x < x_min and y < y_min or y > y_max => {print("this should never happen, agent way off");
                                                                                                           1 / 0;
                                                                                                           ()}
           ((x, y), 
            (x_max, y_max), 
            (x_min, 
             y_min)) when x > x_max => {nejbor = this.right.external_move(a.copy(), 
                                                                          (x, y));
                                        ()}
           ((x, y), 
            (x_max, y_max), 
            (x_min, 
             y_min)) when x < x_min => {nejbor = this.left.external_move(a.copy(), 
                                                                         (x, y));
                                        ()}
           ((x, y), 
            (x_max, y_max), 
            (x_min, 
             y_min)) when y > y_max => {nejbor = this.up.external_move(a.copy(), 
                                                                       (x, y));
                                        ()}
           ((x, y), 
            (x_max, y_max), 
            (x_min, 
             y_min)) when y < y_min => {nejbor = this.down.external_move(a.copy(), 
                                                                         (x, y));
                                        ()}
         ;
         print("external move {}\n", a);
         await nejbor;
         if get nejbor then
           {this.agents.remove(a);
            embed void { break; } end}
         else
           i = i + 1};
      if |a.next()| == 0 then
        {print("dropped an agent\n");
         this.agents.remove(a)}
      else
        ()};
   true} */;
  int64_t _ite_0;
  if (({int64_t _binop_4 = (({_enc__passive_Agent_struct_t* _fieldacc_2 = (*_this)._enc__field_agents;
                              check_receiver(_fieldacc_2, ".", "this.agents", "size", "\"main.enc\" (line 315, column 8)");
                              int64_t _sync_method_call_1 = _enc__method_Agent_struct_size(_ctx, _fieldacc_2); _sync_method_call_1;}) == ({int64_t _literal_3 = 0; _literal_3;})); _binop_4;}))
  {
    /* false */;
    int64_t _literal_5 = 0/*False*/;
    _ite_0 = ((int64_t) _literal_5);
  }
  else
  {
    /* for a in this.agents.get_data()
  {let desired = a.next();
   let i = 0;
   let nejbor = null : Fut bool;
   while i < |desired|
     {match (desired[i], this.max, this.min) with
        _ when this.agents.isin(desired[i]) => {i = i + 1;
                                                embed void { continue; } end;
                                                ()}
        ((x, y), 
         (x_max, y_max), 
         (x_min, 
          y_min)) when x <= x_max and x >= x_min and y <= y_max and y >= y_min => {a.move((x, 
                                                                                           y));
                                                                                   embed void { break; } end}
        ((x, y), 
         (x_max, y_max), 
         (x_min, 
          y_min)) when x > x_max and y < y_min or y > y_max or x < x_min and y < y_min or y > y_max => {print("this should never happen, agent way off");
                                                                                                        1 / 0;
                                                                                                        ()}
        ((x, y), 
         (x_max, y_max), 
         (x_min, 
          y_min)) when x > x_max => {nejbor = this.right.external_move(a.copy(), 
                                                                       (x, y));
                                     ()}
        ((x, y), 
         (x_max, y_max), 
         (x_min, 
          y_min)) when x < x_min => {nejbor = this.left.external_move(a.copy(), 
                                                                      (x, y));
                                     ()}
        ((x, y), 
         (x_max, y_max), 
         (x_min, 
          y_min)) when y > y_max => {nejbor = this.up.external_move(a.copy(), 
                                                                    (x, y));
                                     ()}
        ((x, y), 
         (x_max, y_max), 
         (x_min, 
          y_min)) when y < y_min => {nejbor = this.down.external_move(a.copy(), 
                                                                      (x, y));
                                     ()}
      ;
      print("external move {}\n", a);
      await nejbor;
      if get nejbor then
        {this.agents.remove(a);
         embed void { break; } end}
      else
        i = i + 1};
   if |a.next()| == 0 then
     {print("dropped an agent\n");
      this.agents.remove(a)}
   else
     ()} */;
    void* _for_6;
    _enc__passive_Agent_struct_t* _fieldacc_14 = (*_this)._enc__field_agents;
    check_receiver(_fieldacc_14, ".", "this.agents", "get_data", "\"main.enc\" (line 316, column 17)");
    array_t* _sync_method_call_13 = _enc__method_Agent_struct_get_data(_ctx, _fieldacc_14);
    int64_t _start_9 = 0;
    int64_t _stop_10 = (array_size(_sync_method_call_13) - 1);
    int64_t _src_step_12 = 1;
    int64_t _literal_15 = 1;
    int64_t _step_11 = (_literal_15 * _src_step_12);
    range_assert_step(_step_11);
    int64_t _index_7;
    if ((_step_11 > 0))
    {
      _index_7 = _start_9;
    }
    else
    {
      _index_7 = _stop_10;
    };
    while (((_index_7 >= _start_9) && (_index_7 <= _stop_10)))
    {
      _enc__passive_Agent_t* _a_8 = array_get(_sync_method_call_13, _index_7).p;
      /* let desired = a.next() */;
      /* desired = a.next() */;
      check_receiver(_a_8, ".", "a", "next", "\"main.enc\" (line 317, column 27)");
      array_t* _sync_method_call_16 = _enc__method_Agent_next(_ctx, _a_8);
      array_t* _desired_17 = _sync_method_call_16;
      /* let i = 0 */;
      /* i = 0 */;
      int64_t _literal_18 = 0;
      int64_t _i_19 = _literal_18;
      /* let nejbor = null : Fut bool */;
      /* nejbor = null : Fut bool */;
      future_t* _literal_20 = NULL;
      future_t* _cast_21 = ((future_t*) _literal_20);
      future_t* _nejbor_22 = _cast_21;
      /* while i < |desired|
  {match (desired[i], this.max, this.min) with
     _ when this.agents.isin(desired[i]) => {i = i + 1;
                                             embed void { continue; } end;
                                             ()}
     ((x, y), 
      (x_max, y_max), 
      (x_min, 
       y_min)) when x <= x_max and x >= x_min and y <= y_max and y >= y_min => {a.move((x, 
                                                                                        y));
                                                                                embed void { break; } end}
     ((x, y), 
      (x_max, y_max), 
      (x_min, 
       y_min)) when x > x_max and y < y_min or y > y_max or x < x_min and y < y_min or y > y_max => {print("this should never happen, agent way off");
                                                                                                     1 / 0;
                                                                                                     ()}
     ((x, y), 
      (x_max, y_max), 
      (x_min, 
       y_min)) when x > x_max => {nejbor = this.right.external_move(a.copy(), 
                                                                    (x, y));
                                  ()}
     ((x, y), 
      (x_max, y_max), 
      (x_min, 
       y_min)) when x < x_min => {nejbor = this.left.external_move(a.copy(), 
                                                                   (x, y));
                                  ()}
     ((x, y), 
      (x_max, y_max), 
      (x_min, 
       y_min)) when y > y_max => {nejbor = this.up.external_move(a.copy(), 
                                                                 (x, y));
                                  ()}
     ((x, y), 
      (x_max, y_max), 
      (x_min, 
       y_min)) when y < y_min => {nejbor = this.down.external_move(a.copy(), 
                                                                   (x, y));
                                  ()}
   ;
   print("external move {}\n", a);
   await nejbor;
   if get nejbor then
     {this.agents.remove(a);
      embed void { break; } end}
   else
     i = i + 1} */;
      void* _while_238;
      while (({int64_t _binop_24 = (({ _i_19;}) < ({int64_t _size_23 = array_size(_desired_17); _size_23;})); _binop_24;}))
      {
        /* match (desired[i], this.max, this.min) with
  _ when this.agents.isin(desired[i]) => {i = i + 1;
                                          embed void { continue; } end;
                                          ()}
  ((x, y), 
   (x_max, y_max), 
   (x_min, 
    y_min)) when x <= x_max and x >= x_min and y <= y_max and y >= y_min => {a.move((x, 
                                                                                     y));
                                                                             embed void { break; } end}
  ((x, y), 
   (x_max, y_max), 
   (x_min, 
    y_min)) when x > x_max and y < y_min or y > y_max or x < x_min and y < y_min or y > y_max => {print("this should never happen, agent way off");
                                                                                                  1 / 0;
                                                                                                  ()}
  ((x, y), 
   (x_max, y_max), 
   (x_min, 
    y_min)) when x > x_max => {nejbor = this.right.external_move(a.copy(), 
                                                                 (x, y));
                               ()}
  ((x, y), 
   (x_max, y_max), 
   (x_min, 
    y_min)) when x < x_min => {nejbor = this.left.external_move(a.copy(), 
                                                                (x, y));
                               ()}
  ((x, y), 
   (x_max, y_max), 
   (x_min, 
    y_min)) when y > y_max => {nejbor = this.up.external_move(a.copy(), 
                                                              (x, y));
                               ()}
  ((x, y), 
   (x_max, y_max), 
   (x_min, 
    y_min)) when y < y_min => {nejbor = this.down.external_move(a.copy(), 
                                                                (x, y));
                               ()}
 */;
        tuple_t* _tuple_26 = tuple_mk(_ctx, 3);
        tuple_set_type(_tuple_26, 0, (&(tuple_type)));
        tuple_set_type(_tuple_26, 1, (&(tuple_type)));
        tuple_set_type(_tuple_26, 2, (&(tuple_type)));
        tuple_t* _access_27 = array_get(_desired_17, _i_19).p;
        tuple_t* _fieldacc_28 = (*_this)._enc__field_max;
        tuple_t* _fieldacc_29 = (*_this)._enc__field_min;
        tuple_set(_tuple_26, 0, ((encore_arg_t) {.p = _access_27}));
        tuple_set(_tuple_26, 1, ((encore_arg_t) {.p = _fieldacc_28}));
        tuple_set(_tuple_26, 2, ((encore_arg_t) {.p = _fieldacc_29}));
        void* _match_25;
        tuple_t* ___30;
        if ((({int64_t _varBinding_228;
               ___30 = _tuple_26;
               _varBinding_228 = 1; _varBinding_228;}) && ({_enc__passive_Agent_struct_t* _fieldacc_230 = (*_this)._enc__field_agents;
                                                            check_receiver(_fieldacc_230, ".", "this.agents", "isin", "\"main.enc\" (line 323, column 28)");
                                                            tuple_t* _access_231 = array_get(_desired_17, _i_19).p;
                                                            int64_t _sync_method_call_229 = _enc__method_Agent_struct_isin(_ctx, _fieldacc_230, _access_231); _sync_method_call_229;})))
        {
          _match_25 = ((void*) ({/* i = i + 1 */;
                                 int64_t _binop_32 = (({ _i_19;}) + ({int64_t _literal_31 = 1; _literal_31;}));
                                 _i_19 = _binop_32;
                                 /* embed void { continue; } end */;
                                 ({{ continue; }});
                                 /* () */;
                                 UNIT; UNIT;}));
        }
        else
        {
          int64_t _x_33;
          int64_t _y_34;
          int64_t _x_max_35;
          int64_t _y_max_36;
          int64_t _x_min_37;
          int64_t _y_min_38;
          if ((({int64_t _tupleCheck_202;
                 _tupleCheck_202 = 1;
                 tuple_t* _tupleAccess_203 = tuple_get(_tuple_26, 0).p;
                 int64_t _tupleCheck_204;
                 _tupleCheck_204 = 1;
                 int64_t _tupleAccess_205 = tuple_get(_tupleAccess_203, 0).i;
                 int64_t _varBinding_206;
                 _x_33 = _tupleAccess_205;
                 _varBinding_206 = 1;
                 _tupleCheck_204 = (_tupleCheck_204 && _varBinding_206);
                 int64_t _tupleAccess_207 = tuple_get(_tupleAccess_203, 1).i;
                 int64_t _varBinding_208;
                 _y_34 = _tupleAccess_207;
                 _varBinding_208 = 1;
                 _tupleCheck_204 = (_tupleCheck_204 && _varBinding_208);
                 _tupleCheck_202 = (_tupleCheck_202 && _tupleCheck_204);
                 tuple_t* _tupleAccess_209 = tuple_get(_tuple_26, 1).p;
                 int64_t _tupleCheck_210;
                 _tupleCheck_210 = 1;
                 int64_t _tupleAccess_211 = tuple_get(_tupleAccess_209, 0).i;
                 int64_t _varBinding_212;
                 _x_max_35 = _tupleAccess_211;
                 _varBinding_212 = 1;
                 _tupleCheck_210 = (_tupleCheck_210 && _varBinding_212);
                 int64_t _tupleAccess_213 = tuple_get(_tupleAccess_209, 1).i;
                 int64_t _varBinding_214;
                 _y_max_36 = _tupleAccess_213;
                 _varBinding_214 = 1;
                 _tupleCheck_210 = (_tupleCheck_210 && _varBinding_214);
                 _tupleCheck_202 = (_tupleCheck_202 && _tupleCheck_210);
                 tuple_t* _tupleAccess_215 = tuple_get(_tuple_26, 2).p;
                 int64_t _tupleCheck_216;
                 _tupleCheck_216 = 1;
                 int64_t _tupleAccess_217 = tuple_get(_tupleAccess_215, 0).i;
                 int64_t _varBinding_218;
                 _x_min_37 = _tupleAccess_217;
                 _varBinding_218 = 1;
                 _tupleCheck_216 = (_tupleCheck_216 && _varBinding_218);
                 int64_t _tupleAccess_219 = tuple_get(_tupleAccess_215, 1).i;
                 int64_t _varBinding_220;
                 _y_min_38 = _tupleAccess_219;
                 _varBinding_220 = 1;
                 _tupleCheck_216 = (_tupleCheck_216 && _varBinding_220);
                 _tupleCheck_202 = (_tupleCheck_202 && _tupleCheck_216); _tupleCheck_202;}) && ({int64_t _binop_227 = (({int64_t _binop_225 = (({int64_t _binop_223 = (({int64_t _binop_221 = (({ _x_33;}) <= ({ _x_max_35;})); _binop_221;}) && ({int64_t _binop_222 = (({ _x_33;}) >= ({ _x_min_37;})); _binop_222;})); _binop_223;}) && ({int64_t _binop_224 = (({ _y_34;}) <= ({ _y_max_36;})); _binop_224;})); _binop_225;}) && ({int64_t _binop_226 = (({ _y_34;}) >= ({ _y_min_38;})); _binop_226;})); _binop_227;})))
          {
            _match_25 = ((void*) ({/* a.move((x, y)) */;
                                   check_receiver(_a_8, ".", "a", "move", "\"main.enc\" (line 325, column 117)");
                                   tuple_t* _tuple_40 = tuple_mk(_ctx, 2);
                                   tuple_set_type(_tuple_40, 0, ENCORE_PRIMITIVE);
                                   tuple_set_type(_tuple_40, 1, ENCORE_PRIMITIVE);
                                   tuple_set(_tuple_40, 0, ((encore_arg_t) {.i = _x_33}));
                                   tuple_set(_tuple_40, 1, ((encore_arg_t) {.i = _y_34}));
                                   void* _sync_method_call_39 = _enc__method_Agent_move(_ctx, _a_8, _tuple_40);
                                   /* embed void { break; } end */;
                                   ({{ break; }}); UNIT;}));
          }
          else
          {
            int64_t _x_41;
            int64_t _y_42;
            int64_t _x_max_43;
            int64_t _y_max_44;
            int64_t _x_min_45;
            int64_t _y_min_46;
            if ((({int64_t _tupleCheck_172;
                   _tupleCheck_172 = 1;
                   tuple_t* _tupleAccess_173 = tuple_get(_tuple_26, 0).p;
                   int64_t _tupleCheck_174;
                   _tupleCheck_174 = 1;
                   int64_t _tupleAccess_175 = tuple_get(_tupleAccess_173, 0).i;
                   int64_t _varBinding_176;
                   _x_41 = _tupleAccess_175;
                   _varBinding_176 = 1;
                   _tupleCheck_174 = (_tupleCheck_174 && _varBinding_176);
                   int64_t _tupleAccess_177 = tuple_get(_tupleAccess_173, 1).i;
                   int64_t _varBinding_178;
                   _y_42 = _tupleAccess_177;
                   _varBinding_178 = 1;
                   _tupleCheck_174 = (_tupleCheck_174 && _varBinding_178);
                   _tupleCheck_172 = (_tupleCheck_172 && _tupleCheck_174);
                   tuple_t* _tupleAccess_179 = tuple_get(_tuple_26, 1).p;
                   int64_t _tupleCheck_180;
                   _tupleCheck_180 = 1;
                   int64_t _tupleAccess_181 = tuple_get(_tupleAccess_179, 0).i;
                   int64_t _varBinding_182;
                   _x_max_43 = _tupleAccess_181;
                   _varBinding_182 = 1;
                   _tupleCheck_180 = (_tupleCheck_180 && _varBinding_182);
                   int64_t _tupleAccess_183 = tuple_get(_tupleAccess_179, 1).i;
                   int64_t _varBinding_184;
                   _y_max_44 = _tupleAccess_183;
                   _varBinding_184 = 1;
                   _tupleCheck_180 = (_tupleCheck_180 && _varBinding_184);
                   _tupleCheck_172 = (_tupleCheck_172 && _tupleCheck_180);
                   tuple_t* _tupleAccess_185 = tuple_get(_tuple_26, 2).p;
                   int64_t _tupleCheck_186;
                   _tupleCheck_186 = 1;
                   int64_t _tupleAccess_187 = tuple_get(_tupleAccess_185, 0).i;
                   int64_t _varBinding_188;
                   _x_min_45 = _tupleAccess_187;
                   _varBinding_188 = 1;
                   _tupleCheck_186 = (_tupleCheck_186 && _varBinding_188);
                   int64_t _tupleAccess_189 = tuple_get(_tupleAccess_185, 1).i;
                   int64_t _varBinding_190;
                   _y_min_46 = _tupleAccess_189;
                   _varBinding_190 = 1;
                   _tupleCheck_186 = (_tupleCheck_186 && _varBinding_190);
                   _tupleCheck_172 = (_tupleCheck_172 && _tupleCheck_186); _tupleCheck_172;}) && ({int64_t _binop_201 = (({int64_t _binop_195 = (({int64_t _binop_191 = (({ _x_41;}) > ({ _x_max_43;})); _binop_191;}) && ({int64_t _binop_194 = (({int64_t _binop_192 = (({ _y_42;}) < ({ _y_min_46;})); _binop_192;}) || ({int64_t _binop_193 = (({ _y_42;}) > ({ _y_max_44;})); _binop_193;})); _binop_194;})); _binop_195;}) || ({int64_t _binop_200 = (({int64_t _binop_196 = (({ _x_41;}) < ({ _x_min_45;})); _binop_196;}) && ({int64_t _binop_199 = (({int64_t _binop_197 = (({ _y_42;}) < ({ _y_min_46;})); _binop_197;}) || ({int64_t _binop_198 = (({ _y_42;}) > ({ _y_max_44;})); _binop_198;})); _binop_199;})); _binop_200;})); _binop_201;})))
            {
              _match_25 = ((void*) ({/* print("this should never happen, agent way off") */;
                                     _enc__passive_String_t* _new_47 = _enc__constructor_String(_ctx);
                                     char* _embed_48 = ({"this should never happen, agent way off";});
                                     _enc__type_init_String(_new_47);
                                     _enc__method_String__init(_ctx, _new_47, _embed_48);
                                     printf("%s", ((_enc__passive_String_t*) _new_47)->_enc__field_data);
                                     /* 1 / 0 */;
                                     int64_t _binop_51 = (({int64_t _literal_49 = 1; _literal_49;}) / ({int64_t _literal_50 = 0; _literal_50;}));
                                     /* () */;
                                     UNIT; UNIT;}));
            }
            else
            {
              int64_t _x_52;
              int64_t _y_53;
              int64_t _x_max_54;
              int64_t _y_max_55;
              int64_t _x_min_56;
              int64_t _y_min_57;
              if ((({int64_t _tupleCheck_152;
                     _tupleCheck_152 = 1;
                     tuple_t* _tupleAccess_153 = tuple_get(_tuple_26, 0).p;
                     int64_t _tupleCheck_154;
                     _tupleCheck_154 = 1;
                     int64_t _tupleAccess_155 = tuple_get(_tupleAccess_153, 0).i;
                     int64_t _varBinding_156;
                     _x_52 = _tupleAccess_155;
                     _varBinding_156 = 1;
                     _tupleCheck_154 = (_tupleCheck_154 && _varBinding_156);
                     int64_t _tupleAccess_157 = tuple_get(_tupleAccess_153, 1).i;
                     int64_t _varBinding_158;
                     _y_53 = _tupleAccess_157;
                     _varBinding_158 = 1;
                     _tupleCheck_154 = (_tupleCheck_154 && _varBinding_158);
                     _tupleCheck_152 = (_tupleCheck_152 && _tupleCheck_154);
                     tuple_t* _tupleAccess_159 = tuple_get(_tuple_26, 1).p;
                     int64_t _tupleCheck_160;
                     _tupleCheck_160 = 1;
                     int64_t _tupleAccess_161 = tuple_get(_tupleAccess_159, 0).i;
                     int64_t _varBinding_162;
                     _x_max_54 = _tupleAccess_161;
                     _varBinding_162 = 1;
                     _tupleCheck_160 = (_tupleCheck_160 && _varBinding_162);
                     int64_t _tupleAccess_163 = tuple_get(_tupleAccess_159, 1).i;
                     int64_t _varBinding_164;
                     _y_max_55 = _tupleAccess_163;
                     _varBinding_164 = 1;
                     _tupleCheck_160 = (_tupleCheck_160 && _varBinding_164);
                     _tupleCheck_152 = (_tupleCheck_152 && _tupleCheck_160);
                     tuple_t* _tupleAccess_165 = tuple_get(_tuple_26, 2).p;
                     int64_t _tupleCheck_166;
                     _tupleCheck_166 = 1;
                     int64_t _tupleAccess_167 = tuple_get(_tupleAccess_165, 0).i;
                     int64_t _varBinding_168;
                     _x_min_56 = _tupleAccess_167;
                     _varBinding_168 = 1;
                     _tupleCheck_166 = (_tupleCheck_166 && _varBinding_168);
                     int64_t _tupleAccess_169 = tuple_get(_tupleAccess_165, 1).i;
                     int64_t _varBinding_170;
                     _y_min_57 = _tupleAccess_169;
                     _varBinding_170 = 1;
                     _tupleCheck_166 = (_tupleCheck_166 && _varBinding_170);
                     _tupleCheck_152 = (_tupleCheck_152 && _tupleCheck_166); _tupleCheck_152;}) && ({int64_t _binop_171 = (({ _x_52;}) > ({ _x_max_54;})); _binop_171;})))
              {
                _match_25 = ((void*) ({/* nejbor = this.right.external_move(a.copy(), (x, y)) */;
                                       _enc__active_Box_t* _fieldacc_59 = (*_this)._enc__field_right;
                                       check_receiver(_fieldacc_59, ".", "this.right", "external_move", "\"main.enc\" (line 331, column 84)");
                                       check_receiver(_a_8, ".", "a", "copy", "\"main.enc\" (line 331, column 109)");
                                       _enc__passive_Agent_t* _sync_method_call_60 = _enc__method_Agent_copy(_ctx, _a_8);
                                       tuple_t* _tuple_61 = tuple_mk(_ctx, 2);
                                       tuple_set_type(_tuple_61, 0, ENCORE_PRIMITIVE);
                                       tuple_set_type(_tuple_61, 1, ENCORE_PRIMITIVE);
                                       tuple_set(_tuple_61, 0, ((encore_arg_t) {.i = _x_52}));
                                       tuple_set(_tuple_61, 1, ((encore_arg_t) {.i = _y_53}));
                                       future_t* _fut_58 = _enc__method_Box_external_move_future(_ctx, _fieldacc_59, _sync_method_call_60, _tuple_61);
                                       _nejbor_22 = _fut_58;
                                       /* () */;
                                       UNIT; UNIT;}));
              }
              else
              {
                int64_t _x_62;
                int64_t _y_63;
                int64_t _x_max_64;
                int64_t _y_max_65;
                int64_t _x_min_66;
                int64_t _y_min_67;
                if ((({int64_t _tupleCheck_132;
                       _tupleCheck_132 = 1;
                       tuple_t* _tupleAccess_133 = tuple_get(_tuple_26, 0).p;
                       int64_t _tupleCheck_134;
                       _tupleCheck_134 = 1;
                       int64_t _tupleAccess_135 = tuple_get(_tupleAccess_133, 0).i;
                       int64_t _varBinding_136;
                       _x_62 = _tupleAccess_135;
                       _varBinding_136 = 1;
                       _tupleCheck_134 = (_tupleCheck_134 && _varBinding_136);
                       int64_t _tupleAccess_137 = tuple_get(_tupleAccess_133, 1).i;
                       int64_t _varBinding_138;
                       _y_63 = _tupleAccess_137;
                       _varBinding_138 = 1;
                       _tupleCheck_134 = (_tupleCheck_134 && _varBinding_138);
                       _tupleCheck_132 = (_tupleCheck_132 && _tupleCheck_134);
                       tuple_t* _tupleAccess_139 = tuple_get(_tuple_26, 1).p;
                       int64_t _tupleCheck_140;
                       _tupleCheck_140 = 1;
                       int64_t _tupleAccess_141 = tuple_get(_tupleAccess_139, 0).i;
                       int64_t _varBinding_142;
                       _x_max_64 = _tupleAccess_141;
                       _varBinding_142 = 1;
                       _tupleCheck_140 = (_tupleCheck_140 && _varBinding_142);
                       int64_t _tupleAccess_143 = tuple_get(_tupleAccess_139, 1).i;
                       int64_t _varBinding_144;
                       _y_max_65 = _tupleAccess_143;
                       _varBinding_144 = 1;
                       _tupleCheck_140 = (_tupleCheck_140 && _varBinding_144);
                       _tupleCheck_132 = (_tupleCheck_132 && _tupleCheck_140);
                       tuple_t* _tupleAccess_145 = tuple_get(_tuple_26, 2).p;
                       int64_t _tupleCheck_146;
                       _tupleCheck_146 = 1;
                       int64_t _tupleAccess_147 = tuple_get(_tupleAccess_145, 0).i;
                       int64_t _varBinding_148;
                       _x_min_66 = _tupleAccess_147;
                       _varBinding_148 = 1;
                       _tupleCheck_146 = (_tupleCheck_146 && _varBinding_148);
                       int64_t _tupleAccess_149 = tuple_get(_tupleAccess_145, 1).i;
                       int64_t _varBinding_150;
                       _y_min_67 = _tupleAccess_149;
                       _varBinding_150 = 1;
                       _tupleCheck_146 = (_tupleCheck_146 && _varBinding_150);
                       _tupleCheck_132 = (_tupleCheck_132 && _tupleCheck_146); _tupleCheck_132;}) && ({int64_t _binop_151 = (({ _x_62;}) < ({ _x_min_66;})); _binop_151;})))
                {
                  _match_25 = ((void*) ({/* nejbor = this.left.external_move(a.copy(), (x, y)) */;
                                         _enc__active_Box_t* _fieldacc_69 = (*_this)._enc__field_left;
                                         check_receiver(_fieldacc_69, ".", "this.left", "external_move", "\"main.enc\" (line 332, column 84)");
                                         check_receiver(_a_8, ".", "a", "copy", "\"main.enc\" (line 332, column 108)");
                                         _enc__passive_Agent_t* _sync_method_call_70 = _enc__method_Agent_copy(_ctx, _a_8);
                                         tuple_t* _tuple_71 = tuple_mk(_ctx, 2);
                                         tuple_set_type(_tuple_71, 0, ENCORE_PRIMITIVE);
                                         tuple_set_type(_tuple_71, 1, ENCORE_PRIMITIVE);
                                         tuple_set(_tuple_71, 0, ((encore_arg_t) {.i = _x_62}));
                                         tuple_set(_tuple_71, 1, ((encore_arg_t) {.i = _y_63}));
                                         future_t* _fut_68 = _enc__method_Box_external_move_future(_ctx, _fieldacc_69, _sync_method_call_70, _tuple_71);
                                         _nejbor_22 = _fut_68;
                                         /* () */;
                                         UNIT; UNIT;}));
                }
                else
                {
                  int64_t _x_72;
                  int64_t _y_73;
                  int64_t _x_max_74;
                  int64_t _y_max_75;
                  int64_t _x_min_76;
                  int64_t _y_min_77;
                  if ((({int64_t _tupleCheck_112;
                         _tupleCheck_112 = 1;
                         tuple_t* _tupleAccess_113 = tuple_get(_tuple_26, 0).p;
                         int64_t _tupleCheck_114;
                         _tupleCheck_114 = 1;
                         int64_t _tupleAccess_115 = tuple_get(_tupleAccess_113, 0).i;
                         int64_t _varBinding_116;
                         _x_72 = _tupleAccess_115;
                         _varBinding_116 = 1;
                         _tupleCheck_114 = (_tupleCheck_114 && _varBinding_116);
                         int64_t _tupleAccess_117 = tuple_get(_tupleAccess_113, 1).i;
                         int64_t _varBinding_118;
                         _y_73 = _tupleAccess_117;
                         _varBinding_118 = 1;
                         _tupleCheck_114 = (_tupleCheck_114 && _varBinding_118);
                         _tupleCheck_112 = (_tupleCheck_112 && _tupleCheck_114);
                         tuple_t* _tupleAccess_119 = tuple_get(_tuple_26, 1).p;
                         int64_t _tupleCheck_120;
                         _tupleCheck_120 = 1;
                         int64_t _tupleAccess_121 = tuple_get(_tupleAccess_119, 0).i;
                         int64_t _varBinding_122;
                         _x_max_74 = _tupleAccess_121;
                         _varBinding_122 = 1;
                         _tupleCheck_120 = (_tupleCheck_120 && _varBinding_122);
                         int64_t _tupleAccess_123 = tuple_get(_tupleAccess_119, 1).i;
                         int64_t _varBinding_124;
                         _y_max_75 = _tupleAccess_123;
                         _varBinding_124 = 1;
                         _tupleCheck_120 = (_tupleCheck_120 && _varBinding_124);
                         _tupleCheck_112 = (_tupleCheck_112 && _tupleCheck_120);
                         tuple_t* _tupleAccess_125 = tuple_get(_tuple_26, 2).p;
                         int64_t _tupleCheck_126;
                         _tupleCheck_126 = 1;
                         int64_t _tupleAccess_127 = tuple_get(_tupleAccess_125, 0).i;
                         int64_t _varBinding_128;
                         _x_min_76 = _tupleAccess_127;
                         _varBinding_128 = 1;
                         _tupleCheck_126 = (_tupleCheck_126 && _varBinding_128);
                         int64_t _tupleAccess_129 = tuple_get(_tupleAccess_125, 1).i;
                         int64_t _varBinding_130;
                         _y_min_77 = _tupleAccess_129;
                         _varBinding_130 = 1;
                         _tupleCheck_126 = (_tupleCheck_126 && _varBinding_130);
                         _tupleCheck_112 = (_tupleCheck_112 && _tupleCheck_126); _tupleCheck_112;}) && ({int64_t _binop_131 = (({ _y_73;}) > ({ _y_max_75;})); _binop_131;})))
                  {
                    _match_25 = ((void*) ({/* nejbor = this.up.external_move(a.copy(), (x, y)) */;
                                           _enc__active_Box_t* _fieldacc_79 = (*_this)._enc__field_up;
                                           check_receiver(_fieldacc_79, ".", "this.up", "external_move", "\"main.enc\" (line 333, column 84)");
                                           check_receiver(_a_8, ".", "a", "copy", "\"main.enc\" (line 333, column 106)");
                                           _enc__passive_Agent_t* _sync_method_call_80 = _enc__method_Agent_copy(_ctx, _a_8);
                                           tuple_t* _tuple_81 = tuple_mk(_ctx, 2);
                                           tuple_set_type(_tuple_81, 0, ENCORE_PRIMITIVE);
                                           tuple_set_type(_tuple_81, 1, ENCORE_PRIMITIVE);
                                           tuple_set(_tuple_81, 0, ((encore_arg_t) {.i = _x_72}));
                                           tuple_set(_tuple_81, 1, ((encore_arg_t) {.i = _y_73}));
                                           future_t* _fut_78 = _enc__method_Box_external_move_future(_ctx, _fieldacc_79, _sync_method_call_80, _tuple_81);
                                           _nejbor_22 = _fut_78;
                                           /* () */;
                                           UNIT; UNIT;}));
                  }
                  else
                  {
                    int64_t _x_82;
                    int64_t _y_83;
                    int64_t _x_max_84;
                    int64_t _y_max_85;
                    int64_t _x_min_86;
                    int64_t _y_min_87;
                    if ((({int64_t _tupleCheck_92;
                           _tupleCheck_92 = 1;
                           tuple_t* _tupleAccess_93 = tuple_get(_tuple_26, 0).p;
                           int64_t _tupleCheck_94;
                           _tupleCheck_94 = 1;
                           int64_t _tupleAccess_95 = tuple_get(_tupleAccess_93, 0).i;
                           int64_t _varBinding_96;
                           _x_82 = _tupleAccess_95;
                           _varBinding_96 = 1;
                           _tupleCheck_94 = (_tupleCheck_94 && _varBinding_96);
                           int64_t _tupleAccess_97 = tuple_get(_tupleAccess_93, 1).i;
                           int64_t _varBinding_98;
                           _y_83 = _tupleAccess_97;
                           _varBinding_98 = 1;
                           _tupleCheck_94 = (_tupleCheck_94 && _varBinding_98);
                           _tupleCheck_92 = (_tupleCheck_92 && _tupleCheck_94);
                           tuple_t* _tupleAccess_99 = tuple_get(_tuple_26, 1).p;
                           int64_t _tupleCheck_100;
                           _tupleCheck_100 = 1;
                           int64_t _tupleAccess_101 = tuple_get(_tupleAccess_99, 0).i;
                           int64_t _varBinding_102;
                           _x_max_84 = _tupleAccess_101;
                           _varBinding_102 = 1;
                           _tupleCheck_100 = (_tupleCheck_100 && _varBinding_102);
                           int64_t _tupleAccess_103 = tuple_get(_tupleAccess_99, 1).i;
                           int64_t _varBinding_104;
                           _y_max_85 = _tupleAccess_103;
                           _varBinding_104 = 1;
                           _tupleCheck_100 = (_tupleCheck_100 && _varBinding_104);
                           _tupleCheck_92 = (_tupleCheck_92 && _tupleCheck_100);
                           tuple_t* _tupleAccess_105 = tuple_get(_tuple_26, 2).p;
                           int64_t _tupleCheck_106;
                           _tupleCheck_106 = 1;
                           int64_t _tupleAccess_107 = tuple_get(_tupleAccess_105, 0).i;
                           int64_t _varBinding_108;
                           _x_min_86 = _tupleAccess_107;
                           _varBinding_108 = 1;
                           _tupleCheck_106 = (_tupleCheck_106 && _varBinding_108);
                           int64_t _tupleAccess_109 = tuple_get(_tupleAccess_105, 1).i;
                           int64_t _varBinding_110;
                           _y_min_87 = _tupleAccess_109;
                           _varBinding_110 = 1;
                           _tupleCheck_106 = (_tupleCheck_106 && _varBinding_110);
                           _tupleCheck_92 = (_tupleCheck_92 && _tupleCheck_106); _tupleCheck_92;}) && ({int64_t _binop_111 = (({ _y_83;}) < ({ _y_min_87;})); _binop_111;})))
                    {
                      _match_25 = ((void*) ({/* nejbor = this.down.external_move(a.copy(), (x, y)) */;
                                             _enc__active_Box_t* _fieldacc_89 = (*_this)._enc__field_down;
                                             check_receiver(_fieldacc_89, ".", "this.down", "external_move", "\"main.enc\" (line 334, column 84)");
                                             check_receiver(_a_8, ".", "a", "copy", "\"main.enc\" (line 334, column 108)");
                                             _enc__passive_Agent_t* _sync_method_call_90 = _enc__method_Agent_copy(_ctx, _a_8);
                                             tuple_t* _tuple_91 = tuple_mk(_ctx, 2);
                                             tuple_set_type(_tuple_91, 0, ENCORE_PRIMITIVE);
                                             tuple_set_type(_tuple_91, 1, ENCORE_PRIMITIVE);
                                             tuple_set(_tuple_91, 0, ((encore_arg_t) {.i = _x_82}));
                                             tuple_set(_tuple_91, 1, ((encore_arg_t) {.i = _y_83}));
                                             future_t* _fut_88 = _enc__method_Box_external_move_future(_ctx, _fieldacc_89, _sync_method_call_90, _tuple_91);
                                             _nejbor_22 = _fut_88;
                                             /* () */;
                                             UNIT; UNIT;}));
                    }
                    else
                    {
                      printf("*** Runtime error: No matching clause was found ***\n");
                      exit(1);
                    };
                  };
                };
              };
            };
          };
        };
        /* print("external move {}\n", a) */;
        printf("external move Agent@%p\n", _a_8);
        /* await nejbor */;
        future_await(_ctx, _nejbor_22);
        /* if get nejbor then
  {this.agents.remove(a);
   embed void { break; } end}
else
  i = i + 1 */;
        void* _ite_232;
        if (({int64_t _tmp_233 = future_get_actor(_ctx, _nejbor_22).i; _tmp_233;}))
        {
          /* this.agents.remove(a) */;
          _enc__passive_Agent_struct_t* _fieldacc_235 = (*_this)._enc__field_agents;
          check_receiver(_fieldacc_235, ".", "this.agents", "remove", "\"main.enc\" (line 338, column 22)");
          void* _sync_method_call_234 = _enc__method_Agent_struct_remove(_ctx, _fieldacc_235, _a_8);
          /* embed void { break; } end */;
          ({{ break; }});
          _ite_232 = ((void*) UNIT);
        }
        else
        {
          /* i = i + 1 */;
          int64_t _binop_237 = (({ _i_19;}) + ({int64_t _literal_236 = 1; _literal_236;}));
          _i_19 = _binop_237;
          _ite_232 = ((void*) UNIT);
        };
        _while_238 = _ite_232;
      };
      /* if |a.next()| == 0 then
  {print("dropped an agent\n");
   this.agents.remove(a)}
else
  () */;
      void* _ite_239;
      if (({int64_t _binop_243 = (({check_receiver(_a_8, ".", "a", "next", "\"main.enc\" (line 344, column 18)");
                                    array_t* _sync_method_call_240 = _enc__method_Agent_next(_ctx, _a_8);
                                    int64_t _size_241 = array_size(_sync_method_call_240); _size_241;}) == ({int64_t _literal_242 = 0; _literal_242;})); _binop_243;}))
      {
        /* print("dropped an agent\n") */;
        _enc__passive_String_t* _new_244 = _enc__constructor_String(_ctx);
        char* _embed_245 = ({"dropped an agent\n";});
        _enc__type_init_String(_new_244);
        _enc__method_String__init(_ctx, _new_244, _embed_245);
        printf("%s", ((_enc__passive_String_t*) _new_244)->_enc__field_data);
        /* this.agents.remove(a) */;
        _enc__passive_Agent_struct_t* _fieldacc_247 = (*_this)._enc__field_agents;
        check_receiver(_fieldacc_247, ".", "this.agents", "remove", "\"main.enc\" (line 346, column 27)");
        void* _sync_method_call_246 = _enc__method_Agent_struct_remove(_ctx, _fieldacc_247, _a_8);
        _ite_239 = ((void*) _sync_method_call_246);
      }
      else
      {
        /* () */;
        UNIT;
        _ite_239 = ((void*) UNIT);
      };
      _for_6 = _ite_239;
      _index_7 = (_index_7 + _step_11);
    };
    /* true */;
    int64_t _literal_248 = 1/*True*/;
    _ite_0 = ((int64_t) _literal_248);
  };
  return _ite_0;
}


int64_t _enc__method_Box_external_move(pony_ctx_t** _ctx, _enc__active_Box_t* _this, _enc__passive_Agent_t* _enc__arg_a, tuple_t* _enc__arg_pos)
{
  /* if this.agents.isin(pos) then
  false
else
  {a.move(pos);
   this.agents.add([a]);
   true} */;
  int64_t _ite_0;
  if (({_enc__passive_Agent_struct_t* _fieldacc_2 = (*_this)._enc__field_agents;
        check_receiver(_fieldacc_2, ".", "this.agents", "isin", "\"main.enc\" (line 355, column 8)");
        int64_t _sync_method_call_1 = _enc__method_Agent_struct_isin(_ctx, _fieldacc_2, _enc__arg_pos); _sync_method_call_1;}))
  {
    /* false */;
    int64_t _literal_3 = 0/*False*/;
    _ite_0 = ((int64_t) _literal_3);
  }
  else
  {
    /* a.move(pos) */;
    check_receiver(_enc__arg_a, ".", "a", "move", "\"main.enc\" (line 356, column 9)");
    void* _sync_method_call_4 = _enc__method_Agent_move(_ctx, _enc__arg_a, _enc__arg_pos);
    /* this.agents.add([a]) */;
    _enc__passive_Agent_struct_t* _fieldacc_6 = (*_this)._enc__field_agents;
    check_receiver(_fieldacc_6, ".", "this.agents", "add", "\"main.enc\" (line 357, column 9)");
    array_t* _array_7 = array_mk(_ctx, 1, (&(_enc__passive_Agent_type)));
    array_set(_array_7, 0, ((encore_arg_t) {.p = _enc__arg_a}));
    void* _sync_method_call_5 = _enc__method_Agent_struct_add(_ctx, _fieldacc_6, _array_7);
    /* true */;
    int64_t _literal_8 = 1/*True*/;
    _ite_0 = ((int64_t) _literal_8);
  };
  return _ite_0;
}


future_t* _enc__method_Box__init_future(pony_ctx_t** _ctx, _enc__active_Box_t* _this, tuple_t* _enc__arg_in_max, tuple_t* _enc__arg_in_min)
{
  future_t* _fut = future_mk(_ctx, ENCORE_PRIMITIVE);
  pony_gc_send((*_ctx));
  pony_traceobject((*_ctx), _enc__arg_in_max, tuple_trace);
  pony_traceobject((*_ctx), _enc__arg_in_min, tuple_trace);
  pony_traceobject((*_ctx), _fut, future_trace);
  pony_send_done((*_ctx));
  _enc__fut_msg_Box__init_t* msg = ((_enc__fut_msg_Box__init_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__fut_msg_Box__init_t)), _ENC__FUT_MSG_Box__init));
  msg->f1 = _enc__arg_in_max;
  msg->f2 = _enc__arg_in_min;
  msg->_fut = _fut;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
  return _fut;
}


future_t* _enc__method_Box_min_future(pony_ctx_t** _ctx, _enc__active_Box_t* _this)
{
  future_t* _fut = future_mk(_ctx, (&(tuple_type)));
  pony_gc_send((*_ctx));
  pony_traceobject((*_ctx), _fut, future_trace);
  pony_send_done((*_ctx));
  _enc__fut_msg_Box_min_t* msg = ((_enc__fut_msg_Box_min_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__fut_msg_Box_min_t)), _ENC__FUT_MSG_Box_min));
  msg->_fut = _fut;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
  return _fut;
}


future_t* _enc__method_Box_max_future(pony_ctx_t** _ctx, _enc__active_Box_t* _this)
{
  future_t* _fut = future_mk(_ctx, (&(tuple_type)));
  pony_gc_send((*_ctx));
  pony_traceobject((*_ctx), _fut, future_trace);
  pony_send_done((*_ctx));
  _enc__fut_msg_Box_max_t* msg = ((_enc__fut_msg_Box_max_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__fut_msg_Box_max_t)), _ENC__FUT_MSG_Box_max));
  msg->_fut = _fut;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
  return _fut;
}


future_t* _enc__method_Box_agents_future(pony_ctx_t** _ctx, _enc__active_Box_t* _this)
{
  future_t* _fut = future_mk(_ctx, (&(array_type)));
  pony_gc_send((*_ctx));
  pony_traceobject((*_ctx), _fut, future_trace);
  pony_send_done((*_ctx));
  _enc__fut_msg_Box_agents_t* msg = ((_enc__fut_msg_Box_agents_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__fut_msg_Box_agents_t)), _ENC__FUT_MSG_Box_agents));
  msg->_fut = _fut;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
  return _fut;
}


future_t* _enc__method_Box_add_future(pony_ctx_t** _ctx, _enc__active_Box_t* _this, _enc__passive_Agent_t* _enc__arg_a)
{
  future_t* _fut = future_mk(_ctx, ENCORE_PRIMITIVE);
  pony_gc_send((*_ctx));
  pony_traceobject((*_ctx), _enc__arg_a, _enc__trace_Agent);
  pony_traceobject((*_ctx), _fut, future_trace);
  pony_send_done((*_ctx));
  _enc__fut_msg_Box_add_t* msg = ((_enc__fut_msg_Box_add_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__fut_msg_Box_add_t)), _ENC__FUT_MSG_Box_add));
  msg->f1 = _enc__arg_a;
  msg->_fut = _fut;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
  return _fut;
}


future_t* _enc__method_Box_link_future(pony_ctx_t** _ctx, _enc__active_Box_t* _this, _enc__active_Box_t* _enc__arg_a)
{
  future_t* _fut = future_mk(_ctx, ENCORE_PRIMITIVE);
  pony_gc_send((*_ctx));
  pony_traceactor((*_ctx), ((pony_actor_t*) _enc__arg_a));
  pony_traceobject((*_ctx), _fut, future_trace);
  pony_send_done((*_ctx));
  _enc__fut_msg_Box_link_t* msg = ((_enc__fut_msg_Box_link_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__fut_msg_Box_link_t)), _ENC__FUT_MSG_Box_link));
  msg->f1 = _enc__arg_a;
  msg->_fut = _fut;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
  return _fut;
}


future_t* _enc__method_Box_move_future(pony_ctx_t** _ctx, _enc__active_Box_t* _this)
{
  future_t* _fut = future_mk(_ctx, ENCORE_PRIMITIVE);
  pony_gc_send((*_ctx));
  pony_traceobject((*_ctx), _fut, future_trace);
  pony_send_done((*_ctx));
  _enc__fut_msg_Box_move_t* msg = ((_enc__fut_msg_Box_move_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__fut_msg_Box_move_t)), _ENC__FUT_MSG_Box_move));
  msg->_fut = _fut;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
  return _fut;
}


future_t* _enc__method_Box_external_move_future(pony_ctx_t** _ctx, _enc__active_Box_t* _this, _enc__passive_Agent_t* _enc__arg_a, tuple_t* _enc__arg_pos)
{
  future_t* _fut = future_mk(_ctx, ENCORE_PRIMITIVE);
  pony_gc_send((*_ctx));
  pony_traceobject((*_ctx), _enc__arg_a, _enc__trace_Agent);
  pony_traceobject((*_ctx), _enc__arg_pos, tuple_trace);
  pony_traceobject((*_ctx), _fut, future_trace);
  pony_send_done((*_ctx));
  _enc__fut_msg_Box_external_move_t* msg = ((_enc__fut_msg_Box_external_move_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__fut_msg_Box_external_move_t)), _ENC__FUT_MSG_Box_external_move));
  msg->f1 = _enc__arg_a;
  msg->f2 = _enc__arg_pos;
  msg->_fut = _fut;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
  return _fut;
}


void _enc__method_Box__init_one_way(pony_ctx_t** _ctx, _enc__active_Box_t* _this, tuple_t* _enc__arg_in_max, tuple_t* _enc__arg_in_min)
{
  pony_gc_send((*_ctx));
  pony_traceobject((*_ctx), _enc__arg_in_max, tuple_trace);
  pony_traceobject((*_ctx), _enc__arg_in_min, tuple_trace);
  /* No tracing future for oneway msg */;
  pony_send_done((*_ctx));
  _enc__oneway_msg_Box__init_t* msg = ((_enc__oneway_msg_Box__init_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__oneway_msg_Box__init_t)), _ENC__ONEWAY_MSG_Box__init));
  msg->f1 = _enc__arg_in_max;
  msg->f2 = _enc__arg_in_min;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
}


void _enc__method_Box_min_one_way(pony_ctx_t** _ctx, _enc__active_Box_t* _this)
{
  pony_gc_send((*_ctx));
  /* No tracing future for oneway msg */;
  pony_send_done((*_ctx));
  _enc__oneway_msg_Box_min_t* msg = ((_enc__oneway_msg_Box_min_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__oneway_msg_Box_min_t)), _ENC__ONEWAY_MSG_Box_min));
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
}


void _enc__method_Box_max_one_way(pony_ctx_t** _ctx, _enc__active_Box_t* _this)
{
  pony_gc_send((*_ctx));
  /* No tracing future for oneway msg */;
  pony_send_done((*_ctx));
  _enc__oneway_msg_Box_max_t* msg = ((_enc__oneway_msg_Box_max_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__oneway_msg_Box_max_t)), _ENC__ONEWAY_MSG_Box_max));
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
}


void _enc__method_Box_agents_one_way(pony_ctx_t** _ctx, _enc__active_Box_t* _this)
{
  pony_gc_send((*_ctx));
  /* No tracing future for oneway msg */;
  pony_send_done((*_ctx));
  _enc__oneway_msg_Box_agents_t* msg = ((_enc__oneway_msg_Box_agents_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__oneway_msg_Box_agents_t)), _ENC__ONEWAY_MSG_Box_agents));
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
}


void _enc__method_Box_add_one_way(pony_ctx_t** _ctx, _enc__active_Box_t* _this, _enc__passive_Agent_t* _enc__arg_a)
{
  pony_gc_send((*_ctx));
  pony_traceobject((*_ctx), _enc__arg_a, _enc__trace_Agent);
  /* No tracing future for oneway msg */;
  pony_send_done((*_ctx));
  _enc__oneway_msg_Box_add_t* msg = ((_enc__oneway_msg_Box_add_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__oneway_msg_Box_add_t)), _ENC__ONEWAY_MSG_Box_add));
  msg->f1 = _enc__arg_a;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
}


void _enc__method_Box_link_one_way(pony_ctx_t** _ctx, _enc__active_Box_t* _this, _enc__active_Box_t* _enc__arg_a)
{
  pony_gc_send((*_ctx));
  pony_traceactor((*_ctx), ((pony_actor_t*) _enc__arg_a));
  /* No tracing future for oneway msg */;
  pony_send_done((*_ctx));
  _enc__oneway_msg_Box_link_t* msg = ((_enc__oneway_msg_Box_link_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__oneway_msg_Box_link_t)), _ENC__ONEWAY_MSG_Box_link));
  msg->f1 = _enc__arg_a;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
}


void _enc__method_Box_move_one_way(pony_ctx_t** _ctx, _enc__active_Box_t* _this)
{
  pony_gc_send((*_ctx));
  /* No tracing future for oneway msg */;
  pony_send_done((*_ctx));
  _enc__oneway_msg_Box_move_t* msg = ((_enc__oneway_msg_Box_move_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__oneway_msg_Box_move_t)), _ENC__ONEWAY_MSG_Box_move));
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
}


void _enc__method_Box_external_move_one_way(pony_ctx_t** _ctx, _enc__active_Box_t* _this, _enc__passive_Agent_t* _enc__arg_a, tuple_t* _enc__arg_pos)
{
  pony_gc_send((*_ctx));
  pony_traceobject((*_ctx), _enc__arg_a, _enc__trace_Agent);
  pony_traceobject((*_ctx), _enc__arg_pos, tuple_trace);
  /* No tracing future for oneway msg */;
  pony_send_done((*_ctx));
  _enc__oneway_msg_Box_external_move_t* msg = ((_enc__oneway_msg_Box_external_move_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__oneway_msg_Box_external_move_t)), _ENC__ONEWAY_MSG_Box_external_move));
  msg->f1 = _enc__arg_a;
  msg->f2 = _enc__arg_pos;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
}


static void _enc__dispatch_Box(pony_ctx_t** _ctx, pony_actor_t* _a, pony_msg_t* _m)
{
  _enc__active_Box_t* _this = ((_enc__active_Box_t*) _a);
  switch (_m->id)
  {
    case _ENC__MSG_TASK:
    {
      future_t* _fut = ((encore_fut_msg_t*) _m)->_fut;
      encore_task_s* _task = ((encore_task_msg_s*) _m)->_task;
      encore_arg_t task_tmp = task_runner(_task);
      
      // --- GC on receiving ----------------------------------------;
      pony_gc_recv((*_ctx));
      pony_traceobject((*_ctx), _fut, future_type.trace);
      pony_traceobject((*_ctx), _task, NULL);
      //---You need to trace the task env and task dependencies---;
      pony_recv_done((*_ctx));
      // --- GC on sending ----------------------------------------;
      
      future_fulfil(_ctx, _fut, task_tmp);
      task_free(_task);
      break;
    }
    case _ENC__FUT_MSG_Box__init:
    {
      future_t* _fut = ((encore_fut_msg_t*) _m)->_fut;
      tuple_t* _enc__arg_in_max = ((_enc__fut_msg_Box__init_t*) _m)->f1;
      tuple_t* _enc__arg_in_min = ((_enc__fut_msg_Box__init_t*) _m)->f2;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      pony_traceobject((*_ctx), _enc__arg_in_max, tuple_trace);
      pony_traceobject((*_ctx), _enc__arg_in_min, tuple_trace);
      pony_traceobject((*_ctx), _fut, future_type.trace);
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      future_fulfil(_ctx, _fut, ((encore_arg_t) {.p = _enc__method_Box__init(_ctx, _this, _enc__arg_in_max, _enc__arg_in_min)}));
      break;
    }
    case _ENC__ONEWAY_MSG_Box__init:
    {
      tuple_t* _enc__arg_in_max = ((_enc__oneway_msg_Box__init_t*) _m)->f1;
      tuple_t* _enc__arg_in_min = ((_enc__oneway_msg_Box__init_t*) _m)->f2;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      pony_traceobject((*_ctx), _enc__arg_in_max, tuple_trace);
      pony_traceobject((*_ctx), _enc__arg_in_min, tuple_trace);
      /* Not tracing the future in a oneWay send */;
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      _enc__method_Box__init(_ctx, _this, _enc__arg_in_max, _enc__arg_in_min);
      break;
    }
    case _ENC__FUT_MSG_Box_min:
    {
      future_t* _fut = ((encore_fut_msg_t*) _m)->_fut;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      pony_traceobject((*_ctx), _fut, future_type.trace);
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      future_fulfil(_ctx, _fut, ((encore_arg_t) {.p = _enc__method_Box_min(_ctx, _this)}));
      break;
    }
    case _ENC__ONEWAY_MSG_Box_min:
    {
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      /* Not tracing the future in a oneWay send */;
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      _enc__method_Box_min(_ctx, _this);
      break;
    }
    case _ENC__FUT_MSG_Box_max:
    {
      future_t* _fut = ((encore_fut_msg_t*) _m)->_fut;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      pony_traceobject((*_ctx), _fut, future_type.trace);
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      future_fulfil(_ctx, _fut, ((encore_arg_t) {.p = _enc__method_Box_max(_ctx, _this)}));
      break;
    }
    case _ENC__ONEWAY_MSG_Box_max:
    {
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      /* Not tracing the future in a oneWay send */;
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      _enc__method_Box_max(_ctx, _this);
      break;
    }
    case _ENC__FUT_MSG_Box_agents:
    {
      future_t* _fut = ((encore_fut_msg_t*) _m)->_fut;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      pony_traceobject((*_ctx), _fut, future_type.trace);
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      future_fulfil(_ctx, _fut, ((encore_arg_t) {.p = _enc__method_Box_agents(_ctx, _this)}));
      break;
    }
    case _ENC__ONEWAY_MSG_Box_agents:
    {
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      /* Not tracing the future in a oneWay send */;
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      _enc__method_Box_agents(_ctx, _this);
      break;
    }
    case _ENC__FUT_MSG_Box_add:
    {
      future_t* _fut = ((encore_fut_msg_t*) _m)->_fut;
      _enc__passive_Agent_t* _enc__arg_a = ((_enc__fut_msg_Box_add_t*) _m)->f1;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      pony_traceobject((*_ctx), _enc__arg_a, _enc__trace_Agent);
      pony_traceobject((*_ctx), _fut, future_type.trace);
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      future_fulfil(_ctx, _fut, ((encore_arg_t) {.i = _enc__method_Box_add(_ctx, _this, _enc__arg_a)}));
      break;
    }
    case _ENC__ONEWAY_MSG_Box_add:
    {
      _enc__passive_Agent_t* _enc__arg_a = ((_enc__oneway_msg_Box_add_t*) _m)->f1;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      pony_traceobject((*_ctx), _enc__arg_a, _enc__trace_Agent);
      /* Not tracing the future in a oneWay send */;
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      _enc__method_Box_add(_ctx, _this, _enc__arg_a);
      break;
    }
    case _ENC__FUT_MSG_Box_link:
    {
      future_t* _fut = ((encore_fut_msg_t*) _m)->_fut;
      _enc__active_Box_t* _enc__arg_a = ((_enc__fut_msg_Box_link_t*) _m)->f1;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      pony_traceactor((*_ctx), ((pony_actor_t*) _enc__arg_a));
      pony_traceobject((*_ctx), _fut, future_type.trace);
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      future_fulfil(_ctx, _fut, ((encore_arg_t) {.i = _enc__method_Box_link(_ctx, _this, _enc__arg_a)}));
      break;
    }
    case _ENC__ONEWAY_MSG_Box_link:
    {
      _enc__active_Box_t* _enc__arg_a = ((_enc__oneway_msg_Box_link_t*) _m)->f1;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      pony_traceactor((*_ctx), ((pony_actor_t*) _enc__arg_a));
      /* Not tracing the future in a oneWay send */;
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      _enc__method_Box_link(_ctx, _this, _enc__arg_a);
      break;
    }
    case _ENC__FUT_MSG_Box_move:
    {
      future_t* _fut = ((encore_fut_msg_t*) _m)->_fut;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      pony_traceobject((*_ctx), _fut, future_type.trace);
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      future_fulfil(_ctx, _fut, ((encore_arg_t) {.i = _enc__method_Box_move(_ctx, _this)}));
      break;
    }
    case _ENC__ONEWAY_MSG_Box_move:
    {
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      /* Not tracing the future in a oneWay send */;
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      _enc__method_Box_move(_ctx, _this);
      break;
    }
    case _ENC__FUT_MSG_Box_external_move:
    {
      future_t* _fut = ((encore_fut_msg_t*) _m)->_fut;
      _enc__passive_Agent_t* _enc__arg_a = ((_enc__fut_msg_Box_external_move_t*) _m)->f1;
      tuple_t* _enc__arg_pos = ((_enc__fut_msg_Box_external_move_t*) _m)->f2;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      pony_traceobject((*_ctx), _enc__arg_a, _enc__trace_Agent);
      pony_traceobject((*_ctx), _enc__arg_pos, tuple_trace);
      pony_traceobject((*_ctx), _fut, future_type.trace);
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      future_fulfil(_ctx, _fut, ((encore_arg_t) {.i = _enc__method_Box_external_move(_ctx, _this, _enc__arg_a, _enc__arg_pos)}));
      break;
    }
    case _ENC__ONEWAY_MSG_Box_external_move:
    {
      _enc__passive_Agent_t* _enc__arg_a = ((_enc__oneway_msg_Box_external_move_t*) _m)->f1;
      tuple_t* _enc__arg_pos = ((_enc__oneway_msg_Box_external_move_t*) _m)->f2;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      pony_traceobject((*_ctx), _enc__arg_a, _enc__trace_Agent);
      pony_traceobject((*_ctx), _enc__arg_pos, tuple_trace);
      /* Not tracing the future in a oneWay send */;
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      _enc__method_Box_external_move(_ctx, _this, _enc__arg_a, _enc__arg_pos);
      break;
    }
    default:
    {
      printf("error, got invalid id: %zd", _m->id);
    }
  };
}


pony_type_t _enc__active_Box_type = {.id=_ENC__ID_Box, .size=sizeof(_enc__active_Box_t), .trace=_enc__trace_Box, .dispatch=_enc__dispatch_Box, .vtable=trait_method_selector};
