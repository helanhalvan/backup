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


void _enc__type_init__encore_libs_master_XML_XML_XML_lib(_enc__passive__encore_libs_master_XML_XML_XML_lib_t* _this, ... )
{
  va_list params;
  va_start(params, _this);
  va_end(params);
}


void _enc__trace__encore_libs_master_XML_XML_XML_lib(pony_ctx_t* _ctx_arg, void* p)
{
  pony_ctx_t** _ctx = (&(_ctx_arg));
  _enc__passive__encore_libs_master_XML_XML_XML_lib_t* _this = p;
}


_enc__passive__encore_libs_master_XML_XML_XML_lib_t* _enc__constructor__encore_libs_master_XML_XML_XML_lib(pony_ctx_t** _ctx, pony_type_t** runtimeType)
{
  _enc__passive__encore_libs_master_XML_XML_XML_lib_t* _this = ((_enc__passive__encore_libs_master_XML_XML_XML_lib_t*) encore_alloc((*_ctx), sizeof(_enc__passive__encore_libs_master_XML_XML_XML_lib_t)));
  _this->_enc__self_type = (&(_enc__passive__encore_libs_master_XML_XML_XML_lib_type));
  return _this;
}


void* _enc__method__encore_libs_master_XML_XML_XML_lib_init(pony_ctx_t** _ctx, _enc__passive__encore_libs_master_XML_XML_XML_lib_t* _this, pony_type_t** runtimeType)
{
  ENC_DTRACE3(METHOD_ENTRY, (uintptr_t)*_ctx, (uintptr_t)_this, "init");
  /* () */;
  UNIT;
  ENC_DTRACE3(METHOD_EXIT, (uintptr_t)*_ctx, (uintptr_t)_this, "init");
  return UNIT;
}


option_t* _enc__method__encore_libs_master_XML_XML_XML_lib_new_XML_node(pony_ctx_t** _ctx, _enc__passive__encore_libs_master_XML_XML_XML_lib_t* _this, pony_type_t** runtimeType, _enc__passive_String_String_t* _enc__arg_s)
{
  ENC_DTRACE3(METHOD_ENTRY, (uintptr_t)*_ctx, (uintptr_t)_this, "new_XML_node");
  /* var node = new XML_node() */;
  /* node = new XML_node() */;
  _enc__passive__encore_libs_master_XML_XML_XML_node_t* _new_0 = _enc__constructor__encore_libs_master_XML_XML_XML_node(_ctx, NULL);
  pony_type_t* _tmp_1[] = {};
  _enc__type_init__encore_libs_master_XML_XML_XML_node(_new_0);
  _enc__method__encore_libs_master_XML_XML_XML_node_init(_ctx, _new_0, NULL);
  _enc__passive__encore_libs_master_XML_XML_XML_node_t* _node_2 = _new_0;
  /* var bad = false */;
  /* bad = false */;
  int64_t _literal_3 = 0/*False*/;
  int64_t _bad_4 = _literal_3;
  /* s.trim() */;
  check_receiver(_enc__arg_s, ".", "s", "trim", "\"./encore-libs-master/XML/XML.enc\" (line 50, column 5)");
  pony_type_t* _tmp_6[] = {};
  _enc__passive_String_String_t* _sync_method_call_5 = _enc__method_String_String_trim(_ctx, _enc__arg_s, NULL);
  /* node.s_rep = s */;
  (*({ENC_DTRACE3(FIELD_WRITE, (uintptr_t)*_ctx, (uintptr_t)_node_2, "s_rep"); _node_2;}))._enc__field_s_rep = _enc__arg_s;
  /* var cont = new [String](s.occurrences("<")) */;
  /* cont = new [String](s.occurrences("<")) */;
  check_receiver(_enc__arg_s, ".", "s", "occurrences", "\"./encore-libs-master/XML/XML.enc\" (line 52, column 29)");
  _enc__passive_String_String_t* _new_9 = _enc__constructor_String_String(_ctx, NULL);
  char* _embed_10 = ({"<";});
  pony_type_t* _tmp_11[] = {};
  _enc__type_init_String_String(_new_9);
  _enc__method_String_String_init(_ctx, _new_9, NULL, _embed_10);
  pony_type_t* _tmp_12[] = {};
  int64_t _sync_method_call_8 = _enc__method_String_String_occurrences(_ctx, _enc__arg_s, NULL, _new_9);
  array_t* _array_7 = array_mk(_ctx, _sync_method_call_8, (&(_enc__passive_String_String_type)));
  array_t* _cont_13 = _array_7;
  /* if |cont| == 1 then
  {var r = match (s.char_at(0), 
                  s.char_at(s.size() - 2), 
                  s.char_at(s.size() - 1)) with
             (Just '<', Just '/', Just '>') => {node.name = s;
                                                this.ext_atribs(node, node.name);
                                                Just node}
             _ => Nothing
           ;
   embed void return #{r}; end} */;
  void* _ite_14;
  if (({int64_t _binop_17 = (({int64_t _size_15 = array_size(_cont_13); _size_15;}) == ({int64_t _literal_16 = 1; _literal_16;})); _binop_17;}))
  {
    /* var r = match (s.char_at(0), 
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
    tuple_t* _tuple_19 = tuple_mk(_ctx, 3);
    tuple_set_type(_tuple_19, 0, (&(option_type)));
    tuple_set_type(_tuple_19, 1, (&(option_type)));
    tuple_set_type(_tuple_19, 2, (&(option_type)));
    check_receiver(_enc__arg_s, ".", "s", "char_at", "\"./encore-libs-master/XML/XML.enc\" (line 55, column 23)");
    int64_t _literal_21 = 0;
    pony_type_t* _tmp_22[] = {};
    option_t* _sync_method_call_20 = _enc__method_String_String_char_at(_ctx, _enc__arg_s, NULL, _literal_21);
    check_receiver(_enc__arg_s, ".", "s", "char_at", "\"./encore-libs-master/XML/XML.enc\" (line 55, column 36)");
    int64_t _binop_27 = (({check_receiver(_enc__arg_s, ".", "s", "size", "\"./encore-libs-master/XML/XML.enc\" (line 55, column 47)");
                           pony_type_t* _tmp_25[] = {};
                           int64_t _sync_method_call_24 = _enc__method_String_String_size(_ctx, _enc__arg_s, NULL); _sync_method_call_24;}) - ({int64_t _literal_26 = 2; _literal_26;}));
    pony_type_t* _tmp_28[] = {};
    option_t* _sync_method_call_23 = _enc__method_String_String_char_at(_ctx, _enc__arg_s, NULL, _binop_27);
    check_receiver(_enc__arg_s, ".", "s", "char_at", "\"./encore-libs-master/XML/XML.enc\" (line 55, column 59)");
    int64_t _binop_33 = (({check_receiver(_enc__arg_s, ".", "s", "size", "\"./encore-libs-master/XML/XML.enc\" (line 55, column 69)");
                           pony_type_t* _tmp_31[] = {};
                           int64_t _sync_method_call_30 = _enc__method_String_String_size(_ctx, _enc__arg_s, NULL); _sync_method_call_30;}) - ({int64_t _literal_32 = 1; _literal_32;}));
    pony_type_t* _tmp_34[] = {};
    option_t* _sync_method_call_29 = _enc__method_String_String_char_at(_ctx, _enc__arg_s, NULL, _binop_33);
    tuple_set(_tuple_19, 0, ((encore_arg_t) {.p = _sync_method_call_20}));
    tuple_set(_tuple_19, 1, ((encore_arg_t) {.p = _sync_method_call_23}));
    tuple_set(_tuple_19, 2, ((encore_arg_t) {.p = _sync_method_call_29}));
    option_t* _match_18;
    if ((({int64_t _tupleCheck_43;
           _tupleCheck_43 = 1;
           option_t* _tupleAccess_44 = tuple_get(_tuple_19, 0).p;
           int64_t _optionCheck_46;
           _optionCheck_46 = ((JUST == (*_tupleAccess_44).tag) && ({int64_t _valueCheck_47;
                                                                    char _optionVal_45 = (*_tupleAccess_44).val.i;
                                                                    _valueCheck_47 = (({char _literal_48 = '<'; _literal_48;}) == _optionVal_45); _valueCheck_47;}));
           _tupleCheck_43 = (_tupleCheck_43 && _optionCheck_46);
           option_t* _tupleAccess_49 = tuple_get(_tuple_19, 1).p;
           int64_t _optionCheck_51;
           _optionCheck_51 = ((JUST == (*_tupleAccess_49).tag) && ({int64_t _valueCheck_52;
                                                                    char _optionVal_50 = (*_tupleAccess_49).val.i;
                                                                    _valueCheck_52 = (({char _literal_53 = '/'; _literal_53;}) == _optionVal_50); _valueCheck_52;}));
           _tupleCheck_43 = (_tupleCheck_43 && _optionCheck_51);
           option_t* _tupleAccess_54 = tuple_get(_tuple_19, 2).p;
           int64_t _optionCheck_56;
           _optionCheck_56 = ((JUST == (*_tupleAccess_54).tag) && ({int64_t _valueCheck_57;
                                                                    char _optionVal_55 = (*_tupleAccess_54).val.i;
                                                                    _valueCheck_57 = (({char _literal_58 = '>'; _literal_58;}) == _optionVal_55); _valueCheck_57;}));
           _tupleCheck_43 = (_tupleCheck_43 && _optionCheck_56); _tupleCheck_43;}) && ({int64_t _literal_59 = 1/*True*/; _literal_59;})))
    {
      _match_18 = ((option_t*) ({/* node.name = s */;
                                 (*({ENC_DTRACE3(FIELD_WRITE, (uintptr_t)*_ctx, (uintptr_t)_node_2, "name"); _node_2;}))._enc__field_name = _enc__arg_s;
                                 /* this.ext_atribs(node, node.name) */;
                                 check_receiver(_this, ".", "this", "ext_atribs", "\"./encore-libs-master/XML/XML.enc\" (line 57, column 66)");
                                 ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_node_2, "name");
                                 _enc__passive_String_String_t* _fieldacc_36 = (*_node_2)._enc__field_name;
                                 pony_type_t* _tmp_37[] = {};
                                 void* _sync_method_call_35 = _enc__method__encore_libs_master_XML_XML_XML_lib_ext_atribs(_ctx, _this, NULL, _node_2, _fieldacc_36);
                                 /* Just node */;
                                 option_t* _option_38 = option_mk(_ctx, JUST, ((encore_arg_t) {.p = _node_2}), (&(_enc__passive__encore_libs_master_XML_XML_XML_node_type))); _option_38;}));
    }
    else
    {
      tuple_t* ___39;
      if ((({int64_t _varBinding_41;
             ___39 = _tuple_19;
             _varBinding_41 = 1; _varBinding_41;}) && ({int64_t _literal_42 = 1/*True*/; _literal_42;})))
      {
        _match_18 = ((option_t*) ({option_t* _option_40 = (&(DEFAULT_NOTHING)); _option_40;}));
      }
      else
      {
        fprintf(stderr, "*** Runtime error: No matching clause was found ***\n");
        exit(1);
      };
    };
    option_t* _r_60 = _match_18;
    /* embed void return #{r}; end */;
    ({return _r_60;});
    _ite_14 = ((void*) UNIT);
  }
  else
  {
    UNIT;
    _ite_14 = ((void*) UNIT);
  };
  /* var start = s.find("<") */;
  /* start = s.find("<") */;
  check_receiver(_enc__arg_s, ".", "s", "find", "\"./encore-libs-master/XML/XML.enc\" (line 62, column 17)");
  _enc__passive_String_String_t* _new_62 = _enc__constructor_String_String(_ctx, NULL);
  char* _embed_63 = ({"<";});
  pony_type_t* _tmp_64[] = {};
  _enc__type_init_String_String(_new_62);
  _enc__method_String_String_init(_ctx, _new_62, NULL, _embed_63);
  pony_type_t* _tmp_65[] = {};
  int64_t _sync_method_call_61 = _enc__method_String_String_find(_ctx, _enc__arg_s, NULL, _new_62);
  int64_t _start_66 = _sync_method_call_61;
  /* var finnish = 0 */;
  /* finnish = 0 */;
  int64_t _literal_67 = 0;
  int64_t _finnish_68 = _literal_67;
  /* for i in [ 0 , |cont| - 1 by 1 ]
  {finnish = s.find_from(">", start);
   cont[i] = match s.substring(start, finnish + 1) with
               Just sub => sub
               Nothing => ""
             ;
   start = s.find_from("<", finnish)} */;
  void* _for_69;
  /* Range not generated */;
  int64_t _literal_76 = 0;
  int64_t _binop_79 = (({int64_t _size_77 = array_size(_cont_13); _size_77;}) - ({int64_t _literal_78 = 1; _literal_78;}));
  int64_t _literal_80 = 1;
  int64_t _literal_81 = 1;
  int64_t _step_74 = (_literal_81 * _literal_80);
  range_assert_step(_step_74);
  int64_t _index_70;
  if ((_step_74 > 0))
  {
    _index_70 = _literal_76;
  }
  else
  {
    _index_70 = _binop_79;
  };
  while (((_index_70 >= _literal_76) && (_index_70 <= _binop_79)))
  {
    int64_t _i_71 = _index_70;
    /* finnish = s.find_from(">", start) */;
    check_receiver(_enc__arg_s, ".", "s", "find_from", "\"./encore-libs-master/XML/XML.enc\" (line 66, column 17)");
    _enc__passive_String_String_t* _new_83 = _enc__constructor_String_String(_ctx, NULL);
    char* _embed_84 = ({">";});
    pony_type_t* _tmp_85[] = {};
    _enc__type_init_String_String(_new_83);
    _enc__method_String_String_init(_ctx, _new_83, NULL, _embed_84);
    pony_type_t* _tmp_86[] = {};
    int64_t _sync_method_call_82 = _enc__method_String_String_find_from(_ctx, _enc__arg_s, NULL, _new_83, _start_66);
    _finnish_68 = _sync_method_call_82;
    /* cont[i] = match s.substring(start, finnish + 1) with
            Just sub => sub
            Nothing => ""
           */;
    /* match s.substring(start, finnish + 1) with
  Just sub => sub
  Nothing => ""
 */;
    check_receiver(_enc__arg_s, ".", "s", "substring", "\"./encore-libs-master/XML/XML.enc\" (line 67, column 24)");
    int64_t _binop_90 = (({ _finnish_68;}) + ({int64_t _literal_89 = 1; _literal_89;}));
    pony_type_t* _tmp_91[] = {};
    option_t* _sync_method_call_88 = _enc__method_String_String_substring(_ctx, _enc__arg_s, NULL, _start_66, _binop_90);
    _enc__passive_String_String_t* _match_87;
    _enc__passive_String_String_t* _sub_92;
    if ((({int64_t _optionCheck_100;
           _optionCheck_100 = ((JUST == (*_sync_method_call_88).tag) && ({int64_t _varBinding_101;
                                                                          _enc__passive_String_String_t* _optionVal_99 = (*_sync_method_call_88).val.p;
                                                                          _sub_92 = _optionVal_99;
                                                                          _varBinding_101 = 1; _varBinding_101;})); _optionCheck_100;}) && ({int64_t _literal_102 = 1/*True*/; _literal_102;})))
    {
      _match_87 = ((_enc__passive_String_String_t*) ({ _sub_92;}));
    }
    else
    {
      if ((({int64_t _valueCheck_96;
             _valueCheck_96 = (({option_t* _option_97 = (&(DEFAULT_NOTHING)); _option_97;}) == _sync_method_call_88); _valueCheck_96;}) && ({int64_t _literal_98 = 1/*True*/; _literal_98;})))
      {
        _match_87 = ((_enc__passive_String_String_t*) ({_enc__passive_String_String_t* _new_93 = _enc__constructor_String_String(_ctx, NULL);
                                                        char* _embed_94 = ({"";});
                                                        pony_type_t* _tmp_95[] = {};
                                                        _enc__type_init_String_String(_new_93);
                                                        _enc__method_String_String_init(_ctx, _new_93, NULL, _embed_94); _new_93;}));
      }
      else
      {
        fprintf(stderr, "*** Runtime error: No matching clause was found ***\n");
        exit(1);
      };
    };
    array_set(_cont_13, _i_71, ((encore_arg_t) {.p = _match_87}));
    /* start = s.find_from("<", finnish) */;
    check_receiver(_enc__arg_s, ".", "s", "find_from", "\"./encore-libs-master/XML/XML.enc\" (line 70, column 15)");
    _enc__passive_String_String_t* _new_104 = _enc__constructor_String_String(_ctx, NULL);
    char* _embed_105 = ({"<";});
    pony_type_t* _tmp_106[] = {};
    _enc__type_init_String_String(_new_104);
    _enc__method_String_String_init(_ctx, _new_104, NULL, _embed_105);
    pony_type_t* _tmp_107[] = {};
    int64_t _sync_method_call_103 = _enc__method_String_String_find_from(_ctx, _enc__arg_s, NULL, _new_104, _finnish_68);
    _start_66 = _sync_method_call_103;
    _for_69 = UNIT;
    _index_70 = (_index_70 + _step_74);
  };
  /* node.name = cont[0] */;
  int64_t _literal_108 = 0;
  _enc__passive_String_String_t* _access_109 = array_get(_cont_13, _literal_108).p;
  (*({ENC_DTRACE3(FIELD_WRITE, (uintptr_t)*_ctx, (uintptr_t)_node_2, "name"); _node_2;}))._enc__field_name = _access_109;
  /* this.ext_atribs(node, node.name) */;
  check_receiver(_this, ".", "this", "ext_atribs", "\"./encore-libs-master/XML/XML.enc\" (line 73, column 5)");
  ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_node_2, "name");
  _enc__passive_String_String_t* _fieldacc_111 = (*_node_2)._enc__field_name;
  pony_type_t* _tmp_112[] = {};
  void* _sync_method_call_110 = _enc__method__encore_libs_master_XML_XML_XML_lib_ext_atribs(_ctx, _this, NULL, _node_2, _fieldacc_111);
  /* if this.pair(node.name, cont[|cont| - 1]) then
  {node.comments = new [String](|cont|);
   var ci = 0;
   var babies = new [String](|cont|);
   var j = 0;
   var temp = "";
   var level = 0;
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
  option_t* _ite_113;
  if (({check_receiver(_this, ".", "this", "pair", "\"./encore-libs-master/XML/XML.enc\" (line 74, column 9)");
        ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_node_2, "name");
        _enc__passive_String_String_t* _fieldacc_115 = (*_node_2)._enc__field_name;
        int64_t _binop_118 = (({int64_t _size_116 = array_size(_cont_13); _size_116;}) - ({int64_t _literal_117 = 1; _literal_117;}));
        _enc__passive_String_String_t* _access_119 = array_get(_cont_13, _binop_118).p;
        pony_type_t* _tmp_120[] = {};
        int64_t _sync_method_call_114 = _enc__method__encore_libs_master_XML_XML_XML_lib_pair(_ctx, _this, NULL, _fieldacc_115, _access_119); _sync_method_call_114;}))
  {
    /* node.comments = new [String](|cont|) */;
    int64_t _size_122 = array_size(_cont_13);
    array_t* _array_121 = array_mk(_ctx, _size_122, (&(_enc__passive_String_String_type)));
    (*({ENC_DTRACE3(FIELD_WRITE, (uintptr_t)*_ctx, (uintptr_t)_node_2, "comments"); _node_2;}))._enc__field_comments = _array_121;
    /* var ci = 0 */;
    /* ci = 0 */;
    int64_t _literal_123 = 0;
    int64_t _ci_124 = _literal_123;
    /* var babies = new [String](|cont|) */;
    /* babies = new [String](|cont|) */;
    int64_t _size_126 = array_size(_cont_13);
    array_t* _array_125 = array_mk(_ctx, _size_126, (&(_enc__passive_String_String_type)));
    array_t* _babies_127 = _array_125;
    /* var j = 0 */;
    /* j = 0 */;
    int64_t _literal_128 = 0;
    int64_t _j_129 = _literal_128;
    /* var temp = "" */;
    /* temp = "" */;
    _enc__passive_String_String_t* _new_130 = _enc__constructor_String_String(_ctx, NULL);
    char* _embed_131 = ({"";});
    pony_type_t* _tmp_132[] = {};
    _enc__type_init_String_String(_new_130);
    _enc__method_String_String_init(_ctx, _new_130, NULL, _embed_131);
    _enc__passive_String_String_t* _temp_133 = _new_130;
    /* var level = 0 */;
    /* level = 0 */;
    int64_t _literal_134 = 0;
    int64_t _level_135 = _literal_134;
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
    void* _for_136;
    /* Range not generated */;
    int64_t _literal_143 = 1;
    int64_t _binop_146 = (({int64_t _size_144 = array_size(_cont_13); _size_144;}) - ({int64_t _literal_145 = 2; _literal_145;}));
    int64_t _literal_147 = 1;
    int64_t _literal_148 = 1;
    int64_t _step_141 = (_literal_148 * _literal_147);
    range_assert_step(_step_141);
    int64_t _index_137;
    if ((_step_141 > 0))
    {
      _index_137 = _literal_143;
    }
    else
    {
      _index_137 = _binop_146;
    };
    while (((_index_137 >= _literal_143) && (_index_137 <= _binop_146)))
    {
      int64_t _i_138 = _index_137;
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
      tuple_t* _tuple_150 = tuple_mk(_ctx, 2);
      tuple_set_type(_tuple_150, 0, ENCORE_PRIMITIVE);
      tuple_set_type(_tuple_150, 1, ENCORE_PRIMITIVE);
      check_receiver(_this, ".", "this", "tag_type", "\"./encore-libs-master/XML/XML.enc\" (line 84, column 22)");
      _enc__passive_String_String_t* _access_152 = array_get(_cont_13, _i_138).p;
      pony_type_t* _tmp_153[] = {};
      char _sync_method_call_151 = _enc__method__encore_libs_master_XML_XML_XML_lib_tag_type(_ctx, _this, NULL, _access_152);
      tuple_set(_tuple_150, 0, ((encore_arg_t) {.i = _level_135}));
      tuple_set(_tuple_150, 1, ((encore_arg_t) {.i = _sync_method_call_151}));
      void* _match_149;
      if ((({int64_t _tupleCheck_218;
             _tupleCheck_218 = 1;
             int64_t _tupleAccess_219 = tuple_get(_tuple_150, 0).i;
             int64_t _valueCheck_220;
             _valueCheck_220 = (({int64_t _literal_221 = 0; _literal_221;}) == _tupleAccess_219);
             _tupleCheck_218 = (_tupleCheck_218 && _valueCheck_220);
             char _tupleAccess_222 = tuple_get(_tuple_150, 1).i;
             int64_t _valueCheck_223;
             _valueCheck_223 = (({char _literal_224 = 'c'; _literal_224;}) == _tupleAccess_222);
             _tupleCheck_218 = (_tupleCheck_218 && _valueCheck_223); _tupleCheck_218;}) && ({int64_t _literal_225 = 1/*True*/; _literal_225;})))
      {
        _match_149 = ((void*) ({/* node.comments[ci] = cont[i] */;
                                _enc__passive_String_String_t* _access_154 = array_get(_cont_13, _i_138).p;
                                ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_node_2, "comments");
                                array_t* _fieldacc_155 = (*_node_2)._enc__field_comments;
                                array_set(_fieldacc_155, _ci_124, ((encore_arg_t) {.p = _access_154}));
                                /* ci = ci + 1 */;
                                int64_t _binop_157 = (({ _ci_124;}) + ({int64_t _literal_156 = 1; _literal_156;}));
                                _ci_124 = _binop_157;
                                /* () */;
                                UNIT; UNIT;}));
      }
      else
      {
        if ((({int64_t _tupleCheck_210;
               _tupleCheck_210 = 1;
               int64_t _tupleAccess_211 = tuple_get(_tuple_150, 0).i;
               int64_t _valueCheck_212;
               _valueCheck_212 = (({int64_t _literal_213 = 0; _literal_213;}) == _tupleAccess_211);
               _tupleCheck_210 = (_tupleCheck_210 && _valueCheck_212);
               char _tupleAccess_214 = tuple_get(_tuple_150, 1).i;
               int64_t _valueCheck_215;
               _valueCheck_215 = (({char _literal_216 = 't'; _literal_216;}) == _tupleAccess_214);
               _tupleCheck_210 = (_tupleCheck_210 && _valueCheck_215); _tupleCheck_210;}) && ({int64_t _literal_217 = 1/*True*/; _literal_217;})))
        {
          _match_149 = ((void*) ({/* babies[j] = cont[i] */;
                                  _enc__passive_String_String_t* _access_158 = array_get(_cont_13, _i_138).p;
                                  array_set(_babies_127, _j_129, ((encore_arg_t) {.p = _access_158}));
                                  /* j = j + 1 */;
                                  int64_t _binop_160 = (({ _j_129;}) + ({int64_t _literal_159 = 1; _literal_159;}));
                                  _j_129 = _binop_160;
                                  /* () */;
                                  UNIT; UNIT;}));
        }
        else
        {
          if ((({int64_t _tupleCheck_202;
                 _tupleCheck_202 = 1;
                 int64_t _tupleAccess_203 = tuple_get(_tuple_150, 0).i;
                 int64_t _valueCheck_204;
                 _valueCheck_204 = (({int64_t _literal_205 = 1; _literal_205;}) == _tupleAccess_203);
                 _tupleCheck_202 = (_tupleCheck_202 && _valueCheck_204);
                 char _tupleAccess_206 = tuple_get(_tuple_150, 1).i;
                 int64_t _valueCheck_207;
                 _valueCheck_207 = (({char _literal_208 = 'e'; _literal_208;}) == _tupleAccess_206);
                 _tupleCheck_202 = (_tupleCheck_202 && _valueCheck_207); _tupleCheck_202;}) && ({int64_t _literal_209 = 1/*True*/; _literal_209;})))
          {
            _match_149 = ((void*) ({/* babies[j] = temp.concatenate(cont[i]) */;
                                    check_receiver(_temp_133, ".", "temp", "concatenate", "\"./encore-libs-master/XML/XML.enc\" (line 87, column 40)");
                                    _enc__passive_String_String_t* _access_162 = array_get(_cont_13, _i_138).p;
                                    pony_type_t* _tmp_163[] = {};
                                    _enc__passive_String_String_t* _sync_method_call_161 = _enc__method_String_String_concatenate(_ctx, _temp_133, NULL, _access_162);
                                    array_set(_babies_127, _j_129, ((encore_arg_t) {.p = _sync_method_call_161}));
                                    /* temp = "" */;
                                    _enc__passive_String_String_t* _new_164 = _enc__constructor_String_String(_ctx, NULL);
                                    char* _embed_165 = ({"";});
                                    pony_type_t* _tmp_166[] = {};
                                    _enc__type_init_String_String(_new_164);
                                    _enc__method_String_String_init(_ctx, _new_164, NULL, _embed_165);
                                    _temp_133 = _new_164;
                                    /* j = j + 1 */;
                                    int64_t _binop_168 = (({ _j_129;}) + ({int64_t _literal_167 = 1; _literal_167;}));
                                    _j_129 = _binop_168;
                                    /* level = 0 */;
                                    int64_t _literal_169 = 0;
                                    _level_135 = _literal_169;
                                    /* () */;
                                    UNIT; UNIT;}));
          }
          else
          {
            int64_t _X_170;
            if ((({int64_t _tupleCheck_195;
                   _tupleCheck_195 = 1;
                   int64_t _tupleAccess_196 = tuple_get(_tuple_150, 0).i;
                   int64_t _varBinding_197;
                   _X_170 = _tupleAccess_196;
                   _varBinding_197 = 1;
                   _tupleCheck_195 = (_tupleCheck_195 && _varBinding_197);
                   char _tupleAccess_198 = tuple_get(_tuple_150, 1).i;
                   int64_t _valueCheck_199;
                   _valueCheck_199 = (({char _literal_200 = 'e'; _literal_200;}) == _tupleAccess_198);
                   _tupleCheck_195 = (_tupleCheck_195 && _valueCheck_199); _tupleCheck_195;}) && ({int64_t _literal_201 = 1/*True*/; _literal_201;})))
            {
              _match_149 = ((void*) ({/* temp = temp.concatenate(cont[i]) */;
                                      check_receiver(_temp_133, ".", "temp", "concatenate", "\"./encore-libs-master/XML/XML.enc\" (line 88, column 35)");
                                      _enc__passive_String_String_t* _access_172 = array_get(_cont_13, _i_138).p;
                                      pony_type_t* _tmp_173[] = {};
                                      _enc__passive_String_String_t* _sync_method_call_171 = _enc__method_String_String_concatenate(_ctx, _temp_133, NULL, _access_172);
                                      _temp_133 = _sync_method_call_171;
                                      /* level = X - 1 */;
                                      int64_t _binop_175 = (({ _X_170;}) - ({int64_t _literal_174 = 1; _literal_174;}));
                                      _level_135 = _binop_175;
                                      /* () */;
                                      UNIT; UNIT;}));
            }
            else
            {
              int64_t _X_176;
              if ((({int64_t _tupleCheck_188;
                     _tupleCheck_188 = 1;
                     int64_t _tupleAccess_189 = tuple_get(_tuple_150, 0).i;
                     int64_t _varBinding_190;
                     _X_176 = _tupleAccess_189;
                     _varBinding_190 = 1;
                     _tupleCheck_188 = (_tupleCheck_188 && _varBinding_190);
                     char _tupleAccess_191 = tuple_get(_tuple_150, 1).i;
                     int64_t _valueCheck_192;
                     _valueCheck_192 = (({char _literal_193 = 's'; _literal_193;}) == _tupleAccess_191);
                     _tupleCheck_188 = (_tupleCheck_188 && _valueCheck_192); _tupleCheck_188;}) && ({int64_t _literal_194 = 1/*True*/; _literal_194;})))
              {
                _match_149 = ((void*) ({/* temp = temp.concatenate(cont[i]) */;
                                        check_receiver(_temp_133, ".", "temp", "concatenate", "\"./encore-libs-master/XML/XML.enc\" (line 89, column 35)");
                                        _enc__passive_String_String_t* _access_178 = array_get(_cont_13, _i_138).p;
                                        pony_type_t* _tmp_179[] = {};
                                        _enc__passive_String_String_t* _sync_method_call_177 = _enc__method_String_String_concatenate(_ctx, _temp_133, NULL, _access_178);
                                        _temp_133 = _sync_method_call_177;
                                        /* level = X + 1 */;
                                        int64_t _binop_181 = (({ _X_176;}) + ({int64_t _literal_180 = 1; _literal_180;}));
                                        _level_135 = _binop_181;
                                        /* () */;
                                        UNIT; UNIT;}));
              }
              else
              {
                tuple_t* ___182;
                if ((({int64_t _varBinding_186;
                       ___182 = _tuple_150;
                       _varBinding_186 = 1; _varBinding_186;}) && ({int64_t _literal_187 = 1/*True*/; _literal_187;})))
                {
                  _match_149 = ((void*) ({/* temp = temp.concatenate(cont[i]) */;
                                          check_receiver(_temp_133, ".", "temp", "concatenate", "\"./encore-libs-master/XML/XML.enc\" (line 90, column 28)");
                                          _enc__passive_String_String_t* _access_184 = array_get(_cont_13, _i_138).p;
                                          pony_type_t* _tmp_185[] = {};
                                          _enc__passive_String_String_t* _sync_method_call_183 = _enc__method_String_String_concatenate(_ctx, _temp_133, NULL, _access_184);
                                          _temp_133 = _sync_method_call_183;
                                          /* () */;
                                          UNIT; UNIT;}));
                }
                else
                {
                  fprintf(stderr, "*** Runtime error: No matching clause was found ***\n");
                  exit(1);
                };
              };
            };
          };
        };
      };
      _for_136 = _match_149;
      _index_137 = (_index_137 + _step_141);
    };
    /* node.children = new [XML_node](j) */;
    array_t* _array_226 = array_mk(_ctx, _j_129, (&(_enc__passive__encore_libs_master_XML_XML_XML_node_type)));
    (*({ENC_DTRACE3(FIELD_WRITE, (uintptr_t)*_ctx, (uintptr_t)_node_2, "children"); _node_2;}))._enc__field_children = _array_226;
    /* for i in [ 0 , j - 1 by 1 ]
  match this.new_XML_node(babies[i]) with
    Just xml => {node.children[i] = xml;
                 ()}
    Nothing => {bad = true;
                ()}
   */;
    void* _for_227;
    /* Range not generated */;
    int64_t _literal_234 = 0;
    int64_t _binop_236 = (({ _j_129;}) - ({int64_t _literal_235 = 1; _literal_235;}));
    int64_t _literal_237 = 1;
    int64_t _literal_238 = 1;
    int64_t _step_232 = (_literal_238 * _literal_237);
    range_assert_step(_step_232);
    int64_t _index_228;
    if ((_step_232 > 0))
    {
      _index_228 = _literal_234;
    }
    else
    {
      _index_228 = _binop_236;
    };
    while (((_index_228 >= _literal_234) && (_index_228 <= _binop_236)))
    {
      int64_t _i_229 = _index_228;
      /* match this.new_XML_node(babies[i]) with
  Just xml => {node.children[i] = xml;
               ()}
  Nothing => {bad = true;
              ()}
 */;
      check_receiver(_this, ".", "this", "new_XML_node", "\"./encore-libs-master/XML/XML.enc\" (line 95, column 15)");
      _enc__passive_String_String_t* _access_241 = array_get(_babies_127, _i_229).p;
      pony_type_t* _tmp_242[] = {};
      option_t* _sync_method_call_240 = _enc__method__encore_libs_master_XML_XML_XML_lib_new_XML_node(_ctx, _this, NULL, _access_241);
      void* _match_239;
      _enc__passive__encore_libs_master_XML_XML_XML_node_t* _xml_243;
      if ((({int64_t _optionCheck_250;
             _optionCheck_250 = ((JUST == (*_sync_method_call_240).tag) && ({int64_t _varBinding_251;
                                                                             _enc__passive__encore_libs_master_XML_XML_XML_node_t* _optionVal_249 = (*_sync_method_call_240).val.p;
                                                                             _xml_243 = _optionVal_249;
                                                                             _varBinding_251 = 1; _varBinding_251;})); _optionCheck_250;}) && ({int64_t _literal_252 = 1/*True*/; _literal_252;})))
      {
        _match_239 = ((void*) ({/* node.children[i] = xml */;
                                ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_node_2, "children");
                                array_t* _fieldacc_244 = (*_node_2)._enc__field_children;
                                array_set(_fieldacc_244, _i_229, ((encore_arg_t) {.p = _xml_243}));
                                /* () */;
                                UNIT; UNIT;}));
      }
      else
      {
        if ((({int64_t _valueCheck_246;
               _valueCheck_246 = (({option_t* _option_247 = (&(DEFAULT_NOTHING)); _option_247;}) == _sync_method_call_240); _valueCheck_246;}) && ({int64_t _literal_248 = 1/*True*/; _literal_248;})))
        {
          _match_239 = ((void*) ({/* bad = true */;
                                  int64_t _literal_245 = 1/*True*/;
                                  _bad_4 = _literal_245;
                                  /* () */;
                                  UNIT; UNIT;}));
        }
        else
        {
          fprintf(stderr, "*** Runtime error: No matching clause was found ***\n");
          exit(1);
        };
      };
      _for_227 = _match_239;
      _index_228 = (_index_228 + _step_232);
    };
    /* if bad == false then
  Just node
else
  Nothing */;
    option_t* _ite_253;
    if (({int64_t _binop_255 = (({ _bad_4;}) == ({int64_t _literal_254 = 0/*False*/; _literal_254;})); _binop_255;}))
    {
      /* Just node */;
      option_t* _option_256 = option_mk(_ctx, JUST, ((encore_arg_t) {.p = _node_2}), (&(_enc__passive__encore_libs_master_XML_XML_XML_node_type)));
      _ite_253 = ((option_t*) _option_256);
    }
    else
    {
      option_t* _option_257 = (&(DEFAULT_NOTHING));
      _ite_253 = ((option_t*) _option_257);
    };
    _ite_113 = ((option_t*) _ite_253);
  }
  else
  {
    /* Nothing */;
    option_t* _option_258 = (&(DEFAULT_NOTHING));
    _ite_113 = ((option_t*) _option_258);
  };
  ENC_DTRACE3(METHOD_EXIT, (uintptr_t)*_ctx, (uintptr_t)_this, "new_XML_node");
  return ((option_t*) _ite_113);
}


char _enc__method__encore_libs_master_XML_XML_XML_lib_tag_type(pony_ctx_t** _ctx, _enc__passive__encore_libs_master_XML_XML_XML_lib_t* _this, pony_type_t** runtimeType, _enc__passive_String_String_t* _enc__arg_s)
{
  ENC_DTRACE3(METHOD_ENTRY, (uintptr_t)*_ctx, (uintptr_t)_this, "tag_type");
  /* match s.char_at(1) with
  Just '!' => 'c'
  Just '/' => 'e'
  _ => match s.char_at(s.size() - 2) with
         Just '/' => 't'
         _ => 's'
       
 */;
  check_receiver(_enc__arg_s, ".", "s", "char_at", "\"./encore-libs-master/XML/XML.enc\" (line 109, column 16)");
  int64_t _literal_2 = 1;
  pony_type_t* _tmp_3[] = {};
  option_t* _sync_method_call_1 = _enc__method_String_String_char_at(_ctx, _enc__arg_s, NULL, _literal_2);
  char _match_0;
  if ((({int64_t _optionCheck_32;
         _optionCheck_32 = ((JUST == (*_sync_method_call_1).tag) && ({int64_t _valueCheck_33;
                                                                      char _optionVal_31 = (*_sync_method_call_1).val.i;
                                                                      _valueCheck_33 = (({char _literal_34 = '!'; _literal_34;}) == _optionVal_31); _valueCheck_33;})); _optionCheck_32;}) && ({int64_t _literal_35 = 1/*True*/; _literal_35;})))
  {
    _match_0 = ((char) ({/* 'c' */;
                         char _literal_4 = 'c'; _literal_4;}));
  }
  else
  {
    if ((({int64_t _optionCheck_27;
           _optionCheck_27 = ((JUST == (*_sync_method_call_1).tag) && ({int64_t _valueCheck_28;
                                                                        char _optionVal_26 = (*_sync_method_call_1).val.i;
                                                                        _valueCheck_28 = (({char _literal_29 = '/'; _literal_29;}) == _optionVal_26); _valueCheck_28;})); _optionCheck_27;}) && ({int64_t _literal_30 = 1/*True*/; _literal_30;})))
    {
      _match_0 = ((char) ({/* 'e' */;
                           char _literal_5 = 'e'; _literal_5;}));
    }
    else
    {
      option_t* ___6;
      if ((({int64_t _varBinding_24;
             ___6 = _sync_method_call_1;
             _varBinding_24 = 1; _varBinding_24;}) && ({int64_t _literal_25 = 1/*True*/; _literal_25;})))
      {
        _match_0 = ((char) ({/* match s.char_at(s.size() - 2) with
  Just '/' => 't'
  _ => 's'
 */;
                             check_receiver(_enc__arg_s, ".", "s", "char_at", "\"./encore-libs-master/XML/XML.enc\" (line 115, column 31)");
                             int64_t _binop_12 = (({check_receiver(_enc__arg_s, ".", "s", "size", "\"./encore-libs-master/XML/XML.enc\" (line 115, column 42)");
                                                    pony_type_t* _tmp_10[] = {};
                                                    int64_t _sync_method_call_9 = _enc__method_String_String_size(_ctx, _enc__arg_s, NULL); _sync_method_call_9;}) - ({int64_t _literal_11 = 2; _literal_11;}));
                             pony_type_t* _tmp_13[] = {};
                             option_t* _sync_method_call_8 = _enc__method_String_String_char_at(_ctx, _enc__arg_s, NULL, _binop_12);
                             char _match_7;
                             if ((({int64_t _optionCheck_20;
                                    _optionCheck_20 = ((JUST == (*_sync_method_call_8).tag) && ({int64_t _valueCheck_21;
                                                                                                 char _optionVal_19 = (*_sync_method_call_8).val.i;
                                                                                                 _valueCheck_21 = (({char _literal_22 = '/'; _literal_22;}) == _optionVal_19); _valueCheck_21;})); _optionCheck_20;}) && ({int64_t _literal_23 = 1/*True*/; _literal_23;})))
                             {
                               _match_7 = ((char) ({/* 't' */;
                                                    char _literal_14 = 't'; _literal_14;}));
                             }
                             else
                             {
                               option_t* ___15;
                               if ((({int64_t _varBinding_17;
                                      ___15 = _sync_method_call_8;
                                      _varBinding_17 = 1; _varBinding_17;}) && ({int64_t _literal_18 = 1/*True*/; _literal_18;})))
                               {
                                 _match_7 = ((char) ({/* 's' */;
                                                      char _literal_16 = 's'; _literal_16;}));
                               }
                               else
                               {
                                 fprintf(stderr, "*** Runtime error: No matching clause was found ***\n");
                                 exit(1);
                               };
                             }; _match_7;}));
      }
      else
      {
        fprintf(stderr, "*** Runtime error: No matching clause was found ***\n");
        exit(1);
      };
    };
  };
  ENC_DTRACE3(METHOD_EXIT, (uintptr_t)*_ctx, (uintptr_t)_this, "tag_type");
  return ((char) _match_0);
}


void* _enc__method__encore_libs_master_XML_XML_XML_lib_ext_atribs(pony_ctx_t** _ctx, _enc__passive__encore_libs_master_XML_XML_XML_lib_t* _this, pony_type_t** runtimeType, _enc__passive__encore_libs_master_XML_XML_XML_node_t* _enc__arg_node, _enc__passive_String_String_t* _enc__arg_s)
{
  ENC_DTRACE3(METHOD_ENTRY, (uintptr_t)*_ctx, (uintptr_t)_this, "ext_atribs");
  /* node.atribs = new [(String, String)](s.occurrences("=")) */;
  check_receiver(_enc__arg_s, ".", "s", "occurrences", "\"./encore-libs-master/XML/XML.enc\" (line 125, column 44)");
  _enc__passive_String_String_t* _new_2 = _enc__constructor_String_String(_ctx, NULL);
  char* _embed_3 = ({"=";});
  pony_type_t* _tmp_4[] = {};
  _enc__type_init_String_String(_new_2);
  _enc__method_String_String_init(_ctx, _new_2, NULL, _embed_3);
  pony_type_t* _tmp_5[] = {};
  int64_t _sync_method_call_1 = _enc__method_String_String_occurrences(_ctx, _enc__arg_s, NULL, _new_2);
  array_t* _array_0 = array_mk(_ctx, _sync_method_call_1, (&(tuple_type)));
  (*({ENC_DTRACE3(FIELD_WRITE, (uintptr_t)*_ctx, (uintptr_t)_enc__arg_node, "atribs"); _enc__arg_node;}))._enc__field_atribs = _array_0;
  /* var eqsign = 0 */;
  /* eqsign = 0 */;
  int64_t _literal_6 = 0;
  int64_t _eqsign_7 = _literal_6;
  /* var space = 0 */;
  /* space = 0 */;
  int64_t _literal_8 = 0;
  int64_t _space_9 = _literal_8;
  /* var value = "" */;
  /* value = "" */;
  _enc__passive_String_String_t* _new_10 = _enc__constructor_String_String(_ctx, NULL);
  char* _embed_11 = ({"";});
  pony_type_t* _tmp_12[] = {};
  _enc__type_init_String_String(_new_10);
  _enc__method_String_String_init(_ctx, _new_10, NULL, _embed_11);
  _enc__passive_String_String_t* _value_13 = _new_10;
  /* var key = "" */;
  /* key = "" */;
  _enc__passive_String_String_t* _new_14 = _enc__constructor_String_String(_ctx, NULL);
  char* _embed_15 = ({"";});
  pony_type_t* _tmp_16[] = {};
  _enc__type_init_String_String(_new_14);
  _enc__method_String_String_init(_ctx, _new_14, NULL, _embed_15);
  _enc__passive_String_String_t* _key_17 = _new_14;
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
  void* _for_18;
  /* Range not generated */;
  int64_t _literal_25 = 0;
  int64_t _binop_29 = (({ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_enc__arg_node, "atribs");
                         array_t* _fieldacc_26 = (*_enc__arg_node)._enc__field_atribs;
                         int64_t _size_27 = array_size(_fieldacc_26); _size_27;}) - ({int64_t _literal_28 = 1; _literal_28;}));
  int64_t _literal_30 = 1;
  int64_t _literal_31 = 1;
  int64_t _step_23 = (_literal_31 * _literal_30);
  range_assert_step(_step_23);
  int64_t _index_19;
  if ((_step_23 > 0))
  {
    _index_19 = _literal_25;
  }
  else
  {
    _index_19 = _binop_29;
  };
  while (((_index_19 >= _literal_25) && (_index_19 <= _binop_29)))
  {
    int64_t _i_20 = _index_19;
    /* space = s.find_from(" ", eqsign) */;
    check_receiver(_enc__arg_s, ".", "s", "find_from", "\"./encore-libs-master/XML/XML.enc\" (line 132, column 19)");
    _enc__passive_String_String_t* _new_33 = _enc__constructor_String_String(_ctx, NULL);
    char* _embed_34 = ({" ";});
    pony_type_t* _tmp_35[] = {};
    _enc__type_init_String_String(_new_33);
    _enc__method_String_String_init(_ctx, _new_33, NULL, _embed_34);
    pony_type_t* _tmp_36[] = {};
    int64_t _sync_method_call_32 = _enc__method_String_String_find_from(_ctx, _enc__arg_s, NULL, _new_33, _eqsign_7);
    _space_9 = _sync_method_call_32;
    /* eqsign = s.find_from("=", eqsign + 1) */;
    check_receiver(_enc__arg_s, ".", "s", "find_from", "\"./encore-libs-master/XML/XML.enc\" (line 133, column 20)");
    _enc__passive_String_String_t* _new_38 = _enc__constructor_String_String(_ctx, NULL);
    char* _embed_39 = ({"=";});
    pony_type_t* _tmp_40[] = {};
    _enc__type_init_String_String(_new_38);
    _enc__method_String_String_init(_ctx, _new_38, NULL, _embed_39);
    int64_t _binop_42 = (({ _eqsign_7;}) + ({int64_t _literal_41 = 1; _literal_41;}));
    pony_type_t* _tmp_43[] = {};
    int64_t _sync_method_call_37 = _enc__method_String_String_find_from(_ctx, _enc__arg_s, NULL, _new_38, _binop_42);
    _eqsign_7 = _sync_method_call_37;
    /* value = match s.substring(eqsign + 2, 
                          this.or_find_from(" ", ">", eqsign, s) - 1) with
          Just derp => derp
          Nothing => "MISSFORMEDVALUE"
         */;
    check_receiver(_enc__arg_s, ".", "s", "substring", "\"./encore-libs-master/XML/XML.enc\" (line 134, column 25)");
    int64_t _binop_47 = (({ _eqsign_7;}) + ({int64_t _literal_46 = 2; _literal_46;}));
    int64_t _binop_57 = (({check_receiver(_this, ".", "this", "or_find_from", "\"./encore-libs-master/XML/XML.enc\" (line 134, column 46)");
                           _enc__passive_String_String_t* _new_49 = _enc__constructor_String_String(_ctx, NULL);
                           char* _embed_50 = ({" ";});
                           pony_type_t* _tmp_51[] = {};
                           _enc__type_init_String_String(_new_49);
                           _enc__method_String_String_init(_ctx, _new_49, NULL, _embed_50);
                           _enc__passive_String_String_t* _new_52 = _enc__constructor_String_String(_ctx, NULL);
                           char* _embed_53 = ({">";});
                           pony_type_t* _tmp_54[] = {};
                           _enc__type_init_String_String(_new_52);
                           _enc__method_String_String_init(_ctx, _new_52, NULL, _embed_53);
                           pony_type_t* _tmp_55[] = {};
                           int64_t _sync_method_call_48 = _enc__method__encore_libs_master_XML_XML_XML_lib_or_find_from(_ctx, _this, NULL, _new_49, _new_52, _eqsign_7, _enc__arg_s); _sync_method_call_48;}) - ({int64_t _literal_56 = 1; _literal_56;}));
    pony_type_t* _tmp_58[] = {};
    option_t* _sync_method_call_45 = _enc__method_String_String_substring(_ctx, _enc__arg_s, NULL, _binop_47, _binop_57);
    _enc__passive_String_String_t* _match_44;
    _enc__passive_String_String_t* _derp_59;
    if ((({int64_t _optionCheck_67;
           _optionCheck_67 = ((JUST == (*_sync_method_call_45).tag) && ({int64_t _varBinding_68;
                                                                         _enc__passive_String_String_t* _optionVal_66 = (*_sync_method_call_45).val.p;
                                                                         _derp_59 = _optionVal_66;
                                                                         _varBinding_68 = 1; _varBinding_68;})); _optionCheck_67;}) && ({int64_t _literal_69 = 1/*True*/; _literal_69;})))
    {
      _match_44 = ((_enc__passive_String_String_t*) ({ _derp_59;}));
    }
    else
    {
      if ((({int64_t _valueCheck_63;
             _valueCheck_63 = (({option_t* _option_64 = (&(DEFAULT_NOTHING)); _option_64;}) == _sync_method_call_45); _valueCheck_63;}) && ({int64_t _literal_65 = 1/*True*/; _literal_65;})))
      {
        _match_44 = ((_enc__passive_String_String_t*) ({_enc__passive_String_String_t* _new_60 = _enc__constructor_String_String(_ctx, NULL);
                                                        char* _embed_61 = ({"MISSFORMEDVALUE";});
                                                        pony_type_t* _tmp_62[] = {};
                                                        _enc__type_init_String_String(_new_60);
                                                        _enc__method_String_String_init(_ctx, _new_60, NULL, _embed_61); _new_60;}));
      }
      else
      {
        fprintf(stderr, "*** Runtime error: No matching clause was found ***\n");
        exit(1);
      };
    };
    _value_13 = _match_44;
    /* key = match s.substring(space, eqsign) with
        Just derp => derp
        Nothing => "MISSFORMEDKEY"
       */;
    check_receiver(_enc__arg_s, ".", "s", "substring", "\"./encore-libs-master/XML/XML.enc\" (line 137, column 23)");
    pony_type_t* _tmp_72[] = {};
    option_t* _sync_method_call_71 = _enc__method_String_String_substring(_ctx, _enc__arg_s, NULL, _space_9, _eqsign_7);
    _enc__passive_String_String_t* _match_70;
    _enc__passive_String_String_t* _derp_73;
    if ((({int64_t _optionCheck_81;
           _optionCheck_81 = ((JUST == (*_sync_method_call_71).tag) && ({int64_t _varBinding_82;
                                                                         _enc__passive_String_String_t* _optionVal_80 = (*_sync_method_call_71).val.p;
                                                                         _derp_73 = _optionVal_80;
                                                                         _varBinding_82 = 1; _varBinding_82;})); _optionCheck_81;}) && ({int64_t _literal_83 = 1/*True*/; _literal_83;})))
    {
      _match_70 = ((_enc__passive_String_String_t*) ({ _derp_73;}));
    }
    else
    {
      if ((({int64_t _valueCheck_77;
             _valueCheck_77 = (({option_t* _option_78 = (&(DEFAULT_NOTHING)); _option_78;}) == _sync_method_call_71); _valueCheck_77;}) && ({int64_t _literal_79 = 1/*True*/; _literal_79;})))
      {
        _match_70 = ((_enc__passive_String_String_t*) ({_enc__passive_String_String_t* _new_74 = _enc__constructor_String_String(_ctx, NULL);
                                                        char* _embed_75 = ({"MISSFORMEDKEY";});
                                                        pony_type_t* _tmp_76[] = {};
                                                        _enc__type_init_String_String(_new_74);
                                                        _enc__method_String_String_init(_ctx, _new_74, NULL, _embed_75); _new_74;}));
      }
      else
      {
        fprintf(stderr, "*** Runtime error: No matching clause was found ***\n");
        exit(1);
      };
    };
    _key_17 = _match_70;
    /* node.atribs[i] = (key, value) */;
    tuple_t* _tuple_84 = tuple_mk(_ctx, 2);
    tuple_set_type(_tuple_84, 0, (&(_enc__passive_String_String_type)));
    tuple_set_type(_tuple_84, 1, (&(_enc__passive_String_String_type)));
    tuple_set(_tuple_84, 0, ((encore_arg_t) {.p = _key_17}));
    tuple_set(_tuple_84, 1, ((encore_arg_t) {.p = _value_13}));
    ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_enc__arg_node, "atribs");
    array_t* _fieldacc_85 = (*_enc__arg_node)._enc__field_atribs;
    array_set(_fieldacc_85, _i_20, ((encore_arg_t) {.p = _tuple_84}));
    _for_18 = UNIT;
    _index_19 = (_index_19 + _step_23);
  };
  ENC_DTRACE3(METHOD_EXIT, (uintptr_t)*_ctx, (uintptr_t)_this, "ext_atribs");
  return UNIT;
}


int64_t _enc__method__encore_libs_master_XML_XML_XML_lib_or_find_from(pony_ctx_t** _ctx, _enc__passive__encore_libs_master_XML_XML_XML_lib_t* _this, pony_type_t** runtimeType, _enc__passive_String_String_t* _enc__arg_a, _enc__passive_String_String_t* _enc__arg_b, int64_t _enc__arg_i, _enc__passive_String_String_t* _enc__arg_s)
{
  ENC_DTRACE3(METHOD_ENTRY, (uintptr_t)*_ctx, (uintptr_t)_this, "or_find_from");
  /* var w = s.find_from(a, i) */;
  /* w = s.find_from(a, i) */;
  check_receiver(_enc__arg_s, ".", "s", "find_from", "\"./encore-libs-master/XML/XML.enc\" (line 145, column 17)");
  pony_type_t* _tmp_1[] = {};
  int64_t _sync_method_call_0 = _enc__method_String_String_find_from(_ctx, _enc__arg_s, NULL, _enc__arg_a, _enc__arg_i);
  int64_t _w_2 = _sync_method_call_0;
  /* var q = s.find_from(b, i) */;
  /* q = s.find_from(b, i) */;
  check_receiver(_enc__arg_s, ".", "s", "find_from", "\"./encore-libs-master/XML/XML.enc\" (line 146, column 17)");
  pony_type_t* _tmp_4[] = {};
  int64_t _sync_method_call_3 = _enc__method_String_String_find_from(_ctx, _enc__arg_s, NULL, _enc__arg_b, _enc__arg_i);
  int64_t _q_5 = _sync_method_call_3;
  /* if w < q and w > - 1 then
  w
else
  q */;
  int64_t _ite_6;
  if (({int64_t _binop_11 = (({int64_t _binop_7 = (({ _w_2;}) < ({ _q_5;})); _binop_7;}) && ({int64_t _binop_10 = (({ _w_2;}) > ({int64_t _literal_8 = 1;
                                                                                                                                  int64_t _unary_9 = (- _literal_8); _unary_9;})); _binop_10;})); _binop_11;}))
  {
    /* w */;
    _ite_6 = ((int64_t) _w_2);
  }
  else
  {
    /* q */;
    _ite_6 = ((int64_t) _q_5);
  };
  ENC_DTRACE3(METHOD_EXIT, (uintptr_t)*_ctx, (uintptr_t)_this, "or_find_from");
  return ((int64_t) _ite_6);
}


int64_t _enc__method__encore_libs_master_XML_XML_XML_lib_pair(pony_ctx_t** _ctx, _enc__passive__encore_libs_master_XML_XML_XML_lib_t* _this, pony_type_t** runtimeType, _enc__passive_String_String_t* _enc__arg_head, _enc__passive_String_String_t* _enc__arg_tail)
{
  ENC_DTRACE3(METHOD_ENTRY, (uintptr_t)*_ctx, (uintptr_t)_this, "pair");
  /* true */;
  int64_t _literal_0 = 1/*True*/;
  ENC_DTRACE3(METHOD_EXIT, (uintptr_t)*_ctx, (uintptr_t)_this, "pair");
  return ((int64_t) _literal_0);
}


option_t* _enc__method__encore_libs_master_XML_XML_XML_lib_file_to_xml(pony_ctx_t** _ctx, _enc__passive__encore_libs_master_XML_XML_XML_lib_t* _this, pony_type_t** runtimeType, _enc__passive_String_String_t* _enc__arg_fname)
{
  ENC_DTRACE3(METHOD_ENTRY, (uintptr_t)*_ctx, (uintptr_t)_this, "file_to_xml");
  /* var f = new File("", "") */;
  /* f = new File("", "") */;
  _enc__passive__encore_libs_master_FileIO_IO_File_t* _new_0 = _enc__constructor__encore_libs_master_FileIO_IO_File(_ctx, NULL);
  _enc__passive_String_String_t* _new_1 = _enc__constructor_String_String(_ctx, NULL);
  char* _embed_2 = ({"";});
  pony_type_t* _tmp_3[] = {};
  _enc__type_init_String_String(_new_1);
  _enc__method_String_String_init(_ctx, _new_1, NULL, _embed_2);
  _enc__passive_String_String_t* _new_4 = _enc__constructor_String_String(_ctx, NULL);
  char* _embed_5 = ({"";});
  pony_type_t* _tmp_6[] = {};
  _enc__type_init_String_String(_new_4);
  _enc__method_String_String_init(_ctx, _new_4, NULL, _embed_5);
  pony_type_t* _tmp_7[] = {};
  _enc__type_init__encore_libs_master_FileIO_IO_File(_new_0);
  _enc__method__encore_libs_master_FileIO_IO_File_init(_ctx, _new_0, NULL, _new_1, _new_4);
  _enc__passive__encore_libs_master_FileIO_IO_File_t* _f_8 = _new_0;
  /* var s = "" */;
  /* s = "" */;
  _enc__passive_String_String_t* _new_9 = _enc__constructor_String_String(_ctx, NULL);
  char* _embed_10 = ({"";});
  pony_type_t* _tmp_11[] = {};
  _enc__type_init_String_String(_new_9);
  _enc__method_String_String_init(_ctx, _new_9, NULL, _embed_10);
  _enc__passive_String_String_t* _s_12 = _new_9;
  /* f.open(fname, "r") */;
  check_receiver(_f_8, ".", "f", "open", "\"./encore-libs-master/XML/XML.enc\" (line 158, column 8)");
  _enc__passive_String_String_t* _new_14 = _enc__constructor_String_String(_ctx, NULL);
  char* _embed_15 = ({"r";});
  pony_type_t* _tmp_16[] = {};
  _enc__type_init_String_String(_new_14);
  _enc__method_String_String_init(_ctx, _new_14, NULL, _embed_15);
  pony_type_t* _tmp_17[] = {};
  void* _sync_method_call_13 = _enc__method__encore_libs_master_FileIO_IO_File_open(_ctx, _f_8, NULL, _enc__arg_fname, _new_14);
  /* while f.eof() != true
  s = s.concatenate(f.readline()) */;
  void* _while_26;
  while (({int64_t _binop_21 = (({check_receiver(_f_8, ".", "f", "eof", "\"./encore-libs-master/XML/XML.enc\" (line 160, column 14)");
                                  pony_type_t* _tmp_19[] = {};
                                  int64_t _sync_method_call_18 = _enc__method__encore_libs_master_FileIO_IO_File_eof(_ctx, _f_8, NULL); _sync_method_call_18;}) != ({int64_t _literal_20 = 1/*True*/; _literal_20;})); _binop_21;}))
  {
    /* s = s.concatenate(f.readline()) */;
    check_receiver(_s_12, ".", "s", "concatenate", "\"./encore-libs-master/XML/XML.enc\" (line 161, column 15)");
    check_receiver(_f_8, ".", "f", "readline", "\"./encore-libs-master/XML/XML.enc\" (line 161, column 29)");
    pony_type_t* _tmp_24[] = {};
    _enc__passive_String_String_t* _sync_method_call_23 = _enc__method__encore_libs_master_FileIO_IO_File_readline(_ctx, _f_8, NULL);
    pony_type_t* _tmp_25[] = {};
    _enc__passive_String_String_t* _sync_method_call_22 = _enc__method_String_String_concatenate(_ctx, _s_12, NULL, _sync_method_call_23);
    _s_12 = _sync_method_call_22;
    _while_26 = UNIT;
  };
  /* this.new_XML_node(s) */;
  check_receiver(_this, ".", "this", "new_XML_node", "\"./encore-libs-master/XML/XML.enc\" (line 165, column 8)");
  pony_type_t* _tmp_28[] = {};
  option_t* _sync_method_call_27 = _enc__method__encore_libs_master_XML_XML_XML_lib_new_XML_node(_ctx, _this, NULL, _s_12);
  ENC_DTRACE3(METHOD_EXIT, (uintptr_t)*_ctx, (uintptr_t)_this, "file_to_xml");
  return ((option_t*) _sync_method_call_27);
}


pony_type_t _enc__passive__encore_libs_master_XML_XML_XML_lib_type = {.id=_ENC__ID__encore_libs_master_XML_XML_XML_lib, .size=sizeof(_enc__passive__encore_libs_master_XML_XML_XML_lib_t), .trace=_enc__trace__encore_libs_master_XML_XML_XML_lib, .vtable=trait_method_selector};
