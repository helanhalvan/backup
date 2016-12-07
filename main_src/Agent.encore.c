#include "header.h"


static void* trait_method_selector(int id)
{
  switch (id)
  {
    case _ENC__MSG__encore_libs_master_Collections_HashCode_HashCode_hash_adress:
    {
      return _enc__method__encore_libs_master_Ped_util_Agent_passive_Agent_hash_adress;
      break;
    }
    case _ENC__MSG__encore_libs_master_Collections_HashCode_HashCode_get_hash:
    {
      return _enc__method__encore_libs_master_Ped_util_Agent_passive_Agent_get_hash;
      break;
    }
    case _ENC__MSG__encore_libs_master_Collections_HashCode_HashCode_equals:
    {
      return _enc__method__encore_libs_master_Ped_util_Agent_passive_Agent_equals;
      break;
    }
    default:
    {
      printf("error, got invalid id: %d", id);
    }
  };
  return NULL;
}


void _enc__type_init__encore_libs_master_Ped_util_Agent_passive_Agent(_enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t* this, ... )
{
  va_list params;
  va_start(params, this);
  va_end(params);
}


void _enc__trace__encore_libs_master_Ped_util_Agent_passive_Agent(pony_ctx_t* _ctx_arg, void* p)
{
  pony_ctx_t** _ctx = (&(_ctx_arg));
  _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t* _this = p;
  uint64_t _enc__field_hash_code = _this->_enc__field_hash_code;
  /* Not tracing field '_enc__field_hash_code' */;
  tuple_t* _enc__field_pos = _this->_enc__field_pos;
  encore_trace_object((*_ctx), _enc__field_pos, tuple_trace);
  array_t* _enc__field_targets = _this->_enc__field_targets;
  encore_trace_object((*_ctx), _enc__field_targets, array_trace);
  array_t* _enc__field_targets_size = _this->_enc__field_targets_size;
  encore_trace_object((*_ctx), _enc__field_targets_size, array_trace);
  int64_t _enc__field_i = _this->_enc__field_i;
  /* Not tracing field '_enc__field_i' */;
  int64_t _enc__field_ttl = _this->_enc__field_ttl;
  /* Not tracing field '_enc__field_ttl' */;
}


_enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t* _enc__constructor__encore_libs_master_Ped_util_Agent_passive_Agent(pony_ctx_t** _ctx)
{
  _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t* this = ((_enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t*) encore_alloc((*_ctx), sizeof(_enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t)));
  this->_enc__self_type = (&(_enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_type));
  return this;
}


void* _enc__method__encore_libs_master_Ped_util_Agent_passive_Agent__init(pony_ctx_t** _ctx, _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t* _this, tuple_t* _enc__arg_in_pos, array_t* _enc__arg_list, array_t* _enc__arg_targets_size, int64_t _enc__arg_in_id, int64_t _enc__arg_ttl)
{
  /* this.pos = in_pos */;
  (*({ _this;}))._enc__field_pos = _enc__arg_in_pos;
  /* this.i = 0 */;
  int64_t _literal_0 = 0;
  (*({ _this;}))._enc__field_i = _literal_0;
  /* this.targets = list */;
  (*({ _this;}))._enc__field_targets = _enc__arg_list;
  /* this.targets_size = targets_size */;
  (*({ _this;}))._enc__field_targets_size = _enc__arg_targets_size;
  /* this.hash_code = in_id */;
  (*({ _this;}))._enc__field_hash_code = ((uint64_t) _enc__arg_in_id);
  /* this.ttl = ttl */;
  (*({ _this;}))._enc__field_ttl = _enc__arg_ttl;
  return UNIT;
}


array_t* _enc__method__encore_libs_master_Ped_util_Agent_passive_Agent_next(pony_ctx_t** _ctx, _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t* _this)
{
  /* this.ttl = this.ttl - 1 */;
  int64_t _binop_2 = (({int64_t _fieldacc_0 = (*_this)._enc__field_ttl; _fieldacc_0;}) - ({int64_t _literal_1 = 1; _literal_1;}));
  (*({ _this;}))._enc__field_ttl = _binop_2;
  /* if |this.targets| == this.i then
  this.i = 0 */;
  void* _ite_3;
  if (({int64_t _binop_7 = (({array_t* _fieldacc_4 = (*_this)._enc__field_targets;
                              int64_t _size_5 = array_size(_fieldacc_4); _size_5;}) == ({int64_t _fieldacc_6 = (*_this)._enc__field_i; _fieldacc_6;})); _binop_7;}))
  {
    int64_t _literal_8 = 0;
    (*({ _this;}))._enc__field_i = _literal_8;
    _ite_3 = ((void*) UNIT);
  }
  else
  {
    UNIT;
    _ite_3 = ((void*) UNIT);
  };
  /* match (this.pos, this.targets[this.i]) with
  ((x1, y1), (x2, y2)) when distance((x1, y1), 
                                     (x2, y2)) < this.targets_size[this.i] => {this.i = this.i + 1;
                                                                               ()}
  _ => ()
 */;
  tuple_t* _tuple_10 = tuple_mk(_ctx, 2);
  tuple_set_type(_tuple_10, 0, (&(tuple_type)));
  tuple_set_type(_tuple_10, 1, (&(tuple_type)));
  tuple_t* _fieldacc_11 = (*_this)._enc__field_pos;
  array_t* _fieldacc_12 = (*_this)._enc__field_targets;
  int64_t _fieldacc_13 = (*_this)._enc__field_i;
  tuple_t* _access_14 = array_get(_fieldacc_12, _fieldacc_13).p;
  tuple_set(_tuple_10, 0, ((encore_arg_t) {.p = _fieldacc_11}));
  tuple_set(_tuple_10, 1, ((encore_arg_t) {.p = _access_14}));
  void* _match_9;
  int64_t _x1_15;
  int64_t _y1_16;
  int64_t _x2_17;
  int64_t _y2_18;
  if ((({int64_t _tupleCheck_25;
         _tupleCheck_25 = 1;
         tuple_t* _tupleAccess_26 = tuple_get(_tuple_10, 0).p;
         int64_t _tupleCheck_27;
         _tupleCheck_27 = 1;
         int64_t _tupleAccess_28 = tuple_get(_tupleAccess_26, 0).i;
         int64_t _varBinding_29;
         _x1_15 = _tupleAccess_28;
         _varBinding_29 = 1;
         _tupleCheck_27 = (_tupleCheck_27 && _varBinding_29);
         int64_t _tupleAccess_30 = tuple_get(_tupleAccess_26, 1).i;
         int64_t _varBinding_31;
         _y1_16 = _tupleAccess_30;
         _varBinding_31 = 1;
         _tupleCheck_27 = (_tupleCheck_27 && _varBinding_31);
         _tupleCheck_25 = (_tupleCheck_25 && _tupleCheck_27);
         tuple_t* _tupleAccess_32 = tuple_get(_tuple_10, 1).p;
         int64_t _tupleCheck_33;
         _tupleCheck_33 = 1;
         int64_t _tupleAccess_34 = tuple_get(_tupleAccess_32, 0).i;
         int64_t _varBinding_35;
         _x2_17 = _tupleAccess_34;
         _varBinding_35 = 1;
         _tupleCheck_33 = (_tupleCheck_33 && _varBinding_35);
         int64_t _tupleAccess_36 = tuple_get(_tupleAccess_32, 1).i;
         int64_t _varBinding_37;
         _y2_18 = _tupleAccess_36;
         _varBinding_37 = 1;
         _tupleCheck_33 = (_tupleCheck_33 && _varBinding_37);
         _tupleCheck_25 = (_tupleCheck_25 && _tupleCheck_33); _tupleCheck_25;}) && ({int64_t _binop_45 = (({tuple_t* _tuple_38 = tuple_mk(_ctx, 2);
                                                                                                            tuple_set_type(_tuple_38, 0, ENCORE_PRIMITIVE);
                                                                                                            tuple_set_type(_tuple_38, 1, ENCORE_PRIMITIVE);
                                                                                                            tuple_set(_tuple_38, 0, ((encore_arg_t) {.i = _x1_15}));
                                                                                                            tuple_set(_tuple_38, 1, ((encore_arg_t) {.i = _y1_16}));
                                                                                                            tuple_t* _tuple_39 = tuple_mk(_ctx, 2);
                                                                                                            tuple_set_type(_tuple_39, 0, ENCORE_PRIMITIVE);
                                                                                                            tuple_set_type(_tuple_39, 1, ENCORE_PRIMITIVE);
                                                                                                            tuple_set(_tuple_39, 0, ((encore_arg_t) {.i = _x2_17}));
                                                                                                            tuple_set(_tuple_39, 1, ((encore_arg_t) {.i = _y2_18}));
                                                                                                            pony_type_t* _tmp_40[] = {};
                                                                                                            int64_t _global_f_41 = _enc__global_fun__encore_libs_master_Ped_util_Global_funsdistance(_ctx, NULL, _tuple_38, _tuple_39); _global_f_41;}) < ({array_t* _fieldacc_42 = (*_this)._enc__field_targets_size;
                                                                                                                                                                                                                                                            int64_t _fieldacc_43 = (*_this)._enc__field_i;
                                                                                                                                                                                                                                                            int64_t _access_44 = array_get(_fieldacc_42, _fieldacc_43).i; _access_44;})); _binop_45;})))
  {
    _match_9 = ((void*) ({/* this.i = this.i + 1 */;
                          int64_t _binop_21 = (({int64_t _fieldacc_19 = (*_this)._enc__field_i; _fieldacc_19;}) + ({int64_t _literal_20 = 1; _literal_20;}));
                          (*({ _this;}))._enc__field_i = _binop_21;
                          /* () */;
                          UNIT; UNIT;}));
  }
  else
  {
    tuple_t* ___22;
    if ((({int64_t _varBinding_23;
           ___22 = _tuple_10;
           _varBinding_23 = 1; _varBinding_23;}) && ({int64_t _literal_24 = 1/*True*/; _literal_24;})))
    {
      _match_9 = ((void*) ({UNIT; UNIT;}));
    }
    else
    {
      printf("*** Runtime error: No matching clause was found ***\n");
      exit(1);
    };
  };
  /* if |this.targets| == this.i then
  this.i = 0 */;
  void* _ite_46;
  if (({int64_t _binop_50 = (({array_t* _fieldacc_47 = (*_this)._enc__field_targets;
                               int64_t _size_48 = array_size(_fieldacc_47); _size_48;}) == ({int64_t _fieldacc_49 = (*_this)._enc__field_i; _fieldacc_49;})); _binop_50;}))
  {
    int64_t _literal_51 = 0;
    (*({ _this;}))._enc__field_i = _literal_51;
    _ite_46 = ((void*) UNIT);
  }
  else
  {
    UNIT;
    _ite_46 = ((void*) UNIT);
  };
  /* match (this.pos, this.targets[this.i]) with
  _ when this.ttl <= 0 => new [(int, int)](0)
  ((x1, y1), (x2, y2)) when x1 > x2 and y1 > y2 => [(x1 - 1, y1), 
                                                    (x1, y1 - 1)]
  ((x1, y1), (x2, y2)) when x1 < x2 and y1 < y2 => [(x1 + 1, y1), 
                                                    (x1, y1 + 1)]
  ((x1, y1), (x2, y2)) when x1 > x2 and y1 < y2 => [(x1 - 1, y1), 
                                                    (x1, y1 + 1)]
  ((x1, y1), (x2, y2)) when x1 < x2 and y1 > y2 => [(x1 + 1, y1), 
                                                    (x1, y1 - 1)]
  ((x1, y1), (x2, y2)) when x1 > x2 => [(x1 - 1, y1)]
  ((x1, y1), (x2, y2)) when y1 > y2 => [(x1, y1 - 1)]
  ((x1, y1), (x2, y2)) when x1 < x2 => [(x1 + 1, y1)]
  ((x1, y1), (x2, y2)) when y1 < y2 => [(x1, y1 + 1)]
  _ => {print("THIS SHOULD NEVER HAPPEN, |targets| = {} ", 
              |this.targets|);
        new [(int, int)](0)}
 */;
  tuple_t* _tuple_53 = tuple_mk(_ctx, 2);
  tuple_set_type(_tuple_53, 0, (&(tuple_type)));
  tuple_set_type(_tuple_53, 1, (&(tuple_type)));
  tuple_t* _fieldacc_54 = (*_this)._enc__field_pos;
  array_t* _fieldacc_55 = (*_this)._enc__field_targets;
  int64_t _fieldacc_56 = (*_this)._enc__field_i;
  tuple_t* _access_57 = array_get(_fieldacc_55, _fieldacc_56).p;
  tuple_set(_tuple_53, 0, ((encore_arg_t) {.p = _fieldacc_54}));
  tuple_set(_tuple_53, 1, ((encore_arg_t) {.p = _access_57}));
  array_t* _match_52;
  tuple_t* ___58;
  if ((({int64_t _varBinding_264;
         ___58 = _tuple_53;
         _varBinding_264 = 1; _varBinding_264;}) && ({int64_t _binop_267 = (({int64_t _fieldacc_265 = (*_this)._enc__field_ttl; _fieldacc_265;}) <= ({int64_t _literal_266 = 0; _literal_266;})); _binop_267;})))
  {
    _match_52 = ((array_t*) ({/* new [(int, int)](0) */;
                              int64_t _literal_60 = 0;
                              array_t* _array_59 = array_mk(_ctx, _literal_60, (&(tuple_type))); _array_59;}));
  }
  else
  {
    int64_t _x1_61;
    int64_t _y1_62;
    int64_t _x2_63;
    int64_t _y2_64;
    if ((({int64_t _tupleCheck_248;
           _tupleCheck_248 = 1;
           tuple_t* _tupleAccess_249 = tuple_get(_tuple_53, 0).p;
           int64_t _tupleCheck_250;
           _tupleCheck_250 = 1;
           int64_t _tupleAccess_251 = tuple_get(_tupleAccess_249, 0).i;
           int64_t _varBinding_252;
           _x1_61 = _tupleAccess_251;
           _varBinding_252 = 1;
           _tupleCheck_250 = (_tupleCheck_250 && _varBinding_252);
           int64_t _tupleAccess_253 = tuple_get(_tupleAccess_249, 1).i;
           int64_t _varBinding_254;
           _y1_62 = _tupleAccess_253;
           _varBinding_254 = 1;
           _tupleCheck_250 = (_tupleCheck_250 && _varBinding_254);
           _tupleCheck_248 = (_tupleCheck_248 && _tupleCheck_250);
           tuple_t* _tupleAccess_255 = tuple_get(_tuple_53, 1).p;
           int64_t _tupleCheck_256;
           _tupleCheck_256 = 1;
           int64_t _tupleAccess_257 = tuple_get(_tupleAccess_255, 0).i;
           int64_t _varBinding_258;
           _x2_63 = _tupleAccess_257;
           _varBinding_258 = 1;
           _tupleCheck_256 = (_tupleCheck_256 && _varBinding_258);
           int64_t _tupleAccess_259 = tuple_get(_tupleAccess_255, 1).i;
           int64_t _varBinding_260;
           _y2_64 = _tupleAccess_259;
           _varBinding_260 = 1;
           _tupleCheck_256 = (_tupleCheck_256 && _varBinding_260);
           _tupleCheck_248 = (_tupleCheck_248 && _tupleCheck_256); _tupleCheck_248;}) && ({int64_t _binop_263 = (({int64_t _binop_261 = (({ _x1_61;}) > ({ _x2_63;})); _binop_261;}) && ({int64_t _binop_262 = (({ _y1_62;}) > ({ _y2_64;})); _binop_262;})); _binop_263;})))
    {
      _match_52 = ((array_t*) ({/* [(x1 - 1, y1), (x1, y1 - 1)] */;
                                array_t* _array_65 = array_mk(_ctx, 2, (&(tuple_type)));
                                tuple_t* _tuple_66 = tuple_mk(_ctx, 2);
                                tuple_set_type(_tuple_66, 0, ENCORE_PRIMITIVE);
                                tuple_set_type(_tuple_66, 1, ENCORE_PRIMITIVE);
                                int64_t _binop_68 = (({ _x1_61;}) - ({int64_t _literal_67 = 1; _literal_67;}));
                                tuple_set(_tuple_66, 0, ((encore_arg_t) {.i = _binop_68}));
                                tuple_set(_tuple_66, 1, ((encore_arg_t) {.i = _y1_62}));
                                tuple_t* _tuple_69 = tuple_mk(_ctx, 2);
                                tuple_set_type(_tuple_69, 0, ENCORE_PRIMITIVE);
                                tuple_set_type(_tuple_69, 1, ENCORE_PRIMITIVE);
                                int64_t _binop_71 = (({ _y1_62;}) - ({int64_t _literal_70 = 1; _literal_70;}));
                                tuple_set(_tuple_69, 0, ((encore_arg_t) {.i = _x1_61}));
                                tuple_set(_tuple_69, 1, ((encore_arg_t) {.i = _binop_71}));
                                array_set(_array_65, 0, ((encore_arg_t) {.p = _tuple_66}));
                                array_set(_array_65, 1, ((encore_arg_t) {.p = _tuple_69})); _array_65;}));
    }
    else
    {
      int64_t _x1_72;
      int64_t _y1_73;
      int64_t _x2_74;
      int64_t _y2_75;
      if ((({int64_t _tupleCheck_232;
             _tupleCheck_232 = 1;
             tuple_t* _tupleAccess_233 = tuple_get(_tuple_53, 0).p;
             int64_t _tupleCheck_234;
             _tupleCheck_234 = 1;
             int64_t _tupleAccess_235 = tuple_get(_tupleAccess_233, 0).i;
             int64_t _varBinding_236;
             _x1_72 = _tupleAccess_235;
             _varBinding_236 = 1;
             _tupleCheck_234 = (_tupleCheck_234 && _varBinding_236);
             int64_t _tupleAccess_237 = tuple_get(_tupleAccess_233, 1).i;
             int64_t _varBinding_238;
             _y1_73 = _tupleAccess_237;
             _varBinding_238 = 1;
             _tupleCheck_234 = (_tupleCheck_234 && _varBinding_238);
             _tupleCheck_232 = (_tupleCheck_232 && _tupleCheck_234);
             tuple_t* _tupleAccess_239 = tuple_get(_tuple_53, 1).p;
             int64_t _tupleCheck_240;
             _tupleCheck_240 = 1;
             int64_t _tupleAccess_241 = tuple_get(_tupleAccess_239, 0).i;
             int64_t _varBinding_242;
             _x2_74 = _tupleAccess_241;
             _varBinding_242 = 1;
             _tupleCheck_240 = (_tupleCheck_240 && _varBinding_242);
             int64_t _tupleAccess_243 = tuple_get(_tupleAccess_239, 1).i;
             int64_t _varBinding_244;
             _y2_75 = _tupleAccess_243;
             _varBinding_244 = 1;
             _tupleCheck_240 = (_tupleCheck_240 && _varBinding_244);
             _tupleCheck_232 = (_tupleCheck_232 && _tupleCheck_240); _tupleCheck_232;}) && ({int64_t _binop_247 = (({int64_t _binop_245 = (({ _x1_72;}) < ({ _x2_74;})); _binop_245;}) && ({int64_t _binop_246 = (({ _y1_73;}) < ({ _y2_75;})); _binop_246;})); _binop_247;})))
      {
        _match_52 = ((array_t*) ({/* [(x1 + 1, y1), (x1, y1 + 1)] */;
                                  array_t* _array_76 = array_mk(_ctx, 2, (&(tuple_type)));
                                  tuple_t* _tuple_77 = tuple_mk(_ctx, 2);
                                  tuple_set_type(_tuple_77, 0, ENCORE_PRIMITIVE);
                                  tuple_set_type(_tuple_77, 1, ENCORE_PRIMITIVE);
                                  int64_t _binop_79 = (({ _x1_72;}) + ({int64_t _literal_78 = 1; _literal_78;}));
                                  tuple_set(_tuple_77, 0, ((encore_arg_t) {.i = _binop_79}));
                                  tuple_set(_tuple_77, 1, ((encore_arg_t) {.i = _y1_73}));
                                  tuple_t* _tuple_80 = tuple_mk(_ctx, 2);
                                  tuple_set_type(_tuple_80, 0, ENCORE_PRIMITIVE);
                                  tuple_set_type(_tuple_80, 1, ENCORE_PRIMITIVE);
                                  int64_t _binop_82 = (({ _y1_73;}) + ({int64_t _literal_81 = 1; _literal_81;}));
                                  tuple_set(_tuple_80, 0, ((encore_arg_t) {.i = _x1_72}));
                                  tuple_set(_tuple_80, 1, ((encore_arg_t) {.i = _binop_82}));
                                  array_set(_array_76, 0, ((encore_arg_t) {.p = _tuple_77}));
                                  array_set(_array_76, 1, ((encore_arg_t) {.p = _tuple_80})); _array_76;}));
      }
      else
      {
        int64_t _x1_83;
        int64_t _y1_84;
        int64_t _x2_85;
        int64_t _y2_86;
        if ((({int64_t _tupleCheck_216;
               _tupleCheck_216 = 1;
               tuple_t* _tupleAccess_217 = tuple_get(_tuple_53, 0).p;
               int64_t _tupleCheck_218;
               _tupleCheck_218 = 1;
               int64_t _tupleAccess_219 = tuple_get(_tupleAccess_217, 0).i;
               int64_t _varBinding_220;
               _x1_83 = _tupleAccess_219;
               _varBinding_220 = 1;
               _tupleCheck_218 = (_tupleCheck_218 && _varBinding_220);
               int64_t _tupleAccess_221 = tuple_get(_tupleAccess_217, 1).i;
               int64_t _varBinding_222;
               _y1_84 = _tupleAccess_221;
               _varBinding_222 = 1;
               _tupleCheck_218 = (_tupleCheck_218 && _varBinding_222);
               _tupleCheck_216 = (_tupleCheck_216 && _tupleCheck_218);
               tuple_t* _tupleAccess_223 = tuple_get(_tuple_53, 1).p;
               int64_t _tupleCheck_224;
               _tupleCheck_224 = 1;
               int64_t _tupleAccess_225 = tuple_get(_tupleAccess_223, 0).i;
               int64_t _varBinding_226;
               _x2_85 = _tupleAccess_225;
               _varBinding_226 = 1;
               _tupleCheck_224 = (_tupleCheck_224 && _varBinding_226);
               int64_t _tupleAccess_227 = tuple_get(_tupleAccess_223, 1).i;
               int64_t _varBinding_228;
               _y2_86 = _tupleAccess_227;
               _varBinding_228 = 1;
               _tupleCheck_224 = (_tupleCheck_224 && _varBinding_228);
               _tupleCheck_216 = (_tupleCheck_216 && _tupleCheck_224); _tupleCheck_216;}) && ({int64_t _binop_231 = (({int64_t _binop_229 = (({ _x1_83;}) > ({ _x2_85;})); _binop_229;}) && ({int64_t _binop_230 = (({ _y1_84;}) < ({ _y2_86;})); _binop_230;})); _binop_231;})))
        {
          _match_52 = ((array_t*) ({/* [(x1 - 1, y1), (x1, y1 + 1)] */;
                                    array_t* _array_87 = array_mk(_ctx, 2, (&(tuple_type)));
                                    tuple_t* _tuple_88 = tuple_mk(_ctx, 2);
                                    tuple_set_type(_tuple_88, 0, ENCORE_PRIMITIVE);
                                    tuple_set_type(_tuple_88, 1, ENCORE_PRIMITIVE);
                                    int64_t _binop_90 = (({ _x1_83;}) - ({int64_t _literal_89 = 1; _literal_89;}));
                                    tuple_set(_tuple_88, 0, ((encore_arg_t) {.i = _binop_90}));
                                    tuple_set(_tuple_88, 1, ((encore_arg_t) {.i = _y1_84}));
                                    tuple_t* _tuple_91 = tuple_mk(_ctx, 2);
                                    tuple_set_type(_tuple_91, 0, ENCORE_PRIMITIVE);
                                    tuple_set_type(_tuple_91, 1, ENCORE_PRIMITIVE);
                                    int64_t _binop_93 = (({ _y1_84;}) + ({int64_t _literal_92 = 1; _literal_92;}));
                                    tuple_set(_tuple_91, 0, ((encore_arg_t) {.i = _x1_83}));
                                    tuple_set(_tuple_91, 1, ((encore_arg_t) {.i = _binop_93}));
                                    array_set(_array_87, 0, ((encore_arg_t) {.p = _tuple_88}));
                                    array_set(_array_87, 1, ((encore_arg_t) {.p = _tuple_91})); _array_87;}));
        }
        else
        {
          int64_t _x1_94;
          int64_t _y1_95;
          int64_t _x2_96;
          int64_t _y2_97;
          if ((({int64_t _tupleCheck_200;
                 _tupleCheck_200 = 1;
                 tuple_t* _tupleAccess_201 = tuple_get(_tuple_53, 0).p;
                 int64_t _tupleCheck_202;
                 _tupleCheck_202 = 1;
                 int64_t _tupleAccess_203 = tuple_get(_tupleAccess_201, 0).i;
                 int64_t _varBinding_204;
                 _x1_94 = _tupleAccess_203;
                 _varBinding_204 = 1;
                 _tupleCheck_202 = (_tupleCheck_202 && _varBinding_204);
                 int64_t _tupleAccess_205 = tuple_get(_tupleAccess_201, 1).i;
                 int64_t _varBinding_206;
                 _y1_95 = _tupleAccess_205;
                 _varBinding_206 = 1;
                 _tupleCheck_202 = (_tupleCheck_202 && _varBinding_206);
                 _tupleCheck_200 = (_tupleCheck_200 && _tupleCheck_202);
                 tuple_t* _tupleAccess_207 = tuple_get(_tuple_53, 1).p;
                 int64_t _tupleCheck_208;
                 _tupleCheck_208 = 1;
                 int64_t _tupleAccess_209 = tuple_get(_tupleAccess_207, 0).i;
                 int64_t _varBinding_210;
                 _x2_96 = _tupleAccess_209;
                 _varBinding_210 = 1;
                 _tupleCheck_208 = (_tupleCheck_208 && _varBinding_210);
                 int64_t _tupleAccess_211 = tuple_get(_tupleAccess_207, 1).i;
                 int64_t _varBinding_212;
                 _y2_97 = _tupleAccess_211;
                 _varBinding_212 = 1;
                 _tupleCheck_208 = (_tupleCheck_208 && _varBinding_212);
                 _tupleCheck_200 = (_tupleCheck_200 && _tupleCheck_208); _tupleCheck_200;}) && ({int64_t _binop_215 = (({int64_t _binop_213 = (({ _x1_94;}) < ({ _x2_96;})); _binop_213;}) && ({int64_t _binop_214 = (({ _y1_95;}) > ({ _y2_97;})); _binop_214;})); _binop_215;})))
          {
            _match_52 = ((array_t*) ({/* [(x1 + 1, y1), (x1, y1 - 1)] */;
                                      array_t* _array_98 = array_mk(_ctx, 2, (&(tuple_type)));
                                      tuple_t* _tuple_99 = tuple_mk(_ctx, 2);
                                      tuple_set_type(_tuple_99, 0, ENCORE_PRIMITIVE);
                                      tuple_set_type(_tuple_99, 1, ENCORE_PRIMITIVE);
                                      int64_t _binop_101 = (({ _x1_94;}) + ({int64_t _literal_100 = 1; _literal_100;}));
                                      tuple_set(_tuple_99, 0, ((encore_arg_t) {.i = _binop_101}));
                                      tuple_set(_tuple_99, 1, ((encore_arg_t) {.i = _y1_95}));
                                      tuple_t* _tuple_102 = tuple_mk(_ctx, 2);
                                      tuple_set_type(_tuple_102, 0, ENCORE_PRIMITIVE);
                                      tuple_set_type(_tuple_102, 1, ENCORE_PRIMITIVE);
                                      int64_t _binop_104 = (({ _y1_95;}) - ({int64_t _literal_103 = 1; _literal_103;}));
                                      tuple_set(_tuple_102, 0, ((encore_arg_t) {.i = _x1_94}));
                                      tuple_set(_tuple_102, 1, ((encore_arg_t) {.i = _binop_104}));
                                      array_set(_array_98, 0, ((encore_arg_t) {.p = _tuple_99}));
                                      array_set(_array_98, 1, ((encore_arg_t) {.p = _tuple_102})); _array_98;}));
          }
          else
          {
            int64_t _x1_105;
            int64_t _y1_106;
            int64_t _x2_107;
            int64_t _y2_108;
            if ((({int64_t _tupleCheck_186;
                   _tupleCheck_186 = 1;
                   tuple_t* _tupleAccess_187 = tuple_get(_tuple_53, 0).p;
                   int64_t _tupleCheck_188;
                   _tupleCheck_188 = 1;
                   int64_t _tupleAccess_189 = tuple_get(_tupleAccess_187, 0).i;
                   int64_t _varBinding_190;
                   _x1_105 = _tupleAccess_189;
                   _varBinding_190 = 1;
                   _tupleCheck_188 = (_tupleCheck_188 && _varBinding_190);
                   int64_t _tupleAccess_191 = tuple_get(_tupleAccess_187, 1).i;
                   int64_t _varBinding_192;
                   _y1_106 = _tupleAccess_191;
                   _varBinding_192 = 1;
                   _tupleCheck_188 = (_tupleCheck_188 && _varBinding_192);
                   _tupleCheck_186 = (_tupleCheck_186 && _tupleCheck_188);
                   tuple_t* _tupleAccess_193 = tuple_get(_tuple_53, 1).p;
                   int64_t _tupleCheck_194;
                   _tupleCheck_194 = 1;
                   int64_t _tupleAccess_195 = tuple_get(_tupleAccess_193, 0).i;
                   int64_t _varBinding_196;
                   _x2_107 = _tupleAccess_195;
                   _varBinding_196 = 1;
                   _tupleCheck_194 = (_tupleCheck_194 && _varBinding_196);
                   int64_t _tupleAccess_197 = tuple_get(_tupleAccess_193, 1).i;
                   int64_t _varBinding_198;
                   _y2_108 = _tupleAccess_197;
                   _varBinding_198 = 1;
                   _tupleCheck_194 = (_tupleCheck_194 && _varBinding_198);
                   _tupleCheck_186 = (_tupleCheck_186 && _tupleCheck_194); _tupleCheck_186;}) && ({int64_t _binop_199 = (({ _x1_105;}) > ({ _x2_107;})); _binop_199;})))
            {
              _match_52 = ((array_t*) ({/* [(x1 - 1, y1)] */;
                                        array_t* _array_109 = array_mk(_ctx, 1, (&(tuple_type)));
                                        tuple_t* _tuple_110 = tuple_mk(_ctx, 2);
                                        tuple_set_type(_tuple_110, 0, ENCORE_PRIMITIVE);
                                        tuple_set_type(_tuple_110, 1, ENCORE_PRIMITIVE);
                                        int64_t _binop_112 = (({ _x1_105;}) - ({int64_t _literal_111 = 1; _literal_111;}));
                                        tuple_set(_tuple_110, 0, ((encore_arg_t) {.i = _binop_112}));
                                        tuple_set(_tuple_110, 1, ((encore_arg_t) {.i = _y1_106}));
                                        array_set(_array_109, 0, ((encore_arg_t) {.p = _tuple_110})); _array_109;}));
            }
            else
            {
              int64_t _x1_113;
              int64_t _y1_114;
              int64_t _x2_115;
              int64_t _y2_116;
              if ((({int64_t _tupleCheck_172;
                     _tupleCheck_172 = 1;
                     tuple_t* _tupleAccess_173 = tuple_get(_tuple_53, 0).p;
                     int64_t _tupleCheck_174;
                     _tupleCheck_174 = 1;
                     int64_t _tupleAccess_175 = tuple_get(_tupleAccess_173, 0).i;
                     int64_t _varBinding_176;
                     _x1_113 = _tupleAccess_175;
                     _varBinding_176 = 1;
                     _tupleCheck_174 = (_tupleCheck_174 && _varBinding_176);
                     int64_t _tupleAccess_177 = tuple_get(_tupleAccess_173, 1).i;
                     int64_t _varBinding_178;
                     _y1_114 = _tupleAccess_177;
                     _varBinding_178 = 1;
                     _tupleCheck_174 = (_tupleCheck_174 && _varBinding_178);
                     _tupleCheck_172 = (_tupleCheck_172 && _tupleCheck_174);
                     tuple_t* _tupleAccess_179 = tuple_get(_tuple_53, 1).p;
                     int64_t _tupleCheck_180;
                     _tupleCheck_180 = 1;
                     int64_t _tupleAccess_181 = tuple_get(_tupleAccess_179, 0).i;
                     int64_t _varBinding_182;
                     _x2_115 = _tupleAccess_181;
                     _varBinding_182 = 1;
                     _tupleCheck_180 = (_tupleCheck_180 && _varBinding_182);
                     int64_t _tupleAccess_183 = tuple_get(_tupleAccess_179, 1).i;
                     int64_t _varBinding_184;
                     _y2_116 = _tupleAccess_183;
                     _varBinding_184 = 1;
                     _tupleCheck_180 = (_tupleCheck_180 && _varBinding_184);
                     _tupleCheck_172 = (_tupleCheck_172 && _tupleCheck_180); _tupleCheck_172;}) && ({int64_t _binop_185 = (({ _y1_114;}) > ({ _y2_116;})); _binop_185;})))
              {
                _match_52 = ((array_t*) ({/* [(x1, y1 - 1)] */;
                                          array_t* _array_117 = array_mk(_ctx, 1, (&(tuple_type)));
                                          tuple_t* _tuple_118 = tuple_mk(_ctx, 2);
                                          tuple_set_type(_tuple_118, 0, ENCORE_PRIMITIVE);
                                          tuple_set_type(_tuple_118, 1, ENCORE_PRIMITIVE);
                                          int64_t _binop_120 = (({ _y1_114;}) - ({int64_t _literal_119 = 1; _literal_119;}));
                                          tuple_set(_tuple_118, 0, ((encore_arg_t) {.i = _x1_113}));
                                          tuple_set(_tuple_118, 1, ((encore_arg_t) {.i = _binop_120}));
                                          array_set(_array_117, 0, ((encore_arg_t) {.p = _tuple_118})); _array_117;}));
              }
              else
              {
                int64_t _x1_121;
                int64_t _y1_122;
                int64_t _x2_123;
                int64_t _y2_124;
                if ((({int64_t _tupleCheck_158;
                       _tupleCheck_158 = 1;
                       tuple_t* _tupleAccess_159 = tuple_get(_tuple_53, 0).p;
                       int64_t _tupleCheck_160;
                       _tupleCheck_160 = 1;
                       int64_t _tupleAccess_161 = tuple_get(_tupleAccess_159, 0).i;
                       int64_t _varBinding_162;
                       _x1_121 = _tupleAccess_161;
                       _varBinding_162 = 1;
                       _tupleCheck_160 = (_tupleCheck_160 && _varBinding_162);
                       int64_t _tupleAccess_163 = tuple_get(_tupleAccess_159, 1).i;
                       int64_t _varBinding_164;
                       _y1_122 = _tupleAccess_163;
                       _varBinding_164 = 1;
                       _tupleCheck_160 = (_tupleCheck_160 && _varBinding_164);
                       _tupleCheck_158 = (_tupleCheck_158 && _tupleCheck_160);
                       tuple_t* _tupleAccess_165 = tuple_get(_tuple_53, 1).p;
                       int64_t _tupleCheck_166;
                       _tupleCheck_166 = 1;
                       int64_t _tupleAccess_167 = tuple_get(_tupleAccess_165, 0).i;
                       int64_t _varBinding_168;
                       _x2_123 = _tupleAccess_167;
                       _varBinding_168 = 1;
                       _tupleCheck_166 = (_tupleCheck_166 && _varBinding_168);
                       int64_t _tupleAccess_169 = tuple_get(_tupleAccess_165, 1).i;
                       int64_t _varBinding_170;
                       _y2_124 = _tupleAccess_169;
                       _varBinding_170 = 1;
                       _tupleCheck_166 = (_tupleCheck_166 && _varBinding_170);
                       _tupleCheck_158 = (_tupleCheck_158 && _tupleCheck_166); _tupleCheck_158;}) && ({int64_t _binop_171 = (({ _x1_121;}) < ({ _x2_123;})); _binop_171;})))
                {
                  _match_52 = ((array_t*) ({/* [(x1 + 1, y1)] */;
                                            array_t* _array_125 = array_mk(_ctx, 1, (&(tuple_type)));
                                            tuple_t* _tuple_126 = tuple_mk(_ctx, 2);
                                            tuple_set_type(_tuple_126, 0, ENCORE_PRIMITIVE);
                                            tuple_set_type(_tuple_126, 1, ENCORE_PRIMITIVE);
                                            int64_t _binop_128 = (({ _x1_121;}) + ({int64_t _literal_127 = 1; _literal_127;}));
                                            tuple_set(_tuple_126, 0, ((encore_arg_t) {.i = _binop_128}));
                                            tuple_set(_tuple_126, 1, ((encore_arg_t) {.i = _y1_122}));
                                            array_set(_array_125, 0, ((encore_arg_t) {.p = _tuple_126})); _array_125;}));
                }
                else
                {
                  int64_t _x1_129;
                  int64_t _y1_130;
                  int64_t _x2_131;
                  int64_t _y2_132;
                  if ((({int64_t _tupleCheck_144;
                         _tupleCheck_144 = 1;
                         tuple_t* _tupleAccess_145 = tuple_get(_tuple_53, 0).p;
                         int64_t _tupleCheck_146;
                         _tupleCheck_146 = 1;
                         int64_t _tupleAccess_147 = tuple_get(_tupleAccess_145, 0).i;
                         int64_t _varBinding_148;
                         _x1_129 = _tupleAccess_147;
                         _varBinding_148 = 1;
                         _tupleCheck_146 = (_tupleCheck_146 && _varBinding_148);
                         int64_t _tupleAccess_149 = tuple_get(_tupleAccess_145, 1).i;
                         int64_t _varBinding_150;
                         _y1_130 = _tupleAccess_149;
                         _varBinding_150 = 1;
                         _tupleCheck_146 = (_tupleCheck_146 && _varBinding_150);
                         _tupleCheck_144 = (_tupleCheck_144 && _tupleCheck_146);
                         tuple_t* _tupleAccess_151 = tuple_get(_tuple_53, 1).p;
                         int64_t _tupleCheck_152;
                         _tupleCheck_152 = 1;
                         int64_t _tupleAccess_153 = tuple_get(_tupleAccess_151, 0).i;
                         int64_t _varBinding_154;
                         _x2_131 = _tupleAccess_153;
                         _varBinding_154 = 1;
                         _tupleCheck_152 = (_tupleCheck_152 && _varBinding_154);
                         int64_t _tupleAccess_155 = tuple_get(_tupleAccess_151, 1).i;
                         int64_t _varBinding_156;
                         _y2_132 = _tupleAccess_155;
                         _varBinding_156 = 1;
                         _tupleCheck_152 = (_tupleCheck_152 && _varBinding_156);
                         _tupleCheck_144 = (_tupleCheck_144 && _tupleCheck_152); _tupleCheck_144;}) && ({int64_t _binop_157 = (({ _y1_130;}) < ({ _y2_132;})); _binop_157;})))
                  {
                    _match_52 = ((array_t*) ({/* [(x1, y1 + 1)] */;
                                              array_t* _array_133 = array_mk(_ctx, 1, (&(tuple_type)));
                                              tuple_t* _tuple_134 = tuple_mk(_ctx, 2);
                                              tuple_set_type(_tuple_134, 0, ENCORE_PRIMITIVE);
                                              tuple_set_type(_tuple_134, 1, ENCORE_PRIMITIVE);
                                              int64_t _binop_136 = (({ _y1_130;}) + ({int64_t _literal_135 = 1; _literal_135;}));
                                              tuple_set(_tuple_134, 0, ((encore_arg_t) {.i = _x1_129}));
                                              tuple_set(_tuple_134, 1, ((encore_arg_t) {.i = _binop_136}));
                                              array_set(_array_133, 0, ((encore_arg_t) {.p = _tuple_134})); _array_133;}));
                  }
                  else
                  {
                    tuple_t* ___137;
                    if ((({int64_t _varBinding_142;
                           ___137 = _tuple_53;
                           _varBinding_142 = 1; _varBinding_142;}) && ({int64_t _literal_143 = 1/*True*/; _literal_143;})))
                    {
                      _match_52 = ((array_t*) ({/* print("THIS SHOULD NEVER HAPPEN, |targets| = {} ", |this.targets|) */;
                                                array_t* _fieldacc_138 = (*_this)._enc__field_targets;
                                                int64_t _size_139 = array_size(_fieldacc_138);
                                                printf("THIS SHOULD NEVER HAPPEN, |targets| = %lli ", _size_139);
                                                /* new [(int, int)](0) */;
                                                int64_t _literal_141 = 0;
                                                array_t* _array_140 = array_mk(_ctx, _literal_141, (&(tuple_type))); _array_140;}));
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
      };
    };
  };
  return ((array_t*) _match_52);
}


void* _enc__method__encore_libs_master_Ped_util_Agent_passive_Agent_move(pony_ctx_t** _ctx, _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t* _this, tuple_t* _enc__arg_in_pos)
{
  /* this.pos = in_pos */;
  (*({ _this;}))._enc__field_pos = _enc__arg_in_pos;
  return UNIT;
}


tuple_t* _enc__method__encore_libs_master_Ped_util_Agent_passive_Agent_pos(pony_ctx_t** _ctx, _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t* _this)
{
  tuple_t* _fieldacc_0 = (*_this)._enc__field_pos;
  return ((tuple_t*) _fieldacc_0);
}


_enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t* _enc__method__encore_libs_master_Ped_util_Agent_passive_Agent_copy(pony_ctx_t** _ctx, _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t* _this)
{
  /* let q = this.pos */;
  /* q = this.pos */;
  tuple_t* _fieldacc_0 = (*_this)._enc__field_pos;
  tuple_t* _q_1 = _fieldacc_0;
  /* let qq = new [(int, int)](|this.targets|) */;
  /* qq = new [(int, int)](|this.targets|) */;
  array_t* _fieldacc_3 = (*_this)._enc__field_targets;
  int64_t _size_4 = array_size(_fieldacc_3);
  array_t* _array_2 = array_mk(_ctx, _size_4, (&(tuple_type)));
  array_t* _qq_5 = _array_2;
  /* for i in [ 0 , |qq| - 1 by 1 ]
  qq[i] = this.targets[i] */;
  void* _for_6;
  /* Range not generated */;
  int64_t _literal_13 = 0;
  int64_t _binop_16 = (({int64_t _size_14 = array_size(_qq_5); _size_14;}) - ({int64_t _literal_15 = 1; _literal_15;}));
  int64_t _literal_17 = 1;
  int64_t _literal_18 = 1;
  int64_t _step_11 = (_literal_18 * _literal_17);
  range_assert_step(_step_11);
  int64_t _index_7;
  if ((_step_11 > 0))
  {
    _index_7 = _literal_13;
  }
  else
  {
    _index_7 = _binop_16;
  };
  while (((_index_7 >= _literal_13) && (_index_7 <= _binop_16)))
  {
    int64_t _i_8 = _index_7;
    /* qq[i] = this.targets[i] */;
    array_t* _fieldacc_19 = (*_this)._enc__field_targets;
    tuple_t* _access_20 = array_get(_fieldacc_19, _i_8).p;
    array_set(_qq_5, _i_8, ((encore_arg_t) {.p = _access_20}));
    _for_6 = UNIT;
    _index_7 = (_index_7 + _step_11);
  };
  /* let w = new Agent(q, 
                  qq, 
                  copy_ar(this.targets_size), 
                  this.hash_code, 
                  this.ttl) */;
  /* w = new Agent(q, 
          qq, 
          copy_ar(this.targets_size), 
          this.hash_code, 
          this.ttl) */;
  _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t* _new_21 = _enc__constructor__encore_libs_master_Ped_util_Agent_passive_Agent(_ctx);
  array_t* _fieldacc_22 = (*_this)._enc__field_targets_size;
  pony_type_t* _tmp_23[] = {};
  array_t* _global_f_24 = _enc__global_fun__encore_libs_master_Ped_util_Global_funscopy_ar(_ctx, NULL, _fieldacc_22);
  uint64_t _fieldacc_25 = (*_this)._enc__field_hash_code;
  int64_t _cast_26 = ((int64_t) _fieldacc_25);
  int64_t _fieldacc_27 = (*_this)._enc__field_ttl;
  _enc__type_init__encore_libs_master_Ped_util_Agent_passive_Agent(_new_21);
  _enc__method__encore_libs_master_Ped_util_Agent_passive_Agent__init(_ctx, _new_21, _q_1, _qq_5, _global_f_24, ((int64_t) _cast_26), _fieldacc_27);
  _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t* _w_28 = _new_21;
  /* w.i = this.i */;
  int64_t _fieldacc_29 = (*_this)._enc__field_i;
  (*({ _w_28;}))._enc__field_i = _fieldacc_29;
  /* w */;
  return ((_enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t*) _w_28);
}


uint64_t _enc__method__encore_libs_master_Ped_util_Agent_passive_Agent_hash_adress(pony_ctx_t** _ctx, _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t* _this)
{
  /* embed int // Hashing-key, can be any random bytes
            uint8_t k[16] = {
                0x00,0x01,0x02,0x03,0x04,0x05,0x06,0x07, // k0
                0x08,0x09,0x0a,0x0b,0x0c,0x0d,0x0e,0x0f  // k1
            };

            // Allocate 8 bytes on the stack for the hashcode
            uint8_t hash[8];

            // Retrieve adress of this object
            uintptr_t adress = (uintptr_t) _this;

            // Convert the adress to an uint8_t-array
            // WARNING: Assumes little endian!
            size_t ptr_size = sizeof(uintptr_t);
            uint8_t adress_arr[ptr_size];
            for(int i = 0; i < ptr_size; ++i) {
                adress_arr[i] = (uint8_t)((adress) >> i*8);
            }

            // Compute the hash value
            // WARNING: size_t may be larger than uint64_t !!!
            siphash(hash, adress_arr, (uint64_t) ptr_size, k);

            // Return the value to the caller
            U8TO64_LE(hash); end */;
  int64_t _embed_0 = ({// Hashing-key, can be any random bytes
            uint8_t k[16] = {
                0x00,0x01,0x02,0x03,0x04,0x05,0x06,0x07, // k0
                0x08,0x09,0x0a,0x0b,0x0c,0x0d,0x0e,0x0f  // k1
            };

            // Allocate 8 bytes on the stack for the hashcode
            uint8_t hash[8];

            // Retrieve adress of this object
            uintptr_t adress = (uintptr_t) _this;

            // Convert the adress to an uint8_t-array
            // WARNING: Assumes little endian!
            size_t ptr_size = sizeof(uintptr_t);
            uint8_t adress_arr[ptr_size];
            for(int i = 0; i < ptr_size; ++i) {
                adress_arr[i] = (uint8_t)((adress) >> i*8);
            }

            // Compute the hash value
            // WARNING: size_t may be larger than uint64_t !!!
            siphash(hash, adress_arr, (uint64_t) ptr_size, k);

            // Return the value to the caller
            U8TO64_LE(hash);});
  return ((uint64_t) _embed_0);
}


uint64_t _enc__method__encore_libs_master_Ped_util_Agent_passive_Agent_get_hash(pony_ctx_t** _ctx, _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t* _this)
{
  /* this.hash_code */;
  uint64_t _fieldacc_0 = (*_this)._enc__field_hash_code;
  return ((uint64_t) _fieldacc_0);
}


int64_t _enc__method__encore_libs_master_Ped_util_Agent_passive_Agent_equals(pony_ctx_t** _ctx, _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t* _this, _enc__trait__encore_libs_master_Collections_HashCode_HashCode_t* _enc__arg_other)
{
  /* this.hash_code == other.get_hash() */;
  int64_t _binop_4 = (({uint64_t _fieldacc_0 = (*_this)._enc__field_hash_code; _fieldacc_0;}) == ({check_receiver(_enc__arg_other, ".", "other", "get_hash", "\"./encore-libs-master/Collections/HashCode.enc\" (line 57, column 27)");
                                                                                                   uint64_t (*_HashCode_get_hash_1) (pony_ctx_t**, _enc__trait__encore_libs_master_Collections_HashCode_HashCode_t*);
                                                                                                   void* (*_HashCode_vtable_2) (int);
                                                                                                   _HashCode_vtable_2 = ((void*) _enc__arg_other->_enc__self_type->vtable);
                                                                                                   _HashCode_get_hash_1 = _HashCode_vtable_2(_ENC__MSG__encore_libs_master_Collections_HashCode_HashCode_get_hash);
                                                                                                   uint64_t _trait_method_call_3 = _HashCode_get_hash_1(_ctx, ((_enc__trait__encore_libs_master_Collections_HashCode_HashCode_t*) _enc__arg_other)); _trait_method_call_3;}));
  return ((int64_t) _binop_4);
}


pony_type_t _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_type = {.id=_ENC__ID__encore_libs_master_Ped_util_Agent_passive_Agent, .size=sizeof(_enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t), .trace=_enc__trace__encore_libs_master_Ped_util_Agent_passive_Agent, .vtable=trait_method_selector};
