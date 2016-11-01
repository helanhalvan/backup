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


void _enc__type_init_Agent(_enc__passive_Agent_t* this, ... )
{
  va_list params;
  va_start(params, this);
  va_end(params);
}


void _enc__trace_Agent(pony_ctx_t* _ctx_arg, void* p)
{
  pony_ctx_t** _ctx = (&(_ctx_arg));
  _enc__passive_Agent_t* _this = p;
  int64_t _enc__field_id = _this->_enc__field_id;
  /* Not tracing field '_enc__field_id' */;
  tuple_t* _enc__field_pos = _this->_enc__field_pos;
  encore_trace_object((*_ctx), _enc__field_pos, tuple_trace);
  array_t* _enc__field_targets = _this->_enc__field_targets;
  encore_trace_object((*_ctx), _enc__field_targets, array_trace);
  int64_t _enc__field_i = _this->_enc__field_i;
  /* Not tracing field '_enc__field_i' */;
}


_enc__passive_Agent_t* _enc__constructor_Agent(pony_ctx_t** _ctx)
{
  _enc__passive_Agent_t* this = ((_enc__passive_Agent_t*) encore_alloc((*_ctx), sizeof(_enc__passive_Agent_t)));
  this->_enc__self_type = (&(_enc__passive_Agent_type));
  return this;
}


void* _enc__method_Agent__init(pony_ctx_t** _ctx, _enc__passive_Agent_t* _this, tuple_t* _enc__arg_in_pos, array_t* _enc__arg_list, int64_t _enc__arg_in_id)
{
  /* this.pos = in_pos */;
  (*({ _this;}))._enc__field_pos = _enc__arg_in_pos;
  /* this.i = 0 */;
  int64_t _literal_0 = 0;
  (*({ _this;}))._enc__field_i = _literal_0;
  /* this.targets = list */;
  (*({ _this;}))._enc__field_targets = _enc__arg_list;
  /* this.id = in_id */;
  (*({ _this;}))._enc__field_id = _enc__arg_in_id;
  return UNIT;
}


array_t* _enc__method_Agent_next(pony_ctx_t** _ctx, _enc__passive_Agent_t* _this)
{
  /* if |this.targets| == this.i then
  this.i = 0 */;
  void* _ite_0;
  if (({int64_t _binop_4 = (({array_t* _fieldacc_1 = (*_this)._enc__field_targets;
                              int64_t _size_2 = array_size(_fieldacc_1); _size_2;}) == ({int64_t _fieldacc_3 = (*_this)._enc__field_i; _fieldacc_3;})); _binop_4;}))
  {
    int64_t _literal_5 = 0;
    (*({ _this;}))._enc__field_i = _literal_5;
    _ite_0 = ((void*) UNIT);
  }
  else
  {
    UNIT;
    _ite_0 = ((void*) UNIT);
  };
  /* match (this.pos, this.targets[this.i]) with
  ((x1, y1), 
   (x2, y2)) when y1 == y2 and x1 == x2 => {this.i = this.i + 1;
                                            ()}
  _ => ()
 */;
  tuple_t* _tuple_7 = tuple_mk(_ctx, 2);
  tuple_set_type(_tuple_7, 0, (&(tuple_type)));
  tuple_set_type(_tuple_7, 1, (&(tuple_type)));
  tuple_t* _fieldacc_8 = (*_this)._enc__field_pos;
  array_t* _fieldacc_9 = (*_this)._enc__field_targets;
  int64_t _fieldacc_10 = (*_this)._enc__field_i;
  tuple_t* _access_11 = array_get(_fieldacc_9, _fieldacc_10).p;
  tuple_set(_tuple_7, 0, ((encore_arg_t) {.p = _fieldacc_8}));
  tuple_set(_tuple_7, 1, ((encore_arg_t) {.p = _access_11}));
  void* _match_6;
  int64_t _x1_12;
  int64_t _y1_13;
  int64_t _x2_14;
  int64_t _y2_15;
  if ((({int64_t _tupleCheck_22;
         _tupleCheck_22 = 1;
         tuple_t* _tupleAccess_23 = tuple_get(_tuple_7, 0).p;
         int64_t _tupleCheck_24;
         _tupleCheck_24 = 1;
         int64_t _tupleAccess_25 = tuple_get(_tupleAccess_23, 0).i;
         int64_t _varBinding_26;
         _x1_12 = _tupleAccess_25;
         _varBinding_26 = 1;
         _tupleCheck_24 = (_tupleCheck_24 && _varBinding_26);
         int64_t _tupleAccess_27 = tuple_get(_tupleAccess_23, 1).i;
         int64_t _varBinding_28;
         _y1_13 = _tupleAccess_27;
         _varBinding_28 = 1;
         _tupleCheck_24 = (_tupleCheck_24 && _varBinding_28);
         _tupleCheck_22 = (_tupleCheck_22 && _tupleCheck_24);
         tuple_t* _tupleAccess_29 = tuple_get(_tuple_7, 1).p;
         int64_t _tupleCheck_30;
         _tupleCheck_30 = 1;
         int64_t _tupleAccess_31 = tuple_get(_tupleAccess_29, 0).i;
         int64_t _varBinding_32;
         _x2_14 = _tupleAccess_31;
         _varBinding_32 = 1;
         _tupleCheck_30 = (_tupleCheck_30 && _varBinding_32);
         int64_t _tupleAccess_33 = tuple_get(_tupleAccess_29, 1).i;
         int64_t _varBinding_34;
         _y2_15 = _tupleAccess_33;
         _varBinding_34 = 1;
         _tupleCheck_30 = (_tupleCheck_30 && _varBinding_34);
         _tupleCheck_22 = (_tupleCheck_22 && _tupleCheck_30); _tupleCheck_22;}) && ({int64_t _binop_37 = (({int64_t _binop_35 = (({ _y1_13;}) == ({ _y2_15;})); _binop_35;}) && ({int64_t _binop_36 = (({ _x1_12;}) == ({ _x2_14;})); _binop_36;})); _binop_37;})))
  {
    _match_6 = ((void*) ({/* this.i = this.i + 1 */;
                          int64_t _binop_18 = (({int64_t _fieldacc_16 = (*_this)._enc__field_i; _fieldacc_16;}) + ({int64_t _literal_17 = 1; _literal_17;}));
                          (*({ _this;}))._enc__field_i = _binop_18;
                          /* () */;
                          UNIT; UNIT;}));
  }
  else
  {
    tuple_t* ___19;
    if ((({int64_t _varBinding_20;
           ___19 = _tuple_7;
           _varBinding_20 = 1; _varBinding_20;}) && ({int64_t _literal_21 = 1/*True*/; _literal_21;})))
    {
      _match_6 = ((void*) ({UNIT; UNIT;}));
    }
    else
    {
      printf("*** Runtime error: No matching clause was found ***\n");
      exit(1);
    };
  };
  /* if |this.targets| == this.i then
  this.i = 0 */;
  void* _ite_38;
  if (({int64_t _binop_42 = (({array_t* _fieldacc_39 = (*_this)._enc__field_targets;
                               int64_t _size_40 = array_size(_fieldacc_39); _size_40;}) == ({int64_t _fieldacc_41 = (*_this)._enc__field_i; _fieldacc_41;})); _binop_42;}))
  {
    int64_t _literal_43 = 0;
    (*({ _this;}))._enc__field_i = _literal_43;
    _ite_38 = ((void*) UNIT);
  }
  else
  {
    UNIT;
    _ite_38 = ((void*) UNIT);
  };
  /* match (this.pos, this.targets[this.i]) with
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
  tuple_t* _tuple_45 = tuple_mk(_ctx, 2);
  tuple_set_type(_tuple_45, 0, (&(tuple_type)));
  tuple_set_type(_tuple_45, 1, (&(tuple_type)));
  tuple_t* _fieldacc_46 = (*_this)._enc__field_pos;
  array_t* _fieldacc_47 = (*_this)._enc__field_targets;
  int64_t _fieldacc_48 = (*_this)._enc__field_i;
  tuple_t* _access_49 = array_get(_fieldacc_47, _fieldacc_48).p;
  tuple_set(_tuple_45, 0, ((encore_arg_t) {.p = _fieldacc_46}));
  tuple_set(_tuple_45, 1, ((encore_arg_t) {.p = _access_49}));
  array_t* _match_44;
  int64_t _x1_50;
  int64_t _y1_51;
  int64_t _x2_52;
  int64_t _y2_53;
  if ((({int64_t _tupleCheck_237;
         _tupleCheck_237 = 1;
         tuple_t* _tupleAccess_238 = tuple_get(_tuple_45, 0).p;
         int64_t _tupleCheck_239;
         _tupleCheck_239 = 1;
         int64_t _tupleAccess_240 = tuple_get(_tupleAccess_238, 0).i;
         int64_t _varBinding_241;
         _x1_50 = _tupleAccess_240;
         _varBinding_241 = 1;
         _tupleCheck_239 = (_tupleCheck_239 && _varBinding_241);
         int64_t _tupleAccess_242 = tuple_get(_tupleAccess_238, 1).i;
         int64_t _varBinding_243;
         _y1_51 = _tupleAccess_242;
         _varBinding_243 = 1;
         _tupleCheck_239 = (_tupleCheck_239 && _varBinding_243);
         _tupleCheck_237 = (_tupleCheck_237 && _tupleCheck_239);
         tuple_t* _tupleAccess_244 = tuple_get(_tuple_45, 1).p;
         int64_t _tupleCheck_245;
         _tupleCheck_245 = 1;
         int64_t _tupleAccess_246 = tuple_get(_tupleAccess_244, 0).i;
         int64_t _varBinding_247;
         _x2_52 = _tupleAccess_246;
         _varBinding_247 = 1;
         _tupleCheck_245 = (_tupleCheck_245 && _varBinding_247);
         int64_t _tupleAccess_248 = tuple_get(_tupleAccess_244, 1).i;
         int64_t _varBinding_249;
         _y2_53 = _tupleAccess_248;
         _varBinding_249 = 1;
         _tupleCheck_245 = (_tupleCheck_245 && _varBinding_249);
         _tupleCheck_237 = (_tupleCheck_237 && _tupleCheck_245); _tupleCheck_237;}) && ({int64_t _binop_252 = (({int64_t _binop_250 = (({ _x1_50;}) > ({ _x2_52;})); _binop_250;}) && ({int64_t _binop_251 = (({ _y1_51;}) > ({ _y2_53;})); _binop_251;})); _binop_252;})))
  {
    _match_44 = ((array_t*) ({/* [(x1 - 1, y1), (x1, y1 - 1)] */;
                              array_t* _array_54 = array_mk(_ctx, 2, (&(tuple_type)));
                              tuple_t* _tuple_55 = tuple_mk(_ctx, 2);
                              tuple_set_type(_tuple_55, 0, ENCORE_PRIMITIVE);
                              tuple_set_type(_tuple_55, 1, ENCORE_PRIMITIVE);
                              int64_t _binop_57 = (({ _x1_50;}) - ({int64_t _literal_56 = 1; _literal_56;}));
                              tuple_set(_tuple_55, 0, ((encore_arg_t) {.i = _binop_57}));
                              tuple_set(_tuple_55, 1, ((encore_arg_t) {.i = _y1_51}));
                              tuple_t* _tuple_58 = tuple_mk(_ctx, 2);
                              tuple_set_type(_tuple_58, 0, ENCORE_PRIMITIVE);
                              tuple_set_type(_tuple_58, 1, ENCORE_PRIMITIVE);
                              int64_t _binop_60 = (({ _y1_51;}) - ({int64_t _literal_59 = 1; _literal_59;}));
                              tuple_set(_tuple_58, 0, ((encore_arg_t) {.i = _x1_50}));
                              tuple_set(_tuple_58, 1, ((encore_arg_t) {.i = _binop_60}));
                              array_set(_array_54, 0, ((encore_arg_t) {.p = _tuple_55}));
                              array_set(_array_54, 1, ((encore_arg_t) {.p = _tuple_58})); _array_54;}));
  }
  else
  {
    int64_t _x1_61;
    int64_t _y1_62;
    int64_t _x2_63;
    int64_t _y2_64;
    if ((({int64_t _tupleCheck_221;
           _tupleCheck_221 = 1;
           tuple_t* _tupleAccess_222 = tuple_get(_tuple_45, 0).p;
           int64_t _tupleCheck_223;
           _tupleCheck_223 = 1;
           int64_t _tupleAccess_224 = tuple_get(_tupleAccess_222, 0).i;
           int64_t _varBinding_225;
           _x1_61 = _tupleAccess_224;
           _varBinding_225 = 1;
           _tupleCheck_223 = (_tupleCheck_223 && _varBinding_225);
           int64_t _tupleAccess_226 = tuple_get(_tupleAccess_222, 1).i;
           int64_t _varBinding_227;
           _y1_62 = _tupleAccess_226;
           _varBinding_227 = 1;
           _tupleCheck_223 = (_tupleCheck_223 && _varBinding_227);
           _tupleCheck_221 = (_tupleCheck_221 && _tupleCheck_223);
           tuple_t* _tupleAccess_228 = tuple_get(_tuple_45, 1).p;
           int64_t _tupleCheck_229;
           _tupleCheck_229 = 1;
           int64_t _tupleAccess_230 = tuple_get(_tupleAccess_228, 0).i;
           int64_t _varBinding_231;
           _x2_63 = _tupleAccess_230;
           _varBinding_231 = 1;
           _tupleCheck_229 = (_tupleCheck_229 && _varBinding_231);
           int64_t _tupleAccess_232 = tuple_get(_tupleAccess_228, 1).i;
           int64_t _varBinding_233;
           _y2_64 = _tupleAccess_232;
           _varBinding_233 = 1;
           _tupleCheck_229 = (_tupleCheck_229 && _varBinding_233);
           _tupleCheck_221 = (_tupleCheck_221 && _tupleCheck_229); _tupleCheck_221;}) && ({int64_t _binop_236 = (({int64_t _binop_234 = (({ _x1_61;}) < ({ _x2_63;})); _binop_234;}) && ({int64_t _binop_235 = (({ _y1_62;}) < ({ _y2_64;})); _binop_235;})); _binop_236;})))
    {
      _match_44 = ((array_t*) ({/* [(x1 + 1, y1), (x1, y1 + 1)] */;
                                array_t* _array_65 = array_mk(_ctx, 2, (&(tuple_type)));
                                tuple_t* _tuple_66 = tuple_mk(_ctx, 2);
                                tuple_set_type(_tuple_66, 0, ENCORE_PRIMITIVE);
                                tuple_set_type(_tuple_66, 1, ENCORE_PRIMITIVE);
                                int64_t _binop_68 = (({ _x1_61;}) + ({int64_t _literal_67 = 1; _literal_67;}));
                                tuple_set(_tuple_66, 0, ((encore_arg_t) {.i = _binop_68}));
                                tuple_set(_tuple_66, 1, ((encore_arg_t) {.i = _y1_62}));
                                tuple_t* _tuple_69 = tuple_mk(_ctx, 2);
                                tuple_set_type(_tuple_69, 0, ENCORE_PRIMITIVE);
                                tuple_set_type(_tuple_69, 1, ENCORE_PRIMITIVE);
                                int64_t _binop_71 = (({ _y1_62;}) + ({int64_t _literal_70 = 1; _literal_70;}));
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
      if ((({int64_t _tupleCheck_205;
             _tupleCheck_205 = 1;
             tuple_t* _tupleAccess_206 = tuple_get(_tuple_45, 0).p;
             int64_t _tupleCheck_207;
             _tupleCheck_207 = 1;
             int64_t _tupleAccess_208 = tuple_get(_tupleAccess_206, 0).i;
             int64_t _varBinding_209;
             _x1_72 = _tupleAccess_208;
             _varBinding_209 = 1;
             _tupleCheck_207 = (_tupleCheck_207 && _varBinding_209);
             int64_t _tupleAccess_210 = tuple_get(_tupleAccess_206, 1).i;
             int64_t _varBinding_211;
             _y1_73 = _tupleAccess_210;
             _varBinding_211 = 1;
             _tupleCheck_207 = (_tupleCheck_207 && _varBinding_211);
             _tupleCheck_205 = (_tupleCheck_205 && _tupleCheck_207);
             tuple_t* _tupleAccess_212 = tuple_get(_tuple_45, 1).p;
             int64_t _tupleCheck_213;
             _tupleCheck_213 = 1;
             int64_t _tupleAccess_214 = tuple_get(_tupleAccess_212, 0).i;
             int64_t _varBinding_215;
             _x2_74 = _tupleAccess_214;
             _varBinding_215 = 1;
             _tupleCheck_213 = (_tupleCheck_213 && _varBinding_215);
             int64_t _tupleAccess_216 = tuple_get(_tupleAccess_212, 1).i;
             int64_t _varBinding_217;
             _y2_75 = _tupleAccess_216;
             _varBinding_217 = 1;
             _tupleCheck_213 = (_tupleCheck_213 && _varBinding_217);
             _tupleCheck_205 = (_tupleCheck_205 && _tupleCheck_213); _tupleCheck_205;}) && ({int64_t _binop_220 = (({int64_t _binop_218 = (({ _x1_72;}) > ({ _x2_74;})); _binop_218;}) && ({int64_t _binop_219 = (({ _y1_73;}) < ({ _y2_75;})); _binop_219;})); _binop_220;})))
      {
        _match_44 = ((array_t*) ({/* [(x1 - 1, y1), (x1, y1 + 1)] */;
                                  array_t* _array_76 = array_mk(_ctx, 2, (&(tuple_type)));
                                  tuple_t* _tuple_77 = tuple_mk(_ctx, 2);
                                  tuple_set_type(_tuple_77, 0, ENCORE_PRIMITIVE);
                                  tuple_set_type(_tuple_77, 1, ENCORE_PRIMITIVE);
                                  int64_t _binop_79 = (({ _x1_72;}) - ({int64_t _literal_78 = 1; _literal_78;}));
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
        if ((({int64_t _tupleCheck_189;
               _tupleCheck_189 = 1;
               tuple_t* _tupleAccess_190 = tuple_get(_tuple_45, 0).p;
               int64_t _tupleCheck_191;
               _tupleCheck_191 = 1;
               int64_t _tupleAccess_192 = tuple_get(_tupleAccess_190, 0).i;
               int64_t _varBinding_193;
               _x1_83 = _tupleAccess_192;
               _varBinding_193 = 1;
               _tupleCheck_191 = (_tupleCheck_191 && _varBinding_193);
               int64_t _tupleAccess_194 = tuple_get(_tupleAccess_190, 1).i;
               int64_t _varBinding_195;
               _y1_84 = _tupleAccess_194;
               _varBinding_195 = 1;
               _tupleCheck_191 = (_tupleCheck_191 && _varBinding_195);
               _tupleCheck_189 = (_tupleCheck_189 && _tupleCheck_191);
               tuple_t* _tupleAccess_196 = tuple_get(_tuple_45, 1).p;
               int64_t _tupleCheck_197;
               _tupleCheck_197 = 1;
               int64_t _tupleAccess_198 = tuple_get(_tupleAccess_196, 0).i;
               int64_t _varBinding_199;
               _x2_85 = _tupleAccess_198;
               _varBinding_199 = 1;
               _tupleCheck_197 = (_tupleCheck_197 && _varBinding_199);
               int64_t _tupleAccess_200 = tuple_get(_tupleAccess_196, 1).i;
               int64_t _varBinding_201;
               _y2_86 = _tupleAccess_200;
               _varBinding_201 = 1;
               _tupleCheck_197 = (_tupleCheck_197 && _varBinding_201);
               _tupleCheck_189 = (_tupleCheck_189 && _tupleCheck_197); _tupleCheck_189;}) && ({int64_t _binop_204 = (({int64_t _binop_202 = (({ _x1_83;}) < ({ _x2_85;})); _binop_202;}) && ({int64_t _binop_203 = (({ _y1_84;}) > ({ _y2_86;})); _binop_203;})); _binop_204;})))
        {
          _match_44 = ((array_t*) ({/* [(x1 + 1, y1), (x1, y1 - 1)] */;
                                    array_t* _array_87 = array_mk(_ctx, 2, (&(tuple_type)));
                                    tuple_t* _tuple_88 = tuple_mk(_ctx, 2);
                                    tuple_set_type(_tuple_88, 0, ENCORE_PRIMITIVE);
                                    tuple_set_type(_tuple_88, 1, ENCORE_PRIMITIVE);
                                    int64_t _binop_90 = (({ _x1_83;}) + ({int64_t _literal_89 = 1; _literal_89;}));
                                    tuple_set(_tuple_88, 0, ((encore_arg_t) {.i = _binop_90}));
                                    tuple_set(_tuple_88, 1, ((encore_arg_t) {.i = _y1_84}));
                                    tuple_t* _tuple_91 = tuple_mk(_ctx, 2);
                                    tuple_set_type(_tuple_91, 0, ENCORE_PRIMITIVE);
                                    tuple_set_type(_tuple_91, 1, ENCORE_PRIMITIVE);
                                    int64_t _binop_93 = (({ _y1_84;}) - ({int64_t _literal_92 = 1; _literal_92;}));
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
          if ((({int64_t _tupleCheck_175;
                 _tupleCheck_175 = 1;
                 tuple_t* _tupleAccess_176 = tuple_get(_tuple_45, 0).p;
                 int64_t _tupleCheck_177;
                 _tupleCheck_177 = 1;
                 int64_t _tupleAccess_178 = tuple_get(_tupleAccess_176, 0).i;
                 int64_t _varBinding_179;
                 _x1_94 = _tupleAccess_178;
                 _varBinding_179 = 1;
                 _tupleCheck_177 = (_tupleCheck_177 && _varBinding_179);
                 int64_t _tupleAccess_180 = tuple_get(_tupleAccess_176, 1).i;
                 int64_t _varBinding_181;
                 _y1_95 = _tupleAccess_180;
                 _varBinding_181 = 1;
                 _tupleCheck_177 = (_tupleCheck_177 && _varBinding_181);
                 _tupleCheck_175 = (_tupleCheck_175 && _tupleCheck_177);
                 tuple_t* _tupleAccess_182 = tuple_get(_tuple_45, 1).p;
                 int64_t _tupleCheck_183;
                 _tupleCheck_183 = 1;
                 int64_t _tupleAccess_184 = tuple_get(_tupleAccess_182, 0).i;
                 int64_t _varBinding_185;
                 _x2_96 = _tupleAccess_184;
                 _varBinding_185 = 1;
                 _tupleCheck_183 = (_tupleCheck_183 && _varBinding_185);
                 int64_t _tupleAccess_186 = tuple_get(_tupleAccess_182, 1).i;
                 int64_t _varBinding_187;
                 _y2_97 = _tupleAccess_186;
                 _varBinding_187 = 1;
                 _tupleCheck_183 = (_tupleCheck_183 && _varBinding_187);
                 _tupleCheck_175 = (_tupleCheck_175 && _tupleCheck_183); _tupleCheck_175;}) && ({int64_t _binop_188 = (({ _x1_94;}) > ({ _x2_96;})); _binop_188;})))
          {
            _match_44 = ((array_t*) ({/* [(x1 - 1, y1)] */;
                                      array_t* _array_98 = array_mk(_ctx, 1, (&(tuple_type)));
                                      tuple_t* _tuple_99 = tuple_mk(_ctx, 2);
                                      tuple_set_type(_tuple_99, 0, ENCORE_PRIMITIVE);
                                      tuple_set_type(_tuple_99, 1, ENCORE_PRIMITIVE);
                                      int64_t _binop_101 = (({ _x1_94;}) - ({int64_t _literal_100 = 1; _literal_100;}));
                                      tuple_set(_tuple_99, 0, ((encore_arg_t) {.i = _binop_101}));
                                      tuple_set(_tuple_99, 1, ((encore_arg_t) {.i = _y1_95}));
                                      array_set(_array_98, 0, ((encore_arg_t) {.p = _tuple_99})); _array_98;}));
          }
          else
          {
            int64_t _x1_102;
            int64_t _y1_103;
            int64_t _x2_104;
            int64_t _y2_105;
            if ((({int64_t _tupleCheck_161;
                   _tupleCheck_161 = 1;
                   tuple_t* _tupleAccess_162 = tuple_get(_tuple_45, 0).p;
                   int64_t _tupleCheck_163;
                   _tupleCheck_163 = 1;
                   int64_t _tupleAccess_164 = tuple_get(_tupleAccess_162, 0).i;
                   int64_t _varBinding_165;
                   _x1_102 = _tupleAccess_164;
                   _varBinding_165 = 1;
                   _tupleCheck_163 = (_tupleCheck_163 && _varBinding_165);
                   int64_t _tupleAccess_166 = tuple_get(_tupleAccess_162, 1).i;
                   int64_t _varBinding_167;
                   _y1_103 = _tupleAccess_166;
                   _varBinding_167 = 1;
                   _tupleCheck_163 = (_tupleCheck_163 && _varBinding_167);
                   _tupleCheck_161 = (_tupleCheck_161 && _tupleCheck_163);
                   tuple_t* _tupleAccess_168 = tuple_get(_tuple_45, 1).p;
                   int64_t _tupleCheck_169;
                   _tupleCheck_169 = 1;
                   int64_t _tupleAccess_170 = tuple_get(_tupleAccess_168, 0).i;
                   int64_t _varBinding_171;
                   _x2_104 = _tupleAccess_170;
                   _varBinding_171 = 1;
                   _tupleCheck_169 = (_tupleCheck_169 && _varBinding_171);
                   int64_t _tupleAccess_172 = tuple_get(_tupleAccess_168, 1).i;
                   int64_t _varBinding_173;
                   _y2_105 = _tupleAccess_172;
                   _varBinding_173 = 1;
                   _tupleCheck_169 = (_tupleCheck_169 && _varBinding_173);
                   _tupleCheck_161 = (_tupleCheck_161 && _tupleCheck_169); _tupleCheck_161;}) && ({int64_t _binop_174 = (({ _y1_103;}) > ({ _y2_105;})); _binop_174;})))
            {
              _match_44 = ((array_t*) ({/* [(x1, y1 - 1)] */;
                                        array_t* _array_106 = array_mk(_ctx, 1, (&(tuple_type)));
                                        tuple_t* _tuple_107 = tuple_mk(_ctx, 2);
                                        tuple_set_type(_tuple_107, 0, ENCORE_PRIMITIVE);
                                        tuple_set_type(_tuple_107, 1, ENCORE_PRIMITIVE);
                                        int64_t _binop_109 = (({ _y1_103;}) - ({int64_t _literal_108 = 1; _literal_108;}));
                                        tuple_set(_tuple_107, 0, ((encore_arg_t) {.i = _x1_102}));
                                        tuple_set(_tuple_107, 1, ((encore_arg_t) {.i = _binop_109}));
                                        array_set(_array_106, 0, ((encore_arg_t) {.p = _tuple_107})); _array_106;}));
            }
            else
            {
              int64_t _x1_110;
              int64_t _y1_111;
              int64_t _x2_112;
              int64_t _y2_113;
              if ((({int64_t _tupleCheck_147;
                     _tupleCheck_147 = 1;
                     tuple_t* _tupleAccess_148 = tuple_get(_tuple_45, 0).p;
                     int64_t _tupleCheck_149;
                     _tupleCheck_149 = 1;
                     int64_t _tupleAccess_150 = tuple_get(_tupleAccess_148, 0).i;
                     int64_t _varBinding_151;
                     _x1_110 = _tupleAccess_150;
                     _varBinding_151 = 1;
                     _tupleCheck_149 = (_tupleCheck_149 && _varBinding_151);
                     int64_t _tupleAccess_152 = tuple_get(_tupleAccess_148, 1).i;
                     int64_t _varBinding_153;
                     _y1_111 = _tupleAccess_152;
                     _varBinding_153 = 1;
                     _tupleCheck_149 = (_tupleCheck_149 && _varBinding_153);
                     _tupleCheck_147 = (_tupleCheck_147 && _tupleCheck_149);
                     tuple_t* _tupleAccess_154 = tuple_get(_tuple_45, 1).p;
                     int64_t _tupleCheck_155;
                     _tupleCheck_155 = 1;
                     int64_t _tupleAccess_156 = tuple_get(_tupleAccess_154, 0).i;
                     int64_t _varBinding_157;
                     _x2_112 = _tupleAccess_156;
                     _varBinding_157 = 1;
                     _tupleCheck_155 = (_tupleCheck_155 && _varBinding_157);
                     int64_t _tupleAccess_158 = tuple_get(_tupleAccess_154, 1).i;
                     int64_t _varBinding_159;
                     _y2_113 = _tupleAccess_158;
                     _varBinding_159 = 1;
                     _tupleCheck_155 = (_tupleCheck_155 && _varBinding_159);
                     _tupleCheck_147 = (_tupleCheck_147 && _tupleCheck_155); _tupleCheck_147;}) && ({int64_t _binop_160 = (({ _x1_110;}) < ({ _x2_112;})); _binop_160;})))
              {
                _match_44 = ((array_t*) ({/* [(x1 + 1, y1)] */;
                                          array_t* _array_114 = array_mk(_ctx, 1, (&(tuple_type)));
                                          tuple_t* _tuple_115 = tuple_mk(_ctx, 2);
                                          tuple_set_type(_tuple_115, 0, ENCORE_PRIMITIVE);
                                          tuple_set_type(_tuple_115, 1, ENCORE_PRIMITIVE);
                                          int64_t _binop_117 = (({ _x1_110;}) + ({int64_t _literal_116 = 1; _literal_116;}));
                                          tuple_set(_tuple_115, 0, ((encore_arg_t) {.i = _binop_117}));
                                          tuple_set(_tuple_115, 1, ((encore_arg_t) {.i = _y1_111}));
                                          array_set(_array_114, 0, ((encore_arg_t) {.p = _tuple_115})); _array_114;}));
              }
              else
              {
                int64_t _x1_118;
                int64_t _y1_119;
                int64_t _x2_120;
                int64_t _y2_121;
                if ((({int64_t _tupleCheck_133;
                       _tupleCheck_133 = 1;
                       tuple_t* _tupleAccess_134 = tuple_get(_tuple_45, 0).p;
                       int64_t _tupleCheck_135;
                       _tupleCheck_135 = 1;
                       int64_t _tupleAccess_136 = tuple_get(_tupleAccess_134, 0).i;
                       int64_t _varBinding_137;
                       _x1_118 = _tupleAccess_136;
                       _varBinding_137 = 1;
                       _tupleCheck_135 = (_tupleCheck_135 && _varBinding_137);
                       int64_t _tupleAccess_138 = tuple_get(_tupleAccess_134, 1).i;
                       int64_t _varBinding_139;
                       _y1_119 = _tupleAccess_138;
                       _varBinding_139 = 1;
                       _tupleCheck_135 = (_tupleCheck_135 && _varBinding_139);
                       _tupleCheck_133 = (_tupleCheck_133 && _tupleCheck_135);
                       tuple_t* _tupleAccess_140 = tuple_get(_tuple_45, 1).p;
                       int64_t _tupleCheck_141;
                       _tupleCheck_141 = 1;
                       int64_t _tupleAccess_142 = tuple_get(_tupleAccess_140, 0).i;
                       int64_t _varBinding_143;
                       _x2_120 = _tupleAccess_142;
                       _varBinding_143 = 1;
                       _tupleCheck_141 = (_tupleCheck_141 && _varBinding_143);
                       int64_t _tupleAccess_144 = tuple_get(_tupleAccess_140, 1).i;
                       int64_t _varBinding_145;
                       _y2_121 = _tupleAccess_144;
                       _varBinding_145 = 1;
                       _tupleCheck_141 = (_tupleCheck_141 && _varBinding_145);
                       _tupleCheck_133 = (_tupleCheck_133 && _tupleCheck_141); _tupleCheck_133;}) && ({int64_t _binop_146 = (({ _y1_119;}) < ({ _y2_121;})); _binop_146;})))
                {
                  _match_44 = ((array_t*) ({/* [(x1, y1 + 1)] */;
                                            array_t* _array_122 = array_mk(_ctx, 1, (&(tuple_type)));
                                            tuple_t* _tuple_123 = tuple_mk(_ctx, 2);
                                            tuple_set_type(_tuple_123, 0, ENCORE_PRIMITIVE);
                                            tuple_set_type(_tuple_123, 1, ENCORE_PRIMITIVE);
                                            int64_t _binop_125 = (({ _y1_119;}) + ({int64_t _literal_124 = 1; _literal_124;}));
                                            tuple_set(_tuple_123, 0, ((encore_arg_t) {.i = _x1_118}));
                                            tuple_set(_tuple_123, 1, ((encore_arg_t) {.i = _binop_125}));
                                            array_set(_array_122, 0, ((encore_arg_t) {.p = _tuple_123})); _array_122;}));
                }
                else
                {
                  tuple_t* ___126;
                  if ((({int64_t _varBinding_131;
                         ___126 = _tuple_45;
                         _varBinding_131 = 1; _varBinding_131;}) && ({int64_t _literal_132 = 1/*True*/; _literal_132;})))
                  {
                    _match_44 = ((array_t*) ({/* print("THIS SHOULD NEVER HAPPEN, |targets| = {} ", |this.targets|) */;
                                              array_t* _fieldacc_127 = (*_this)._enc__field_targets;
                                              int64_t _size_128 = array_size(_fieldacc_127);
                                              printf("THIS SHOULD NEVER HAPPEN, |targets| = %lli ", _size_128);
                                              /* new [(int, int)](0) */;
                                              int64_t _literal_130 = 0;
                                              array_t* _array_129 = array_mk(_ctx, _literal_130, (&(tuple_type))); _array_129;}));
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
  return ((array_t*) _match_44);
}


void* _enc__method_Agent_move(pony_ctx_t** _ctx, _enc__passive_Agent_t* _this, tuple_t* _enc__arg_in_pos)
{
  (*({ _this;}))._enc__field_pos = _enc__arg_in_pos;
  return UNIT;
}


tuple_t* _enc__method_Agent_pos(pony_ctx_t** _ctx, _enc__passive_Agent_t* _this)
{
  tuple_t* _fieldacc_0 = (*_this)._enc__field_pos;
  return ((tuple_t*) _fieldacc_0);
}


_enc__passive_Agent_t* _enc__method_Agent_copy(pony_ctx_t** _ctx, _enc__passive_Agent_t* _this)
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
  /* for i in [ 0 , |qq| by 1 ]
  qq[i] = this.targets[i] */;
  void* _for_6;
  /* Range not generated */;
  int64_t _literal_13 = 0;
  int64_t _size_14 = array_size(_qq_5);
  int64_t _literal_15 = 1;
  int64_t _literal_16 = 1;
  int64_t _step_11 = (_literal_16 * _literal_15);
  range_assert_step(_step_11);
  int64_t _index_7;
  if ((_step_11 > 0))
  {
    _index_7 = _literal_13;
  }
  else
  {
    _index_7 = _size_14;
  };
  while (((_index_7 >= _literal_13) && (_index_7 <= _size_14)))
  {
    int64_t _i_8 = _index_7;
    /* qq[i] = this.targets[i] */;
    array_t* _fieldacc_17 = (*_this)._enc__field_targets;
    tuple_t* _access_18 = array_get(_fieldacc_17, _i_8).p;
    array_set(_qq_5, _i_8, ((encore_arg_t) {.p = _access_18}));
    _for_6 = UNIT;
    _index_7 = (_index_7 + _step_11);
  };
  /* new Agent(q, qq, this.id) */;
  _enc__passive_Agent_t* _new_19 = _enc__constructor_Agent(_ctx);
  int64_t _fieldacc_20 = (*_this)._enc__field_id;
  _enc__type_init_Agent(_new_19);
  _enc__method_Agent__init(_ctx, _new_19, _q_1, _qq_5, _fieldacc_20);
  return ((_enc__passive_Agent_t*) _new_19);
}


pony_type_t _enc__passive_Agent_type = {.id=_ENC__ID_Agent, .size=sizeof(_enc__passive_Agent_t), .trace=_enc__trace_Agent, .vtable=trait_method_selector};
