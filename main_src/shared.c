#include "header.h"


////////////////////////////////////
// Embedded Code from "./main.enc"













































// This function is called in the very beginning of the program to
// build an array containing the arguments of the program.
array_t *_init_argv(pony_ctx_t** ctx, size_t argc, char **argv) {
  array_t *arr = array_mk(ctx, argc, &_enc__passive_String_String_type);
  for(int i = 0; i < argc; i++) {
    _enc__passive_String_String_t* s =
      encore_alloc(*ctx, sizeof(_enc__passive_String_String_t));
    s->_enc__self_type = &_enc__passive_String_String_type;
    _enc__method_String_String_init(ctx, s, NULL, argv[i]);
    array_set(arr, i, (encore_arg_t){.p = s});
  }
  return arr;
}


/////////////////////
// Global functions


array_t* _enc__global_fun__encore_libs_master_Ped_util_Global_funsparse_file(pony_ctx_t** _ctx, pony_type_t** runtimeType, _enc__passive_String_String_t* _enc__arg_fname)
{
  ENC_DTRACE2(FUNCTION_ENTRY, (uintptr_t)*_ctx, "parse_file");
  /* var sen = new XML_lib() */;
  /* sen = new XML_lib() */;
  _enc__passive__encore_libs_master_XML_XML_XML_lib_t* _new_0 = _enc__constructor__encore_libs_master_XML_XML_XML_lib(_ctx, NULL);
  pony_type_t* _tmp_1[] = {};
  _enc__type_init__encore_libs_master_XML_XML_XML_lib(_new_0);
  _enc__method__encore_libs_master_XML_XML_XML_lib_init(_ctx, _new_0, NULL);
  _enc__passive__encore_libs_master_XML_XML_XML_lib_t* _sen_2 = _new_0;
  /* var file = new XML_node() */;
  /* file = new XML_node() */;
  _enc__passive__encore_libs_master_XML_XML_XML_node_t* _new_3 = _enc__constructor__encore_libs_master_XML_XML_XML_node(_ctx, NULL);
  pony_type_t* _tmp_4[] = {};
  _enc__type_init__encore_libs_master_XML_XML_XML_node(_new_3);
  _enc__method__encore_libs_master_XML_XML_XML_node_init(_ctx, _new_3, NULL);
  _enc__passive__encore_libs_master_XML_XML_XML_node_t* _file_5 = _new_3;
  /* {match sen.file_to_xml(fname) with
   Just xml => file = xml
   Nothing => print("\n\nBADXML!\n")
 ;
 var xml_way = file.children_named("waypoint");
 var waypoints = new [(int, int)](|xml_way|);
 var waypoints_distance = new [int](|xml_way|);
 var i = 0;
 {for a in xml_way
    {waypoints[i] = match (a.attribute_value("x").to_int(), 
                           a.attribute_value("y").to_int()) with
                      (Just x, Just y) => (x, y)
                      _ => {print("BADINT!\n");
                            (0, 0)}
                    ;
     waypoints_distance[i] = int_or_0(a.attribute_value("r").to_int());
     i = i + 1};
  var nr_agents = 0;
  for a in file.children_named("agent")
    nr_agents = nr_agents + match a.attribute_value("n").to_int() with
                              Just nr => nr
                              _ => {print("BADINT2!\n");
                                    0}
                            ;
  var agents = new [Agent](nr_agents);
  var i = 0;
  {for a in file.children_named("agent")
     {var max = int_or_0(a.attribute_value("n").to_int());
      var x = int_or_0(a.attribute_value("xs").to_int());
      var y = int_or_0(a.attribute_value("ys").to_int());
      var dx_max = int_or_0(a.attribute_value("dx").to_int()) / 2;
      var dy_max = int_or_0(a.attribute_value("dy").to_int()) / 2;
      var agent_waypoints = new [(int, int)](|a.children_named("addway")|);
      var dx = x - dx_max;
      var dy = y - dy_max;
      var j = 0;
      {for b in a.children_named("addway")
         {agent_waypoints[j] = waypoints[int_or_0(string_or_empty(b.attribute_value("id").substring(1, 
                                                                                                    2)).to_int()) - 1];
          unless |agent_waypoints| > 1 then
            {print("THIS SHOULD NEVER HAPPEN |new_agent.waypoint|={}\n", 
                   |agent_waypoints|);
             max = 1 / 0};
          j = j + 1};
       for unused in [ 0 , max by 1 ]
         {if dx > x + dx_max then
            {print("out of space\n");
             dx = x - dx_max}
          else
            if dy > y + dy_max then
              {dy = y - dy_max;
               dx = dx + 1}
            else
              dy = dy + 1;
          agents[i] = new Agent((dx, dy), 
                                copy_tr(agent_waypoints), 
                                copy_ar(waypoints_distance), 
                                i, 
                                10000);
          i = i + 1}}};
   agents}}} */;
  /* match sen.file_to_xml(fname) with
  Just xml => file = xml
  Nothing => print("\n\nBADXML!\n")
 */;
  check_receiver(_sen_2, ".", "sen", "file_to_xml", "\"./encore-libs-master/Ped_util/Global_funs.enc\" (line 182, column 18)");
  pony_type_t* _tmp_8[] = {};
  option_t* _sync_method_call_7 = _enc__method__encore_libs_master_XML_XML_XML_lib_file_to_xml(_ctx, _sen_2, NULL, _enc__arg_fname);
  void* _match_6;
  _enc__passive__encore_libs_master_XML_XML_XML_node_t* _xml_9;
  if ((({int64_t _optionCheck_15;
         _optionCheck_15 = ((JUST == (*_sync_method_call_7).tag) && ({int64_t _varBinding_16;
                                                                      _enc__passive__encore_libs_master_XML_XML_XML_node_t* _optionVal_14 = (*_sync_method_call_7).val.p;
                                                                      _xml_9 = _optionVal_14;
                                                                      _varBinding_16 = 1; _varBinding_16;})); _optionCheck_15;}) && ({int64_t _literal_17 = 1/*True*/; _literal_17;})))
  {
    _match_6 = ((void*) ({/* file = xml */;
                          _file_5 = _xml_9; UNIT;}));
  }
  else
  {
    if ((({int64_t _valueCheck_11;
           _valueCheck_11 = (({option_t* _option_12 = (&(DEFAULT_NOTHING)); _option_12;}) == _sync_method_call_7); _valueCheck_11;}) && ({int64_t _literal_13 = 1/*True*/; _literal_13;})))
    {
      _match_6 = ((void*) ({char* _literal_10 = "\n\nBADXML!\n";
                            fprintf(stdout, "%s", _literal_10); UNIT;}));
    }
    else
    {
      fprintf(stderr, "*** Runtime error: No matching clause was found ***\n");
      exit(1);
    };
  };
  /* var xml_way = file.children_named("waypoint") */;
  /* xml_way = file.children_named("waypoint") */;
  check_receiver(_file_5, ".", "file", "children_named", "\"./encore-libs-master/Ped_util/Global_funs.enc\" (line 187, column 23)");
  _enc__passive_String_String_t* _new_19 = _enc__constructor_String_String(_ctx, NULL);
  char* _embed_20 = ({"waypoint";});
  pony_type_t* _tmp_21[] = {};
  _enc__type_init_String_String(_new_19);
  _enc__method_String_String_init(_ctx, _new_19, NULL, _embed_20);
  pony_type_t* _tmp_22[] = {};
  array_t* _sync_method_call_18 = _enc__method__encore_libs_master_XML_XML_XML_node_children_named(_ctx, _file_5, NULL, _new_19);
  array_t* _xml_way_23 = _sync_method_call_18;
  /* var waypoints = new [(int, int)](|xml_way|) */;
  /* waypoints = new [(int, int)](|xml_way|) */;
  int64_t _size_25 = array_size(_xml_way_23);
  array_t* _array_24 = array_mk(_ctx, _size_25, (&(tuple_type)));
  array_t* _waypoints_26 = _array_24;
  /* var waypoints_distance = new [int](|xml_way|) */;
  /* waypoints_distance = new [int](|xml_way|) */;
  int64_t _size_28 = array_size(_xml_way_23);
  array_t* _array_27 = array_mk(_ctx, _size_28, ENCORE_PRIMITIVE);
  array_t* _waypoints_distance_29 = _array_27;
  /* var i = 0 */;
  /* i = 0 */;
  int64_t _literal_30 = 0;
  int64_t _i_31 = _literal_30;
  /* {for a in xml_way
   {waypoints[i] = match (a.attribute_value("x").to_int(), 
                          a.attribute_value("y").to_int()) with
                     (Just x, Just y) => (x, y)
                     _ => {print("BADINT!\n");
                           (0, 0)}
                   ;
    waypoints_distance[i] = int_or_0(a.attribute_value("r").to_int());
    i = i + 1};
 var nr_agents = 0;
 for a in file.children_named("agent")
   nr_agents = nr_agents + match a.attribute_value("n").to_int() with
                             Just nr => nr
                             _ => {print("BADINT2!\n");
                                   0}
                           ;
 var agents = new [Agent](nr_agents);
 var i = 0;
 {for a in file.children_named("agent")
    {var max = int_or_0(a.attribute_value("n").to_int());
     var x = int_or_0(a.attribute_value("xs").to_int());
     var y = int_or_0(a.attribute_value("ys").to_int());
     var dx_max = int_or_0(a.attribute_value("dx").to_int()) / 2;
     var dy_max = int_or_0(a.attribute_value("dy").to_int()) / 2;
     var agent_waypoints = new [(int, int)](|a.children_named("addway")|);
     var dx = x - dx_max;
     var dy = y - dy_max;
     var j = 0;
     {for b in a.children_named("addway")
        {agent_waypoints[j] = waypoints[int_or_0(string_or_empty(b.attribute_value("id").substring(1, 
                                                                                                   2)).to_int()) - 1];
         unless |agent_waypoints| > 1 then
           {print("THIS SHOULD NEVER HAPPEN |new_agent.waypoint|={}\n", 
                  |agent_waypoints|);
            max = 1 / 0};
         j = j + 1};
      for unused in [ 0 , max by 1 ]
        {if dx > x + dx_max then
           {print("out of space\n");
            dx = x - dx_max}
         else
           if dy > y + dy_max then
             {dy = y - dy_max;
              dx = dx + 1}
           else
             dy = dy + 1;
         agents[i] = new Agent((dx, dy), 
                               copy_tr(agent_waypoints), 
                               copy_ar(waypoints_distance), 
                               i, 
                               10000);
         i = i + 1}}};
  agents}} */;
  /* for a in xml_way
  {waypoints[i] = match (a.attribute_value("x").to_int(), 
                         a.attribute_value("y").to_int()) with
                    (Just x, Just y) => (x, y)
                    _ => {print("BADINT!\n");
                          (0, 0)}
                  ;
   waypoints_distance[i] = int_or_0(a.attribute_value("r").to_int());
   i = i + 1} */;
  void* _for_32;
  int64_t _start_35 = 0;
  int64_t _stop_36 = (array_size(_xml_way_23) - 1);
  int64_t _src_step_38 = 1;
  int64_t _literal_39 = 1;
  int64_t _step_37 = (_literal_39 * _src_step_38);
  range_assert_step(_step_37);
  int64_t _index_33;
  if ((_step_37 > 0))
  {
    _index_33 = _start_35;
  }
  else
  {
    _index_33 = _stop_36;
  };
  while (((_index_33 >= _start_35) && (_index_33 <= _stop_36)))
  {
    _enc__passive__encore_libs_master_XML_XML_XML_node_t* _a_34 = array_get(_xml_way_23, _index_33).p;
    /* waypoints[i] = match (a.attribute_value("x").to_int(), 
                      a.attribute_value("y").to_int()) with
                 (Just x, Just y) => (x, y)
                 _ => {print("BADINT!\n");
                       (0, 0)}
                */;
    /* match (a.attribute_value("x").to_int(), 
       a.attribute_value("y").to_int()) with
  (Just x, Just y) => (x, y)
  _ => {print("BADINT!\n");
        (0, 0)}
 */;
    tuple_t* _tuple_41 = tuple_mk(_ctx, 2);
    tuple_set_type(_tuple_41, 0, (&(option_type)));
    tuple_set_type(_tuple_41, 1, (&(option_type)));
    check_receiver(_a_34, ".", "a", "attribute_value", "\"./encore-libs-master/Ped_util/Global_funs.enc\" (line 195, column 24)");
    _enc__passive_String_String_t* _new_44 = _enc__constructor_String_String(_ctx, NULL);
    char* _embed_45 = ({"x";});
    pony_type_t* _tmp_46[] = {};
    _enc__type_init_String_String(_new_44);
    _enc__method_String_String_init(_ctx, _new_44, NULL, _embed_45);
    pony_type_t* _tmp_47[] = {};
    _enc__passive_String_String_t* _sync_method_call_43 = _enc__method__encore_libs_master_XML_XML_XML_node_attribute_value(_ctx, _a_34, NULL, _new_44);
    check_receiver(_sync_method_call_43, ".", "a.attribute_value(new String.String(embed char* \"x\"; end))", "to_int", "\"./encore-libs-master/Ped_util/Global_funs.enc\" (line 195, column 24)");
    pony_type_t* _tmp_48[] = {};
    option_t* _sync_method_call_42 = _enc__method_String_String_to_int(_ctx, _sync_method_call_43, NULL);
    check_receiver(_a_34, ".", "a", "attribute_value", "\"./encore-libs-master/Ped_util/Global_funs.enc\" (line 195, column 56)");
    _enc__passive_String_String_t* _new_51 = _enc__constructor_String_String(_ctx, NULL);
    char* _embed_52 = ({"y";});
    pony_type_t* _tmp_53[] = {};
    _enc__type_init_String_String(_new_51);
    _enc__method_String_String_init(_ctx, _new_51, NULL, _embed_52);
    pony_type_t* _tmp_54[] = {};
    _enc__passive_String_String_t* _sync_method_call_50 = _enc__method__encore_libs_master_XML_XML_XML_node_attribute_value(_ctx, _a_34, NULL, _new_51);
    check_receiver(_sync_method_call_50, ".", "a.attribute_value(new String.String(embed char* \"y\"; end))", "to_int", "\"./encore-libs-master/Ped_util/Global_funs.enc\" (line 195, column 56)");
    pony_type_t* _tmp_55[] = {};
    option_t* _sync_method_call_49 = _enc__method_String_String_to_int(_ctx, _sync_method_call_50, NULL);
    tuple_set(_tuple_41, 0, ((encore_arg_t) {.p = _sync_method_call_42}));
    tuple_set(_tuple_41, 1, ((encore_arg_t) {.p = _sync_method_call_49}));
    tuple_t* _match_40;
    int64_t _x_56;
    int64_t _y_57;
    if ((({int64_t _tupleCheck_66;
           _tupleCheck_66 = 1;
           option_t* _tupleAccess_67 = tuple_get(_tuple_41, 0).p;
           int64_t _optionCheck_69;
           _optionCheck_69 = ((JUST == (*_tupleAccess_67).tag) && ({int64_t _varBinding_70;
                                                                    int64_t _optionVal_68 = (*_tupleAccess_67).val.i;
                                                                    _x_56 = _optionVal_68;
                                                                    _varBinding_70 = 1; _varBinding_70;}));
           _tupleCheck_66 = (_tupleCheck_66 && _optionCheck_69);
           option_t* _tupleAccess_71 = tuple_get(_tuple_41, 1).p;
           int64_t _optionCheck_73;
           _optionCheck_73 = ((JUST == (*_tupleAccess_71).tag) && ({int64_t _varBinding_74;
                                                                    int64_t _optionVal_72 = (*_tupleAccess_71).val.i;
                                                                    _y_57 = _optionVal_72;
                                                                    _varBinding_74 = 1; _varBinding_74;}));
           _tupleCheck_66 = (_tupleCheck_66 && _optionCheck_73); _tupleCheck_66;}) && ({int64_t _literal_75 = 1/*True*/; _literal_75;})))
    {
      _match_40 = ((tuple_t*) ({tuple_t* _tuple_58 = tuple_mk(_ctx, 2);
                                tuple_set_type(_tuple_58, 0, ENCORE_PRIMITIVE);
                                tuple_set_type(_tuple_58, 1, ENCORE_PRIMITIVE);
                                tuple_set(_tuple_58, 0, ((encore_arg_t) {.i = _x_56}));
                                tuple_set(_tuple_58, 1, ((encore_arg_t) {.i = _y_57})); _tuple_58;}));
    }
    else
    {
      tuple_t* ___59;
      if ((({int64_t _varBinding_64;
             ___59 = _tuple_41;
             _varBinding_64 = 1; _varBinding_64;}) && ({int64_t _literal_65 = 1/*True*/; _literal_65;})))
      {
        _match_40 = ((tuple_t*) ({/* print("BADINT!\n") */;
                                  char* _literal_60 = "BADINT!\n";
                                  fprintf(stdout, "%s", _literal_60);
                                  /* (0, 0) */;
                                  tuple_t* _tuple_61 = tuple_mk(_ctx, 2);
                                  tuple_set_type(_tuple_61, 0, ENCORE_PRIMITIVE);
                                  tuple_set_type(_tuple_61, 1, ENCORE_PRIMITIVE);
                                  int64_t _literal_62 = 0;
                                  int64_t _literal_63 = 0;
                                  tuple_set(_tuple_61, 0, ((encore_arg_t) {.i = _literal_62}));
                                  tuple_set(_tuple_61, 1, ((encore_arg_t) {.i = _literal_63})); _tuple_61;}));
      }
      else
      {
        fprintf(stderr, "*** Runtime error: No matching clause was found ***\n");
        exit(1);
      };
    };
    array_set(_waypoints_26, _i_31, ((encore_arg_t) {.p = _match_40}));
    /* waypoints_distance[i] = int_or_0(a.attribute_value("r").to_int()) */;
    check_receiver(_a_34, ".", "a", "attribute_value", "\"./encore-libs-master/Ped_util/Global_funs.enc\" (line 198, column 49)");
    _enc__passive_String_String_t* _new_78 = _enc__constructor_String_String(_ctx, NULL);
    char* _embed_79 = ({"r";});
    pony_type_t* _tmp_80[] = {};
    _enc__type_init_String_String(_new_78);
    _enc__method_String_String_init(_ctx, _new_78, NULL, _embed_79);
    pony_type_t* _tmp_81[] = {};
    _enc__passive_String_String_t* _sync_method_call_77 = _enc__method__encore_libs_master_XML_XML_XML_node_attribute_value(_ctx, _a_34, NULL, _new_78);
    check_receiver(_sync_method_call_77, ".", "a.attribute_value(new String.String(embed char* \"r\"; end))", "to_int", "\"./encore-libs-master/Ped_util/Global_funs.enc\" (line 198, column 49)");
    pony_type_t* _tmp_82[] = {};
    option_t* _sync_method_call_76 = _enc__method_String_String_to_int(_ctx, _sync_method_call_77, NULL);
    ENC_DTRACE2(FUNCTION_CALL, (uintptr_t)*_ctx, "Global_funs.int_or_0");
    pony_type_t* _tmp_83[] = {};
    int64_t _fun_call_84 = _enc__global_fun__encore_libs_master_Ped_util_Global_funsint_or_0(_ctx, NULL, _sync_method_call_76);
    array_set(_waypoints_distance_29, _i_31, ((encore_arg_t) {.i = _fun_call_84}));
    /* i = i + 1 */;
    int64_t _binop_86 = (({ _i_31;}) + ({int64_t _literal_85 = 1; _literal_85;}));
    _i_31 = _binop_86;
    _for_32 = UNIT;
    _index_33 = (_index_33 + _step_37);
  };
  /* var nr_agents = 0 */;
  /* nr_agents = 0 */;
  int64_t _literal_87 = 0;
  int64_t _nr_agents_88 = _literal_87;
  /* for a in file.children_named("agent")
  nr_agents = nr_agents + match a.attribute_value("n").to_int() with
                            Just nr => nr
                            _ => {print("BADINT2!\n");
                                  0}
                           */;
  void* _for_89;
  check_receiver(_file_5, ".", "file", "children_named", "\"./encore-libs-master/Ped_util/Global_funs.enc\" (line 205, column 21)");
  _enc__passive_String_String_t* _new_97 = _enc__constructor_String_String(_ctx, NULL);
  char* _embed_98 = ({"agent";});
  pony_type_t* _tmp_99[] = {};
  _enc__type_init_String_String(_new_97);
  _enc__method_String_String_init(_ctx, _new_97, NULL, _embed_98);
  pony_type_t* _tmp_100[] = {};
  array_t* _sync_method_call_96 = _enc__method__encore_libs_master_XML_XML_XML_node_children_named(_ctx, _file_5, NULL, _new_97);
  int64_t _start_92 = 0;
  int64_t _stop_93 = (array_size(_sync_method_call_96) - 1);
  int64_t _src_step_95 = 1;
  int64_t _literal_101 = 1;
  int64_t _step_94 = (_literal_101 * _src_step_95);
  range_assert_step(_step_94);
  int64_t _index_90;
  if ((_step_94 > 0))
  {
    _index_90 = _start_92;
  }
  else
  {
    _index_90 = _stop_93;
  };
  while (((_index_90 >= _start_92) && (_index_90 <= _stop_93)))
  {
    _enc__passive__encore_libs_master_XML_XML_XML_node_t* _a_91 = array_get(_sync_method_call_96, _index_90).p;
    /* nr_agents = nr_agents + match a.attribute_value("n").to_int() with
                          Just nr => nr
                          _ => {print("BADINT2!\n");
                                0}
                         */;
    int64_t _binop_120 = (({ _nr_agents_88;}) + ({/* match a.attribute_value("n").to_int() with
  Just nr => nr
  _ => {print("BADINT2!\n");
        0}
 */;
                                                  check_receiver(_a_91, ".", "a", "attribute_value", "\"./encore-libs-master/Ped_util/Global_funs.enc\" (line 207, column 30)");
                                                  _enc__passive_String_String_t* _new_105 = _enc__constructor_String_String(_ctx, NULL);
                                                  char* _embed_106 = ({"n";});
                                                  pony_type_t* _tmp_107[] = {};
                                                  _enc__type_init_String_String(_new_105);
                                                  _enc__method_String_String_init(_ctx, _new_105, NULL, _embed_106);
                                                  pony_type_t* _tmp_108[] = {};
                                                  _enc__passive_String_String_t* _sync_method_call_104 = _enc__method__encore_libs_master_XML_XML_XML_node_attribute_value(_ctx, _a_91, NULL, _new_105);
                                                  check_receiver(_sync_method_call_104, ".", "a.attribute_value(new String.String(embed char* \"n\"; end))", "to_int", "\"./encore-libs-master/Ped_util/Global_funs.enc\" (line 207, column 30)");
                                                  pony_type_t* _tmp_109[] = {};
                                                  option_t* _sync_method_call_103 = _enc__method_String_String_to_int(_ctx, _sync_method_call_104, NULL);
                                                  int64_t _match_102;
                                                  int64_t _nr_110;
                                                  if ((({int64_t _optionCheck_117;
                                                         _optionCheck_117 = ((JUST == (*_sync_method_call_103).tag) && ({int64_t _varBinding_118;
                                                                                                                         int64_t _optionVal_116 = (*_sync_method_call_103).val.i;
                                                                                                                         _nr_110 = _optionVal_116;
                                                                                                                         _varBinding_118 = 1; _varBinding_118;})); _optionCheck_117;}) && ({int64_t _literal_119 = 1/*True*/; _literal_119;})))
                                                  {
                                                    _match_102 = ((int64_t) ({ _nr_110;}));
                                                  }
                                                  else
                                                  {
                                                    option_t* ___111;
                                                    if ((({int64_t _varBinding_114;
                                                           ___111 = _sync_method_call_103;
                                                           _varBinding_114 = 1; _varBinding_114;}) && ({int64_t _literal_115 = 1/*True*/; _literal_115;})))
                                                    {
                                                      _match_102 = ((int64_t) ({/* print("BADINT2!\n") */;
                                                                                char* _literal_112 = "BADINT2!\n";
                                                                                fprintf(stdout, "%s", _literal_112);
                                                                                /* 0 */;
                                                                                int64_t _literal_113 = 0; _literal_113;}));
                                                    }
                                                    else
                                                    {
                                                      fprintf(stderr, "*** Runtime error: No matching clause was found ***\n");
                                                      exit(1);
                                                    };
                                                  }; _match_102;}));
    _nr_agents_88 = _binop_120;
    _for_89 = UNIT;
    _index_90 = (_index_90 + _step_94);
  };
  /* var agents = new [Agent](nr_agents) */;
  /* agents = new [Agent](nr_agents) */;
  array_t* _array_121 = array_mk(_ctx, _nr_agents_88, (&(_enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_type)));
  array_t* _agents_122 = _array_121;
  /* var i = 0 */;
  /* i = 0 */;
  int64_t _literal_123 = 0;
  int64_t _i_124 = _literal_123;
  /* {for a in file.children_named("agent")
   {var max = int_or_0(a.attribute_value("n").to_int());
    var x = int_or_0(a.attribute_value("xs").to_int());
    var y = int_or_0(a.attribute_value("ys").to_int());
    var dx_max = int_or_0(a.attribute_value("dx").to_int()) / 2;
    var dy_max = int_or_0(a.attribute_value("dy").to_int()) / 2;
    var agent_waypoints = new [(int, int)](|a.children_named("addway")|);
    var dx = x - dx_max;
    var dy = y - dy_max;
    var j = 0;
    {for b in a.children_named("addway")
       {agent_waypoints[j] = waypoints[int_or_0(string_or_empty(b.attribute_value("id").substring(1, 
                                                                                                  2)).to_int()) - 1];
        unless |agent_waypoints| > 1 then
          {print("THIS SHOULD NEVER HAPPEN |new_agent.waypoint|={}\n", 
                 |agent_waypoints|);
           max = 1 / 0};
        j = j + 1};
     for unused in [ 0 , max by 1 ]
       {if dx > x + dx_max then
          {print("out of space\n");
           dx = x - dx_max}
        else
          if dy > y + dy_max then
            {dy = y - dy_max;
             dx = dx + 1}
          else
            dy = dy + 1;
        agents[i] = new Agent((dx, dy), 
                              copy_tr(agent_waypoints), 
                              copy_ar(waypoints_distance), 
                              i, 
                              10000);
        i = i + 1}}};
 agents} */;
  /* for a in file.children_named("agent")
  {var max = int_or_0(a.attribute_value("n").to_int());
   var x = int_or_0(a.attribute_value("xs").to_int());
   var y = int_or_0(a.attribute_value("ys").to_int());
   var dx_max = int_or_0(a.attribute_value("dx").to_int()) / 2;
   var dy_max = int_or_0(a.attribute_value("dy").to_int()) / 2;
   var agent_waypoints = new [(int, int)](|a.children_named("addway")|);
   var dx = x - dx_max;
   var dy = y - dy_max;
   var j = 0;
   {for b in a.children_named("addway")
      {agent_waypoints[j] = waypoints[int_or_0(string_or_empty(b.attribute_value("id").substring(1, 
                                                                                                 2)).to_int()) - 1];
       unless |agent_waypoints| > 1 then
         {print("THIS SHOULD NEVER HAPPEN |new_agent.waypoint|={}\n", 
                |agent_waypoints|);
          max = 1 / 0};
       j = j + 1};
    for unused in [ 0 , max by 1 ]
      {if dx > x + dx_max then
         {print("out of space\n");
          dx = x - dx_max}
       else
         if dy > y + dy_max then
           {dy = y - dy_max;
            dx = dx + 1}
         else
           dy = dy + 1;
       agents[i] = new Agent((dx, dy), 
                             copy_tr(agent_waypoints), 
                             copy_ar(waypoints_distance), 
                             i, 
                             10000);
       i = i + 1}}} */;
  void* _for_125;
  check_receiver(_file_5, ".", "file", "children_named", "\"./encore-libs-master/Ped_util/Global_funs.enc\" (line 215, column 33)");
  _enc__passive_String_String_t* _new_133 = _enc__constructor_String_String(_ctx, NULL);
  char* _embed_134 = ({"agent";});
  pony_type_t* _tmp_135[] = {};
  _enc__type_init_String_String(_new_133);
  _enc__method_String_String_init(_ctx, _new_133, NULL, _embed_134);
  pony_type_t* _tmp_136[] = {};
  array_t* _sync_method_call_132 = _enc__method__encore_libs_master_XML_XML_XML_node_children_named(_ctx, _file_5, NULL, _new_133);
  int64_t _start_128 = 0;
  int64_t _stop_129 = (array_size(_sync_method_call_132) - 1);
  int64_t _src_step_131 = 1;
  int64_t _literal_137 = 1;
  int64_t _step_130 = (_literal_137 * _src_step_131);
  range_assert_step(_step_130);
  int64_t _index_126;
  if ((_step_130 > 0))
  {
    _index_126 = _start_128;
  }
  else
  {
    _index_126 = _stop_129;
  };
  while (((_index_126 >= _start_128) && (_index_126 <= _stop_129)))
  {
    _enc__passive__encore_libs_master_XML_XML_XML_node_t* _a_127 = array_get(_sync_method_call_132, _index_126).p;
    /* var max = int_or_0(a.attribute_value("n").to_int()) */;
    /* max = int_or_0(a.attribute_value("n").to_int()) */;
    check_receiver(_a_127, ".", "a", "attribute_value", "\"./encore-libs-master/Ped_util/Global_funs.enc\" (line 217, column 47)");
    _enc__passive_String_String_t* _new_140 = _enc__constructor_String_String(_ctx, NULL);
    char* _embed_141 = ({"n";});
    pony_type_t* _tmp_142[] = {};
    _enc__type_init_String_String(_new_140);
    _enc__method_String_String_init(_ctx, _new_140, NULL, _embed_141);
    pony_type_t* _tmp_143[] = {};
    _enc__passive_String_String_t* _sync_method_call_139 = _enc__method__encore_libs_master_XML_XML_XML_node_attribute_value(_ctx, _a_127, NULL, _new_140);
    check_receiver(_sync_method_call_139, ".", "a.attribute_value(new String.String(embed char* \"n\"; end))", "to_int", "\"./encore-libs-master/Ped_util/Global_funs.enc\" (line 217, column 47)");
    pony_type_t* _tmp_144[] = {};
    option_t* _sync_method_call_138 = _enc__method_String_String_to_int(_ctx, _sync_method_call_139, NULL);
    ENC_DTRACE2(FUNCTION_CALL, (uintptr_t)*_ctx, "Global_funs.int_or_0");
    pony_type_t* _tmp_145[] = {};
    int64_t _fun_call_146 = _enc__global_fun__encore_libs_master_Ped_util_Global_funsint_or_0(_ctx, NULL, _sync_method_call_138);
    int64_t _max_147 = _fun_call_146;
    /* var x = int_or_0(a.attribute_value("xs").to_int()) */;
    /* x = int_or_0(a.attribute_value("xs").to_int()) */;
    check_receiver(_a_127, ".", "a", "attribute_value", "\"./encore-libs-master/Ped_util/Global_funs.enc\" (line 218, column 49)");
    _enc__passive_String_String_t* _new_150 = _enc__constructor_String_String(_ctx, NULL);
    char* _embed_151 = ({"xs";});
    pony_type_t* _tmp_152[] = {};
    _enc__type_init_String_String(_new_150);
    _enc__method_String_String_init(_ctx, _new_150, NULL, _embed_151);
    pony_type_t* _tmp_153[] = {};
    _enc__passive_String_String_t* _sync_method_call_149 = _enc__method__encore_libs_master_XML_XML_XML_node_attribute_value(_ctx, _a_127, NULL, _new_150);
    check_receiver(_sync_method_call_149, ".", "a.attribute_value(new String.String(embed char* \"xs\"; end))", "to_int", "\"./encore-libs-master/Ped_util/Global_funs.enc\" (line 218, column 49)");
    pony_type_t* _tmp_154[] = {};
    option_t* _sync_method_call_148 = _enc__method_String_String_to_int(_ctx, _sync_method_call_149, NULL);
    ENC_DTRACE2(FUNCTION_CALL, (uintptr_t)*_ctx, "Global_funs.int_or_0");
    pony_type_t* _tmp_155[] = {};
    int64_t _fun_call_156 = _enc__global_fun__encore_libs_master_Ped_util_Global_funsint_or_0(_ctx, NULL, _sync_method_call_148);
    int64_t _x_157 = _fun_call_156;
    /* var y = int_or_0(a.attribute_value("ys").to_int()) */;
    /* y = int_or_0(a.attribute_value("ys").to_int()) */;
    check_receiver(_a_127, ".", "a", "attribute_value", "\"./encore-libs-master/Ped_util/Global_funs.enc\" (line 219, column 49)");
    _enc__passive_String_String_t* _new_160 = _enc__constructor_String_String(_ctx, NULL);
    char* _embed_161 = ({"ys";});
    pony_type_t* _tmp_162[] = {};
    _enc__type_init_String_String(_new_160);
    _enc__method_String_String_init(_ctx, _new_160, NULL, _embed_161);
    pony_type_t* _tmp_163[] = {};
    _enc__passive_String_String_t* _sync_method_call_159 = _enc__method__encore_libs_master_XML_XML_XML_node_attribute_value(_ctx, _a_127, NULL, _new_160);
    check_receiver(_sync_method_call_159, ".", "a.attribute_value(new String.String(embed char* \"ys\"; end))", "to_int", "\"./encore-libs-master/Ped_util/Global_funs.enc\" (line 219, column 49)");
    pony_type_t* _tmp_164[] = {};
    option_t* _sync_method_call_158 = _enc__method_String_String_to_int(_ctx, _sync_method_call_159, NULL);
    ENC_DTRACE2(FUNCTION_CALL, (uintptr_t)*_ctx, "Global_funs.int_or_0");
    pony_type_t* _tmp_165[] = {};
    int64_t _fun_call_166 = _enc__global_fun__encore_libs_master_Ped_util_Global_funsint_or_0(_ctx, NULL, _sync_method_call_158);
    int64_t _y_167 = _fun_call_166;
    /* var dx_max = int_or_0(a.attribute_value("dx").to_int()) / 2 */;
    /* dx_max = int_or_0(a.attribute_value("dx").to_int()) / 2 */;
    int64_t _binop_178 = (({check_receiver(_a_127, ".", "a", "attribute_value", "\"./encore-libs-master/Ped_util/Global_funs.enc\" (line 220, column 54)");
                            _enc__passive_String_String_t* _new_170 = _enc__constructor_String_String(_ctx, NULL);
                            char* _embed_171 = ({"dx";});
                            pony_type_t* _tmp_172[] = {};
                            _enc__type_init_String_String(_new_170);
                            _enc__method_String_String_init(_ctx, _new_170, NULL, _embed_171);
                            pony_type_t* _tmp_173[] = {};
                            _enc__passive_String_String_t* _sync_method_call_169 = _enc__method__encore_libs_master_XML_XML_XML_node_attribute_value(_ctx, _a_127, NULL, _new_170);
                            check_receiver(_sync_method_call_169, ".", "a.attribute_value(new String.String(embed char* \"dx\"; end))", "to_int", "\"./encore-libs-master/Ped_util/Global_funs.enc\" (line 220, column 54)");
                            pony_type_t* _tmp_174[] = {};
                            option_t* _sync_method_call_168 = _enc__method_String_String_to_int(_ctx, _sync_method_call_169, NULL);
                            ENC_DTRACE2(FUNCTION_CALL, (uintptr_t)*_ctx, "Global_funs.int_or_0");
                            pony_type_t* _tmp_175[] = {};
                            int64_t _fun_call_176 = _enc__global_fun__encore_libs_master_Ped_util_Global_funsint_or_0(_ctx, NULL, _sync_method_call_168); _fun_call_176;}) / ({int64_t _literal_177 = 2; _literal_177;}));
    int64_t _dx_max_179 = _binop_178;
    /* var dy_max = int_or_0(a.attribute_value("dy").to_int()) / 2 */;
    /* dy_max = int_or_0(a.attribute_value("dy").to_int()) / 2 */;
    int64_t _binop_190 = (({check_receiver(_a_127, ".", "a", "attribute_value", "\"./encore-libs-master/Ped_util/Global_funs.enc\" (line 221, column 54)");
                            _enc__passive_String_String_t* _new_182 = _enc__constructor_String_String(_ctx, NULL);
                            char* _embed_183 = ({"dy";});
                            pony_type_t* _tmp_184[] = {};
                            _enc__type_init_String_String(_new_182);
                            _enc__method_String_String_init(_ctx, _new_182, NULL, _embed_183);
                            pony_type_t* _tmp_185[] = {};
                            _enc__passive_String_String_t* _sync_method_call_181 = _enc__method__encore_libs_master_XML_XML_XML_node_attribute_value(_ctx, _a_127, NULL, _new_182);
                            check_receiver(_sync_method_call_181, ".", "a.attribute_value(new String.String(embed char* \"dy\"; end))", "to_int", "\"./encore-libs-master/Ped_util/Global_funs.enc\" (line 221, column 54)");
                            pony_type_t* _tmp_186[] = {};
                            option_t* _sync_method_call_180 = _enc__method_String_String_to_int(_ctx, _sync_method_call_181, NULL);
                            ENC_DTRACE2(FUNCTION_CALL, (uintptr_t)*_ctx, "Global_funs.int_or_0");
                            pony_type_t* _tmp_187[] = {};
                            int64_t _fun_call_188 = _enc__global_fun__encore_libs_master_Ped_util_Global_funsint_or_0(_ctx, NULL, _sync_method_call_180); _fun_call_188;}) / ({int64_t _literal_189 = 2; _literal_189;}));
    int64_t _dy_max_191 = _binop_190;
    /* var agent_waypoints = new [(int, int)](|a.children_named("addway")|) */;
    /* agent_waypoints = new [(int, int)](|a.children_named("addway")|) */;
    check_receiver(_a_127, ".", "a", "children_named", "\"./encore-libs-master/Ped_util/Global_funs.enc\" (line 222, column 69)");
    _enc__passive_String_String_t* _new_194 = _enc__constructor_String_String(_ctx, NULL);
    char* _embed_195 = ({"addway";});
    pony_type_t* _tmp_196[] = {};
    _enc__type_init_String_String(_new_194);
    _enc__method_String_String_init(_ctx, _new_194, NULL, _embed_195);
    pony_type_t* _tmp_197[] = {};
    array_t* _sync_method_call_193 = _enc__method__encore_libs_master_XML_XML_XML_node_children_named(_ctx, _a_127, NULL, _new_194);
    int64_t _size_198 = array_size(_sync_method_call_193);
    array_t* _array_192 = array_mk(_ctx, _size_198, (&(tuple_type)));
    array_t* _agent_waypoints_199 = _array_192;
    /* var dx = x - dx_max */;
    /* dx = x - dx_max */;
    int64_t _binop_200 = (({ _x_157;}) - ({ _dx_max_179;}));
    int64_t _dx_201 = _binop_200;
    /* var dy = y - dy_max */;
    /* dy = y - dy_max */;
    int64_t _binop_202 = (({ _y_167;}) - ({ _dy_max_191;}));
    int64_t _dy_203 = _binop_202;
    /* var j = 0 */;
    /* j = 0 */;
    int64_t _literal_204 = 0;
    int64_t _j_205 = _literal_204;
    /* {for b in a.children_named("addway")
   {agent_waypoints[j] = waypoints[int_or_0(string_or_empty(b.attribute_value("id").substring(1, 
                                                                                              2)).to_int()) - 1];
    unless |agent_waypoints| > 1 then
      {print("THIS SHOULD NEVER HAPPEN |new_agent.waypoint|={}\n", 
             |agent_waypoints|);
       max = 1 / 0};
    j = j + 1};
 for unused in [ 0 , max by 1 ]
   {if dx > x + dx_max then
      {print("out of space\n");
       dx = x - dx_max}
    else
      if dy > y + dy_max then
        {dy = y - dy_max;
         dx = dx + 1}
      else
        dy = dy + 1;
    agents[i] = new Agent((dx, dy), 
                          copy_tr(agent_waypoints), 
                          copy_ar(waypoints_distance), 
                          i, 
                          10000);
    i = i + 1}} */;
    /* for b in a.children_named("addway")
  {agent_waypoints[j] = waypoints[int_or_0(string_or_empty(b.attribute_value("id").substring(1, 
                                                                                             2)).to_int()) - 1];
   unless |agent_waypoints| > 1 then
     {print("THIS SHOULD NEVER HAPPEN |new_agent.waypoint|={}\n", 
            |agent_waypoints|);
      max = 1 / 0};
   j = j + 1} */;
    void* _for_206;
    check_receiver(_a_127, ".", "a", "children_named", "\"./encore-libs-master/Ped_util/Global_funs.enc\" (line 227, column 45)");
    _enc__passive_String_String_t* _new_214 = _enc__constructor_String_String(_ctx, NULL);
    char* _embed_215 = ({"addway";});
    pony_type_t* _tmp_216[] = {};
    _enc__type_init_String_String(_new_214);
    _enc__method_String_String_init(_ctx, _new_214, NULL, _embed_215);
    pony_type_t* _tmp_217[] = {};
    array_t* _sync_method_call_213 = _enc__method__encore_libs_master_XML_XML_XML_node_children_named(_ctx, _a_127, NULL, _new_214);
    int64_t _start_209 = 0;
    int64_t _stop_210 = (array_size(_sync_method_call_213) - 1);
    int64_t _src_step_212 = 1;
    int64_t _literal_218 = 1;
    int64_t _step_211 = (_literal_218 * _src_step_212);
    range_assert_step(_step_211);
    int64_t _index_207;
    if ((_step_211 > 0))
    {
      _index_207 = _start_209;
    }
    else
    {
      _index_207 = _stop_210;
    };
    while (((_index_207 >= _start_209) && (_index_207 <= _stop_210)))
    {
      _enc__passive__encore_libs_master_XML_XML_XML_node_t* _b_208 = array_get(_sync_method_call_213, _index_207).p;
      /* agent_waypoints[j] = waypoints[int_or_0(string_or_empty(b.attribute_value("id").substring(1, 
                                                                                          2)).to_int()) - 1] */;
      int64_t _binop_235 = (({check_receiver(_b_208, ".", "b", "attribute_value", "\"./encore-libs-master/Ped_util/Global_funs.enc\" (line 228, column 94)");
                              _enc__passive_String_String_t* _new_222 = _enc__constructor_String_String(_ctx, NULL);
                              char* _embed_223 = ({"id";});
                              pony_type_t* _tmp_224[] = {};
                              _enc__type_init_String_String(_new_222);
                              _enc__method_String_String_init(_ctx, _new_222, NULL, _embed_223);
                              pony_type_t* _tmp_225[] = {};
                              _enc__passive_String_String_t* _sync_method_call_221 = _enc__method__encore_libs_master_XML_XML_XML_node_attribute_value(_ctx, _b_208, NULL, _new_222);
                              check_receiver(_sync_method_call_221, ".", "b.attribute_value(new String.String(embed char* \"id\"; end))", "substring", "\"./encore-libs-master/Ped_util/Global_funs.enc\" (line 228, column 94)");
                              int64_t _literal_226 = 1;
                              int64_t _literal_227 = 2;
                              pony_type_t* _tmp_228[] = {};
                              option_t* _sync_method_call_220 = _enc__method_String_String_substring(_ctx, _sync_method_call_221, NULL, _literal_226, _literal_227);
                              ENC_DTRACE2(FUNCTION_CALL, (uintptr_t)*_ctx, "Global_funs.string_or_empty");
                              pony_type_t* _tmp_229[] = {};
                              _enc__passive_String_String_t* _fun_call_230 = _enc__global_fun__encore_libs_master_Ped_util_Global_funsstring_or_empty(_ctx, NULL, _sync_method_call_220);
                              check_receiver(_fun_call_230, ".", "Global_funs.string_or_empty(b.attribute_value(new String.String(embed char* \"id\"; end)).substring(1, \n                                                                                                  2))", "to_int", "\"./encore-libs-master/Ped_util/Global_funs.enc\" (line 228, column 78)");
                              pony_type_t* _tmp_231[] = {};
                              option_t* _sync_method_call_219 = _enc__method_String_String_to_int(_ctx, _fun_call_230, NULL);
                              ENC_DTRACE2(FUNCTION_CALL, (uintptr_t)*_ctx, "Global_funs.int_or_0");
                              pony_type_t* _tmp_232[] = {};
                              int64_t _fun_call_233 = _enc__global_fun__encore_libs_master_Ped_util_Global_funsint_or_0(_ctx, NULL, _sync_method_call_219); _fun_call_233;}) - ({int64_t _literal_234 = 1; _literal_234;}));
      tuple_t* _access_236 = array_get(_waypoints_26, _binop_235).p;
      array_set(_agent_waypoints_199, _j_205, ((encore_arg_t) {.p = _access_236}));
      /* unless |agent_waypoints| > 1 then
  {print("THIS SHOULD NEVER HAPPEN |new_agent.waypoint|={}\n", 
         |agent_waypoints|);
   max = 1 / 0} */;
      void* _ite_237;
      if (({int64_t _binop_240 = (({int64_t _size_238 = array_size(_agent_waypoints_199); _size_238;}) > ({int64_t _literal_239 = 1; _literal_239;}));
            int64_t _unary_241 = (! _binop_240); _unary_241;}))
      {
        /* print("THIS SHOULD NEVER HAPPEN |new_agent.waypoint|={}\n", 
      |agent_waypoints|) */;
        int64_t _size_242 = array_size(_agent_waypoints_199);
        fprintf(stdout, "THIS SHOULD NEVER HAPPEN |new_agent.waypoint|=%lli\n", _size_242);
        /* max = 1 / 0 */;
        int64_t _binop_245 = (({int64_t _literal_243 = 1; _literal_243;}) / ({int64_t _literal_244 = 0; _literal_244;}));
        _max_147 = _binop_245;
        _ite_237 = ((void*) UNIT);
      }
      else
      {
        UNIT;
        _ite_237 = ((void*) UNIT);
      };
      /* j = j + 1 */;
      int64_t _binop_247 = (({ _j_205;}) + ({int64_t _literal_246 = 1; _literal_246;}));
      _j_205 = _binop_247;
      _for_206 = UNIT;
      _index_207 = (_index_207 + _step_211);
    };
    /* for unused in [ 0 , max by 1 ]
  {if dx > x + dx_max then
     {print("out of space\n");
      dx = x - dx_max}
   else
     if dy > y + dy_max then
       {dy = y - dy_max;
        dx = dx + 1}
     else
       dy = dy + 1;
   agents[i] = new Agent((dx, dy), 
                         copy_tr(agent_waypoints), 
                         copy_ar(waypoints_distance), 
                         i, 
                         10000);
   i = i + 1} */;
    void* _for_248;
    /* Range not generated */;
    int64_t _literal_255 = 0;
    int64_t _literal_256 = 1;
    int64_t _literal_257 = 1;
    int64_t _step_253 = (_literal_257 * _literal_256);
    range_assert_step(_step_253);
    int64_t _index_249;
    if ((_step_253 > 0))
    {
      _index_249 = _literal_255;
    }
    else
    {
      _index_249 = _max_147;
    };
    while (((_index_249 >= _literal_255) && (_index_249 <= _max_147)))
    {
      int64_t _unused_250 = _index_249;
      /* if dx > x + dx_max then
  {print("out of space\n");
   dx = x - dx_max}
else
  if dy > y + dy_max then
    {dy = y - dy_max;
     dx = dx + 1}
  else
    dy = dy + 1 */;
      void* _ite_258;
      if (({int64_t _binop_260 = (({ _dx_201;}) > ({int64_t _binop_259 = (({ _x_157;}) + ({ _dx_max_179;})); _binop_259;})); _binop_260;}))
      {
        /* print("out of space\n") */;
        char* _literal_261 = "out of space\n";
        fprintf(stdout, "%s", _literal_261);
        /* dx = x - dx_max */;
        int64_t _binop_262 = (({ _x_157;}) - ({ _dx_max_179;}));
        _dx_201 = _binop_262;
        _ite_258 = ((void*) UNIT);
      }
      else
      {
        void* _ite_263;
        if (({int64_t _binop_265 = (({ _dy_203;}) > ({int64_t _binop_264 = (({ _y_167;}) + ({ _dy_max_191;})); _binop_264;})); _binop_265;}))
        {
          /* dy = y - dy_max */;
          int64_t _binop_266 = (({ _y_167;}) - ({ _dy_max_191;}));
          _dy_203 = _binop_266;
          /* dx = dx + 1 */;
          int64_t _binop_268 = (({ _dx_201;}) + ({int64_t _literal_267 = 1; _literal_267;}));
          _dx_201 = _binop_268;
          _ite_263 = ((void*) UNIT);
        }
        else
        {
          /* dy = dy + 1 */;
          int64_t _binop_270 = (({ _dy_203;}) + ({int64_t _literal_269 = 1; _literal_269;}));
          _dy_203 = _binop_270;
          _ite_263 = ((void*) UNIT);
        };
        _ite_258 = ((void*) _ite_263);
      };
      /* agents[i] = new Agent((dx, dy), 
                      copy_tr(agent_waypoints), 
                      copy_ar(waypoints_distance), 
                      i, 
                      10000) */;
      _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t* _new_271 = _enc__constructor__encore_libs_master_Ped_util_Agent_passive_Agent(_ctx, NULL);
      tuple_t* _tuple_272 = tuple_mk(_ctx, 2);
      tuple_set_type(_tuple_272, 0, ENCORE_PRIMITIVE);
      tuple_set_type(_tuple_272, 1, ENCORE_PRIMITIVE);
      tuple_set(_tuple_272, 0, ((encore_arg_t) {.i = _dx_201}));
      tuple_set(_tuple_272, 1, ((encore_arg_t) {.i = _dy_203}));
      ENC_DTRACE2(FUNCTION_CALL, (uintptr_t)*_ctx, "Global_funs.copy_tr");
      pony_type_t* _tmp_273[] = {};
      array_t* _fun_call_274 = _enc__global_fun__encore_libs_master_Ped_util_Global_funscopy_tr(_ctx, NULL, _agent_waypoints_199);
      ENC_DTRACE2(FUNCTION_CALL, (uintptr_t)*_ctx, "Global_funs.copy_ar");
      pony_type_t* _tmp_275[] = {};
      array_t* _fun_call_276 = _enc__global_fun__encore_libs_master_Ped_util_Global_funscopy_ar(_ctx, NULL, _waypoints_distance_29);
      int64_t _literal_277 = 10000;
      pony_type_t* _tmp_278[] = {};
      _enc__type_init__encore_libs_master_Ped_util_Agent_passive_Agent(_new_271);
      _enc__method__encore_libs_master_Ped_util_Agent_passive_Agent_init(_ctx, _new_271, NULL, _tuple_272, _fun_call_274, _fun_call_276, _i_124, _literal_277);
      array_set(_agents_122, _i_124, ((encore_arg_t) {.p = _new_271}));
      /* i = i + 1 */;
      int64_t _binop_280 = (({ _i_124;}) + ({int64_t _literal_279 = 1; _literal_279;}));
      _i_124 = _binop_280;
      _for_248 = UNIT;
      _index_249 = (_index_249 + _step_253);
    };
    _for_125 = _for_248;
    _index_126 = (_index_126 + _step_130);
  };
  /* agents */;
  ENC_DTRACE2(FUNCTION_EXIT, (uintptr_t)*_ctx, "parse_file");
  return ((array_t*) _agents_122);
}


int64_t _enc__global_fun__encore_libs_master_Ped_util_Global_funsequal(pony_ctx_t** _ctx, pony_type_t** runtimeType, tuple_t* _enc__arg_a, tuple_t* _enc__arg_b)
{
  ENC_DTRACE2(FUNCTION_ENTRY, (uintptr_t)*_ctx, "equal");
  /* match (a, b) with
  ((a1, a2), (b1, b2)) when a1 == b1 and a2 == b2 => true
  _ => false
 */;
  tuple_t* _tuple_1 = tuple_mk(_ctx, 2);
  tuple_set_type(_tuple_1, 0, (&(tuple_type)));
  tuple_set_type(_tuple_1, 1, (&(tuple_type)));
  tuple_set(_tuple_1, 0, ((encore_arg_t) {.p = _enc__arg_a}));
  tuple_set(_tuple_1, 1, ((encore_arg_t) {.p = _enc__arg_b}));
  int64_t _match_0;
  int64_t _a1_2;
  int64_t _a2_3;
  int64_t _b1_4;
  int64_t _b2_5;
  if ((({int64_t _tupleCheck_11;
         _tupleCheck_11 = 1;
         tuple_t* _tupleAccess_12 = tuple_get(_tuple_1, 0).p;
         int64_t _tupleCheck_13;
         _tupleCheck_13 = 1;
         int64_t _tupleAccess_14 = tuple_get(_tupleAccess_12, 0).i;
         int64_t _varBinding_15;
         _a1_2 = _tupleAccess_14;
         _varBinding_15 = 1;
         _tupleCheck_13 = (_tupleCheck_13 && _varBinding_15);
         int64_t _tupleAccess_16 = tuple_get(_tupleAccess_12, 1).i;
         int64_t _varBinding_17;
         _a2_3 = _tupleAccess_16;
         _varBinding_17 = 1;
         _tupleCheck_13 = (_tupleCheck_13 && _varBinding_17);
         _tupleCheck_11 = (_tupleCheck_11 && _tupleCheck_13);
         tuple_t* _tupleAccess_18 = tuple_get(_tuple_1, 1).p;
         int64_t _tupleCheck_19;
         _tupleCheck_19 = 1;
         int64_t _tupleAccess_20 = tuple_get(_tupleAccess_18, 0).i;
         int64_t _varBinding_21;
         _b1_4 = _tupleAccess_20;
         _varBinding_21 = 1;
         _tupleCheck_19 = (_tupleCheck_19 && _varBinding_21);
         int64_t _tupleAccess_22 = tuple_get(_tupleAccess_18, 1).i;
         int64_t _varBinding_23;
         _b2_5 = _tupleAccess_22;
         _varBinding_23 = 1;
         _tupleCheck_19 = (_tupleCheck_19 && _varBinding_23);
         _tupleCheck_11 = (_tupleCheck_11 && _tupleCheck_19); _tupleCheck_11;}) && ({int64_t _binop_26 = (({int64_t _binop_24 = (({ _a1_2;}) == ({ _b1_4;})); _binop_24;}) && ({int64_t _binop_25 = (({ _a2_3;}) == ({ _b2_5;})); _binop_25;})); _binop_26;})))
  {
    _match_0 = ((int64_t) ({int64_t _literal_6 = 1/*True*/; _literal_6;}));
  }
  else
  {
    tuple_t* ___7;
    if ((({int64_t _varBinding_9;
           ___7 = _tuple_1;
           _varBinding_9 = 1; _varBinding_9;}) && ({int64_t _literal_10 = 1/*True*/; _literal_10;})))
    {
      _match_0 = ((int64_t) ({int64_t _literal_8 = 0/*False*/; _literal_8;}));
    }
    else
    {
      fprintf(stderr, "*** Runtime error: No matching clause was found ***\n");
      exit(1);
    };
  };
  ENC_DTRACE2(FUNCTION_EXIT, (uintptr_t)*_ctx, "equal");
  return ((int64_t) _match_0);
}


double _enc__global_fun__encore_libs_master_Ped_util_Global_funsdistance_int(pony_ctx_t** _ctx, pony_type_t** runtimeType, int64_t _enc__arg_x1, int64_t _enc__arg_y1, int64_t _enc__arg_x2, int64_t _enc__arg_y2)
{
  ENC_DTRACE2(FUNCTION_ENTRY, (uintptr_t)*_ctx, "distance_int");
  /* rot(x1 - x2 * x1 - x2 + y1 - y2 * y1 - y2) */;
  int64_t _binop_6 = (({int64_t _binop_2 = (({int64_t _binop_0 = (({ _enc__arg_x1;}) - ({ _enc__arg_x2;})); _binop_0;}) * ({int64_t _binop_1 = (({ _enc__arg_x1;}) - ({ _enc__arg_x2;})); _binop_1;})); _binop_2;}) + ({int64_t _binop_5 = (({int64_t _binop_3 = (({ _enc__arg_y1;}) - ({ _enc__arg_y2;})); _binop_3;}) * ({int64_t _binop_4 = (({ _enc__arg_y1;}) - ({ _enc__arg_y2;})); _binop_4;})); _binop_5;}));
  double _cast_7 = ((double) _binop_6);
  ENC_DTRACE2(FUNCTION_CALL, (uintptr_t)*_ctx, "Global_funs.rot");
  pony_type_t* _tmp_8[] = {};
  double _fun_call_9 = _enc__global_fun__encore_libs_master_Ped_util_Global_funsrot(_ctx, NULL, _cast_7);
  ENC_DTRACE2(FUNCTION_EXIT, (uintptr_t)*_ctx, "distance_int");
  return ((double) _fun_call_9);
}


double _enc__global_fun__encore_libs_master_Ped_util_Global_funsdistance(pony_ctx_t** _ctx, pony_type_t** runtimeType, tuple_t* _enc__arg_a, tuple_t* _enc__arg_b)
{
  ENC_DTRACE2(FUNCTION_ENTRY, (uintptr_t)*_ctx, "distance");
  /* match (a, b) with
  ((x1, y1), (x2, y2)) => rot(x1 - x2 * x1 - x2 + y1 - y2 * y1 - y2)
  _ => {print("THIS WILL NEVER HAPPEN!");
        1 / 0}
 */;
  tuple_t* _tuple_1 = tuple_mk(_ctx, 2);
  tuple_set_type(_tuple_1, 0, (&(tuple_type)));
  tuple_set_type(_tuple_1, 1, (&(tuple_type)));
  tuple_set(_tuple_1, 0, ((encore_arg_t) {.p = _enc__arg_a}));
  tuple_set(_tuple_1, 1, ((encore_arg_t) {.p = _enc__arg_b}));
  double _match_0;
  int64_t _x1_2;
  int64_t _y1_3;
  int64_t _x2_4;
  int64_t _y2_5;
  if ((({int64_t _tupleCheck_23;
         _tupleCheck_23 = 1;
         tuple_t* _tupleAccess_24 = tuple_get(_tuple_1, 0).p;
         int64_t _tupleCheck_25;
         _tupleCheck_25 = 1;
         int64_t _tupleAccess_26 = tuple_get(_tupleAccess_24, 0).i;
         int64_t _varBinding_27;
         _x1_2 = _tupleAccess_26;
         _varBinding_27 = 1;
         _tupleCheck_25 = (_tupleCheck_25 && _varBinding_27);
         int64_t _tupleAccess_28 = tuple_get(_tupleAccess_24, 1).i;
         int64_t _varBinding_29;
         _y1_3 = _tupleAccess_28;
         _varBinding_29 = 1;
         _tupleCheck_25 = (_tupleCheck_25 && _varBinding_29);
         _tupleCheck_23 = (_tupleCheck_23 && _tupleCheck_25);
         tuple_t* _tupleAccess_30 = tuple_get(_tuple_1, 1).p;
         int64_t _tupleCheck_31;
         _tupleCheck_31 = 1;
         int64_t _tupleAccess_32 = tuple_get(_tupleAccess_30, 0).i;
         int64_t _varBinding_33;
         _x2_4 = _tupleAccess_32;
         _varBinding_33 = 1;
         _tupleCheck_31 = (_tupleCheck_31 && _varBinding_33);
         int64_t _tupleAccess_34 = tuple_get(_tupleAccess_30, 1).i;
         int64_t _varBinding_35;
         _y2_5 = _tupleAccess_34;
         _varBinding_35 = 1;
         _tupleCheck_31 = (_tupleCheck_31 && _varBinding_35);
         _tupleCheck_23 = (_tupleCheck_23 && _tupleCheck_31); _tupleCheck_23;}) && ({int64_t _literal_36 = 1/*True*/; _literal_36;})))
  {
    _match_0 = ((double) ({int64_t _binop_12 = (({int64_t _binop_8 = (({int64_t _binop_6 = (({ _x1_2;}) - ({ _x2_4;})); _binop_6;}) * ({int64_t _binop_7 = (({ _x1_2;}) - ({ _x2_4;})); _binop_7;})); _binop_8;}) + ({int64_t _binop_11 = (({int64_t _binop_9 = (({ _y1_3;}) - ({ _y2_5;})); _binop_9;}) * ({int64_t _binop_10 = (({ _y1_3;}) - ({ _y2_5;})); _binop_10;})); _binop_11;}));
                           double _cast_13 = ((double) _binop_12);
                           ENC_DTRACE2(FUNCTION_CALL, (uintptr_t)*_ctx, "Global_funs.rot");
                           pony_type_t* _tmp_14[] = {};
                           double _fun_call_15 = _enc__global_fun__encore_libs_master_Ped_util_Global_funsrot(_ctx, NULL, _cast_13); _fun_call_15;}));
  }
  else
  {
    tuple_t* ___16;
    if ((({int64_t _varBinding_21;
           ___16 = _tuple_1;
           _varBinding_21 = 1; _varBinding_21;}) && ({int64_t _literal_22 = 1/*True*/; _literal_22;})))
    {
      _match_0 = ((double) ({/* print("THIS WILL NEVER HAPPEN!") */;
                             char* _literal_17 = "THIS WILL NEVER HAPPEN!";
                             fprintf(stdout, "%s", _literal_17);
                             /* 1 / 0 */;
                             double _binop_20 = (({int64_t _literal_18 = 1; _literal_18;}) / ({int64_t _literal_19 = 0; _literal_19;})); _binop_20;}));
    }
    else
    {
      fprintf(stderr, "*** Runtime error: No matching clause was found ***\n");
      exit(1);
    };
  };
  ENC_DTRACE2(FUNCTION_EXIT, (uintptr_t)*_ctx, "distance");
  return ((double) _match_0);
}


int64_t _enc__global_fun__encore_libs_master_Ped_util_Global_funsfloor(pony_ctx_t** _ctx, pony_type_t** runtimeType, double _enc__arg_x)
{
  ENC_DTRACE2(FUNCTION_ENTRY, (uintptr_t)*_ctx, "floor");
  /* val i = 0 */;
  /* i = 0 */;
  int64_t _literal_0 = 0;
  int64_t _i_1 = _literal_0;
  /* embed void { #{i}=floor(#{x}); } end */;
  ({{ _i_1=floor(_enc__arg_x); }});
  /* i */;
  ENC_DTRACE2(FUNCTION_EXIT, (uintptr_t)*_ctx, "floor");
  return ((int64_t) _i_1);
}


int64_t _enc__global_fun__encore_libs_master_Ped_util_Global_funsceil(pony_ctx_t** _ctx, pony_type_t** runtimeType, double _enc__arg_x)
{
  ENC_DTRACE2(FUNCTION_ENTRY, (uintptr_t)*_ctx, "ceil");
  /* val i = 0 */;
  /* i = 0 */;
  int64_t _literal_0 = 0;
  int64_t _i_1 = _literal_0;
  /* embed void { #{i}=ceil(#{x}); } end */;
  ({{ _i_1=ceil(_enc__arg_x); }});
  /* i */;
  ENC_DTRACE2(FUNCTION_EXIT, (uintptr_t)*_ctx, "ceil");
  return ((int64_t) _i_1);
}


int64_t _enc__global_fun__encore_libs_master_Ped_util_Global_funsround(pony_ctx_t** _ctx, pony_type_t** runtimeType, double _enc__arg_x)
{
  ENC_DTRACE2(FUNCTION_ENTRY, (uintptr_t)*_ctx, "round");
  /* val i = 0 */;
  /* i = 0 */;
  int64_t _literal_0 = 0;
  int64_t _i_1 = _literal_0;
  /* embed void { #{i}=round(#{x}); } end */;
  ({{ _i_1=round(_enc__arg_x); }});
  /* i */;
  ENC_DTRACE2(FUNCTION_EXIT, (uintptr_t)*_ctx, "round");
  return ((int64_t) _i_1);
}


int64_t _enc__global_fun__encore_libs_master_Ped_util_Global_funsman_distance_int(pony_ctx_t** _ctx, pony_type_t** runtimeType, int64_t _enc__arg_x1, int64_t _enc__arg_y1, int64_t _enc__arg_x2, int64_t _enc__arg_y2)
{
  ENC_DTRACE2(FUNCTION_ENTRY, (uintptr_t)*_ctx, "man_distance_int");
  /* abs(x1 - x2) + abs(y1 - y2) */;
  int64_t _binop_6 = (({int64_t _binop_0 = (({ _enc__arg_x1;}) - ({ _enc__arg_x2;}));
                        ENC_DTRACE2(FUNCTION_CALL, (uintptr_t)*_ctx, "Global_funs.abs");
                        pony_type_t* _tmp_1[] = {};
                        int64_t _fun_call_2 = _enc__global_fun__encore_libs_master_Ped_util_Global_funsabs(_ctx, NULL, _binop_0); _fun_call_2;}) + ({int64_t _binop_3 = (({ _enc__arg_y1;}) - ({ _enc__arg_y2;}));
                                                                                                                                                     ENC_DTRACE2(FUNCTION_CALL, (uintptr_t)*_ctx, "Global_funs.abs");
                                                                                                                                                     pony_type_t* _tmp_4[] = {};
                                                                                                                                                     int64_t _fun_call_5 = _enc__global_fun__encore_libs_master_Ped_util_Global_funsabs(_ctx, NULL, _binop_3); _fun_call_5;}));
  ENC_DTRACE2(FUNCTION_EXIT, (uintptr_t)*_ctx, "man_distance_int");
  return ((int64_t) _binop_6);
}


int64_t _enc__global_fun__encore_libs_master_Ped_util_Global_funsman_distance(pony_ctx_t** _ctx, pony_type_t** runtimeType, tuple_t* _enc__arg_a, tuple_t* _enc__arg_b)
{
  ENC_DTRACE2(FUNCTION_ENTRY, (uintptr_t)*_ctx, "man_distance");
  /* match (a, b) with
  ((x1, y1), (x2, y2)) => abs(x1 - x2) + abs(y1 - y2)
  _ => {print("THIS WILL NEVER HAPPEN!");
        1 / 0}
 */;
  tuple_t* _tuple_1 = tuple_mk(_ctx, 2);
  tuple_set_type(_tuple_1, 0, (&(tuple_type)));
  tuple_set_type(_tuple_1, 1, (&(tuple_type)));
  tuple_set(_tuple_1, 0, ((encore_arg_t) {.p = _enc__arg_a}));
  tuple_set(_tuple_1, 1, ((encore_arg_t) {.p = _enc__arg_b}));
  int64_t _match_0;
  int64_t _x1_2;
  int64_t _y1_3;
  int64_t _x2_4;
  int64_t _y2_5;
  if ((({int64_t _tupleCheck_20;
         _tupleCheck_20 = 1;
         tuple_t* _tupleAccess_21 = tuple_get(_tuple_1, 0).p;
         int64_t _tupleCheck_22;
         _tupleCheck_22 = 1;
         int64_t _tupleAccess_23 = tuple_get(_tupleAccess_21, 0).i;
         int64_t _varBinding_24;
         _x1_2 = _tupleAccess_23;
         _varBinding_24 = 1;
         _tupleCheck_22 = (_tupleCheck_22 && _varBinding_24);
         int64_t _tupleAccess_25 = tuple_get(_tupleAccess_21, 1).i;
         int64_t _varBinding_26;
         _y1_3 = _tupleAccess_25;
         _varBinding_26 = 1;
         _tupleCheck_22 = (_tupleCheck_22 && _varBinding_26);
         _tupleCheck_20 = (_tupleCheck_20 && _tupleCheck_22);
         tuple_t* _tupleAccess_27 = tuple_get(_tuple_1, 1).p;
         int64_t _tupleCheck_28;
         _tupleCheck_28 = 1;
         int64_t _tupleAccess_29 = tuple_get(_tupleAccess_27, 0).i;
         int64_t _varBinding_30;
         _x2_4 = _tupleAccess_29;
         _varBinding_30 = 1;
         _tupleCheck_28 = (_tupleCheck_28 && _varBinding_30);
         int64_t _tupleAccess_31 = tuple_get(_tupleAccess_27, 1).i;
         int64_t _varBinding_32;
         _y2_5 = _tupleAccess_31;
         _varBinding_32 = 1;
         _tupleCheck_28 = (_tupleCheck_28 && _varBinding_32);
         _tupleCheck_20 = (_tupleCheck_20 && _tupleCheck_28); _tupleCheck_20;}) && ({int64_t _literal_33 = 1/*True*/; _literal_33;})))
  {
    _match_0 = ((int64_t) ({int64_t _binop_12 = (({int64_t _binop_6 = (({ _x1_2;}) - ({ _x2_4;}));
                                                   ENC_DTRACE2(FUNCTION_CALL, (uintptr_t)*_ctx, "Global_funs.abs");
                                                   pony_type_t* _tmp_7[] = {};
                                                   int64_t _fun_call_8 = _enc__global_fun__encore_libs_master_Ped_util_Global_funsabs(_ctx, NULL, _binop_6); _fun_call_8;}) + ({int64_t _binop_9 = (({ _y1_3;}) - ({ _y2_5;}));
                                                                                                                                                                                ENC_DTRACE2(FUNCTION_CALL, (uintptr_t)*_ctx, "Global_funs.abs");
                                                                                                                                                                                pony_type_t* _tmp_10[] = {};
                                                                                                                                                                                int64_t _fun_call_11 = _enc__global_fun__encore_libs_master_Ped_util_Global_funsabs(_ctx, NULL, _binop_9); _fun_call_11;})); _binop_12;}));
  }
  else
  {
    tuple_t* ___13;
    if ((({int64_t _varBinding_18;
           ___13 = _tuple_1;
           _varBinding_18 = 1; _varBinding_18;}) && ({int64_t _literal_19 = 1/*True*/; _literal_19;})))
    {
      _match_0 = ((int64_t) ({/* print("THIS WILL NEVER HAPPEN!") */;
                              char* _literal_14 = "THIS WILL NEVER HAPPEN!";
                              fprintf(stdout, "%s", _literal_14);
                              /* 1 / 0 */;
                              int64_t _binop_17 = (({int64_t _literal_15 = 1; _literal_15;}) / ({int64_t _literal_16 = 0; _literal_16;})); _binop_17;}));
    }
    else
    {
      fprintf(stderr, "*** Runtime error: No matching clause was found ***\n");
      exit(1);
    };
  };
  ENC_DTRACE2(FUNCTION_EXIT, (uintptr_t)*_ctx, "man_distance");
  return ((int64_t) _match_0);
}


int64_t _enc__global_fun__encore_libs_master_Ped_util_Global_funsabs(pony_ctx_t** _ctx, pony_type_t** runtimeType, int64_t _enc__arg_a)
{
  ENC_DTRACE2(FUNCTION_ENTRY, (uintptr_t)*_ctx, "abs");
  /* if a > 0 then
  a
else
  a * - 1 */;
  int64_t _ite_0;
  if (({int64_t _binop_2 = (({ _enc__arg_a;}) > ({int64_t _literal_1 = 0; _literal_1;})); _binop_2;}))
  {
    _ite_0 = ((int64_t) _enc__arg_a);
  }
  else
  {
    int64_t _binop_5 = (({ _enc__arg_a;}) * ({int64_t _literal_3 = 1;
                                              int64_t _unary_4 = (- _literal_3); _unary_4;}));
    _ite_0 = ((int64_t) _binop_5);
  };
  ENC_DTRACE2(FUNCTION_EXIT, (uintptr_t)*_ctx, "abs");
  return ((int64_t) _ite_0);
}


double _enc__global_fun__encore_libs_master_Ped_util_Global_funsrot(pony_ctx_t** _ctx, pony_type_t** runtimeType, double _enc__arg_nr)
{
  ENC_DTRACE2(FUNCTION_ENTRY, (uintptr_t)*_ctx, "rot");
  /* embed void { #{nr}=sqrt(#{nr}); } end */;
  ({{ _enc__arg_nr=sqrt(_enc__arg_nr); }});
  /* nr */;
  ENC_DTRACE2(FUNCTION_EXIT, (uintptr_t)*_ctx, "rot");
  return ((double) _enc__arg_nr);
}


void* _enc__global_fun__encore_libs_master_Ped_util_Global_funssleep(pony_ctx_t** _ctx, pony_type_t** runtimeType, double _enc__arg_x)
{
  ENC_DTRACE2(FUNCTION_ENTRY, (uintptr_t)*_ctx, "sleep");
  /* embed void { sleep( #{x}); } end */;
  ({{ sleep( _enc__arg_x); }});
  ENC_DTRACE2(FUNCTION_EXIT, (uintptr_t)*_ctx, "sleep");
  return UNIT;
}


int64_t _enc__global_fun__encore_libs_master_Ped_util_Global_funsrand(pony_ctx_t** _ctx, pony_type_t** runtimeType)
{
  ENC_DTRACE2(FUNCTION_ENTRY, (uintptr_t)*_ctx, "rand");
  /* var x = 0 */;
  /* x = 0 */;
  int64_t _literal_0 = 0;
  int64_t _x_1 = _literal_0;
  /* embed void { #{x}=rand(); } end */;
  ({{ _x_1=rand(); }});
  /* x */;
  ENC_DTRACE2(FUNCTION_EXIT, (uintptr_t)*_ctx, "rand");
  return ((int64_t) _x_1);
}


_enc__passive_String_String_t* _enc__global_fun__encore_libs_master_Ped_util_Global_funsstring_or_empty(pony_ctx_t** _ctx, pony_type_t** runtimeType, option_t* _enc__arg_i)
{
  ENC_DTRACE2(FUNCTION_ENTRY, (uintptr_t)*_ctx, "string_or_empty");
  /* match i with
  Just nr => nr
  _ => {print("orEmpty\n");
        ""}
 */;
  _enc__passive_String_String_t* _match_0;
  _enc__passive_String_String_t* _nr_1;
  if ((({int64_t _optionCheck_10;
         _optionCheck_10 = ((JUST == (*_enc__arg_i).tag) && ({int64_t _varBinding_11;
                                                              _enc__passive_String_String_t* _optionVal_9 = (*_enc__arg_i).val.p;
                                                              _nr_1 = _optionVal_9;
                                                              _varBinding_11 = 1; _varBinding_11;})); _optionCheck_10;}) && ({int64_t _literal_12 = 1/*True*/; _literal_12;})))
  {
    _match_0 = ((_enc__passive_String_String_t*) ({/* nr */; _nr_1;}));
  }
  else
  {
    option_t* ___2;
    if ((({int64_t _varBinding_7;
           ___2 = _enc__arg_i;
           _varBinding_7 = 1; _varBinding_7;}) && ({int64_t _literal_8 = 1/*True*/; _literal_8;})))
    {
      _match_0 = ((_enc__passive_String_String_t*) ({/* print("orEmpty\n") */;
                                                     char* _literal_3 = "orEmpty\n";
                                                     fprintf(stdout, "%s", _literal_3);
                                                     /* "" */;
                                                     _enc__passive_String_String_t* _new_4 = _enc__constructor_String_String(_ctx, NULL);
                                                     char* _embed_5 = ({"";});
                                                     pony_type_t* _tmp_6[] = {};
                                                     _enc__type_init_String_String(_new_4);
                                                     _enc__method_String_String_init(_ctx, _new_4, NULL, _embed_5); _new_4;}));
    }
    else
    {
      fprintf(stderr, "*** Runtime error: No matching clause was found ***\n");
      exit(1);
    };
  };
  ENC_DTRACE2(FUNCTION_EXIT, (uintptr_t)*_ctx, "string_or_empty");
  return ((_enc__passive_String_String_t*) _match_0);
}


int64_t _enc__global_fun__encore_libs_master_Ped_util_Global_funsint_or_0(pony_ctx_t** _ctx, pony_type_t** runtimeType, option_t* _enc__arg_i)
{
  ENC_DTRACE2(FUNCTION_ENTRY, (uintptr_t)*_ctx, "int_or_0");
  /* match i with
  Just nr => nr
  _ => {print("or0\n");
        0}
 */;
  int64_t _match_0;
  int64_t _nr_1;
  if ((({int64_t _optionCheck_8;
         _optionCheck_8 = ((JUST == (*_enc__arg_i).tag) && ({int64_t _varBinding_9;
                                                             int64_t _optionVal_7 = (*_enc__arg_i).val.i;
                                                             _nr_1 = _optionVal_7;
                                                             _varBinding_9 = 1; _varBinding_9;})); _optionCheck_8;}) && ({int64_t _literal_10 = 1/*True*/; _literal_10;})))
  {
    _match_0 = ((int64_t) ({ _nr_1;}));
  }
  else
  {
    option_t* ___2;
    if ((({int64_t _varBinding_5;
           ___2 = _enc__arg_i;
           _varBinding_5 = 1; _varBinding_5;}) && ({int64_t _literal_6 = 1/*True*/; _literal_6;})))
    {
      _match_0 = ((int64_t) ({/* print("or0\n") */;
                              char* _literal_3 = "or0\n";
                              fprintf(stdout, "%s", _literal_3);
                              /* 0 */;
                              int64_t _literal_4 = 0; _literal_4;}));
    }
    else
    {
      fprintf(stderr, "*** Runtime error: No matching clause was found ***\n");
      exit(1);
    };
  };
  ENC_DTRACE2(FUNCTION_EXIT, (uintptr_t)*_ctx, "int_or_0");
  return ((int64_t) _match_0);
}


int64_t _enc__global_fun__encore_libs_master_Ped_util_Global_funsmin(pony_ctx_t** _ctx, pony_type_t** runtimeType, int64_t _enc__arg_a, int64_t _enc__arg_b)
{
  ENC_DTRACE2(FUNCTION_ENTRY, (uintptr_t)*_ctx, "min");
  /* if a < b then
  a
else
  b */;
  int64_t _ite_0;
  if (({int64_t _binop_1 = (({ _enc__arg_a;}) < ({ _enc__arg_b;})); _binop_1;}))
  {
    _ite_0 = ((int64_t) _enc__arg_a);
  }
  else
  {
    _ite_0 = ((int64_t) _enc__arg_b);
  };
  ENC_DTRACE2(FUNCTION_EXIT, (uintptr_t)*_ctx, "min");
  return ((int64_t) _ite_0);
}


int64_t _enc__global_fun__encore_libs_master_Ped_util_Global_funsmax(pony_ctx_t** _ctx, pony_type_t** runtimeType, int64_t _enc__arg_a, int64_t _enc__arg_b)
{
  ENC_DTRACE2(FUNCTION_ENTRY, (uintptr_t)*_ctx, "max");
  /* if a > b then
  a
else
  b */;
  int64_t _ite_0;
  if (({int64_t _binop_1 = (({ _enc__arg_a;}) > ({ _enc__arg_b;})); _binop_1;}))
  {
    _ite_0 = ((int64_t) _enc__arg_a);
  }
  else
  {
    _ite_0 = ((int64_t) _enc__arg_b);
  };
  ENC_DTRACE2(FUNCTION_EXIT, (uintptr_t)*_ctx, "max");
  return ((int64_t) _ite_0);
}


array_t* _enc__global_fun__encore_libs_master_Ped_util_Global_funsflatten(pony_ctx_t** _ctx, pony_type_t** runtimeType, array_t* _enc__arg_listlist)
{
  ENC_DTRACE2(FUNCTION_ENTRY, (uintptr_t)*_ctx, "flatten");
  /* var len = 0 */;
  /* len = 0 */;
  int64_t _literal_0 = 0;
  int64_t _len_1 = _literal_0;
  /* for a in listlist
  len = len + |a| */;
  void* _for_2;
  int64_t _start_5 = 0;
  int64_t _stop_6 = (array_size(_enc__arg_listlist) - 1);
  int64_t _src_step_8 = 1;
  int64_t _literal_9 = 1;
  int64_t _step_7 = (_literal_9 * _src_step_8);
  range_assert_step(_step_7);
  int64_t _index_3;
  if ((_step_7 > 0))
  {
    _index_3 = _start_5;
  }
  else
  {
    _index_3 = _stop_6;
  };
  while (((_index_3 >= _start_5) && (_index_3 <= _stop_6)))
  {
    array_t* _a_4 = array_get(_enc__arg_listlist, _index_3).p;
    /* len = len + |a| */;
    int64_t _binop_11 = (({ _len_1;}) + ({int64_t _size_10 = array_size(_a_4); _size_10;}));
    _len_1 = _binop_11;
    _for_2 = UNIT;
    _index_3 = (_index_3 + _step_7);
  };
  /* var list = new [(int, int)](len) */;
  /* list = new [(int, int)](len) */;
  array_t* _array_12 = array_mk(_ctx, _len_1, (&(tuple_type)));
  array_t* _list_13 = _array_12;
  /* var i = 0 */;
  /* i = 0 */;
  int64_t _literal_14 = 0;
  int64_t _i_15 = _literal_14;
  /* for a in listlist
  for b in a
    {list[i] = b;
     i = i + 1} */;
  void* _for_16;
  int64_t _start_19 = 0;
  int64_t _stop_20 = (array_size(_enc__arg_listlist) - 1);
  int64_t _src_step_22 = 1;
  int64_t _literal_23 = 1;
  int64_t _step_21 = (_literal_23 * _src_step_22);
  range_assert_step(_step_21);
  int64_t _index_17;
  if ((_step_21 > 0))
  {
    _index_17 = _start_19;
  }
  else
  {
    _index_17 = _stop_20;
  };
  while (((_index_17 >= _start_19) && (_index_17 <= _stop_20)))
  {
    array_t* _a_18 = array_get(_enc__arg_listlist, _index_17).p;
    /* for b in a
  {list[i] = b;
   i = i + 1} */;
    void* _for_24;
    int64_t _start_27 = 0;
    int64_t _stop_28 = (array_size(_a_18) - 1);
    int64_t _src_step_30 = 1;
    int64_t _literal_31 = 1;
    int64_t _step_29 = (_literal_31 * _src_step_30);
    range_assert_step(_step_29);
    int64_t _index_25;
    if ((_step_29 > 0))
    {
      _index_25 = _start_27;
    }
    else
    {
      _index_25 = _stop_28;
    };
    while (((_index_25 >= _start_27) && (_index_25 <= _stop_28)))
    {
      tuple_t* _b_26 = array_get(_a_18, _index_25).p;
      /* list[i] = b */;
      array_set(_list_13, _i_15, ((encore_arg_t) {.p = _b_26}));
      /* i = i + 1 */;
      int64_t _binop_33 = (({ _i_15;}) + ({int64_t _literal_32 = 1; _literal_32;}));
      _i_15 = _binop_33;
      _for_24 = UNIT;
      _index_25 = (_index_25 + _step_29);
    };
    _for_16 = _for_24;
    _index_17 = (_index_17 + _step_21);
  };
  /* unless i == len then
  print("BAD MERGE\n") */;
  void* _ite_34;
  if (({int64_t _binop_35 = (({ _i_15;}) == ({ _len_1;}));
        int64_t _unary_36 = (! _binop_35); _unary_36;}))
  {
    char* _literal_37 = "BAD MERGE\n";
    fprintf(stdout, "%s", _literal_37);
    _ite_34 = ((void*) UNIT);
  }
  else
  {
    UNIT;
    _ite_34 = ((void*) UNIT);
  };
  /* list */;
  ENC_DTRACE2(FUNCTION_EXIT, (uintptr_t)*_ctx, "flatten");
  return ((array_t*) _list_13);
}


array_t* _enc__global_fun__encore_libs_master_Ped_util_Global_funscopy_tr(pony_ctx_t** _ctx, pony_type_t** runtimeType, array_t* _enc__arg_arr)
{
  ENC_DTRACE2(FUNCTION_ENTRY, (uintptr_t)*_ctx, "copy_tr");
  /* var a2 = new [(int, int)](|arr|) */;
  /* a2 = new [(int, int)](|arr|) */;
  int64_t _size_1 = array_size(_enc__arg_arr);
  array_t* _array_0 = array_mk(_ctx, _size_1, (&(tuple_type)));
  array_t* _a2_2 = _array_0;
  /* var i = 0 */;
  /* i = 0 */;
  int64_t _literal_3 = 0;
  int64_t _i_4 = _literal_3;
  /* for a in arr
  {a2[i] = a;
   i = i + 1} */;
  void* _for_5;
  int64_t _start_8 = 0;
  int64_t _stop_9 = (array_size(_enc__arg_arr) - 1);
  int64_t _src_step_11 = 1;
  int64_t _literal_12 = 1;
  int64_t _step_10 = (_literal_12 * _src_step_11);
  range_assert_step(_step_10);
  int64_t _index_6;
  if ((_step_10 > 0))
  {
    _index_6 = _start_8;
  }
  else
  {
    _index_6 = _stop_9;
  };
  while (((_index_6 >= _start_8) && (_index_6 <= _stop_9)))
  {
    tuple_t* _a_7 = array_get(_enc__arg_arr, _index_6).p;
    /* a2[i] = a */;
    array_set(_a2_2, _i_4, ((encore_arg_t) {.p = _a_7}));
    /* i = i + 1 */;
    int64_t _binop_14 = (({ _i_4;}) + ({int64_t _literal_13 = 1; _literal_13;}));
    _i_4 = _binop_14;
    _for_5 = UNIT;
    _index_6 = (_index_6 + _step_10);
  };
  /* a2 */;
  ENC_DTRACE2(FUNCTION_EXIT, (uintptr_t)*_ctx, "copy_tr");
  return ((array_t*) _a2_2);
}


array_t* _enc__global_fun__encore_libs_master_Ped_util_Global_funscopy_ar(pony_ctx_t** _ctx, pony_type_t** runtimeType, array_t* _enc__arg_arr)
{
  ENC_DTRACE2(FUNCTION_ENTRY, (uintptr_t)*_ctx, "copy_ar");
  /* var a2 = new [int](|arr|) */;
  /* a2 = new [int](|arr|) */;
  int64_t _size_1 = array_size(_enc__arg_arr);
  array_t* _array_0 = array_mk(_ctx, _size_1, ENCORE_PRIMITIVE);
  array_t* _a2_2 = _array_0;
  /* var i = 0 */;
  /* i = 0 */;
  int64_t _literal_3 = 0;
  int64_t _i_4 = _literal_3;
  /* for a in arr
  {a2[i] = a;
   i = i + 1} */;
  void* _for_5;
  int64_t _start_8 = 0;
  int64_t _stop_9 = (array_size(_enc__arg_arr) - 1);
  int64_t _src_step_11 = 1;
  int64_t _literal_12 = 1;
  int64_t _step_10 = (_literal_12 * _src_step_11);
  range_assert_step(_step_10);
  int64_t _index_6;
  if ((_step_10 > 0))
  {
    _index_6 = _start_8;
  }
  else
  {
    _index_6 = _stop_9;
  };
  while (((_index_6 >= _start_8) && (_index_6 <= _stop_9)))
  {
    int64_t _a_7 = array_get(_enc__arg_arr, _index_6).i;
    /* a2[i] = a */;
    array_set(_a2_2, _i_4, ((encore_arg_t) {.i = _a_7}));
    /* i = i + 1 */;
    int64_t _binop_14 = (({ _i_4;}) + ({int64_t _literal_13 = 1; _literal_13;}));
    _i_4 = _binop_14;
    _for_5 = UNIT;
    _index_6 = (_index_6 + _step_10);
  };
  /* a2 */;
  ENC_DTRACE2(FUNCTION_EXIT, (uintptr_t)*_ctx, "copy_ar");
  return ((array_t*) _a2_2);
}


int64_t _enc__global_fun__encore_libs_master_Ped_util_Global_funsinside(pony_ctx_t** _ctx, pony_type_t** runtimeType, tuple_t* _enc__arg_pos, tuple_t* _enc__arg_space)
{
  ENC_DTRACE2(FUNCTION_ENTRY, (uintptr_t)*_ctx, "inside");
  /* match (pos, space) with
  ((x, y), 
   (xmax, 
    ymax, 
    xmin, 
    ymin)) when x > xmax or x < xmin or y > ymax or y < ymin => false
  _ => true
 */;
  tuple_t* _tuple_1 = tuple_mk(_ctx, 2);
  tuple_set_type(_tuple_1, 0, (&(tuple_type)));
  tuple_set_type(_tuple_1, 1, (&(tuple_type)));
  tuple_set(_tuple_1, 0, ((encore_arg_t) {.p = _enc__arg_pos}));
  tuple_set(_tuple_1, 1, ((encore_arg_t) {.p = _enc__arg_space}));
  int64_t _match_0;
  int64_t _x_2;
  int64_t _y_3;
  int64_t _xmax_4;
  int64_t _ymax_5;
  int64_t _xmin_6;
  int64_t _ymin_7;
  if ((({int64_t _tupleCheck_13;
         _tupleCheck_13 = 1;
         tuple_t* _tupleAccess_14 = tuple_get(_tuple_1, 0).p;
         int64_t _tupleCheck_15;
         _tupleCheck_15 = 1;
         int64_t _tupleAccess_16 = tuple_get(_tupleAccess_14, 0).i;
         int64_t _varBinding_17;
         _x_2 = _tupleAccess_16;
         _varBinding_17 = 1;
         _tupleCheck_15 = (_tupleCheck_15 && _varBinding_17);
         int64_t _tupleAccess_18 = tuple_get(_tupleAccess_14, 1).i;
         int64_t _varBinding_19;
         _y_3 = _tupleAccess_18;
         _varBinding_19 = 1;
         _tupleCheck_15 = (_tupleCheck_15 && _varBinding_19);
         _tupleCheck_13 = (_tupleCheck_13 && _tupleCheck_15);
         tuple_t* _tupleAccess_20 = tuple_get(_tuple_1, 1).p;
         int64_t _tupleCheck_21;
         _tupleCheck_21 = 1;
         int64_t _tupleAccess_22 = tuple_get(_tupleAccess_20, 0).i;
         int64_t _varBinding_23;
         _xmax_4 = _tupleAccess_22;
         _varBinding_23 = 1;
         _tupleCheck_21 = (_tupleCheck_21 && _varBinding_23);
         int64_t _tupleAccess_24 = tuple_get(_tupleAccess_20, 1).i;
         int64_t _varBinding_25;
         _ymax_5 = _tupleAccess_24;
         _varBinding_25 = 1;
         _tupleCheck_21 = (_tupleCheck_21 && _varBinding_25);
         int64_t _tupleAccess_26 = tuple_get(_tupleAccess_20, 2).i;
         int64_t _varBinding_27;
         _xmin_6 = _tupleAccess_26;
         _varBinding_27 = 1;
         _tupleCheck_21 = (_tupleCheck_21 && _varBinding_27);
         int64_t _tupleAccess_28 = tuple_get(_tupleAccess_20, 3).i;
         int64_t _varBinding_29;
         _ymin_7 = _tupleAccess_28;
         _varBinding_29 = 1;
         _tupleCheck_21 = (_tupleCheck_21 && _varBinding_29);
         _tupleCheck_13 = (_tupleCheck_13 && _tupleCheck_21); _tupleCheck_13;}) && ({int64_t _binop_36 = (({int64_t _binop_34 = (({int64_t _binop_32 = (({int64_t _binop_30 = (({ _x_2;}) > ({ _xmax_4;})); _binop_30;}) || ({int64_t _binop_31 = (({ _x_2;}) < ({ _xmin_6;})); _binop_31;})); _binop_32;}) || ({int64_t _binop_33 = (({ _y_3;}) > ({ _ymax_5;})); _binop_33;})); _binop_34;}) || ({int64_t _binop_35 = (({ _y_3;}) < ({ _ymin_7;})); _binop_35;})); _binop_36;})))
  {
    _match_0 = ((int64_t) ({int64_t _literal_8 = 0/*False*/; _literal_8;}));
  }
  else
  {
    tuple_t* ___9;
    if ((({int64_t _varBinding_11;
           ___9 = _tuple_1;
           _varBinding_11 = 1; _varBinding_11;}) && ({int64_t _literal_12 = 1/*True*/; _literal_12;})))
    {
      _match_0 = ((int64_t) ({int64_t _literal_10 = 1/*True*/; _literal_10;}));
    }
    else
    {
      fprintf(stderr, "*** Runtime error: No matching clause was found ***\n");
      exit(1);
    };
  };
  ENC_DTRACE2(FUNCTION_EXIT, (uintptr_t)*_ctx, "inside");
  return ((int64_t) _match_0);
}


future_t* _enc__global_fun__encore_libs_master_Ped_util_Global_funsmk_Future(pony_ctx_t** _ctx, pony_type_t** runtimeType, int64_t _enc__arg_n)
{
  ENC_DTRACE2(FUNCTION_ENTRY, (uintptr_t)*_ctx, "mk_Future");
  future_t* _embed_0 = ({future_t *fut = future_mk(_ctx, ENCORE_PRIMITIVE);
   future_fulfil(_ctx, fut, (encore_arg_t) {.i = _enc__arg_n});
   fut;
});
  ENC_DTRACE2(FUNCTION_EXIT, (uintptr_t)*_ctx, "mk_Future");
  return ((future_t*) _embed_0);
}


void* _enc__global_fun__encore_libs_master_Ped_util_Global_funsprinttime(pony_ctx_t** _ctx, pony_type_t** runtimeType, int64_t _enc__arg_x)
{
  ENC_DTRACE2(FUNCTION_ENTRY, (uintptr_t)*_ctx, "printtime");
  /* embed void { printf("%i seconds\n", #{x}); } end */;
  ({{ printf("%i seconds\n", _enc__arg_x); }});
  ENC_DTRACE2(FUNCTION_EXIT, (uintptr_t)*_ctx, "printtime");
  return UNIT;
}


int64_t _enc__global_fun__encore_libs_master_Ped_util_Global_funsclock(pony_ctx_t** _ctx, pony_type_t** runtimeType)
{
  ENC_DTRACE2(FUNCTION_ENTRY, (uintptr_t)*_ctx, "clock");
  /* var x = 0 */;
  /* x = 0 */;
  int64_t _literal_0 = 0;
  int64_t _x_1 = _literal_0;
  /* embed void { #{x}=time(0); } end */;
  ({{ _x_1=time(0); }});
  /* x */;
  ENC_DTRACE2(FUNCTION_EXIT, (uintptr_t)*_ctx, "clock");
  return ((int64_t) _x_1);
}


tuple_t* _enc__global_fun__encore_libs_master_Ped_util_Global_funsextreme_check(pony_ctx_t** _ctx, pony_type_t** runtimeType, tuple_t* _enc__arg_a, tuple_t* _enc__arg_b)
{
  ENC_DTRACE2(FUNCTION_ENTRY, (uintptr_t)*_ctx, "extreme_check");
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
    _match_0 = ((tuple_t*) ({/* (max(x, xmax), max(y, ymax), min(x, xmin), min(y, ymin)) */;
                             tuple_t* _tuple_8 = tuple_mk(_ctx, 4);
                             tuple_set_type(_tuple_8, 0, ENCORE_PRIMITIVE);
                             tuple_set_type(_tuple_8, 1, ENCORE_PRIMITIVE);
                             tuple_set_type(_tuple_8, 2, ENCORE_PRIMITIVE);
                             tuple_set_type(_tuple_8, 3, ENCORE_PRIMITIVE);
                             ENC_DTRACE2(FUNCTION_CALL, (uintptr_t)*_ctx, "Global_funs.max");
                             pony_type_t* _tmp_9[] = {};
                             int64_t _fun_call_10 = _enc__global_fun__encore_libs_master_Ped_util_Global_funsmax(_ctx, NULL, _x_2, _xmax_4);
                             ENC_DTRACE2(FUNCTION_CALL, (uintptr_t)*_ctx, "Global_funs.max");
                             pony_type_t* _tmp_11[] = {};
                             int64_t _fun_call_12 = _enc__global_fun__encore_libs_master_Ped_util_Global_funsmax(_ctx, NULL, _y_3, _ymax_5);
                             ENC_DTRACE2(FUNCTION_CALL, (uintptr_t)*_ctx, "Global_funs.min");
                             pony_type_t* _tmp_13[] = {};
                             int64_t _fun_call_14 = _enc__global_fun__encore_libs_master_Ped_util_Global_funsmin(_ctx, NULL, _x_2, _xmin_6);
                             ENC_DTRACE2(FUNCTION_CALL, (uintptr_t)*_ctx, "Global_funs.min");
                             pony_type_t* _tmp_15[] = {};
                             int64_t _fun_call_16 = _enc__global_fun__encore_libs_master_Ped_util_Global_funsmin(_ctx, NULL, _y_3, _ymin_7);
                             tuple_set(_tuple_8, 0, ((encore_arg_t) {.i = _fun_call_10}));
                             tuple_set(_tuple_8, 1, ((encore_arg_t) {.i = _fun_call_12}));
                             tuple_set(_tuple_8, 2, ((encore_arg_t) {.i = _fun_call_14}));
                             tuple_set(_tuple_8, 3, ((encore_arg_t) {.i = _fun_call_16})); _tuple_8;}));
  }
  else
  {
    fprintf(stderr, "*** Runtime error: No matching clause was found ***\n");
    exit(1);
  };
  ENC_DTRACE2(FUNCTION_EXIT, (uintptr_t)*_ctx, "extreme_check");
  return ((tuple_t*) _match_0);
}


tuple_t* _enc__global_fun__encore_libs_master_Ped_util_Global_funsfind_extreme(pony_ctx_t** _ctx, pony_type_t** runtimeType, array_t* _enc__arg_agents)
{
  ENC_DTRACE2(FUNCTION_ENTRY, (uintptr_t)*_ctx, "find_extreme");
  /* var extreme = (- 10000, - 10000, 10000, 10000) */;
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
  /* var i = 0 */;
  /* i = 0 */;
  int64_t _literal_8 = 0;
  int64_t _i_9 = _literal_8;
  /* for a in agents
  {i = i + 1;
   extreme = extreme_check(a.pos(), extreme);
   for index in [ 0 , |a.targets_x| - 1 by 1 ]
     extreme = extreme_check((a.targets_x[index], a.targets_y[index]), 
                             extreme)} */;
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
    _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t* _a_12 = array_get(_enc__arg_agents, _index_11).p;
    /* i = i + 1 */;
    int64_t _binop_19 = (({ _i_9;}) + ({int64_t _literal_18 = 1; _literal_18;}));
    _i_9 = _binop_19;
    /* extreme = extreme_check(a.pos(), extreme) */;
    check_receiver(_a_12, ".", "a", "pos", "\"./encore-libs-master/Ped_util/Global_funs.enc\" (line 40, column 31)");
    pony_type_t* _tmp_21[] = {};
    tuple_t* _sync_method_call_20 = _enc__method__encore_libs_master_Ped_util_Agent_passive_Agent_pos(_ctx, _a_12, NULL);
    ENC_DTRACE2(FUNCTION_CALL, (uintptr_t)*_ctx, "Global_funs.extreme_check");
    pony_type_t* _tmp_22[] = {};
    tuple_t* _fun_call_23 = _enc__global_fun__encore_libs_master_Ped_util_Global_funsextreme_check(_ctx, NULL, _sync_method_call_20, _extreme_7);
    _extreme_7 = _fun_call_23;
    /* for index in [ 0 , |a.targets_x| - 1 by 1 ]
  extreme = extreme_check((a.targets_x[index], a.targets_y[index]), 
                          extreme) */;
    void* _for_24;
    /* Range not generated */;
    int64_t _literal_31 = 0;
    int64_t _binop_35 = (({ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_a_12, "targets_x");
                           array_t* _fieldacc_32 = (*_a_12)._enc__field_targets_x;
                           int64_t _size_33 = array_size(_fieldacc_32); _size_33;}) - ({int64_t _literal_34 = 1; _literal_34;}));
    int64_t _literal_36 = 1;
    int64_t _literal_37 = 1;
    int64_t _step_29 = (_literal_37 * _literal_36);
    range_assert_step(_step_29);
    int64_t _index_25;
    if ((_step_29 > 0))
    {
      _index_25 = _literal_31;
    }
    else
    {
      _index_25 = _binop_35;
    };
    while (((_index_25 >= _literal_31) && (_index_25 <= _binop_35)))
    {
      int64_t _index_26 = _index_25;
      /* extreme = extreme_check((a.targets_x[index], a.targets_y[index]), 
                        extreme) */;
      tuple_t* _tuple_38 = tuple_mk(_ctx, 2);
      tuple_set_type(_tuple_38, 0, ENCORE_PRIMITIVE);
      tuple_set_type(_tuple_38, 1, ENCORE_PRIMITIVE);
      ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_a_12, "targets_x");
      array_t* _fieldacc_39 = (*_a_12)._enc__field_targets_x;
      int64_t _access_40 = array_get(_fieldacc_39, _index_26).i;
      ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_a_12, "targets_y");
      array_t* _fieldacc_41 = (*_a_12)._enc__field_targets_y;
      int64_t _access_42 = array_get(_fieldacc_41, _index_26).i;
      tuple_set(_tuple_38, 0, ((encore_arg_t) {.i = _access_40}));
      tuple_set(_tuple_38, 1, ((encore_arg_t) {.i = _access_42}));
      ENC_DTRACE2(FUNCTION_CALL, (uintptr_t)*_ctx, "Global_funs.extreme_check");
      pony_type_t* _tmp_43[] = {};
      tuple_t* _fun_call_44 = _enc__global_fun__encore_libs_master_Ped_util_Global_funsextreme_check(_ctx, NULL, _tuple_38, _extreme_7);
      _extreme_7 = _fun_call_44;
      _for_24 = UNIT;
      _index_25 = (_index_25 + _step_29);
    };
    _for_10 = _for_24;
    _index_11 = (_index_11 + _step_15);
  };
  /* match extreme with
  (xmax, ymax, xmin, ymin) => (xmax + 10, 
                               ymax + 10, 
                               xmin - 10, 
                               ymin - 10)
 */;
  tuple_t* _match_45;
  int64_t _xmax_46;
  int64_t _ymax_47;
  int64_t _xmin_48;
  int64_t _ymin_49;
  if ((({int64_t _tupleCheck_59;
         _tupleCheck_59 = 1;
         int64_t _tupleAccess_60 = tuple_get(_extreme_7, 0).i;
         int64_t _varBinding_61;
         _xmax_46 = _tupleAccess_60;
         _varBinding_61 = 1;
         _tupleCheck_59 = (_tupleCheck_59 && _varBinding_61);
         int64_t _tupleAccess_62 = tuple_get(_extreme_7, 1).i;
         int64_t _varBinding_63;
         _ymax_47 = _tupleAccess_62;
         _varBinding_63 = 1;
         _tupleCheck_59 = (_tupleCheck_59 && _varBinding_63);
         int64_t _tupleAccess_64 = tuple_get(_extreme_7, 2).i;
         int64_t _varBinding_65;
         _xmin_48 = _tupleAccess_64;
         _varBinding_65 = 1;
         _tupleCheck_59 = (_tupleCheck_59 && _varBinding_65);
         int64_t _tupleAccess_66 = tuple_get(_extreme_7, 3).i;
         int64_t _varBinding_67;
         _ymin_49 = _tupleAccess_66;
         _varBinding_67 = 1;
         _tupleCheck_59 = (_tupleCheck_59 && _varBinding_67); _tupleCheck_59;}) && ({int64_t _literal_68 = 1/*True*/; _literal_68;})))
  {
    _match_45 = ((tuple_t*) ({tuple_t* _tuple_50 = tuple_mk(_ctx, 4);
                              tuple_set_type(_tuple_50, 0, ENCORE_PRIMITIVE);
                              tuple_set_type(_tuple_50, 1, ENCORE_PRIMITIVE);
                              tuple_set_type(_tuple_50, 2, ENCORE_PRIMITIVE);
                              tuple_set_type(_tuple_50, 3, ENCORE_PRIMITIVE);
                              int64_t _binop_52 = (({ _xmax_46;}) + ({int64_t _literal_51 = 10; _literal_51;}));
                              int64_t _binop_54 = (({ _ymax_47;}) + ({int64_t _literal_53 = 10; _literal_53;}));
                              int64_t _binop_56 = (({ _xmin_48;}) - ({int64_t _literal_55 = 10; _literal_55;}));
                              int64_t _binop_58 = (({ _ymin_49;}) - ({int64_t _literal_57 = 10; _literal_57;}));
                              tuple_set(_tuple_50, 0, ((encore_arg_t) {.i = _binop_52}));
                              tuple_set(_tuple_50, 1, ((encore_arg_t) {.i = _binop_54}));
                              tuple_set(_tuple_50, 2, ((encore_arg_t) {.i = _binop_56}));
                              tuple_set(_tuple_50, 3, ((encore_arg_t) {.i = _binop_58})); _tuple_50;}));
  }
  else
  {
    fprintf(stderr, "*** Runtime error: No matching clause was found ***\n");
    exit(1);
  };
  ENC_DTRACE2(FUNCTION_EXIT, (uintptr_t)*_ctx, "find_extreme");
  return ((tuple_t*) _match_45);
}


double _enc__global_fun__encore_libs_master_Ped_util_Global_funsinvSqrt(pony_ctx_t** _ctx, pony_type_t** runtimeType, int64_t _enc__arg_input)
{
  ENC_DTRACE2(FUNCTION_ENTRY, (uintptr_t)*_ctx, "invSqrt");
  /* var ret = 0.0 */;
  /* ret = 0.0 */;
  double _literal_0 = 0.0;
  double _ret_1 = _literal_0;
  /* embed void {
  float x = #{input};
  float xhalf = 0.5f * x;
  int i = *(int*)&x;
  i = 0x5f3759df - (i >> 1);
  x = *(float*)&i;
  #{ret}= x*(1.5f - xhalf*x*x);
  } end */;
  ({{
  float x = _enc__arg_input;
  float xhalf = 0.5f * x;
  int i = *(int*)&x;
  i = 0x5f3759df - (i >> 1);
  x = *(float*)&i;
  _ret_1= x*(1.5f - xhalf*x*x);
  }});
  /* ret */;
  ENC_DTRACE2(FUNCTION_EXIT, (uintptr_t)*_ctx, "invSqrt");
  return ((double) _ret_1);
}


int64_t _enc__global_fun__encore_libs_master_Ped_util_Regionslink(pony_ctx_t** _ctx, pony_type_t** runtimeType, _enc__active__encore_libs_master_Ped_util_Regions_Box_t* _enc__arg_a, _enc__active__encore_libs_master_Ped_util_Regions_Box_t* _enc__arg_b)
{
  ENC_DTRACE2(FUNCTION_ENTRY, (uintptr_t)*_ctx, "link");
  /* val aa = a.link(b) */;
  /* aa = a.link(b) */;
  check_receiver(_enc__arg_a, ".", "a", "link", "\"./encore-libs-master/Ped_util/Regions.enc\" (line 405, column 12)");
  pony_type_t* _tmp_1[] = {};
  future_t* _fut_0 = _enc__method__encore_libs_master_Ped_util_Regions_Box_link_future(_ctx, _enc__arg_a, NULL, _enc__arg_b);
  future_t* _aa_2 = _fut_0;
  /* val bb = b.link(a) */;
  /* bb = b.link(a) */;
  check_receiver(_enc__arg_b, ".", "b", "link", "\"./encore-libs-master/Ped_util/Regions.enc\" (line 406, column 12)");
  pony_type_t* _tmp_4[] = {};
  future_t* _fut_3 = _enc__method__encore_libs_master_Ped_util_Regions_Box_link_future(_ctx, _enc__arg_b, NULL, _enc__arg_a);
  future_t* _bb_5 = _fut_3;
  /* val aaa = get aa */;
  /* aaa = get aa */;
  int64_t _tmp_6 = future_get_actor(_ctx, _aa_2).i;
  int64_t _aaa_7 = _tmp_6;
  /* val bbb = get bb */;
  /* bbb = get bb */;
  int64_t _tmp_8 = future_get_actor(_ctx, _bb_5).i;
  int64_t _bbb_9 = _tmp_8;
  /* unless aaa == bbb then
  print("ONE_WAY_LINK\n") */;
  void* _ite_10;
  if (({int64_t _binop_11 = (({ _aaa_7;}) == ({ _bbb_9;}));
        int64_t _unary_12 = (! _binop_11); _unary_12;}))
  {
    char* _literal_13 = "ONE_WAY_LINK\n";
    fprintf(stdout, "%s", _literal_13);
    _ite_10 = ((void*) UNIT);
  }
  else
  {
    UNIT;
    _ite_10 = ((void*) UNIT);
  };
  /* aaa */;
  ENC_DTRACE2(FUNCTION_EXIT, (uintptr_t)*_ctx, "link");
  return ((int64_t) _aaa_7);
}


void* _enc__global_fun__encore_libs_master_Ped_util_Regionsregions(pony_ctx_t** _ctx, pony_type_t** runtimeType, array_t* _enc__arg_agents, int64_t _enc__arg_ui, int64_t _enc__arg_boxes)
{
  ENC_DTRACE2(FUNCTION_ENTRY, (uintptr_t)*_ctx, "regions");
  /* var sdl_main = if ui then
                 make_UI()
               else
                 null : SDL_Main */;
  /* sdl_main = if ui then
  make_UI()
else
  null : SDL_Main */;
  _enc__active__encore_libs_master_SDL_SDL_Main_SDL_Main_t* _ite_0;
  if (({ _enc__arg_ui;}))
  {
    ENC_DTRACE2(FUNCTION_CALL, (uintptr_t)*_ctx, "Ped_util.UI.make_UI");
    pony_type_t* _tmp_1[] = {};
    _enc__active__encore_libs_master_SDL_SDL_Main_SDL_Main_t* _fun_call_2 = _enc__global_fun__encore_libs_master_Ped_util_UImake_UI(_ctx, NULL);
    _ite_0 = ((_enc__active__encore_libs_master_SDL_SDL_Main_SDL_Main_t*) _fun_call_2);
  }
  else
  {
    _enc__active__encore_libs_master_SDL_SDL_Main_SDL_Main_t* _literal_3 = NULL;
    _enc__active__encore_libs_master_SDL_SDL_Main_SDL_Main_t* _cast_4 = ((_enc__active__encore_libs_master_SDL_SDL_Main_SDL_Main_t*) _literal_3);
    _ite_0 = ((_enc__active__encore_libs_master_SDL_SDL_Main_SDL_Main_t*) _cast_4);
  };
  _enc__active__encore_libs_master_SDL_SDL_Main_SDL_Main_t* _sdl_main_5 = _ite_0;
  /* var box = new Tiling_box(agents, boxes) */;
  /* box = new Tiling_box(agents, boxes) */;
  _enc__active__encore_libs_master_Ped_util_Regions_Tiling_box_t* _new_6 = _enc__constructor__encore_libs_master_Ped_util_Regions_Tiling_box(_ctx, NULL);
  pony_type_t* _tmp_7[] = {};
  _enc__type_init__encore_libs_master_Ped_util_Regions_Tiling_box(_new_6);
  _enc__method__encore_libs_master_Ped_util_Regions_Tiling_box_init_one_way(_ctx, _new_6, NULL, _enc__arg_agents, _enc__arg_boxes);
  _enc__active__encore_libs_master_Ped_util_Regions_Tiling_box_t* _box_8 = _new_6;
  /* println(("Encore regions", |agents|)) */;
  tuple_t* _tuple_9 = tuple_mk(_ctx, 2);
  tuple_set_type(_tuple_9, 0, (&(_enc__passive_String_String_type)));
  tuple_set_type(_tuple_9, 1, ENCORE_PRIMITIVE);
  _enc__passive_String_String_t* _new_10 = _enc__constructor_String_String(_ctx, NULL);
  char* _embed_11 = ({"Encore regions";});
  pony_type_t* _tmp_12[] = {};
  _enc__type_init_String_String(_new_10);
  _enc__method_String_String_init(_ctx, _new_10, NULL, _embed_11);
  int64_t _size_13 = array_size(_enc__arg_agents);
  tuple_set(_tuple_9, 0, ((encore_arg_t) {.p = _new_10}));
  tuple_set(_tuple_9, 1, ((encore_arg_t) {.i = _size_13}));
  fprintf(stdout, "(%s, %lli)\n", ((_enc__passive_String_String_t*) tuple_get(_tuple_9, 0).p)->_enc__field_data, tuple_get(_tuple_9, 1).i);
  /* box!move(ui, sdl_main, 10000, clock()) */;
  check_receiver(_box_8, " ! ", "box", "move", "\"./encore-libs-master/Ped_util/Regions.enc\" (line 15, column 9)");
  int64_t _literal_14 = 10000;
  ENC_DTRACE2(FUNCTION_CALL, (uintptr_t)*_ctx, "Global_funs.clock");
  pony_type_t* _tmp_15[] = {};
  int64_t _fun_call_16 = _enc__global_fun__encore_libs_master_Ped_util_Global_funsclock(_ctx, NULL);
  pony_type_t* _tmp_17[] = {};
  _enc__method__encore_libs_master_Ped_util_Regions_Tiling_box_move_one_way(_ctx, _box_8, NULL, _enc__arg_ui, _sdl_main_5, _literal_14, _fun_call_16);
  ENC_DTRACE2(FUNCTION_EXIT, (uintptr_t)*_ctx, "regions");
  return UNIT;
}


void* _enc__global_fun__encore_libs_master_Ped_util_UIshow(pony_ctx_t** _ctx, pony_type_t** runtimeType, array_t* _enc__arg_cords, _enc__active__encore_libs_master_SDL_SDL_Main_SDL_Main_t* _enc__arg_sdl_main)
{
  ENC_DTRACE2(FUNCTION_ENTRY, (uintptr_t)*_ctx, "show");
  /* get sdl_main.clearAll() */;
  check_receiver(_enc__arg_sdl_main, ".", "sdl_main", "clearAll", "\"./encore-libs-master/Ped_util/UI.enc\" (line 12, column 13)");
  pony_type_t* _tmp_1[] = {};
  future_t* _fut_0 = _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Main_clearAll_future(_ctx, _enc__arg_sdl_main, NULL);
  void* _tmp_2 = future_get_actor(_ctx, _fut_0).p;
  /* get sdl_main.setRenderColor(new ColorRGBA(240, 240, 240, 0)) */;
  check_receiver(_enc__arg_sdl_main, ".", "sdl_main", "setRenderColor", "\"./encore-libs-master/Ped_util/UI.enc\" (line 13, column 13)");
  _enc__passive__encore_libs_master_SDL_SDL_Primitives_ColorRGBA_t* _new_4 = _enc__constructor__encore_libs_master_SDL_SDL_Primitives_ColorRGBA(_ctx, NULL);
  int64_t _literal_5 = 240;
  int64_t _literal_6 = 240;
  int64_t _literal_7 = 240;
  int64_t _literal_8 = 0;
  pony_type_t* _tmp_9[] = {};
  _enc__type_init__encore_libs_master_SDL_SDL_Primitives_ColorRGBA(_new_4);
  _enc__method__encore_libs_master_SDL_SDL_Primitives_ColorRGBA_init(_ctx, _new_4, NULL, _literal_5, _literal_6, _literal_7, _literal_8);
  pony_type_t* _tmp_10[] = {};
  future_t* _fut_3 = _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Main_setRenderColor_future(_ctx, _enc__arg_sdl_main, NULL, _new_4);
  void* _tmp_11 = future_get_actor(_ctx, _fut_3).p;
  /* for a in cords
  match a with
    (x, y) => get sdl_main.fillRectangle(new Rectangle(x * 4 + 200, 
                                                       y * 4, 
                                                       1, 
                                                       1))
    _ => ()
   */;
  void* _for_12;
  int64_t _start_15 = 0;
  int64_t _stop_16 = (array_size(_enc__arg_cords) - 1);
  int64_t _src_step_18 = 1;
  int64_t _literal_19 = 1;
  int64_t _step_17 = (_literal_19 * _src_step_18);
  range_assert_step(_step_17);
  int64_t _index_13;
  if ((_step_17 > 0))
  {
    _index_13 = _start_15;
  }
  else
  {
    _index_13 = _stop_16;
  };
  while (((_index_13 >= _start_15) && (_index_13 <= _stop_16)))
  {
    tuple_t* _a_14 = array_get(_enc__arg_cords, _index_13).p;
    /* match a with
  (x, y) => get sdl_main.fillRectangle(new Rectangle(x * 4 + 200, 
                                                     y * 4, 
                                                     1, 
                                                     1))
  _ => ()
 */;
    void* _match_20;
    int64_t _x_21;
    int64_t _y_22;
    if ((({int64_t _tupleCheck_39;
           _tupleCheck_39 = 1;
           int64_t _tupleAccess_40 = tuple_get(_a_14, 0).i;
           int64_t _varBinding_41;
           _x_21 = _tupleAccess_40;
           _varBinding_41 = 1;
           _tupleCheck_39 = (_tupleCheck_39 && _varBinding_41);
           int64_t _tupleAccess_42 = tuple_get(_a_14, 1).i;
           int64_t _varBinding_43;
           _y_22 = _tupleAccess_42;
           _varBinding_43 = 1;
           _tupleCheck_39 = (_tupleCheck_39 && _varBinding_43); _tupleCheck_39;}) && ({int64_t _literal_44 = 1/*True*/; _literal_44;})))
    {
      _match_20 = ((void*) ({/* get sdl_main.fillRectangle(new Rectangle(x * 4 + 200, y * 4, 1, 1)) */;
                             check_receiver(_enc__arg_sdl_main, ".", "sdl_main", "fillRectangle", "\"./encore-libs-master/Ped_util/UI.enc\" (line 18, column 34)");
                             _enc__passive__encore_libs_master_SDL_SDL_Primitives_Rectangle_t* _new_24 = _enc__constructor__encore_libs_master_SDL_SDL_Primitives_Rectangle(_ctx, NULL);
                             int64_t _binop_28 = (({int64_t _binop_26 = (({ _x_21;}) * ({int64_t _literal_25 = 4; _literal_25;})); _binop_26;}) + ({int64_t _literal_27 = 200; _literal_27;}));
                             int64_t _binop_30 = (({ _y_22;}) * ({int64_t _literal_29 = 4; _literal_29;}));
                             int64_t _literal_31 = 1;
                             int64_t _literal_32 = 1;
                             pony_type_t* _tmp_33[] = {};
                             _enc__type_init__encore_libs_master_SDL_SDL_Primitives_Rectangle(_new_24);
                             _enc__method__encore_libs_master_SDL_SDL_Primitives_Rectangle_init(_ctx, _new_24, NULL, _binop_28, _binop_30, _literal_31, _literal_32);
                             pony_type_t* _tmp_34[] = {};
                             future_t* _fut_23 = _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Main_fillRectangle_future(_ctx, _enc__arg_sdl_main, NULL, _new_24);
                             void* _tmp_35 = future_get_actor(_ctx, _fut_23).p; _tmp_35;}));
    }
    else
    {
      tuple_t* ___36;
      if ((({int64_t _varBinding_37;
             ___36 = _a_14;
             _varBinding_37 = 1; _varBinding_37;}) && ({int64_t _literal_38 = 1/*True*/; _literal_38;})))
      {
        _match_20 = ((void*) ({UNIT; UNIT;}));
      }
      else
      {
        fprintf(stderr, "*** Runtime error: No matching clause was found ***\n");
        exit(1);
      };
    };
    _for_12 = _match_20;
    _index_13 = (_index_13 + _step_17);
  };
  /* get sdl_main.setRenderColor(new ColorRGBA(0, 240, 0, 0)) */;
  check_receiver(_enc__arg_sdl_main, ".", "sdl_main", "setRenderColor", "\"./encore-libs-master/Ped_util/UI.enc\" (line 21, column 13)");
  _enc__passive__encore_libs_master_SDL_SDL_Primitives_ColorRGBA_t* _new_46 = _enc__constructor__encore_libs_master_SDL_SDL_Primitives_ColorRGBA(_ctx, NULL);
  int64_t _literal_47 = 0;
  int64_t _literal_48 = 240;
  int64_t _literal_49 = 0;
  int64_t _literal_50 = 0;
  pony_type_t* _tmp_51[] = {};
  _enc__type_init__encore_libs_master_SDL_SDL_Primitives_ColorRGBA(_new_46);
  _enc__method__encore_libs_master_SDL_SDL_Primitives_ColorRGBA_init(_ctx, _new_46, NULL, _literal_47, _literal_48, _literal_49, _literal_50);
  pony_type_t* _tmp_52[] = {};
  future_t* _fut_45 = _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Main_setRenderColor_future(_ctx, _enc__arg_sdl_main, NULL, _new_46);
  void* _tmp_53 = future_get_actor(_ctx, _fut_45).p;
  /* get sdl_main.fillRectangle(new Rectangle(160 * 4 + 200, 
                                         60 * 4, 
                                         3, 
                                         3)) */;
  check_receiver(_enc__arg_sdl_main, ".", "sdl_main", "fillRectangle", "\"./encore-libs-master/Ped_util/UI.enc\" (line 22, column 13)");
  _enc__passive__encore_libs_master_SDL_SDL_Primitives_Rectangle_t* _new_55 = _enc__constructor__encore_libs_master_SDL_SDL_Primitives_Rectangle(_ctx, NULL);
  int64_t _binop_60 = (({int64_t _binop_58 = (({int64_t _literal_56 = 160; _literal_56;}) * ({int64_t _literal_57 = 4; _literal_57;})); _binop_58;}) + ({int64_t _literal_59 = 200; _literal_59;}));
  int64_t _binop_63 = (({int64_t _literal_61 = 60; _literal_61;}) * ({int64_t _literal_62 = 4; _literal_62;}));
  int64_t _literal_64 = 3;
  int64_t _literal_65 = 3;
  pony_type_t* _tmp_66[] = {};
  _enc__type_init__encore_libs_master_SDL_SDL_Primitives_Rectangle(_new_55);
  _enc__method__encore_libs_master_SDL_SDL_Primitives_Rectangle_init(_ctx, _new_55, NULL, _binop_60, _binop_63, _literal_64, _literal_65);
  pony_type_t* _tmp_67[] = {};
  future_t* _fut_54 = _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Main_fillRectangle_future(_ctx, _enc__arg_sdl_main, NULL, _new_55);
  void* _tmp_68 = future_get_actor(_ctx, _fut_54).p;
  /* get sdl_main.fillRectangle(new Rectangle(200, 60 * 4, 3, 3)) */;
  check_receiver(_enc__arg_sdl_main, ".", "sdl_main", "fillRectangle", "\"./encore-libs-master/Ped_util/UI.enc\" (line 23, column 13)");
  _enc__passive__encore_libs_master_SDL_SDL_Primitives_Rectangle_t* _new_70 = _enc__constructor__encore_libs_master_SDL_SDL_Primitives_Rectangle(_ctx, NULL);
  int64_t _literal_71 = 200;
  int64_t _binop_74 = (({int64_t _literal_72 = 60; _literal_72;}) * ({int64_t _literal_73 = 4; _literal_73;}));
  int64_t _literal_75 = 3;
  int64_t _literal_76 = 3;
  pony_type_t* _tmp_77[] = {};
  _enc__type_init__encore_libs_master_SDL_SDL_Primitives_Rectangle(_new_70);
  _enc__method__encore_libs_master_SDL_SDL_Primitives_Rectangle_init(_ctx, _new_70, NULL, _literal_71, _binop_74, _literal_75, _literal_76);
  pony_type_t* _tmp_78[] = {};
  future_t* _fut_69 = _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Main_fillRectangle_future(_ctx, _enc__arg_sdl_main, NULL, _new_70);
  void* _tmp_79 = future_get_actor(_ctx, _fut_69).p;
  /* get sdl_main.refresh() */;
  check_receiver(_enc__arg_sdl_main, ".", "sdl_main", "refresh", "\"./encore-libs-master/Ped_util/UI.enc\" (line 24, column 13)");
  pony_type_t* _tmp_81[] = {};
  future_t* _fut_80 = _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Main_refresh_future(_ctx, _enc__arg_sdl_main, NULL);
  void* _tmp_82 = future_get_actor(_ctx, _fut_80).p;
  ENC_DTRACE2(FUNCTION_EXIT, (uintptr_t)*_ctx, "show");
  return UNIT;
}


_enc__active__encore_libs_master_SDL_SDL_Main_SDL_Main_t* _enc__global_fun__encore_libs_master_Ped_util_UImake_UI(pony_ctx_t** _ctx, pony_type_t** runtimeType)
{
  ENC_DTRACE2(FUNCTION_ENTRY, (uintptr_t)*_ctx, "make_UI");
  /* var sdl_main = new SDL_Main(1500, 1000) */;
  /* sdl_main = new SDL_Main(1500, 1000) */;
  _enc__active__encore_libs_master_SDL_SDL_Main_SDL_Main_t* _new_0 = _enc__constructor__encore_libs_master_SDL_SDL_Main_SDL_Main(_ctx, NULL);
  int64_t _literal_1 = 1500;
  int64_t _literal_2 = 1000;
  pony_type_t* _tmp_3[] = {};
  _enc__type_init__encore_libs_master_SDL_SDL_Main_SDL_Main(_new_0);
  _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Main_init_one_way(_ctx, _new_0, NULL, _literal_1, _literal_2);
  _enc__active__encore_libs_master_SDL_SDL_Main_SDL_Main_t* _sdl_main_4 = _new_0;
  /* get sdl_main.clearAll() */;
  check_receiver(_sdl_main_4, ".", "sdl_main", "clearAll", "\"./encore-libs-master/Ped_util/UI.enc\" (line 7, column 9)");
  pony_type_t* _tmp_6[] = {};
  future_t* _fut_5 = _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Main_clearAll_future(_ctx, _sdl_main_4, NULL);
  void* _tmp_7 = future_get_actor(_ctx, _fut_5).p;
  /* get sdl_main.refresh() */;
  check_receiver(_sdl_main_4, ".", "sdl_main", "refresh", "\"./encore-libs-master/Ped_util/UI.enc\" (line 8, column 9)");
  pony_type_t* _tmp_9[] = {};
  future_t* _fut_8 = _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Main_refresh_future(_ctx, _sdl_main_4, NULL);
  void* _tmp_10 = future_get_actor(_ctx, _fut_8).p;
  /* sdl_main */;
  ENC_DTRACE2(FUNCTION_EXIT, (uintptr_t)*_ctx, "make_UI");
  return ((_enc__active__encore_libs_master_SDL_SDL_Main_SDL_Main_t*) _sdl_main_4);
}


_enc__passive_String_String_t* _enc__global_fun_Stringstring_from_bool(pony_ctx_t** _ctx, pony_type_t** runtimeType, int64_t _enc__arg_x)
{
  ENC_DTRACE2(FUNCTION_ENTRY, (uintptr_t)*_ctx, "string_from_bool");
  _enc__passive_String_String_t* _ite_0;
  if (({ _enc__arg_x;}))
  {
    _enc__passive_String_String_t* _new_1 = _enc__constructor_String_String(_ctx, NULL);
    char* _embed_2 = ({"true";});
    pony_type_t* _tmp_3[] = {};
    _enc__type_init_String_String(_new_1);
    _enc__method_String_String_init(_ctx, _new_1, NULL, _embed_2);
    _ite_0 = ((_enc__passive_String_String_t*) _new_1);
  }
  else
  {
    _enc__passive_String_String_t* _new_4 = _enc__constructor_String_String(_ctx, NULL);
    char* _embed_5 = ({"false";});
    pony_type_t* _tmp_6[] = {};
    _enc__type_init_String_String(_new_4);
    _enc__method_String_String_init(_ctx, _new_4, NULL, _embed_5);
    _ite_0 = ((_enc__passive_String_String_t*) _new_4);
  };
  ENC_DTRACE2(FUNCTION_EXIT, (uintptr_t)*_ctx, "string_from_bool");
  return ((_enc__passive_String_String_t*) _ite_0);
}


_enc__passive_String_String_t* _enc__global_fun_Stringstring_from_int(pony_ctx_t** _ctx, pony_type_t** runtimeType, int64_t _enc__arg_n)
{
  ENC_DTRACE2(FUNCTION_ENTRY, (uintptr_t)*_ctx, "string_from_int");
  _enc__passive_String_String_t* _new_0 = _enc__constructor_String_String(_ctx, NULL);
  char* _embed_1 = ({int n = _enc__arg_n;
    int len = n == 0? 2:
              n < 0? (int) ceil(log10(-n)) + 2:
                     (int) ceil(log10(n)) + 1;
    char *s = encore_alloc(*_ctx, len);
    sprintf(s, "%d", n);
    s;
   });
  pony_type_t* _tmp_2[] = {};
  _enc__type_init_String_String(_new_0);
  _enc__method_String_String_init(_ctx, _new_0, NULL, _embed_1);
  ENC_DTRACE2(FUNCTION_EXIT, (uintptr_t)*_ctx, "string_from_int");
  return ((_enc__passive_String_String_t*) _new_0);
}


_enc__passive_String_String_t* _enc__global_fun_Stringstring_from_real(pony_ctx_t** _ctx, pony_type_t** runtimeType, double _enc__arg_n)
{
  ENC_DTRACE2(FUNCTION_ENTRY, (uintptr_t)*_ctx, "string_from_real");
  _enc__passive_String_String_t* _new_0 = _enc__constructor_String_String(_ctx, NULL);
  char* _embed_1 = ({double n = _enc__arg_n;
    char buf[13] = { 0 }; // long enough to print the minimum double value.
    char *s = encore_alloc(*_ctx, sizeof(buf));
    snprintf(s, sizeof(buf), "%.5g", n);
    s;
   });
  pony_type_t* _tmp_2[] = {};
  _enc__type_init_String_String(_new_0);
  _enc__method_String_String_init(_ctx, _new_0, NULL, _embed_1);
  ENC_DTRACE2(FUNCTION_EXIT, (uintptr_t)*_ctx, "string_from_real");
  return ((_enc__passive_String_String_t*) _new_0);
}


_enc__passive_String_String_t* _enc__global_fun_Stringstring_from_array(pony_ctx_t** _ctx, pony_type_t** runtimeType, array_t* _enc__arg_arr)
{
  ENC_DTRACE2(FUNCTION_ENTRY, (uintptr_t)*_ctx, "string_from_array");
  /* len = |arr| */;
  int64_t _size_0 = array_size(_enc__arg_arr);
  int64_t _len_1 = _size_0;
  /* s = embed char* encore_alloc(*_ctx, #{len}+ 1); end */;
  char* _embed_2 = ({encore_alloc(*_ctx, _len_1+ 1);});
  char* _s_3 = _embed_2;
  /* p = s */;
  char* _p_4 = _s_3;
  /* for c in arr
  embed void (*#{p}++) = #{c}; end */;
  void* _for_5;
  int64_t _start_8 = 0;
  int64_t _stop_9 = (array_size(_enc__arg_arr) - 1);
  int64_t _src_step_11 = 1;
  int64_t _literal_12 = 1;
  int64_t _step_10 = (_literal_12 * _src_step_11);
  range_assert_step(_step_10);
  int64_t _index_6;
  if ((_step_10 > 0))
  {
    _index_6 = _start_8;
  }
  else
  {
    _index_6 = _stop_9;
  };
  while (((_index_6 >= _start_8) && (_index_6 <= _stop_9)))
  {
    char _c_7 = array_get(_enc__arg_arr, _index_6).i;
    ({(*_p_4++) = _c_7;});
    _for_5 = UNIT;
    _index_6 = (_index_6 + _step_10);
  };
  /* new String(s) */;
  _enc__passive_String_String_t* _new_13 = _enc__constructor_String_String(_ctx, NULL);
  pony_type_t* _tmp_14[] = {};
  _enc__type_init_String_String(_new_13);
  _enc__method_String_String_init(_ctx, _new_13, NULL, _s_3);
  ENC_DTRACE2(FUNCTION_EXIT, (uintptr_t)*_ctx, "string_from_array");
  return ((_enc__passive_String_String_t*) _new_13);
}


_enc__passive_String_String_t* _enc__global_fun_Stringstring_from_char(pony_ctx_t** _ctx, pony_type_t** runtimeType, char _enc__arg_c)
{
  ENC_DTRACE2(FUNCTION_ENTRY, (uintptr_t)*_ctx, "string_from_char");
  /* s = embed char* encore_alloc(*_ctx, 2); end */;
  char* _embed_0 = ({encore_alloc(*_ctx, 2);});
  char* _s_1 = _embed_0;
  _enc__passive_String_String_t* _new_2 = _enc__constructor_String_String(_ctx, NULL);
  char* _embed_3 = ({(*_s_1) = _enc__arg_c; _s_1;});
  pony_type_t* _tmp_4[] = {};
  _enc__type_init_String_String(_new_2);
  _enc__method_String_String_init(_ctx, _new_2, NULL, _embed_3);
  ENC_DTRACE2(FUNCTION_EXIT, (uintptr_t)*_ctx, "string_from_char");
  return ((_enc__passive_String_String_t*) _new_2);
}


value_t _enc__fun_wrapper__encore_libs_master_Ped_util_Global_funsparse_file(pony_ctx_t** _ctx, pony_type_t** runtimeType, value_t _args[], void* _env_not_used)
{
  return ((encore_arg_t) {.p = _enc__global_fun__encore_libs_master_Ped_util_Global_funsparse_file(_ctx, runtimeType, (_args[0]).p)});
}


value_t _enc__fun_wrapper__encore_libs_master_Ped_util_Global_funsequal(pony_ctx_t** _ctx, pony_type_t** runtimeType, value_t _args[], void* _env_not_used)
{
  return ((encore_arg_t) {.i = _enc__global_fun__encore_libs_master_Ped_util_Global_funsequal(_ctx, runtimeType, (_args[0]).p, (_args[1]).p)});
}


value_t _enc__fun_wrapper__encore_libs_master_Ped_util_Global_funsdistance_int(pony_ctx_t** _ctx, pony_type_t** runtimeType, value_t _args[], void* _env_not_used)
{
  return ((encore_arg_t) {.d = _enc__global_fun__encore_libs_master_Ped_util_Global_funsdistance_int(_ctx, runtimeType, (_args[0]).i, (_args[1]).i, (_args[2]).i, (_args[3]).i)});
}


value_t _enc__fun_wrapper__encore_libs_master_Ped_util_Global_funsdistance(pony_ctx_t** _ctx, pony_type_t** runtimeType, value_t _args[], void* _env_not_used)
{
  return ((encore_arg_t) {.d = _enc__global_fun__encore_libs_master_Ped_util_Global_funsdistance(_ctx, runtimeType, (_args[0]).p, (_args[1]).p)});
}


value_t _enc__fun_wrapper__encore_libs_master_Ped_util_Global_funsfloor(pony_ctx_t** _ctx, pony_type_t** runtimeType, value_t _args[], void* _env_not_used)
{
  return ((encore_arg_t) {.i = _enc__global_fun__encore_libs_master_Ped_util_Global_funsfloor(_ctx, runtimeType, (_args[0]).d)});
}


value_t _enc__fun_wrapper__encore_libs_master_Ped_util_Global_funsceil(pony_ctx_t** _ctx, pony_type_t** runtimeType, value_t _args[], void* _env_not_used)
{
  return ((encore_arg_t) {.i = _enc__global_fun__encore_libs_master_Ped_util_Global_funsceil(_ctx, runtimeType, (_args[0]).d)});
}


value_t _enc__fun_wrapper__encore_libs_master_Ped_util_Global_funsround(pony_ctx_t** _ctx, pony_type_t** runtimeType, value_t _args[], void* _env_not_used)
{
  return ((encore_arg_t) {.i = _enc__global_fun__encore_libs_master_Ped_util_Global_funsround(_ctx, runtimeType, (_args[0]).d)});
}


value_t _enc__fun_wrapper__encore_libs_master_Ped_util_Global_funsman_distance_int(pony_ctx_t** _ctx, pony_type_t** runtimeType, value_t _args[], void* _env_not_used)
{
  return ((encore_arg_t) {.i = _enc__global_fun__encore_libs_master_Ped_util_Global_funsman_distance_int(_ctx, runtimeType, (_args[0]).i, (_args[1]).i, (_args[2]).i, (_args[3]).i)});
}


value_t _enc__fun_wrapper__encore_libs_master_Ped_util_Global_funsman_distance(pony_ctx_t** _ctx, pony_type_t** runtimeType, value_t _args[], void* _env_not_used)
{
  return ((encore_arg_t) {.i = _enc__global_fun__encore_libs_master_Ped_util_Global_funsman_distance(_ctx, runtimeType, (_args[0]).p, (_args[1]).p)});
}


value_t _enc__fun_wrapper__encore_libs_master_Ped_util_Global_funsabs(pony_ctx_t** _ctx, pony_type_t** runtimeType, value_t _args[], void* _env_not_used)
{
  return ((encore_arg_t) {.i = _enc__global_fun__encore_libs_master_Ped_util_Global_funsabs(_ctx, runtimeType, (_args[0]).i)});
}


value_t _enc__fun_wrapper__encore_libs_master_Ped_util_Global_funsrot(pony_ctx_t** _ctx, pony_type_t** runtimeType, value_t _args[], void* _env_not_used)
{
  return ((encore_arg_t) {.d = _enc__global_fun__encore_libs_master_Ped_util_Global_funsrot(_ctx, runtimeType, (_args[0]).d)});
}


value_t _enc__fun_wrapper__encore_libs_master_Ped_util_Global_funssleep(pony_ctx_t** _ctx, pony_type_t** runtimeType, value_t _args[], void* _env_not_used)
{
  return ((encore_arg_t) {.p = _enc__global_fun__encore_libs_master_Ped_util_Global_funssleep(_ctx, runtimeType, (_args[0]).d)});
}


value_t _enc__fun_wrapper__encore_libs_master_Ped_util_Global_funsrand(pony_ctx_t** _ctx, pony_type_t** runtimeType, value_t _args[], void* _env_not_used)
{
  return ((encore_arg_t) {.i = _enc__global_fun__encore_libs_master_Ped_util_Global_funsrand(_ctx, runtimeType)});
}


value_t _enc__fun_wrapper__encore_libs_master_Ped_util_Global_funsstring_or_empty(pony_ctx_t** _ctx, pony_type_t** runtimeType, value_t _args[], void* _env_not_used)
{
  return ((encore_arg_t) {.p = _enc__global_fun__encore_libs_master_Ped_util_Global_funsstring_or_empty(_ctx, runtimeType, (_args[0]).p)});
}


value_t _enc__fun_wrapper__encore_libs_master_Ped_util_Global_funsint_or_0(pony_ctx_t** _ctx, pony_type_t** runtimeType, value_t _args[], void* _env_not_used)
{
  return ((encore_arg_t) {.i = _enc__global_fun__encore_libs_master_Ped_util_Global_funsint_or_0(_ctx, runtimeType, (_args[0]).p)});
}


value_t _enc__fun_wrapper__encore_libs_master_Ped_util_Global_funsmin(pony_ctx_t** _ctx, pony_type_t** runtimeType, value_t _args[], void* _env_not_used)
{
  return ((encore_arg_t) {.i = _enc__global_fun__encore_libs_master_Ped_util_Global_funsmin(_ctx, runtimeType, (_args[0]).i, (_args[1]).i)});
}


value_t _enc__fun_wrapper__encore_libs_master_Ped_util_Global_funsmax(pony_ctx_t** _ctx, pony_type_t** runtimeType, value_t _args[], void* _env_not_used)
{
  return ((encore_arg_t) {.i = _enc__global_fun__encore_libs_master_Ped_util_Global_funsmax(_ctx, runtimeType, (_args[0]).i, (_args[1]).i)});
}


value_t _enc__fun_wrapper__encore_libs_master_Ped_util_Global_funsflatten(pony_ctx_t** _ctx, pony_type_t** runtimeType, value_t _args[], void* _env_not_used)
{
  return ((encore_arg_t) {.p = _enc__global_fun__encore_libs_master_Ped_util_Global_funsflatten(_ctx, runtimeType, (_args[0]).p)});
}


value_t _enc__fun_wrapper__encore_libs_master_Ped_util_Global_funscopy_tr(pony_ctx_t** _ctx, pony_type_t** runtimeType, value_t _args[], void* _env_not_used)
{
  return ((encore_arg_t) {.p = _enc__global_fun__encore_libs_master_Ped_util_Global_funscopy_tr(_ctx, runtimeType, (_args[0]).p)});
}


value_t _enc__fun_wrapper__encore_libs_master_Ped_util_Global_funscopy_ar(pony_ctx_t** _ctx, pony_type_t** runtimeType, value_t _args[], void* _env_not_used)
{
  return ((encore_arg_t) {.p = _enc__global_fun__encore_libs_master_Ped_util_Global_funscopy_ar(_ctx, runtimeType, (_args[0]).p)});
}


value_t _enc__fun_wrapper__encore_libs_master_Ped_util_Global_funsinside(pony_ctx_t** _ctx, pony_type_t** runtimeType, value_t _args[], void* _env_not_used)
{
  return ((encore_arg_t) {.i = _enc__global_fun__encore_libs_master_Ped_util_Global_funsinside(_ctx, runtimeType, (_args[0]).p, (_args[1]).p)});
}


value_t _enc__fun_wrapper__encore_libs_master_Ped_util_Global_funsmk_Future(pony_ctx_t** _ctx, pony_type_t** runtimeType, value_t _args[], void* _env_not_used)
{
  return ((encore_arg_t) {.p = _enc__global_fun__encore_libs_master_Ped_util_Global_funsmk_Future(_ctx, runtimeType, (_args[0]).i)});
}


value_t _enc__fun_wrapper__encore_libs_master_Ped_util_Global_funsprinttime(pony_ctx_t** _ctx, pony_type_t** runtimeType, value_t _args[], void* _env_not_used)
{
  return ((encore_arg_t) {.p = _enc__global_fun__encore_libs_master_Ped_util_Global_funsprinttime(_ctx, runtimeType, (_args[0]).i)});
}


value_t _enc__fun_wrapper__encore_libs_master_Ped_util_Global_funsclock(pony_ctx_t** _ctx, pony_type_t** runtimeType, value_t _args[], void* _env_not_used)
{
  return ((encore_arg_t) {.i = _enc__global_fun__encore_libs_master_Ped_util_Global_funsclock(_ctx, runtimeType)});
}


value_t _enc__fun_wrapper__encore_libs_master_Ped_util_Global_funsextreme_check(pony_ctx_t** _ctx, pony_type_t** runtimeType, value_t _args[], void* _env_not_used)
{
  return ((encore_arg_t) {.p = _enc__global_fun__encore_libs_master_Ped_util_Global_funsextreme_check(_ctx, runtimeType, (_args[0]).p, (_args[1]).p)});
}


value_t _enc__fun_wrapper__encore_libs_master_Ped_util_Global_funsfind_extreme(pony_ctx_t** _ctx, pony_type_t** runtimeType, value_t _args[], void* _env_not_used)
{
  return ((encore_arg_t) {.p = _enc__global_fun__encore_libs_master_Ped_util_Global_funsfind_extreme(_ctx, runtimeType, (_args[0]).p)});
}


value_t _enc__fun_wrapper__encore_libs_master_Ped_util_Global_funsinvSqrt(pony_ctx_t** _ctx, pony_type_t** runtimeType, value_t _args[], void* _env_not_used)
{
  return ((encore_arg_t) {.d = _enc__global_fun__encore_libs_master_Ped_util_Global_funsinvSqrt(_ctx, runtimeType, (_args[0]).i)});
}


value_t _enc__fun_wrapper__encore_libs_master_Ped_util_Regionslink(pony_ctx_t** _ctx, pony_type_t** runtimeType, value_t _args[], void* _env_not_used)
{
  return ((encore_arg_t) {.i = _enc__global_fun__encore_libs_master_Ped_util_Regionslink(_ctx, runtimeType, (_args[0]).p, (_args[1]).p)});
}


value_t _enc__fun_wrapper__encore_libs_master_Ped_util_Regionsregions(pony_ctx_t** _ctx, pony_type_t** runtimeType, value_t _args[], void* _env_not_used)
{
  return ((encore_arg_t) {.p = _enc__global_fun__encore_libs_master_Ped_util_Regionsregions(_ctx, runtimeType, (_args[0]).p, (_args[1]).i, (_args[2]).i)});
}


value_t _enc__fun_wrapper__encore_libs_master_Ped_util_UIshow(pony_ctx_t** _ctx, pony_type_t** runtimeType, value_t _args[], void* _env_not_used)
{
  return ((encore_arg_t) {.p = _enc__global_fun__encore_libs_master_Ped_util_UIshow(_ctx, runtimeType, (_args[0]).p, (_args[1]).p)});
}


value_t _enc__fun_wrapper__encore_libs_master_Ped_util_UImake_UI(pony_ctx_t** _ctx, pony_type_t** runtimeType, value_t _args[], void* _env_not_used)
{
  return ((encore_arg_t) {.p = _enc__global_fun__encore_libs_master_Ped_util_UImake_UI(_ctx, runtimeType)});
}


value_t _enc__fun_wrapper_Stringstring_from_bool(pony_ctx_t** _ctx, pony_type_t** runtimeType, value_t _args[], void* _env_not_used)
{
  return ((encore_arg_t) {.p = _enc__global_fun_Stringstring_from_bool(_ctx, runtimeType, (_args[0]).i)});
}


value_t _enc__fun_wrapper_Stringstring_from_int(pony_ctx_t** _ctx, pony_type_t** runtimeType, value_t _args[], void* _env_not_used)
{
  return ((encore_arg_t) {.p = _enc__global_fun_Stringstring_from_int(_ctx, runtimeType, (_args[0]).i)});
}


value_t _enc__fun_wrapper_Stringstring_from_real(pony_ctx_t** _ctx, pony_type_t** runtimeType, value_t _args[], void* _env_not_used)
{
  return ((encore_arg_t) {.p = _enc__global_fun_Stringstring_from_real(_ctx, runtimeType, (_args[0]).d)});
}


value_t _enc__fun_wrapper_Stringstring_from_array(pony_ctx_t** _ctx, pony_type_t** runtimeType, value_t _args[], void* _env_not_used)
{
  return ((encore_arg_t) {.p = _enc__global_fun_Stringstring_from_array(_ctx, runtimeType, (_args[0]).p)});
}


value_t _enc__fun_wrapper_Stringstring_from_char(pony_ctx_t** _ctx, pony_type_t** runtimeType, value_t _args[], void* _env_not_used)
{
  return ((encore_arg_t) {.p = _enc__global_fun_Stringstring_from_char(_ctx, runtimeType, (_args[0]).i)});
}


struct closure* _enc__closure__encore_libs_master_Ped_util_Global_funsparse_file = &(struct closure){.call=((void*) (&(_enc__fun_wrapper__encore_libs_master_Ped_util_Global_funsparse_file)))};


struct closure* _enc__closure__encore_libs_master_Ped_util_Global_funsequal = &(struct closure){.call=((void*) (&(_enc__fun_wrapper__encore_libs_master_Ped_util_Global_funsequal)))};


struct closure* _enc__closure__encore_libs_master_Ped_util_Global_funsdistance_int = &(struct closure){.call=((void*) (&(_enc__fun_wrapper__encore_libs_master_Ped_util_Global_funsdistance_int)))};


struct closure* _enc__closure__encore_libs_master_Ped_util_Global_funsdistance = &(struct closure){.call=((void*) (&(_enc__fun_wrapper__encore_libs_master_Ped_util_Global_funsdistance)))};


struct closure* _enc__closure__encore_libs_master_Ped_util_Global_funsfloor = &(struct closure){.call=((void*) (&(_enc__fun_wrapper__encore_libs_master_Ped_util_Global_funsfloor)))};


struct closure* _enc__closure__encore_libs_master_Ped_util_Global_funsceil = &(struct closure){.call=((void*) (&(_enc__fun_wrapper__encore_libs_master_Ped_util_Global_funsceil)))};


struct closure* _enc__closure__encore_libs_master_Ped_util_Global_funsround = &(struct closure){.call=((void*) (&(_enc__fun_wrapper__encore_libs_master_Ped_util_Global_funsround)))};


struct closure* _enc__closure__encore_libs_master_Ped_util_Global_funsman_distance_int = &(struct closure){.call=((void*) (&(_enc__fun_wrapper__encore_libs_master_Ped_util_Global_funsman_distance_int)))};


struct closure* _enc__closure__encore_libs_master_Ped_util_Global_funsman_distance = &(struct closure){.call=((void*) (&(_enc__fun_wrapper__encore_libs_master_Ped_util_Global_funsman_distance)))};


struct closure* _enc__closure__encore_libs_master_Ped_util_Global_funsabs = &(struct closure){.call=((void*) (&(_enc__fun_wrapper__encore_libs_master_Ped_util_Global_funsabs)))};


struct closure* _enc__closure__encore_libs_master_Ped_util_Global_funsrot = &(struct closure){.call=((void*) (&(_enc__fun_wrapper__encore_libs_master_Ped_util_Global_funsrot)))};


struct closure* _enc__closure__encore_libs_master_Ped_util_Global_funssleep = &(struct closure){.call=((void*) (&(_enc__fun_wrapper__encore_libs_master_Ped_util_Global_funssleep)))};


struct closure* _enc__closure__encore_libs_master_Ped_util_Global_funsrand = &(struct closure){.call=((void*) (&(_enc__fun_wrapper__encore_libs_master_Ped_util_Global_funsrand)))};


struct closure* _enc__closure__encore_libs_master_Ped_util_Global_funsstring_or_empty = &(struct closure){.call=((void*) (&(_enc__fun_wrapper__encore_libs_master_Ped_util_Global_funsstring_or_empty)))};


struct closure* _enc__closure__encore_libs_master_Ped_util_Global_funsint_or_0 = &(struct closure){.call=((void*) (&(_enc__fun_wrapper__encore_libs_master_Ped_util_Global_funsint_or_0)))};


struct closure* _enc__closure__encore_libs_master_Ped_util_Global_funsmin = &(struct closure){.call=((void*) (&(_enc__fun_wrapper__encore_libs_master_Ped_util_Global_funsmin)))};


struct closure* _enc__closure__encore_libs_master_Ped_util_Global_funsmax = &(struct closure){.call=((void*) (&(_enc__fun_wrapper__encore_libs_master_Ped_util_Global_funsmax)))};


struct closure* _enc__closure__encore_libs_master_Ped_util_Global_funsflatten = &(struct closure){.call=((void*) (&(_enc__fun_wrapper__encore_libs_master_Ped_util_Global_funsflatten)))};


struct closure* _enc__closure__encore_libs_master_Ped_util_Global_funscopy_tr = &(struct closure){.call=((void*) (&(_enc__fun_wrapper__encore_libs_master_Ped_util_Global_funscopy_tr)))};


struct closure* _enc__closure__encore_libs_master_Ped_util_Global_funscopy_ar = &(struct closure){.call=((void*) (&(_enc__fun_wrapper__encore_libs_master_Ped_util_Global_funscopy_ar)))};


struct closure* _enc__closure__encore_libs_master_Ped_util_Global_funsinside = &(struct closure){.call=((void*) (&(_enc__fun_wrapper__encore_libs_master_Ped_util_Global_funsinside)))};


struct closure* _enc__closure__encore_libs_master_Ped_util_Global_funsmk_Future = &(struct closure){.call=((void*) (&(_enc__fun_wrapper__encore_libs_master_Ped_util_Global_funsmk_Future)))};


struct closure* _enc__closure__encore_libs_master_Ped_util_Global_funsprinttime = &(struct closure){.call=((void*) (&(_enc__fun_wrapper__encore_libs_master_Ped_util_Global_funsprinttime)))};


struct closure* _enc__closure__encore_libs_master_Ped_util_Global_funsclock = &(struct closure){.call=((void*) (&(_enc__fun_wrapper__encore_libs_master_Ped_util_Global_funsclock)))};


struct closure* _enc__closure__encore_libs_master_Ped_util_Global_funsextreme_check = &(struct closure){.call=((void*) (&(_enc__fun_wrapper__encore_libs_master_Ped_util_Global_funsextreme_check)))};


struct closure* _enc__closure__encore_libs_master_Ped_util_Global_funsfind_extreme = &(struct closure){.call=((void*) (&(_enc__fun_wrapper__encore_libs_master_Ped_util_Global_funsfind_extreme)))};


struct closure* _enc__closure__encore_libs_master_Ped_util_Global_funsinvSqrt = &(struct closure){.call=((void*) (&(_enc__fun_wrapper__encore_libs_master_Ped_util_Global_funsinvSqrt)))};


struct closure* _enc__closure__encore_libs_master_Ped_util_Regionslink = &(struct closure){.call=((void*) (&(_enc__fun_wrapper__encore_libs_master_Ped_util_Regionslink)))};


struct closure* _enc__closure__encore_libs_master_Ped_util_Regionsregions = &(struct closure){.call=((void*) (&(_enc__fun_wrapper__encore_libs_master_Ped_util_Regionsregions)))};


struct closure* _enc__closure__encore_libs_master_Ped_util_UIshow = &(struct closure){.call=((void*) (&(_enc__fun_wrapper__encore_libs_master_Ped_util_UIshow)))};


struct closure* _enc__closure__encore_libs_master_Ped_util_UImake_UI = &(struct closure){.call=((void*) (&(_enc__fun_wrapper__encore_libs_master_Ped_util_UImake_UI)))};


struct closure* _enc__closure_Stringstring_from_bool = &(struct closure){.call=((void*) (&(_enc__fun_wrapper_Stringstring_from_bool)))};


struct closure* _enc__closure_Stringstring_from_int = &(struct closure){.call=((void*) (&(_enc__fun_wrapper_Stringstring_from_int)))};


struct closure* _enc__closure_Stringstring_from_real = &(struct closure){.call=((void*) (&(_enc__fun_wrapper_Stringstring_from_real)))};


struct closure* _enc__closure_Stringstring_from_array = &(struct closure){.call=((void*) (&(_enc__fun_wrapper_Stringstring_from_array)))};


struct closure* _enc__closure_Stringstring_from_char = &(struct closure){.call=((void*) (&(_enc__fun_wrapper_Stringstring_from_char)))};


int main(int argc, char** argv)
{
  return encore_start(argc, argv, (&(_enc__active__main_Main_type)));
}
