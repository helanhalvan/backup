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


struct _enc__active_Multi_box_t
{
  encore_actor_t _enc__actor;
  tuple_t* _enc__field_max;
  tuple_t* _enc__field_min;
  _enc__active_Box_t* _enc__field_top_right;
  _enc__active_Box_t* _enc__field_bottom_right;
  _enc__active_Box_t* _enc__field_top_left;
  _enc__active_Box_t* _enc__field_bottom_left;
};


void _enc__type_init_Multi_box(_enc__active_Multi_box_t* this, ... )
{
  va_list params;
  va_start(params, this);
  va_end(params);
}


void _enc__trace_Multi_box(pony_ctx_t* _ctx_arg, void* p)
{
  pony_ctx_t** _ctx = (&(_ctx_arg));
  _enc__active_Multi_box_t* _this = p;
  tuple_t* _enc__field_max = _this->_enc__field_max;
  pony_traceobject((*_ctx), _enc__field_max, tuple_trace);
  tuple_t* _enc__field_min = _this->_enc__field_min;
  pony_traceobject((*_ctx), _enc__field_min, tuple_trace);
  _enc__active_Box_t* _enc__field_top_right = _this->_enc__field_top_right;
  pony_traceactor((*_ctx), ((pony_actor_t*) _enc__field_top_right));
  _enc__active_Box_t* _enc__field_bottom_right = _this->_enc__field_bottom_right;
  pony_traceactor((*_ctx), ((pony_actor_t*) _enc__field_bottom_right));
  _enc__active_Box_t* _enc__field_top_left = _this->_enc__field_top_left;
  pony_traceactor((*_ctx), ((pony_actor_t*) _enc__field_top_left));
  _enc__active_Box_t* _enc__field_bottom_left = _this->_enc__field_bottom_left;
  pony_traceactor((*_ctx), ((pony_actor_t*) _enc__field_bottom_left));
}


_enc__active_Multi_box_t* _enc__constructor_Multi_box(pony_ctx_t** _ctx)
{
  _enc__active_Multi_box_t* this = ((_enc__active_Multi_box_t*) encore_create((*_ctx), (&(_enc__active_Multi_box_type))));
  return this;
}


void* _enc__method_Multi_box__init(pony_ctx_t** _ctx, _enc__active_Multi_box_t* _this, array_t* _enc__arg_agents)
{
  /* let dx = 0 */;
  /* dx = 0 */;
  int64_t _literal_0 = 0;
  int64_t _dx_1 = _literal_0;
  /* let dy = 0 */;
  /* dy = 0 */;
  int64_t _literal_2 = 0;
  int64_t _dy_3 = _literal_2;
  /* match this.find_extreme(agents) with
  (xmax, ymax, xmin, ymin) => {this.max = (xmax, ymax);
                               this.min = (xmin, ymin);
                               dx = xmax - xmin;
                               dy = ymax - ymin;
                               print("{} {} {}\n", 
                                     this.max, 
                                     this.min, 
                                     (xmax - dx / 2, ymax - dy / 2));
                               this.top_right = new Box(this.max, 
                                                        (xmax - dx / 2 + 1, ymax - dy / 2 + 1));
                               this.bottom_left = new Box((xmax - dx / 2, ymax - dy / 2), 
                                                          this.min);
                               this.top_left = new Box((xmax - dx / 2, ymax), 
                                                       (xmin, ymax - dy / 2 + 1));
                               this.bottom_right = new Box((xmax, ymax - dy / 2), 
                                                           (xmax - dx / 2 + 1, ymin));
                               print("tr {} {}\n", 
                                     get this.top_right.max(), 
                                     get this.top_right.min());
                               print("bl {} {}\n", 
                                     get this.bottom_left.max(), 
                                     get this.bottom_left.min());
                               print("tl {} {}\n", 
                                     get this.top_left.max(), 
                                     get this.top_left.min());
                               print("br {} {}\n", 
                                     get this.bottom_right.max(), 
                                     get this.bottom_right.min())}
 */;
  check_receiver(_this, ".", "this", "find_extreme", "\"main.enc\" (line 183, column 15)");
  tuple_t* _sync_method_call_5 = _enc__method_Multi_box_find_extreme(_ctx, _this, _enc__arg_agents);
  void* _match_4;
  int64_t _xmax_6;
  int64_t _ymax_7;
  int64_t _xmin_8;
  int64_t _ymin_9;
  if ((({int64_t _tupleCheck_91;
         _tupleCheck_91 = 1;
         int64_t _tupleAccess_92 = tuple_get(_sync_method_call_5, 0).i;
         int64_t _varBinding_93;
         _xmax_6 = _tupleAccess_92;
         _varBinding_93 = 1;
         _tupleCheck_91 = (_tupleCheck_91 && _varBinding_93);
         int64_t _tupleAccess_94 = tuple_get(_sync_method_call_5, 1).i;
         int64_t _varBinding_95;
         _ymax_7 = _tupleAccess_94;
         _varBinding_95 = 1;
         _tupleCheck_91 = (_tupleCheck_91 && _varBinding_95);
         int64_t _tupleAccess_96 = tuple_get(_sync_method_call_5, 2).i;
         int64_t _varBinding_97;
         _xmin_8 = _tupleAccess_96;
         _varBinding_97 = 1;
         _tupleCheck_91 = (_tupleCheck_91 && _varBinding_97);
         int64_t _tupleAccess_98 = tuple_get(_sync_method_call_5, 3).i;
         int64_t _varBinding_99;
         _ymin_9 = _tupleAccess_98;
         _varBinding_99 = 1;
         _tupleCheck_91 = (_tupleCheck_91 && _varBinding_99); _tupleCheck_91;}) && ({int64_t _literal_100 = 1/*True*/; _literal_100;})))
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
                          /* dx = xmax - xmin */;
                          int64_t _binop_12 = (({ _xmax_6;}) - ({ _xmin_8;}));
                          _dx_1 = _binop_12;
                          /* dy = ymax - ymin */;
                          int64_t _binop_13 = (({ _ymax_7;}) - ({ _ymin_9;}));
                          _dy_3 = _binop_13;
                          /* print("{} {} {}\n", 
      this.max, 
      this.min, 
      (xmax - dx / 2, ymax - dy / 2)) */;
                          tuple_t* _fieldacc_14 = (*_this)._enc__field_max;
                          tuple_t* _fieldacc_15 = (*_this)._enc__field_min;
                          tuple_t* _tuple_16 = tuple_mk(_ctx, 2);
                          tuple_set_type(_tuple_16, 0, ENCORE_PRIMITIVE);
                          tuple_set_type(_tuple_16, 1, ENCORE_PRIMITIVE);
                          int64_t _binop_19 = (({ _xmax_6;}) - ({int64_t _binop_18 = (({ _dx_1;}) / ({int64_t _literal_17 = 2; _literal_17;})); _binop_18;}));
                          int64_t _binop_22 = (({ _ymax_7;}) - ({int64_t _binop_21 = (({ _dy_3;}) / ({int64_t _literal_20 = 2; _literal_20;})); _binop_21;}));
                          tuple_set(_tuple_16, 0, ((encore_arg_t) {.i = _binop_19}));
                          tuple_set(_tuple_16, 1, ((encore_arg_t) {.i = _binop_22}));
                          printf("(%lli, %lli) (%lli, %lli) (%lli, %lli)\n", tuple_get(_fieldacc_14, 0).i, tuple_get(_fieldacc_14, 1).i, tuple_get(_fieldacc_15, 0).i, tuple_get(_fieldacc_15, 1).i, tuple_get(_tuple_16, 0).i, tuple_get(_tuple_16, 1).i);
                          /* this.top_right = new Box(this.max, 
                         (xmax - dx / 2 + 1, ymax - dy / 2 + 1)) */;
                          _enc__active_Box_t* _new_23 = _enc__constructor_Box(_ctx);
                          tuple_t* _fieldacc_24 = (*_this)._enc__field_max;
                          tuple_t* _tuple_25 = tuple_mk(_ctx, 2);
                          tuple_set_type(_tuple_25, 0, ENCORE_PRIMITIVE);
                          tuple_set_type(_tuple_25, 1, ENCORE_PRIMITIVE);
                          int64_t _binop_30 = (({int64_t _binop_28 = (({ _xmax_6;}) - ({int64_t _binop_27 = (({ _dx_1;}) / ({int64_t _literal_26 = 2; _literal_26;})); _binop_27;})); _binop_28;}) + ({int64_t _literal_29 = 1; _literal_29;}));
                          int64_t _binop_35 = (({int64_t _binop_33 = (({ _ymax_7;}) - ({int64_t _binop_32 = (({ _dy_3;}) / ({int64_t _literal_31 = 2; _literal_31;})); _binop_32;})); _binop_33;}) + ({int64_t _literal_34 = 1; _literal_34;}));
                          tuple_set(_tuple_25, 0, ((encore_arg_t) {.i = _binop_30}));
                          tuple_set(_tuple_25, 1, ((encore_arg_t) {.i = _binop_35}));
                          _enc__type_init_Box(_new_23);
                          _enc__method_Box__init_one_way(_ctx, _new_23, _fieldacc_24, _tuple_25);
                          (*({ _this;}))._enc__field_top_right = _new_23;
                          /* this.bottom_left = new Box((xmax - dx / 2, ymax - dy / 2), 
                           this.min) */;
                          _enc__active_Box_t* _new_36 = _enc__constructor_Box(_ctx);
                          tuple_t* _tuple_37 = tuple_mk(_ctx, 2);
                          tuple_set_type(_tuple_37, 0, ENCORE_PRIMITIVE);
                          tuple_set_type(_tuple_37, 1, ENCORE_PRIMITIVE);
                          int64_t _binop_40 = (({ _xmax_6;}) - ({int64_t _binop_39 = (({ _dx_1;}) / ({int64_t _literal_38 = 2; _literal_38;})); _binop_39;}));
                          int64_t _binop_43 = (({ _ymax_7;}) - ({int64_t _binop_42 = (({ _dy_3;}) / ({int64_t _literal_41 = 2; _literal_41;})); _binop_42;}));
                          tuple_set(_tuple_37, 0, ((encore_arg_t) {.i = _binop_40}));
                          tuple_set(_tuple_37, 1, ((encore_arg_t) {.i = _binop_43}));
                          tuple_t* _fieldacc_44 = (*_this)._enc__field_min;
                          _enc__type_init_Box(_new_36);
                          _enc__method_Box__init_one_way(_ctx, _new_36, _tuple_37, _fieldacc_44);
                          (*({ _this;}))._enc__field_bottom_left = _new_36;
                          /* this.top_left = new Box((xmax - dx / 2, ymax), 
                        (xmin, ymax - dy / 2 + 1)) */;
                          _enc__active_Box_t* _new_45 = _enc__constructor_Box(_ctx);
                          tuple_t* _tuple_46 = tuple_mk(_ctx, 2);
                          tuple_set_type(_tuple_46, 0, ENCORE_PRIMITIVE);
                          tuple_set_type(_tuple_46, 1, ENCORE_PRIMITIVE);
                          int64_t _binop_49 = (({ _xmax_6;}) - ({int64_t _binop_48 = (({ _dx_1;}) / ({int64_t _literal_47 = 2; _literal_47;})); _binop_48;}));
                          tuple_set(_tuple_46, 0, ((encore_arg_t) {.i = _binop_49}));
                          tuple_set(_tuple_46, 1, ((encore_arg_t) {.i = _ymax_7}));
                          tuple_t* _tuple_50 = tuple_mk(_ctx, 2);
                          tuple_set_type(_tuple_50, 0, ENCORE_PRIMITIVE);
                          tuple_set_type(_tuple_50, 1, ENCORE_PRIMITIVE);
                          int64_t _binop_55 = (({int64_t _binop_53 = (({ _ymax_7;}) - ({int64_t _binop_52 = (({ _dy_3;}) / ({int64_t _literal_51 = 2; _literal_51;})); _binop_52;})); _binop_53;}) + ({int64_t _literal_54 = 1; _literal_54;}));
                          tuple_set(_tuple_50, 0, ((encore_arg_t) {.i = _xmin_8}));
                          tuple_set(_tuple_50, 1, ((encore_arg_t) {.i = _binop_55}));
                          _enc__type_init_Box(_new_45);
                          _enc__method_Box__init_one_way(_ctx, _new_45, _tuple_46, _tuple_50);
                          (*({ _this;}))._enc__field_top_left = _new_45;
                          /* this.bottom_right = new Box((xmax, ymax - dy / 2), 
                            (xmax - dx / 2 + 1, ymin)) */;
                          _enc__active_Box_t* _new_56 = _enc__constructor_Box(_ctx);
                          tuple_t* _tuple_57 = tuple_mk(_ctx, 2);
                          tuple_set_type(_tuple_57, 0, ENCORE_PRIMITIVE);
                          tuple_set_type(_tuple_57, 1, ENCORE_PRIMITIVE);
                          int64_t _binop_60 = (({ _ymax_7;}) - ({int64_t _binop_59 = (({ _dy_3;}) / ({int64_t _literal_58 = 2; _literal_58;})); _binop_59;}));
                          tuple_set(_tuple_57, 0, ((encore_arg_t) {.i = _xmax_6}));
                          tuple_set(_tuple_57, 1, ((encore_arg_t) {.i = _binop_60}));
                          tuple_t* _tuple_61 = tuple_mk(_ctx, 2);
                          tuple_set_type(_tuple_61, 0, ENCORE_PRIMITIVE);
                          tuple_set_type(_tuple_61, 1, ENCORE_PRIMITIVE);
                          int64_t _binop_66 = (({int64_t _binop_64 = (({ _xmax_6;}) - ({int64_t _binop_63 = (({ _dx_1;}) / ({int64_t _literal_62 = 2; _literal_62;})); _binop_63;})); _binop_64;}) + ({int64_t _literal_65 = 1; _literal_65;}));
                          tuple_set(_tuple_61, 0, ((encore_arg_t) {.i = _binop_66}));
                          tuple_set(_tuple_61, 1, ((encore_arg_t) {.i = _ymin_9}));
                          _enc__type_init_Box(_new_56);
                          _enc__method_Box__init_one_way(_ctx, _new_56, _tuple_57, _tuple_61);
                          (*({ _this;}))._enc__field_bottom_right = _new_56;
                          /* print("tr {} {}\n", 
      get this.top_right.max(), 
      get this.top_right.min()) */;
                          _enc__active_Box_t* _fieldacc_68 = (*_this)._enc__field_top_right;
                          check_receiver(_fieldacc_68, ".", "this.top_right", "max", "\"main.enc\" (line 197, column 62)");
                          future_t* _fut_67 = _enc__method_Box_max_future(_ctx, _fieldacc_68);
                          tuple_t* _tmp_69 = future_get_actor(_ctx, _fut_67).p;
                          _enc__active_Box_t* _fieldacc_71 = (*_this)._enc__field_top_right;
                          check_receiver(_fieldacc_71, ".", "this.top_right", "min", "\"main.enc\" (line 197, column 88)");
                          future_t* _fut_70 = _enc__method_Box_min_future(_ctx, _fieldacc_71);
                          tuple_t* _tmp_72 = future_get_actor(_ctx, _fut_70).p;
                          printf("tr (%lli, %lli) (%lli, %lli)\n", tuple_get(_tmp_69, 0).i, tuple_get(_tmp_69, 1).i, tuple_get(_tmp_72, 0).i, tuple_get(_tmp_72, 1).i);
                          /* print("bl {} {}\n", 
      get this.bottom_left.max(), 
      get this.bottom_left.min()) */;
                          _enc__active_Box_t* _fieldacc_74 = (*_this)._enc__field_bottom_left;
                          check_receiver(_fieldacc_74, ".", "this.bottom_left", "max", "\"main.enc\" (line 198, column 62)");
                          future_t* _fut_73 = _enc__method_Box_max_future(_ctx, _fieldacc_74);
                          tuple_t* _tmp_75 = future_get_actor(_ctx, _fut_73).p;
                          _enc__active_Box_t* _fieldacc_77 = (*_this)._enc__field_bottom_left;
                          check_receiver(_fieldacc_77, ".", "this.bottom_left", "min", "\"main.enc\" (line 198, column 90)");
                          future_t* _fut_76 = _enc__method_Box_min_future(_ctx, _fieldacc_77);
                          tuple_t* _tmp_78 = future_get_actor(_ctx, _fut_76).p;
                          printf("bl (%lli, %lli) (%lli, %lli)\n", tuple_get(_tmp_75, 0).i, tuple_get(_tmp_75, 1).i, tuple_get(_tmp_78, 0).i, tuple_get(_tmp_78, 1).i);
                          /* print("tl {} {}\n", 
      get this.top_left.max(), 
      get this.top_left.min()) */;
                          _enc__active_Box_t* _fieldacc_80 = (*_this)._enc__field_top_left;
                          check_receiver(_fieldacc_80, ".", "this.top_left", "max", "\"main.enc\" (line 199, column 62)");
                          future_t* _fut_79 = _enc__method_Box_max_future(_ctx, _fieldacc_80);
                          tuple_t* _tmp_81 = future_get_actor(_ctx, _fut_79).p;
                          _enc__active_Box_t* _fieldacc_83 = (*_this)._enc__field_top_left;
                          check_receiver(_fieldacc_83, ".", "this.top_left", "min", "\"main.enc\" (line 199, column 87)");
                          future_t* _fut_82 = _enc__method_Box_min_future(_ctx, _fieldacc_83);
                          tuple_t* _tmp_84 = future_get_actor(_ctx, _fut_82).p;
                          printf("tl (%lli, %lli) (%lli, %lli)\n", tuple_get(_tmp_81, 0).i, tuple_get(_tmp_81, 1).i, tuple_get(_tmp_84, 0).i, tuple_get(_tmp_84, 1).i);
                          /* print("br {} {}\n", 
      get this.bottom_right.max(), 
      get this.bottom_right.min()) */;
                          _enc__active_Box_t* _fieldacc_86 = (*_this)._enc__field_bottom_right;
                          check_receiver(_fieldacc_86, ".", "this.bottom_right", "max", "\"main.enc\" (line 200, column 62)");
                          future_t* _fut_85 = _enc__method_Box_max_future(_ctx, _fieldacc_86);
                          tuple_t* _tmp_87 = future_get_actor(_ctx, _fut_85).p;
                          _enc__active_Box_t* _fieldacc_89 = (*_this)._enc__field_bottom_right;
                          check_receiver(_fieldacc_89, ".", "this.bottom_right", "min", "\"main.enc\" (line 200, column 91)");
                          future_t* _fut_88 = _enc__method_Box_min_future(_ctx, _fieldacc_89);
                          tuple_t* _tmp_90 = future_get_actor(_ctx, _fut_88).p;
                          printf("br (%lli, %lli) (%lli, %lli)\n", tuple_get(_tmp_87, 0).i, tuple_get(_tmp_87, 1).i, tuple_get(_tmp_90, 0).i, tuple_get(_tmp_90, 1).i); UNIT;}));
  }
  else
  {
    printf("*** Runtime error: No matching clause was found ***\n");
    exit(1);
  };
  /* for a in agents
  if not get this.top_right.add(a) then
    if not get this.top_left.add(a) then
      if not get this.bottom_right.add(a) then
        if not get this.bottom_left.add(a) then
          ()
  else
    print("SOMEONE GOT NO BOX!\n") */;
  void* _for_101;
  int64_t _start_104 = 0;
  int64_t _stop_105 = (array_size(_enc__arg_agents) - 1);
  int64_t _src_step_107 = 1;
  int64_t _literal_108 = 1;
  int64_t _step_106 = (_literal_108 * _src_step_107);
  range_assert_step(_step_106);
  int64_t _index_102;
  if ((_step_106 > 0))
  {
    _index_102 = _start_104;
  }
  else
  {
    _index_102 = _stop_105;
  };
  while (((_index_102 >= _start_104) && (_index_102 <= _stop_105)))
  {
    _enc__passive_Agent_t* _a_103 = array_get(_enc__arg_agents, _index_102).p;
    /* if not get this.top_right.add(a) then
  if not get this.top_left.add(a) then
    if not get this.bottom_right.add(a) then
      if not get this.bottom_left.add(a) then
        ()
else
  print("SOMEONE GOT NO BOX!\n") */;
    void* _ite_109;
    if (({_enc__active_Box_t* _fieldacc_111 = (*_this)._enc__field_top_right;
          check_receiver(_fieldacc_111, ".", "this.top_right", "add", "\"main.enc\" (line 204, column 25)");
          future_t* _fut_110 = _enc__method_Box_add_future(_ctx, _fieldacc_111, _a_103);
          int64_t _tmp_112 = future_get_actor(_ctx, _fut_110).i;
          int64_t _unary_113 = (! _tmp_112); _unary_113;}))
    {
      /* if not get this.top_left.add(a) then
  if not get this.bottom_right.add(a) then
    if not get this.bottom_left.add(a) then
      () */;
      void* _ite_114;
      if (({_enc__active_Box_t* _fieldacc_116 = (*_this)._enc__field_top_left;
            check_receiver(_fieldacc_116, ".", "this.top_left", "add", "\"main.enc\" (line 205, column 25)");
            future_t* _fut_115 = _enc__method_Box_add_future(_ctx, _fieldacc_116, _a_103);
            int64_t _tmp_117 = future_get_actor(_ctx, _fut_115).i;
            int64_t _unary_118 = (! _tmp_117); _unary_118;}))
      {
        /* if not get this.bottom_right.add(a) then
  if not get this.bottom_left.add(a) then
    () */;
        void* _ite_119;
        if (({_enc__active_Box_t* _fieldacc_121 = (*_this)._enc__field_bottom_right;
              check_receiver(_fieldacc_121, ".", "this.bottom_right", "add", "\"main.enc\" (line 206, column 25)");
              future_t* _fut_120 = _enc__method_Box_add_future(_ctx, _fieldacc_121, _a_103);
              int64_t _tmp_122 = future_get_actor(_ctx, _fut_120).i;
              int64_t _unary_123 = (! _tmp_122); _unary_123;}))
        {
          /* if not get this.bottom_left.add(a) then
  () */;
          void* _ite_124;
          if (({_enc__active_Box_t* _fieldacc_126 = (*_this)._enc__field_bottom_left;
                check_receiver(_fieldacc_126, ".", "this.bottom_left", "add", "\"main.enc\" (line 207, column 25)");
                future_t* _fut_125 = _enc__method_Box_add_future(_ctx, _fieldacc_126, _a_103);
                int64_t _tmp_127 = future_get_actor(_ctx, _fut_125).i;
                int64_t _unary_128 = (! _tmp_127); _unary_128;}))
          {
            /* () */;
            UNIT;
            _ite_124 = ((void*) UNIT);
          }
          else
          {
            UNIT;
            _ite_124 = ((void*) UNIT);
          };
          _ite_119 = ((void*) _ite_124);
        }
        else
        {
          UNIT;
          _ite_119 = ((void*) UNIT);
        };
        _ite_114 = ((void*) _ite_119);
      }
      else
      {
        UNIT;
        _ite_114 = ((void*) UNIT);
      };
      _ite_109 = ((void*) _ite_114);
    }
    else
    {
      /* print("SOMEONE GOT NO BOX!\n") */;
      _enc__passive_String_t* _new_129 = _enc__constructor_String(_ctx);
      char* _embed_130 = ({"SOMEONE GOT NO BOX!\n";});
      _enc__type_init_String(_new_129);
      _enc__method_String__init(_ctx, _new_129, _embed_130);
      printf("%s", ((_enc__passive_String_t*) _new_129)->_enc__field_data);
      _ite_109 = ((void*) UNIT);
    };
    _for_101 = _ite_109;
    _index_102 = (_index_102 + _step_106);
  };
  /* let win = true */;
  /* win = true */;
  int64_t _literal_131 = 1/*True*/;
  int64_t _win_132 = _literal_131;
  /* win = win and get this.top_right.link(this.top_left) */;
  int64_t _binop_137 = (({ _win_132;}) && ({_enc__active_Box_t* _fieldacc_134 = (*_this)._enc__field_top_right;
                                            check_receiver(_fieldacc_134, ".", "this.top_right", "link", "\"main.enc\" (line 213, column 26)");
                                            _enc__active_Box_t* _fieldacc_135 = (*_this)._enc__field_top_left;
                                            future_t* _fut_133 = _enc__method_Box_link_future(_ctx, _fieldacc_134, _fieldacc_135);
                                            int64_t _tmp_136 = future_get_actor(_ctx, _fut_133).i; _tmp_136;}));
  _win_132 = _binop_137;
  /* win = win and get this.top_right.link(this.bottom_right) */;
  int64_t _binop_142 = (({ _win_132;}) && ({_enc__active_Box_t* _fieldacc_139 = (*_this)._enc__field_top_right;
                                            check_receiver(_fieldacc_139, ".", "this.top_right", "link", "\"main.enc\" (line 214, column 26)");
                                            _enc__active_Box_t* _fieldacc_140 = (*_this)._enc__field_bottom_right;
                                            future_t* _fut_138 = _enc__method_Box_link_future(_ctx, _fieldacc_139, _fieldacc_140);
                                            int64_t _tmp_141 = future_get_actor(_ctx, _fut_138).i; _tmp_141;}));
  _win_132 = _binop_142;
  /* win = win and get this.top_left.link(this.top_right) */;
  int64_t _binop_147 = (({ _win_132;}) && ({_enc__active_Box_t* _fieldacc_144 = (*_this)._enc__field_top_left;
                                            check_receiver(_fieldacc_144, ".", "this.top_left", "link", "\"main.enc\" (line 215, column 26)");
                                            _enc__active_Box_t* _fieldacc_145 = (*_this)._enc__field_top_right;
                                            future_t* _fut_143 = _enc__method_Box_link_future(_ctx, _fieldacc_144, _fieldacc_145);
                                            int64_t _tmp_146 = future_get_actor(_ctx, _fut_143).i; _tmp_146;}));
  _win_132 = _binop_147;
  /* win = win and get this.top_left.link(this.bottom_left) */;
  int64_t _binop_152 = (({ _win_132;}) && ({_enc__active_Box_t* _fieldacc_149 = (*_this)._enc__field_top_left;
                                            check_receiver(_fieldacc_149, ".", "this.top_left", "link", "\"main.enc\" (line 216, column 26)");
                                            _enc__active_Box_t* _fieldacc_150 = (*_this)._enc__field_bottom_left;
                                            future_t* _fut_148 = _enc__method_Box_link_future(_ctx, _fieldacc_149, _fieldacc_150);
                                            int64_t _tmp_151 = future_get_actor(_ctx, _fut_148).i; _tmp_151;}));
  _win_132 = _binop_152;
  /* win = win and get this.bottom_left.link(this.bottom_right) */;
  int64_t _binop_157 = (({ _win_132;}) && ({_enc__active_Box_t* _fieldacc_154 = (*_this)._enc__field_bottom_left;
                                            check_receiver(_fieldacc_154, ".", "this.bottom_left", "link", "\"main.enc\" (line 217, column 26)");
                                            _enc__active_Box_t* _fieldacc_155 = (*_this)._enc__field_bottom_right;
                                            future_t* _fut_153 = _enc__method_Box_link_future(_ctx, _fieldacc_154, _fieldacc_155);
                                            int64_t _tmp_156 = future_get_actor(_ctx, _fut_153).i; _tmp_156;}));
  _win_132 = _binop_157;
  /* win = win and get this.bottom_left.link(this.top_left) */;
  int64_t _binop_162 = (({ _win_132;}) && ({_enc__active_Box_t* _fieldacc_159 = (*_this)._enc__field_bottom_left;
                                            check_receiver(_fieldacc_159, ".", "this.bottom_left", "link", "\"main.enc\" (line 218, column 26)");
                                            _enc__active_Box_t* _fieldacc_160 = (*_this)._enc__field_top_left;
                                            future_t* _fut_158 = _enc__method_Box_link_future(_ctx, _fieldacc_159, _fieldacc_160);
                                            int64_t _tmp_161 = future_get_actor(_ctx, _fut_158).i; _tmp_161;}));
  _win_132 = _binop_162;
  /* win = win and get this.bottom_right.link(this.top_right) */;
  int64_t _binop_167 = (({ _win_132;}) && ({_enc__active_Box_t* _fieldacc_164 = (*_this)._enc__field_bottom_right;
                                            check_receiver(_fieldacc_164, ".", "this.bottom_right", "link", "\"main.enc\" (line 219, column 26)");
                                            _enc__active_Box_t* _fieldacc_165 = (*_this)._enc__field_top_right;
                                            future_t* _fut_163 = _enc__method_Box_link_future(_ctx, _fieldacc_164, _fieldacc_165);
                                            int64_t _tmp_166 = future_get_actor(_ctx, _fut_163).i; _tmp_166;}));
  _win_132 = _binop_167;
  /* win = win and get this.bottom_right.link(this.bottom_left) */;
  int64_t _binop_172 = (({ _win_132;}) && ({_enc__active_Box_t* _fieldacc_169 = (*_this)._enc__field_bottom_right;
                                            check_receiver(_fieldacc_169, ".", "this.bottom_right", "link", "\"main.enc\" (line 220, column 26)");
                                            _enc__active_Box_t* _fieldacc_170 = (*_this)._enc__field_bottom_left;
                                            future_t* _fut_168 = _enc__method_Box_link_future(_ctx, _fieldacc_169, _fieldacc_170);
                                            int64_t _tmp_171 = future_get_actor(_ctx, _fut_168).i; _tmp_171;}));
  _win_132 = _binop_172;
  /* print("WIN={}\n", win) */;
  printf("WIN=%s\n", _win_132? "true": "false");
  return UNIT;
}


tuple_t* _enc__method_Multi_box_max(pony_ctx_t** _ctx, _enc__active_Multi_box_t* _this)
{
  /* this.max */;
  tuple_t* _fieldacc_0 = (*_this)._enc__field_max;
  return _fieldacc_0;
}


tuple_t* _enc__method_Multi_box_min(pony_ctx_t** _ctx, _enc__active_Multi_box_t* _this)
{
  /* this.min */;
  tuple_t* _fieldacc_0 = (*_this)._enc__field_min;
  return _fieldacc_0;
}


int64_t _enc__method_Multi_box_move(pony_ctx_t** _ctx, _enc__active_Multi_box_t* _this)
{
  /* let a = this.top_right.move() */;
  /* a = this.top_right.move() */;
  _enc__active_Box_t* _fieldacc_1 = (*_this)._enc__field_top_right;
  check_receiver(_fieldacc_1, ".", "this.top_right", "move", "\"main.enc\" (line 227, column 17)");
  future_t* _fut_0 = _enc__method_Box_move_future(_ctx, _fieldacc_1);
  future_t* _a_2 = _fut_0;
  /* let b = this.top_left.move() */;
  /* b = this.top_left.move() */;
  _enc__active_Box_t* _fieldacc_4 = (*_this)._enc__field_top_left;
  check_receiver(_fieldacc_4, ".", "this.top_left", "move", "\"main.enc\" (line 228, column 17)");
  future_t* _fut_3 = _enc__method_Box_move_future(_ctx, _fieldacc_4);
  future_t* _b_5 = _fut_3;
  /* let c = this.bottom_right.move() */;
  /* c = this.bottom_right.move() */;
  _enc__active_Box_t* _fieldacc_7 = (*_this)._enc__field_bottom_right;
  check_receiver(_fieldacc_7, ".", "this.bottom_right", "move", "\"main.enc\" (line 229, column 17)");
  future_t* _fut_6 = _enc__method_Box_move_future(_ctx, _fieldacc_7);
  future_t* _c_8 = _fut_6;
  /* let d = this.bottom_left.move() */;
  /* d = this.bottom_left.move() */;
  _enc__active_Box_t* _fieldacc_10 = (*_this)._enc__field_bottom_left;
  check_receiver(_fieldacc_10, ".", "this.bottom_left", "move", "\"main.enc\" (line 230, column 17)");
  future_t* _fut_9 = _enc__method_Box_move_future(_ctx, _fieldacc_10);
  future_t* _d_11 = _fut_9;
  /* get a or get b or get c or get d */;
  int64_t _binop_18 = (({int64_t _binop_16 = (({int64_t _binop_14 = (({int64_t _tmp_12 = future_get_actor(_ctx, _a_2).i; _tmp_12;}) || ({int64_t _tmp_13 = future_get_actor(_ctx, _b_5).i; _tmp_13;})); _binop_14;}) || ({int64_t _tmp_15 = future_get_actor(_ctx, _c_8).i; _tmp_15;})); _binop_16;}) || ({int64_t _tmp_17 = future_get_actor(_ctx, _d_11).i; _tmp_17;}));
  return _binop_18;
}


array_t* _enc__method_Multi_box_agents(pony_ctx_t** _ctx, _enc__active_Multi_box_t* _this)
{
  /* flatten([get this.top_right.agents(), 
         get this.top_left.agents(), 
         get this.bottom_right.agents(), 
         get this.bottom_left.agents()]) */;
  array_t* _array_0 = array_mk(_ctx, 4, (&(array_type)));
  _enc__active_Box_t* _fieldacc_2 = (*_this)._enc__field_top_right;
  check_receiver(_fieldacc_2, ".", "this.top_right", "agents", "\"main.enc\" (line 233, column 43)");
  future_t* _fut_1 = _enc__method_Box_agents_future(_ctx, _fieldacc_2);
  array_t* _tmp_3 = future_get_actor(_ctx, _fut_1).p;
  _enc__active_Box_t* _fieldacc_5 = (*_this)._enc__field_top_left;
  check_receiver(_fieldacc_5, ".", "this.top_left", "agents", "\"main.enc\" (line 234, column 34)");
  future_t* _fut_4 = _enc__method_Box_agents_future(_ctx, _fieldacc_5);
  array_t* _tmp_6 = future_get_actor(_ctx, _fut_4).p;
  _enc__active_Box_t* _fieldacc_8 = (*_this)._enc__field_bottom_right;
  check_receiver(_fieldacc_8, ".", "this.bottom_right", "agents", "\"main.enc\" (line 235, column 34)");
  future_t* _fut_7 = _enc__method_Box_agents_future(_ctx, _fieldacc_8);
  array_t* _tmp_9 = future_get_actor(_ctx, _fut_7).p;
  _enc__active_Box_t* _fieldacc_11 = (*_this)._enc__field_bottom_left;
  check_receiver(_fieldacc_11, ".", "this.bottom_left", "agents", "\"main.enc\" (line 236, column 34)");
  future_t* _fut_10 = _enc__method_Box_agents_future(_ctx, _fieldacc_11);
  array_t* _tmp_12 = future_get_actor(_ctx, _fut_10).p;
  array_set(_array_0, 0, ((encore_arg_t) {.p = _tmp_3}));
  array_set(_array_0, 1, ((encore_arg_t) {.p = _tmp_6}));
  array_set(_array_0, 2, ((encore_arg_t) {.p = _tmp_9}));
  array_set(_array_0, 3, ((encore_arg_t) {.p = _tmp_12}));
  pony_type_t* _tmp_13[] = {};
  array_t* _global_f_14 = _enc__global_fun_flatten(_ctx, NULL, _array_0);
  return _global_f_14;
}


tuple_t* _enc__method_Multi_box_find_extreme(pony_ctx_t** _ctx, _enc__active_Multi_box_t* _this, array_t* _enc__arg_agents)
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
    _enc__passive_Agent_t* _a_12 = array_get(_enc__arg_agents, _index_11).p;
    /* i = i + 1 */;
    int64_t _binop_19 = (({ _i_9;}) + ({int64_t _literal_18 = 1; _literal_18;}));
    _i_9 = _binop_19;
    /* extreme = this.extreme_check(a.pos(), extreme) */;
    check_receiver(_this, ".", "this", "extreme_check", "\"main.enc\" (line 243, column 21)");
    check_receiver(_a_12, ".", "a", "pos", "\"main.enc\" (line 243, column 40)");
    tuple_t* _sync_method_call_21 = _enc__method_Agent_pos(_ctx, _a_12);
    tuple_t* _sync_method_call_20 = _enc__method_Multi_box_extreme_check(_ctx, _this, _sync_method_call_21, _extreme_7);
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
      check_receiver(_this, ".", "this", "extreme_check", "\"main.enc\" (line 245, column 25)");
      tuple_t* _sync_method_call_31 = _enc__method_Multi_box_extreme_check(_ctx, _this, _b_24, _extreme_7);
      _extreme_7 = _sync_method_call_31;
      _for_22 = UNIT;
      _index_23 = (_index_23 + _step_27);
    };
    _for_10 = _for_22;
    _index_11 = (_index_11 + _step_15);
  };
  /* extreme */;
  return _extreme_7;
}


tuple_t* _enc__method_Multi_box_extreme_check(pony_ctx_t** _ctx, _enc__active_Multi_box_t* _this, tuple_t* _enc__arg_a, tuple_t* _enc__arg_b)
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
                             int64_t _global_f_10 = _enc__global_fun_max(_ctx, NULL, _x_2, _xmax_4);
                             pony_type_t* _tmp_11[] = {};
                             int64_t _global_f_12 = _enc__global_fun_max(_ctx, NULL, _y_3, _ymax_5);
                             pony_type_t* _tmp_13[] = {};
                             int64_t _global_f_14 = _enc__global_fun_min(_ctx, NULL, _x_2, _xmin_6);
                             pony_type_t* _tmp_15[] = {};
                             int64_t _global_f_16 = _enc__global_fun_min(_ctx, NULL, _y_3, _ymin_7);
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
  return _match_0;
}


future_t* _enc__method_Multi_box__init_future(pony_ctx_t** _ctx, _enc__active_Multi_box_t* _this, array_t* _enc__arg_agents)
{
  future_t* _fut = future_mk(_ctx, ENCORE_PRIMITIVE);
  pony_gc_send((*_ctx));
  pony_traceobject((*_ctx), _enc__arg_agents, array_trace);
  pony_traceobject((*_ctx), _fut, future_trace);
  pony_send_done((*_ctx));
  _enc__fut_msg_Multi_box__init_t* msg = ((_enc__fut_msg_Multi_box__init_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__fut_msg_Multi_box__init_t)), _ENC__FUT_MSG_Multi_box__init));
  msg->f1 = _enc__arg_agents;
  msg->_fut = _fut;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
  return _fut;
}


future_t* _enc__method_Multi_box_max_future(pony_ctx_t** _ctx, _enc__active_Multi_box_t* _this)
{
  future_t* _fut = future_mk(_ctx, (&(tuple_type)));
  pony_gc_send((*_ctx));
  pony_traceobject((*_ctx), _fut, future_trace);
  pony_send_done((*_ctx));
  _enc__fut_msg_Multi_box_max_t* msg = ((_enc__fut_msg_Multi_box_max_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__fut_msg_Multi_box_max_t)), _ENC__FUT_MSG_Multi_box_max));
  msg->_fut = _fut;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
  return _fut;
}


future_t* _enc__method_Multi_box_min_future(pony_ctx_t** _ctx, _enc__active_Multi_box_t* _this)
{
  future_t* _fut = future_mk(_ctx, (&(tuple_type)));
  pony_gc_send((*_ctx));
  pony_traceobject((*_ctx), _fut, future_trace);
  pony_send_done((*_ctx));
  _enc__fut_msg_Multi_box_min_t* msg = ((_enc__fut_msg_Multi_box_min_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__fut_msg_Multi_box_min_t)), _ENC__FUT_MSG_Multi_box_min));
  msg->_fut = _fut;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
  return _fut;
}


future_t* _enc__method_Multi_box_move_future(pony_ctx_t** _ctx, _enc__active_Multi_box_t* _this)
{
  future_t* _fut = future_mk(_ctx, ENCORE_PRIMITIVE);
  pony_gc_send((*_ctx));
  pony_traceobject((*_ctx), _fut, future_trace);
  pony_send_done((*_ctx));
  _enc__fut_msg_Multi_box_move_t* msg = ((_enc__fut_msg_Multi_box_move_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__fut_msg_Multi_box_move_t)), _ENC__FUT_MSG_Multi_box_move));
  msg->_fut = _fut;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
  return _fut;
}


future_t* _enc__method_Multi_box_agents_future(pony_ctx_t** _ctx, _enc__active_Multi_box_t* _this)
{
  future_t* _fut = future_mk(_ctx, (&(array_type)));
  pony_gc_send((*_ctx));
  pony_traceobject((*_ctx), _fut, future_trace);
  pony_send_done((*_ctx));
  _enc__fut_msg_Multi_box_agents_t* msg = ((_enc__fut_msg_Multi_box_agents_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__fut_msg_Multi_box_agents_t)), _ENC__FUT_MSG_Multi_box_agents));
  msg->_fut = _fut;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
  return _fut;
}


future_t* _enc__method_Multi_box_find_extreme_future(pony_ctx_t** _ctx, _enc__active_Multi_box_t* _this, array_t* _enc__arg_agents)
{
  future_t* _fut = future_mk(_ctx, (&(tuple_type)));
  pony_gc_send((*_ctx));
  pony_traceobject((*_ctx), _enc__arg_agents, array_trace);
  pony_traceobject((*_ctx), _fut, future_trace);
  pony_send_done((*_ctx));
  _enc__fut_msg_Multi_box_find_extreme_t* msg = ((_enc__fut_msg_Multi_box_find_extreme_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__fut_msg_Multi_box_find_extreme_t)), _ENC__FUT_MSG_Multi_box_find_extreme));
  msg->f1 = _enc__arg_agents;
  msg->_fut = _fut;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
  return _fut;
}


future_t* _enc__method_Multi_box_extreme_check_future(pony_ctx_t** _ctx, _enc__active_Multi_box_t* _this, tuple_t* _enc__arg_a, tuple_t* _enc__arg_b)
{
  future_t* _fut = future_mk(_ctx, (&(tuple_type)));
  pony_gc_send((*_ctx));
  pony_traceobject((*_ctx), _enc__arg_a, tuple_trace);
  pony_traceobject((*_ctx), _enc__arg_b, tuple_trace);
  pony_traceobject((*_ctx), _fut, future_trace);
  pony_send_done((*_ctx));
  _enc__fut_msg_Multi_box_extreme_check_t* msg = ((_enc__fut_msg_Multi_box_extreme_check_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__fut_msg_Multi_box_extreme_check_t)), _ENC__FUT_MSG_Multi_box_extreme_check));
  msg->f1 = _enc__arg_a;
  msg->f2 = _enc__arg_b;
  msg->_fut = _fut;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
  return _fut;
}


void _enc__method_Multi_box__init_one_way(pony_ctx_t** _ctx, _enc__active_Multi_box_t* _this, array_t* _enc__arg_agents)
{
  pony_gc_send((*_ctx));
  pony_traceobject((*_ctx), _enc__arg_agents, array_trace);
  /* No tracing future for oneway msg */;
  pony_send_done((*_ctx));
  _enc__oneway_msg_Multi_box__init_t* msg = ((_enc__oneway_msg_Multi_box__init_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__oneway_msg_Multi_box__init_t)), _ENC__ONEWAY_MSG_Multi_box__init));
  msg->f1 = _enc__arg_agents;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
}


void _enc__method_Multi_box_max_one_way(pony_ctx_t** _ctx, _enc__active_Multi_box_t* _this)
{
  pony_gc_send((*_ctx));
  /* No tracing future for oneway msg */;
  pony_send_done((*_ctx));
  _enc__oneway_msg_Multi_box_max_t* msg = ((_enc__oneway_msg_Multi_box_max_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__oneway_msg_Multi_box_max_t)), _ENC__ONEWAY_MSG_Multi_box_max));
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
}


void _enc__method_Multi_box_min_one_way(pony_ctx_t** _ctx, _enc__active_Multi_box_t* _this)
{
  pony_gc_send((*_ctx));
  /* No tracing future for oneway msg */;
  pony_send_done((*_ctx));
  _enc__oneway_msg_Multi_box_min_t* msg = ((_enc__oneway_msg_Multi_box_min_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__oneway_msg_Multi_box_min_t)), _ENC__ONEWAY_MSG_Multi_box_min));
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
}


void _enc__method_Multi_box_move_one_way(pony_ctx_t** _ctx, _enc__active_Multi_box_t* _this)
{
  pony_gc_send((*_ctx));
  /* No tracing future for oneway msg */;
  pony_send_done((*_ctx));
  _enc__oneway_msg_Multi_box_move_t* msg = ((_enc__oneway_msg_Multi_box_move_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__oneway_msg_Multi_box_move_t)), _ENC__ONEWAY_MSG_Multi_box_move));
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
}


void _enc__method_Multi_box_agents_one_way(pony_ctx_t** _ctx, _enc__active_Multi_box_t* _this)
{
  pony_gc_send((*_ctx));
  /* No tracing future for oneway msg */;
  pony_send_done((*_ctx));
  _enc__oneway_msg_Multi_box_agents_t* msg = ((_enc__oneway_msg_Multi_box_agents_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__oneway_msg_Multi_box_agents_t)), _ENC__ONEWAY_MSG_Multi_box_agents));
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
}


void _enc__method_Multi_box_find_extreme_one_way(pony_ctx_t** _ctx, _enc__active_Multi_box_t* _this, array_t* _enc__arg_agents)
{
  pony_gc_send((*_ctx));
  pony_traceobject((*_ctx), _enc__arg_agents, array_trace);
  /* No tracing future for oneway msg */;
  pony_send_done((*_ctx));
  _enc__oneway_msg_Multi_box_find_extreme_t* msg = ((_enc__oneway_msg_Multi_box_find_extreme_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__oneway_msg_Multi_box_find_extreme_t)), _ENC__ONEWAY_MSG_Multi_box_find_extreme));
  msg->f1 = _enc__arg_agents;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
}


void _enc__method_Multi_box_extreme_check_one_way(pony_ctx_t** _ctx, _enc__active_Multi_box_t* _this, tuple_t* _enc__arg_a, tuple_t* _enc__arg_b)
{
  pony_gc_send((*_ctx));
  pony_traceobject((*_ctx), _enc__arg_a, tuple_trace);
  pony_traceobject((*_ctx), _enc__arg_b, tuple_trace);
  /* No tracing future for oneway msg */;
  pony_send_done((*_ctx));
  _enc__oneway_msg_Multi_box_extreme_check_t* msg = ((_enc__oneway_msg_Multi_box_extreme_check_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__oneway_msg_Multi_box_extreme_check_t)), _ENC__ONEWAY_MSG_Multi_box_extreme_check));
  msg->f1 = _enc__arg_a;
  msg->f2 = _enc__arg_b;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
}


static void _enc__dispatch_Multi_box(pony_ctx_t** _ctx, pony_actor_t* _a, pony_msg_t* _m)
{
  _enc__active_Multi_box_t* _this = ((_enc__active_Multi_box_t*) _a);
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
    case _ENC__FUT_MSG_Multi_box__init:
    {
      future_t* _fut = ((encore_fut_msg_t*) _m)->_fut;
      array_t* _enc__arg_agents = ((_enc__fut_msg_Multi_box__init_t*) _m)->f1;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      pony_traceobject((*_ctx), _enc__arg_agents, array_trace);
      pony_traceobject((*_ctx), _fut, future_type.trace);
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      future_fulfil(_ctx, _fut, ((encore_arg_t) {.p = _enc__method_Multi_box__init(_ctx, _this, _enc__arg_agents)}));
      break;
    }
    case _ENC__ONEWAY_MSG_Multi_box__init:
    {
      array_t* _enc__arg_agents = ((_enc__oneway_msg_Multi_box__init_t*) _m)->f1;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      pony_traceobject((*_ctx), _enc__arg_agents, array_trace);
      /* Not tracing the future in a oneWay send */;
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      _enc__method_Multi_box__init(_ctx, _this, _enc__arg_agents);
      break;
    }
    case _ENC__FUT_MSG_Multi_box_max:
    {
      future_t* _fut = ((encore_fut_msg_t*) _m)->_fut;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      pony_traceobject((*_ctx), _fut, future_type.trace);
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      future_fulfil(_ctx, _fut, ((encore_arg_t) {.p = _enc__method_Multi_box_max(_ctx, _this)}));
      break;
    }
    case _ENC__ONEWAY_MSG_Multi_box_max:
    {
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      /* Not tracing the future in a oneWay send */;
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      _enc__method_Multi_box_max(_ctx, _this);
      break;
    }
    case _ENC__FUT_MSG_Multi_box_min:
    {
      future_t* _fut = ((encore_fut_msg_t*) _m)->_fut;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      pony_traceobject((*_ctx), _fut, future_type.trace);
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      future_fulfil(_ctx, _fut, ((encore_arg_t) {.p = _enc__method_Multi_box_min(_ctx, _this)}));
      break;
    }
    case _ENC__ONEWAY_MSG_Multi_box_min:
    {
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      /* Not tracing the future in a oneWay send */;
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      _enc__method_Multi_box_min(_ctx, _this);
      break;
    }
    case _ENC__FUT_MSG_Multi_box_move:
    {
      future_t* _fut = ((encore_fut_msg_t*) _m)->_fut;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      pony_traceobject((*_ctx), _fut, future_type.trace);
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      future_fulfil(_ctx, _fut, ((encore_arg_t) {.i = _enc__method_Multi_box_move(_ctx, _this)}));
      break;
    }
    case _ENC__ONEWAY_MSG_Multi_box_move:
    {
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      /* Not tracing the future in a oneWay send */;
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      _enc__method_Multi_box_move(_ctx, _this);
      break;
    }
    case _ENC__FUT_MSG_Multi_box_agents:
    {
      future_t* _fut = ((encore_fut_msg_t*) _m)->_fut;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      pony_traceobject((*_ctx), _fut, future_type.trace);
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      future_fulfil(_ctx, _fut, ((encore_arg_t) {.p = _enc__method_Multi_box_agents(_ctx, _this)}));
      break;
    }
    case _ENC__ONEWAY_MSG_Multi_box_agents:
    {
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      /* Not tracing the future in a oneWay send */;
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      _enc__method_Multi_box_agents(_ctx, _this);
      break;
    }
    case _ENC__FUT_MSG_Multi_box_find_extreme:
    {
      future_t* _fut = ((encore_fut_msg_t*) _m)->_fut;
      array_t* _enc__arg_agents = ((_enc__fut_msg_Multi_box_find_extreme_t*) _m)->f1;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      pony_traceobject((*_ctx), _enc__arg_agents, array_trace);
      pony_traceobject((*_ctx), _fut, future_type.trace);
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      future_fulfil(_ctx, _fut, ((encore_arg_t) {.p = _enc__method_Multi_box_find_extreme(_ctx, _this, _enc__arg_agents)}));
      break;
    }
    case _ENC__ONEWAY_MSG_Multi_box_find_extreme:
    {
      array_t* _enc__arg_agents = ((_enc__oneway_msg_Multi_box_find_extreme_t*) _m)->f1;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      pony_traceobject((*_ctx), _enc__arg_agents, array_trace);
      /* Not tracing the future in a oneWay send */;
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      _enc__method_Multi_box_find_extreme(_ctx, _this, _enc__arg_agents);
      break;
    }
    case _ENC__FUT_MSG_Multi_box_extreme_check:
    {
      future_t* _fut = ((encore_fut_msg_t*) _m)->_fut;
      tuple_t* _enc__arg_a = ((_enc__fut_msg_Multi_box_extreme_check_t*) _m)->f1;
      tuple_t* _enc__arg_b = ((_enc__fut_msg_Multi_box_extreme_check_t*) _m)->f2;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      pony_traceobject((*_ctx), _enc__arg_a, tuple_trace);
      pony_traceobject((*_ctx), _enc__arg_b, tuple_trace);
      pony_traceobject((*_ctx), _fut, future_type.trace);
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      future_fulfil(_ctx, _fut, ((encore_arg_t) {.p = _enc__method_Multi_box_extreme_check(_ctx, _this, _enc__arg_a, _enc__arg_b)}));
      break;
    }
    case _ENC__ONEWAY_MSG_Multi_box_extreme_check:
    {
      tuple_t* _enc__arg_a = ((_enc__oneway_msg_Multi_box_extreme_check_t*) _m)->f1;
      tuple_t* _enc__arg_b = ((_enc__oneway_msg_Multi_box_extreme_check_t*) _m)->f2;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      pony_traceobject((*_ctx), _enc__arg_a, tuple_trace);
      pony_traceobject((*_ctx), _enc__arg_b, tuple_trace);
      /* Not tracing the future in a oneWay send */;
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      _enc__method_Multi_box_extreme_check(_ctx, _this, _enc__arg_a, _enc__arg_b);
      break;
    }
    default:
    {
      printf("error, got invalid id: %zd", _m->id);
    }
  };
}


pony_type_t _enc__active_Multi_box_type = {.id=_ENC__ID_Multi_box, .size=sizeof(_enc__active_Multi_box_t), .trace=_enc__trace_Multi_box, .dispatch=_enc__dispatch_Multi_box, .vtable=trait_method_selector};
