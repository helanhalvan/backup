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
  pony_traceobject((*_ctx), _enc__field_pos, tuple_trace);
  array_t* _enc__field_targets = _this->_enc__field_targets;
  pony_traceobject((*_ctx), _enc__field_targets, array_trace);
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
  array_t* _ite_0;
  if (({int64_t _binop_4 = (({array_t* _fieldacc_1 = (*_this)._enc__field_targets;
                              int64_t _size_2 = array_size(_fieldacc_1); _size_2;}) == ({int64_t _fieldacc_3 = (*_this)._enc__field_i; _fieldacc_3;})); _binop_4;}))
  {
    int64_t _literal_6 = 0;
    array_t* _array_5 = array_mk(_ctx, _literal_6, (&(tuple_type)));
    _ite_0 = ((array_t*) _array_5);
  }
  else
  {
    /* match (this.pos, this.targets[this.i]) with
  ((x1, y1), 
   (x2, y2)) when y1 == y2 and x1 == x2 => {this.i = this.i + 1;
                                            this.next()}
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
 */;
    tuple_t* _tuple_8 = tuple_mk(_ctx, 2);
    tuple_set_type(_tuple_8, 0, (&(tuple_type)));
    tuple_set_type(_tuple_8, 1, (&(tuple_type)));
    tuple_t* _fieldacc_9 = (*_this)._enc__field_pos;
    array_t* _fieldacc_10 = (*_this)._enc__field_targets;
    int64_t _fieldacc_11 = (*_this)._enc__field_i;
    tuple_t* _access_12 = array_get(_fieldacc_10, _fieldacc_11).p;
    tuple_set(_tuple_8, 0, ((encore_arg_t) {.p = _fieldacc_9}));
    tuple_set(_tuple_8, 1, ((encore_arg_t) {.p = _access_12}));
    array_t* _match_7;
    int64_t _x1_13;
    int64_t _y1_14;
    int64_t _x2_15;
    int64_t _y2_16;
    if ((({int64_t _tupleCheck_217;
           _tupleCheck_217 = 1;
           tuple_t* _tupleAccess_218 = tuple_get(_tuple_8, 0).p;
           int64_t _tupleCheck_219;
           _tupleCheck_219 = 1;
           int64_t _tupleAccess_220 = tuple_get(_tupleAccess_218, 0).i;
           int64_t _varBinding_221;
           _x1_13 = _tupleAccess_220;
           _varBinding_221 = 1;
           _tupleCheck_219 = (_tupleCheck_219 && _varBinding_221);
           int64_t _tupleAccess_222 = tuple_get(_tupleAccess_218, 1).i;
           int64_t _varBinding_223;
           _y1_14 = _tupleAccess_222;
           _varBinding_223 = 1;
           _tupleCheck_219 = (_tupleCheck_219 && _varBinding_223);
           _tupleCheck_217 = (_tupleCheck_217 && _tupleCheck_219);
           tuple_t* _tupleAccess_224 = tuple_get(_tuple_8, 1).p;
           int64_t _tupleCheck_225;
           _tupleCheck_225 = 1;
           int64_t _tupleAccess_226 = tuple_get(_tupleAccess_224, 0).i;
           int64_t _varBinding_227;
           _x2_15 = _tupleAccess_226;
           _varBinding_227 = 1;
           _tupleCheck_225 = (_tupleCheck_225 && _varBinding_227);
           int64_t _tupleAccess_228 = tuple_get(_tupleAccess_224, 1).i;
           int64_t _varBinding_229;
           _y2_16 = _tupleAccess_228;
           _varBinding_229 = 1;
           _tupleCheck_225 = (_tupleCheck_225 && _varBinding_229);
           _tupleCheck_217 = (_tupleCheck_217 && _tupleCheck_225); _tupleCheck_217;}) && ({int64_t _binop_232 = (({int64_t _binop_230 = (({ _y1_14;}) == ({ _y2_16;})); _binop_230;}) && ({int64_t _binop_231 = (({ _x1_13;}) == ({ _x2_15;})); _binop_231;})); _binop_232;})))
    {
      _match_7 = ((array_t*) ({/* this.i = this.i + 1 */;
                               int64_t _binop_19 = (({int64_t _fieldacc_17 = (*_this)._enc__field_i; _fieldacc_17;}) + ({int64_t _literal_18 = 1; _literal_18;}));
                               (*({ _this;}))._enc__field_i = _binop_19;
                               /* this.next() */;
                               check_receiver(_this, ".", "this", "next", "\"./encore-libs-master/Ped_util/agent_passive.enc\" (line 82, column 74)");
                               array_t* _sync_method_call_20 = _enc__method_Agent_next(_ctx, _this); _sync_method_call_20;}));
    }
    else
    {
      int64_t _x1_21;
      int64_t _y1_22;
      int64_t _x2_23;
      int64_t _y2_24;
      if ((({int64_t _tupleCheck_201;
             _tupleCheck_201 = 1;
             tuple_t* _tupleAccess_202 = tuple_get(_tuple_8, 0).p;
             int64_t _tupleCheck_203;
             _tupleCheck_203 = 1;
             int64_t _tupleAccess_204 = tuple_get(_tupleAccess_202, 0).i;
             int64_t _varBinding_205;
             _x1_21 = _tupleAccess_204;
             _varBinding_205 = 1;
             _tupleCheck_203 = (_tupleCheck_203 && _varBinding_205);
             int64_t _tupleAccess_206 = tuple_get(_tupleAccess_202, 1).i;
             int64_t _varBinding_207;
             _y1_22 = _tupleAccess_206;
             _varBinding_207 = 1;
             _tupleCheck_203 = (_tupleCheck_203 && _varBinding_207);
             _tupleCheck_201 = (_tupleCheck_201 && _tupleCheck_203);
             tuple_t* _tupleAccess_208 = tuple_get(_tuple_8, 1).p;
             int64_t _tupleCheck_209;
             _tupleCheck_209 = 1;
             int64_t _tupleAccess_210 = tuple_get(_tupleAccess_208, 0).i;
             int64_t _varBinding_211;
             _x2_23 = _tupleAccess_210;
             _varBinding_211 = 1;
             _tupleCheck_209 = (_tupleCheck_209 && _varBinding_211);
             int64_t _tupleAccess_212 = tuple_get(_tupleAccess_208, 1).i;
             int64_t _varBinding_213;
             _y2_24 = _tupleAccess_212;
             _varBinding_213 = 1;
             _tupleCheck_209 = (_tupleCheck_209 && _varBinding_213);
             _tupleCheck_201 = (_tupleCheck_201 && _tupleCheck_209); _tupleCheck_201;}) && ({int64_t _binop_216 = (({int64_t _binop_214 = (({ _x1_21;}) > ({ _x2_23;})); _binop_214;}) && ({int64_t _binop_215 = (({ _y1_22;}) > ({ _y2_24;})); _binop_215;})); _binop_216;})))
      {
        _match_7 = ((array_t*) ({/* [(x1 - 1, y1), (x1, y1 - 1)] */;
                                 array_t* _array_25 = array_mk(_ctx, 2, (&(tuple_type)));
                                 tuple_t* _tuple_26 = tuple_mk(_ctx, 2);
                                 tuple_set_type(_tuple_26, 0, ENCORE_PRIMITIVE);
                                 tuple_set_type(_tuple_26, 1, ENCORE_PRIMITIVE);
                                 int64_t _binop_28 = (({ _x1_21;}) - ({int64_t _literal_27 = 1; _literal_27;}));
                                 tuple_set(_tuple_26, 0, ((encore_arg_t) {.i = _binop_28}));
                                 tuple_set(_tuple_26, 1, ((encore_arg_t) {.i = _y1_22}));
                                 tuple_t* _tuple_29 = tuple_mk(_ctx, 2);
                                 tuple_set_type(_tuple_29, 0, ENCORE_PRIMITIVE);
                                 tuple_set_type(_tuple_29, 1, ENCORE_PRIMITIVE);
                                 int64_t _binop_31 = (({ _y1_22;}) - ({int64_t _literal_30 = 1; _literal_30;}));
                                 tuple_set(_tuple_29, 0, ((encore_arg_t) {.i = _x1_21}));
                                 tuple_set(_tuple_29, 1, ((encore_arg_t) {.i = _binop_31}));
                                 array_set(_array_25, 0, ((encore_arg_t) {.p = _tuple_26}));
                                 array_set(_array_25, 1, ((encore_arg_t) {.p = _tuple_29})); _array_25;}));
      }
      else
      {
        int64_t _x1_32;
        int64_t _y1_33;
        int64_t _x2_34;
        int64_t _y2_35;
        if ((({int64_t _tupleCheck_185;
               _tupleCheck_185 = 1;
               tuple_t* _tupleAccess_186 = tuple_get(_tuple_8, 0).p;
               int64_t _tupleCheck_187;
               _tupleCheck_187 = 1;
               int64_t _tupleAccess_188 = tuple_get(_tupleAccess_186, 0).i;
               int64_t _varBinding_189;
               _x1_32 = _tupleAccess_188;
               _varBinding_189 = 1;
               _tupleCheck_187 = (_tupleCheck_187 && _varBinding_189);
               int64_t _tupleAccess_190 = tuple_get(_tupleAccess_186, 1).i;
               int64_t _varBinding_191;
               _y1_33 = _tupleAccess_190;
               _varBinding_191 = 1;
               _tupleCheck_187 = (_tupleCheck_187 && _varBinding_191);
               _tupleCheck_185 = (_tupleCheck_185 && _tupleCheck_187);
               tuple_t* _tupleAccess_192 = tuple_get(_tuple_8, 1).p;
               int64_t _tupleCheck_193;
               _tupleCheck_193 = 1;
               int64_t _tupleAccess_194 = tuple_get(_tupleAccess_192, 0).i;
               int64_t _varBinding_195;
               _x2_34 = _tupleAccess_194;
               _varBinding_195 = 1;
               _tupleCheck_193 = (_tupleCheck_193 && _varBinding_195);
               int64_t _tupleAccess_196 = tuple_get(_tupleAccess_192, 1).i;
               int64_t _varBinding_197;
               _y2_35 = _tupleAccess_196;
               _varBinding_197 = 1;
               _tupleCheck_193 = (_tupleCheck_193 && _varBinding_197);
               _tupleCheck_185 = (_tupleCheck_185 && _tupleCheck_193); _tupleCheck_185;}) && ({int64_t _binop_200 = (({int64_t _binop_198 = (({ _x1_32;}) < ({ _x2_34;})); _binop_198;}) && ({int64_t _binop_199 = (({ _y1_33;}) < ({ _y2_35;})); _binop_199;})); _binop_200;})))
        {
          _match_7 = ((array_t*) ({/* [(x1 + 1, y1), (x1, y1 + 1)] */;
                                   array_t* _array_36 = array_mk(_ctx, 2, (&(tuple_type)));
                                   tuple_t* _tuple_37 = tuple_mk(_ctx, 2);
                                   tuple_set_type(_tuple_37, 0, ENCORE_PRIMITIVE);
                                   tuple_set_type(_tuple_37, 1, ENCORE_PRIMITIVE);
                                   int64_t _binop_39 = (({ _x1_32;}) + ({int64_t _literal_38 = 1; _literal_38;}));
                                   tuple_set(_tuple_37, 0, ((encore_arg_t) {.i = _binop_39}));
                                   tuple_set(_tuple_37, 1, ((encore_arg_t) {.i = _y1_33}));
                                   tuple_t* _tuple_40 = tuple_mk(_ctx, 2);
                                   tuple_set_type(_tuple_40, 0, ENCORE_PRIMITIVE);
                                   tuple_set_type(_tuple_40, 1, ENCORE_PRIMITIVE);
                                   int64_t _binop_42 = (({ _y1_33;}) + ({int64_t _literal_41 = 1; _literal_41;}));
                                   tuple_set(_tuple_40, 0, ((encore_arg_t) {.i = _x1_32}));
                                   tuple_set(_tuple_40, 1, ((encore_arg_t) {.i = _binop_42}));
                                   array_set(_array_36, 0, ((encore_arg_t) {.p = _tuple_37}));
                                   array_set(_array_36, 1, ((encore_arg_t) {.p = _tuple_40})); _array_36;}));
        }
        else
        {
          int64_t _x1_43;
          int64_t _y1_44;
          int64_t _x2_45;
          int64_t _y2_46;
          if ((({int64_t _tupleCheck_169;
                 _tupleCheck_169 = 1;
                 tuple_t* _tupleAccess_170 = tuple_get(_tuple_8, 0).p;
                 int64_t _tupleCheck_171;
                 _tupleCheck_171 = 1;
                 int64_t _tupleAccess_172 = tuple_get(_tupleAccess_170, 0).i;
                 int64_t _varBinding_173;
                 _x1_43 = _tupleAccess_172;
                 _varBinding_173 = 1;
                 _tupleCheck_171 = (_tupleCheck_171 && _varBinding_173);
                 int64_t _tupleAccess_174 = tuple_get(_tupleAccess_170, 1).i;
                 int64_t _varBinding_175;
                 _y1_44 = _tupleAccess_174;
                 _varBinding_175 = 1;
                 _tupleCheck_171 = (_tupleCheck_171 && _varBinding_175);
                 _tupleCheck_169 = (_tupleCheck_169 && _tupleCheck_171);
                 tuple_t* _tupleAccess_176 = tuple_get(_tuple_8, 1).p;
                 int64_t _tupleCheck_177;
                 _tupleCheck_177 = 1;
                 int64_t _tupleAccess_178 = tuple_get(_tupleAccess_176, 0).i;
                 int64_t _varBinding_179;
                 _x2_45 = _tupleAccess_178;
                 _varBinding_179 = 1;
                 _tupleCheck_177 = (_tupleCheck_177 && _varBinding_179);
                 int64_t _tupleAccess_180 = tuple_get(_tupleAccess_176, 1).i;
                 int64_t _varBinding_181;
                 _y2_46 = _tupleAccess_180;
                 _varBinding_181 = 1;
                 _tupleCheck_177 = (_tupleCheck_177 && _varBinding_181);
                 _tupleCheck_169 = (_tupleCheck_169 && _tupleCheck_177); _tupleCheck_169;}) && ({int64_t _binop_184 = (({int64_t _binop_182 = (({ _x1_43;}) > ({ _x2_45;})); _binop_182;}) && ({int64_t _binop_183 = (({ _y1_44;}) < ({ _y2_46;})); _binop_183;})); _binop_184;})))
          {
            _match_7 = ((array_t*) ({/* [(x1 - 1, y1), (x1, y1 + 1)] */;
                                     array_t* _array_47 = array_mk(_ctx, 2, (&(tuple_type)));
                                     tuple_t* _tuple_48 = tuple_mk(_ctx, 2);
                                     tuple_set_type(_tuple_48, 0, ENCORE_PRIMITIVE);
                                     tuple_set_type(_tuple_48, 1, ENCORE_PRIMITIVE);
                                     int64_t _binop_50 = (({ _x1_43;}) - ({int64_t _literal_49 = 1; _literal_49;}));
                                     tuple_set(_tuple_48, 0, ((encore_arg_t) {.i = _binop_50}));
                                     tuple_set(_tuple_48, 1, ((encore_arg_t) {.i = _y1_44}));
                                     tuple_t* _tuple_51 = tuple_mk(_ctx, 2);
                                     tuple_set_type(_tuple_51, 0, ENCORE_PRIMITIVE);
                                     tuple_set_type(_tuple_51, 1, ENCORE_PRIMITIVE);
                                     int64_t _binop_53 = (({ _y1_44;}) + ({int64_t _literal_52 = 1; _literal_52;}));
                                     tuple_set(_tuple_51, 0, ((encore_arg_t) {.i = _x1_43}));
                                     tuple_set(_tuple_51, 1, ((encore_arg_t) {.i = _binop_53}));
                                     array_set(_array_47, 0, ((encore_arg_t) {.p = _tuple_48}));
                                     array_set(_array_47, 1, ((encore_arg_t) {.p = _tuple_51})); _array_47;}));
          }
          else
          {
            int64_t _x1_54;
            int64_t _y1_55;
            int64_t _x2_56;
            int64_t _y2_57;
            if ((({int64_t _tupleCheck_153;
                   _tupleCheck_153 = 1;
                   tuple_t* _tupleAccess_154 = tuple_get(_tuple_8, 0).p;
                   int64_t _tupleCheck_155;
                   _tupleCheck_155 = 1;
                   int64_t _tupleAccess_156 = tuple_get(_tupleAccess_154, 0).i;
                   int64_t _varBinding_157;
                   _x1_54 = _tupleAccess_156;
                   _varBinding_157 = 1;
                   _tupleCheck_155 = (_tupleCheck_155 && _varBinding_157);
                   int64_t _tupleAccess_158 = tuple_get(_tupleAccess_154, 1).i;
                   int64_t _varBinding_159;
                   _y1_55 = _tupleAccess_158;
                   _varBinding_159 = 1;
                   _tupleCheck_155 = (_tupleCheck_155 && _varBinding_159);
                   _tupleCheck_153 = (_tupleCheck_153 && _tupleCheck_155);
                   tuple_t* _tupleAccess_160 = tuple_get(_tuple_8, 1).p;
                   int64_t _tupleCheck_161;
                   _tupleCheck_161 = 1;
                   int64_t _tupleAccess_162 = tuple_get(_tupleAccess_160, 0).i;
                   int64_t _varBinding_163;
                   _x2_56 = _tupleAccess_162;
                   _varBinding_163 = 1;
                   _tupleCheck_161 = (_tupleCheck_161 && _varBinding_163);
                   int64_t _tupleAccess_164 = tuple_get(_tupleAccess_160, 1).i;
                   int64_t _varBinding_165;
                   _y2_57 = _tupleAccess_164;
                   _varBinding_165 = 1;
                   _tupleCheck_161 = (_tupleCheck_161 && _varBinding_165);
                   _tupleCheck_153 = (_tupleCheck_153 && _tupleCheck_161); _tupleCheck_153;}) && ({int64_t _binop_168 = (({int64_t _binop_166 = (({ _x1_54;}) < ({ _x2_56;})); _binop_166;}) && ({int64_t _binop_167 = (({ _y1_55;}) > ({ _y2_57;})); _binop_167;})); _binop_168;})))
            {
              _match_7 = ((array_t*) ({/* [(x1 + 1, y1), (x1, y1 - 1)] */;
                                       array_t* _array_58 = array_mk(_ctx, 2, (&(tuple_type)));
                                       tuple_t* _tuple_59 = tuple_mk(_ctx, 2);
                                       tuple_set_type(_tuple_59, 0, ENCORE_PRIMITIVE);
                                       tuple_set_type(_tuple_59, 1, ENCORE_PRIMITIVE);
                                       int64_t _binop_61 = (({ _x1_54;}) + ({int64_t _literal_60 = 1; _literal_60;}));
                                       tuple_set(_tuple_59, 0, ((encore_arg_t) {.i = _binop_61}));
                                       tuple_set(_tuple_59, 1, ((encore_arg_t) {.i = _y1_55}));
                                       tuple_t* _tuple_62 = tuple_mk(_ctx, 2);
                                       tuple_set_type(_tuple_62, 0, ENCORE_PRIMITIVE);
                                       tuple_set_type(_tuple_62, 1, ENCORE_PRIMITIVE);
                                       int64_t _binop_64 = (({ _y1_55;}) - ({int64_t _literal_63 = 1; _literal_63;}));
                                       tuple_set(_tuple_62, 0, ((encore_arg_t) {.i = _x1_54}));
                                       tuple_set(_tuple_62, 1, ((encore_arg_t) {.i = _binop_64}));
                                       array_set(_array_58, 0, ((encore_arg_t) {.p = _tuple_59}));
                                       array_set(_array_58, 1, ((encore_arg_t) {.p = _tuple_62})); _array_58;}));
            }
            else
            {
              int64_t _x1_65;
              int64_t _y1_66;
              int64_t _x2_67;
              int64_t _y2_68;
              if ((({int64_t _tupleCheck_139;
                     _tupleCheck_139 = 1;
                     tuple_t* _tupleAccess_140 = tuple_get(_tuple_8, 0).p;
                     int64_t _tupleCheck_141;
                     _tupleCheck_141 = 1;
                     int64_t _tupleAccess_142 = tuple_get(_tupleAccess_140, 0).i;
                     int64_t _varBinding_143;
                     _x1_65 = _tupleAccess_142;
                     _varBinding_143 = 1;
                     _tupleCheck_141 = (_tupleCheck_141 && _varBinding_143);
                     int64_t _tupleAccess_144 = tuple_get(_tupleAccess_140, 1).i;
                     int64_t _varBinding_145;
                     _y1_66 = _tupleAccess_144;
                     _varBinding_145 = 1;
                     _tupleCheck_141 = (_tupleCheck_141 && _varBinding_145);
                     _tupleCheck_139 = (_tupleCheck_139 && _tupleCheck_141);
                     tuple_t* _tupleAccess_146 = tuple_get(_tuple_8, 1).p;
                     int64_t _tupleCheck_147;
                     _tupleCheck_147 = 1;
                     int64_t _tupleAccess_148 = tuple_get(_tupleAccess_146, 0).i;
                     int64_t _varBinding_149;
                     _x2_67 = _tupleAccess_148;
                     _varBinding_149 = 1;
                     _tupleCheck_147 = (_tupleCheck_147 && _varBinding_149);
                     int64_t _tupleAccess_150 = tuple_get(_tupleAccess_146, 1).i;
                     int64_t _varBinding_151;
                     _y2_68 = _tupleAccess_150;
                     _varBinding_151 = 1;
                     _tupleCheck_147 = (_tupleCheck_147 && _varBinding_151);
                     _tupleCheck_139 = (_tupleCheck_139 && _tupleCheck_147); _tupleCheck_139;}) && ({int64_t _binop_152 = (({ _x1_65;}) > ({ _x2_67;})); _binop_152;})))
              {
                _match_7 = ((array_t*) ({/* [(x1 - 1, y1)] */;
                                         array_t* _array_69 = array_mk(_ctx, 1, (&(tuple_type)));
                                         tuple_t* _tuple_70 = tuple_mk(_ctx, 2);
                                         tuple_set_type(_tuple_70, 0, ENCORE_PRIMITIVE);
                                         tuple_set_type(_tuple_70, 1, ENCORE_PRIMITIVE);
                                         int64_t _binop_72 = (({ _x1_65;}) - ({int64_t _literal_71 = 1; _literal_71;}));
                                         tuple_set(_tuple_70, 0, ((encore_arg_t) {.i = _binop_72}));
                                         tuple_set(_tuple_70, 1, ((encore_arg_t) {.i = _y1_66}));
                                         array_set(_array_69, 0, ((encore_arg_t) {.p = _tuple_70})); _array_69;}));
              }
              else
              {
                int64_t _x1_73;
                int64_t _y1_74;
                int64_t _x2_75;
                int64_t _y2_76;
                if ((({int64_t _tupleCheck_125;
                       _tupleCheck_125 = 1;
                       tuple_t* _tupleAccess_126 = tuple_get(_tuple_8, 0).p;
                       int64_t _tupleCheck_127;
                       _tupleCheck_127 = 1;
                       int64_t _tupleAccess_128 = tuple_get(_tupleAccess_126, 0).i;
                       int64_t _varBinding_129;
                       _x1_73 = _tupleAccess_128;
                       _varBinding_129 = 1;
                       _tupleCheck_127 = (_tupleCheck_127 && _varBinding_129);
                       int64_t _tupleAccess_130 = tuple_get(_tupleAccess_126, 1).i;
                       int64_t _varBinding_131;
                       _y1_74 = _tupleAccess_130;
                       _varBinding_131 = 1;
                       _tupleCheck_127 = (_tupleCheck_127 && _varBinding_131);
                       _tupleCheck_125 = (_tupleCheck_125 && _tupleCheck_127);
                       tuple_t* _tupleAccess_132 = tuple_get(_tuple_8, 1).p;
                       int64_t _tupleCheck_133;
                       _tupleCheck_133 = 1;
                       int64_t _tupleAccess_134 = tuple_get(_tupleAccess_132, 0).i;
                       int64_t _varBinding_135;
                       _x2_75 = _tupleAccess_134;
                       _varBinding_135 = 1;
                       _tupleCheck_133 = (_tupleCheck_133 && _varBinding_135);
                       int64_t _tupleAccess_136 = tuple_get(_tupleAccess_132, 1).i;
                       int64_t _varBinding_137;
                       _y2_76 = _tupleAccess_136;
                       _varBinding_137 = 1;
                       _tupleCheck_133 = (_tupleCheck_133 && _varBinding_137);
                       _tupleCheck_125 = (_tupleCheck_125 && _tupleCheck_133); _tupleCheck_125;}) && ({int64_t _binop_138 = (({ _y1_74;}) > ({ _y2_76;})); _binop_138;})))
                {
                  _match_7 = ((array_t*) ({/* [(x1, y1 - 1)] */;
                                           array_t* _array_77 = array_mk(_ctx, 1, (&(tuple_type)));
                                           tuple_t* _tuple_78 = tuple_mk(_ctx, 2);
                                           tuple_set_type(_tuple_78, 0, ENCORE_PRIMITIVE);
                                           tuple_set_type(_tuple_78, 1, ENCORE_PRIMITIVE);
                                           int64_t _binop_80 = (({ _y1_74;}) - ({int64_t _literal_79 = 1; _literal_79;}));
                                           tuple_set(_tuple_78, 0, ((encore_arg_t) {.i = _x1_73}));
                                           tuple_set(_tuple_78, 1, ((encore_arg_t) {.i = _binop_80}));
                                           array_set(_array_77, 0, ((encore_arg_t) {.p = _tuple_78})); _array_77;}));
                }
                else
                {
                  int64_t _x1_81;
                  int64_t _y1_82;
                  int64_t _x2_83;
                  int64_t _y2_84;
                  if ((({int64_t _tupleCheck_111;
                         _tupleCheck_111 = 1;
                         tuple_t* _tupleAccess_112 = tuple_get(_tuple_8, 0).p;
                         int64_t _tupleCheck_113;
                         _tupleCheck_113 = 1;
                         int64_t _tupleAccess_114 = tuple_get(_tupleAccess_112, 0).i;
                         int64_t _varBinding_115;
                         _x1_81 = _tupleAccess_114;
                         _varBinding_115 = 1;
                         _tupleCheck_113 = (_tupleCheck_113 && _varBinding_115);
                         int64_t _tupleAccess_116 = tuple_get(_tupleAccess_112, 1).i;
                         int64_t _varBinding_117;
                         _y1_82 = _tupleAccess_116;
                         _varBinding_117 = 1;
                         _tupleCheck_113 = (_tupleCheck_113 && _varBinding_117);
                         _tupleCheck_111 = (_tupleCheck_111 && _tupleCheck_113);
                         tuple_t* _tupleAccess_118 = tuple_get(_tuple_8, 1).p;
                         int64_t _tupleCheck_119;
                         _tupleCheck_119 = 1;
                         int64_t _tupleAccess_120 = tuple_get(_tupleAccess_118, 0).i;
                         int64_t _varBinding_121;
                         _x2_83 = _tupleAccess_120;
                         _varBinding_121 = 1;
                         _tupleCheck_119 = (_tupleCheck_119 && _varBinding_121);
                         int64_t _tupleAccess_122 = tuple_get(_tupleAccess_118, 1).i;
                         int64_t _varBinding_123;
                         _y2_84 = _tupleAccess_122;
                         _varBinding_123 = 1;
                         _tupleCheck_119 = (_tupleCheck_119 && _varBinding_123);
                         _tupleCheck_111 = (_tupleCheck_111 && _tupleCheck_119); _tupleCheck_111;}) && ({int64_t _binop_124 = (({ _x1_81;}) < ({ _x2_83;})); _binop_124;})))
                  {
                    _match_7 = ((array_t*) ({/* [(x1 + 1, y1)] */;
                                             array_t* _array_85 = array_mk(_ctx, 1, (&(tuple_type)));
                                             tuple_t* _tuple_86 = tuple_mk(_ctx, 2);
                                             tuple_set_type(_tuple_86, 0, ENCORE_PRIMITIVE);
                                             tuple_set_type(_tuple_86, 1, ENCORE_PRIMITIVE);
                                             int64_t _binop_88 = (({ _x1_81;}) + ({int64_t _literal_87 = 1; _literal_87;}));
                                             tuple_set(_tuple_86, 0, ((encore_arg_t) {.i = _binop_88}));
                                             tuple_set(_tuple_86, 1, ((encore_arg_t) {.i = _y1_82}));
                                             array_set(_array_85, 0, ((encore_arg_t) {.p = _tuple_86})); _array_85;}));
                  }
                  else
                  {
                    int64_t _x1_89;
                    int64_t _y1_90;
                    int64_t _x2_91;
                    int64_t _y2_92;
                    if ((({int64_t _tupleCheck_97;
                           _tupleCheck_97 = 1;
                           tuple_t* _tupleAccess_98 = tuple_get(_tuple_8, 0).p;
                           int64_t _tupleCheck_99;
                           _tupleCheck_99 = 1;
                           int64_t _tupleAccess_100 = tuple_get(_tupleAccess_98, 0).i;
                           int64_t _varBinding_101;
                           _x1_89 = _tupleAccess_100;
                           _varBinding_101 = 1;
                           _tupleCheck_99 = (_tupleCheck_99 && _varBinding_101);
                           int64_t _tupleAccess_102 = tuple_get(_tupleAccess_98, 1).i;
                           int64_t _varBinding_103;
                           _y1_90 = _tupleAccess_102;
                           _varBinding_103 = 1;
                           _tupleCheck_99 = (_tupleCheck_99 && _varBinding_103);
                           _tupleCheck_97 = (_tupleCheck_97 && _tupleCheck_99);
                           tuple_t* _tupleAccess_104 = tuple_get(_tuple_8, 1).p;
                           int64_t _tupleCheck_105;
                           _tupleCheck_105 = 1;
                           int64_t _tupleAccess_106 = tuple_get(_tupleAccess_104, 0).i;
                           int64_t _varBinding_107;
                           _x2_91 = _tupleAccess_106;
                           _varBinding_107 = 1;
                           _tupleCheck_105 = (_tupleCheck_105 && _varBinding_107);
                           int64_t _tupleAccess_108 = tuple_get(_tupleAccess_104, 1).i;
                           int64_t _varBinding_109;
                           _y2_92 = _tupleAccess_108;
                           _varBinding_109 = 1;
                           _tupleCheck_105 = (_tupleCheck_105 && _varBinding_109);
                           _tupleCheck_97 = (_tupleCheck_97 && _tupleCheck_105); _tupleCheck_97;}) && ({int64_t _binop_110 = (({ _y1_90;}) < ({ _y2_92;})); _binop_110;})))
                    {
                      _match_7 = ((array_t*) ({/* [(x1, y1 + 1)] */;
                                               array_t* _array_93 = array_mk(_ctx, 1, (&(tuple_type)));
                                               tuple_t* _tuple_94 = tuple_mk(_ctx, 2);
                                               tuple_set_type(_tuple_94, 0, ENCORE_PRIMITIVE);
                                               tuple_set_type(_tuple_94, 1, ENCORE_PRIMITIVE);
                                               int64_t _binop_96 = (({ _y1_90;}) + ({int64_t _literal_95 = 1; _literal_95;}));
                                               tuple_set(_tuple_94, 0, ((encore_arg_t) {.i = _x1_89}));
                                               tuple_set(_tuple_94, 1, ((encore_arg_t) {.i = _binop_96}));
                                               array_set(_array_93, 0, ((encore_arg_t) {.p = _tuple_94})); _array_93;}));
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
    _ite_0 = ((array_t*) _match_7);
  };
  return _ite_0;
}


void* _enc__method_Agent_move(pony_ctx_t** _ctx, _enc__passive_Agent_t* _this, tuple_t* _enc__arg_in_pos)
{
  (*({ _this;}))._enc__field_pos = _enc__arg_in_pos;
  return UNIT;
}


tuple_t* _enc__method_Agent_pos(pony_ctx_t** _ctx, _enc__passive_Agent_t* _this)
{
  tuple_t* _fieldacc_0 = (*_this)._enc__field_pos;
  return _fieldacc_0;
}


_enc__passive_Agent_t* _enc__method_Agent_copy(pony_ctx_t** _ctx, _enc__passive_Agent_t* _this)
{
  /* embed void fflush(stdout); end */;
  ({fflush(stdout);});
  /* let q = this.pos */;
  /* q = this.pos */;
  tuple_t* _fieldacc_0 = (*_this)._enc__field_pos;
  tuple_t* _q_1 = _fieldacc_0;
  /* let qq = new [(int, int)](|this.targets| - this.i) */;
  /* qq = new [(int, int)](|this.targets| - this.i) */;
  int64_t _binop_6 = (({array_t* _fieldacc_3 = (*_this)._enc__field_targets;
                        int64_t _size_4 = array_size(_fieldacc_3); _size_4;}) - ({int64_t _fieldacc_5 = (*_this)._enc__field_i; _fieldacc_5;}));
  array_t* _array_2 = array_mk(_ctx, _binop_6, (&(tuple_type)));
  array_t* _qq_7 = _array_2;
  /* for i in [ 0 , |qq| by 1 ]
  qq[i] = this.targets[i] */;
  void* _for_8;
  /* Range not generated */;
  int64_t _literal_15 = 0;
  int64_t _size_16 = array_size(_qq_7);
  int64_t _literal_17 = 1;
  int64_t _literal_18 = 1;
  int64_t _step_13 = (_literal_18 * _literal_17);
  range_assert_step(_step_13);
  int64_t _index_9;
  if ((_step_13 > 0))
  {
    _index_9 = _literal_15;
  }
  else
  {
    _index_9 = _size_16;
  };
  while (((_index_9 >= _literal_15) && (_index_9 <= _size_16)))
  {
    int64_t _i_10 = _index_9;
    /* qq[i] = this.targets[i] */;
    array_t* _fieldacc_19 = (*_this)._enc__field_targets;
    tuple_t* _access_20 = array_get(_fieldacc_19, _i_10).p;
    array_set(_qq_7, _i_10, ((encore_arg_t) {.p = _access_20}));
    _for_8 = UNIT;
    _index_9 = (_index_9 + _step_13);
  };
  /* new Agent(q, qq, this.id) */;
  _enc__passive_Agent_t* _new_21 = _enc__constructor_Agent(_ctx);
  int64_t _fieldacc_22 = (*_this)._enc__field_id;
  _enc__type_init_Agent(_new_21);
  _enc__method_Agent__init(_ctx, _new_21, _q_1, _qq_7, _fieldacc_22);
  return _new_21;
}


static void _enc__dispatch_Agent(pony_ctx_t** _ctx, pony_actor_t* _a, pony_msg_t* _m)
{
  /* Stub! Might be used when we have dynamic dispatch on passive classes */
}


pony_type_t _enc__passive_Agent_type = {.id=_ENC__ID_Agent, .size=sizeof(_enc__passive_Agent_t), .trace=_enc__trace_Agent, .dispatch=_enc__dispatch_Agent, .vtable=trait_method_selector};
