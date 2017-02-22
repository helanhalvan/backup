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


struct _enc__active__encore_libs_master_Ped_util_Regions_Tiling_box_t
{
  encore_actor_t _enc__actor;
  array_t* _enc__field_boxes;
  array_t* _enc__field_futures;
};


void _enc__type_init__encore_libs_master_Ped_util_Regions_Tiling_box(_enc__active__encore_libs_master_Ped_util_Regions_Tiling_box_t* _this, ... )
{
  va_list params;
  va_start(params, _this);
  va_end(params);
}


void _enc__trace__encore_libs_master_Ped_util_Regions_Tiling_box(pony_ctx_t* _ctx_arg, void* p)
{
  pony_ctx_t** _ctx = (&(_ctx_arg));
  _enc__active__encore_libs_master_Ped_util_Regions_Tiling_box_t* _this = p;
  array_t* _enc__field_boxes = _this->_enc__field_boxes;
  encore_trace_object((*_ctx), _enc__field_boxes, array_trace);
  array_t* _enc__field_futures = _this->_enc__field_futures;
  encore_trace_object((*_ctx), _enc__field_futures, array_trace);
}


_enc__active__encore_libs_master_Ped_util_Regions_Tiling_box_t* _enc__constructor__encore_libs_master_Ped_util_Regions_Tiling_box(pony_ctx_t** _ctx, pony_type_t** runtimeType)
{
  _enc__active__encore_libs_master_Ped_util_Regions_Tiling_box_t* _this = ((_enc__active__encore_libs_master_Ped_util_Regions_Tiling_box_t*) encore_create((*_ctx), (&(_enc__active__encore_libs_master_Ped_util_Regions_Tiling_box_type))));
  return _this;
}


void* _enc__method__encore_libs_master_Ped_util_Regions_Tiling_box_init(pony_ctx_t** _ctx, _enc__active__encore_libs_master_Ped_util_Regions_Tiling_box_t* _this, pony_type_t** runtimeType, array_t* _enc__arg_agents, int64_t _enc__arg_n)
{
  ENC_DTRACE3(METHOD_ENTRY, (uintptr_t)*_ctx, (uintptr_t)_this, "init");
  /* match find_extreme(agents) with
  (xmax, ymax, xmin, ymin) => {val dx = xmax - xmin / n;
                               val dy = ymax - ymin / n;
                               this.boxes = new [Box](n * n);
                               this.futures = new [Fut bool](|this.boxes|);
                               var x = xmin;
                               var y = ymin;
                               var i = 0;
                               var win = true;
                               for xindex in [ 0 , n - 1 by 1 ]
                                 {for yindex in [ 0 , n - 2 by 1 ]
                                    {this.boxes[i] = new Box((x + dx - 1, y + dy - 1), (x, y));
                                     if yindex != 0 then
                                       win = win and link(this.boxes[i], this.boxes[i - 1]);
                                     if xindex != 0 then
                                       win = win and link(this.boxes[i], this.boxes[i - n]);
                                     if xindex != 0 and yindex != 0 then
                                       {win = win and link(this.boxes[i], this.boxes[i - n + 1]);
                                        win = win and link(this.boxes[i], this.boxes[i - n - 1]);
                                        ()};
                                     i = i + 1;
                                     y = y + dy};
                                  this.boxes[i] = new Box((x + dx - 1, ymax), (x, y));
                                  if xindex != 0 then
                                    {win = win and link(this.boxes[i], this.boxes[i - n]);
                                     win = win and link(this.boxes[i], this.boxes[i - n - 1])};
                                  win = win and link(this.boxes[i], this.boxes[i - 1]);
                                  i = i + 1;
                                  x = x + dx;
                                  y = ymin};
                               for yindex in [ 0 , n - 2 by 1 ]
                                 {this.boxes[i] = new Box((xmax, y + dy - 1), (x, y));
                                  if yindex != 0 then
                                    {win = win and link(this.boxes[i], this.boxes[i - 1]);
                                     win = win and link(this.boxes[i], this.boxes[i - n - 1])};
                                  win = win and link(this.boxes[i], this.boxes[i - n + 1]);
                                  win = win and link(this.boxes[i], this.boxes[i - n]);
                                  i = i + 1;
                                  y = y + dy};
                               this.boxes[i] = new Box((xmax, ymax), (x, y));
                               win = win and link(this.boxes[i], this.boxes[i - n]);
                               win = win and link(this.boxes[i], this.boxes[i - 1]);
                               win = win and link(this.boxes[i], this.boxes[i - n - 1]);
                               unless win then
                                 print("WIN IS BAD!\n");
                               for a in agents
                                 for b in this.boxes
                                   if get b.add(a) then
                                     embed void { break; } end}
 */;
  ENC_DTRACE2(FUNCTION_CALL, (uintptr_t)*_ctx, "Global_funs.find_extreme");
  pony_type_t* _tmp_1[] = {};
  tuple_t* _fun_call_2 = _enc__global_fun__encore_libs_master_Ped_util_Global_funsfind_extreme(_ctx, NULL, _enc__arg_agents);
  void* _match_0;
  int64_t _xmax_3;
  int64_t _ymax_4;
  int64_t _xmin_5;
  int64_t _ymin_6;
  if ((({int64_t _tupleCheck_271;
         _tupleCheck_271 = 1;
         int64_t _tupleAccess_272 = tuple_get(_fun_call_2, 0).i;
         int64_t _varBinding_273;
         _xmax_3 = _tupleAccess_272;
         _varBinding_273 = 1;
         _tupleCheck_271 = (_tupleCheck_271 && _varBinding_273);
         int64_t _tupleAccess_274 = tuple_get(_fun_call_2, 1).i;
         int64_t _varBinding_275;
         _ymax_4 = _tupleAccess_274;
         _varBinding_275 = 1;
         _tupleCheck_271 = (_tupleCheck_271 && _varBinding_275);
         int64_t _tupleAccess_276 = tuple_get(_fun_call_2, 2).i;
         int64_t _varBinding_277;
         _xmin_5 = _tupleAccess_276;
         _varBinding_277 = 1;
         _tupleCheck_271 = (_tupleCheck_271 && _varBinding_277);
         int64_t _tupleAccess_278 = tuple_get(_fun_call_2, 3).i;
         int64_t _varBinding_279;
         _ymin_6 = _tupleAccess_278;
         _varBinding_279 = 1;
         _tupleCheck_271 = (_tupleCheck_271 && _varBinding_279); _tupleCheck_271;}) && ({int64_t _literal_280 = 1/*True*/; _literal_280;})))
  {
    _match_0 = ((void*) ({/* val dx = xmax - xmin / n */;
                          /* dx = xmax - xmin / n */;
                          int64_t _binop_8 = (({int64_t _binop_7 = (({ _xmax_3;}) - ({ _xmin_5;})); _binop_7;}) / ({ _enc__arg_n;}));
                          int64_t _dx_9 = _binop_8;
                          /* val dy = ymax - ymin / n */;
                          /* dy = ymax - ymin / n */;
                          int64_t _binop_11 = (({int64_t _binop_10 = (({ _ymax_4;}) - ({ _ymin_6;})); _binop_10;}) / ({ _enc__arg_n;}));
                          int64_t _dy_12 = _binop_11;
                          /* this.boxes = new [Box](n * n) */;
                          int64_t _binop_14 = (({ _enc__arg_n;}) * ({ _enc__arg_n;}));
                          array_t* _array_13 = array_mk(_ctx, _binop_14, ENCORE_ACTIVE);
                          (*({ENC_DTRACE3(FIELD_WRITE, (uintptr_t)*_ctx, (uintptr_t)_this, "boxes"); _this;}))._enc__field_boxes = _array_13;
                          /* this.futures = new [Fut bool](|this.boxes|) */;
                          ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "boxes");
                          array_t* _fieldacc_16 = (*_this)._enc__field_boxes;
                          int64_t _size_17 = array_size(_fieldacc_16);
                          array_t* _array_15 = array_mk(_ctx, _size_17, (&(future_type)));
                          (*({ENC_DTRACE3(FIELD_WRITE, (uintptr_t)*_ctx, (uintptr_t)_this, "futures"); _this;}))._enc__field_futures = _array_15;
                          /* var x = xmin */;
                          /* x = xmin */;
                          int64_t _x_18 = _xmin_5;
                          /* var y = ymin */;
                          /* y = ymin */;
                          int64_t _y_19 = _ymin_6;
                          /* var i = 0 */;
                          /* i = 0 */;
                          int64_t _literal_20 = 0;
                          int64_t _i_21 = _literal_20;
                          /* var win = true */;
                          /* win = true */;
                          int64_t _literal_22 = 1/*True*/;
                          int64_t _win_23 = _literal_22;
                          /* for xindex in [ 0 , n - 1 by 1 ]
  {for yindex in [ 0 , n - 2 by 1 ]
     {this.boxes[i] = new Box((x + dx - 1, y + dy - 1), (x, y));
      if yindex != 0 then
        win = win and link(this.boxes[i], this.boxes[i - 1]);
      if xindex != 0 then
        win = win and link(this.boxes[i], this.boxes[i - n]);
      if xindex != 0 and yindex != 0 then
        {win = win and link(this.boxes[i], this.boxes[i - n + 1]);
         win = win and link(this.boxes[i], this.boxes[i - n - 1]);
         ()};
      i = i + 1;
      y = y + dy};
   this.boxes[i] = new Box((x + dx - 1, ymax), (x, y));
   if xindex != 0 then
     {win = win and link(this.boxes[i], this.boxes[i - n]);
      win = win and link(this.boxes[i], this.boxes[i - n - 1])};
   win = win and link(this.boxes[i], this.boxes[i - 1]);
   i = i + 1;
   x = x + dx;
   y = ymin} */;
                          void* _for_24;
                          /* Range not generated */;
                          int64_t _literal_31 = 0;
                          int64_t _binop_33 = (({ _enc__arg_n;}) - ({int64_t _literal_32 = 1; _literal_32;}));
                          int64_t _literal_34 = 1;
                          int64_t _literal_35 = 1;
                          int64_t _step_29 = (_literal_35 * _literal_34);
                          range_assert_step(_step_29);
                          int64_t _index_25;
                          if ((_step_29 > 0))
                          {
                            _index_25 = _literal_31;
                          }
                          else
                          {
                            _index_25 = _binop_33;
                          };
                          while (((_index_25 >= _literal_31) && (_index_25 <= _binop_33)))
                          {
                            int64_t _xindex_26 = _index_25;
                            /* for yindex in [ 0 , n - 2 by 1 ]
  {this.boxes[i] = new Box((x + dx - 1, y + dy - 1), (x, y));
   if yindex != 0 then
     win = win and link(this.boxes[i], this.boxes[i - 1]);
   if xindex != 0 then
     win = win and link(this.boxes[i], this.boxes[i - n]);
   if xindex != 0 and yindex != 0 then
     {win = win and link(this.boxes[i], this.boxes[i - n + 1]);
      win = win and link(this.boxes[i], this.boxes[i - n - 1]);
      ()};
   i = i + 1;
   y = y + dy} */;
                            void* _for_36;
                            /* Range not generated */;
                            int64_t _literal_43 = 0;
                            int64_t _binop_45 = (({ _enc__arg_n;}) - ({int64_t _literal_44 = 2; _literal_44;}));
                            int64_t _literal_46 = 1;
                            int64_t _literal_47 = 1;
                            int64_t _step_41 = (_literal_47 * _literal_46);
                            range_assert_step(_step_41);
                            int64_t _index_37;
                            if ((_step_41 > 0))
                            {
                              _index_37 = _literal_43;
                            }
                            else
                            {
                              _index_37 = _binop_45;
                            };
                            while (((_index_37 >= _literal_43) && (_index_37 <= _binop_45)))
                            {
                              int64_t _yindex_38 = _index_37;
                              /* this.boxes[i] = new Box((x + dx - 1, y + dy - 1), (x, y)) */;
                              _enc__active__encore_libs_master_Ped_util_Regions_Box_t* _new_48 = _enc__constructor__encore_libs_master_Ped_util_Regions_Box(_ctx, NULL);
                              tuple_t* _tuple_49 = tuple_mk(_ctx, 2);
                              tuple_set_type(_tuple_49, 0, ENCORE_PRIMITIVE);
                              tuple_set_type(_tuple_49, 1, ENCORE_PRIMITIVE);
                              int64_t _binop_52 = (({int64_t _binop_50 = (({ _x_18;}) + ({ _dx_9;})); _binop_50;}) - ({int64_t _literal_51 = 1; _literal_51;}));
                              int64_t _binop_55 = (({int64_t _binop_53 = (({ _y_19;}) + ({ _dy_12;})); _binop_53;}) - ({int64_t _literal_54 = 1; _literal_54;}));
                              tuple_set(_tuple_49, 0, ((encore_arg_t) {.i = _binop_52}));
                              tuple_set(_tuple_49, 1, ((encore_arg_t) {.i = _binop_55}));
                              tuple_t* _tuple_56 = tuple_mk(_ctx, 2);
                              tuple_set_type(_tuple_56, 0, ENCORE_PRIMITIVE);
                              tuple_set_type(_tuple_56, 1, ENCORE_PRIMITIVE);
                              tuple_set(_tuple_56, 0, ((encore_arg_t) {.i = _x_18}));
                              tuple_set(_tuple_56, 1, ((encore_arg_t) {.i = _y_19}));
                              pony_type_t* _tmp_57[] = {};
                              _enc__type_init__encore_libs_master_Ped_util_Regions_Box(_new_48);
                              _enc__method__encore_libs_master_Ped_util_Regions_Box_init_one_way(_ctx, _new_48, NULL, _tuple_49, _tuple_56);
                              ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "boxes");
                              array_t* _fieldacc_58 = (*_this)._enc__field_boxes;
                              array_set(_fieldacc_58, _i_21, ((encore_arg_t) {.p = _new_48}));
                              /* if yindex != 0 then
  win = win and link(this.boxes[i], this.boxes[i - 1]) */;
                              void* _ite_59;
                              if (({int64_t _binop_61 = (({ _yindex_38;}) != ({int64_t _literal_60 = 0; _literal_60;})); _binop_61;}))
                              {
                                /* win = win and link(this.boxes[i], this.boxes[i - 1]) */;
                                int64_t _binop_70 = (({ _win_23;}) && ({ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "boxes");
                                                                        array_t* _fieldacc_62 = (*_this)._enc__field_boxes;
                                                                        _enc__active__encore_libs_master_Ped_util_Regions_Box_t* _access_63 = array_get(_fieldacc_62, _i_21).p;
                                                                        ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "boxes");
                                                                        array_t* _fieldacc_64 = (*_this)._enc__field_boxes;
                                                                        int64_t _binop_66 = (({ _i_21;}) - ({int64_t _literal_65 = 1; _literal_65;}));
                                                                        _enc__active__encore_libs_master_Ped_util_Regions_Box_t* _access_67 = array_get(_fieldacc_64, _binop_66).p;
                                                                        ENC_DTRACE2(FUNCTION_CALL, (uintptr_t)*_ctx, "Regions.link");
                                                                        pony_type_t* _tmp_68[] = {};
                                                                        int64_t _fun_call_69 = _enc__global_fun__encore_libs_master_Ped_util_Regionslink(_ctx, NULL, _access_63, _access_67); _fun_call_69;}));
                                _win_23 = _binop_70;
                                _ite_59 = ((void*) UNIT);
                              }
                              else
                              {
                                UNIT;
                                _ite_59 = ((void*) UNIT);
                              };
                              /* if xindex != 0 then
  win = win and link(this.boxes[i], this.boxes[i - n]) */;
                              void* _ite_71;
                              if (({int64_t _binop_73 = (({ _xindex_26;}) != ({int64_t _literal_72 = 0; _literal_72;})); _binop_73;}))
                              {
                                /* win = win and link(this.boxes[i], this.boxes[i - n]) */;
                                int64_t _binop_81 = (({ _win_23;}) && ({ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "boxes");
                                                                        array_t* _fieldacc_74 = (*_this)._enc__field_boxes;
                                                                        _enc__active__encore_libs_master_Ped_util_Regions_Box_t* _access_75 = array_get(_fieldacc_74, _i_21).p;
                                                                        ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "boxes");
                                                                        array_t* _fieldacc_76 = (*_this)._enc__field_boxes;
                                                                        int64_t _binop_77 = (({ _i_21;}) - ({ _enc__arg_n;}));
                                                                        _enc__active__encore_libs_master_Ped_util_Regions_Box_t* _access_78 = array_get(_fieldacc_76, _binop_77).p;
                                                                        ENC_DTRACE2(FUNCTION_CALL, (uintptr_t)*_ctx, "Regions.link");
                                                                        pony_type_t* _tmp_79[] = {};
                                                                        int64_t _fun_call_80 = _enc__global_fun__encore_libs_master_Ped_util_Regionslink(_ctx, NULL, _access_75, _access_78); _fun_call_80;}));
                                _win_23 = _binop_81;
                                _ite_71 = ((void*) UNIT);
                              }
                              else
                              {
                                UNIT;
                                _ite_71 = ((void*) UNIT);
                              };
                              /* if xindex != 0 and yindex != 0 then
  {win = win and link(this.boxes[i], this.boxes[i - n + 1]);
   win = win and link(this.boxes[i], this.boxes[i - n - 1]);
   ()} */;
                              void* _ite_82;
                              if (({int64_t _binop_87 = (({int64_t _binop_84 = (({ _xindex_26;}) != ({int64_t _literal_83 = 0; _literal_83;})); _binop_84;}) && ({int64_t _binop_86 = (({ _yindex_38;}) != ({int64_t _literal_85 = 0; _literal_85;})); _binop_86;})); _binop_87;}))
                              {
                                /* win = win and link(this.boxes[i], this.boxes[i - n + 1]) */;
                                int64_t _binop_97 = (({ _win_23;}) && ({ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "boxes");
                                                                        array_t* _fieldacc_88 = (*_this)._enc__field_boxes;
                                                                        _enc__active__encore_libs_master_Ped_util_Regions_Box_t* _access_89 = array_get(_fieldacc_88, _i_21).p;
                                                                        ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "boxes");
                                                                        array_t* _fieldacc_90 = (*_this)._enc__field_boxes;
                                                                        int64_t _binop_93 = (({int64_t _binop_91 = (({ _i_21;}) - ({ _enc__arg_n;})); _binop_91;}) + ({int64_t _literal_92 = 1; _literal_92;}));
                                                                        _enc__active__encore_libs_master_Ped_util_Regions_Box_t* _access_94 = array_get(_fieldacc_90, _binop_93).p;
                                                                        ENC_DTRACE2(FUNCTION_CALL, (uintptr_t)*_ctx, "Regions.link");
                                                                        pony_type_t* _tmp_95[] = {};
                                                                        int64_t _fun_call_96 = _enc__global_fun__encore_libs_master_Ped_util_Regionslink(_ctx, NULL, _access_89, _access_94); _fun_call_96;}));
                                _win_23 = _binop_97;
                                /* win = win and link(this.boxes[i], this.boxes[i - n - 1]) */;
                                int64_t _binop_107 = (({ _win_23;}) && ({ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "boxes");
                                                                         array_t* _fieldacc_98 = (*_this)._enc__field_boxes;
                                                                         _enc__active__encore_libs_master_Ped_util_Regions_Box_t* _access_99 = array_get(_fieldacc_98, _i_21).p;
                                                                         ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "boxes");
                                                                         array_t* _fieldacc_100 = (*_this)._enc__field_boxes;
                                                                         int64_t _binop_103 = (({int64_t _binop_101 = (({ _i_21;}) - ({ _enc__arg_n;})); _binop_101;}) - ({int64_t _literal_102 = 1; _literal_102;}));
                                                                         _enc__active__encore_libs_master_Ped_util_Regions_Box_t* _access_104 = array_get(_fieldacc_100, _binop_103).p;
                                                                         ENC_DTRACE2(FUNCTION_CALL, (uintptr_t)*_ctx, "Regions.link");
                                                                         pony_type_t* _tmp_105[] = {};
                                                                         int64_t _fun_call_106 = _enc__global_fun__encore_libs_master_Ped_util_Regionslink(_ctx, NULL, _access_99, _access_104); _fun_call_106;}));
                                _win_23 = _binop_107;
                                /* () */;
                                UNIT;
                                _ite_82 = ((void*) UNIT);
                              }
                              else
                              {
                                UNIT;
                                _ite_82 = ((void*) UNIT);
                              };
                              /* i = i + 1 */;
                              int64_t _binop_109 = (({ _i_21;}) + ({int64_t _literal_108 = 1; _literal_108;}));
                              _i_21 = _binop_109;
                              /* y = y + dy */;
                              int64_t _binop_110 = (({ _y_19;}) + ({ _dy_12;}));
                              _y_19 = _binop_110;
                              _for_36 = UNIT;
                              _index_37 = (_index_37 + _step_41);
                            };
                            /* this.boxes[i] = new Box((x + dx - 1, ymax), (x, y)) */;
                            _enc__active__encore_libs_master_Ped_util_Regions_Box_t* _new_111 = _enc__constructor__encore_libs_master_Ped_util_Regions_Box(_ctx, NULL);
                            tuple_t* _tuple_112 = tuple_mk(_ctx, 2);
                            tuple_set_type(_tuple_112, 0, ENCORE_PRIMITIVE);
                            tuple_set_type(_tuple_112, 1, ENCORE_PRIMITIVE);
                            int64_t _binop_115 = (({int64_t _binop_113 = (({ _x_18;}) + ({ _dx_9;})); _binop_113;}) - ({int64_t _literal_114 = 1; _literal_114;}));
                            tuple_set(_tuple_112, 0, ((encore_arg_t) {.i = _binop_115}));
                            tuple_set(_tuple_112, 1, ((encore_arg_t) {.i = _ymax_4}));
                            tuple_t* _tuple_116 = tuple_mk(_ctx, 2);
                            tuple_set_type(_tuple_116, 0, ENCORE_PRIMITIVE);
                            tuple_set_type(_tuple_116, 1, ENCORE_PRIMITIVE);
                            tuple_set(_tuple_116, 0, ((encore_arg_t) {.i = _x_18}));
                            tuple_set(_tuple_116, 1, ((encore_arg_t) {.i = _y_19}));
                            pony_type_t* _tmp_117[] = {};
                            _enc__type_init__encore_libs_master_Ped_util_Regions_Box(_new_111);
                            _enc__method__encore_libs_master_Ped_util_Regions_Box_init_one_way(_ctx, _new_111, NULL, _tuple_112, _tuple_116);
                            ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "boxes");
                            array_t* _fieldacc_118 = (*_this)._enc__field_boxes;
                            array_set(_fieldacc_118, _i_21, ((encore_arg_t) {.p = _new_111}));
                            /* if xindex != 0 then
  {win = win and link(this.boxes[i], this.boxes[i - n]);
   win = win and link(this.boxes[i], this.boxes[i - n - 1])} */;
                            void* _ite_119;
                            if (({int64_t _binop_121 = (({ _xindex_26;}) != ({int64_t _literal_120 = 0; _literal_120;})); _binop_121;}))
                            {
                              /* win = win and link(this.boxes[i], this.boxes[i - n]) */;
                              int64_t _binop_129 = (({ _win_23;}) && ({ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "boxes");
                                                                       array_t* _fieldacc_122 = (*_this)._enc__field_boxes;
                                                                       _enc__active__encore_libs_master_Ped_util_Regions_Box_t* _access_123 = array_get(_fieldacc_122, _i_21).p;
                                                                       ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "boxes");
                                                                       array_t* _fieldacc_124 = (*_this)._enc__field_boxes;
                                                                       int64_t _binop_125 = (({ _i_21;}) - ({ _enc__arg_n;}));
                                                                       _enc__active__encore_libs_master_Ped_util_Regions_Box_t* _access_126 = array_get(_fieldacc_124, _binop_125).p;
                                                                       ENC_DTRACE2(FUNCTION_CALL, (uintptr_t)*_ctx, "Regions.link");
                                                                       pony_type_t* _tmp_127[] = {};
                                                                       int64_t _fun_call_128 = _enc__global_fun__encore_libs_master_Ped_util_Regionslink(_ctx, NULL, _access_123, _access_126); _fun_call_128;}));
                              _win_23 = _binop_129;
                              /* win = win and link(this.boxes[i], this.boxes[i - n - 1]) */;
                              int64_t _binop_139 = (({ _win_23;}) && ({ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "boxes");
                                                                       array_t* _fieldacc_130 = (*_this)._enc__field_boxes;
                                                                       _enc__active__encore_libs_master_Ped_util_Regions_Box_t* _access_131 = array_get(_fieldacc_130, _i_21).p;
                                                                       ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "boxes");
                                                                       array_t* _fieldacc_132 = (*_this)._enc__field_boxes;
                                                                       int64_t _binop_135 = (({int64_t _binop_133 = (({ _i_21;}) - ({ _enc__arg_n;})); _binop_133;}) - ({int64_t _literal_134 = 1; _literal_134;}));
                                                                       _enc__active__encore_libs_master_Ped_util_Regions_Box_t* _access_136 = array_get(_fieldacc_132, _binop_135).p;
                                                                       ENC_DTRACE2(FUNCTION_CALL, (uintptr_t)*_ctx, "Regions.link");
                                                                       pony_type_t* _tmp_137[] = {};
                                                                       int64_t _fun_call_138 = _enc__global_fun__encore_libs_master_Ped_util_Regionslink(_ctx, NULL, _access_131, _access_136); _fun_call_138;}));
                              _win_23 = _binop_139;
                              _ite_119 = ((void*) UNIT);
                            }
                            else
                            {
                              UNIT;
                              _ite_119 = ((void*) UNIT);
                            };
                            /* win = win and link(this.boxes[i], this.boxes[i - 1]) */;
                            int64_t _binop_148 = (({ _win_23;}) && ({ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "boxes");
                                                                     array_t* _fieldacc_140 = (*_this)._enc__field_boxes;
                                                                     _enc__active__encore_libs_master_Ped_util_Regions_Box_t* _access_141 = array_get(_fieldacc_140, _i_21).p;
                                                                     ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "boxes");
                                                                     array_t* _fieldacc_142 = (*_this)._enc__field_boxes;
                                                                     int64_t _binop_144 = (({ _i_21;}) - ({int64_t _literal_143 = 1; _literal_143;}));
                                                                     _enc__active__encore_libs_master_Ped_util_Regions_Box_t* _access_145 = array_get(_fieldacc_142, _binop_144).p;
                                                                     ENC_DTRACE2(FUNCTION_CALL, (uintptr_t)*_ctx, "Regions.link");
                                                                     pony_type_t* _tmp_146[] = {};
                                                                     int64_t _fun_call_147 = _enc__global_fun__encore_libs_master_Ped_util_Regionslink(_ctx, NULL, _access_141, _access_145); _fun_call_147;}));
                            _win_23 = _binop_148;
                            /* i = i + 1 */;
                            int64_t _binop_150 = (({ _i_21;}) + ({int64_t _literal_149 = 1; _literal_149;}));
                            _i_21 = _binop_150;
                            /* x = x + dx */;
                            int64_t _binop_151 = (({ _x_18;}) + ({ _dx_9;}));
                            _x_18 = _binop_151;
                            /* y = ymin */;
                            _y_19 = _ymin_6;
                            _for_24 = UNIT;
                            _index_25 = (_index_25 + _step_29);
                          };
                          /* for yindex in [ 0 , n - 2 by 1 ]
  {this.boxes[i] = new Box((xmax, y + dy - 1), (x, y));
   if yindex != 0 then
     {win = win and link(this.boxes[i], this.boxes[i - 1]);
      win = win and link(this.boxes[i], this.boxes[i - n - 1])};
   win = win and link(this.boxes[i], this.boxes[i - n + 1]);
   win = win and link(this.boxes[i], this.boxes[i - n]);
   i = i + 1;
   y = y + dy} */;
                          void* _for_152;
                          /* Range not generated */;
                          int64_t _literal_159 = 0;
                          int64_t _binop_161 = (({ _enc__arg_n;}) - ({int64_t _literal_160 = 2; _literal_160;}));
                          int64_t _literal_162 = 1;
                          int64_t _literal_163 = 1;
                          int64_t _step_157 = (_literal_163 * _literal_162);
                          range_assert_step(_step_157);
                          int64_t _index_153;
                          if ((_step_157 > 0))
                          {
                            _index_153 = _literal_159;
                          }
                          else
                          {
                            _index_153 = _binop_161;
                          };
                          while (((_index_153 >= _literal_159) && (_index_153 <= _binop_161)))
                          {
                            int64_t _yindex_154 = _index_153;
                            /* this.boxes[i] = new Box((xmax, y + dy - 1), (x, y)) */;
                            _enc__active__encore_libs_master_Ped_util_Regions_Box_t* _new_164 = _enc__constructor__encore_libs_master_Ped_util_Regions_Box(_ctx, NULL);
                            tuple_t* _tuple_165 = tuple_mk(_ctx, 2);
                            tuple_set_type(_tuple_165, 0, ENCORE_PRIMITIVE);
                            tuple_set_type(_tuple_165, 1, ENCORE_PRIMITIVE);
                            int64_t _binop_168 = (({int64_t _binop_166 = (({ _y_19;}) + ({ _dy_12;})); _binop_166;}) - ({int64_t _literal_167 = 1; _literal_167;}));
                            tuple_set(_tuple_165, 0, ((encore_arg_t) {.i = _xmax_3}));
                            tuple_set(_tuple_165, 1, ((encore_arg_t) {.i = _binop_168}));
                            tuple_t* _tuple_169 = tuple_mk(_ctx, 2);
                            tuple_set_type(_tuple_169, 0, ENCORE_PRIMITIVE);
                            tuple_set_type(_tuple_169, 1, ENCORE_PRIMITIVE);
                            tuple_set(_tuple_169, 0, ((encore_arg_t) {.i = _x_18}));
                            tuple_set(_tuple_169, 1, ((encore_arg_t) {.i = _y_19}));
                            pony_type_t* _tmp_170[] = {};
                            _enc__type_init__encore_libs_master_Ped_util_Regions_Box(_new_164);
                            _enc__method__encore_libs_master_Ped_util_Regions_Box_init_one_way(_ctx, _new_164, NULL, _tuple_165, _tuple_169);
                            ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "boxes");
                            array_t* _fieldacc_171 = (*_this)._enc__field_boxes;
                            array_set(_fieldacc_171, _i_21, ((encore_arg_t) {.p = _new_164}));
                            /* if yindex != 0 then
  {win = win and link(this.boxes[i], this.boxes[i - 1]);
   win = win and link(this.boxes[i], this.boxes[i - n - 1])} */;
                            void* _ite_172;
                            if (({int64_t _binop_174 = (({ _yindex_154;}) != ({int64_t _literal_173 = 0; _literal_173;})); _binop_174;}))
                            {
                              /* win = win and link(this.boxes[i], this.boxes[i - 1]) */;
                              int64_t _binop_183 = (({ _win_23;}) && ({ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "boxes");
                                                                       array_t* _fieldacc_175 = (*_this)._enc__field_boxes;
                                                                       _enc__active__encore_libs_master_Ped_util_Regions_Box_t* _access_176 = array_get(_fieldacc_175, _i_21).p;
                                                                       ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "boxes");
                                                                       array_t* _fieldacc_177 = (*_this)._enc__field_boxes;
                                                                       int64_t _binop_179 = (({ _i_21;}) - ({int64_t _literal_178 = 1; _literal_178;}));
                                                                       _enc__active__encore_libs_master_Ped_util_Regions_Box_t* _access_180 = array_get(_fieldacc_177, _binop_179).p;
                                                                       ENC_DTRACE2(FUNCTION_CALL, (uintptr_t)*_ctx, "Regions.link");
                                                                       pony_type_t* _tmp_181[] = {};
                                                                       int64_t _fun_call_182 = _enc__global_fun__encore_libs_master_Ped_util_Regionslink(_ctx, NULL, _access_176, _access_180); _fun_call_182;}));
                              _win_23 = _binop_183;
                              /* win = win and link(this.boxes[i], this.boxes[i - n - 1]) */;
                              int64_t _binop_193 = (({ _win_23;}) && ({ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "boxes");
                                                                       array_t* _fieldacc_184 = (*_this)._enc__field_boxes;
                                                                       _enc__active__encore_libs_master_Ped_util_Regions_Box_t* _access_185 = array_get(_fieldacc_184, _i_21).p;
                                                                       ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "boxes");
                                                                       array_t* _fieldacc_186 = (*_this)._enc__field_boxes;
                                                                       int64_t _binop_189 = (({int64_t _binop_187 = (({ _i_21;}) - ({ _enc__arg_n;})); _binop_187;}) - ({int64_t _literal_188 = 1; _literal_188;}));
                                                                       _enc__active__encore_libs_master_Ped_util_Regions_Box_t* _access_190 = array_get(_fieldacc_186, _binop_189).p;
                                                                       ENC_DTRACE2(FUNCTION_CALL, (uintptr_t)*_ctx, "Regions.link");
                                                                       pony_type_t* _tmp_191[] = {};
                                                                       int64_t _fun_call_192 = _enc__global_fun__encore_libs_master_Ped_util_Regionslink(_ctx, NULL, _access_185, _access_190); _fun_call_192;}));
                              _win_23 = _binop_193;
                              _ite_172 = ((void*) UNIT);
                            }
                            else
                            {
                              UNIT;
                              _ite_172 = ((void*) UNIT);
                            };
                            /* win = win and link(this.boxes[i], this.boxes[i - n + 1]) */;
                            int64_t _binop_203 = (({ _win_23;}) && ({ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "boxes");
                                                                     array_t* _fieldacc_194 = (*_this)._enc__field_boxes;
                                                                     _enc__active__encore_libs_master_Ped_util_Regions_Box_t* _access_195 = array_get(_fieldacc_194, _i_21).p;
                                                                     ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "boxes");
                                                                     array_t* _fieldacc_196 = (*_this)._enc__field_boxes;
                                                                     int64_t _binop_199 = (({int64_t _binop_197 = (({ _i_21;}) - ({ _enc__arg_n;})); _binop_197;}) + ({int64_t _literal_198 = 1; _literal_198;}));
                                                                     _enc__active__encore_libs_master_Ped_util_Regions_Box_t* _access_200 = array_get(_fieldacc_196, _binop_199).p;
                                                                     ENC_DTRACE2(FUNCTION_CALL, (uintptr_t)*_ctx, "Regions.link");
                                                                     pony_type_t* _tmp_201[] = {};
                                                                     int64_t _fun_call_202 = _enc__global_fun__encore_libs_master_Ped_util_Regionslink(_ctx, NULL, _access_195, _access_200); _fun_call_202;}));
                            _win_23 = _binop_203;
                            /* win = win and link(this.boxes[i], this.boxes[i - n]) */;
                            int64_t _binop_211 = (({ _win_23;}) && ({ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "boxes");
                                                                     array_t* _fieldacc_204 = (*_this)._enc__field_boxes;
                                                                     _enc__active__encore_libs_master_Ped_util_Regions_Box_t* _access_205 = array_get(_fieldacc_204, _i_21).p;
                                                                     ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "boxes");
                                                                     array_t* _fieldacc_206 = (*_this)._enc__field_boxes;
                                                                     int64_t _binop_207 = (({ _i_21;}) - ({ _enc__arg_n;}));
                                                                     _enc__active__encore_libs_master_Ped_util_Regions_Box_t* _access_208 = array_get(_fieldacc_206, _binop_207).p;
                                                                     ENC_DTRACE2(FUNCTION_CALL, (uintptr_t)*_ctx, "Regions.link");
                                                                     pony_type_t* _tmp_209[] = {};
                                                                     int64_t _fun_call_210 = _enc__global_fun__encore_libs_master_Ped_util_Regionslink(_ctx, NULL, _access_205, _access_208); _fun_call_210;}));
                            _win_23 = _binop_211;
                            /* i = i + 1 */;
                            int64_t _binop_213 = (({ _i_21;}) + ({int64_t _literal_212 = 1; _literal_212;}));
                            _i_21 = _binop_213;
                            /* y = y + dy */;
                            int64_t _binop_214 = (({ _y_19;}) + ({ _dy_12;}));
                            _y_19 = _binop_214;
                            _for_152 = UNIT;
                            _index_153 = (_index_153 + _step_157);
                          };
                          /* this.boxes[i] = new Box((xmax, ymax), (x, y)) */;
                          _enc__active__encore_libs_master_Ped_util_Regions_Box_t* _new_215 = _enc__constructor__encore_libs_master_Ped_util_Regions_Box(_ctx, NULL);
                          tuple_t* _tuple_216 = tuple_mk(_ctx, 2);
                          tuple_set_type(_tuple_216, 0, ENCORE_PRIMITIVE);
                          tuple_set_type(_tuple_216, 1, ENCORE_PRIMITIVE);
                          tuple_set(_tuple_216, 0, ((encore_arg_t) {.i = _xmax_3}));
                          tuple_set(_tuple_216, 1, ((encore_arg_t) {.i = _ymax_4}));
                          tuple_t* _tuple_217 = tuple_mk(_ctx, 2);
                          tuple_set_type(_tuple_217, 0, ENCORE_PRIMITIVE);
                          tuple_set_type(_tuple_217, 1, ENCORE_PRIMITIVE);
                          tuple_set(_tuple_217, 0, ((encore_arg_t) {.i = _x_18}));
                          tuple_set(_tuple_217, 1, ((encore_arg_t) {.i = _y_19}));
                          pony_type_t* _tmp_218[] = {};
                          _enc__type_init__encore_libs_master_Ped_util_Regions_Box(_new_215);
                          _enc__method__encore_libs_master_Ped_util_Regions_Box_init_one_way(_ctx, _new_215, NULL, _tuple_216, _tuple_217);
                          ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "boxes");
                          array_t* _fieldacc_219 = (*_this)._enc__field_boxes;
                          array_set(_fieldacc_219, _i_21, ((encore_arg_t) {.p = _new_215}));
                          /* win = win and link(this.boxes[i], this.boxes[i - n]) */;
                          int64_t _binop_227 = (({ _win_23;}) && ({ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "boxes");
                                                                   array_t* _fieldacc_220 = (*_this)._enc__field_boxes;
                                                                   _enc__active__encore_libs_master_Ped_util_Regions_Box_t* _access_221 = array_get(_fieldacc_220, _i_21).p;
                                                                   ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "boxes");
                                                                   array_t* _fieldacc_222 = (*_this)._enc__field_boxes;
                                                                   int64_t _binop_223 = (({ _i_21;}) - ({ _enc__arg_n;}));
                                                                   _enc__active__encore_libs_master_Ped_util_Regions_Box_t* _access_224 = array_get(_fieldacc_222, _binop_223).p;
                                                                   ENC_DTRACE2(FUNCTION_CALL, (uintptr_t)*_ctx, "Regions.link");
                                                                   pony_type_t* _tmp_225[] = {};
                                                                   int64_t _fun_call_226 = _enc__global_fun__encore_libs_master_Ped_util_Regionslink(_ctx, NULL, _access_221, _access_224); _fun_call_226;}));
                          _win_23 = _binop_227;
                          /* win = win and link(this.boxes[i], this.boxes[i - 1]) */;
                          int64_t _binop_236 = (({ _win_23;}) && ({ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "boxes");
                                                                   array_t* _fieldacc_228 = (*_this)._enc__field_boxes;
                                                                   _enc__active__encore_libs_master_Ped_util_Regions_Box_t* _access_229 = array_get(_fieldacc_228, _i_21).p;
                                                                   ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "boxes");
                                                                   array_t* _fieldacc_230 = (*_this)._enc__field_boxes;
                                                                   int64_t _binop_232 = (({ _i_21;}) - ({int64_t _literal_231 = 1; _literal_231;}));
                                                                   _enc__active__encore_libs_master_Ped_util_Regions_Box_t* _access_233 = array_get(_fieldacc_230, _binop_232).p;
                                                                   ENC_DTRACE2(FUNCTION_CALL, (uintptr_t)*_ctx, "Regions.link");
                                                                   pony_type_t* _tmp_234[] = {};
                                                                   int64_t _fun_call_235 = _enc__global_fun__encore_libs_master_Ped_util_Regionslink(_ctx, NULL, _access_229, _access_233); _fun_call_235;}));
                          _win_23 = _binop_236;
                          /* win = win and link(this.boxes[i], this.boxes[i - n - 1]) */;
                          int64_t _binop_246 = (({ _win_23;}) && ({ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "boxes");
                                                                   array_t* _fieldacc_237 = (*_this)._enc__field_boxes;
                                                                   _enc__active__encore_libs_master_Ped_util_Regions_Box_t* _access_238 = array_get(_fieldacc_237, _i_21).p;
                                                                   ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "boxes");
                                                                   array_t* _fieldacc_239 = (*_this)._enc__field_boxes;
                                                                   int64_t _binop_242 = (({int64_t _binop_240 = (({ _i_21;}) - ({ _enc__arg_n;})); _binop_240;}) - ({int64_t _literal_241 = 1; _literal_241;}));
                                                                   _enc__active__encore_libs_master_Ped_util_Regions_Box_t* _access_243 = array_get(_fieldacc_239, _binop_242).p;
                                                                   ENC_DTRACE2(FUNCTION_CALL, (uintptr_t)*_ctx, "Regions.link");
                                                                   pony_type_t* _tmp_244[] = {};
                                                                   int64_t _fun_call_245 = _enc__global_fun__encore_libs_master_Ped_util_Regionslink(_ctx, NULL, _access_238, _access_243); _fun_call_245;}));
                          _win_23 = _binop_246;
                          /* unless win then
  print("WIN IS BAD!\n") */;
                          void* _ite_247;
                          if (({int64_t _unary_248 = (! _win_23); _unary_248;}))
                          {
                            char* _literal_249 = "WIN IS BAD!\n";
                            fprintf(stdout, "%s", _literal_249);
                            _ite_247 = ((void*) UNIT);
                          }
                          else
                          {
                            UNIT;
                            _ite_247 = ((void*) UNIT);
                          };
                          /* for a in agents
  for b in this.boxes
    if get b.add(a) then
      embed void { break; } end */;
                          void* _for_250;
                          int64_t _start_253 = 0;
                          int64_t _stop_254 = (array_size(_enc__arg_agents) - 1);
                          int64_t _src_step_256 = 1;
                          int64_t _literal_257 = 1;
                          int64_t _step_255 = (_literal_257 * _src_step_256);
                          range_assert_step(_step_255);
                          int64_t _index_251;
                          if ((_step_255 > 0))
                          {
                            _index_251 = _start_253;
                          }
                          else
                          {
                            _index_251 = _stop_254;
                          };
                          while (((_index_251 >= _start_253) && (_index_251 <= _stop_254)))
                          {
                            _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t* _a_252 = array_get(_enc__arg_agents, _index_251).p;
                            /* for b in this.boxes
  if get b.add(a) then
    embed void { break; } end */;
                            void* _for_258;
                            ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "boxes");
                            array_t* _fieldacc_265 = (*_this)._enc__field_boxes;
                            int64_t _start_261 = 0;
                            int64_t _stop_262 = (array_size(_fieldacc_265) - 1);
                            int64_t _src_step_264 = 1;
                            int64_t _literal_266 = 1;
                            int64_t _step_263 = (_literal_266 * _src_step_264);
                            range_assert_step(_step_263);
                            int64_t _index_259;
                            if ((_step_263 > 0))
                            {
                              _index_259 = _start_261;
                            }
                            else
                            {
                              _index_259 = _stop_262;
                            };
                            while (((_index_259 >= _start_261) && (_index_259 <= _stop_262)))
                            {
                              _enc__active__encore_libs_master_Ped_util_Regions_Box_t* _b_260 = array_get(_fieldacc_265, _index_259).p;
                              /* if get b.add(a) then
  embed void { break; } end */;
                              void* _ite_267;
                              if (({check_receiver(_b_260, ".", "b", "add", "\"./encore-libs-master/Ped_util/Regions.enc\" (line 86, column 33)");
                                    pony_type_t* _tmp_269[] = {};
                                    future_t* _fut_268 = _enc__method__encore_libs_master_Ped_util_Regions_Box_add_future(_ctx, _b_260, NULL, _a_252);
                                    int64_t _tmp_270 = future_get_actor(_ctx, _fut_268).i; _tmp_270;}))
                              {
                                /* embed void { break; } end */;
                                ({{ break; }});
                                _ite_267 = ((void*) UNIT);
                              }
                              else
                              {
                                UNIT;
                                _ite_267 = ((void*) UNIT);
                              };
                              _for_258 = _ite_267;
                              _index_259 = (_index_259 + _step_263);
                            };
                            _for_250 = _for_258;
                            _index_251 = (_index_251 + _step_255);
                          }; _for_250;}));
  }
  else
  {
    fprintf(stderr, "*** Runtime error: No matching clause was found ***\n");
    exit(1);
  };
  ENC_DTRACE3(METHOD_EXIT, (uintptr_t)*_ctx, (uintptr_t)_this, "init");
  return UNIT;
}


future_t* _enc__method__encore_libs_master_Ped_util_Regions_Tiling_box_init_future(pony_ctx_t** _ctx, _enc__active__encore_libs_master_Ped_util_Regions_Tiling_box_t* _this, pony_type_t** runtimeType, array_t* _enc__arg_agents, int64_t _enc__arg_n)
{
  future_t* _fut = future_mk(_ctx, ENCORE_PRIMITIVE);
  pony_gc_send((*_ctx));
  encore_trace_object((*_ctx), _enc__arg_agents, array_trace);
  /* Not tracing field '_enc__arg_n' */;
  encore_trace_object((*_ctx), _fut, future_trace);
  pony_send_done((*_ctx));
  _enc__fut_msg__encore_libs_master_Ped_util_Regions_Tiling_box_init_t* msg = ((_enc__fut_msg__encore_libs_master_Ped_util_Regions_Tiling_box_init_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__fut_msg__encore_libs_master_Ped_util_Regions_Tiling_box_init_t)), _ENC__FUT_MSG__encore_libs_master_Ped_util_Regions_Tiling_box_init));
  msg->f1 = _enc__arg_agents;
  msg->f2 = _enc__arg_n;
  msg->_fut = _fut;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
  return _fut;
}


void _enc__method__encore_libs_master_Ped_util_Regions_Tiling_box_init_one_way(pony_ctx_t** _ctx, _enc__active__encore_libs_master_Ped_util_Regions_Tiling_box_t* _this, pony_type_t** runtimeType, array_t* _enc__arg_agents, int64_t _enc__arg_n)
{
  pony_gc_send((*_ctx));
  encore_trace_object((*_ctx), _enc__arg_agents, array_trace);
  /* Not tracing field '_enc__arg_n' */;
  /* No tracing future for oneway msg */;
  pony_send_done((*_ctx));
  _enc__oneway_msg__encore_libs_master_Ped_util_Regions_Tiling_box_init_t* msg = ((_enc__oneway_msg__encore_libs_master_Ped_util_Regions_Tiling_box_init_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__oneway_msg__encore_libs_master_Ped_util_Regions_Tiling_box_init_t)), _ENC__ONEWAY_MSG__encore_libs_master_Ped_util_Regions_Tiling_box_init));
  msg->f1 = _enc__arg_agents;
  msg->f2 = _enc__arg_n;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
}


void* _enc__method__encore_libs_master_Ped_util_Regions_Tiling_box_move(pony_ctx_t** _ctx, _enc__active__encore_libs_master_Ped_util_Regions_Tiling_box_t* _this, pony_type_t** runtimeType, int64_t _enc__arg_ui, _enc__active__encore_libs_master_SDL_SDL_Main_SDL_Main_t* _enc__arg_sdl_main, int64_t _enc__arg_i, int64_t _enc__arg_start_time)
{
  ENC_DTRACE3(METHOD_ENTRY, (uintptr_t)*_ctx, (uintptr_t)_this, "move");
  /* for id in [ 0 , |this.boxes| - 1 by 1 ]
  this.futures[id] = (this.boxes[id]).move() */;
  void* _for_0;
  /* Range not generated */;
  int64_t _literal_7 = 0;
  int64_t _binop_11 = (({ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "boxes");
                         array_t* _fieldacc_8 = (*_this)._enc__field_boxes;
                         int64_t _size_9 = array_size(_fieldacc_8); _size_9;}) - ({int64_t _literal_10 = 1; _literal_10;}));
  int64_t _literal_12 = 1;
  int64_t _literal_13 = 1;
  int64_t _step_5 = (_literal_13 * _literal_12);
  range_assert_step(_step_5);
  int64_t _index_1;
  if ((_step_5 > 0))
  {
    _index_1 = _literal_7;
  }
  else
  {
    _index_1 = _binop_11;
  };
  while (((_index_1 >= _literal_7) && (_index_1 <= _binop_11)))
  {
    int64_t _id_2 = _index_1;
    /* this.futures[id] = (this.boxes[id]).move() */;
    ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "boxes");
    array_t* _fieldacc_15 = (*_this)._enc__field_boxes;
    _enc__active__encore_libs_master_Ped_util_Regions_Box_t* _access_16 = array_get(_fieldacc_15, _id_2).p;
    check_receiver(_access_16, ".", "this.boxes[id]", "move", "\"./encore-libs-master/Ped_util/Regions.enc\" (line 95, column 30)");
    pony_type_t* _tmp_17[] = {};
    future_t* _fut_14 = _enc__method__encore_libs_master_Ped_util_Regions_Box_move_future(_ctx, _access_16, NULL);
    ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "futures");
    array_t* _fieldacc_18 = (*_this)._enc__field_futures;
    array_set(_fieldacc_18, _id_2, ((encore_arg_t) {.p = _fut_14}));
    _for_0 = UNIT;
    _index_1 = (_index_1 + _step_5);
  };
  /* for f in this.futures
  get f */;
  int64_t _for_19;
  ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "futures");
  array_t* _fieldacc_26 = (*_this)._enc__field_futures;
  int64_t _start_22 = 0;
  int64_t _stop_23 = (array_size(_fieldacc_26) - 1);
  int64_t _src_step_25 = 1;
  int64_t _literal_27 = 1;
  int64_t _step_24 = (_literal_27 * _src_step_25);
  range_assert_step(_step_24);
  int64_t _index_20;
  if ((_step_24 > 0))
  {
    _index_20 = _start_22;
  }
  else
  {
    _index_20 = _stop_23;
  };
  while (((_index_20 >= _start_22) && (_index_20 <= _stop_23)))
  {
    future_t* _f_21 = array_get(_fieldacc_26, _index_20).p;
    /* get f */;
    int64_t _tmp_28 = future_get_actor(_ctx, _f_21).i;
    _for_19 = _tmp_28;
    _index_20 = (_index_20 + _step_24);
  };
  /* if ui then
  show(this.agents(), sdl_main) */;
  void* _ite_29;
  if (({ _enc__arg_ui;}))
  {
    check_receiver(_this, ".", "this", "agents", "\"./encore-libs-master/Ped_util/Regions.enc\" (line 102, column 26)");
    pony_type_t* _tmp_31[] = {};
    array_t* _sync_method_call_30 = _enc__method__encore_libs_master_Ped_util_Regions_Tiling_box_agents(_ctx, _this, NULL);
    ENC_DTRACE2(FUNCTION_CALL, (uintptr_t)*_ctx, "Ped_util.UI.show");
    pony_type_t* _tmp_32[] = {};
    _enc__global_fun__encore_libs_master_Ped_util_UIshow(_ctx, NULL, _sync_method_call_30, _enc__arg_sdl_main);
    _ite_29 = ((void*) UNIT);
  }
  else
  {
    UNIT;
    _ite_29 = ((void*) UNIT);
  };
  /* if i > 1 then
  this!move(ui, sdl_main, i - 1, start_time)
else
  printtime(clock() - start_time) */;
  void* _ite_33;
  if (({int64_t _binop_35 = (({ _enc__arg_i;}) > ({int64_t _literal_34 = 1; _literal_34;})); _binop_35;}))
  {
    check_receiver(_this, " ! ", "this", "move", "\"./encore-libs-master/Ped_util/Regions.enc\" (line 103, column 26)");
    int64_t _binop_37 = (({ _enc__arg_i;}) - ({int64_t _literal_36 = 1; _literal_36;}));
    pony_type_t* _tmp_38[] = {};
    _enc__method__encore_libs_master_Ped_util_Regions_Tiling_box_move_one_way(_ctx, _this, NULL, _enc__arg_ui, _enc__arg_sdl_main, _binop_37, _enc__arg_start_time);
    _ite_33 = ((void*) UNIT);
  }
  else
  {
    /* printtime(clock() - start_time) */;
    int64_t _binop_41 = (({ENC_DTRACE2(FUNCTION_CALL, (uintptr_t)*_ctx, "Global_funs.clock");
                           pony_type_t* _tmp_39[] = {};
                           int64_t _fun_call_40 = _enc__global_fun__encore_libs_master_Ped_util_Global_funsclock(_ctx, NULL); _fun_call_40;}) - ({ _enc__arg_start_time;}));
    ENC_DTRACE2(FUNCTION_CALL, (uintptr_t)*_ctx, "Global_funs.printtime");
    pony_type_t* _tmp_42[] = {};
    _enc__global_fun__encore_libs_master_Ped_util_Global_funsprinttime(_ctx, NULL, _binop_41);
    _ite_33 = ((void*) UNIT);
  };
  ENC_DTRACE3(METHOD_EXIT, (uintptr_t)*_ctx, (uintptr_t)_this, "move");
  return UNIT;
}


future_t* _enc__method__encore_libs_master_Ped_util_Regions_Tiling_box_move_future(pony_ctx_t** _ctx, _enc__active__encore_libs_master_Ped_util_Regions_Tiling_box_t* _this, pony_type_t** runtimeType, int64_t _enc__arg_ui, _enc__active__encore_libs_master_SDL_SDL_Main_SDL_Main_t* _enc__arg_sdl_main, int64_t _enc__arg_i, int64_t _enc__arg_start_time)
{
  future_t* _fut = future_mk(_ctx, ENCORE_PRIMITIVE);
  pony_gc_send((*_ctx));
  /* Not tracing field '_enc__arg_ui' */;
  encore_trace_actor((*_ctx), ((pony_actor_t*) _enc__arg_sdl_main));
  /* Not tracing field '_enc__arg_i' */;
  /* Not tracing field '_enc__arg_start_time' */;
  encore_trace_object((*_ctx), _fut, future_trace);
  pony_send_done((*_ctx));
  _enc__fut_msg__encore_libs_master_Ped_util_Regions_Tiling_box_move_t* msg = ((_enc__fut_msg__encore_libs_master_Ped_util_Regions_Tiling_box_move_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__fut_msg__encore_libs_master_Ped_util_Regions_Tiling_box_move_t)), _ENC__FUT_MSG__encore_libs_master_Ped_util_Regions_Tiling_box_move));
  msg->f1 = _enc__arg_ui;
  msg->f2 = _enc__arg_sdl_main;
  msg->f3 = _enc__arg_i;
  msg->f4 = _enc__arg_start_time;
  msg->_fut = _fut;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
  return _fut;
}


void _enc__method__encore_libs_master_Ped_util_Regions_Tiling_box_move_one_way(pony_ctx_t** _ctx, _enc__active__encore_libs_master_Ped_util_Regions_Tiling_box_t* _this, pony_type_t** runtimeType, int64_t _enc__arg_ui, _enc__active__encore_libs_master_SDL_SDL_Main_SDL_Main_t* _enc__arg_sdl_main, int64_t _enc__arg_i, int64_t _enc__arg_start_time)
{
  pony_gc_send((*_ctx));
  /* Not tracing field '_enc__arg_ui' */;
  encore_trace_actor((*_ctx), ((pony_actor_t*) _enc__arg_sdl_main));
  /* Not tracing field '_enc__arg_i' */;
  /* Not tracing field '_enc__arg_start_time' */;
  /* No tracing future for oneway msg */;
  pony_send_done((*_ctx));
  _enc__oneway_msg__encore_libs_master_Ped_util_Regions_Tiling_box_move_t* msg = ((_enc__oneway_msg__encore_libs_master_Ped_util_Regions_Tiling_box_move_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__oneway_msg__encore_libs_master_Ped_util_Regions_Tiling_box_move_t)), _ENC__ONEWAY_MSG__encore_libs_master_Ped_util_Regions_Tiling_box_move));
  msg->f1 = _enc__arg_ui;
  msg->f2 = _enc__arg_sdl_main;
  msg->f3 = _enc__arg_i;
  msg->f4 = _enc__arg_start_time;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
}


array_t* _enc__method__encore_libs_master_Ped_util_Regions_Tiling_box_agents(pony_ctx_t** _ctx, _enc__active__encore_libs_master_Ped_util_Regions_Tiling_box_t* _this, pony_type_t** runtimeType)
{
  ENC_DTRACE3(METHOD_ENTRY, (uintptr_t)*_ctx, (uintptr_t)_this, "agents");
  /* val temp = new [[(int, int)]](|this.boxes|) */;
  /* temp = new [[(int, int)]](|this.boxes|) */;
  ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "boxes");
  array_t* _fieldacc_1 = (*_this)._enc__field_boxes;
  int64_t _size_2 = array_size(_fieldacc_1);
  array_t* _array_0 = array_mk(_ctx, _size_2, (&(array_type)));
  array_t* _temp_3 = _array_0;
  /* for i in [ 0 , |this.boxes| - 1 by 1 ]
  temp[i] = get (this.boxes[i]).agents() */;
  void* _for_4;
  /* Range not generated */;
  int64_t _literal_11 = 0;
  int64_t _binop_15 = (({ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "boxes");
                         array_t* _fieldacc_12 = (*_this)._enc__field_boxes;
                         int64_t _size_13 = array_size(_fieldacc_12); _size_13;}) - ({int64_t _literal_14 = 1; _literal_14;}));
  int64_t _literal_16 = 1;
  int64_t _literal_17 = 1;
  int64_t _step_9 = (_literal_17 * _literal_16);
  range_assert_step(_step_9);
  int64_t _index_5;
  if ((_step_9 > 0))
  {
    _index_5 = _literal_11;
  }
  else
  {
    _index_5 = _binop_15;
  };
  while (((_index_5 >= _literal_11) && (_index_5 <= _binop_15)))
  {
    int64_t _i_6 = _index_5;
    /* temp[i] = get (this.boxes[i]).agents() */;
    ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "boxes");
    array_t* _fieldacc_19 = (*_this)._enc__field_boxes;
    _enc__active__encore_libs_master_Ped_util_Regions_Box_t* _access_20 = array_get(_fieldacc_19, _i_6).p;
    check_receiver(_access_20, ".", "this.boxes[i]", "agents", "\"./encore-libs-master/Ped_util/Regions.enc\" (line 109, column 29)");
    pony_type_t* _tmp_21[] = {};
    future_t* _fut_18 = _enc__method__encore_libs_master_Ped_util_Regions_Box_agents_future(_ctx, _access_20, NULL);
    array_t* _tmp_22 = future_get_actor(_ctx, _fut_18).p;
    array_set(_temp_3, _i_6, ((encore_arg_t) {.p = _tmp_22}));
    _for_4 = UNIT;
    _index_5 = (_index_5 + _step_9);
  };
  /* flatten(temp) */;
  ENC_DTRACE2(FUNCTION_CALL, (uintptr_t)*_ctx, "Global_funs.flatten");
  pony_type_t* _tmp_23[] = {};
  array_t* _fun_call_24 = _enc__global_fun__encore_libs_master_Ped_util_Global_funsflatten(_ctx, NULL, _temp_3);
  ENC_DTRACE3(METHOD_EXIT, (uintptr_t)*_ctx, (uintptr_t)_this, "agents");
  return ((array_t*) _fun_call_24);
}


future_t* _enc__method__encore_libs_master_Ped_util_Regions_Tiling_box_agents_future(pony_ctx_t** _ctx, _enc__active__encore_libs_master_Ped_util_Regions_Tiling_box_t* _this, pony_type_t** runtimeType)
{
  future_t* _fut = future_mk(_ctx, (&(array_type)));
  pony_gc_send((*_ctx));
  encore_trace_object((*_ctx), _fut, future_trace);
  pony_send_done((*_ctx));
  _enc__fut_msg__encore_libs_master_Ped_util_Regions_Tiling_box_agents_t* msg = ((_enc__fut_msg__encore_libs_master_Ped_util_Regions_Tiling_box_agents_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__fut_msg__encore_libs_master_Ped_util_Regions_Tiling_box_agents_t)), _ENC__FUT_MSG__encore_libs_master_Ped_util_Regions_Tiling_box_agents));
  msg->_fut = _fut;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
  return _fut;
}


void _enc__method__encore_libs_master_Ped_util_Regions_Tiling_box_agents_one_way(pony_ctx_t** _ctx, _enc__active__encore_libs_master_Ped_util_Regions_Tiling_box_t* _this, pony_type_t** runtimeType)
{
  pony_gc_send((*_ctx));
  /* No tracing future for oneway msg */;
  pony_send_done((*_ctx));
  _enc__oneway_msg__encore_libs_master_Ped_util_Regions_Tiling_box_agents_t* msg = ((_enc__oneway_msg__encore_libs_master_Ped_util_Regions_Tiling_box_agents_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__oneway_msg__encore_libs_master_Ped_util_Regions_Tiling_box_agents_t)), _ENC__ONEWAY_MSG__encore_libs_master_Ped_util_Regions_Tiling_box_agents));
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
}


static void _enc__dispatch__encore_libs_master_Ped_util_Regions_Tiling_box(pony_ctx_t** _ctx, pony_actor_t* _a, pony_msg_t* _m)
{
  _enc__active__encore_libs_master_Ped_util_Regions_Tiling_box_t* _this = ((_enc__active__encore_libs_master_Ped_util_Regions_Tiling_box_t*) _a);
  switch (_m->id)
  {
    case _ENC__FUT_MSG__encore_libs_master_Ped_util_Regions_Tiling_box_init:
    {
      future_t* _fut = ((encore_fut_msg_t*) _m)->_fut;
      array_t* _enc__arg_agents = ((_enc__fut_msg__encore_libs_master_Ped_util_Regions_Tiling_box_init_t*) _m)->f1;
      int64_t _enc__arg_n = ((_enc__fut_msg__encore_libs_master_Ped_util_Regions_Tiling_box_init_t*) _m)->f2;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      encore_trace_object((*_ctx), _enc__arg_agents, array_trace);
      /* Not tracing field '_enc__arg_n' */;
      encore_trace_object((*_ctx), _fut, future_type.trace);
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      pony_type_t* methodTypeVars[] = {};
      future_fulfil(_ctx, _fut, ((encore_arg_t) {.p = _enc__method__encore_libs_master_Ped_util_Regions_Tiling_box_init(_ctx, _this, methodTypeVars, _enc__arg_agents, _enc__arg_n)}));
      break;
    }
    case _ENC__ONEWAY_MSG__encore_libs_master_Ped_util_Regions_Tiling_box_init:
    {
      array_t* _enc__arg_agents = ((_enc__oneway_msg__encore_libs_master_Ped_util_Regions_Tiling_box_init_t*) _m)->f1;
      int64_t _enc__arg_n = ((_enc__oneway_msg__encore_libs_master_Ped_util_Regions_Tiling_box_init_t*) _m)->f2;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      encore_trace_object((*_ctx), _enc__arg_agents, array_trace);
      /* Not tracing field '_enc__arg_n' */;
      /* Not tracing the future in a oneWay send */;
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      pony_type_t* methodTypeVars[] = {};
      _enc__method__encore_libs_master_Ped_util_Regions_Tiling_box_init(_ctx, _this, methodTypeVars, _enc__arg_agents, _enc__arg_n);
      break;
    }
    case _ENC__FUT_MSG__encore_libs_master_Ped_util_Regions_Tiling_box_move:
    {
      future_t* _fut = ((encore_fut_msg_t*) _m)->_fut;
      int64_t _enc__arg_ui = ((_enc__fut_msg__encore_libs_master_Ped_util_Regions_Tiling_box_move_t*) _m)->f1;
      _enc__active__encore_libs_master_SDL_SDL_Main_SDL_Main_t* _enc__arg_sdl_main = ((_enc__fut_msg__encore_libs_master_Ped_util_Regions_Tiling_box_move_t*) _m)->f2;
      int64_t _enc__arg_i = ((_enc__fut_msg__encore_libs_master_Ped_util_Regions_Tiling_box_move_t*) _m)->f3;
      int64_t _enc__arg_start_time = ((_enc__fut_msg__encore_libs_master_Ped_util_Regions_Tiling_box_move_t*) _m)->f4;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      /* Not tracing field '_enc__arg_ui' */;
      encore_trace_actor((*_ctx), ((pony_actor_t*) _enc__arg_sdl_main));
      /* Not tracing field '_enc__arg_i' */;
      /* Not tracing field '_enc__arg_start_time' */;
      encore_trace_object((*_ctx), _fut, future_type.trace);
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      pony_type_t* methodTypeVars[] = {};
      future_fulfil(_ctx, _fut, ((encore_arg_t) {.p = _enc__method__encore_libs_master_Ped_util_Regions_Tiling_box_move(_ctx, _this, methodTypeVars, _enc__arg_ui, _enc__arg_sdl_main, _enc__arg_i, _enc__arg_start_time)}));
      break;
    }
    case _ENC__ONEWAY_MSG__encore_libs_master_Ped_util_Regions_Tiling_box_move:
    {
      int64_t _enc__arg_ui = ((_enc__oneway_msg__encore_libs_master_Ped_util_Regions_Tiling_box_move_t*) _m)->f1;
      _enc__active__encore_libs_master_SDL_SDL_Main_SDL_Main_t* _enc__arg_sdl_main = ((_enc__oneway_msg__encore_libs_master_Ped_util_Regions_Tiling_box_move_t*) _m)->f2;
      int64_t _enc__arg_i = ((_enc__oneway_msg__encore_libs_master_Ped_util_Regions_Tiling_box_move_t*) _m)->f3;
      int64_t _enc__arg_start_time = ((_enc__oneway_msg__encore_libs_master_Ped_util_Regions_Tiling_box_move_t*) _m)->f4;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      /* Not tracing field '_enc__arg_ui' */;
      encore_trace_actor((*_ctx), ((pony_actor_t*) _enc__arg_sdl_main));
      /* Not tracing field '_enc__arg_i' */;
      /* Not tracing field '_enc__arg_start_time' */;
      /* Not tracing the future in a oneWay send */;
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      pony_type_t* methodTypeVars[] = {};
      _enc__method__encore_libs_master_Ped_util_Regions_Tiling_box_move(_ctx, _this, methodTypeVars, _enc__arg_ui, _enc__arg_sdl_main, _enc__arg_i, _enc__arg_start_time);
      break;
    }
    case _ENC__FUT_MSG__encore_libs_master_Ped_util_Regions_Tiling_box_agents:
    {
      future_t* _fut = ((encore_fut_msg_t*) _m)->_fut;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      encore_trace_object((*_ctx), _fut, future_type.trace);
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      pony_type_t* methodTypeVars[] = {};
      future_fulfil(_ctx, _fut, ((encore_arg_t) {.p = _enc__method__encore_libs_master_Ped_util_Regions_Tiling_box_agents(_ctx, _this, methodTypeVars)}));
      break;
    }
    case _ENC__ONEWAY_MSG__encore_libs_master_Ped_util_Regions_Tiling_box_agents:
    {
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      /* Not tracing the future in a oneWay send */;
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      pony_type_t* methodTypeVars[] = {};
      _enc__method__encore_libs_master_Ped_util_Regions_Tiling_box_agents(_ctx, _this, methodTypeVars);
      break;
    }
    default:
    {
      printf("error, got invalid id: %zd", _m->id);
    }
  };
}


pony_type_t _enc__active__encore_libs_master_Ped_util_Regions_Tiling_box_type = {.id=_ENC__ID__encore_libs_master_Ped_util_Regions_Tiling_box, .size=sizeof(_enc__active__encore_libs_master_Ped_util_Regions_Tiling_box_t), .trace=_enc__trace__encore_libs_master_Ped_util_Regions_Tiling_box, .dispatch=_enc__dispatch__encore_libs_master_Ped_util_Regions_Tiling_box, .vtable=trait_method_selector};
