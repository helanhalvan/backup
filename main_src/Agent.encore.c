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


void _enc__type_init__encore_libs_master_Ped_util_Agent_passive_Agent(_enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t* _this, ... )
{
  va_list params;
  va_start(params, _this);
  va_end(params);
}


void _enc__trace__encore_libs_master_Ped_util_Agent_passive_Agent(pony_ctx_t* _ctx_arg, void* p)
{
  pony_ctx_t** _ctx = (&(_ctx_arg));
  _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t* _this = p;
  uint64_t _enc__field_hash_code = _this->_enc__field_hash_code;
  /* Not tracing field '_enc__field_hash_code' */;
  int64_t _enc__field_x = _this->_enc__field_x;
  /* Not tracing field '_enc__field_x' */;
  int64_t _enc__field_y = _this->_enc__field_y;
  /* Not tracing field '_enc__field_y' */;
  array_t* _enc__field_targets_x = _this->_enc__field_targets_x;
  encore_trace_object((*_ctx), _enc__field_targets_x, array_trace);
  array_t* _enc__field_targets_y = _this->_enc__field_targets_y;
  encore_trace_object((*_ctx), _enc__field_targets_y, array_trace);
  array_t* _enc__field_targets_size = _this->_enc__field_targets_size;
  encore_trace_object((*_ctx), _enc__field_targets_size, array_trace);
  int64_t _enc__field_i = _this->_enc__field_i;
  /* Not tracing field '_enc__field_i' */;
  int64_t _enc__field_ttl = _this->_enc__field_ttl;
  /* Not tracing field '_enc__field_ttl' */;
}


_enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t* _enc__constructor__encore_libs_master_Ped_util_Agent_passive_Agent(pony_ctx_t** _ctx, pony_type_t** runtimeType)
{
  _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t* _this = ((_enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t*) encore_alloc((*_ctx), sizeof(_enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t)));
  _this->_enc__self_type = (&(_enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_type));
  return _this;
}


void* _enc__method__encore_libs_master_Ped_util_Agent_passive_Agent_init(pony_ctx_t** _ctx, _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t* _this, pony_type_t** runtimeType, tuple_t* _enc__arg_in_pos, array_t* _enc__arg_list, array_t* _enc__arg_targets_size, int64_t _enc__arg_in_id, int64_t _enc__arg_ttl)
{
  ENC_DTRACE3(METHOD_ENTRY, (uintptr_t)*_ctx, (uintptr_t)_this, "init");
  /* match in_pos with
  (x, y) => {this.x = x;
             this.y = y}
 */;
  void* _match_0;
  int64_t _x_1;
  int64_t _y_2;
  if ((({int64_t _tupleCheck_3;
         _tupleCheck_3 = 1;
         int64_t _tupleAccess_4 = tuple_get(_enc__arg_in_pos, 0).i;
         int64_t _varBinding_5;
         _x_1 = _tupleAccess_4;
         _varBinding_5 = 1;
         _tupleCheck_3 = (_tupleCheck_3 && _varBinding_5);
         int64_t _tupleAccess_6 = tuple_get(_enc__arg_in_pos, 1).i;
         int64_t _varBinding_7;
         _y_2 = _tupleAccess_6;
         _varBinding_7 = 1;
         _tupleCheck_3 = (_tupleCheck_3 && _varBinding_7); _tupleCheck_3;}) && ({int64_t _literal_8 = 1/*True*/; _literal_8;})))
  {
    _match_0 = ((void*) ({/* this.x = x */;
                          (*({ENC_DTRACE3(FIELD_WRITE, (uintptr_t)*_ctx, (uintptr_t)_this, "x"); _this;}))._enc__field_x = _x_1;
                          /* this.y = y */;
                          (*({ENC_DTRACE3(FIELD_WRITE, (uintptr_t)*_ctx, (uintptr_t)_this, "y"); _this;}))._enc__field_y = _y_2; UNIT;}));
  }
  else
  {
    fprintf(stderr, "*** Runtime error: No matching clause was found ***\n");
    exit(1);
  };
  /* this.i = 0 */;
  int64_t _literal_9 = 0;
  (*({ENC_DTRACE3(FIELD_WRITE, (uintptr_t)*_ctx, (uintptr_t)_this, "i"); _this;}))._enc__field_i = _literal_9;
  /* this.targets_x = new [int](|targets_size|) */;
  int64_t _size_11 = array_size(_enc__arg_targets_size);
  array_t* _array_10 = array_mk(_ctx, _size_11, ENCORE_PRIMITIVE);
  (*({ENC_DTRACE3(FIELD_WRITE, (uintptr_t)*_ctx, (uintptr_t)_this, "targets_x"); _this;}))._enc__field_targets_x = _array_10;
  /* this.targets_y = new [int](|targets_size|) */;
  int64_t _size_13 = array_size(_enc__arg_targets_size);
  array_t* _array_12 = array_mk(_ctx, _size_13, ENCORE_PRIMITIVE);
  (*({ENC_DTRACE3(FIELD_WRITE, (uintptr_t)*_ctx, (uintptr_t)_this, "targets_y"); _this;}))._enc__field_targets_y = _array_12;
  /* this.targets_size = targets_size */;
  (*({ENC_DTRACE3(FIELD_WRITE, (uintptr_t)*_ctx, (uintptr_t)_this, "targets_size"); _this;}))._enc__field_targets_size = _enc__arg_targets_size;
  /* for index in [ 0 , |list| - 1 by 1 ]
  match list[index] with
    (x, y) => {this.targets_x[index] = x;
               this.targets_y[index] = y}
   */;
  void* _for_14;
  /* Range not generated */;
  int64_t _literal_21 = 0;
  int64_t _binop_24 = (({int64_t _size_22 = array_size(_enc__arg_list); _size_22;}) - ({int64_t _literal_23 = 1; _literal_23;}));
  int64_t _literal_25 = 1;
  int64_t _literal_26 = 1;
  int64_t _step_19 = (_literal_26 * _literal_25);
  range_assert_step(_step_19);
  int64_t _index_15;
  if ((_step_19 > 0))
  {
    _index_15 = _literal_21;
  }
  else
  {
    _index_15 = _binop_24;
  };
  while (((_index_15 >= _literal_21) && (_index_15 <= _binop_24)))
  {
    int64_t _index_16 = _index_15;
    /* match list[index] with
  (x, y) => {this.targets_x[index] = x;
             this.targets_y[index] = y}
 */;
    tuple_t* _access_28 = array_get(_enc__arg_list, _index_16).p;
    void* _match_27;
    int64_t _x_29;
    int64_t _y_30;
    if ((({int64_t _tupleCheck_33;
           _tupleCheck_33 = 1;
           int64_t _tupleAccess_34 = tuple_get(_access_28, 0).i;
           int64_t _varBinding_35;
           _x_29 = _tupleAccess_34;
           _varBinding_35 = 1;
           _tupleCheck_33 = (_tupleCheck_33 && _varBinding_35);
           int64_t _tupleAccess_36 = tuple_get(_access_28, 1).i;
           int64_t _varBinding_37;
           _y_30 = _tupleAccess_36;
           _varBinding_37 = 1;
           _tupleCheck_33 = (_tupleCheck_33 && _varBinding_37); _tupleCheck_33;}) && ({int64_t _literal_38 = 1/*True*/; _literal_38;})))
    {
      _match_27 = ((void*) ({/* this.targets_x[index] = x */;
                             ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "targets_x");
                             array_t* _fieldacc_31 = (*_this)._enc__field_targets_x;
                             array_set(_fieldacc_31, _index_16, ((encore_arg_t) {.i = _x_29}));
                             /* this.targets_y[index] = y */;
                             ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "targets_y");
                             array_t* _fieldacc_32 = (*_this)._enc__field_targets_y;
                             array_set(_fieldacc_32, _index_16, ((encore_arg_t) {.i = _y_30})); UNIT;}));
    }
    else
    {
      fprintf(stderr, "*** Runtime error: No matching clause was found ***\n");
      exit(1);
    };
    _for_14 = _match_27;
    _index_15 = (_index_15 + _step_19);
  };
  /* this.hash_code = in_id */;
  (*({ENC_DTRACE3(FIELD_WRITE, (uintptr_t)*_ctx, (uintptr_t)_this, "hash_code"); _this;}))._enc__field_hash_code = ((uint64_t) _enc__arg_in_id);
  /* this.ttl = ttl */;
  (*({ENC_DTRACE3(FIELD_WRITE, (uintptr_t)*_ctx, (uintptr_t)_this, "ttl"); _this;}))._enc__field_ttl = _enc__arg_ttl;
  /* () */;
  UNIT;
  ENC_DTRACE3(METHOD_EXIT, (uintptr_t)*_ctx, (uintptr_t)_this, "init");
  return UNIT;
}


void* _enc__method__encore_libs_master_Ped_util_Agent_passive_Agent_next(pony_ctx_t** _ctx, _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t* _this, pony_type_t** runtimeType, array_t* _enc__arg_ret)
{
  ENC_DTRACE3(METHOD_ENTRY, (uintptr_t)*_ctx, (uintptr_t)_this, "next");
  /* let x1 = this.x
    y1 = this.y
in
  {var x2 = this.targets_x[this.i];
   var y2 = this.targets_y[this.i];
   var xdiff = x1 - x2;
   var ydiff = y1 - y2;
   var lenSquare = xdiff * xdiff + ydiff * ydiff;
   var invlen = invSqrt(lenSquare);
   if lenSquare < this.targets_size[this.i] * this.targets_size[this.i] then
     this.i = this.i + 1;
   if |this.targets_size| == this.i then
     this.i = 0;
   x2 = this.targets_x[this.i];
   y2 = this.targets_y[this.i];
   xdiff = x1 - x2;
   ydiff = y1 - y2;
   lenSquare = xdiff * xdiff + ydiff * ydiff;
   invlen = invSqrt(lenSquare);
   let xoff = xdiff * invlen
       yoff = ydiff * invlen
       desired_x = x1 + round(xoff * - 1)
       desired_y = y1 + round(yoff * - 1)
   in
     {val dx = desired_x - x1;
      val dy = desired_y - y1;
      ret[0] = desired_x;
      ret[1] = desired_y;
      if dx == 0 or dy == 0 then
        {if dx == 0 and dy == 0 then
           print("dx and dy == 0, invariant VIOLATED {} {}\n", 
                 (x2 + xdiff, y2 + ydiff), 
                 (xoff, yoff));
         ret[2] = desired_x + dy;
         ret[3] = desired_y + dx;
         ret[4] = desired_x - dy;
         ret[5] = desired_y - dx}
      else
        {ret[2] = desired_x;
         ret[3] = y1;
         ret[4] = x1;
         ret[5] = desired_y}};
   ()} */;
  /* x1 = this.x */;
  ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "x");
  int64_t _fieldacc_0 = (*_this)._enc__field_x;
  int64_t _x1_1 = _fieldacc_0;
  /* y1 = this.y */;
  ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "y");
  int64_t _fieldacc_2 = (*_this)._enc__field_y;
  int64_t _y1_3 = _fieldacc_2;
  /* var x2 = this.targets_x[this.i] */;
  /* x2 = this.targets_x[this.i] */;
  ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "targets_x");
  array_t* _fieldacc_4 = (*_this)._enc__field_targets_x;
  ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "i");
  int64_t _fieldacc_5 = (*_this)._enc__field_i;
  int64_t _access_6 = array_get(_fieldacc_4, _fieldacc_5).i;
  int64_t _x2_7 = _access_6;
  /* var y2 = this.targets_y[this.i] */;
  /* y2 = this.targets_y[this.i] */;
  ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "targets_y");
  array_t* _fieldacc_8 = (*_this)._enc__field_targets_y;
  ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "i");
  int64_t _fieldacc_9 = (*_this)._enc__field_i;
  int64_t _access_10 = array_get(_fieldacc_8, _fieldacc_9).i;
  int64_t _y2_11 = _access_10;
  /* var xdiff = x1 - x2 */;
  /* xdiff = x1 - x2 */;
  int64_t _binop_12 = (({ _x1_1;}) - ({ _x2_7;}));
  int64_t _xdiff_13 = _binop_12;
  /* var ydiff = y1 - y2 */;
  /* ydiff = y1 - y2 */;
  int64_t _binop_14 = (({ _y1_3;}) - ({ _y2_11;}));
  int64_t _ydiff_15 = _binop_14;
  /* var lenSquare = xdiff * xdiff + ydiff * ydiff */;
  /* lenSquare = xdiff * xdiff + ydiff * ydiff */;
  int64_t _binop_18 = (({int64_t _binop_16 = (({ _xdiff_13;}) * ({ _xdiff_13;})); _binop_16;}) + ({int64_t _binop_17 = (({ _ydiff_15;}) * ({ _ydiff_15;})); _binop_17;}));
  int64_t _lenSquare_19 = _binop_18;
  /* var invlen = invSqrt(lenSquare) */;
  /* invlen = invSqrt(lenSquare) */;
  ENC_DTRACE2(FUNCTION_CALL, (uintptr_t)*_ctx, "Ped_util.Global_funs.invSqrt");
  pony_type_t* _tmp_20[] = {};
  double _fun_call_21 = _enc__global_fun__encore_libs_master_Ped_util_Global_funsinvSqrt(_ctx, NULL, _lenSquare_19);
  double _invlen_22 = _fun_call_21;
  /* if lenSquare < this.targets_size[this.i] * this.targets_size[this.i] then
  this.i = this.i + 1 */;
  void* _ite_23;
  if (({int64_t _binop_31 = (({ _lenSquare_19;}) < ({int64_t _binop_30 = (({ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "targets_size");
                                                                            array_t* _fieldacc_24 = (*_this)._enc__field_targets_size;
                                                                            ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "i");
                                                                            int64_t _fieldacc_25 = (*_this)._enc__field_i;
                                                                            int64_t _access_26 = array_get(_fieldacc_24, _fieldacc_25).i; _access_26;}) * ({ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "targets_size");
                                                                                                                                                            array_t* _fieldacc_27 = (*_this)._enc__field_targets_size;
                                                                                                                                                            ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "i");
                                                                                                                                                            int64_t _fieldacc_28 = (*_this)._enc__field_i;
                                                                                                                                                            int64_t _access_29 = array_get(_fieldacc_27, _fieldacc_28).i; _access_29;})); _binop_30;})); _binop_31;}))
  {
    /* this.i = this.i + 1 */;
    int64_t _binop_34 = (({ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "i");
                           int64_t _fieldacc_32 = (*_this)._enc__field_i; _fieldacc_32;}) + ({int64_t _literal_33 = 1; _literal_33;}));
    (*({ENC_DTRACE3(FIELD_WRITE, (uintptr_t)*_ctx, (uintptr_t)_this, "i"); _this;}))._enc__field_i = _binop_34;
    _ite_23 = ((void*) UNIT);
  }
  else
  {
    UNIT;
    _ite_23 = ((void*) UNIT);
  };
  /* if |this.targets_size| == this.i then
  this.i = 0 */;
  void* _ite_35;
  if (({int64_t _binop_39 = (({ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "targets_size");
                               array_t* _fieldacc_36 = (*_this)._enc__field_targets_size;
                               int64_t _size_37 = array_size(_fieldacc_36); _size_37;}) == ({ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "i");
                                                                                             int64_t _fieldacc_38 = (*_this)._enc__field_i; _fieldacc_38;})); _binop_39;}))
  {
    /* this.i = 0 */;
    int64_t _literal_40 = 0;
    (*({ENC_DTRACE3(FIELD_WRITE, (uintptr_t)*_ctx, (uintptr_t)_this, "i"); _this;}))._enc__field_i = _literal_40;
    _ite_35 = ((void*) UNIT);
  }
  else
  {
    UNIT;
    _ite_35 = ((void*) UNIT);
  };
  /* x2 = this.targets_x[this.i] */;
  ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "targets_x");
  array_t* _fieldacc_41 = (*_this)._enc__field_targets_x;
  ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "i");
  int64_t _fieldacc_42 = (*_this)._enc__field_i;
  int64_t _access_43 = array_get(_fieldacc_41, _fieldacc_42).i;
  _x2_7 = _access_43;
  /* y2 = this.targets_y[this.i] */;
  ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "targets_y");
  array_t* _fieldacc_44 = (*_this)._enc__field_targets_y;
  ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "i");
  int64_t _fieldacc_45 = (*_this)._enc__field_i;
  int64_t _access_46 = array_get(_fieldacc_44, _fieldacc_45).i;
  _y2_11 = _access_46;
  /* xdiff = x1 - x2 */;
  int64_t _binop_47 = (({ _x1_1;}) - ({ _x2_7;}));
  _xdiff_13 = _binop_47;
  /* ydiff = y1 - y2 */;
  int64_t _binop_48 = (({ _y1_3;}) - ({ _y2_11;}));
  _ydiff_15 = _binop_48;
  /* lenSquare = xdiff * xdiff + ydiff * ydiff */;
  int64_t _binop_51 = (({int64_t _binop_49 = (({ _xdiff_13;}) * ({ _xdiff_13;})); _binop_49;}) + ({int64_t _binop_50 = (({ _ydiff_15;}) * ({ _ydiff_15;})); _binop_50;}));
  _lenSquare_19 = _binop_51;
  /* invlen = invSqrt(lenSquare) */;
  ENC_DTRACE2(FUNCTION_CALL, (uintptr_t)*_ctx, "Ped_util.Global_funs.invSqrt");
  pony_type_t* _tmp_52[] = {};
  double _fun_call_53 = _enc__global_fun__encore_libs_master_Ped_util_Global_funsinvSqrt(_ctx, NULL, _lenSquare_19);
  _invlen_22 = _fun_call_53;
  /* let xoff = xdiff * invlen
    yoff = ydiff * invlen
    desired_x = x1 + round(xoff * - 1)
    desired_y = y1 + round(yoff * - 1)
in
  {val dx = desired_x - x1;
   val dy = desired_y - y1;
   ret[0] = desired_x;
   ret[1] = desired_y;
   if dx == 0 or dy == 0 then
     {if dx == 0 and dy == 0 then
        print("dx and dy == 0, invariant VIOLATED {} {}\n", 
              (x2 + xdiff, y2 + ydiff), 
              (xoff, yoff));
      ret[2] = desired_x + dy;
      ret[3] = desired_y + dx;
      ret[4] = desired_x - dy;
      ret[5] = desired_y - dx}
   else
     {ret[2] = desired_x;
      ret[3] = y1;
      ret[4] = x1;
      ret[5] = desired_y}} */;
  /* xoff = xdiff * invlen */;
  double _binop_54 = (({ _xdiff_13;}) * ({ _invlen_22;}));
  double _xoff_55 = _binop_54;
  /* yoff = ydiff * invlen */;
  double _binop_56 = (({ _ydiff_15;}) * ({ _invlen_22;}));
  double _yoff_57 = _binop_56;
  /* desired_x = x1 + round(xoff * - 1) */;
  int64_t _binop_63 = (({ _x1_1;}) + ({double _binop_60 = (({ _xoff_55;}) * ({int64_t _literal_58 = 1;
                                                                              int64_t _unary_59 = (- _literal_58); _unary_59;}));
                                       ENC_DTRACE2(FUNCTION_CALL, (uintptr_t)*_ctx, "Ped_util.Global_funs.round");
                                       pony_type_t* _tmp_61[] = {};
                                       int64_t _fun_call_62 = _enc__global_fun__encore_libs_master_Ped_util_Global_funsround(_ctx, NULL, _binop_60); _fun_call_62;}));
  int64_t _desired_x_64 = _binop_63;
  /* desired_y = y1 + round(yoff * - 1) */;
  int64_t _binop_70 = (({ _y1_3;}) + ({double _binop_67 = (({ _yoff_57;}) * ({int64_t _literal_65 = 1;
                                                                              int64_t _unary_66 = (- _literal_65); _unary_66;}));
                                       ENC_DTRACE2(FUNCTION_CALL, (uintptr_t)*_ctx, "Ped_util.Global_funs.round");
                                       pony_type_t* _tmp_68[] = {};
                                       int64_t _fun_call_69 = _enc__global_fun__encore_libs_master_Ped_util_Global_funsround(_ctx, NULL, _binop_67); _fun_call_69;}));
  int64_t _desired_y_71 = _binop_70;
  /* val dx = desired_x - x1 */;
  /* dx = desired_x - x1 */;
  int64_t _binop_72 = (({ _desired_x_64;}) - ({ _x1_1;}));
  int64_t _dx_73 = _binop_72;
  /* val dy = desired_y - y1 */;
  /* dy = desired_y - y1 */;
  int64_t _binop_74 = (({ _desired_y_71;}) - ({ _y1_3;}));
  int64_t _dy_75 = _binop_74;
  /* ret[0] = desired_x */;
  int64_t _literal_76 = 0;
  array_set(_enc__arg_ret, _literal_76, ((encore_arg_t) {.i = _desired_x_64}));
  /* ret[1] = desired_y */;
  int64_t _literal_77 = 1;
  array_set(_enc__arg_ret, _literal_77, ((encore_arg_t) {.i = _desired_y_71}));
  /* if dx == 0 or dy == 0 then
  {if dx == 0 and dy == 0 then
     print("dx and dy == 0, invariant VIOLATED {} {}\n", 
           (x2 + xdiff, y2 + ydiff), 
           (xoff, yoff));
   ret[2] = desired_x + dy;
   ret[3] = desired_y + dx;
   ret[4] = desired_x - dy;
   ret[5] = desired_y - dx}
else
  {ret[2] = desired_x;
   ret[3] = y1;
   ret[4] = x1;
   ret[5] = desired_y} */;
  void* _ite_78;
  if (({int64_t _binop_83 = (({int64_t _binop_80 = (({ _dx_73;}) == ({int64_t _literal_79 = 0; _literal_79;})); _binop_80;}) || ({int64_t _binop_82 = (({ _dy_75;}) == ({int64_t _literal_81 = 0; _literal_81;})); _binop_82;})); _binop_83;}))
  {
    /* if dx == 0 and dy == 0 then
  print("dx and dy == 0, invariant VIOLATED {} {}\n", 
        (x2 + xdiff, y2 + ydiff), 
        (xoff, yoff)) */;
    void* _ite_84;
    if (({int64_t _binop_89 = (({int64_t _binop_86 = (({ _dx_73;}) == ({int64_t _literal_85 = 0; _literal_85;})); _binop_86;}) && ({int64_t _binop_88 = (({ _dy_75;}) == ({int64_t _literal_87 = 0; _literal_87;})); _binop_88;})); _binop_89;}))
    {
      tuple_t* _tuple_90 = tuple_mk(_ctx, 2);
      tuple_set_type(_tuple_90, 0, ENCORE_PRIMITIVE);
      tuple_set_type(_tuple_90, 1, ENCORE_PRIMITIVE);
      int64_t _binop_91 = (({ _x2_7;}) + ({ _xdiff_13;}));
      int64_t _binop_92 = (({ _y2_11;}) + ({ _ydiff_15;}));
      tuple_set(_tuple_90, 0, ((encore_arg_t) {.i = _binop_91}));
      tuple_set(_tuple_90, 1, ((encore_arg_t) {.i = _binop_92}));
      tuple_t* _tuple_93 = tuple_mk(_ctx, 2);
      tuple_set_type(_tuple_93, 0, ENCORE_PRIMITIVE);
      tuple_set_type(_tuple_93, 1, ENCORE_PRIMITIVE);
      tuple_set(_tuple_93, 0, ((encore_arg_t) {.d = _xoff_55}));
      tuple_set(_tuple_93, 1, ((encore_arg_t) {.d = _yoff_57}));
      fprintf(stdout, "dx and dy == 0, invariant VIOLATED (%lli, %lli) (%f, %f)\n", tuple_get(_tuple_90, 0).i, tuple_get(_tuple_90, 1).i, tuple_get(_tuple_93, 0).d, tuple_get(_tuple_93, 1).d);
      _ite_84 = ((void*) UNIT);
    }
    else
    {
      UNIT;
      _ite_84 = ((void*) UNIT);
    };
    /* ret[2] = desired_x + dy */;
    int64_t _binop_94 = (({ _desired_x_64;}) + ({ _dy_75;}));
    int64_t _literal_95 = 2;
    array_set(_enc__arg_ret, _literal_95, ((encore_arg_t) {.i = _binop_94}));
    /* ret[3] = desired_y + dx */;
    int64_t _binop_96 = (({ _desired_y_71;}) + ({ _dx_73;}));
    int64_t _literal_97 = 3;
    array_set(_enc__arg_ret, _literal_97, ((encore_arg_t) {.i = _binop_96}));
    /* ret[4] = desired_x - dy */;
    int64_t _binop_98 = (({ _desired_x_64;}) - ({ _dy_75;}));
    int64_t _literal_99 = 4;
    array_set(_enc__arg_ret, _literal_99, ((encore_arg_t) {.i = _binop_98}));
    /* ret[5] = desired_y - dx */;
    int64_t _binop_100 = (({ _desired_y_71;}) - ({ _dx_73;}));
    int64_t _literal_101 = 5;
    array_set(_enc__arg_ret, _literal_101, ((encore_arg_t) {.i = _binop_100}));
    _ite_78 = ((void*) UNIT);
  }
  else
  {
    /* ret[2] = desired_x */;
    int64_t _literal_102 = 2;
    array_set(_enc__arg_ret, _literal_102, ((encore_arg_t) {.i = _desired_x_64}));
    /* ret[3] = y1 */;
    int64_t _literal_103 = 3;
    array_set(_enc__arg_ret, _literal_103, ((encore_arg_t) {.i = _y1_3}));
    /* ret[4] = x1 */;
    int64_t _literal_104 = 4;
    array_set(_enc__arg_ret, _literal_104, ((encore_arg_t) {.i = _x1_1}));
    /* ret[5] = desired_y */;
    int64_t _literal_105 = 5;
    array_set(_enc__arg_ret, _literal_105, ((encore_arg_t) {.i = _desired_y_71}));
    _ite_78 = ((void*) UNIT);
  };
  /* () */;
  UNIT;
  ENC_DTRACE3(METHOD_EXIT, (uintptr_t)*_ctx, (uintptr_t)_this, "next");
  return UNIT;
}


void* _enc__method__encore_libs_master_Ped_util_Agent_passive_Agent_move(pony_ctx_t** _ctx, _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t* _this, pony_type_t** runtimeType, tuple_t* _enc__arg_in_pos)
{
  ENC_DTRACE3(METHOD_ENTRY, (uintptr_t)*_ctx, (uintptr_t)_this, "move");
  /* match in_pos with
  (x, y) => {this.x = x;
             this.y = y}
 */;
  void* _match_0;
  int64_t _x_1;
  int64_t _y_2;
  if ((({int64_t _tupleCheck_3;
         _tupleCheck_3 = 1;
         int64_t _tupleAccess_4 = tuple_get(_enc__arg_in_pos, 0).i;
         int64_t _varBinding_5;
         _x_1 = _tupleAccess_4;
         _varBinding_5 = 1;
         _tupleCheck_3 = (_tupleCheck_3 && _varBinding_5);
         int64_t _tupleAccess_6 = tuple_get(_enc__arg_in_pos, 1).i;
         int64_t _varBinding_7;
         _y_2 = _tupleAccess_6;
         _varBinding_7 = 1;
         _tupleCheck_3 = (_tupleCheck_3 && _varBinding_7); _tupleCheck_3;}) && ({int64_t _literal_8 = 1/*True*/; _literal_8;})))
  {
    _match_0 = ((void*) ({/* this.x = x */;
                          (*({ENC_DTRACE3(FIELD_WRITE, (uintptr_t)*_ctx, (uintptr_t)_this, "x"); _this;}))._enc__field_x = _x_1;
                          /* this.y = y */;
                          (*({ENC_DTRACE3(FIELD_WRITE, (uintptr_t)*_ctx, (uintptr_t)_this, "y"); _this;}))._enc__field_y = _y_2; UNIT;}));
  }
  else
  {
    fprintf(stderr, "*** Runtime error: No matching clause was found ***\n");
    exit(1);
  };
  ENC_DTRACE3(METHOD_EXIT, (uintptr_t)*_ctx, (uintptr_t)_this, "move");
  return UNIT;
}


void* _enc__method__encore_libs_master_Ped_util_Agent_passive_Agent_move_int(pony_ctx_t** _ctx, _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t* _this, pony_type_t** runtimeType, int64_t _enc__arg_x, int64_t _enc__arg_y)
{
  ENC_DTRACE3(METHOD_ENTRY, (uintptr_t)*_ctx, (uintptr_t)_this, "move_int");
  /* this.x = x */;
  (*({ENC_DTRACE3(FIELD_WRITE, (uintptr_t)*_ctx, (uintptr_t)_this, "x"); _this;}))._enc__field_x = _enc__arg_x;
  /* this.y = y */;
  (*({ENC_DTRACE3(FIELD_WRITE, (uintptr_t)*_ctx, (uintptr_t)_this, "y"); _this;}))._enc__field_y = _enc__arg_y;
  ENC_DTRACE3(METHOD_EXIT, (uintptr_t)*_ctx, (uintptr_t)_this, "move_int");
  return UNIT;
}


tuple_t* _enc__method__encore_libs_master_Ped_util_Agent_passive_Agent_pos(pony_ctx_t** _ctx, _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t* _this, pony_type_t** runtimeType)
{
  ENC_DTRACE3(METHOD_ENTRY, (uintptr_t)*_ctx, (uintptr_t)_this, "pos");
  tuple_t* _tuple_0 = tuple_mk(_ctx, 2);
  tuple_set_type(_tuple_0, 0, ENCORE_PRIMITIVE);
  tuple_set_type(_tuple_0, 1, ENCORE_PRIMITIVE);
  ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "x");
  int64_t _fieldacc_1 = (*_this)._enc__field_x;
  ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "y");
  int64_t _fieldacc_2 = (*_this)._enc__field_y;
  tuple_set(_tuple_0, 0, ((encore_arg_t) {.i = _fieldacc_1}));
  tuple_set(_tuple_0, 1, ((encore_arg_t) {.i = _fieldacc_2}));
  ENC_DTRACE3(METHOD_EXIT, (uintptr_t)*_ctx, (uintptr_t)_this, "pos");
  return ((tuple_t*) _tuple_0);
}


pony_type_t _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_type = {.id=_ENC__ID__encore_libs_master_Ped_util_Agent_passive_Agent, .size=sizeof(_enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t), .trace=_enc__trace__encore_libs_master_Ped_util_Agent_passive_Agent, .vtable=trait_method_selector};
