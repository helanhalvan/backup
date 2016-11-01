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
  _enc__active_Box_t* _enc__field_toplevel;
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
  encore_trace_object((*_ctx), _enc__field_max, tuple_trace);
  tuple_t* _enc__field_min = _this->_enc__field_min;
  encore_trace_object((*_ctx), _enc__field_min, tuple_trace);
  _enc__active_Box_t* _enc__field_top_right = _this->_enc__field_top_right;
  encore_trace_actor((*_ctx), ((pony_actor_t*) _enc__field_top_right));
  _enc__active_Box_t* _enc__field_bottom_right = _this->_enc__field_bottom_right;
  encore_trace_actor((*_ctx), ((pony_actor_t*) _enc__field_bottom_right));
  _enc__active_Box_t* _enc__field_top_left = _this->_enc__field_top_left;
  encore_trace_actor((*_ctx), ((pony_actor_t*) _enc__field_top_left));
  _enc__active_Box_t* _enc__field_bottom_left = _this->_enc__field_bottom_left;
  encore_trace_actor((*_ctx), ((pony_actor_t*) _enc__field_bottom_left));
  _enc__active_Box_t* _enc__field_toplevel = _this->_enc__field_toplevel;
  encore_trace_actor((*_ctx), ((pony_actor_t*) _enc__field_toplevel));
}


_enc__active_Multi_box_t* _enc__constructor_Multi_box(pony_ctx_t** _ctx)
{
  _enc__active_Multi_box_t* this = ((_enc__active_Multi_box_t*) encore_create((*_ctx), (&(_enc__active_Multi_box_type))));
  return this;
}


void* _enc__method_Multi_box__init(pony_ctx_t** _ctx, _enc__active_Multi_box_t* _this, array_t* _enc__arg_agents)
{
  /* let dx = 0
    dy = 0
in
  {match this.find_extreme(agents) with
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
                                  this.toplevel = new Box((100000, 100000), (- 100000, - 100000));
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
   ;
   for a in agents
     if not get this.top_right.add(a) then
       if not get this.top_left.add(a) then
         if not get this.bottom_right.add(a) then
           if not get this.bottom_left.add(a) then
             ()
     else
       print("SOMEONE GOT NO BOX!\n");
   let win = true;
   win = win and get this.top_right.link(this.top_left);
   win = win and get this.top_right.link(this.bottom_right);
   win = win and get this.top_left.link(this.top_right);
   win = win and get this.top_left.link(this.bottom_left);
   win = win and get this.bottom_left.link(this.bottom_right);
   win = win and get this.bottom_left.link(this.top_left);
   win = win and get this.bottom_right.link(this.top_right);
   win = win and get this.bottom_right.link(this.bottom_left);
   this.top_right.default_link(this.toplevel);
   this.top_left.default_link(this.toplevel);
   this.bottom_right.default_link(this.toplevel);
   this.bottom_left.default_link(this.toplevel);
   print("WIN={}\n", win)} */;
  /* dx = 0 */;
  int64_t _literal_0 = 0;
  int64_t _dx_1 = _literal_0;
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
                               this.toplevel = new Box((100000, 100000), (- 100000, - 100000));
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
  check_receiver(_this, ".", "this", "find_extreme", "\"main.enc\" (line 215, column 15)");
  tuple_t* _sync_method_call_5 = _enc__method_Multi_box_find_extreme(_ctx, _this, _enc__arg_agents);
  void* _match_4;
  int64_t _xmax_6;
  int64_t _ymax_7;
  int64_t _xmin_8;
  int64_t _ymin_9;
  if ((({int64_t _tupleCheck_100;
         _tupleCheck_100 = 1;
         int64_t _tupleAccess_101 = tuple_get(_sync_method_call_5, 0).i;
         int64_t _varBinding_102;
         _xmax_6 = _tupleAccess_101;
         _varBinding_102 = 1;
         _tupleCheck_100 = (_tupleCheck_100 && _varBinding_102);
         int64_t _tupleAccess_103 = tuple_get(_sync_method_call_5, 1).i;
         int64_t _varBinding_104;
         _ymax_7 = _tupleAccess_103;
         _varBinding_104 = 1;
         _tupleCheck_100 = (_tupleCheck_100 && _varBinding_104);
         int64_t _tupleAccess_105 = tuple_get(_sync_method_call_5, 2).i;
         int64_t _varBinding_106;
         _xmin_8 = _tupleAccess_105;
         _varBinding_106 = 1;
         _tupleCheck_100 = (_tupleCheck_100 && _varBinding_106);
         int64_t _tupleAccess_107 = tuple_get(_sync_method_call_5, 3).i;
         int64_t _varBinding_108;
         _ymin_9 = _tupleAccess_107;
         _varBinding_108 = 1;
         _tupleCheck_100 = (_tupleCheck_100 && _varBinding_108); _tupleCheck_100;}) && ({int64_t _literal_109 = 1/*True*/; _literal_109;})))
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
                          /* this.toplevel = new Box((100000, 100000), (- 100000, - 100000)) */;
                          _enc__active_Box_t* _new_67 = _enc__constructor_Box(_ctx);
                          tuple_t* _tuple_68 = tuple_mk(_ctx, 2);
                          tuple_set_type(_tuple_68, 0, ENCORE_PRIMITIVE);
                          tuple_set_type(_tuple_68, 1, ENCORE_PRIMITIVE);
                          int64_t _literal_69 = 100000;
                          int64_t _literal_70 = 100000;
                          tuple_set(_tuple_68, 0, ((encore_arg_t) {.i = _literal_69}));
                          tuple_set(_tuple_68, 1, ((encore_arg_t) {.i = _literal_70}));
                          tuple_t* _tuple_71 = tuple_mk(_ctx, 2);
                          tuple_set_type(_tuple_71, 0, ENCORE_PRIMITIVE);
                          tuple_set_type(_tuple_71, 1, ENCORE_PRIMITIVE);
                          int64_t _literal_72 = 100000;
                          int64_t _unary_73 = (- _literal_72);
                          int64_t _literal_74 = 100000;
                          int64_t _unary_75 = (- _literal_74);
                          tuple_set(_tuple_71, 0, ((encore_arg_t) {.i = _unary_73}));
                          tuple_set(_tuple_71, 1, ((encore_arg_t) {.i = _unary_75}));
                          _enc__type_init_Box(_new_67);
                          _enc__method_Box__init_one_way(_ctx, _new_67, _tuple_68, _tuple_71);
                          (*({ _this;}))._enc__field_toplevel = _new_67;
                          /* print("tr {} {}\n", 
      get this.top_right.max(), 
      get this.top_right.min()) */;
                          _enc__active_Box_t* _fieldacc_77 = (*_this)._enc__field_top_right;
                          check_receiver(_fieldacc_77, ".", "this.top_right", "max", "\"main.enc\" (line 226, column 62)");
                          future_t* _fut_76 = _enc__method_Box_max_future(_ctx, _fieldacc_77);
                          tuple_t* _tmp_78 = future_get_actor(_ctx, _fut_76).p;
                          _enc__active_Box_t* _fieldacc_80 = (*_this)._enc__field_top_right;
                          check_receiver(_fieldacc_80, ".", "this.top_right", "min", "\"main.enc\" (line 226, column 88)");
                          future_t* _fut_79 = _enc__method_Box_min_future(_ctx, _fieldacc_80);
                          tuple_t* _tmp_81 = future_get_actor(_ctx, _fut_79).p;
                          printf("tr (%lli, %lli) (%lli, %lli)\n", tuple_get(_tmp_78, 0).i, tuple_get(_tmp_78, 1).i, tuple_get(_tmp_81, 0).i, tuple_get(_tmp_81, 1).i);
                          /* print("bl {} {}\n", 
      get this.bottom_left.max(), 
      get this.bottom_left.min()) */;
                          _enc__active_Box_t* _fieldacc_83 = (*_this)._enc__field_bottom_left;
                          check_receiver(_fieldacc_83, ".", "this.bottom_left", "max", "\"main.enc\" (line 227, column 62)");
                          future_t* _fut_82 = _enc__method_Box_max_future(_ctx, _fieldacc_83);
                          tuple_t* _tmp_84 = future_get_actor(_ctx, _fut_82).p;
                          _enc__active_Box_t* _fieldacc_86 = (*_this)._enc__field_bottom_left;
                          check_receiver(_fieldacc_86, ".", "this.bottom_left", "min", "\"main.enc\" (line 227, column 90)");
                          future_t* _fut_85 = _enc__method_Box_min_future(_ctx, _fieldacc_86);
                          tuple_t* _tmp_87 = future_get_actor(_ctx, _fut_85).p;
                          printf("bl (%lli, %lli) (%lli, %lli)\n", tuple_get(_tmp_84, 0).i, tuple_get(_tmp_84, 1).i, tuple_get(_tmp_87, 0).i, tuple_get(_tmp_87, 1).i);
                          /* print("tl {} {}\n", 
      get this.top_left.max(), 
      get this.top_left.min()) */;
                          _enc__active_Box_t* _fieldacc_89 = (*_this)._enc__field_top_left;
                          check_receiver(_fieldacc_89, ".", "this.top_left", "max", "\"main.enc\" (line 228, column 62)");
                          future_t* _fut_88 = _enc__method_Box_max_future(_ctx, _fieldacc_89);
                          tuple_t* _tmp_90 = future_get_actor(_ctx, _fut_88).p;
                          _enc__active_Box_t* _fieldacc_92 = (*_this)._enc__field_top_left;
                          check_receiver(_fieldacc_92, ".", "this.top_left", "min", "\"main.enc\" (line 228, column 87)");
                          future_t* _fut_91 = _enc__method_Box_min_future(_ctx, _fieldacc_92);
                          tuple_t* _tmp_93 = future_get_actor(_ctx, _fut_91).p;
                          printf("tl (%lli, %lli) (%lli, %lli)\n", tuple_get(_tmp_90, 0).i, tuple_get(_tmp_90, 1).i, tuple_get(_tmp_93, 0).i, tuple_get(_tmp_93, 1).i);
                          /* print("br {} {}\n", 
      get this.bottom_right.max(), 
      get this.bottom_right.min()) */;
                          _enc__active_Box_t* _fieldacc_95 = (*_this)._enc__field_bottom_right;
                          check_receiver(_fieldacc_95, ".", "this.bottom_right", "max", "\"main.enc\" (line 229, column 62)");
                          future_t* _fut_94 = _enc__method_Box_max_future(_ctx, _fieldacc_95);
                          tuple_t* _tmp_96 = future_get_actor(_ctx, _fut_94).p;
                          _enc__active_Box_t* _fieldacc_98 = (*_this)._enc__field_bottom_right;
                          check_receiver(_fieldacc_98, ".", "this.bottom_right", "min", "\"main.enc\" (line 229, column 91)");
                          future_t* _fut_97 = _enc__method_Box_min_future(_ctx, _fieldacc_98);
                          tuple_t* _tmp_99 = future_get_actor(_ctx, _fut_97).p;
                          printf("br (%lli, %lli) (%lli, %lli)\n", tuple_get(_tmp_96, 0).i, tuple_get(_tmp_96, 1).i, tuple_get(_tmp_99, 0).i, tuple_get(_tmp_99, 1).i); UNIT;}));
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
  void* _for_110;
  int64_t _start_113 = 0;
  int64_t _stop_114 = (array_size(_enc__arg_agents) - 1);
  int64_t _src_step_116 = 1;
  int64_t _literal_117 = 1;
  int64_t _step_115 = (_literal_117 * _src_step_116);
  range_assert_step(_step_115);
  int64_t _index_111;
  if ((_step_115 > 0))
  {
    _index_111 = _start_113;
  }
  else
  {
    _index_111 = _stop_114;
  };
  while (((_index_111 >= _start_113) && (_index_111 <= _stop_114)))
  {
    _enc__passive_Agent_t* _a_112 = array_get(_enc__arg_agents, _index_111).p;
    /* if not get this.top_right.add(a) then
  if not get this.top_left.add(a) then
    if not get this.bottom_right.add(a) then
      if not get this.bottom_left.add(a) then
        ()
else
  print("SOMEONE GOT NO BOX!\n") */;
    void* _ite_118;
    if (({_enc__active_Box_t* _fieldacc_120 = (*_this)._enc__field_top_right;
          check_receiver(_fieldacc_120, ".", "this.top_right", "add", "\"main.enc\" (line 234, column 25)");
          future_t* _fut_119 = _enc__method_Box_add_future(_ctx, _fieldacc_120, _a_112);
          int64_t _tmp_121 = future_get_actor(_ctx, _fut_119).i;
          int64_t _unary_122 = (! _tmp_121); _unary_122;}))
    {
      /* if not get this.top_left.add(a) then
  if not get this.bottom_right.add(a) then
    if not get this.bottom_left.add(a) then
      () */;
      void* _ite_123;
      if (({_enc__active_Box_t* _fieldacc_125 = (*_this)._enc__field_top_left;
            check_receiver(_fieldacc_125, ".", "this.top_left", "add", "\"main.enc\" (line 235, column 25)");
            future_t* _fut_124 = _enc__method_Box_add_future(_ctx, _fieldacc_125, _a_112);
            int64_t _tmp_126 = future_get_actor(_ctx, _fut_124).i;
            int64_t _unary_127 = (! _tmp_126); _unary_127;}))
      {
        /* if not get this.bottom_right.add(a) then
  if not get this.bottom_left.add(a) then
    () */;
        void* _ite_128;
        if (({_enc__active_Box_t* _fieldacc_130 = (*_this)._enc__field_bottom_right;
              check_receiver(_fieldacc_130, ".", "this.bottom_right", "add", "\"main.enc\" (line 236, column 25)");
              future_t* _fut_129 = _enc__method_Box_add_future(_ctx, _fieldacc_130, _a_112);
              int64_t _tmp_131 = future_get_actor(_ctx, _fut_129).i;
              int64_t _unary_132 = (! _tmp_131); _unary_132;}))
        {
          /* if not get this.bottom_left.add(a) then
  () */;
          void* _ite_133;
          if (({_enc__active_Box_t* _fieldacc_135 = (*_this)._enc__field_bottom_left;
                check_receiver(_fieldacc_135, ".", "this.bottom_left", "add", "\"main.enc\" (line 237, column 25)");
                future_t* _fut_134 = _enc__method_Box_add_future(_ctx, _fieldacc_135, _a_112);
                int64_t _tmp_136 = future_get_actor(_ctx, _fut_134).i;
                int64_t _unary_137 = (! _tmp_136); _unary_137;}))
          {
            /* () */;
            UNIT;
            _ite_133 = ((void*) UNIT);
          }
          else
          {
            UNIT;
            _ite_133 = ((void*) UNIT);
          };
          _ite_128 = ((void*) _ite_133);
        }
        else
        {
          UNIT;
          _ite_128 = ((void*) UNIT);
        };
        _ite_123 = ((void*) _ite_128);
      }
      else
      {
        UNIT;
        _ite_123 = ((void*) UNIT);
      };
      _ite_118 = ((void*) _ite_123);
    }
    else
    {
      /* print("SOMEONE GOT NO BOX!\n") */;
      char* _literal_138 = "SOMEONE GOT NO BOX!\n";
      printf("%s", _literal_138);
      _ite_118 = ((void*) UNIT);
    };
    _for_110 = _ite_118;
    _index_111 = (_index_111 + _step_115);
  };
  /* let win = true */;
  /* win = true */;
  int64_t _literal_139 = 1/*True*/;
  int64_t _win_140 = _literal_139;
  /* win = win and get this.top_right.link(this.top_left) */;
  int64_t _binop_145 = (({ _win_140;}) && ({_enc__active_Box_t* _fieldacc_142 = (*_this)._enc__field_top_right;
                                            check_receiver(_fieldacc_142, ".", "this.top_right", "link", "\"main.enc\" (line 242, column 26)");
                                            _enc__active_Box_t* _fieldacc_143 = (*_this)._enc__field_top_left;
                                            future_t* _fut_141 = _enc__method_Box_link_future(_ctx, _fieldacc_142, _fieldacc_143);
                                            int64_t _tmp_144 = future_get_actor(_ctx, _fut_141).i; _tmp_144;}));
  _win_140 = _binop_145;
  /* win = win and get this.top_right.link(this.bottom_right) */;
  int64_t _binop_150 = (({ _win_140;}) && ({_enc__active_Box_t* _fieldacc_147 = (*_this)._enc__field_top_right;
                                            check_receiver(_fieldacc_147, ".", "this.top_right", "link", "\"main.enc\" (line 243, column 26)");
                                            _enc__active_Box_t* _fieldacc_148 = (*_this)._enc__field_bottom_right;
                                            future_t* _fut_146 = _enc__method_Box_link_future(_ctx, _fieldacc_147, _fieldacc_148);
                                            int64_t _tmp_149 = future_get_actor(_ctx, _fut_146).i; _tmp_149;}));
  _win_140 = _binop_150;
  /* win = win and get this.top_left.link(this.top_right) */;
  int64_t _binop_155 = (({ _win_140;}) && ({_enc__active_Box_t* _fieldacc_152 = (*_this)._enc__field_top_left;
                                            check_receiver(_fieldacc_152, ".", "this.top_left", "link", "\"main.enc\" (line 244, column 26)");
                                            _enc__active_Box_t* _fieldacc_153 = (*_this)._enc__field_top_right;
                                            future_t* _fut_151 = _enc__method_Box_link_future(_ctx, _fieldacc_152, _fieldacc_153);
                                            int64_t _tmp_154 = future_get_actor(_ctx, _fut_151).i; _tmp_154;}));
  _win_140 = _binop_155;
  /* win = win and get this.top_left.link(this.bottom_left) */;
  int64_t _binop_160 = (({ _win_140;}) && ({_enc__active_Box_t* _fieldacc_157 = (*_this)._enc__field_top_left;
                                            check_receiver(_fieldacc_157, ".", "this.top_left", "link", "\"main.enc\" (line 245, column 26)");
                                            _enc__active_Box_t* _fieldacc_158 = (*_this)._enc__field_bottom_left;
                                            future_t* _fut_156 = _enc__method_Box_link_future(_ctx, _fieldacc_157, _fieldacc_158);
                                            int64_t _tmp_159 = future_get_actor(_ctx, _fut_156).i; _tmp_159;}));
  _win_140 = _binop_160;
  /* win = win and get this.bottom_left.link(this.bottom_right) */;
  int64_t _binop_165 = (({ _win_140;}) && ({_enc__active_Box_t* _fieldacc_162 = (*_this)._enc__field_bottom_left;
                                            check_receiver(_fieldacc_162, ".", "this.bottom_left", "link", "\"main.enc\" (line 246, column 26)");
                                            _enc__active_Box_t* _fieldacc_163 = (*_this)._enc__field_bottom_right;
                                            future_t* _fut_161 = _enc__method_Box_link_future(_ctx, _fieldacc_162, _fieldacc_163);
                                            int64_t _tmp_164 = future_get_actor(_ctx, _fut_161).i; _tmp_164;}));
  _win_140 = _binop_165;
  /* win = win and get this.bottom_left.link(this.top_left) */;
  int64_t _binop_170 = (({ _win_140;}) && ({_enc__active_Box_t* _fieldacc_167 = (*_this)._enc__field_bottom_left;
                                            check_receiver(_fieldacc_167, ".", "this.bottom_left", "link", "\"main.enc\" (line 247, column 26)");
                                            _enc__active_Box_t* _fieldacc_168 = (*_this)._enc__field_top_left;
                                            future_t* _fut_166 = _enc__method_Box_link_future(_ctx, _fieldacc_167, _fieldacc_168);
                                            int64_t _tmp_169 = future_get_actor(_ctx, _fut_166).i; _tmp_169;}));
  _win_140 = _binop_170;
  /* win = win and get this.bottom_right.link(this.top_right) */;
  int64_t _binop_175 = (({ _win_140;}) && ({_enc__active_Box_t* _fieldacc_172 = (*_this)._enc__field_bottom_right;
                                            check_receiver(_fieldacc_172, ".", "this.bottom_right", "link", "\"main.enc\" (line 248, column 26)");
                                            _enc__active_Box_t* _fieldacc_173 = (*_this)._enc__field_top_right;
                                            future_t* _fut_171 = _enc__method_Box_link_future(_ctx, _fieldacc_172, _fieldacc_173);
                                            int64_t _tmp_174 = future_get_actor(_ctx, _fut_171).i; _tmp_174;}));
  _win_140 = _binop_175;
  /* win = win and get this.bottom_right.link(this.bottom_left) */;
  int64_t _binop_180 = (({ _win_140;}) && ({_enc__active_Box_t* _fieldacc_177 = (*_this)._enc__field_bottom_right;
                                            check_receiver(_fieldacc_177, ".", "this.bottom_right", "link", "\"main.enc\" (line 249, column 26)");
                                            _enc__active_Box_t* _fieldacc_178 = (*_this)._enc__field_bottom_left;
                                            future_t* _fut_176 = _enc__method_Box_link_future(_ctx, _fieldacc_177, _fieldacc_178);
                                            int64_t _tmp_179 = future_get_actor(_ctx, _fut_176).i; _tmp_179;}));
  _win_140 = _binop_180;
  /* this.top_right.default_link(this.toplevel) */;
  _enc__active_Box_t* _fieldacc_182 = (*_this)._enc__field_top_right;
  check_receiver(_fieldacc_182, ".", "this.top_right", "default_link", "\"main.enc\" (line 252, column 9)");
  _enc__active_Box_t* _fieldacc_183 = (*_this)._enc__field_toplevel;
  future_t* _fut_181 = _enc__method_Box_default_link_future(_ctx, _fieldacc_182, _fieldacc_183);
  /* this.top_left.default_link(this.toplevel) */;
  _enc__active_Box_t* _fieldacc_185 = (*_this)._enc__field_top_left;
  check_receiver(_fieldacc_185, ".", "this.top_left", "default_link", "\"main.enc\" (line 253, column 9)");
  _enc__active_Box_t* _fieldacc_186 = (*_this)._enc__field_toplevel;
  future_t* _fut_184 = _enc__method_Box_default_link_future(_ctx, _fieldacc_185, _fieldacc_186);
  /* this.bottom_right.default_link(this.toplevel) */;
  _enc__active_Box_t* _fieldacc_188 = (*_this)._enc__field_bottom_right;
  check_receiver(_fieldacc_188, ".", "this.bottom_right", "default_link", "\"main.enc\" (line 254, column 9)");
  _enc__active_Box_t* _fieldacc_189 = (*_this)._enc__field_toplevel;
  future_t* _fut_187 = _enc__method_Box_default_link_future(_ctx, _fieldacc_188, _fieldacc_189);
  /* this.bottom_left.default_link(this.toplevel) */;
  _enc__active_Box_t* _fieldacc_191 = (*_this)._enc__field_bottom_left;
  check_receiver(_fieldacc_191, ".", "this.bottom_left", "default_link", "\"main.enc\" (line 255, column 9)");
  _enc__active_Box_t* _fieldacc_192 = (*_this)._enc__field_toplevel;
  future_t* _fut_190 = _enc__method_Box_default_link_future(_ctx, _fieldacc_191, _fieldacc_192);
  /* print("WIN={}\n", win) */;
  printf("WIN=%s\n", _win_140? "true": "false");
  return UNIT;
}


tuple_t* _enc__method_Multi_box_max(pony_ctx_t** _ctx, _enc__active_Multi_box_t* _this)
{
  /* this.max */;
  tuple_t* _fieldacc_0 = (*_this)._enc__field_max;
  return ((tuple_t*) _fieldacc_0);
}


tuple_t* _enc__method_Multi_box_min(pony_ctx_t** _ctx, _enc__active_Multi_box_t* _this)
{
  /* this.min */;
  tuple_t* _fieldacc_0 = (*_this)._enc__field_min;
  return ((tuple_t*) _fieldacc_0);
}


int64_t _enc__method_Multi_box_move(pony_ctx_t** _ctx, _enc__active_Multi_box_t* _this)
{
  /* let a = this.top_right.alive()
    b = this.top_left.alive()
    c = this.bottom_right.alive()
    d = this.bottom_left.alive()
in
  {unless get a or get b or get c or get d then
     print("SOMEONE IS DEAD!\n");
   a = this.top_right.move();
   b = this.top_left.move();
   c = this.bottom_right.move();
   d = this.bottom_left.move();
   get a or get b or get c or get d} */;
  /* a = this.top_right.alive() */;
  _enc__active_Box_t* _fieldacc_1 = (*_this)._enc__field_top_right;
  check_receiver(_fieldacc_1, ".", "this.top_right", "alive", "\"main.enc\" (line 267, column 13)");
  future_t* _fut_0 = _enc__method_Box_alive_future(_ctx, _fieldacc_1);
  future_t* _a_2 = _fut_0;
  /* b = this.top_left.alive() */;
  _enc__active_Box_t* _fieldacc_4 = (*_this)._enc__field_top_left;
  check_receiver(_fieldacc_4, ".", "this.top_left", "alive", "\"main.enc\" (line 268, column 13)");
  future_t* _fut_3 = _enc__method_Box_alive_future(_ctx, _fieldacc_4);
  future_t* _b_5 = _fut_3;
  /* c = this.bottom_right.alive() */;
  _enc__active_Box_t* _fieldacc_7 = (*_this)._enc__field_bottom_right;
  check_receiver(_fieldacc_7, ".", "this.bottom_right", "alive", "\"main.enc\" (line 269, column 13)");
  future_t* _fut_6 = _enc__method_Box_alive_future(_ctx, _fieldacc_7);
  future_t* _c_8 = _fut_6;
  /* d = this.bottom_left.alive() */;
  _enc__active_Box_t* _fieldacc_10 = (*_this)._enc__field_bottom_left;
  check_receiver(_fieldacc_10, ".", "this.bottom_left", "alive", "\"main.enc\" (line 270, column 13)");
  future_t* _fut_9 = _enc__method_Box_alive_future(_ctx, _fieldacc_10);
  future_t* _d_11 = _fut_9;
  /* unless get a or get b or get c or get d then
  print("SOMEONE IS DEAD!\n") */;
  void* _ite_12;
  if (({int64_t _binop_19 = (({int64_t _binop_17 = (({int64_t _binop_15 = (({int64_t _tmp_13 = future_get_actor(_ctx, _a_2).i; _tmp_13;}) || ({int64_t _tmp_14 = future_get_actor(_ctx, _b_5).i; _tmp_14;})); _binop_15;}) || ({int64_t _tmp_16 = future_get_actor(_ctx, _c_8).i; _tmp_16;})); _binop_17;}) || ({int64_t _tmp_18 = future_get_actor(_ctx, _d_11).i; _tmp_18;}));
        int64_t _unary_20 = (! _binop_19); _unary_20;}))
  {
    char* _literal_21 = "SOMEONE IS DEAD!\n";
    printf("%s", _literal_21);
    _ite_12 = ((void*) UNIT);
  }
  else
  {
    UNIT;
    _ite_12 = ((void*) UNIT);
  };
  /* a = this.top_right.move() */;
  _enc__active_Box_t* _fieldacc_23 = (*_this)._enc__field_top_right;
  check_receiver(_fieldacc_23, ".", "this.top_right", "move", "\"main.enc\" (line 275, column 13)");
  future_t* _fut_22 = _enc__method_Box_move_future(_ctx, _fieldacc_23);
  _a_2 = _fut_22;
  /* b = this.top_left.move() */;
  _enc__active_Box_t* _fieldacc_25 = (*_this)._enc__field_top_left;
  check_receiver(_fieldacc_25, ".", "this.top_left", "move", "\"main.enc\" (line 276, column 13)");
  future_t* _fut_24 = _enc__method_Box_move_future(_ctx, _fieldacc_25);
  _b_5 = _fut_24;
  /* c = this.bottom_right.move() */;
  _enc__active_Box_t* _fieldacc_27 = (*_this)._enc__field_bottom_right;
  check_receiver(_fieldacc_27, ".", "this.bottom_right", "move", "\"main.enc\" (line 277, column 13)");
  future_t* _fut_26 = _enc__method_Box_move_future(_ctx, _fieldacc_27);
  _c_8 = _fut_26;
  /* d = this.bottom_left.move() */;
  _enc__active_Box_t* _fieldacc_29 = (*_this)._enc__field_bottom_left;
  check_receiver(_fieldacc_29, ".", "this.bottom_left", "move", "\"main.enc\" (line 278, column 13)");
  future_t* _fut_28 = _enc__method_Box_move_future(_ctx, _fieldacc_29);
  _d_11 = _fut_28;
  /* get a or get b or get c or get d */;
  int64_t _binop_36 = (({int64_t _binop_34 = (({int64_t _binop_32 = (({int64_t _tmp_30 = future_get_actor(_ctx, _a_2).i; _tmp_30;}) || ({int64_t _tmp_31 = future_get_actor(_ctx, _b_5).i; _tmp_31;})); _binop_32;}) || ({int64_t _tmp_33 = future_get_actor(_ctx, _c_8).i; _tmp_33;})); _binop_34;}) || ({int64_t _tmp_35 = future_get_actor(_ctx, _d_11).i; _tmp_35;}));
  return ((int64_t) _binop_36);
}


array_t* _enc__method_Multi_box_agents(pony_ctx_t** _ctx, _enc__active_Multi_box_t* _this)
{
  /* flatten([get this.top_right.agents(), 
         get this.top_left.agents(), 
         get this.bottom_right.agents(), 
         get this.bottom_left.agents()]) */;
  array_t* _array_0 = array_mk(_ctx, 4, (&(array_type)));
  _enc__active_Box_t* _fieldacc_2 = (*_this)._enc__field_top_right;
  check_receiver(_fieldacc_2, ".", "this.top_right", "agents", "\"main.enc\" (line 282, column 43)");
  future_t* _fut_1 = _enc__method_Box_agents_future(_ctx, _fieldacc_2);
  array_t* _tmp_3 = future_get_actor(_ctx, _fut_1).p;
  _enc__active_Box_t* _fieldacc_5 = (*_this)._enc__field_top_left;
  check_receiver(_fieldacc_5, ".", "this.top_left", "agents", "\"main.enc\" (line 283, column 34)");
  future_t* _fut_4 = _enc__method_Box_agents_future(_ctx, _fieldacc_5);
  array_t* _tmp_6 = future_get_actor(_ctx, _fut_4).p;
  _enc__active_Box_t* _fieldacc_8 = (*_this)._enc__field_bottom_right;
  check_receiver(_fieldacc_8, ".", "this.bottom_right", "agents", "\"main.enc\" (line 284, column 34)");
  future_t* _fut_7 = _enc__method_Box_agents_future(_ctx, _fieldacc_8);
  array_t* _tmp_9 = future_get_actor(_ctx, _fut_7).p;
  _enc__active_Box_t* _fieldacc_11 = (*_this)._enc__field_bottom_left;
  check_receiver(_fieldacc_11, ".", "this.bottom_left", "agents", "\"main.enc\" (line 285, column 34)");
  future_t* _fut_10 = _enc__method_Box_agents_future(_ctx, _fieldacc_11);
  array_t* _tmp_12 = future_get_actor(_ctx, _fut_10).p;
  array_set(_array_0, 0, ((encore_arg_t) {.p = _tmp_3}));
  array_set(_array_0, 1, ((encore_arg_t) {.p = _tmp_6}));
  array_set(_array_0, 2, ((encore_arg_t) {.p = _tmp_9}));
  array_set(_array_0, 3, ((encore_arg_t) {.p = _tmp_12}));
  pony_type_t* _tmp_13[] = {};
  array_t* _global_f_14 = _enc__global_fun_flatten(_ctx, NULL, _array_0);
  return ((array_t*) _global_f_14);
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
    check_receiver(_this, ".", "this", "extreme_check", "\"main.enc\" (line 292, column 21)");
    check_receiver(_a_12, ".", "a", "pos", "\"main.enc\" (line 292, column 40)");
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
      check_receiver(_this, ".", "this", "extreme_check", "\"main.enc\" (line 294, column 25)");
      tuple_t* _sync_method_call_31 = _enc__method_Multi_box_extreme_check(_ctx, _this, _b_24, _extreme_7);
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
  return ((tuple_t*) _match_0);
}


future_t* _enc__method_Multi_box__init_future(pony_ctx_t** _ctx, _enc__active_Multi_box_t* _this, array_t* _enc__arg_agents)
{
  future_t* _fut = future_mk(_ctx, ENCORE_PRIMITIVE);
  pony_gc_send((*_ctx));
  encore_trace_object((*_ctx), _enc__arg_agents, array_trace);
  encore_trace_object((*_ctx), _fut, future_trace);
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
  encore_trace_object((*_ctx), _fut, future_trace);
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
  encore_trace_object((*_ctx), _fut, future_trace);
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
  encore_trace_object((*_ctx), _fut, future_trace);
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
  encore_trace_object((*_ctx), _fut, future_trace);
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
  encore_trace_object((*_ctx), _enc__arg_agents, array_trace);
  encore_trace_object((*_ctx), _fut, future_trace);
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
  encore_trace_object((*_ctx), _enc__arg_a, tuple_trace);
  encore_trace_object((*_ctx), _enc__arg_b, tuple_trace);
  encore_trace_object((*_ctx), _fut, future_trace);
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
  encore_trace_object((*_ctx), _enc__arg_agents, array_trace);
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
  encore_trace_object((*_ctx), _enc__arg_agents, array_trace);
  /* No tracing future for oneway msg */;
  pony_send_done((*_ctx));
  _enc__oneway_msg_Multi_box_find_extreme_t* msg = ((_enc__oneway_msg_Multi_box_find_extreme_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__oneway_msg_Multi_box_find_extreme_t)), _ENC__ONEWAY_MSG_Multi_box_find_extreme));
  msg->f1 = _enc__arg_agents;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
}


void _enc__method_Multi_box_extreme_check_one_way(pony_ctx_t** _ctx, _enc__active_Multi_box_t* _this, tuple_t* _enc__arg_a, tuple_t* _enc__arg_b)
{
  pony_gc_send((*_ctx));
  encore_trace_object((*_ctx), _enc__arg_a, tuple_trace);
  encore_trace_object((*_ctx), _enc__arg_b, tuple_trace);
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
      encore_trace_object((*_ctx), _fut, future_type.trace);
      encore_trace_object((*_ctx), _task, NULL);
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
      encore_trace_object((*_ctx), _enc__arg_agents, array_trace);
      encore_trace_object((*_ctx), _fut, future_type.trace);
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
      encore_trace_object((*_ctx), _enc__arg_agents, array_trace);
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
      encore_trace_object((*_ctx), _fut, future_type.trace);
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
      encore_trace_object((*_ctx), _fut, future_type.trace);
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
      encore_trace_object((*_ctx), _fut, future_type.trace);
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
      encore_trace_object((*_ctx), _fut, future_type.trace);
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
      encore_trace_object((*_ctx), _enc__arg_agents, array_trace);
      encore_trace_object((*_ctx), _fut, future_type.trace);
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
      encore_trace_object((*_ctx), _enc__arg_agents, array_trace);
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
      encore_trace_object((*_ctx), _enc__arg_a, tuple_trace);
      encore_trace_object((*_ctx), _enc__arg_b, tuple_trace);
      encore_trace_object((*_ctx), _fut, future_type.trace);
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
      encore_trace_object((*_ctx), _enc__arg_a, tuple_trace);
      encore_trace_object((*_ctx), _enc__arg_b, tuple_trace);
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
