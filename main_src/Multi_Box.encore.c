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


struct _enc__active__encore_libs_master_Ped_util_Box_Multi_Box_t
{
  encore_actor_t _enc__actor;
  _enc__trait__encore_libs_master_Ped_util_Box_Box_face_t* _enc__field_toplevel;
  array_t* _enc__field_multi;
  tuple_t* _enc__field_space;
};


void _enc__type_init__encore_libs_master_Ped_util_Box_Multi_Box(_enc__active__encore_libs_master_Ped_util_Box_Multi_Box_t* this, ... )
{
  va_list params;
  va_start(params, this);
  va_end(params);
}


void _enc__trace__encore_libs_master_Ped_util_Box_Multi_Box(pony_ctx_t* _ctx_arg, void* p)
{
  pony_ctx_t** _ctx = (&(_ctx_arg));
  _enc__active__encore_libs_master_Ped_util_Box_Multi_Box_t* _this = p;
  _enc__trait__encore_libs_master_Ped_util_Box_Box_face_t* _enc__field_toplevel = _this->_enc__field_toplevel;
  ((capability_t*) _enc__field_toplevel)->_enc__self_type->trace((*_ctx), _enc__field_toplevel);
  array_t* _enc__field_multi = _this->_enc__field_multi;
  encore_trace_object((*_ctx), _enc__field_multi, array_trace);
  tuple_t* _enc__field_space = _this->_enc__field_space;
  encore_trace_object((*_ctx), _enc__field_space, tuple_trace);
}


_enc__active__encore_libs_master_Ped_util_Box_Multi_Box_t* _enc__constructor__encore_libs_master_Ped_util_Box_Multi_Box(pony_ctx_t** _ctx)
{
  _enc__active__encore_libs_master_Ped_util_Box_Multi_Box_t* this = ((_enc__active__encore_libs_master_Ped_util_Box_Multi_Box_t*) encore_create((*_ctx), (&(_enc__active__encore_libs_master_Ped_util_Box_Multi_Box_type))));
  return this;
}


void* _enc__method__encore_libs_master_Ped_util_Box_Multi_Box__init(pony_ctx_t** _ctx, _enc__active__encore_libs_master_Ped_util_Box_Multi_Box_t* _this, tuple_t* _enc__arg_space, _enc__trait__encore_libs_master_Ped_util_Box_Box_face_t* _enc__arg_toplevel, int64_t _enc__arg_levels_left)
{
  /* this.space = space */;
  (*({ _this;}))._enc__field_space = _enc__arg_space;
  /* this.toplevel = toplevel */;
  (*({ _this;}))._enc__field_toplevel = _enc__arg_toplevel;
  /* match space with
  ((xmin, ymin), (xmax, ymax)) => let max = (xmax, ymax)
                                      min = (xmin, ymin)
                                      dx = xmax - xmin
                                      dy = ymax - ymin
                                      myface = new Multi_Box_face(this)
                                  in
                                    {dx = dx / 2;
                                     dy = dy / 2;
                                     this.multi = new [Box_face](4);
                                     if levels_left > 0 then
                                       {this.multi[0] = new Multi_Box_face(new Multi_Box((max, 
                                                                                          (xmax - dx + 1, 
                                                                                           ymax - dy + 1)), 
                                                                                         myface, 
                                                                                         levels_left - 1));
                                        this.multi[1] = new Multi_Box_face(new Multi_Box(((xmax - dx, 
                                                                                           ymax - dy), 
                                                                                          min), 
                                                                                         myface, 
                                                                                         levels_left - 1));
                                        this.multi[2] = new Multi_Box_face(new Multi_Box(((xmax - dx, 
                                                                                           ymax), 
                                                                                          (xmin, 
                                                                                           ymax - dy + 1)), 
                                                                                         myface, 
                                                                                         levels_left - 1));
                                        this.multi[3] = new Multi_Box_face(new Multi_Box(((xmax, 
                                                                                           ymax - dy), 
                                                                                          (xmax - dx + 1, 
                                                                                           ymin)), 
                                                                                         myface, 
                                                                                         levels_left - 1));
                                        ()}
                                     else
                                       {this.multi[0] = new Single_Box_face((max, 
                                                                             (xmax - dx + 1, 
                                                                              ymax - dy + 1)), 
                                                                            myface);
                                        this.multi[1] = new Single_Box_face(((xmax - dx, 
                                                                              ymax - dy), 
                                                                             min), 
                                                                            myface);
                                        this.multi[2] = new Single_Box_face(((xmax - dx, ymax), 
                                                                             (xmin, 
                                                                              ymax - dy + 1)), 
                                                                            myface);
                                        this.multi[3] = new Single_Box_face(((xmax, ymax - dy), 
                                                                             (xmax - dx + 1, 
                                                                              ymin)), 
                                                                            myface);
                                        ()}}
 */;
  void* _match_0;
  int64_t _xmin_1;
  int64_t _ymin_2;
  int64_t _xmax_3;
  int64_t _ymax_4;
  if ((({int64_t _tupleCheck_120;
         _tupleCheck_120 = 1;
         tuple_t* _tupleAccess_121 = tuple_get(_enc__arg_space, 0).p;
         int64_t _tupleCheck_122;
         _tupleCheck_122 = 1;
         int64_t _tupleAccess_123 = tuple_get(_tupleAccess_121, 0).i;
         int64_t _varBinding_124;
         _xmin_1 = _tupleAccess_123;
         _varBinding_124 = 1;
         _tupleCheck_122 = (_tupleCheck_122 && _varBinding_124);
         int64_t _tupleAccess_125 = tuple_get(_tupleAccess_121, 1).i;
         int64_t _varBinding_126;
         _ymin_2 = _tupleAccess_125;
         _varBinding_126 = 1;
         _tupleCheck_122 = (_tupleCheck_122 && _varBinding_126);
         _tupleCheck_120 = (_tupleCheck_120 && _tupleCheck_122);
         tuple_t* _tupleAccess_127 = tuple_get(_enc__arg_space, 1).p;
         int64_t _tupleCheck_128;
         _tupleCheck_128 = 1;
         int64_t _tupleAccess_129 = tuple_get(_tupleAccess_127, 0).i;
         int64_t _varBinding_130;
         _xmax_3 = _tupleAccess_129;
         _varBinding_130 = 1;
         _tupleCheck_128 = (_tupleCheck_128 && _varBinding_130);
         int64_t _tupleAccess_131 = tuple_get(_tupleAccess_127, 1).i;
         int64_t _varBinding_132;
         _ymax_4 = _tupleAccess_131;
         _varBinding_132 = 1;
         _tupleCheck_128 = (_tupleCheck_128 && _varBinding_132);
         _tupleCheck_120 = (_tupleCheck_120 && _tupleCheck_128); _tupleCheck_120;}) && ({int64_t _literal_133 = 1/*True*/; _literal_133;})))
  {
    _match_0 = ((void*) ({/* let max = (xmax, ymax)
    min = (xmin, ymin)
    dx = xmax - xmin
    dy = ymax - ymin
    myface = new Multi_Box_face(this)
in
  {dx = dx / 2;
   dy = dy / 2;
   this.multi = new [Box_face](4);
   if levels_left > 0 then
     {this.multi[0] = new Multi_Box_face(new Multi_Box((max, 
                                                        (xmax - dx + 1, ymax - dy + 1)), 
                                                       myface, 
                                                       levels_left - 1));
      this.multi[1] = new Multi_Box_face(new Multi_Box(((xmax - dx, 
                                                         ymax - dy), 
                                                        min), 
                                                       myface, 
                                                       levels_left - 1));
      this.multi[2] = new Multi_Box_face(new Multi_Box(((xmax - dx, 
                                                         ymax), 
                                                        (xmin, ymax - dy + 1)), 
                                                       myface, 
                                                       levels_left - 1));
      this.multi[3] = new Multi_Box_face(new Multi_Box(((xmax, 
                                                         ymax - dy), 
                                                        (xmax - dx + 1, ymin)), 
                                                       myface, 
                                                       levels_left - 1));
      ()}
   else
     {this.multi[0] = new Single_Box_face((max, 
                                           (xmax - dx + 1, ymax - dy + 1)), 
                                          myface);
      this.multi[1] = new Single_Box_face(((xmax - dx, ymax - dy), min), 
                                          myface);
      this.multi[2] = new Single_Box_face(((xmax - dx, ymax), 
                                           (xmin, ymax - dy + 1)), 
                                          myface);
      this.multi[3] = new Single_Box_face(((xmax, ymax - dy), 
                                           (xmax - dx + 1, ymin)), 
                                          myface);
      ()}} */;
                          /* max = (xmax, ymax) */;
                          tuple_t* _tuple_5 = tuple_mk(_ctx, 2);
                          tuple_set_type(_tuple_5, 0, ENCORE_PRIMITIVE);
                          tuple_set_type(_tuple_5, 1, ENCORE_PRIMITIVE);
                          tuple_set(_tuple_5, 0, ((encore_arg_t) {.i = _xmax_3}));
                          tuple_set(_tuple_5, 1, ((encore_arg_t) {.i = _ymax_4}));
                          tuple_t* _max_6 = _tuple_5;
                          /* min = (xmin, ymin) */;
                          tuple_t* _tuple_7 = tuple_mk(_ctx, 2);
                          tuple_set_type(_tuple_7, 0, ENCORE_PRIMITIVE);
                          tuple_set_type(_tuple_7, 1, ENCORE_PRIMITIVE);
                          tuple_set(_tuple_7, 0, ((encore_arg_t) {.i = _xmin_1}));
                          tuple_set(_tuple_7, 1, ((encore_arg_t) {.i = _ymin_2}));
                          tuple_t* _min_8 = _tuple_7;
                          /* dx = xmax - xmin */;
                          int64_t _binop_9 = (({ _xmax_3;}) - ({ _xmin_1;}));
                          int64_t _dx_10 = _binop_9;
                          /* dy = ymax - ymin */;
                          int64_t _binop_11 = (({ _ymax_4;}) - ({ _ymin_2;}));
                          int64_t _dy_12 = _binop_11;
                          /* myface = new Multi_Box_face(this) */;
                          _enc__passive__encore_libs_master_Ped_util_Box_Multi_Box_face_t* _new_13 = _enc__constructor__encore_libs_master_Ped_util_Box_Multi_Box_face(_ctx);
                          _enc__type_init__encore_libs_master_Ped_util_Box_Multi_Box_face(_new_13);
                          _enc__method__encore_libs_master_Ped_util_Box_Multi_Box_face__init(_ctx, _new_13, _this);
                          _enc__passive__encore_libs_master_Ped_util_Box_Multi_Box_face_t* _myface_14 = _new_13;
                          /* dx = dx / 2 */;
                          int64_t _binop_16 = (({ _dx_10;}) / ({int64_t _literal_15 = 2; _literal_15;}));
                          _dx_10 = _binop_16;
                          /* dy = dy / 2 */;
                          int64_t _binop_18 = (({ _dy_12;}) / ({int64_t _literal_17 = 2; _literal_17;}));
                          _dy_12 = _binop_18;
                          /* this.multi = new [Box_face](4) */;
                          int64_t _literal_20 = 4;
                          array_t* _array_19 = array_mk(_ctx, _literal_20, ENCORE_PRIMITIVE);
                          (*({ _this;}))._enc__field_multi = _array_19;
                          /* if levels_left > 0 then
  {this.multi[0] = new Multi_Box_face(new Multi_Box((max, 
                                                     (xmax - dx + 1, ymax - dy + 1)), 
                                                    myface, 
                                                    levels_left - 1));
   this.multi[1] = new Multi_Box_face(new Multi_Box(((xmax - dx, 
                                                      ymax - dy), 
                                                     min), 
                                                    myface, 
                                                    levels_left - 1));
   this.multi[2] = new Multi_Box_face(new Multi_Box(((xmax - dx, 
                                                      ymax), 
                                                     (xmin, ymax - dy + 1)), 
                                                    myface, 
                                                    levels_left - 1));
   this.multi[3] = new Multi_Box_face(new Multi_Box(((xmax, 
                                                      ymax - dy), 
                                                     (xmax - dx + 1, ymin)), 
                                                    myface, 
                                                    levels_left - 1));
   ()}
else
  {this.multi[0] = new Single_Box_face((max, 
                                        (xmax - dx + 1, ymax - dy + 1)), 
                                       myface);
   this.multi[1] = new Single_Box_face(((xmax - dx, ymax - dy), min), 
                                       myface);
   this.multi[2] = new Single_Box_face(((xmax - dx, ymax), 
                                        (xmin, ymax - dy + 1)), 
                                       myface);
   this.multi[3] = new Single_Box_face(((xmax, ymax - dy), 
                                        (xmax - dx + 1, ymin)), 
                                       myface);
   ()} */;
                          void* _ite_21;
                          if (({int64_t _binop_23 = (({ _enc__arg_levels_left;}) > ({int64_t _literal_22 = 0; _literal_22;})); _binop_23;}))
                          {
                            /* this.multi[0] = new Multi_Box_face(new Multi_Box((max, 
                                                  (xmax - dx + 1, ymax - dy + 1)), 
                                                 myface, 
                                                 levels_left - 1)) */;
                            _enc__passive__encore_libs_master_Ped_util_Box_Multi_Box_face_t* _new_24 = _enc__constructor__encore_libs_master_Ped_util_Box_Multi_Box_face(_ctx);
                            _enc__active__encore_libs_master_Ped_util_Box_Multi_Box_t* _new_25 = _enc__constructor__encore_libs_master_Ped_util_Box_Multi_Box(_ctx);
                            tuple_t* _tuple_26 = tuple_mk(_ctx, 2);
                            tuple_set_type(_tuple_26, 0, (&(tuple_type)));
                            tuple_set_type(_tuple_26, 1, (&(tuple_type)));
                            tuple_t* _tuple_27 = tuple_mk(_ctx, 2);
                            tuple_set_type(_tuple_27, 0, ENCORE_PRIMITIVE);
                            tuple_set_type(_tuple_27, 1, ENCORE_PRIMITIVE);
                            int64_t _binop_30 = (({int64_t _binop_28 = (({ _xmax_3;}) - ({ _dx_10;})); _binop_28;}) + ({int64_t _literal_29 = 1; _literal_29;}));
                            int64_t _binop_33 = (({int64_t _binop_31 = (({ _ymax_4;}) - ({ _dy_12;})); _binop_31;}) + ({int64_t _literal_32 = 1; _literal_32;}));
                            tuple_set(_tuple_27, 0, ((encore_arg_t) {.i = _binop_30}));
                            tuple_set(_tuple_27, 1, ((encore_arg_t) {.i = _binop_33}));
                            tuple_set(_tuple_26, 0, ((encore_arg_t) {.p = _max_6}));
                            tuple_set(_tuple_26, 1, ((encore_arg_t) {.p = _tuple_27}));
                            _enc__trait__encore_libs_master_Ped_util_Box_Box_face_t* _cast_34 = ((_enc__trait__encore_libs_master_Ped_util_Box_Box_face_t*) _myface_14);
                            int64_t _binop_36 = (({ _enc__arg_levels_left;}) - ({int64_t _literal_35 = 1; _literal_35;}));
                            _enc__type_init__encore_libs_master_Ped_util_Box_Multi_Box(_new_25);
                            _enc__method__encore_libs_master_Ped_util_Box_Multi_Box__init_one_way(_ctx, _new_25, _tuple_26, ((_enc__trait__encore_libs_master_Ped_util_Box_Box_face_t*) _cast_34), _binop_36);
                            _enc__type_init__encore_libs_master_Ped_util_Box_Multi_Box_face(_new_24);
                            _enc__method__encore_libs_master_Ped_util_Box_Multi_Box_face__init(_ctx, _new_24, _new_25);
                            array_t* _fieldacc_37 = (*_this)._enc__field_multi;
                            int64_t _literal_38 = 0;
                            array_set(_fieldacc_37, _literal_38, ((encore_arg_t) {.p = _new_24}));
                            /* this.multi[1] = new Multi_Box_face(new Multi_Box(((xmax - dx, 
                                                   ymax - dy), 
                                                  min), 
                                                 myface, 
                                                 levels_left - 1)) */;
                            _enc__passive__encore_libs_master_Ped_util_Box_Multi_Box_face_t* _new_39 = _enc__constructor__encore_libs_master_Ped_util_Box_Multi_Box_face(_ctx);
                            _enc__active__encore_libs_master_Ped_util_Box_Multi_Box_t* _new_40 = _enc__constructor__encore_libs_master_Ped_util_Box_Multi_Box(_ctx);
                            tuple_t* _tuple_41 = tuple_mk(_ctx, 2);
                            tuple_set_type(_tuple_41, 0, (&(tuple_type)));
                            tuple_set_type(_tuple_41, 1, (&(tuple_type)));
                            tuple_t* _tuple_42 = tuple_mk(_ctx, 2);
                            tuple_set_type(_tuple_42, 0, ENCORE_PRIMITIVE);
                            tuple_set_type(_tuple_42, 1, ENCORE_PRIMITIVE);
                            int64_t _binop_43 = (({ _xmax_3;}) - ({ _dx_10;}));
                            int64_t _binop_44 = (({ _ymax_4;}) - ({ _dy_12;}));
                            tuple_set(_tuple_42, 0, ((encore_arg_t) {.i = _binop_43}));
                            tuple_set(_tuple_42, 1, ((encore_arg_t) {.i = _binop_44}));
                            tuple_set(_tuple_41, 0, ((encore_arg_t) {.p = _tuple_42}));
                            tuple_set(_tuple_41, 1, ((encore_arg_t) {.p = _min_8}));
                            _enc__trait__encore_libs_master_Ped_util_Box_Box_face_t* _cast_45 = ((_enc__trait__encore_libs_master_Ped_util_Box_Box_face_t*) _myface_14);
                            int64_t _binop_47 = (({ _enc__arg_levels_left;}) - ({int64_t _literal_46 = 1; _literal_46;}));
                            _enc__type_init__encore_libs_master_Ped_util_Box_Multi_Box(_new_40);
                            _enc__method__encore_libs_master_Ped_util_Box_Multi_Box__init_one_way(_ctx, _new_40, _tuple_41, ((_enc__trait__encore_libs_master_Ped_util_Box_Box_face_t*) _cast_45), _binop_47);
                            _enc__type_init__encore_libs_master_Ped_util_Box_Multi_Box_face(_new_39);
                            _enc__method__encore_libs_master_Ped_util_Box_Multi_Box_face__init(_ctx, _new_39, _new_40);
                            array_t* _fieldacc_48 = (*_this)._enc__field_multi;
                            int64_t _literal_49 = 1;
                            array_set(_fieldacc_48, _literal_49, ((encore_arg_t) {.p = _new_39}));
                            /* this.multi[2] = new Multi_Box_face(new Multi_Box(((xmax - dx, 
                                                   ymax), 
                                                  (xmin, ymax - dy + 1)), 
                                                 myface, 
                                                 levels_left - 1)) */;
                            _enc__passive__encore_libs_master_Ped_util_Box_Multi_Box_face_t* _new_50 = _enc__constructor__encore_libs_master_Ped_util_Box_Multi_Box_face(_ctx);
                            _enc__active__encore_libs_master_Ped_util_Box_Multi_Box_t* _new_51 = _enc__constructor__encore_libs_master_Ped_util_Box_Multi_Box(_ctx);
                            tuple_t* _tuple_52 = tuple_mk(_ctx, 2);
                            tuple_set_type(_tuple_52, 0, (&(tuple_type)));
                            tuple_set_type(_tuple_52, 1, (&(tuple_type)));
                            tuple_t* _tuple_53 = tuple_mk(_ctx, 2);
                            tuple_set_type(_tuple_53, 0, ENCORE_PRIMITIVE);
                            tuple_set_type(_tuple_53, 1, ENCORE_PRIMITIVE);
                            int64_t _binop_54 = (({ _xmax_3;}) - ({ _dx_10;}));
                            tuple_set(_tuple_53, 0, ((encore_arg_t) {.i = _binop_54}));
                            tuple_set(_tuple_53, 1, ((encore_arg_t) {.i = _ymax_4}));
                            tuple_t* _tuple_55 = tuple_mk(_ctx, 2);
                            tuple_set_type(_tuple_55, 0, ENCORE_PRIMITIVE);
                            tuple_set_type(_tuple_55, 1, ENCORE_PRIMITIVE);
                            int64_t _binop_58 = (({int64_t _binop_56 = (({ _ymax_4;}) - ({ _dy_12;})); _binop_56;}) + ({int64_t _literal_57 = 1; _literal_57;}));
                            tuple_set(_tuple_55, 0, ((encore_arg_t) {.i = _xmin_1}));
                            tuple_set(_tuple_55, 1, ((encore_arg_t) {.i = _binop_58}));
                            tuple_set(_tuple_52, 0, ((encore_arg_t) {.p = _tuple_53}));
                            tuple_set(_tuple_52, 1, ((encore_arg_t) {.p = _tuple_55}));
                            _enc__trait__encore_libs_master_Ped_util_Box_Box_face_t* _cast_59 = ((_enc__trait__encore_libs_master_Ped_util_Box_Box_face_t*) _myface_14);
                            int64_t _binop_61 = (({ _enc__arg_levels_left;}) - ({int64_t _literal_60 = 1; _literal_60;}));
                            _enc__type_init__encore_libs_master_Ped_util_Box_Multi_Box(_new_51);
                            _enc__method__encore_libs_master_Ped_util_Box_Multi_Box__init_one_way(_ctx, _new_51, _tuple_52, ((_enc__trait__encore_libs_master_Ped_util_Box_Box_face_t*) _cast_59), _binop_61);
                            _enc__type_init__encore_libs_master_Ped_util_Box_Multi_Box_face(_new_50);
                            _enc__method__encore_libs_master_Ped_util_Box_Multi_Box_face__init(_ctx, _new_50, _new_51);
                            array_t* _fieldacc_62 = (*_this)._enc__field_multi;
                            int64_t _literal_63 = 2;
                            array_set(_fieldacc_62, _literal_63, ((encore_arg_t) {.p = _new_50}));
                            /* this.multi[3] = new Multi_Box_face(new Multi_Box(((xmax, 
                                                   ymax - dy), 
                                                  (xmax - dx + 1, ymin)), 
                                                 myface, 
                                                 levels_left - 1)) */;
                            _enc__passive__encore_libs_master_Ped_util_Box_Multi_Box_face_t* _new_64 = _enc__constructor__encore_libs_master_Ped_util_Box_Multi_Box_face(_ctx);
                            _enc__active__encore_libs_master_Ped_util_Box_Multi_Box_t* _new_65 = _enc__constructor__encore_libs_master_Ped_util_Box_Multi_Box(_ctx);
                            tuple_t* _tuple_66 = tuple_mk(_ctx, 2);
                            tuple_set_type(_tuple_66, 0, (&(tuple_type)));
                            tuple_set_type(_tuple_66, 1, (&(tuple_type)));
                            tuple_t* _tuple_67 = tuple_mk(_ctx, 2);
                            tuple_set_type(_tuple_67, 0, ENCORE_PRIMITIVE);
                            tuple_set_type(_tuple_67, 1, ENCORE_PRIMITIVE);
                            int64_t _binop_68 = (({ _ymax_4;}) - ({ _dy_12;}));
                            tuple_set(_tuple_67, 0, ((encore_arg_t) {.i = _xmax_3}));
                            tuple_set(_tuple_67, 1, ((encore_arg_t) {.i = _binop_68}));
                            tuple_t* _tuple_69 = tuple_mk(_ctx, 2);
                            tuple_set_type(_tuple_69, 0, ENCORE_PRIMITIVE);
                            tuple_set_type(_tuple_69, 1, ENCORE_PRIMITIVE);
                            int64_t _binop_72 = (({int64_t _binop_70 = (({ _xmax_3;}) - ({ _dx_10;})); _binop_70;}) + ({int64_t _literal_71 = 1; _literal_71;}));
                            tuple_set(_tuple_69, 0, ((encore_arg_t) {.i = _binop_72}));
                            tuple_set(_tuple_69, 1, ((encore_arg_t) {.i = _ymin_2}));
                            tuple_set(_tuple_66, 0, ((encore_arg_t) {.p = _tuple_67}));
                            tuple_set(_tuple_66, 1, ((encore_arg_t) {.p = _tuple_69}));
                            _enc__trait__encore_libs_master_Ped_util_Box_Box_face_t* _cast_73 = ((_enc__trait__encore_libs_master_Ped_util_Box_Box_face_t*) _myface_14);
                            int64_t _binop_75 = (({ _enc__arg_levels_left;}) - ({int64_t _literal_74 = 1; _literal_74;}));
                            _enc__type_init__encore_libs_master_Ped_util_Box_Multi_Box(_new_65);
                            _enc__method__encore_libs_master_Ped_util_Box_Multi_Box__init_one_way(_ctx, _new_65, _tuple_66, ((_enc__trait__encore_libs_master_Ped_util_Box_Box_face_t*) _cast_73), _binop_75);
                            _enc__type_init__encore_libs_master_Ped_util_Box_Multi_Box_face(_new_64);
                            _enc__method__encore_libs_master_Ped_util_Box_Multi_Box_face__init(_ctx, _new_64, _new_65);
                            array_t* _fieldacc_76 = (*_this)._enc__field_multi;
                            int64_t _literal_77 = 3;
                            array_set(_fieldacc_76, _literal_77, ((encore_arg_t) {.p = _new_64}));
                            /* () */;
                            UNIT;
                            _ite_21 = ((void*) UNIT);
                          }
                          else
                          {
                            /* this.multi[0] = new Single_Box_face((max, 
                                     (xmax - dx + 1, ymax - dy + 1)), 
                                    myface) */;
                            _enc__passive__encore_libs_master_Ped_util_Box_Single_Box_face_t* _new_78 = _enc__constructor__encore_libs_master_Ped_util_Box_Single_Box_face(_ctx);
                            tuple_t* _tuple_79 = tuple_mk(_ctx, 2);
                            tuple_set_type(_tuple_79, 0, (&(tuple_type)));
                            tuple_set_type(_tuple_79, 1, (&(tuple_type)));
                            tuple_t* _tuple_80 = tuple_mk(_ctx, 2);
                            tuple_set_type(_tuple_80, 0, ENCORE_PRIMITIVE);
                            tuple_set_type(_tuple_80, 1, ENCORE_PRIMITIVE);
                            int64_t _binop_83 = (({int64_t _binop_81 = (({ _xmax_3;}) - ({ _dx_10;})); _binop_81;}) + ({int64_t _literal_82 = 1; _literal_82;}));
                            int64_t _binop_86 = (({int64_t _binop_84 = (({ _ymax_4;}) - ({ _dy_12;})); _binop_84;}) + ({int64_t _literal_85 = 1; _literal_85;}));
                            tuple_set(_tuple_80, 0, ((encore_arg_t) {.i = _binop_83}));
                            tuple_set(_tuple_80, 1, ((encore_arg_t) {.i = _binop_86}));
                            tuple_set(_tuple_79, 0, ((encore_arg_t) {.p = _max_6}));
                            tuple_set(_tuple_79, 1, ((encore_arg_t) {.p = _tuple_80}));
                            _enc__trait__encore_libs_master_Ped_util_Box_Box_face_t* _cast_87 = ((_enc__trait__encore_libs_master_Ped_util_Box_Box_face_t*) _myface_14);
                            _enc__type_init__encore_libs_master_Ped_util_Box_Single_Box_face(_new_78);
                            _enc__method__encore_libs_master_Ped_util_Box_Single_Box_face__init(_ctx, _new_78, _tuple_79, ((_enc__trait__encore_libs_master_Ped_util_Box_Box_face_t*) _cast_87));
                            array_t* _fieldacc_88 = (*_this)._enc__field_multi;
                            int64_t _literal_89 = 0;
                            array_set(_fieldacc_88, _literal_89, ((encore_arg_t) {.p = _new_78}));
                            /* this.multi[1] = new Single_Box_face(((xmax - dx, ymax - dy), min), 
                                    myface) */;
                            _enc__passive__encore_libs_master_Ped_util_Box_Single_Box_face_t* _new_90 = _enc__constructor__encore_libs_master_Ped_util_Box_Single_Box_face(_ctx);
                            tuple_t* _tuple_91 = tuple_mk(_ctx, 2);
                            tuple_set_type(_tuple_91, 0, (&(tuple_type)));
                            tuple_set_type(_tuple_91, 1, (&(tuple_type)));
                            tuple_t* _tuple_92 = tuple_mk(_ctx, 2);
                            tuple_set_type(_tuple_92, 0, ENCORE_PRIMITIVE);
                            tuple_set_type(_tuple_92, 1, ENCORE_PRIMITIVE);
                            int64_t _binop_93 = (({ _xmax_3;}) - ({ _dx_10;}));
                            int64_t _binop_94 = (({ _ymax_4;}) - ({ _dy_12;}));
                            tuple_set(_tuple_92, 0, ((encore_arg_t) {.i = _binop_93}));
                            tuple_set(_tuple_92, 1, ((encore_arg_t) {.i = _binop_94}));
                            tuple_set(_tuple_91, 0, ((encore_arg_t) {.p = _tuple_92}));
                            tuple_set(_tuple_91, 1, ((encore_arg_t) {.p = _min_8}));
                            _enc__trait__encore_libs_master_Ped_util_Box_Box_face_t* _cast_95 = ((_enc__trait__encore_libs_master_Ped_util_Box_Box_face_t*) _myface_14);
                            _enc__type_init__encore_libs_master_Ped_util_Box_Single_Box_face(_new_90);
                            _enc__method__encore_libs_master_Ped_util_Box_Single_Box_face__init(_ctx, _new_90, _tuple_91, ((_enc__trait__encore_libs_master_Ped_util_Box_Box_face_t*) _cast_95));
                            array_t* _fieldacc_96 = (*_this)._enc__field_multi;
                            int64_t _literal_97 = 1;
                            array_set(_fieldacc_96, _literal_97, ((encore_arg_t) {.p = _new_90}));
                            /* this.multi[2] = new Single_Box_face(((xmax - dx, ymax), 
                                     (xmin, ymax - dy + 1)), 
                                    myface) */;
                            _enc__passive__encore_libs_master_Ped_util_Box_Single_Box_face_t* _new_98 = _enc__constructor__encore_libs_master_Ped_util_Box_Single_Box_face(_ctx);
                            tuple_t* _tuple_99 = tuple_mk(_ctx, 2);
                            tuple_set_type(_tuple_99, 0, (&(tuple_type)));
                            tuple_set_type(_tuple_99, 1, (&(tuple_type)));
                            tuple_t* _tuple_100 = tuple_mk(_ctx, 2);
                            tuple_set_type(_tuple_100, 0, ENCORE_PRIMITIVE);
                            tuple_set_type(_tuple_100, 1, ENCORE_PRIMITIVE);
                            int64_t _binop_101 = (({ _xmax_3;}) - ({ _dx_10;}));
                            tuple_set(_tuple_100, 0, ((encore_arg_t) {.i = _binop_101}));
                            tuple_set(_tuple_100, 1, ((encore_arg_t) {.i = _ymax_4}));
                            tuple_t* _tuple_102 = tuple_mk(_ctx, 2);
                            tuple_set_type(_tuple_102, 0, ENCORE_PRIMITIVE);
                            tuple_set_type(_tuple_102, 1, ENCORE_PRIMITIVE);
                            int64_t _binop_105 = (({int64_t _binop_103 = (({ _ymax_4;}) - ({ _dy_12;})); _binop_103;}) + ({int64_t _literal_104 = 1; _literal_104;}));
                            tuple_set(_tuple_102, 0, ((encore_arg_t) {.i = _xmin_1}));
                            tuple_set(_tuple_102, 1, ((encore_arg_t) {.i = _binop_105}));
                            tuple_set(_tuple_99, 0, ((encore_arg_t) {.p = _tuple_100}));
                            tuple_set(_tuple_99, 1, ((encore_arg_t) {.p = _tuple_102}));
                            _enc__trait__encore_libs_master_Ped_util_Box_Box_face_t* _cast_106 = ((_enc__trait__encore_libs_master_Ped_util_Box_Box_face_t*) _myface_14);
                            _enc__type_init__encore_libs_master_Ped_util_Box_Single_Box_face(_new_98);
                            _enc__method__encore_libs_master_Ped_util_Box_Single_Box_face__init(_ctx, _new_98, _tuple_99, ((_enc__trait__encore_libs_master_Ped_util_Box_Box_face_t*) _cast_106));
                            array_t* _fieldacc_107 = (*_this)._enc__field_multi;
                            int64_t _literal_108 = 2;
                            array_set(_fieldacc_107, _literal_108, ((encore_arg_t) {.p = _new_98}));
                            /* this.multi[3] = new Single_Box_face(((xmax, ymax - dy), 
                                     (xmax - dx + 1, ymin)), 
                                    myface) */;
                            _enc__passive__encore_libs_master_Ped_util_Box_Single_Box_face_t* _new_109 = _enc__constructor__encore_libs_master_Ped_util_Box_Single_Box_face(_ctx);
                            tuple_t* _tuple_110 = tuple_mk(_ctx, 2);
                            tuple_set_type(_tuple_110, 0, (&(tuple_type)));
                            tuple_set_type(_tuple_110, 1, (&(tuple_type)));
                            tuple_t* _tuple_111 = tuple_mk(_ctx, 2);
                            tuple_set_type(_tuple_111, 0, ENCORE_PRIMITIVE);
                            tuple_set_type(_tuple_111, 1, ENCORE_PRIMITIVE);
                            int64_t _binop_112 = (({ _ymax_4;}) - ({ _dy_12;}));
                            tuple_set(_tuple_111, 0, ((encore_arg_t) {.i = _xmax_3}));
                            tuple_set(_tuple_111, 1, ((encore_arg_t) {.i = _binop_112}));
                            tuple_t* _tuple_113 = tuple_mk(_ctx, 2);
                            tuple_set_type(_tuple_113, 0, ENCORE_PRIMITIVE);
                            tuple_set_type(_tuple_113, 1, ENCORE_PRIMITIVE);
                            int64_t _binop_116 = (({int64_t _binop_114 = (({ _xmax_3;}) - ({ _dx_10;})); _binop_114;}) + ({int64_t _literal_115 = 1; _literal_115;}));
                            tuple_set(_tuple_113, 0, ((encore_arg_t) {.i = _binop_116}));
                            tuple_set(_tuple_113, 1, ((encore_arg_t) {.i = _ymin_2}));
                            tuple_set(_tuple_110, 0, ((encore_arg_t) {.p = _tuple_111}));
                            tuple_set(_tuple_110, 1, ((encore_arg_t) {.p = _tuple_113}));
                            _enc__trait__encore_libs_master_Ped_util_Box_Box_face_t* _cast_117 = ((_enc__trait__encore_libs_master_Ped_util_Box_Box_face_t*) _myface_14);
                            _enc__type_init__encore_libs_master_Ped_util_Box_Single_Box_face(_new_109);
                            _enc__method__encore_libs_master_Ped_util_Box_Single_Box_face__init(_ctx, _new_109, _tuple_110, ((_enc__trait__encore_libs_master_Ped_util_Box_Box_face_t*) _cast_117));
                            array_t* _fieldacc_118 = (*_this)._enc__field_multi;
                            int64_t _literal_119 = 3;
                            array_set(_fieldacc_118, _literal_119, ((encore_arg_t) {.p = _new_109}));
                            /* () */;
                            UNIT;
                            _ite_21 = ((void*) UNIT);
                          }; _ite_21;}));
  }
  else
  {
    printf("*** Runtime error: No matching clause was found ***\n");
    exit(1);
  };
  /* () */;
  UNIT;
  return UNIT;
}


tuple_t* _enc__method__encore_libs_master_Ped_util_Box_Multi_Box_space(pony_ctx_t** _ctx, _enc__active__encore_libs_master_Ped_util_Box_Multi_Box_t* _this)
{
  /* this.space */;
  tuple_t* _fieldacc_0 = (*_this)._enc__field_space;
  return ((tuple_t*) _fieldacc_0);
}


void* _enc__method__encore_libs_master_Ped_util_Box_Multi_Box_add(pony_ctx_t** _ctx, _enc__active__encore_libs_master_Ped_util_Box_Multi_Box_t* _this, _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t* _enc__arg_a)
{
  /* if not inside(a.pos(), this.space) then
  false
else
  for item in this.multi
    if inside(a.pos(), this.space) then
      item.add(a.copy()) */;
  void* _ite_0;
  if (({check_receiver(_enc__arg_a, ".", "a", "pos", "\"./encore-libs-master/Ped_util/Box.enc\" (line 156, column 23)");
        tuple_t* _sync_method_call_1 = _enc__method__encore_libs_master_Ped_util_Agent_passive_Agent_pos(_ctx, _enc__arg_a);
        tuple_t* _fieldacc_2 = (*_this)._enc__field_space;
        pony_type_t* _tmp_3[] = {};
        int64_t _global_f_4 = _enc__global_fun__encore_libs_master_Ped_util_Global_funsinside(_ctx, NULL, _sync_method_call_1, _fieldacc_2);
        int64_t _unary_5 = (! _global_f_4); _unary_5;}))
  {
    0/*False*/;
    _ite_0 = ((void*) UNIT);
  }
  else
  {
    /* for item in this.multi
  if inside(a.pos(), this.space) then
    item.add(a.copy()) */;
    void* _for_6;
    array_t* _fieldacc_13 = (*_this)._enc__field_multi;
    int64_t _start_9 = 0;
    int64_t _stop_10 = (array_size(_fieldacc_13) - 1);
    int64_t _src_step_12 = 1;
    int64_t _literal_14 = 1;
    int64_t _step_11 = (_literal_14 * _src_step_12);
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
      _enc__trait__encore_libs_master_Ped_util_Box_Box_face_t* _item_8 = array_get(_fieldacc_13, _index_7).p;
      /* if inside(a.pos(), this.space) then
  item.add(a.copy()) */;
      void* _ite_15;
      if (({check_receiver(_enc__arg_a, ".", "a", "pos", "\"./encore-libs-master/Ped_util/Box.enc\" (line 158, column 29)");
            tuple_t* _sync_method_call_16 = _enc__method__encore_libs_master_Ped_util_Agent_passive_Agent_pos(_ctx, _enc__arg_a);
            tuple_t* _fieldacc_17 = (*_this)._enc__field_space;
            pony_type_t* _tmp_18[] = {};
            int64_t _global_f_19 = _enc__global_fun__encore_libs_master_Ped_util_Global_funsinside(_ctx, NULL, _sync_method_call_16, _fieldacc_17); _global_f_19;}))
      {
        check_receiver(_item_8, ".", "item", "add", "\"./encore-libs-master/Ped_util/Box.enc\" (line 158, column 57)");
        check_receiver(_enc__arg_a, ".", "a", "copy", "\"./encore-libs-master/Ped_util/Box.enc\" (line 158, column 66)");
        _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t* _sync_method_call_23 = _enc__method__encore_libs_master_Ped_util_Agent_passive_Agent_copy(_ctx, _enc__arg_a);
        void* (*_Box_face_add_20) (pony_ctx_t**, _enc__trait__encore_libs_master_Ped_util_Box_Box_face_t*, _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t*);
        void* (*_Box_face_vtable_21) (int);
        _Box_face_vtable_21 = ((void*) _item_8->_enc__self_type->vtable);
        _Box_face_add_20 = _Box_face_vtable_21(_ENC__MSG__encore_libs_master_Ped_util_Box_Box_face_add);
        void* _trait_method_call_22 = _Box_face_add_20(_ctx, ((_enc__trait__encore_libs_master_Ped_util_Box_Box_face_t*) _item_8), _sync_method_call_23);
        _ite_15 = ((void*) _trait_method_call_22);
      }
      else
      {
        UNIT;
        _ite_15 = ((void*) UNIT);
      };
      _for_6 = _ite_15;
      _index_7 = (_index_7 + _step_11);
    };
    _ite_0 = ((void*) _for_6);
  };
  /* true */;
  int64_t _literal_24 = 1/*True*/;
  return UNIT;
}


array_t* _enc__method__encore_libs_master_Ped_util_Box_Multi_Box_agents(pony_ctx_t** _ctx, _enc__active__encore_libs_master_Ped_util_Box_Multi_Box_t* _this)
{
  /* let a = (this.multi[0]).agents()
    b = (this.multi[1]).agents()
    c = (this.multi[2]).agents()
    d = (this.multi[3]).agents()
in
  flatten([get a, get b, get c, get d]) */;
  /* a = (this.multi[0]).agents() */;
  array_t* _fieldacc_0 = (*_this)._enc__field_multi;
  int64_t _literal_1 = 0;
  _enc__trait__encore_libs_master_Ped_util_Box_Box_face_t* _access_2 = array_get(_fieldacc_0, _literal_1).p;
  check_receiver(_access_2, ".", "this.multi[0]", "agents", "\"./encore-libs-master/Ped_util/Box.enc\" (line 164, column 21)");
  future_t* (*_Box_face_agents_3) (pony_ctx_t**, _enc__trait__encore_libs_master_Ped_util_Box_Box_face_t*);
  void* (*_Box_face_vtable_4) (int);
  _Box_face_vtable_4 = ((void*) _access_2->_enc__self_type->vtable);
  _Box_face_agents_3 = _Box_face_vtable_4(_ENC__MSG__encore_libs_master_Ped_util_Box_Box_face_agents);
  future_t* _trait_method_call_5 = _Box_face_agents_3(_ctx, ((_enc__trait__encore_libs_master_Ped_util_Box_Box_face_t*) _access_2));
  future_t* _a_6 = _trait_method_call_5;
  /* b = (this.multi[1]).agents() */;
  array_t* _fieldacc_7 = (*_this)._enc__field_multi;
  int64_t _literal_8 = 1;
  _enc__trait__encore_libs_master_Ped_util_Box_Box_face_t* _access_9 = array_get(_fieldacc_7, _literal_8).p;
  check_receiver(_access_9, ".", "this.multi[1]", "agents", "\"./encore-libs-master/Ped_util/Box.enc\" (line 165, column 21)");
  future_t* (*_Box_face_agents_10) (pony_ctx_t**, _enc__trait__encore_libs_master_Ped_util_Box_Box_face_t*);
  void* (*_Box_face_vtable_11) (int);
  _Box_face_vtable_11 = ((void*) _access_9->_enc__self_type->vtable);
  _Box_face_agents_10 = _Box_face_vtable_11(_ENC__MSG__encore_libs_master_Ped_util_Box_Box_face_agents);
  future_t* _trait_method_call_12 = _Box_face_agents_10(_ctx, ((_enc__trait__encore_libs_master_Ped_util_Box_Box_face_t*) _access_9));
  future_t* _b_13 = _trait_method_call_12;
  /* c = (this.multi[2]).agents() */;
  array_t* _fieldacc_14 = (*_this)._enc__field_multi;
  int64_t _literal_15 = 2;
  _enc__trait__encore_libs_master_Ped_util_Box_Box_face_t* _access_16 = array_get(_fieldacc_14, _literal_15).p;
  check_receiver(_access_16, ".", "this.multi[2]", "agents", "\"./encore-libs-master/Ped_util/Box.enc\" (line 166, column 21)");
  future_t* (*_Box_face_agents_17) (pony_ctx_t**, _enc__trait__encore_libs_master_Ped_util_Box_Box_face_t*);
  void* (*_Box_face_vtable_18) (int);
  _Box_face_vtable_18 = ((void*) _access_16->_enc__self_type->vtable);
  _Box_face_agents_17 = _Box_face_vtable_18(_ENC__MSG__encore_libs_master_Ped_util_Box_Box_face_agents);
  future_t* _trait_method_call_19 = _Box_face_agents_17(_ctx, ((_enc__trait__encore_libs_master_Ped_util_Box_Box_face_t*) _access_16));
  future_t* _c_20 = _trait_method_call_19;
  /* d = (this.multi[3]).agents() */;
  array_t* _fieldacc_21 = (*_this)._enc__field_multi;
  int64_t _literal_22 = 3;
  _enc__trait__encore_libs_master_Ped_util_Box_Box_face_t* _access_23 = array_get(_fieldacc_21, _literal_22).p;
  check_receiver(_access_23, ".", "this.multi[3]", "agents", "\"./encore-libs-master/Ped_util/Box.enc\" (line 167, column 21)");
  future_t* (*_Box_face_agents_24) (pony_ctx_t**, _enc__trait__encore_libs_master_Ped_util_Box_Box_face_t*);
  void* (*_Box_face_vtable_25) (int);
  _Box_face_vtable_25 = ((void*) _access_23->_enc__self_type->vtable);
  _Box_face_agents_24 = _Box_face_vtable_25(_ENC__MSG__encore_libs_master_Ped_util_Box_Box_face_agents);
  future_t* _trait_method_call_26 = _Box_face_agents_24(_ctx, ((_enc__trait__encore_libs_master_Ped_util_Box_Box_face_t*) _access_23));
  future_t* _d_27 = _trait_method_call_26;
  /* flatten([get a, get b, get c, get d]) */;
  array_t* _array_28 = array_mk(_ctx, 4, (&(array_type)));
  array_t* _tmp_29 = future_get_actor(_ctx, _a_6).p;
  array_t* _tmp_30 = future_get_actor(_ctx, _b_13).p;
  array_t* _tmp_31 = future_get_actor(_ctx, _c_20).p;
  array_t* _tmp_32 = future_get_actor(_ctx, _d_27).p;
  array_set(_array_28, 0, ((encore_arg_t) {.p = _tmp_29}));
  array_set(_array_28, 1, ((encore_arg_t) {.p = _tmp_30}));
  array_set(_array_28, 2, ((encore_arg_t) {.p = _tmp_31}));
  array_set(_array_28, 3, ((encore_arg_t) {.p = _tmp_32}));
  pony_type_t* _tmp_33[] = {};
  array_t* _global_f_34 = _enc__global_fun__encore_libs_master_Ped_util_Global_funsflatten(_ctx, NULL, _array_28);
  return ((array_t*) _global_f_34);
}


int64_t _enc__method__encore_libs_master_Ped_util_Box_Multi_Box_external_move(pony_ctx_t** _ctx, _enc__active__encore_libs_master_Ped_util_Box_Multi_Box_t* _this, _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t* _enc__arg_a, tuple_t* _enc__arg_pos)
{
  /* if not inside(pos, this.space) then
  get this.toplevel.external_move(a, pos)
else
  {let ret = mk_Future(false);
   for item in this.multi
     if inside(pos, get item.space()) then
       ret = item.external_move(a, pos);
   get ret} */;
  int64_t _ite_0;
  if (({tuple_t* _fieldacc_1 = (*_this)._enc__field_space;
        pony_type_t* _tmp_2[] = {};
        int64_t _global_f_3 = _enc__global_fun__encore_libs_master_Ped_util_Global_funsinside(_ctx, NULL, _enc__arg_pos, _fieldacc_1);
        int64_t _unary_4 = (! _global_f_3); _unary_4;}))
  {
    /* get this.toplevel.external_move(a, pos) */;
    _enc__trait__encore_libs_master_Ped_util_Box_Box_face_t* _fieldacc_5 = (*_this)._enc__field_toplevel;
    check_receiver(_fieldacc_5, ".", "this.toplevel", "external_move", "\"./encore-libs-master/Ped_util/Box.enc\" (line 174, column 17)");
    future_t* (*_Box_face_external_move_6) (pony_ctx_t**, _enc__trait__encore_libs_master_Ped_util_Box_Box_face_t*, _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t*, tuple_t*);
    void* (*_Box_face_vtable_7) (int);
    _Box_face_vtable_7 = ((void*) _fieldacc_5->_enc__self_type->vtable);
    _Box_face_external_move_6 = _Box_face_vtable_7(_ENC__MSG__encore_libs_master_Ped_util_Box_Box_face_external_move);
    future_t* _trait_method_call_8 = _Box_face_external_move_6(_ctx, ((_enc__trait__encore_libs_master_Ped_util_Box_Box_face_t*) _fieldacc_5), _enc__arg_a, _enc__arg_pos);
    int64_t _tmp_9 = future_get_actor(_ctx, _trait_method_call_8).i;
    _ite_0 = ((int64_t) _tmp_9);
  }
  else
  {
    /* let ret = mk_Future(false) */;
    /* ret = mk_Future(false) */;
    int64_t _literal_10 = 0/*False*/;
    pony_type_t* _tmp_11[] = {};
    future_t* _global_f_12 = _enc__global_fun__encore_libs_master_Ped_util_Global_funsmk_Future(_ctx, NULL, _literal_10);
    future_t* _ret_13 = _global_f_12;
    /* for item in this.multi
  if inside(pos, get item.space()) then
    ret = item.external_move(a, pos) */;
    void* _for_14;
    array_t* _fieldacc_21 = (*_this)._enc__field_multi;
    int64_t _start_17 = 0;
    int64_t _stop_18 = (array_size(_fieldacc_21) - 1);
    int64_t _src_step_20 = 1;
    int64_t _literal_22 = 1;
    int64_t _step_19 = (_literal_22 * _src_step_20);
    range_assert_step(_step_19);
    int64_t _index_15;
    if ((_step_19 > 0))
    {
      _index_15 = _start_17;
    }
    else
    {
      _index_15 = _stop_18;
    };
    while (((_index_15 >= _start_17) && (_index_15 <= _stop_18)))
    {
      _enc__trait__encore_libs_master_Ped_util_Box_Box_face_t* _item_16 = array_get(_fieldacc_21, _index_15).p;
      /* if inside(pos, get item.space()) then
  ret = item.external_move(a, pos) */;
      void* _ite_23;
      if (({check_receiver(_item_16, ".", "item", "space", "\"./encore-libs-master/Ped_util/Box.enc\" (line 178, column 36)");
            future_t* (*_Box_face_space_24) (pony_ctx_t**, _enc__trait__encore_libs_master_Ped_util_Box_Box_face_t*);
            void* (*_Box_face_vtable_25) (int);
            _Box_face_vtable_25 = ((void*) _item_16->_enc__self_type->vtable);
            _Box_face_space_24 = _Box_face_vtable_25(_ENC__MSG__encore_libs_master_Ped_util_Box_Box_face_space);
            future_t* _trait_method_call_26 = _Box_face_space_24(_ctx, ((_enc__trait__encore_libs_master_Ped_util_Box_Box_face_t*) _item_16));
            tuple_t* _tmp_27 = future_get_actor(_ctx, _trait_method_call_26).p;
            pony_type_t* _tmp_28[] = {};
            int64_t _global_f_29 = _enc__global_fun__encore_libs_master_Ped_util_Global_funsinside(_ctx, NULL, _enc__arg_pos, _tmp_27); _global_f_29;}))
      {
        /* ret = item.external_move(a, pos) */;
        check_receiver(_item_16, ".", "item", "external_move", "\"./encore-libs-master/Ped_util/Box.enc\" (line 179, column 25)");
        future_t* (*_Box_face_external_move_30) (pony_ctx_t**, _enc__trait__encore_libs_master_Ped_util_Box_Box_face_t*, _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t*, tuple_t*);
        void* (*_Box_face_vtable_31) (int);
        _Box_face_vtable_31 = ((void*) _item_16->_enc__self_type->vtable);
        _Box_face_external_move_30 = _Box_face_vtable_31(_ENC__MSG__encore_libs_master_Ped_util_Box_Box_face_external_move);
        future_t* _trait_method_call_32 = _Box_face_external_move_30(_ctx, ((_enc__trait__encore_libs_master_Ped_util_Box_Box_face_t*) _item_16), _enc__arg_a, _enc__arg_pos);
        _ret_13 = _trait_method_call_32;
        _ite_23 = ((void*) UNIT);
      }
      else
      {
        UNIT;
        _ite_23 = ((void*) UNIT);
      };
      _for_14 = _ite_23;
      _index_15 = (_index_15 + _step_19);
    };
    /* get ret */;
    int64_t _tmp_33 = future_get_actor(_ctx, _ret_13).i;
    _ite_0 = ((int64_t) _tmp_33);
  };
  return ((int64_t) _ite_0);
}


int64_t _enc__method__encore_libs_master_Ped_util_Box_Multi_Box_move(pony_ctx_t** _ctx, _enc__active__encore_libs_master_Ped_util_Box_Multi_Box_t* _this)
{
  /* let f = new [Fut int](4) */;
  /* f = new [Fut int](4) */;
  int64_t _literal_1 = 4;
  array_t* _array_0 = array_mk(_ctx, _literal_1, (&(future_type)));
  array_t* _f_2 = _array_0;
  /* f[0] = (this.multi[0]).move() */;
  array_t* _fieldacc_3 = (*_this)._enc__field_multi;
  int64_t _literal_4 = 0;
  _enc__trait__encore_libs_master_Ped_util_Box_Box_face_t* _access_5 = array_get(_fieldacc_3, _literal_4).p;
  check_receiver(_access_5, ".", "this.multi[0]", "move", "\"./encore-libs-master/Ped_util/Box.enc\" (line 187, column 20)");
  future_t* (*_Box_face_move_6) (pony_ctx_t**, _enc__trait__encore_libs_master_Ped_util_Box_Box_face_t*);
  void* (*_Box_face_vtable_7) (int);
  _Box_face_vtable_7 = ((void*) _access_5->_enc__self_type->vtable);
  _Box_face_move_6 = _Box_face_vtable_7(_ENC__MSG__encore_libs_master_Ped_util_Box_Box_face_move);
  future_t* _trait_method_call_8 = _Box_face_move_6(_ctx, ((_enc__trait__encore_libs_master_Ped_util_Box_Box_face_t*) _access_5));
  int64_t _literal_9 = 0;
  array_set(_f_2, _literal_9, ((encore_arg_t) {.p = _trait_method_call_8}));
  /* f[1] = (this.multi[1]).move() */;
  array_t* _fieldacc_10 = (*_this)._enc__field_multi;
  int64_t _literal_11 = 1;
  _enc__trait__encore_libs_master_Ped_util_Box_Box_face_t* _access_12 = array_get(_fieldacc_10, _literal_11).p;
  check_receiver(_access_12, ".", "this.multi[1]", "move", "\"./encore-libs-master/Ped_util/Box.enc\" (line 188, column 20)");
  future_t* (*_Box_face_move_13) (pony_ctx_t**, _enc__trait__encore_libs_master_Ped_util_Box_Box_face_t*);
  void* (*_Box_face_vtable_14) (int);
  _Box_face_vtable_14 = ((void*) _access_12->_enc__self_type->vtable);
  _Box_face_move_13 = _Box_face_vtable_14(_ENC__MSG__encore_libs_master_Ped_util_Box_Box_face_move);
  future_t* _trait_method_call_15 = _Box_face_move_13(_ctx, ((_enc__trait__encore_libs_master_Ped_util_Box_Box_face_t*) _access_12));
  int64_t _literal_16 = 1;
  array_set(_f_2, _literal_16, ((encore_arg_t) {.p = _trait_method_call_15}));
  /* f[2] = (this.multi[2]).move() */;
  array_t* _fieldacc_17 = (*_this)._enc__field_multi;
  int64_t _literal_18 = 2;
  _enc__trait__encore_libs_master_Ped_util_Box_Box_face_t* _access_19 = array_get(_fieldacc_17, _literal_18).p;
  check_receiver(_access_19, ".", "this.multi[2]", "move", "\"./encore-libs-master/Ped_util/Box.enc\" (line 189, column 20)");
  future_t* (*_Box_face_move_20) (pony_ctx_t**, _enc__trait__encore_libs_master_Ped_util_Box_Box_face_t*);
  void* (*_Box_face_vtable_21) (int);
  _Box_face_vtable_21 = ((void*) _access_19->_enc__self_type->vtable);
  _Box_face_move_20 = _Box_face_vtable_21(_ENC__MSG__encore_libs_master_Ped_util_Box_Box_face_move);
  future_t* _trait_method_call_22 = _Box_face_move_20(_ctx, ((_enc__trait__encore_libs_master_Ped_util_Box_Box_face_t*) _access_19));
  int64_t _literal_23 = 2;
  array_set(_f_2, _literal_23, ((encore_arg_t) {.p = _trait_method_call_22}));
  /* f[3] = (this.multi[3]).move() */;
  array_t* _fieldacc_24 = (*_this)._enc__field_multi;
  int64_t _literal_25 = 3;
  _enc__trait__encore_libs_master_Ped_util_Box_Box_face_t* _access_26 = array_get(_fieldacc_24, _literal_25).p;
  check_receiver(_access_26, ".", "this.multi[3]", "move", "\"./encore-libs-master/Ped_util/Box.enc\" (line 190, column 20)");
  future_t* (*_Box_face_move_27) (pony_ctx_t**, _enc__trait__encore_libs_master_Ped_util_Box_Box_face_t*);
  void* (*_Box_face_vtable_28) (int);
  _Box_face_vtable_28 = ((void*) _access_26->_enc__self_type->vtable);
  _Box_face_move_27 = _Box_face_vtable_28(_ENC__MSG__encore_libs_master_Ped_util_Box_Box_face_move);
  future_t* _trait_method_call_29 = _Box_face_move_27(_ctx, ((_enc__trait__encore_libs_master_Ped_util_Box_Box_face_t*) _access_26));
  int64_t _literal_30 = 3;
  array_set(_f_2, _literal_30, ((encore_arg_t) {.p = _trait_method_call_29}));
  /* let ret = 0 */;
  /* ret = 0 */;
  int64_t _literal_31 = 0;
  int64_t _ret_32 = _literal_31;
  /* for a in f
  await a */;
  void* _for_33;
  int64_t _start_36 = 0;
  int64_t _stop_37 = (array_size(_f_2) - 1);
  int64_t _src_step_39 = 1;
  int64_t _literal_40 = 1;
  int64_t _step_38 = (_literal_40 * _src_step_39);
  range_assert_step(_step_38);
  int64_t _index_34;
  if ((_step_38 > 0))
  {
    _index_34 = _start_36;
  }
  else
  {
    _index_34 = _stop_37;
  };
  while (((_index_34 >= _start_36) && (_index_34 <= _stop_37)))
  {
    future_t* _a_35 = array_get(_f_2, _index_34).p;
    /* await a */;
    future_await(_ctx, _a_35);
    _for_33 = UNIT;
    _index_34 = (_index_34 + _step_38);
  };
  /* for a in f
  ret = ret + get a */;
  void* _for_41;
  int64_t _start_44 = 0;
  int64_t _stop_45 = (array_size(_f_2) - 1);
  int64_t _src_step_47 = 1;
  int64_t _literal_48 = 1;
  int64_t _step_46 = (_literal_48 * _src_step_47);
  range_assert_step(_step_46);
  int64_t _index_42;
  if ((_step_46 > 0))
  {
    _index_42 = _start_44;
  }
  else
  {
    _index_42 = _stop_45;
  };
  while (((_index_42 >= _start_44) && (_index_42 <= _stop_45)))
  {
    future_t* _a_43 = array_get(_f_2, _index_42).p;
    /* ret = ret + get a */;
    int64_t _binop_50 = (({ _ret_32;}) + ({int64_t _tmp_49 = future_get_actor(_ctx, _a_43).i; _tmp_49;}));
    _ret_32 = _binop_50;
    _for_41 = UNIT;
    _index_42 = (_index_42 + _step_46);
  };
  /* ret */;
  return ((int64_t) _ret_32);
}


void* _enc__method__encore_libs_master_Ped_util_Box_Multi_Box_start(pony_ctx_t** _ctx, _enc__active__encore_libs_master_Ped_util_Box_Multi_Box_t* _this)
{
  /* print("start\n") */;
  char* _literal_0 = "start\n";
  printf("%s", _literal_0);
  /* for a in this.multi
  a.start() */;
  void* _for_1;
  array_t* _fieldacc_8 = (*_this)._enc__field_multi;
  int64_t _start_4 = 0;
  int64_t _stop_5 = (array_size(_fieldacc_8) - 1);
  int64_t _src_step_7 = 1;
  int64_t _literal_9 = 1;
  int64_t _step_6 = (_literal_9 * _src_step_7);
  range_assert_step(_step_6);
  int64_t _index_2;
  if ((_step_6 > 0))
  {
    _index_2 = _start_4;
  }
  else
  {
    _index_2 = _stop_5;
  };
  while (((_index_2 >= _start_4) && (_index_2 <= _stop_5)))
  {
    _enc__trait__encore_libs_master_Ped_util_Box_Box_face_t* _a_3 = array_get(_fieldacc_8, _index_2).p;
    check_receiver(_a_3, ".", "a", "start", "\"./encore-libs-master/Ped_util/Box.enc\" (line 199, column 13)");
    void* (*_Box_face_start_10) (pony_ctx_t**, _enc__trait__encore_libs_master_Ped_util_Box_Box_face_t*);
    void* (*_Box_face_vtable_11) (int);
    _Box_face_vtable_11 = ((void*) _a_3->_enc__self_type->vtable);
    _Box_face_start_10 = _Box_face_vtable_11(_ENC__MSG__encore_libs_master_Ped_util_Box_Box_face_start);
    void* _trait_method_call_12 = _Box_face_start_10(_ctx, ((_enc__trait__encore_libs_master_Ped_util_Box_Box_face_t*) _a_3));
    _for_1 = _trait_method_call_12;
    _index_2 = (_index_2 + _step_6);
  };
  return UNIT;
}


future_t* _enc__method__encore_libs_master_Ped_util_Box_Multi_Box__init_future(pony_ctx_t** _ctx, _enc__active__encore_libs_master_Ped_util_Box_Multi_Box_t* _this, tuple_t* _enc__arg_space, _enc__trait__encore_libs_master_Ped_util_Box_Box_face_t* _enc__arg_toplevel, int64_t _enc__arg_levels_left)
{
  future_t* _fut = future_mk(_ctx, ENCORE_PRIMITIVE);
  pony_gc_send((*_ctx));
  encore_trace_object((*_ctx), _enc__arg_space, tuple_trace);
  ((capability_t*) _enc__arg_toplevel)->_enc__self_type->trace((*_ctx), _enc__arg_toplevel);
  /* Not tracing field '_enc__arg_levels_left' */;
  encore_trace_object((*_ctx), _fut, future_trace);
  pony_send_done((*_ctx));
  _enc__fut_msg__encore_libs_master_Ped_util_Box_Multi_Box__init_t* msg = ((_enc__fut_msg__encore_libs_master_Ped_util_Box_Multi_Box__init_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__fut_msg__encore_libs_master_Ped_util_Box_Multi_Box__init_t)), _ENC__FUT_MSG__encore_libs_master_Ped_util_Box_Multi_Box__init));
  msg->f1 = _enc__arg_space;
  msg->f2 = _enc__arg_toplevel;
  msg->f3 = _enc__arg_levels_left;
  msg->_fut = _fut;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
  return _fut;
}


future_t* _enc__method__encore_libs_master_Ped_util_Box_Multi_Box_space_future(pony_ctx_t** _ctx, _enc__active__encore_libs_master_Ped_util_Box_Multi_Box_t* _this)
{
  future_t* _fut = future_mk(_ctx, (&(tuple_type)));
  pony_gc_send((*_ctx));
  encore_trace_object((*_ctx), _fut, future_trace);
  pony_send_done((*_ctx));
  _enc__fut_msg__encore_libs_master_Ped_util_Box_Multi_Box_space_t* msg = ((_enc__fut_msg__encore_libs_master_Ped_util_Box_Multi_Box_space_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__fut_msg__encore_libs_master_Ped_util_Box_Multi_Box_space_t)), _ENC__FUT_MSG__encore_libs_master_Ped_util_Box_Multi_Box_space));
  msg->_fut = _fut;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
  return _fut;
}


future_t* _enc__method__encore_libs_master_Ped_util_Box_Multi_Box_add_future(pony_ctx_t** _ctx, _enc__active__encore_libs_master_Ped_util_Box_Multi_Box_t* _this, _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t* _enc__arg_a)
{
  future_t* _fut = future_mk(_ctx, ENCORE_PRIMITIVE);
  pony_gc_send((*_ctx));
  encore_trace_object((*_ctx), _enc__arg_a, _enc__trace__encore_libs_master_Ped_util_Agent_passive_Agent);
  encore_trace_object((*_ctx), _fut, future_trace);
  pony_send_done((*_ctx));
  _enc__fut_msg__encore_libs_master_Ped_util_Box_Multi_Box_add_t* msg = ((_enc__fut_msg__encore_libs_master_Ped_util_Box_Multi_Box_add_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__fut_msg__encore_libs_master_Ped_util_Box_Multi_Box_add_t)), _ENC__FUT_MSG__encore_libs_master_Ped_util_Box_Multi_Box_add));
  msg->f1 = _enc__arg_a;
  msg->_fut = _fut;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
  return _fut;
}


future_t* _enc__method__encore_libs_master_Ped_util_Box_Multi_Box_agents_future(pony_ctx_t** _ctx, _enc__active__encore_libs_master_Ped_util_Box_Multi_Box_t* _this)
{
  future_t* _fut = future_mk(_ctx, (&(array_type)));
  pony_gc_send((*_ctx));
  encore_trace_object((*_ctx), _fut, future_trace);
  pony_send_done((*_ctx));
  _enc__fut_msg__encore_libs_master_Ped_util_Box_Multi_Box_agents_t* msg = ((_enc__fut_msg__encore_libs_master_Ped_util_Box_Multi_Box_agents_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__fut_msg__encore_libs_master_Ped_util_Box_Multi_Box_agents_t)), _ENC__FUT_MSG__encore_libs_master_Ped_util_Box_Multi_Box_agents));
  msg->_fut = _fut;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
  return _fut;
}


future_t* _enc__method__encore_libs_master_Ped_util_Box_Multi_Box_external_move_future(pony_ctx_t** _ctx, _enc__active__encore_libs_master_Ped_util_Box_Multi_Box_t* _this, _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t* _enc__arg_a, tuple_t* _enc__arg_pos)
{
  future_t* _fut = future_mk(_ctx, ENCORE_PRIMITIVE);
  pony_gc_send((*_ctx));
  encore_trace_object((*_ctx), _enc__arg_a, _enc__trace__encore_libs_master_Ped_util_Agent_passive_Agent);
  encore_trace_object((*_ctx), _enc__arg_pos, tuple_trace);
  encore_trace_object((*_ctx), _fut, future_trace);
  pony_send_done((*_ctx));
  _enc__fut_msg__encore_libs_master_Ped_util_Box_Multi_Box_external_move_t* msg = ((_enc__fut_msg__encore_libs_master_Ped_util_Box_Multi_Box_external_move_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__fut_msg__encore_libs_master_Ped_util_Box_Multi_Box_external_move_t)), _ENC__FUT_MSG__encore_libs_master_Ped_util_Box_Multi_Box_external_move));
  msg->f1 = _enc__arg_a;
  msg->f2 = _enc__arg_pos;
  msg->_fut = _fut;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
  return _fut;
}


future_t* _enc__method__encore_libs_master_Ped_util_Box_Multi_Box_move_future(pony_ctx_t** _ctx, _enc__active__encore_libs_master_Ped_util_Box_Multi_Box_t* _this)
{
  future_t* _fut = future_mk(_ctx, ENCORE_PRIMITIVE);
  pony_gc_send((*_ctx));
  encore_trace_object((*_ctx), _fut, future_trace);
  pony_send_done((*_ctx));
  _enc__fut_msg__encore_libs_master_Ped_util_Box_Multi_Box_move_t* msg = ((_enc__fut_msg__encore_libs_master_Ped_util_Box_Multi_Box_move_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__fut_msg__encore_libs_master_Ped_util_Box_Multi_Box_move_t)), _ENC__FUT_MSG__encore_libs_master_Ped_util_Box_Multi_Box_move));
  msg->_fut = _fut;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
  return _fut;
}


future_t* _enc__method__encore_libs_master_Ped_util_Box_Multi_Box_start_future(pony_ctx_t** _ctx, _enc__active__encore_libs_master_Ped_util_Box_Multi_Box_t* _this)
{
  future_t* _fut = future_mk(_ctx, ENCORE_PRIMITIVE);
  pony_gc_send((*_ctx));
  encore_trace_object((*_ctx), _fut, future_trace);
  pony_send_done((*_ctx));
  _enc__fut_msg__encore_libs_master_Ped_util_Box_Multi_Box_start_t* msg = ((_enc__fut_msg__encore_libs_master_Ped_util_Box_Multi_Box_start_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__fut_msg__encore_libs_master_Ped_util_Box_Multi_Box_start_t)), _ENC__FUT_MSG__encore_libs_master_Ped_util_Box_Multi_Box_start));
  msg->_fut = _fut;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
  return _fut;
}


void _enc__method__encore_libs_master_Ped_util_Box_Multi_Box__init_one_way(pony_ctx_t** _ctx, _enc__active__encore_libs_master_Ped_util_Box_Multi_Box_t* _this, tuple_t* _enc__arg_space, _enc__trait__encore_libs_master_Ped_util_Box_Box_face_t* _enc__arg_toplevel, int64_t _enc__arg_levels_left)
{
  pony_gc_send((*_ctx));
  encore_trace_object((*_ctx), _enc__arg_space, tuple_trace);
  ((capability_t*) _enc__arg_toplevel)->_enc__self_type->trace((*_ctx), _enc__arg_toplevel);
  /* Not tracing field '_enc__arg_levels_left' */;
  /* No tracing future for oneway msg */;
  pony_send_done((*_ctx));
  _enc__oneway_msg__encore_libs_master_Ped_util_Box_Multi_Box__init_t* msg = ((_enc__oneway_msg__encore_libs_master_Ped_util_Box_Multi_Box__init_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__oneway_msg__encore_libs_master_Ped_util_Box_Multi_Box__init_t)), _ENC__ONEWAY_MSG__encore_libs_master_Ped_util_Box_Multi_Box__init));
  msg->f1 = _enc__arg_space;
  msg->f2 = _enc__arg_toplevel;
  msg->f3 = _enc__arg_levels_left;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
}


void _enc__method__encore_libs_master_Ped_util_Box_Multi_Box_space_one_way(pony_ctx_t** _ctx, _enc__active__encore_libs_master_Ped_util_Box_Multi_Box_t* _this)
{
  pony_gc_send((*_ctx));
  /* No tracing future for oneway msg */;
  pony_send_done((*_ctx));
  _enc__oneway_msg__encore_libs_master_Ped_util_Box_Multi_Box_space_t* msg = ((_enc__oneway_msg__encore_libs_master_Ped_util_Box_Multi_Box_space_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__oneway_msg__encore_libs_master_Ped_util_Box_Multi_Box_space_t)), _ENC__ONEWAY_MSG__encore_libs_master_Ped_util_Box_Multi_Box_space));
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
}


void _enc__method__encore_libs_master_Ped_util_Box_Multi_Box_add_one_way(pony_ctx_t** _ctx, _enc__active__encore_libs_master_Ped_util_Box_Multi_Box_t* _this, _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t* _enc__arg_a)
{
  pony_gc_send((*_ctx));
  encore_trace_object((*_ctx), _enc__arg_a, _enc__trace__encore_libs_master_Ped_util_Agent_passive_Agent);
  /* No tracing future for oneway msg */;
  pony_send_done((*_ctx));
  _enc__oneway_msg__encore_libs_master_Ped_util_Box_Multi_Box_add_t* msg = ((_enc__oneway_msg__encore_libs_master_Ped_util_Box_Multi_Box_add_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__oneway_msg__encore_libs_master_Ped_util_Box_Multi_Box_add_t)), _ENC__ONEWAY_MSG__encore_libs_master_Ped_util_Box_Multi_Box_add));
  msg->f1 = _enc__arg_a;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
}


void _enc__method__encore_libs_master_Ped_util_Box_Multi_Box_agents_one_way(pony_ctx_t** _ctx, _enc__active__encore_libs_master_Ped_util_Box_Multi_Box_t* _this)
{
  pony_gc_send((*_ctx));
  /* No tracing future for oneway msg */;
  pony_send_done((*_ctx));
  _enc__oneway_msg__encore_libs_master_Ped_util_Box_Multi_Box_agents_t* msg = ((_enc__oneway_msg__encore_libs_master_Ped_util_Box_Multi_Box_agents_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__oneway_msg__encore_libs_master_Ped_util_Box_Multi_Box_agents_t)), _ENC__ONEWAY_MSG__encore_libs_master_Ped_util_Box_Multi_Box_agents));
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
}


void _enc__method__encore_libs_master_Ped_util_Box_Multi_Box_external_move_one_way(pony_ctx_t** _ctx, _enc__active__encore_libs_master_Ped_util_Box_Multi_Box_t* _this, _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t* _enc__arg_a, tuple_t* _enc__arg_pos)
{
  pony_gc_send((*_ctx));
  encore_trace_object((*_ctx), _enc__arg_a, _enc__trace__encore_libs_master_Ped_util_Agent_passive_Agent);
  encore_trace_object((*_ctx), _enc__arg_pos, tuple_trace);
  /* No tracing future for oneway msg */;
  pony_send_done((*_ctx));
  _enc__oneway_msg__encore_libs_master_Ped_util_Box_Multi_Box_external_move_t* msg = ((_enc__oneway_msg__encore_libs_master_Ped_util_Box_Multi_Box_external_move_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__oneway_msg__encore_libs_master_Ped_util_Box_Multi_Box_external_move_t)), _ENC__ONEWAY_MSG__encore_libs_master_Ped_util_Box_Multi_Box_external_move));
  msg->f1 = _enc__arg_a;
  msg->f2 = _enc__arg_pos;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
}


void _enc__method__encore_libs_master_Ped_util_Box_Multi_Box_move_one_way(pony_ctx_t** _ctx, _enc__active__encore_libs_master_Ped_util_Box_Multi_Box_t* _this)
{
  pony_gc_send((*_ctx));
  /* No tracing future for oneway msg */;
  pony_send_done((*_ctx));
  _enc__oneway_msg__encore_libs_master_Ped_util_Box_Multi_Box_move_t* msg = ((_enc__oneway_msg__encore_libs_master_Ped_util_Box_Multi_Box_move_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__oneway_msg__encore_libs_master_Ped_util_Box_Multi_Box_move_t)), _ENC__ONEWAY_MSG__encore_libs_master_Ped_util_Box_Multi_Box_move));
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
}


void _enc__method__encore_libs_master_Ped_util_Box_Multi_Box_start_one_way(pony_ctx_t** _ctx, _enc__active__encore_libs_master_Ped_util_Box_Multi_Box_t* _this)
{
  pony_gc_send((*_ctx));
  /* No tracing future for oneway msg */;
  pony_send_done((*_ctx));
  _enc__oneway_msg__encore_libs_master_Ped_util_Box_Multi_Box_start_t* msg = ((_enc__oneway_msg__encore_libs_master_Ped_util_Box_Multi_Box_start_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__oneway_msg__encore_libs_master_Ped_util_Box_Multi_Box_start_t)), _ENC__ONEWAY_MSG__encore_libs_master_Ped_util_Box_Multi_Box_start));
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
}


static void _enc__dispatch__encore_libs_master_Ped_util_Box_Multi_Box(pony_ctx_t** _ctx, pony_actor_t* _a, pony_msg_t* _m)
{
  _enc__active__encore_libs_master_Ped_util_Box_Multi_Box_t* _this = ((_enc__active__encore_libs_master_Ped_util_Box_Multi_Box_t*) _a);
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
    case _ENC__FUT_MSG__encore_libs_master_Ped_util_Box_Multi_Box__init:
    {
      future_t* _fut = ((encore_fut_msg_t*) _m)->_fut;
      tuple_t* _enc__arg_space = ((_enc__fut_msg__encore_libs_master_Ped_util_Box_Multi_Box__init_t*) _m)->f1;
      _enc__trait__encore_libs_master_Ped_util_Box_Box_face_t* _enc__arg_toplevel = ((_enc__fut_msg__encore_libs_master_Ped_util_Box_Multi_Box__init_t*) _m)->f2;
      int64_t _enc__arg_levels_left = ((_enc__fut_msg__encore_libs_master_Ped_util_Box_Multi_Box__init_t*) _m)->f3;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      encore_trace_object((*_ctx), _enc__arg_space, tuple_trace);
      ((capability_t*) _enc__arg_toplevel)->_enc__self_type->trace((*_ctx), _enc__arg_toplevel);
      /* Not tracing field '_enc__arg_levels_left' */;
      encore_trace_object((*_ctx), _fut, future_type.trace);
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      future_fulfil(_ctx, _fut, ((encore_arg_t) {.p = _enc__method__encore_libs_master_Ped_util_Box_Multi_Box__init(_ctx, _this, _enc__arg_space, _enc__arg_toplevel, _enc__arg_levels_left)}));
      break;
    }
    case _ENC__ONEWAY_MSG__encore_libs_master_Ped_util_Box_Multi_Box__init:
    {
      tuple_t* _enc__arg_space = ((_enc__oneway_msg__encore_libs_master_Ped_util_Box_Multi_Box__init_t*) _m)->f1;
      _enc__trait__encore_libs_master_Ped_util_Box_Box_face_t* _enc__arg_toplevel = ((_enc__oneway_msg__encore_libs_master_Ped_util_Box_Multi_Box__init_t*) _m)->f2;
      int64_t _enc__arg_levels_left = ((_enc__oneway_msg__encore_libs_master_Ped_util_Box_Multi_Box__init_t*) _m)->f3;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      encore_trace_object((*_ctx), _enc__arg_space, tuple_trace);
      ((capability_t*) _enc__arg_toplevel)->_enc__self_type->trace((*_ctx), _enc__arg_toplevel);
      /* Not tracing field '_enc__arg_levels_left' */;
      /* Not tracing the future in a oneWay send */;
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      _enc__method__encore_libs_master_Ped_util_Box_Multi_Box__init(_ctx, _this, _enc__arg_space, _enc__arg_toplevel, _enc__arg_levels_left);
      break;
    }
    case _ENC__FUT_MSG__encore_libs_master_Ped_util_Box_Multi_Box_space:
    {
      future_t* _fut = ((encore_fut_msg_t*) _m)->_fut;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      encore_trace_object((*_ctx), _fut, future_type.trace);
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      future_fulfil(_ctx, _fut, ((encore_arg_t) {.p = _enc__method__encore_libs_master_Ped_util_Box_Multi_Box_space(_ctx, _this)}));
      break;
    }
    case _ENC__ONEWAY_MSG__encore_libs_master_Ped_util_Box_Multi_Box_space:
    {
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      /* Not tracing the future in a oneWay send */;
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      _enc__method__encore_libs_master_Ped_util_Box_Multi_Box_space(_ctx, _this);
      break;
    }
    case _ENC__FUT_MSG__encore_libs_master_Ped_util_Box_Multi_Box_add:
    {
      future_t* _fut = ((encore_fut_msg_t*) _m)->_fut;
      _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t* _enc__arg_a = ((_enc__fut_msg__encore_libs_master_Ped_util_Box_Multi_Box_add_t*) _m)->f1;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      encore_trace_object((*_ctx), _enc__arg_a, _enc__trace__encore_libs_master_Ped_util_Agent_passive_Agent);
      encore_trace_object((*_ctx), _fut, future_type.trace);
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      future_fulfil(_ctx, _fut, ((encore_arg_t) {.p = _enc__method__encore_libs_master_Ped_util_Box_Multi_Box_add(_ctx, _this, _enc__arg_a)}));
      break;
    }
    case _ENC__ONEWAY_MSG__encore_libs_master_Ped_util_Box_Multi_Box_add:
    {
      _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t* _enc__arg_a = ((_enc__oneway_msg__encore_libs_master_Ped_util_Box_Multi_Box_add_t*) _m)->f1;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      encore_trace_object((*_ctx), _enc__arg_a, _enc__trace__encore_libs_master_Ped_util_Agent_passive_Agent);
      /* Not tracing the future in a oneWay send */;
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      _enc__method__encore_libs_master_Ped_util_Box_Multi_Box_add(_ctx, _this, _enc__arg_a);
      break;
    }
    case _ENC__FUT_MSG__encore_libs_master_Ped_util_Box_Multi_Box_agents:
    {
      future_t* _fut = ((encore_fut_msg_t*) _m)->_fut;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      encore_trace_object((*_ctx), _fut, future_type.trace);
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      future_fulfil(_ctx, _fut, ((encore_arg_t) {.p = _enc__method__encore_libs_master_Ped_util_Box_Multi_Box_agents(_ctx, _this)}));
      break;
    }
    case _ENC__ONEWAY_MSG__encore_libs_master_Ped_util_Box_Multi_Box_agents:
    {
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      /* Not tracing the future in a oneWay send */;
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      _enc__method__encore_libs_master_Ped_util_Box_Multi_Box_agents(_ctx, _this);
      break;
    }
    case _ENC__FUT_MSG__encore_libs_master_Ped_util_Box_Multi_Box_external_move:
    {
      future_t* _fut = ((encore_fut_msg_t*) _m)->_fut;
      _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t* _enc__arg_a = ((_enc__fut_msg__encore_libs_master_Ped_util_Box_Multi_Box_external_move_t*) _m)->f1;
      tuple_t* _enc__arg_pos = ((_enc__fut_msg__encore_libs_master_Ped_util_Box_Multi_Box_external_move_t*) _m)->f2;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      encore_trace_object((*_ctx), _enc__arg_a, _enc__trace__encore_libs_master_Ped_util_Agent_passive_Agent);
      encore_trace_object((*_ctx), _enc__arg_pos, tuple_trace);
      encore_trace_object((*_ctx), _fut, future_type.trace);
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      future_fulfil(_ctx, _fut, ((encore_arg_t) {.i = _enc__method__encore_libs_master_Ped_util_Box_Multi_Box_external_move(_ctx, _this, _enc__arg_a, _enc__arg_pos)}));
      break;
    }
    case _ENC__ONEWAY_MSG__encore_libs_master_Ped_util_Box_Multi_Box_external_move:
    {
      _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t* _enc__arg_a = ((_enc__oneway_msg__encore_libs_master_Ped_util_Box_Multi_Box_external_move_t*) _m)->f1;
      tuple_t* _enc__arg_pos = ((_enc__oneway_msg__encore_libs_master_Ped_util_Box_Multi_Box_external_move_t*) _m)->f2;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      encore_trace_object((*_ctx), _enc__arg_a, _enc__trace__encore_libs_master_Ped_util_Agent_passive_Agent);
      encore_trace_object((*_ctx), _enc__arg_pos, tuple_trace);
      /* Not tracing the future in a oneWay send */;
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      _enc__method__encore_libs_master_Ped_util_Box_Multi_Box_external_move(_ctx, _this, _enc__arg_a, _enc__arg_pos);
      break;
    }
    case _ENC__FUT_MSG__encore_libs_master_Ped_util_Box_Multi_Box_move:
    {
      future_t* _fut = ((encore_fut_msg_t*) _m)->_fut;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      encore_trace_object((*_ctx), _fut, future_type.trace);
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      future_fulfil(_ctx, _fut, ((encore_arg_t) {.i = _enc__method__encore_libs_master_Ped_util_Box_Multi_Box_move(_ctx, _this)}));
      break;
    }
    case _ENC__ONEWAY_MSG__encore_libs_master_Ped_util_Box_Multi_Box_move:
    {
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      /* Not tracing the future in a oneWay send */;
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      _enc__method__encore_libs_master_Ped_util_Box_Multi_Box_move(_ctx, _this);
      break;
    }
    case _ENC__FUT_MSG__encore_libs_master_Ped_util_Box_Multi_Box_start:
    {
      future_t* _fut = ((encore_fut_msg_t*) _m)->_fut;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      encore_trace_object((*_ctx), _fut, future_type.trace);
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      future_fulfil(_ctx, _fut, ((encore_arg_t) {.p = _enc__method__encore_libs_master_Ped_util_Box_Multi_Box_start(_ctx, _this)}));
      break;
    }
    case _ENC__ONEWAY_MSG__encore_libs_master_Ped_util_Box_Multi_Box_start:
    {
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      /* Not tracing the future in a oneWay send */;
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      _enc__method__encore_libs_master_Ped_util_Box_Multi_Box_start(_ctx, _this);
      break;
    }
    default:
    {
      printf("error, got invalid id: %zd", _m->id);
    }
  };
}


pony_type_t _enc__active__encore_libs_master_Ped_util_Box_Multi_Box_type = {.id=_ENC__ID__encore_libs_master_Ped_util_Box_Multi_Box, .size=sizeof(_enc__active__encore_libs_master_Ped_util_Box_Multi_Box_t), .trace=_enc__trace__encore_libs_master_Ped_util_Box_Multi_Box, .dispatch=_enc__dispatch__encore_libs_master_Ped_util_Box_Multi_Box, .vtable=trait_method_selector};
