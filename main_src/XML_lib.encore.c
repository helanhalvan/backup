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


void _enc__type_init__encore_libs_master_XML_XML_XML_lib(_enc__passive__encore_libs_master_XML_XML_XML_lib_t* this, ... )
{
  va_list params;
  va_start(params, this);
  va_end(params);
}


void _enc__trace__encore_libs_master_XML_XML_XML_lib(pony_ctx_t* _ctx_arg, void* p)
{
  pony_ctx_t** _ctx = (&(_ctx_arg));
  _enc__passive__encore_libs_master_XML_XML_XML_lib_t* _this = p;
}


_enc__passive__encore_libs_master_XML_XML_XML_lib_t* _enc__constructor__encore_libs_master_XML_XML_XML_lib(pony_ctx_t** _ctx)
{
  _enc__passive__encore_libs_master_XML_XML_XML_lib_t* this = ((_enc__passive__encore_libs_master_XML_XML_XML_lib_t*) encore_alloc((*_ctx), sizeof(_enc__passive__encore_libs_master_XML_XML_XML_lib_t)));
  this->_enc__self_type = (&(_enc__passive__encore_libs_master_XML_XML_XML_lib_type));
  return this;
}


void* _enc__method__encore_libs_master_XML_XML_XML_lib__init(pony_ctx_t** _ctx, _enc__passive__encore_libs_master_XML_XML_XML_lib_t* _this)
{
  /* () */;
  UNIT;
  return UNIT;
}


option_t* _enc__method__encore_libs_master_XML_XML_XML_lib_new_XML_node(pony_ctx_t** _ctx, _enc__passive__encore_libs_master_XML_XML_XML_lib_t* _this, _enc__passive_String_String_t* _enc__arg_s)
{
  /* let node = new XML_node() */;
  /* node = new XML_node() */;
  _enc__passive__encore_libs_master_XML_XML_XML_node_t* _new_0 = _enc__constructor__encore_libs_master_XML_XML_XML_node(_ctx);
  _enc__type_init__encore_libs_master_XML_XML_XML_node(_new_0);
  _enc__method__encore_libs_master_XML_XML_XML_node__init(_ctx, _new_0);
  _enc__passive__encore_libs_master_XML_XML_XML_node_t* _node_1 = _new_0;
  /* let bad = false */;
  /* bad = false */;
  int64_t _literal_2 = 0/*False*/;
  int64_t _bad_3 = _literal_2;
  /* s.trim() */;
  check_receiver(_enc__arg_s, ".", "s", "trim", "\"./encore-libs-master/XML/XML.enc\" (line 50, column 5)");
  _enc__passive_String_String_t* _sync_method_call_4 = _enc__method_String_String_trim(_ctx, _enc__arg_s);
  /* node.s_rep = s */;
  (*({ _node_1;}))._enc__field_s_rep = _enc__arg_s;
  /* let cont = new [String](s.occurrences("<")) */;
  /* cont = new [String](s.occurrences("<")) */;
  check_receiver(_enc__arg_s, ".", "s", "occurrences", "\"./encore-libs-master/XML/XML.enc\" (line 52, column 29)");
  _enc__passive_String_String_t* _new_7 = _enc__constructor_String_String(_ctx);
  char* _embed_8 = ({"<";});
  _enc__type_init_String_String(_new_7);
  _enc__method_String_String__init(_ctx, _new_7, _embed_8);
  int64_t _sync_method_call_6 = _enc__method_String_String_occurrences(_ctx, _enc__arg_s, _new_7);
  array_t* _array_5 = array_mk(_ctx, _sync_method_call_6, (&(_enc__passive_String_String_type)));
  array_t* _cont_9 = _array_5;
  /* if |cont| == 1 then
  {let r = match (s.char_at(0), 
                  s.char_at(s.size() - 2), 
                  s.char_at(s.size() - 1)) with
             (Just '<', Just '/', Just '>') => {node.name = s;
                                                this.ext_atribs(node, node.name);
                                                Just node}
             _ => Nothing
           ;
   embed void return #{r}#; end} */;
  void* _ite_10;
  if (({int64_t _binop_13 = (({int64_t _size_11 = array_size(_cont_9); _size_11;}) == ({int64_t _literal_12 = 1; _literal_12;})); _binop_13;}))
  {
    /* let r = match (s.char_at(0), 
               s.char_at(s.size() - 2), 
               s.char_at(s.size() - 1)) with
          (Just '<', Just '/', Just '>') => {node.name = s;
                                             this.ext_atribs(node, node.name);
                                             Just node}
          _ => Nothing
         */;
    /* r = match (s.char_at(0), 
       s.char_at(s.size() - 2), 
       s.char_at(s.size() - 1)) with
  (Just '<', Just '/', Just '>') => {node.name = s;
                                     this.ext_atribs(node, node.name);
                                     Just node}
  _ => Nothing
 */;
    tuple_t* _tuple_15 = tuple_mk(_ctx, 3);
    tuple_set_type(_tuple_15, 0, (&(option_type)));
    tuple_set_type(_tuple_15, 1, (&(option_type)));
    tuple_set_type(_tuple_15, 2, (&(option_type)));
    check_receiver(_enc__arg_s, ".", "s", "char_at", "\"./encore-libs-master/XML/XML.enc\" (line 55, column 23)");
    int64_t _literal_17 = 0;
    option_t* _sync_method_call_16 = _enc__method_String_String_char_at(_ctx, _enc__arg_s, _literal_17);
    check_receiver(_enc__arg_s, ".", "s", "char_at", "\"./encore-libs-master/XML/XML.enc\" (line 55, column 36)");
    int64_t _binop_21 = (({check_receiver(_enc__arg_s, ".", "s", "size", "\"./encore-libs-master/XML/XML.enc\" (line 55, column 47)");
                           int64_t _sync_method_call_19 = _enc__method_String_String_size(_ctx, _enc__arg_s); _sync_method_call_19;}) - ({int64_t _literal_20 = 2; _literal_20;}));
    option_t* _sync_method_call_18 = _enc__method_String_String_char_at(_ctx, _enc__arg_s, _binop_21);
    check_receiver(_enc__arg_s, ".", "s", "char_at", "\"./encore-libs-master/XML/XML.enc\" (line 55, column 59)");
    int64_t _binop_25 = (({check_receiver(_enc__arg_s, ".", "s", "size", "\"./encore-libs-master/XML/XML.enc\" (line 55, column 69)");
                           int64_t _sync_method_call_23 = _enc__method_String_String_size(_ctx, _enc__arg_s); _sync_method_call_23;}) - ({int64_t _literal_24 = 1; _literal_24;}));
    option_t* _sync_method_call_22 = _enc__method_String_String_char_at(_ctx, _enc__arg_s, _binop_25);
    tuple_set(_tuple_15, 0, ((encore_arg_t) {.p = _sync_method_call_16}));
    tuple_set(_tuple_15, 1, ((encore_arg_t) {.p = _sync_method_call_18}));
    tuple_set(_tuple_15, 2, ((encore_arg_t) {.p = _sync_method_call_22}));
    option_t* _match_14;
    if ((({int64_t _tupleCheck_33;
           _tupleCheck_33 = 1;
           option_t* _tupleAccess_34 = tuple_get(_tuple_15, 0).p;
           int64_t _optionCheck_36;
           _optionCheck_36 = ((JUST == (*_tupleAccess_34).tag) && ({int64_t _valueCheck_37;
                                                                    char _optionVal_35 = (*_tupleAccess_34).val.i;
                                                                    _valueCheck_37 = (({char _literal_38 = '<'; _literal_38;}) == _optionVal_35); _valueCheck_37;}));
           _tupleCheck_33 = (_tupleCheck_33 && _optionCheck_36);
           option_t* _tupleAccess_39 = tuple_get(_tuple_15, 1).p;
           int64_t _optionCheck_41;
           _optionCheck_41 = ((JUST == (*_tupleAccess_39).tag) && ({int64_t _valueCheck_42;
                                                                    char _optionVal_40 = (*_tupleAccess_39).val.i;
                                                                    _valueCheck_42 = (({char _literal_43 = '/'; _literal_43;}) == _optionVal_40); _valueCheck_42;}));
           _tupleCheck_33 = (_tupleCheck_33 && _optionCheck_41);
           option_t* _tupleAccess_44 = tuple_get(_tuple_15, 2).p;
           int64_t _optionCheck_46;
           _optionCheck_46 = ((JUST == (*_tupleAccess_44).tag) && ({int64_t _valueCheck_47;
                                                                    char _optionVal_45 = (*_tupleAccess_44).val.i;
                                                                    _valueCheck_47 = (({char _literal_48 = '>'; _literal_48;}) == _optionVal_45); _valueCheck_47;}));
           _tupleCheck_33 = (_tupleCheck_33 && _optionCheck_46); _tupleCheck_33;}) && ({int64_t _literal_49 = 1/*True*/; _literal_49;})))
    {
      _match_14 = ((option_t*) ({/* node.name = s */;
                                 (*({ _node_1;}))._enc__field_name = _enc__arg_s;
                                 /* this.ext_atribs(node, node.name) */;
                                 check_receiver(_this, ".", "this", "ext_atribs", "\"./encore-libs-master/XML/XML.enc\" (line 57, column 66)");
                                 _enc__passive_String_String_t* _fieldacc_27 = (*_node_1)._enc__field_name;
                                 void* _sync_method_call_26 = _enc__method__encore_libs_master_XML_XML_XML_lib_ext_atribs(_ctx, _this, _node_1, _fieldacc_27);
                                 /* Just node */;
                                 option_t* _option_28 = option_mk(_ctx, JUST, ((encore_arg_t) {.p = _node_1}), (&(_enc__passive__encore_libs_master_XML_XML_XML_node_type))); _option_28;}));
    }
    else
    {
      tuple_t* ___29;
      if ((({int64_t _varBinding_31;
             ___29 = _tuple_15;
             _varBinding_31 = 1; _varBinding_31;}) && ({int64_t _literal_32 = 1/*True*/; _literal_32;})))
      {
        _match_14 = ((option_t*) ({option_t* _option_30 = (&(DEFAULT_NOTHING)); _option_30;}));
      }
      else
      {
        printf("*** Runtime error: No matching clause was found ***\n");
        exit(1);
      };
    };
    option_t* _r_50 = _match_14;
    /* embed void return #{r}#; end */;
    ({return _r_50;});
    _ite_10 = ((void*) UNIT);
  }
  else
  {
    UNIT;
    _ite_10 = ((void*) UNIT);
  };
  /* let start = s.find("<") */;
  /* start = s.find("<") */;
  check_receiver(_enc__arg_s, ".", "s", "find", "\"./encore-libs-master/XML/XML.enc\" (line 62, column 17)");
  _enc__passive_String_String_t* _new_52 = _enc__constructor_String_String(_ctx);
  char* _embed_53 = ({"<";});
  _enc__type_init_String_String(_new_52);
  _enc__method_String_String__init(_ctx, _new_52, _embed_53);
  int64_t _sync_method_call_51 = _enc__method_String_String_find(_ctx, _enc__arg_s, _new_52);
  int64_t _start_54 = _sync_method_call_51;
  /* let finnish = 0 */;
  /* finnish = 0 */;
  int64_t _literal_55 = 0;
  int64_t _finnish_56 = _literal_55;
  /* for i in [ 0 , |cont| - 1 by 1 ]
  {finnish = s.find_from(">", start);
   cont[i] = match s.substring(start, finnish + 1) with
               Just sub => sub
               Nothing => ""
             ;
   start = s.find_from("<", finnish)} */;
  void* _for_57;
  /* Range not generated */;
  int64_t _literal_64 = 0;
  int64_t _binop_67 = (({int64_t _size_65 = array_size(_cont_9); _size_65;}) - ({int64_t _literal_66 = 1; _literal_66;}));
  int64_t _literal_68 = 1;
  int64_t _literal_69 = 1;
  int64_t _step_62 = (_literal_69 * _literal_68);
  range_assert_step(_step_62);
  int64_t _index_58;
  if ((_step_62 > 0))
  {
    _index_58 = _literal_64;
  }
  else
  {
    _index_58 = _binop_67;
  };
  while (((_index_58 >= _literal_64) && (_index_58 <= _binop_67)))
  {
    int64_t _i_59 = _index_58;
    /* finnish = s.find_from(">", start) */;
    check_receiver(_enc__arg_s, ".", "s", "find_from", "\"./encore-libs-master/XML/XML.enc\" (line 66, column 17)");
    _enc__passive_String_String_t* _new_71 = _enc__constructor_String_String(_ctx);
    char* _embed_72 = ({">";});
    _enc__type_init_String_String(_new_71);
    _enc__method_String_String__init(_ctx, _new_71, _embed_72);
    int64_t _sync_method_call_70 = _enc__method_String_String_find_from(_ctx, _enc__arg_s, _new_71, _start_54);
    _finnish_56 = _sync_method_call_70;
    /* cont[i] = match s.substring(start, finnish + 1) with
            Just sub => sub
            Nothing => ""
           */;
    /* match s.substring(start, finnish + 1) with
  Just sub => sub
  Nothing => ""
 */;
    check_receiver(_enc__arg_s, ".", "s", "substring", "\"./encore-libs-master/XML/XML.enc\" (line 67, column 24)");
    int64_t _binop_76 = (({ _finnish_56;}) + ({int64_t _literal_75 = 1; _literal_75;}));
    option_t* _sync_method_call_74 = _enc__method_String_String_substring(_ctx, _enc__arg_s, _start_54, _binop_76);
    _enc__passive_String_String_t* _match_73;
    _enc__passive_String_String_t* _sub_77;
    if ((({int64_t _optionCheck_84;
           _optionCheck_84 = ((JUST == (*_sync_method_call_74).tag) && ({int64_t _varBinding_85;
                                                                         _enc__passive_String_String_t* _optionVal_83 = (*_sync_method_call_74).val.p;
                                                                         _sub_77 = _optionVal_83;
                                                                         _varBinding_85 = 1; _varBinding_85;})); _optionCheck_84;}) && ({int64_t _literal_86 = 1/*True*/; _literal_86;})))
    {
      _match_73 = ((_enc__passive_String_String_t*) ({ _sub_77;}));
    }
    else
    {
      if ((({int64_t _valueCheck_80;
             _valueCheck_80 = (({option_t* _option_81 = (&(DEFAULT_NOTHING)); _option_81;}) == _sync_method_call_74); _valueCheck_80;}) && ({int64_t _literal_82 = 1/*True*/; _literal_82;})))
      {
        _match_73 = ((_enc__passive_String_String_t*) ({_enc__passive_String_String_t* _new_78 = _enc__constructor_String_String(_ctx);
                                                        char* _embed_79 = ({"";});
                                                        _enc__type_init_String_String(_new_78);
                                                        _enc__method_String_String__init(_ctx, _new_78, _embed_79); _new_78;}));
      }
      else
      {
        printf("*** Runtime error: No matching clause was found ***\n");
        exit(1);
      };
    };
    array_set(_cont_9, _i_59, ((encore_arg_t) {.p = _match_73}));
    /* start = s.find_from("<", finnish) */;
    check_receiver(_enc__arg_s, ".", "s", "find_from", "\"./encore-libs-master/XML/XML.enc\" (line 70, column 15)");
    _enc__passive_String_String_t* _new_88 = _enc__constructor_String_String(_ctx);
    char* _embed_89 = ({"<";});
    _enc__type_init_String_String(_new_88);
    _enc__method_String_String__init(_ctx, _new_88, _embed_89);
    int64_t _sync_method_call_87 = _enc__method_String_String_find_from(_ctx, _enc__arg_s, _new_88, _finnish_56);
    _start_54 = _sync_method_call_87;
    _for_57 = UNIT;
    _index_58 = (_index_58 + _step_62);
  };
  /* node.name = cont[0] */;
  int64_t _literal_90 = 0;
  _enc__passive_String_String_t* _access_91 = array_get(_cont_9, _literal_90).p;
  (*({ _node_1;}))._enc__field_name = _access_91;
  /* this.ext_atribs(node, node.name) */;
  check_receiver(_this, ".", "this", "ext_atribs", "\"./encore-libs-master/XML/XML.enc\" (line 73, column 5)");
  _enc__passive_String_String_t* _fieldacc_93 = (*_node_1)._enc__field_name;
  void* _sync_method_call_92 = _enc__method__encore_libs_master_XML_XML_XML_lib_ext_atribs(_ctx, _this, _node_1, _fieldacc_93);
  /* if this.pair(node.name, cont[|cont| - 1]) then
  {node.comments = new [String](|cont|);
   let ci = 0;
   let babies = new [String](|cont|);
   let j = 0;
   let temp = "";
   let level = 0;
   for i in [ 1 , |cont| - 2 by 1 ]
     match (level, this.tag_type(cont[i])) with
       (0, 'c') => {node.comments[ci] = cont[i];
                    ci = ci + 1;
                    ()}
       (0, 't') => {babies[j] = cont[i];
                    j = j + 1;
                    ()}
       (1, 'e') => {babies[j] = temp.concatenate(cont[i]);
                    temp = "";
                    j = j + 1;
                    level = 0;
                    ()}
       (X, 'e') => {temp = temp.concatenate(cont[i]);
                    level = X - 1;
                    ()}
       (X, 's') => {temp = temp.concatenate(cont[i]);
                    level = X + 1;
                    ()}
       _ => {temp = temp.concatenate(cont[i]);
             ()}
     ;
   node.children = new [XML_node](j);
   for i in [ 0 , j - 1 by 1 ]
     match this.new_XML_node(babies[i]) with
       Just xml => {node.children[i] = xml;
                    ()}
       Nothing => {bad = true;
                   ()}
     ;
   if bad == false then
     Just node
   else
     Nothing}
else
  Nothing */;
  option_t* _ite_94;
  if (({check_receiver(_this, ".", "this", "pair", "\"./encore-libs-master/XML/XML.enc\" (line 74, column 9)");
        _enc__passive_String_String_t* _fieldacc_96 = (*_node_1)._enc__field_name;
        int64_t _binop_99 = (({int64_t _size_97 = array_size(_cont_9); _size_97;}) - ({int64_t _literal_98 = 1; _literal_98;}));
        _enc__passive_String_String_t* _access_100 = array_get(_cont_9, _binop_99).p;
        int64_t _sync_method_call_95 = _enc__method__encore_libs_master_XML_XML_XML_lib_pair(_ctx, _this, _fieldacc_96, _access_100); _sync_method_call_95;}))
  {
    /* node.comments = new [String](|cont|) */;
    int64_t _size_102 = array_size(_cont_9);
    array_t* _array_101 = array_mk(_ctx, _size_102, (&(_enc__passive_String_String_type)));
    (*({ _node_1;}))._enc__field_comments = _array_101;
    /* let ci = 0 */;
    /* ci = 0 */;
    int64_t _literal_103 = 0;
    int64_t _ci_104 = _literal_103;
    /* let babies = new [String](|cont|) */;
    /* babies = new [String](|cont|) */;
    int64_t _size_106 = array_size(_cont_9);
    array_t* _array_105 = array_mk(_ctx, _size_106, (&(_enc__passive_String_String_type)));
    array_t* _babies_107 = _array_105;
    /* let j = 0 */;
    /* j = 0 */;
    int64_t _literal_108 = 0;
    int64_t _j_109 = _literal_108;
    /* let temp = "" */;
    /* temp = "" */;
    _enc__passive_String_String_t* _new_110 = _enc__constructor_String_String(_ctx);
    char* _embed_111 = ({"";});
    _enc__type_init_String_String(_new_110);
    _enc__method_String_String__init(_ctx, _new_110, _embed_111);
    _enc__passive_String_String_t* _temp_112 = _new_110;
    /* let level = 0 */;
    /* level = 0 */;
    int64_t _literal_113 = 0;
    int64_t _level_114 = _literal_113;
    /* for i in [ 1 , |cont| - 2 by 1 ]
  match (level, this.tag_type(cont[i])) with
    (0, 'c') => {node.comments[ci] = cont[i];
                 ci = ci + 1;
                 ()}
    (0, 't') => {babies[j] = cont[i];
                 j = j + 1;
                 ()}
    (1, 'e') => {babies[j] = temp.concatenate(cont[i]);
                 temp = "";
                 j = j + 1;
                 level = 0;
                 ()}
    (X, 'e') => {temp = temp.concatenate(cont[i]);
                 level = X - 1;
                 ()}
    (X, 's') => {temp = temp.concatenate(cont[i]);
                 level = X + 1;
                 ()}
    _ => {temp = temp.concatenate(cont[i]);
          ()}
   */;
    void* _for_115;
    /* Range not generated */;
    int64_t _literal_122 = 1;
    int64_t _binop_125 = (({int64_t _size_123 = array_size(_cont_9); _size_123;}) - ({int64_t _literal_124 = 2; _literal_124;}));
    int64_t _literal_126 = 1;
    int64_t _literal_127 = 1;
    int64_t _step_120 = (_literal_127 * _literal_126);
    range_assert_step(_step_120);
    int64_t _index_116;
    if ((_step_120 > 0))
    {
      _index_116 = _literal_122;
    }
    else
    {
      _index_116 = _binop_125;
    };
    while (((_index_116 >= _literal_122) && (_index_116 <= _binop_125)))
    {
      int64_t _i_117 = _index_116;
      /* match (level, this.tag_type(cont[i])) with
  (0, 'c') => {node.comments[ci] = cont[i];
               ci = ci + 1;
               ()}
  (0, 't') => {babies[j] = cont[i];
               j = j + 1;
               ()}
  (1, 'e') => {babies[j] = temp.concatenate(cont[i]);
               temp = "";
               j = j + 1;
               level = 0;
               ()}
  (X, 'e') => {temp = temp.concatenate(cont[i]);
               level = X - 1;
               ()}
  (X, 's') => {temp = temp.concatenate(cont[i]);
               level = X + 1;
               ()}
  _ => {temp = temp.concatenate(cont[i]);
        ()}
 */;
      tuple_t* _tuple_129 = tuple_mk(_ctx, 2);
      tuple_set_type(_tuple_129, 0, ENCORE_PRIMITIVE);
      tuple_set_type(_tuple_129, 1, ENCORE_PRIMITIVE);
      check_receiver(_this, ".", "this", "tag_type", "\"./encore-libs-master/XML/XML.enc\" (line 84, column 22)");
      _enc__passive_String_String_t* _access_131 = array_get(_cont_9, _i_117).p;
      char _sync_method_call_130 = _enc__method__encore_libs_master_XML_XML_XML_lib_tag_type(_ctx, _this, _access_131);
      tuple_set(_tuple_129, 0, ((encore_arg_t) {.i = _level_114}));
      tuple_set(_tuple_129, 1, ((encore_arg_t) {.i = _sync_method_call_130}));
      void* _match_128;
      if ((({int64_t _tupleCheck_191;
             _tupleCheck_191 = 1;
             int64_t _tupleAccess_192 = tuple_get(_tuple_129, 0).i;
             int64_t _valueCheck_193;
             _valueCheck_193 = (({int64_t _literal_194 = 0; _literal_194;}) == _tupleAccess_192);
             _tupleCheck_191 = (_tupleCheck_191 && _valueCheck_193);
             char _tupleAccess_195 = tuple_get(_tuple_129, 1).i;
             int64_t _valueCheck_196;
             _valueCheck_196 = (({char _literal_197 = 'c'; _literal_197;}) == _tupleAccess_195);
             _tupleCheck_191 = (_tupleCheck_191 && _valueCheck_196); _tupleCheck_191;}) && ({int64_t _literal_198 = 1/*True*/; _literal_198;})))
      {
        _match_128 = ((void*) ({/* node.comments[ci] = cont[i] */;
                                _enc__passive_String_String_t* _access_132 = array_get(_cont_9, _i_117).p;
                                array_t* _fieldacc_133 = (*_node_1)._enc__field_comments;
                                array_set(_fieldacc_133, _ci_104, ((encore_arg_t) {.p = _access_132}));
                                /* ci = ci + 1 */;
                                int64_t _binop_135 = (({ _ci_104;}) + ({int64_t _literal_134 = 1; _literal_134;}));
                                _ci_104 = _binop_135;
                                /* () */;
                                UNIT; UNIT;}));
      }
      else
      {
        if ((({int64_t _tupleCheck_183;
               _tupleCheck_183 = 1;
               int64_t _tupleAccess_184 = tuple_get(_tuple_129, 0).i;
               int64_t _valueCheck_185;
               _valueCheck_185 = (({int64_t _literal_186 = 0; _literal_186;}) == _tupleAccess_184);
               _tupleCheck_183 = (_tupleCheck_183 && _valueCheck_185);
               char _tupleAccess_187 = tuple_get(_tuple_129, 1).i;
               int64_t _valueCheck_188;
               _valueCheck_188 = (({char _literal_189 = 't'; _literal_189;}) == _tupleAccess_187);
               _tupleCheck_183 = (_tupleCheck_183 && _valueCheck_188); _tupleCheck_183;}) && ({int64_t _literal_190 = 1/*True*/; _literal_190;})))
        {
          _match_128 = ((void*) ({/* babies[j] = cont[i] */;
                                  _enc__passive_String_String_t* _access_136 = array_get(_cont_9, _i_117).p;
                                  array_set(_babies_107, _j_109, ((encore_arg_t) {.p = _access_136}));
                                  /* j = j + 1 */;
                                  int64_t _binop_138 = (({ _j_109;}) + ({int64_t _literal_137 = 1; _literal_137;}));
                                  _j_109 = _binop_138;
                                  /* () */;
                                  UNIT; UNIT;}));
        }
        else
        {
          if ((({int64_t _tupleCheck_175;
                 _tupleCheck_175 = 1;
                 int64_t _tupleAccess_176 = tuple_get(_tuple_129, 0).i;
                 int64_t _valueCheck_177;
                 _valueCheck_177 = (({int64_t _literal_178 = 1; _literal_178;}) == _tupleAccess_176);
                 _tupleCheck_175 = (_tupleCheck_175 && _valueCheck_177);
                 char _tupleAccess_179 = tuple_get(_tuple_129, 1).i;
                 int64_t _valueCheck_180;
                 _valueCheck_180 = (({char _literal_181 = 'e'; _literal_181;}) == _tupleAccess_179);
                 _tupleCheck_175 = (_tupleCheck_175 && _valueCheck_180); _tupleCheck_175;}) && ({int64_t _literal_182 = 1/*True*/; _literal_182;})))
          {
            _match_128 = ((void*) ({/* babies[j] = temp.concatenate(cont[i]) */;
                                    check_receiver(_temp_112, ".", "temp", "concatenate", "\"./encore-libs-master/XML/XML.enc\" (line 87, column 40)");
                                    _enc__passive_String_String_t* _access_140 = array_get(_cont_9, _i_117).p;
                                    _enc__passive_String_String_t* _sync_method_call_139 = _enc__method_String_String_concatenate(_ctx, _temp_112, _access_140);
                                    array_set(_babies_107, _j_109, ((encore_arg_t) {.p = _sync_method_call_139}));
                                    /* temp = "" */;
                                    _enc__passive_String_String_t* _new_141 = _enc__constructor_String_String(_ctx);
                                    char* _embed_142 = ({"";});
                                    _enc__type_init_String_String(_new_141);
                                    _enc__method_String_String__init(_ctx, _new_141, _embed_142);
                                    _temp_112 = _new_141;
                                    /* j = j + 1 */;
                                    int64_t _binop_144 = (({ _j_109;}) + ({int64_t _literal_143 = 1; _literal_143;}));
                                    _j_109 = _binop_144;
                                    /* level = 0 */;
                                    int64_t _literal_145 = 0;
                                    _level_114 = _literal_145;
                                    /* () */;
                                    UNIT; UNIT;}));
          }
          else
          {
            int64_t _X_146;
            if ((({int64_t _tupleCheck_168;
                   _tupleCheck_168 = 1;
                   int64_t _tupleAccess_169 = tuple_get(_tuple_129, 0).i;
                   int64_t _varBinding_170;
                   _X_146 = _tupleAccess_169;
                   _varBinding_170 = 1;
                   _tupleCheck_168 = (_tupleCheck_168 && _varBinding_170);
                   char _tupleAccess_171 = tuple_get(_tuple_129, 1).i;
                   int64_t _valueCheck_172;
                   _valueCheck_172 = (({char _literal_173 = 'e'; _literal_173;}) == _tupleAccess_171);
                   _tupleCheck_168 = (_tupleCheck_168 && _valueCheck_172); _tupleCheck_168;}) && ({int64_t _literal_174 = 1/*True*/; _literal_174;})))
            {
              _match_128 = ((void*) ({/* temp = temp.concatenate(cont[i]) */;
                                      check_receiver(_temp_112, ".", "temp", "concatenate", "\"./encore-libs-master/XML/XML.enc\" (line 88, column 35)");
                                      _enc__passive_String_String_t* _access_148 = array_get(_cont_9, _i_117).p;
                                      _enc__passive_String_String_t* _sync_method_call_147 = _enc__method_String_String_concatenate(_ctx, _temp_112, _access_148);
                                      _temp_112 = _sync_method_call_147;
                                      /* level = X - 1 */;
                                      int64_t _binop_150 = (({ _X_146;}) - ({int64_t _literal_149 = 1; _literal_149;}));
                                      _level_114 = _binop_150;
                                      /* () */;
                                      UNIT; UNIT;}));
            }
            else
            {
              int64_t _X_151;
              if ((({int64_t _tupleCheck_161;
                     _tupleCheck_161 = 1;
                     int64_t _tupleAccess_162 = tuple_get(_tuple_129, 0).i;
                     int64_t _varBinding_163;
                     _X_151 = _tupleAccess_162;
                     _varBinding_163 = 1;
                     _tupleCheck_161 = (_tupleCheck_161 && _varBinding_163);
                     char _tupleAccess_164 = tuple_get(_tuple_129, 1).i;
                     int64_t _valueCheck_165;
                     _valueCheck_165 = (({char _literal_166 = 's'; _literal_166;}) == _tupleAccess_164);
                     _tupleCheck_161 = (_tupleCheck_161 && _valueCheck_165); _tupleCheck_161;}) && ({int64_t _literal_167 = 1/*True*/; _literal_167;})))
              {
                _match_128 = ((void*) ({/* temp = temp.concatenate(cont[i]) */;
                                        check_receiver(_temp_112, ".", "temp", "concatenate", "\"./encore-libs-master/XML/XML.enc\" (line 89, column 35)");
                                        _enc__passive_String_String_t* _access_153 = array_get(_cont_9, _i_117).p;
                                        _enc__passive_String_String_t* _sync_method_call_152 = _enc__method_String_String_concatenate(_ctx, _temp_112, _access_153);
                                        _temp_112 = _sync_method_call_152;
                                        /* level = X + 1 */;
                                        int64_t _binop_155 = (({ _X_151;}) + ({int64_t _literal_154 = 1; _literal_154;}));
                                        _level_114 = _binop_155;
                                        /* () */;
                                        UNIT; UNIT;}));
              }
              else
              {
                tuple_t* ___156;
                if ((({int64_t _varBinding_159;
                       ___156 = _tuple_129;
                       _varBinding_159 = 1; _varBinding_159;}) && ({int64_t _literal_160 = 1/*True*/; _literal_160;})))
                {
                  _match_128 = ((void*) ({/* temp = temp.concatenate(cont[i]) */;
                                          check_receiver(_temp_112, ".", "temp", "concatenate", "\"./encore-libs-master/XML/XML.enc\" (line 90, column 28)");
                                          _enc__passive_String_String_t* _access_158 = array_get(_cont_9, _i_117).p;
                                          _enc__passive_String_String_t* _sync_method_call_157 = _enc__method_String_String_concatenate(_ctx, _temp_112, _access_158);
                                          _temp_112 = _sync_method_call_157;
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
      _for_115 = _match_128;
      _index_116 = (_index_116 + _step_120);
    };
    /* node.children = new [XML_node](j) */;
    array_t* _array_199 = array_mk(_ctx, _j_109, (&(_enc__passive__encore_libs_master_XML_XML_XML_node_type)));
    (*({ _node_1;}))._enc__field_children = _array_199;
    /* for i in [ 0 , j - 1 by 1 ]
  match this.new_XML_node(babies[i]) with
    Just xml => {node.children[i] = xml;
                 ()}
    Nothing => {bad = true;
                ()}
   */;
    void* _for_200;
    /* Range not generated */;
    int64_t _literal_207 = 0;
    int64_t _binop_209 = (({ _j_109;}) - ({int64_t _literal_208 = 1; _literal_208;}));
    int64_t _literal_210 = 1;
    int64_t _literal_211 = 1;
    int64_t _step_205 = (_literal_211 * _literal_210);
    range_assert_step(_step_205);
    int64_t _index_201;
    if ((_step_205 > 0))
    {
      _index_201 = _literal_207;
    }
    else
    {
      _index_201 = _binop_209;
    };
    while (((_index_201 >= _literal_207) && (_index_201 <= _binop_209)))
    {
      int64_t _i_202 = _index_201;
      /* match this.new_XML_node(babies[i]) with
  Just xml => {node.children[i] = xml;
               ()}
  Nothing => {bad = true;
              ()}
 */;
      check_receiver(_this, ".", "this", "new_XML_node", "\"./encore-libs-master/XML/XML.enc\" (line 95, column 15)");
      _enc__passive_String_String_t* _access_214 = array_get(_babies_107, _i_202).p;
      option_t* _sync_method_call_213 = _enc__method__encore_libs_master_XML_XML_XML_lib_new_XML_node(_ctx, _this, _access_214);
      void* _match_212;
      _enc__passive__encore_libs_master_XML_XML_XML_node_t* _xml_215;
      if ((({int64_t _optionCheck_222;
             _optionCheck_222 = ((JUST == (*_sync_method_call_213).tag) && ({int64_t _varBinding_223;
                                                                             _enc__passive__encore_libs_master_XML_XML_XML_node_t* _optionVal_221 = (*_sync_method_call_213).val.p;
                                                                             _xml_215 = _optionVal_221;
                                                                             _varBinding_223 = 1; _varBinding_223;})); _optionCheck_222;}) && ({int64_t _literal_224 = 1/*True*/; _literal_224;})))
      {
        _match_212 = ((void*) ({/* node.children[i] = xml */;
                                array_t* _fieldacc_216 = (*_node_1)._enc__field_children;
                                array_set(_fieldacc_216, _i_202, ((encore_arg_t) {.p = _xml_215}));
                                /* () */;
                                UNIT; UNIT;}));
      }
      else
      {
        if ((({int64_t _valueCheck_218;
               _valueCheck_218 = (({option_t* _option_219 = (&(DEFAULT_NOTHING)); _option_219;}) == _sync_method_call_213); _valueCheck_218;}) && ({int64_t _literal_220 = 1/*True*/; _literal_220;})))
        {
          _match_212 = ((void*) ({/* bad = true */;
                                  int64_t _literal_217 = 1/*True*/;
                                  _bad_3 = _literal_217;
                                  /* () */;
                                  UNIT; UNIT;}));
        }
        else
        {
          printf("*** Runtime error: No matching clause was found ***\n");
          exit(1);
        };
      };
      _for_200 = _match_212;
      _index_201 = (_index_201 + _step_205);
    };
    /* if bad == false then
  Just node
else
  Nothing */;
    option_t* _ite_225;
    if (({int64_t _binop_227 = (({ _bad_3;}) == ({int64_t _literal_226 = 0/*False*/; _literal_226;})); _binop_227;}))
    {
      /* Just node */;
      option_t* _option_228 = option_mk(_ctx, JUST, ((encore_arg_t) {.p = _node_1}), (&(_enc__passive__encore_libs_master_XML_XML_XML_node_type)));
      _ite_225 = ((option_t*) _option_228);
    }
    else
    {
      option_t* _option_229 = (&(DEFAULT_NOTHING));
      _ite_225 = ((option_t*) _option_229);
    };
    _ite_94 = ((option_t*) _ite_225);
  }
  else
  {
    /* Nothing */;
    option_t* _option_230 = (&(DEFAULT_NOTHING));
    _ite_94 = ((option_t*) _option_230);
  };
  return ((option_t*) _ite_94);
}


char _enc__method__encore_libs_master_XML_XML_XML_lib_tag_type(pony_ctx_t** _ctx, _enc__passive__encore_libs_master_XML_XML_XML_lib_t* _this, _enc__passive_String_String_t* _enc__arg_s)
{
  /* match s.char_at(1) with
  Just '!' => 'c'
  Just '/' => 'e'
  _ => match s.char_at(s.size() - 2) with
         Just '/' => 't'
         _ => 's'
       
 */;
  check_receiver(_enc__arg_s, ".", "s", "char_at", "\"./encore-libs-master/XML/XML.enc\" (line 109, column 16)");
  int64_t _literal_2 = 1;
  option_t* _sync_method_call_1 = _enc__method_String_String_char_at(_ctx, _enc__arg_s, _literal_2);
  char _match_0;
  if ((({int64_t _optionCheck_29;
         _optionCheck_29 = ((JUST == (*_sync_method_call_1).tag) && ({int64_t _valueCheck_30;
                                                                      char _optionVal_28 = (*_sync_method_call_1).val.i;
                                                                      _valueCheck_30 = (({char _literal_31 = '!'; _literal_31;}) == _optionVal_28); _valueCheck_30;})); _optionCheck_29;}) && ({int64_t _literal_32 = 1/*True*/; _literal_32;})))
  {
    _match_0 = ((char) ({/* 'c' */;
                         char _literal_3 = 'c'; _literal_3;}));
  }
  else
  {
    if ((({int64_t _optionCheck_24;
           _optionCheck_24 = ((JUST == (*_sync_method_call_1).tag) && ({int64_t _valueCheck_25;
                                                                        char _optionVal_23 = (*_sync_method_call_1).val.i;
                                                                        _valueCheck_25 = (({char _literal_26 = '/'; _literal_26;}) == _optionVal_23); _valueCheck_25;})); _optionCheck_24;}) && ({int64_t _literal_27 = 1/*True*/; _literal_27;})))
    {
      _match_0 = ((char) ({/* 'e' */;
                           char _literal_4 = 'e'; _literal_4;}));
    }
    else
    {
      option_t* ___5;
      if ((({int64_t _varBinding_21;
             ___5 = _sync_method_call_1;
             _varBinding_21 = 1; _varBinding_21;}) && ({int64_t _literal_22 = 1/*True*/; _literal_22;})))
      {
        _match_0 = ((char) ({/* match s.char_at(s.size() - 2) with
  Just '/' => 't'
  _ => 's'
 */;
                             check_receiver(_enc__arg_s, ".", "s", "char_at", "\"./encore-libs-master/XML/XML.enc\" (line 115, column 31)");
                             int64_t _binop_10 = (({check_receiver(_enc__arg_s, ".", "s", "size", "\"./encore-libs-master/XML/XML.enc\" (line 115, column 42)");
                                                    int64_t _sync_method_call_8 = _enc__method_String_String_size(_ctx, _enc__arg_s); _sync_method_call_8;}) - ({int64_t _literal_9 = 2; _literal_9;}));
                             option_t* _sync_method_call_7 = _enc__method_String_String_char_at(_ctx, _enc__arg_s, _binop_10);
                             char _match_6;
                             if ((({int64_t _optionCheck_17;
                                    _optionCheck_17 = ((JUST == (*_sync_method_call_7).tag) && ({int64_t _valueCheck_18;
                                                                                                 char _optionVal_16 = (*_sync_method_call_7).val.i;
                                                                                                 _valueCheck_18 = (({char _literal_19 = '/'; _literal_19;}) == _optionVal_16); _valueCheck_18;})); _optionCheck_17;}) && ({int64_t _literal_20 = 1/*True*/; _literal_20;})))
                             {
                               _match_6 = ((char) ({/* 't' */;
                                                    char _literal_11 = 't'; _literal_11;}));
                             }
                             else
                             {
                               option_t* ___12;
                               if ((({int64_t _varBinding_14;
                                      ___12 = _sync_method_call_7;
                                      _varBinding_14 = 1; _varBinding_14;}) && ({int64_t _literal_15 = 1/*True*/; _literal_15;})))
                               {
                                 _match_6 = ((char) ({/* 's' */;
                                                      char _literal_13 = 's'; _literal_13;}));
                               }
                               else
                               {
                                 printf("*** Runtime error: No matching clause was found ***\n");
                                 exit(1);
                               };
                             }; _match_6;}));
      }
      else
      {
        printf("*** Runtime error: No matching clause was found ***\n");
        exit(1);
      };
    };
  };
  return ((char) _match_0);
}


void* _enc__method__encore_libs_master_XML_XML_XML_lib_ext_atribs(pony_ctx_t** _ctx, _enc__passive__encore_libs_master_XML_XML_XML_lib_t* _this, _enc__passive__encore_libs_master_XML_XML_XML_node_t* _enc__arg_node, _enc__passive_String_String_t* _enc__arg_s)
{
  /* node.atribs = new [(String, String)](s.occurrences("=")) */;
  check_receiver(_enc__arg_s, ".", "s", "occurrences", "\"./encore-libs-master/XML/XML.enc\" (line 125, column 44)");
  _enc__passive_String_String_t* _new_2 = _enc__constructor_String_String(_ctx);
  char* _embed_3 = ({"=";});
  _enc__type_init_String_String(_new_2);
  _enc__method_String_String__init(_ctx, _new_2, _embed_3);
  int64_t _sync_method_call_1 = _enc__method_String_String_occurrences(_ctx, _enc__arg_s, _new_2);
  array_t* _array_0 = array_mk(_ctx, _sync_method_call_1, (&(tuple_type)));
  (*({ _enc__arg_node;}))._enc__field_atribs = _array_0;
  /* let eqsign = 0 */;
  /* eqsign = 0 */;
  int64_t _literal_4 = 0;
  int64_t _eqsign_5 = _literal_4;
  /* let space = 0 */;
  /* space = 0 */;
  int64_t _literal_6 = 0;
  int64_t _space_7 = _literal_6;
  /* let value = "" */;
  /* value = "" */;
  _enc__passive_String_String_t* _new_8 = _enc__constructor_String_String(_ctx);
  char* _embed_9 = ({"";});
  _enc__type_init_String_String(_new_8);
  _enc__method_String_String__init(_ctx, _new_8, _embed_9);
  _enc__passive_String_String_t* _value_10 = _new_8;
  /* let key = "" */;
  /* key = "" */;
  _enc__passive_String_String_t* _new_11 = _enc__constructor_String_String(_ctx);
  char* _embed_12 = ({"";});
  _enc__type_init_String_String(_new_11);
  _enc__method_String_String__init(_ctx, _new_11, _embed_12);
  _enc__passive_String_String_t* _key_13 = _new_11;
  /* for i in [ 0 , |node.atribs| - 1 by 1 ]
  {space = s.find_from(" ", eqsign);
   eqsign = s.find_from("=", eqsign + 1);
   value = match s.substring(eqsign + 2, 
                             this.or_find_from(" ", ">", eqsign, s) - 1) with
             Just derp => derp
             Nothing => "MISSFORMEDVALUE"
           ;
   key = match s.substring(space, eqsign) with
           Just derp => derp
           Nothing => "MISSFORMEDKEY"
         ;
   node.atribs[i] = (key, value)} */;
  void* _for_14;
  /* Range not generated */;
  int64_t _literal_21 = 0;
  int64_t _binop_25 = (({array_t* _fieldacc_22 = (*_enc__arg_node)._enc__field_atribs;
                         int64_t _size_23 = array_size(_fieldacc_22); _size_23;}) - ({int64_t _literal_24 = 1; _literal_24;}));
  int64_t _literal_26 = 1;
  int64_t _literal_27 = 1;
  int64_t _step_19 = (_literal_27 * _literal_26);
  range_assert_step(_step_19);
  int64_t _index_15;
  if ((_step_19 > 0))
  {
    _index_15 = _literal_21;
  }
  else
  {
    _index_15 = _binop_25;
  };
  while (((_index_15 >= _literal_21) && (_index_15 <= _binop_25)))
  {
    int64_t _i_16 = _index_15;
    /* space = s.find_from(" ", eqsign) */;
    check_receiver(_enc__arg_s, ".", "s", "find_from", "\"./encore-libs-master/XML/XML.enc\" (line 132, column 19)");
    _enc__passive_String_String_t* _new_29 = _enc__constructor_String_String(_ctx);
    char* _embed_30 = ({" ";});
    _enc__type_init_String_String(_new_29);
    _enc__method_String_String__init(_ctx, _new_29, _embed_30);
    int64_t _sync_method_call_28 = _enc__method_String_String_find_from(_ctx, _enc__arg_s, _new_29, _eqsign_5);
    _space_7 = _sync_method_call_28;
    /* eqsign = s.find_from("=", eqsign + 1) */;
    check_receiver(_enc__arg_s, ".", "s", "find_from", "\"./encore-libs-master/XML/XML.enc\" (line 133, column 20)");
    _enc__passive_String_String_t* _new_32 = _enc__constructor_String_String(_ctx);
    char* _embed_33 = ({"=";});
    _enc__type_init_String_String(_new_32);
    _enc__method_String_String__init(_ctx, _new_32, _embed_33);
    int64_t _binop_35 = (({ _eqsign_5;}) + ({int64_t _literal_34 = 1; _literal_34;}));
    int64_t _sync_method_call_31 = _enc__method_String_String_find_from(_ctx, _enc__arg_s, _new_32, _binop_35);
    _eqsign_5 = _sync_method_call_31;
    /* value = match s.substring(eqsign + 2, 
                          this.or_find_from(" ", ">", eqsign, s) - 1) with
          Just derp => derp
          Nothing => "MISSFORMEDVALUE"
         */;
    check_receiver(_enc__arg_s, ".", "s", "substring", "\"./encore-libs-master/XML/XML.enc\" (line 134, column 25)");
    int64_t _binop_39 = (({ _eqsign_5;}) + ({int64_t _literal_38 = 2; _literal_38;}));
    int64_t _binop_46 = (({check_receiver(_this, ".", "this", "or_find_from", "\"./encore-libs-master/XML/XML.enc\" (line 134, column 46)");
                           _enc__passive_String_String_t* _new_41 = _enc__constructor_String_String(_ctx);
                           char* _embed_42 = ({" ";});
                           _enc__type_init_String_String(_new_41);
                           _enc__method_String_String__init(_ctx, _new_41, _embed_42);
                           _enc__passive_String_String_t* _new_43 = _enc__constructor_String_String(_ctx);
                           char* _embed_44 = ({">";});
                           _enc__type_init_String_String(_new_43);
                           _enc__method_String_String__init(_ctx, _new_43, _embed_44);
                           int64_t _sync_method_call_40 = _enc__method__encore_libs_master_XML_XML_XML_lib_or_find_from(_ctx, _this, _new_41, _new_43, _eqsign_5, _enc__arg_s); _sync_method_call_40;}) - ({int64_t _literal_45 = 1; _literal_45;}));
    option_t* _sync_method_call_37 = _enc__method_String_String_substring(_ctx, _enc__arg_s, _binop_39, _binop_46);
    _enc__passive_String_String_t* _match_36;
    _enc__passive_String_String_t* _derp_47;
    if ((({int64_t _optionCheck_54;
           _optionCheck_54 = ((JUST == (*_sync_method_call_37).tag) && ({int64_t _varBinding_55;
                                                                         _enc__passive_String_String_t* _optionVal_53 = (*_sync_method_call_37).val.p;
                                                                         _derp_47 = _optionVal_53;
                                                                         _varBinding_55 = 1; _varBinding_55;})); _optionCheck_54;}) && ({int64_t _literal_56 = 1/*True*/; _literal_56;})))
    {
      _match_36 = ((_enc__passive_String_String_t*) ({ _derp_47;}));
    }
    else
    {
      if ((({int64_t _valueCheck_50;
             _valueCheck_50 = (({option_t* _option_51 = (&(DEFAULT_NOTHING)); _option_51;}) == _sync_method_call_37); _valueCheck_50;}) && ({int64_t _literal_52 = 1/*True*/; _literal_52;})))
      {
        _match_36 = ((_enc__passive_String_String_t*) ({_enc__passive_String_String_t* _new_48 = _enc__constructor_String_String(_ctx);
                                                        char* _embed_49 = ({"MISSFORMEDVALUE";});
                                                        _enc__type_init_String_String(_new_48);
                                                        _enc__method_String_String__init(_ctx, _new_48, _embed_49); _new_48;}));
      }
      else
      {
        printf("*** Runtime error: No matching clause was found ***\n");
        exit(1);
      };
    };
    _value_10 = _match_36;
    /* key = match s.substring(space, eqsign) with
        Just derp => derp
        Nothing => "MISSFORMEDKEY"
       */;
    check_receiver(_enc__arg_s, ".", "s", "substring", "\"./encore-libs-master/XML/XML.enc\" (line 137, column 23)");
    option_t* _sync_method_call_58 = _enc__method_String_String_substring(_ctx, _enc__arg_s, _space_7, _eqsign_5);
    _enc__passive_String_String_t* _match_57;
    _enc__passive_String_String_t* _derp_59;
    if ((({int64_t _optionCheck_66;
           _optionCheck_66 = ((JUST == (*_sync_method_call_58).tag) && ({int64_t _varBinding_67;
                                                                         _enc__passive_String_String_t* _optionVal_65 = (*_sync_method_call_58).val.p;
                                                                         _derp_59 = _optionVal_65;
                                                                         _varBinding_67 = 1; _varBinding_67;})); _optionCheck_66;}) && ({int64_t _literal_68 = 1/*True*/; _literal_68;})))
    {
      _match_57 = ((_enc__passive_String_String_t*) ({ _derp_59;}));
    }
    else
    {
      if ((({int64_t _valueCheck_62;
             _valueCheck_62 = (({option_t* _option_63 = (&(DEFAULT_NOTHING)); _option_63;}) == _sync_method_call_58); _valueCheck_62;}) && ({int64_t _literal_64 = 1/*True*/; _literal_64;})))
      {
        _match_57 = ((_enc__passive_String_String_t*) ({_enc__passive_String_String_t* _new_60 = _enc__constructor_String_String(_ctx);
                                                        char* _embed_61 = ({"MISSFORMEDKEY";});
                                                        _enc__type_init_String_String(_new_60);
                                                        _enc__method_String_String__init(_ctx, _new_60, _embed_61); _new_60;}));
      }
      else
      {
        printf("*** Runtime error: No matching clause was found ***\n");
        exit(1);
      };
    };
    _key_13 = _match_57;
    /* node.atribs[i] = (key, value) */;
    tuple_t* _tuple_69 = tuple_mk(_ctx, 2);
    tuple_set_type(_tuple_69, 0, (&(_enc__passive_String_String_type)));
    tuple_set_type(_tuple_69, 1, (&(_enc__passive_String_String_type)));
    tuple_set(_tuple_69, 0, ((encore_arg_t) {.p = _key_13}));
    tuple_set(_tuple_69, 1, ((encore_arg_t) {.p = _value_10}));
    array_t* _fieldacc_70 = (*_enc__arg_node)._enc__field_atribs;
    array_set(_fieldacc_70, _i_16, ((encore_arg_t) {.p = _tuple_69}));
    _for_14 = UNIT;
    _index_15 = (_index_15 + _step_19);
  };
  return UNIT;
}


int64_t _enc__method__encore_libs_master_XML_XML_XML_lib_or_find_from(pony_ctx_t** _ctx, _enc__passive__encore_libs_master_XML_XML_XML_lib_t* _this, _enc__passive_String_String_t* _enc__arg_a, _enc__passive_String_String_t* _enc__arg_b, int64_t _enc__arg_i, _enc__passive_String_String_t* _enc__arg_s)
{
  /* let w = s.find_from(a, i) */;
  /* w = s.find_from(a, i) */;
  check_receiver(_enc__arg_s, ".", "s", "find_from", "\"./encore-libs-master/XML/XML.enc\" (line 145, column 17)");
  int64_t _sync_method_call_0 = _enc__method_String_String_find_from(_ctx, _enc__arg_s, _enc__arg_a, _enc__arg_i);
  int64_t _w_1 = _sync_method_call_0;
  /* let q = s.find_from(b, i) */;
  /* q = s.find_from(b, i) */;
  check_receiver(_enc__arg_s, ".", "s", "find_from", "\"./encore-libs-master/XML/XML.enc\" (line 146, column 17)");
  int64_t _sync_method_call_2 = _enc__method_String_String_find_from(_ctx, _enc__arg_s, _enc__arg_b, _enc__arg_i);
  int64_t _q_3 = _sync_method_call_2;
  /* if w < q and w > - 1 then
  w
else
  q */;
  int64_t _ite_4;
  if (({int64_t _binop_9 = (({int64_t _binop_5 = (({ _w_1;}) < ({ _q_3;})); _binop_5;}) && ({int64_t _binop_8 = (({ _w_1;}) > ({int64_t _literal_6 = 1;
                                                                                                                                int64_t _unary_7 = (- _literal_6); _unary_7;})); _binop_8;})); _binop_9;}))
  {
    /* w */;
    _ite_4 = ((int64_t) _w_1);
  }
  else
  {
    /* q */;
    _ite_4 = ((int64_t) _q_3);
  };
  return ((int64_t) _ite_4);
}


int64_t _enc__method__encore_libs_master_XML_XML_XML_lib_pair(pony_ctx_t** _ctx, _enc__passive__encore_libs_master_XML_XML_XML_lib_t* _this, _enc__passive_String_String_t* _enc__arg_head, _enc__passive_String_String_t* _enc__arg_tail)
{
  /* true */;
  int64_t _literal_0 = 1/*True*/;
  return ((int64_t) _literal_0);
}


option_t* _enc__method__encore_libs_master_XML_XML_XML_lib_file_to_xml(pony_ctx_t** _ctx, _enc__passive__encore_libs_master_XML_XML_XML_lib_t* _this, _enc__passive_String_String_t* _enc__arg_fname)
{
  /* let f = new File("", "") */;
  /* f = new File("", "") */;
  _enc__passive__encore_libs_master_FileIO_IO_File_t* _new_0 = _enc__constructor__encore_libs_master_FileIO_IO_File(_ctx);
  _enc__passive_String_String_t* _new_1 = _enc__constructor_String_String(_ctx);
  char* _embed_2 = ({"";});
  _enc__type_init_String_String(_new_1);
  _enc__method_String_String__init(_ctx, _new_1, _embed_2);
  _enc__passive_String_String_t* _new_3 = _enc__constructor_String_String(_ctx);
  char* _embed_4 = ({"";});
  _enc__type_init_String_String(_new_3);
  _enc__method_String_String__init(_ctx, _new_3, _embed_4);
  _enc__type_init__encore_libs_master_FileIO_IO_File(_new_0);
  _enc__method__encore_libs_master_FileIO_IO_File__init(_ctx, _new_0, _new_1, _new_3);
  _enc__passive__encore_libs_master_FileIO_IO_File_t* _f_5 = _new_0;
  /* let s = "" */;
  /* s = "" */;
  _enc__passive_String_String_t* _new_6 = _enc__constructor_String_String(_ctx);
  char* _embed_7 = ({"";});
  _enc__type_init_String_String(_new_6);
  _enc__method_String_String__init(_ctx, _new_6, _embed_7);
  _enc__passive_String_String_t* _s_8 = _new_6;
  /* f.open(fname, "r") */;
  check_receiver(_f_5, ".", "f", "open", "\"./encore-libs-master/XML/XML.enc\" (line 158, column 8)");
  _enc__passive_String_String_t* _new_10 = _enc__constructor_String_String(_ctx);
  char* _embed_11 = ({"r";});
  _enc__type_init_String_String(_new_10);
  _enc__method_String_String__init(_ctx, _new_10, _embed_11);
  void* _sync_method_call_9 = _enc__method__encore_libs_master_FileIO_IO_File_open(_ctx, _f_5, _enc__arg_fname, _new_10);
  /* while f.eof() != true
  s = s.concatenate(f.readline()) */;
  void* _while_17;
  while (({int64_t _binop_14 = (({check_receiver(_f_5, ".", "f", "eof", "\"./encore-libs-master/XML/XML.enc\" (line 160, column 14)");
                                  int64_t _sync_method_call_12 = _enc__method__encore_libs_master_FileIO_IO_File_eof(_ctx, _f_5); _sync_method_call_12;}) != ({int64_t _literal_13 = 1/*True*/; _literal_13;})); _binop_14;}))
  {
    /* s = s.concatenate(f.readline()) */;
    check_receiver(_s_8, ".", "s", "concatenate", "\"./encore-libs-master/XML/XML.enc\" (line 161, column 15)");
    check_receiver(_f_5, ".", "f", "readline", "\"./encore-libs-master/XML/XML.enc\" (line 161, column 29)");
    _enc__passive_String_String_t* _sync_method_call_16 = _enc__method__encore_libs_master_FileIO_IO_File_readline(_ctx, _f_5);
    _enc__passive_String_String_t* _sync_method_call_15 = _enc__method_String_String_concatenate(_ctx, _s_8, _sync_method_call_16);
    _s_8 = _sync_method_call_15;
    _while_17 = UNIT;
  };
  /* this.new_XML_node(s) */;
  check_receiver(_this, ".", "this", "new_XML_node", "\"./encore-libs-master/XML/XML.enc\" (line 165, column 8)");
  option_t* _sync_method_call_18 = _enc__method__encore_libs_master_XML_XML_XML_lib_new_XML_node(_ctx, _this, _s_8);
  return ((option_t*) _sync_method_call_18);
}


pony_type_t _enc__passive__encore_libs_master_XML_XML_XML_lib_type = {.id=_ENC__ID__encore_libs_master_XML_XML_XML_lib, .size=sizeof(_enc__passive__encore_libs_master_XML_XML_XML_lib_t), .trace=_enc__trace__encore_libs_master_XML_XML_XML_lib, .vtable=trait_method_selector};
