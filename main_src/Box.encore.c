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


struct _enc__active__encore_libs_master_Ped_util_Box_Box_t
{
  encore_actor_t _enc__actor;
  option_t* _enc__field_toplevel;
  tuple_t* _enc__field_space;
  array_t* _enc__field_multi;
  _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_struct_t* _enc__field_agents;
};


void _enc__type_init__encore_libs_master_Ped_util_Box_Box(_enc__active__encore_libs_master_Ped_util_Box_Box_t* this, ... )
{
  va_list params;
  va_start(params, this);
  va_end(params);
}


void _enc__trace__encore_libs_master_Ped_util_Box_Box(pony_ctx_t* _ctx_arg, void* p)
{
  pony_ctx_t** _ctx = (&(_ctx_arg));
  _enc__active__encore_libs_master_Ped_util_Box_Box_t* _this = p;
  option_t* _enc__field_toplevel = _this->_enc__field_toplevel;
  encore_trace_object((*_ctx), _enc__field_toplevel, option_trace);
  tuple_t* _enc__field_space = _this->_enc__field_space;
  encore_trace_object((*_ctx), _enc__field_space, tuple_trace);
  array_t* _enc__field_multi = _this->_enc__field_multi;
  encore_trace_object((*_ctx), _enc__field_multi, array_trace);
  _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_struct_t* _enc__field_agents = _this->_enc__field_agents;
  encore_trace_object((*_ctx), _enc__field_agents, _enc__trace__encore_libs_master_Ped_util_Agent_passive_Agent_struct);
}


_enc__active__encore_libs_master_Ped_util_Box_Box_t* _enc__constructor__encore_libs_master_Ped_util_Box_Box(pony_ctx_t** _ctx)
{
  _enc__active__encore_libs_master_Ped_util_Box_Box_t* this = ((_enc__active__encore_libs_master_Ped_util_Box_Box_t*) encore_create((*_ctx), (&(_enc__active__encore_libs_master_Ped_util_Box_Box_type))));
  return this;
}


void* _enc__method__encore_libs_master_Ped_util_Box_Box__init(pony_ctx_t** _ctx, _enc__active__encore_libs_master_Ped_util_Box_Box_t* _this, tuple_t* _enc__arg_space, option_t* _enc__arg_toplevel, int64_t _enc__arg_levels_left)
{
  /* this.space = space */;
  (*({ _this;}))._enc__field_space = _enc__arg_space;
  /* this.toplevel = toplevel */;
  (*({ _this;}))._enc__field_toplevel = _enc__arg_toplevel;
  /* match space with
  (xmin, ymin, xmax, ymax) => let dx = xmax - xmin
                                  dy = ymax - ymin
                                  myface = Just this
                              in
                                {dx = dx / 2;
                                 dy = dy / 2;
                                 if levels_left > 0 then
                                   {this.multi = new [Box](4);
                                    this.multi[0] = new Box((xmax, 
                                                             ymax, 
                                                             xmax - dx + 1, 
                                                             ymax - dy + 1), 
                                                            myface, 
                                                            levels_left - 1);
                                    this.multi[1] = new Box((xmax - dx, ymax - dy, xmin, ymin), 
                                                            myface, 
                                                            levels_left - 1);
                                    this.multi[2] = new Box((xmax - dx, ymax, xmin, ymax - dy + 1), 
                                                            myface, 
                                                            levels_left - 1);
                                    this.multi[3] = new Box((xmax, ymax - dy, xmax - dx + 1, ymin), 
                                                            myface, 
                                                            levels_left - 1);
                                    ()}
                                 else
                                   {this.multi = new [Box](0);
                                    ()}}
 */;
  void* _match_0;
  int64_t _xmin_1;
  int64_t _ymin_2;
  int64_t _xmax_3;
  int64_t _ymax_4;
  if ((({int64_t _tupleCheck_62;
         _tupleCheck_62 = 1;
         int64_t _tupleAccess_63 = tuple_get(_enc__arg_space, 0).i;
         int64_t _varBinding_64;
         _xmin_1 = _tupleAccess_63;
         _varBinding_64 = 1;
         _tupleCheck_62 = (_tupleCheck_62 && _varBinding_64);
         int64_t _tupleAccess_65 = tuple_get(_enc__arg_space, 1).i;
         int64_t _varBinding_66;
         _ymin_2 = _tupleAccess_65;
         _varBinding_66 = 1;
         _tupleCheck_62 = (_tupleCheck_62 && _varBinding_66);
         int64_t _tupleAccess_67 = tuple_get(_enc__arg_space, 2).i;
         int64_t _varBinding_68;
         _xmax_3 = _tupleAccess_67;
         _varBinding_68 = 1;
         _tupleCheck_62 = (_tupleCheck_62 && _varBinding_68);
         int64_t _tupleAccess_69 = tuple_get(_enc__arg_space, 3).i;
         int64_t _varBinding_70;
         _ymax_4 = _tupleAccess_69;
         _varBinding_70 = 1;
         _tupleCheck_62 = (_tupleCheck_62 && _varBinding_70); _tupleCheck_62;}) && ({int64_t _literal_71 = 1/*True*/; _literal_71;})))
  {
    _match_0 = ((void*) ({/* let dx = xmax - xmin
    dy = ymax - ymin
    myface = Just this
in
  {dx = dx / 2;
   dy = dy / 2;
   if levels_left > 0 then
     {this.multi = new [Box](4);
      this.multi[0] = new Box((xmax, 
                               ymax, 
                               xmax - dx + 1, 
                               ymax - dy + 1), 
                              myface, 
                              levels_left - 1);
      this.multi[1] = new Box((xmax - dx, ymax - dy, xmin, ymin), 
                              myface, 
                              levels_left - 1);
      this.multi[2] = new Box((xmax - dx, ymax, xmin, ymax - dy + 1), 
                              myface, 
                              levels_left - 1);
      this.multi[3] = new Box((xmax, ymax - dy, xmax - dx + 1, ymin), 
                              myface, 
                              levels_left - 1);
      ()}
   else
     {this.multi = new [Box](0);
      ()}} */;
                          /* dx = xmax - xmin */;
                          int64_t _binop_5 = (({ _xmax_3;}) - ({ _xmin_1;}));
                          int64_t _dx_6 = _binop_5;
                          /* dy = ymax - ymin */;
                          int64_t _binop_7 = (({ _ymax_4;}) - ({ _ymin_2;}));
                          int64_t _dy_8 = _binop_7;
                          /* myface = Just this */;
                          option_t* _option_9 = option_mk(_ctx, JUST, ((encore_arg_t) {.p = _this}), ENCORE_ACTIVE);
                          option_t* _myface_10 = _option_9;
                          /* dx = dx / 2 */;
                          int64_t _binop_12 = (({ _dx_6;}) / ({int64_t _literal_11 = 2; _literal_11;}));
                          _dx_6 = _binop_12;
                          /* dy = dy / 2 */;
                          int64_t _binop_14 = (({ _dy_8;}) / ({int64_t _literal_13 = 2; _literal_13;}));
                          _dy_8 = _binop_14;
                          /* if levels_left > 0 then
  {this.multi = new [Box](4);
   this.multi[0] = new Box((xmax, 
                            ymax, 
                            xmax - dx + 1, 
                            ymax - dy + 1), 
                           myface, 
                           levels_left - 1);
   this.multi[1] = new Box((xmax - dx, ymax - dy, xmin, ymin), 
                           myface, 
                           levels_left - 1);
   this.multi[2] = new Box((xmax - dx, ymax, xmin, ymax - dy + 1), 
                           myface, 
                           levels_left - 1);
   this.multi[3] = new Box((xmax, ymax - dy, xmax - dx + 1, ymin), 
                           myface, 
                           levels_left - 1);
   ()}
else
  {this.multi = new [Box](0);
   ()} */;
                          void* _ite_15;
                          if (({int64_t _binop_17 = (({ _enc__arg_levels_left;}) > ({int64_t _literal_16 = 0; _literal_16;})); _binop_17;}))
                          {
                            /* this.multi = new [Box](4) */;
                            int64_t _literal_19 = 4;
                            array_t* _array_18 = array_mk(_ctx, _literal_19, ENCORE_ACTIVE);
                            (*({ _this;}))._enc__field_multi = _array_18;
                            /* this.multi[0] = new Box((xmax, 
                         ymax, 
                         xmax - dx + 1, 
                         ymax - dy + 1), 
                        myface, 
                        levels_left - 1) */;
                            _enc__active__encore_libs_master_Ped_util_Box_Box_t* _new_20 = _enc__constructor__encore_libs_master_Ped_util_Box_Box(_ctx);
                            tuple_t* _tuple_21 = tuple_mk(_ctx, 4);
                            tuple_set_type(_tuple_21, 0, ENCORE_PRIMITIVE);
                            tuple_set_type(_tuple_21, 1, ENCORE_PRIMITIVE);
                            tuple_set_type(_tuple_21, 2, ENCORE_PRIMITIVE);
                            tuple_set_type(_tuple_21, 3, ENCORE_PRIMITIVE);
                            int64_t _binop_24 = (({int64_t _binop_22 = (({ _xmax_3;}) - ({ _dx_6;})); _binop_22;}) + ({int64_t _literal_23 = 1; _literal_23;}));
                            int64_t _binop_27 = (({int64_t _binop_25 = (({ _ymax_4;}) - ({ _dy_8;})); _binop_25;}) + ({int64_t _literal_26 = 1; _literal_26;}));
                            tuple_set(_tuple_21, 0, ((encore_arg_t) {.i = _xmax_3}));
                            tuple_set(_tuple_21, 1, ((encore_arg_t) {.i = _ymax_4}));
                            tuple_set(_tuple_21, 2, ((encore_arg_t) {.i = _binop_24}));
                            tuple_set(_tuple_21, 3, ((encore_arg_t) {.i = _binop_27}));
                            int64_t _binop_29 = (({ _enc__arg_levels_left;}) - ({int64_t _literal_28 = 1; _literal_28;}));
                            _enc__type_init__encore_libs_master_Ped_util_Box_Box(_new_20);
                            _enc__method__encore_libs_master_Ped_util_Box_Box__init_one_way(_ctx, _new_20, _tuple_21, _myface_10, _binop_29);
                            array_t* _fieldacc_30 = (*_this)._enc__field_multi;
                            int64_t _literal_31 = 0;
                            array_set(_fieldacc_30, _literal_31, ((encore_arg_t) {.p = _new_20}));
                            /* this.multi[1] = new Box((xmax - dx, ymax - dy, xmin, ymin), 
                        myface, 
                        levels_left - 1) */;
                            _enc__active__encore_libs_master_Ped_util_Box_Box_t* _new_32 = _enc__constructor__encore_libs_master_Ped_util_Box_Box(_ctx);
                            tuple_t* _tuple_33 = tuple_mk(_ctx, 4);
                            tuple_set_type(_tuple_33, 0, ENCORE_PRIMITIVE);
                            tuple_set_type(_tuple_33, 1, ENCORE_PRIMITIVE);
                            tuple_set_type(_tuple_33, 2, ENCORE_PRIMITIVE);
                            tuple_set_type(_tuple_33, 3, ENCORE_PRIMITIVE);
                            int64_t _binop_34 = (({ _xmax_3;}) - ({ _dx_6;}));
                            int64_t _binop_35 = (({ _ymax_4;}) - ({ _dy_8;}));
                            tuple_set(_tuple_33, 0, ((encore_arg_t) {.i = _binop_34}));
                            tuple_set(_tuple_33, 1, ((encore_arg_t) {.i = _binop_35}));
                            tuple_set(_tuple_33, 2, ((encore_arg_t) {.i = _xmin_1}));
                            tuple_set(_tuple_33, 3, ((encore_arg_t) {.i = _ymin_2}));
                            int64_t _binop_37 = (({ _enc__arg_levels_left;}) - ({int64_t _literal_36 = 1; _literal_36;}));
                            _enc__type_init__encore_libs_master_Ped_util_Box_Box(_new_32);
                            _enc__method__encore_libs_master_Ped_util_Box_Box__init_one_way(_ctx, _new_32, _tuple_33, _myface_10, _binop_37);
                            array_t* _fieldacc_38 = (*_this)._enc__field_multi;
                            int64_t _literal_39 = 1;
                            array_set(_fieldacc_38, _literal_39, ((encore_arg_t) {.p = _new_32}));
                            /* this.multi[2] = new Box((xmax - dx, ymax, xmin, ymax - dy + 1), 
                        myface, 
                        levels_left - 1) */;
                            _enc__active__encore_libs_master_Ped_util_Box_Box_t* _new_40 = _enc__constructor__encore_libs_master_Ped_util_Box_Box(_ctx);
                            tuple_t* _tuple_41 = tuple_mk(_ctx, 4);
                            tuple_set_type(_tuple_41, 0, ENCORE_PRIMITIVE);
                            tuple_set_type(_tuple_41, 1, ENCORE_PRIMITIVE);
                            tuple_set_type(_tuple_41, 2, ENCORE_PRIMITIVE);
                            tuple_set_type(_tuple_41, 3, ENCORE_PRIMITIVE);
                            int64_t _binop_42 = (({ _xmax_3;}) - ({ _dx_6;}));
                            int64_t _binop_45 = (({int64_t _binop_43 = (({ _ymax_4;}) - ({ _dy_8;})); _binop_43;}) + ({int64_t _literal_44 = 1; _literal_44;}));
                            tuple_set(_tuple_41, 0, ((encore_arg_t) {.i = _binop_42}));
                            tuple_set(_tuple_41, 1, ((encore_arg_t) {.i = _ymax_4}));
                            tuple_set(_tuple_41, 2, ((encore_arg_t) {.i = _xmin_1}));
                            tuple_set(_tuple_41, 3, ((encore_arg_t) {.i = _binop_45}));
                            int64_t _binop_47 = (({ _enc__arg_levels_left;}) - ({int64_t _literal_46 = 1; _literal_46;}));
                            _enc__type_init__encore_libs_master_Ped_util_Box_Box(_new_40);
                            _enc__method__encore_libs_master_Ped_util_Box_Box__init_one_way(_ctx, _new_40, _tuple_41, _myface_10, _binop_47);
                            array_t* _fieldacc_48 = (*_this)._enc__field_multi;
                            int64_t _literal_49 = 2;
                            array_set(_fieldacc_48, _literal_49, ((encore_arg_t) {.p = _new_40}));
                            /* this.multi[3] = new Box((xmax, ymax - dy, xmax - dx + 1, ymin), 
                        myface, 
                        levels_left - 1) */;
                            _enc__active__encore_libs_master_Ped_util_Box_Box_t* _new_50 = _enc__constructor__encore_libs_master_Ped_util_Box_Box(_ctx);
                            tuple_t* _tuple_51 = tuple_mk(_ctx, 4);
                            tuple_set_type(_tuple_51, 0, ENCORE_PRIMITIVE);
                            tuple_set_type(_tuple_51, 1, ENCORE_PRIMITIVE);
                            tuple_set_type(_tuple_51, 2, ENCORE_PRIMITIVE);
                            tuple_set_type(_tuple_51, 3, ENCORE_PRIMITIVE);
                            int64_t _binop_52 = (({ _ymax_4;}) - ({ _dy_8;}));
                            int64_t _binop_55 = (({int64_t _binop_53 = (({ _xmax_3;}) - ({ _dx_6;})); _binop_53;}) + ({int64_t _literal_54 = 1; _literal_54;}));
                            tuple_set(_tuple_51, 0, ((encore_arg_t) {.i = _xmax_3}));
                            tuple_set(_tuple_51, 1, ((encore_arg_t) {.i = _binop_52}));
                            tuple_set(_tuple_51, 2, ((encore_arg_t) {.i = _binop_55}));
                            tuple_set(_tuple_51, 3, ((encore_arg_t) {.i = _ymin_2}));
                            int64_t _binop_57 = (({ _enc__arg_levels_left;}) - ({int64_t _literal_56 = 1; _literal_56;}));
                            _enc__type_init__encore_libs_master_Ped_util_Box_Box(_new_50);
                            _enc__method__encore_libs_master_Ped_util_Box_Box__init_one_way(_ctx, _new_50, _tuple_51, _myface_10, _binop_57);
                            array_t* _fieldacc_58 = (*_this)._enc__field_multi;
                            int64_t _literal_59 = 3;
                            array_set(_fieldacc_58, _literal_59, ((encore_arg_t) {.p = _new_50}));
                            /* () */;
                            UNIT;
                            _ite_15 = ((void*) UNIT);
                          }
                          else
                          {
                            /* this.multi = new [Box](0) */;
                            int64_t _literal_61 = 0;
                            array_t* _ar