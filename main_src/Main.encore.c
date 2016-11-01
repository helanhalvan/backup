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


struct _enc__active_Main_t
{
  encore_actor_t _enc__actor;
};


void _enc__type_init_Main(_enc__active_Main_t* this, ... )
{
  va_list params;
  va_start(params, this);
  va_end(params);
}


void _enc__trace_Main(pony_ctx_t* _ctx_arg, void* p)
{
  pony_ctx_t** _ctx = (&(_ctx_arg));
  _enc__active_Main_t* _this = p;
}


_enc__active_Main_t* _enc__constructor_Main(pony_ctx_t** _ctx)
{
  _enc__active_Main_t* this = ((_enc__active_Main_t*) encore_create((*_ctx), (&(_enc__active_Main_type))));
  return this;
}


void* _enc__method_Main__init(pony_ctx_t** _ctx, _enc__active_Main_t* _this)
{
  UNIT;
  return UNIT;
}


void* _enc__method_Main_main(pony_ctx_t** _ctx, _enc__active_Main_t* _this, array_t* _argv)
{
  /* let superbox = new Multi_box(this.parse_file("scenario.xml"))
    x_size = 0
    y_size = 0
in
  {match (get superbox.max(), get superbox.min()) with
     ((xmax, ymax), (xmin, ymin)) => {x_size = xmax - xmin;
                                      y_size = ymax - ymin}
   ;
   this!loop(superbox, 40000)} */;
  /* superbox = new Multi_box(this.parse_file("scenario.xml")) */;
  _enc__active_Multi_box_t* _new_0 = _enc__constructor_Multi_box(_ctx);
  check_receiver(_this, ".", "this", "parse_file", "\"main.enc\" (line 15, column 38)");
  _enc__passive_String_t* _new_2 = _enc__constructor_String(_ctx);
  char* _embed_3 = ({"scenario.xml";});
  _enc__type_init_String(_new_2);
  _enc__method_String__init(_ctx, _new_2, _embed_3);
  array_t* _sync_method_call_1 = _enc__method_Main_parse_file(_ctx, _this, _new_2);
  _enc__type_init_Multi_box(_new_0);
  _enc__method_Multi_box__init_one_way(_ctx, _new_0, _sync_method_call_1);
  _enc__active_Multi_box_t* _superbox_4 = _new_0;
  /* x_size = 0 */;
  int64_t _literal_5 = 0;
  int64_t _x_size_6 = _literal_5;
  /* y_size = 0 */;
  int64_t _literal_7 = 0;
  int64_t _y_size_8 = _literal_7;
  /* match (get superbox.max(), get superbox.min()) with
  ((xmax, ymax), (xmin, ymin)) => {x_size = xmax - xmin;
                                   y_size = ymax - ymin}
 */;
  tuple_t* _tuple_10 = tuple_mk(_ctx, 2);
  tuple_set_type(_tuple_10, 0, (&(tuple_type)));
  tuple_set_type(_tuple_10, 1, (&(tuple_type)));
  check_receiver(_superbox_4, ".", "superbox", "max", "\"main.enc\" (line 19, column 19)");
  future_t* _fut_11 = _enc__method_Multi_box_max_future(_ctx, _superbox_4);
  tuple_t* _tmp_12 = future_get_actor(_ctx, _fut_11).p;
  check_receiver(_superbox_4, ".", "superbox", "min", "\"main.enc\" (line 19, column 39)");
  future_t* _fut_13 = _enc__method_Multi_box_min_future(_ctx, _superbox_4);
  tuple_t* _tmp_14 = future_get_actor(_ctx, _fut_13).p;
  tuple_set(_tuple_10, 0, ((encore_arg_t) {.p = _tmp_12}));
  tuple_set(_tuple_10, 1, ((encore_arg_t) {.p = _tmp_14}));
  void* _match_9;
  int64_t _xmax_15;
  int64_t _ymax_16;
  int64_t _xmin_17;
  int64_t _ymin_18;
  if ((({int64_t _tupleCheck_21;
         _tupleCheck_21 = 1;
         tuple_t* _tupleAccess_22 = tuple_get(_tuple_10, 0).p;
         int64_t _tupleCheck_23;
         _tupleCheck_23 = 1;
         int64_t _tupleAccess_24 = tuple_get(_tupleAccess_22, 0).i;
         int64_t _varBinding_25;
         _xmax_15 = _tupleAccess_24;
         _varBinding_25 = 1;
         _tupleCheck_23 = (_tupleCheck_23 && _varBinding_25);
         int64_t _tupleAccess_26 = tuple_get(_tupleAccess_22, 1).i;
         int64_t _varBinding_27;
         _ymax_16 = _tupleAccess_26;
         _varBinding_27 = 1;
         _tupleCheck_23 = (_tupleCheck_23 && _varBinding_27);
         _tupleCheck_21 = (_tupleCheck_21 && _tupleCheck_23);
         tuple_t* _tupleAccess_28 = tuple_get(_tuple_10, 1).p;
         int64_t _tupleCheck_29;
         _tupleCheck_29 = 1;
         int64_t _tupleAccess_30 = tuple_get(_tupleAccess_28, 0).i;
         int64_t _varBinding_31;
         _xmin_17 = _tupleAccess_30;
         _varBinding_31 = 1;
         _tupleCheck_29 = (_tupleCheck_29 && _varBinding_31);
         int64_t _tupleAccess_32 = tuple_get(_tupleAccess_28, 1).i;
         int64_t _varBinding_33;
         _ymin_18 = _tupleAccess_32;
         _varBinding_33 = 1;
         _tupleCheck_29 = (_tupleCheck_29 && _varBinding_33);
         _tupleCheck_21 = (_tupleCheck_21 && _tupleCheck_29); _tupleCheck_21;}) && ({int64_t _literal_34 = 1/*True*/; _literal_34;})))
  {
    _match_9 = ((void*) ({/* x_size = xmax - xmin */;
                          int64_t _binop_19 = (({ _xmax_15;}) - ({ _xmin_17;}));
                          _x_size_6 = _binop_19;
                          /* y_size = ymax - ymin */;
                          int64_t _binop_20 = (({ _ymax_16;}) - ({ _ymin_18;}));
                          _y_size_8 = _binop_20; UNIT;}));
  }
  else
  {
    printf("*** Runtime error: No matching clause was found ***\n");
    exit(1);
  };
  /* this!loop(superbox, 40000) */;
  check_receiver(_this, " ! ", "this", "loop", "\"main.enc\" (line 28, column 12)");
  int64_t _literal_35 = 40000;
  _enc__method_Main_loop_one_way(_ctx, _this, _superbox_4, _literal_35);
  return UNIT;
}


void* _enc__method_Main_loop(pony_ctx_t** _ctx, _enc__active_Main_t* _this, _enc__active_Multi_box_t* _enc__arg_superbox, int64_t _enc__arg_tick)
{
  /* print("tick {}\n", tick) */;
  printf("tick %lli\n", _enc__arg_tick);
  /* if tick > 0 and get superbox.move() then
  this!loop(superbox, tick - 1) */;
  void* _ite_0;
  if (({int64_t _binop_5 = (({int64_t _binop_2 = (({ _enc__arg_tick;}) > ({int64_t _literal_1 = 0; _literal_1;})); _binop_2;}) && ({check_receiver(_enc__arg_superbox, ".", "superbox", "move", "\"main.enc\" (line 42, column 26)");
                                                                                                                                    future_t* _fut_3 = _enc__method_Multi_box_move_future(_ctx, _enc__arg_superbox);
                                                                                                                                    int64_t _tmp_4 = future_get_actor(_ctx, _fut_3).i; _tmp_4;})); _binop_5;}))
  {
    check_receiver(_this, " ! ", "this", "loop", "\"main.enc\" (line 42, column 52)");
    int64_t _binop_7 = (({ _enc__arg_tick;}) - ({int64_t _literal_6 = 1; _literal_6;}));
    _enc__method_Main_loop_one_way(_ctx, _this, _enc__arg_superbox, _binop_7);
    _ite_0 = ((void*) UNIT);
  }
  else
  {
    UNIT;
    _ite_0 = ((void*) UNIT);
  };
  return UNIT;
}


array_t* _enc__method_Main_parse_file(pony_ctx_t** _ctx, _enc__active_Main_t* _this, _enc__passive_String_t* _enc__arg_fname)
{
  /* let sen = new XML_lib() */;
  /* sen = new XML_lib() */;
  _enc__passive_XML_lib_t* _new_0 = _enc__constructor_XML_lib(_ctx);
  _enc__type_init_XML_lib(_new_0);
  _enc__method_XML_lib__init(_ctx, _new_0);
  _enc__passive_XML_lib_t* _sen_1 = _new_0;
  /* let file = new XML_node() */;
  /* file = new XML_node() */;
  _enc__passive_XML_node_t* _new_2 = _enc__constructor_XML_node(_ctx);
  _enc__type_init_XML_node(_new_2);
  _enc__method_XML_node__init(_ctx, _new_2);
  _enc__passive_XML_node_t* _file_3 = _new_2;
  /* match sen.file_to_xml("scenario.xml") with
  Just xml => {file = xml;
               print("\n\nWORKED!\n")}
  Nothing => print("\n\nBADXML!\n")
 */;
  check_receiver(_sen_1, ".", "sen", "file_to_xml", "\"main.enc\" (line 49, column 14)");
  _enc__passive_String_t* _new_6 = _enc__constructor_String(_ctx);
  char* _embed_7 = ({"scenario.xml";});
  _enc__type_init_String(_new_6);
  _enc__method_String__init(_ctx, _new_6, _embed_7);
  option_t* _sync_method_call_5 = _enc__method_XML_lib_file_to_xml(_ctx, _sen_1, _new_6);
  void* _match_4;
  _enc__passive_XML_node_t* _xml_8;
  if ((({int64_t _optionCheck_15;
         _optionCheck_15 = ((JUST == (*_sync_method_call_5).tag) && ({int64_t _varBinding_16;
                                                                      _enc__passive_XML_node_t* _optionVal_14 = (*_sync_method_call_5).val.p;
                                                                      _xml_8 = _optionVal_14;
                                                                      _varBinding_16 = 1; _varBinding_16;})); _optionCheck_15;}) && ({int64_t _literal_17 = 1/*True*/; _literal_17;})))
  {
    _match_4 = ((void*) ({/* file = xml */;
                          _file_3 = _xml_8;
                          /* print("\n\nWORKED!\n") */;
                          char* _literal_9 = "\n\nWORKED!\n";
                          printf("%s", _literal_9); UNIT;}));
  }
  else
  {
    if ((({int64_t _valueCheck_11;
           _valueCheck_11 = (({option_t* _option_12 = (&(DEFAULT_NOTHING)); _option_12;}) == _sync_method_call_5); _valueCheck_11;}) && ({int64_t _literal_13 = 1/*True*/; _literal_13;})))
    {
      _match_4 = ((void*) ({char* _literal_10 = "\n\nBADXML!\n";
                            printf("%s", _literal_10); UNIT;}));
    }
    else
    {
      printf("*** Runtime error: No matching clause was found ***\n");
      exit(1);
    };
  };
  /* let xml_way = file.children_named("waypoint") */;
  /* xml_way = file.children_named("waypoint") */;
  check_receiver(_file_3, ".", "file", "children_named", "\"main.enc\" (line 53, column 22)");
  _enc__passive_String_t* _new_19 = _enc__constructor_String(_ctx);
  char* _embed_20 = ({"waypoint";});
  _enc__type_init_String(_new_19);
  _enc__method_String__init(_ctx, _new_19, _embed_20);
  array_t* _sync_method_call_18 = _enc__method_XML_node_children_named(_ctx, _file_3, _new_19);
  array_t* _xml_way_21 = _sync_method_call_18;
  /* let waypoints = new [(int, int)](|xml_way|) */;
  /* waypoints = new [(int, int)](|xml_way|) */;
  int64_t _size_23 = array_size(_xml_way_21);
  array_t* _array_22 = array_mk(_ctx, _size_23, (&(tuple_type)));
  array_t* _waypoints_24 = _array_22;
  /* let i = 0 */;
  /* i = 0 */;
  int64_t _literal_25 = 0;
  int64_t _i_26 = _literal_25;
  /* for a in xml_way
  {waypoints[i] = match (a.attribute_value("x").to_int(), 
                         a.attribute_value("y").to_int()) with
                    (Just x, Just y) => (x, y)
                    _ => {print("BADINT!\n");
                          (0, 0)}
                  ;
   i = i + 1} */;
  void* _for_27;
  int64_t _start_30 = 0;
  int64_t _stop_31 = (array_size(_xml_way_21) - 1);
  int64_t _src_step_33 = 1;
  int64_t _literal_34 = 1;
  int64_t _step_32 = (_literal_34 * _src_step_33);
  range_assert_step(_step_32);
  int64_t _index_28;
  if ((_step_32 > 0))
  {
    _index_28 = _start_30;
  }
  else
  {
    _index_28 = _stop_31;
  };
  while (((_index_28 >= _start_30) && (_index_28 <= _stop_31)))
  {
    _enc__passive_XML_node_t* _a_29 = array_get(_xml_way_21, _index_28).p;
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
    tuple_t* _tuple_36 = tuple_mk(_ctx, 2);
    tuple_set_type(_tuple_36, 0, (&(option_type)));
    tuple_set_type(_tuple_36, 1, (&(option_type)));
    check_receiver(_a_29, ".", "a", "attribute_value", "\"main.enc\" (line 58, column 19)");
    _enc__passive_String_t* _new_39 = _enc__constructor_String(_ctx);
    char* _embed_40 = ({"x";});
    _enc__type_init_String(_new_39);
    _enc__method_String__init(_ctx, _new_39, _embed_40);
    _enc__passive_String_t* _sync_method_call_38 = _enc__method_XML_node_attribute_value(_ctx, _a_29, _new_39);
    check_receiver(_sync_method_call_38, ".", "a.attribute_value(new String(embed char* \"x\"; end))", "to_int", "\"main.enc\" (line 58, column 19)");
    option_t* _sync_method_call_37 = _enc__method_String_to_int(_ctx, _sync_method_call_38);
    check_receiver(_a_29, ".", "a", "attribute_value", "\"main.enc\" (line 58, column 51)");
    _enc__passive_String_t* _new_43 = _enc__constructor_String(_ctx);
    char* _embed_44 = ({"y";});
    _enc__type_init_String(_new_43);
    _enc__method_String__init(_ctx, _new_43, _embed_44);
    _enc__passive_String_t* _sync_method_call_42 = _enc__method_XML_node_attribute_value(_ctx, _a_29, _new_43);
    check_receiver(_sync_method_call_42, ".", "a.attribute_value(new String(embed char* \"y\"; end))", "to_int", "\"main.enc\" (line 58, column 51)");
    option_t* _sync_method_call_41 = _enc__method_String_to_int(_ctx, _sync_method_call_42);
    tuple_set(_tuple_36, 0, ((encore_arg_t) {.p = _sync_method_call_37}));
    tuple_set(_tuple_36, 1, ((encore_arg_t) {.p = _sync_method_call_41}));
    tuple_t* _match_35;
    int64_t _x_45;
    int64_t _y_46;
    if ((({int64_t _tupleCheck_55;
           _tupleCheck_55 = 1;
           option_t* _tupleAccess_56 = tuple_get(_tuple_36, 0).p;
           int64_t _optionCheck_58;
           _optionCheck_58 = ((JUST == (*_tupleAccess_56).tag) && ({int64_t _varBinding_59;
                                                                    int64_t _optionVal_57 = (*_tupleAccess_56).val.i;
                                                                    _x_45 = _optionVal_57;
                                                                    _varBinding_59 = 1; _varBinding_59;}));
           _tupleCheck_55 = (_tupleCheck_55 && _optionCheck_58);
           option_t* _tupleAccess_60 = tuple_get(_tuple_36, 1).p;
           int64_t _optionCheck_62;
           _optionCheck_62 = ((JUST == (*_tupleAccess_60).tag) && ({int64_t _varBinding_63;
                                                                    int64_t _optionVal_61 = (*_tupleAccess_60).val.i;
                                                                    _y_46 = _optionVal_61;
                                                                    _varBinding_63 = 1; _varBinding_63;}));
           _tupleCheck_55 = (_tupleCheck_55 && _optionCheck_62); _tupleCheck_55;}) && ({int64_t _literal_64 = 1/*True*/; _literal_64;})))
    {
      _match_35 = ((tuple_t*) ({tuple_t* _tuple_47 = tuple_mk(_ctx, 2);
                                tuple_set_type(_tuple_47, 0, ENCORE_PRIMITIVE);
                                tuple_set_type(_tuple_47, 1, ENCORE_PRIMITIVE);
                                tuple_set(_tuple_47, 0, ((encore_arg_t) {.i = _x_45}));
                                tuple_set(_tuple_47, 1, ((encore_arg_t) {.i = _y_46})); _tuple_47;}));
    }
    else
    {
      tuple_t* ___48;
      if ((({int64_t _varBinding_53;
             ___48 = _tuple_36;
             _varBinding_53 = 1; _varBinding_53;}) && ({int64_t _literal_54 = 1/*True*/; _literal_54;})))
      {
        _match_35 = ((tuple_t*) ({/* print("BADINT!\n") */;
                                  char* _literal_49 = "BADINT!\n";
                                  printf("%s", _literal_49);
                                  /* (0, 0) */;
                                  tuple_t* _tuple_50 = tuple_mk(_ctx, 2);
                                  tuple_set_type(_tuple_50, 0, ENCORE_PRIMITIVE);
                                  tuple_set_type(_tuple_50, 1, ENCORE_PRIMITIVE);
                                  int64_t _literal_51 = 0;
                                  int64_t _literal_52 = 0;
                                  tuple_set(_tuple_50, 0, ((encore_arg_t) {.i = _literal_51}));
                                  tuple_set(_tuple_50, 1, ((encore_arg_t) {.i = _literal_52})); _tuple_50;}));
      }
      else
      {
        printf("*** Runtime error: No matching clause was found ***\n");
        exit(1);
      };
    };
    array_set(_waypoints_24, _i_26, ((encore_arg_t) {.p = _match_35}));
    /* i = i + 1 */;
    int64_t _binop_66 = (({ _i_26;}) + ({int64_t _literal_65 = 1; _literal_65;}));
    _i_26 = _binop_66;
    _for_27 = UNIT;
    _index_28 = (_index_28 + _step_32);
  };
  /* let nr_agents = 0 */;
  /* nr_agents = 0 */;
  int64_t _literal_67 = 0;
  int64_t _nr_agents_68 = _literal_67;
  /* for a in file.children_named("agent")
  nr_agents = nr_agents + match a.attribute_value("n").to_int() with
                            Just nr => nr
                            _ => {print("BADINT2!\n");
                                  0}
                           */;
  void* _for_69;
  check_receiver(_file_3, ".", "file", "children_named", "\"main.enc\" (line 66, column 17)");
  _enc__passive_String_t* _new_77 = _enc__constructor_String(_ctx);
  char* _embed_78 = ({"agent";});
  _enc__type_init_String(_new_77);
  _enc__method_String__init(_ctx, _new_77, _embed_78);
  array_t* _sync_method_call_76 = _enc__method_XML_node_children_named(_ctx, _file_3, _new_77);
  int64_t _start_72 = 0;
  int64_t _stop_73 = (array_size(_sync_method_call_76) - 1);
  int64_t _src_step_75 = 1;
  int64_t _literal_79 = 1;
  int64_t _step_74 = (_literal_79 * _src_step_75);
  range_assert_step(_step_74);
  int64_t _index_70;
  if ((_step_74 > 0))
  {
    _index_70 = _start_72;
  }
  else
  {
    _index_70 = _stop_73;
  };
  while (((_index_70 >= _start_72) && (_index_70 <= _stop_73)))
  {
    _enc__passive_XML_node_t* _a_71 = array_get(_sync_method_call_76, _index_70).p;
    /* nr_agents = nr_agents + match a.attribute_value("n").to_int() with
                          Just nr => nr
                          _ => {print("BADINT2!\n");
                                0}
                         */;
    int64_t _binop_95 = (({ _nr_agents_68;}) + ({/* match a.attribute_value("n").to_int() with
  Just nr => nr
  _ => {print("BADINT2!\n");
        0}
 */;
                                                 check_receiver(_a_71, ".", "a", "attribute_value", "\"main.enc\" (line 68, column 23)");
                                                 _enc__passive_String_t* _new_83 = _enc__constructor_String(_ctx);
                                                 char* _embed_84 = ({"n";});
                                                 _enc__type_init_String(_new_83);
                                                 _enc__method_String__init(_ctx, _new_83, _embed_84);
                                                 _enc__passive_String_t* _sync_method_call_82 = _enc__method_XML_node_attribute_value(_ctx, _a_71, _new_83);
                                                 check_receiver(_sync_method_call_82, ".", "a.attribute_value(new String(embed char* \"n\"; end))", "to_int", "\"main.enc\" (line 68, column 23)");
                                                 option_t* _sync_method_call_81 = _enc__method_String_to_int(_ctx, _sync_method_call_82);
                                                 int64_t _match_80;
                                                 int64_t _nr_85;
                                                 if ((({int64_t _optionCheck_92;
                                                        _optionCheck_92 = ((JUST == (*_sync_method_call_81).tag) && ({int64_t _varBinding_93;
                                                                                                                      int64_t _optionVal_91 = (*_sync_method_call_81).val.i;
                                                                                                                      _nr_85 = _optionVal_91;
                                                                                                                      _varBinding_93 = 1; _varBinding_93;})); _optionCheck_92;}) && ({int64_t _literal_94 = 1/*True*/; _literal_94;})))
                                                 {
                                                   _match_80 = ((int64_t) ({ _nr_85;}));
                                                 }
                                                 else
                                                 {
                                                   option_t* ___86;
                                                   if ((({int64_t _varBinding_89;
                                                          ___86 = _sync_method_call_81;
                                                          _varBinding_89 = 1; _varBinding_89;}) && ({int64_t _literal_90 = 1/*True*/; _literal_90;})))
                                                   {
                                                     _match_80 = ((int64_t) ({/* print("BADINT2!\n") */;
                                                                              char* _literal_87 = "BADINT2!\n";
                                                                              printf("%s", _literal_87);
                                                                              /* 0 */;
                                                                              int64_t _literal_88 = 0; _literal_88;}));
                                                   }
                                                   else
                                                   {
                                                     printf("*** Runtime error: No matching clause was found ***\n");
                                                     exit(1);
                                                   };
                                                 }; _match_80;}));
    _nr_agents_68 = _binop_95;
    _for_69 = UNIT;
    _index_70 = (_index_70 + _step_74);
  };
  /* let agents = new [Agent](nr_agents) */;
  /* agents = new [Agent](nr_agents) */;
  array_t* _array_96 = array_mk(_ctx, _nr_agents_68, (&(_enc__passive_Agent_type)));
  array_t* _agents_97 = _array_96;
  /* let i = 0 */;
  /* i = 0 */;
  int64_t _literal_98 = 0;
  int64_t _i_99 = _literal_98;
  /* for a in file.children_named("agent")
  let max = int_or_0(a.attribute_value("n").to_int())
      x = int_or_0(a.attribute_value("x").to_int())
      y = int_or_0(a.attribute_value("y").to_int())
      dx_max = int_or_0(a.attribute_value("dx").to_int())
      dy_max = int_or_0(a.attribute_value("dy").to_int())
      agent_waypoints = new [(int, int)](|a.children_named("addway")|)
      dx = 0
      dy = 0
      j = 0
  in
    {for b in a.children_named("addway")
       {agent_waypoints[j] = waypoints[int_or_0(string_or_empty(b.attribute_value("id").substring(1, 
                                                                                                  2)).to_int()) - 1];
        unless |agent_waypoints| > 1 then
          {print("THIS SHOULD NEVER HAPPEN |new_agent.waypoint|={}\n", 
                 |agent_waypoints|);
           max = 1 / 0};
        j = j + 1};
     for derp in [ 0 , max by 1 ]
       {match derp % 4 with
          0 => {agents[i] = new Agent((x + dx, y + dy), 
                                      copy_tr(agent_waypoints), 
                                      i);
                if dx == 0 then
                  {dx = dy + 1;
                   dy = 0}
                else
                  {dx = dx - 1;
                   dy = dy + 1}}
          1 => agents[i] = new Agent((x + dx, y - dy), 
                                     copy_tr(agent_waypoints), 
                                     i)
          2 => agents[i] = new Agent((x - dx, y + dy), 
                                     copy_tr(agent_waypoints), 
                                     i)
          3 => agents[i] = new Agent((x - dx, y - dy), 
                                     copy_tr(agent_waypoints), 
                                     i)
        ;
        i = i + 1}} */;
  void* _for_100;
  check_receiver(_file_3, ".", "file", "children_named", "\"main.enc\" (line 76, column 17)");
  _enc__passive_String_t* _new_108 = _enc__constructor_String(_ctx);
  char* _embed_109 = ({"agent";});
  _enc__type_init_String(_new_108);
  _enc__method_String__init(_ctx, _new_108, _embed_109);
  array_t* _sync_method_call_107 = _enc__method_XML_node_children_named(_ctx, _file_3, _new_108);
  int64_t _start_103 = 0;
  int64_t _stop_104 = (array_size(_sync_method_call_107) - 1);
  int64_t _src_step_106 = 1;
  int64_t _literal_110 = 1;
  int64_t _step_105 = (_literal_110 * _src_step_106);
  range_assert_step(_step_105);
  int64_t _index_101;
  if ((_step_105 > 0))
  {
    _index_101 = _start_103;
  }
  else
  {
    _index_101 = _stop_104;
  };
  while (((_index_101 >= _start_103) && (_index_101 <= _stop_104)))
  {
    _enc__passive_XML_node_t* _a_102 = array_get(_sync_method_call_107, _index_101).p;
    /* let max = int_or_0(a.attribute_value("n").to_int())
    x = int_or_0(a.attribute_value("x").to_int())
    y = int_or_0(a.attribute_value("y").to_int())
    dx_max = int_or_0(a.attribute_value("dx").to_int())
    dy_max = int_or_0(a.attribute_value("dy").to_int())
    agent_waypoints = new [(int, int)](|a.children_named("addway")|)
    dx = 0
    dy = 0
    j = 0
in
  {for b in a.children_named("addway")
     {agent_waypoints[j] = waypoints[int_or_0(string_or_empty(b.attribute_value("id").substring(1, 
                                                                                                2)).to_int()) - 1];
      unless |agent_waypoints| > 1 then
        {print("THIS SHOULD NEVER HAPPEN |new_agent.waypoint|={}\n", 
               |agent_waypoints|);
         max = 1 / 0};
      j = j + 1};
   for derp in [ 0 , max by 1 ]
     {match derp % 4 with
        0 => {agents[i] = new Agent((x + dx, y + dy), 
                                    copy_tr(agent_waypoints), 
                                    i);
              if dx == 0 then
                {dx = dy + 1;
                 dy = 0}
              else
                {dx = dx - 1;
                 dy = dy + 1}}
        1 => agents[i] = new Agent((x + dx, y - dy), 
                                   copy_tr(agent_waypoints), 
                                   i)
        2 => agents[i] = new Agent((x - dx, y + dy), 
                                   copy_tr(agent_waypoints), 
                                   i)
        3 => agents[i] = new Agent((x - dx, y - dy), 
                                   copy_tr(agent_waypoints), 
                                   i)
      ;
      i = i + 1}} */;
    /* max = int_or_0(a.attribute_value("n").to_int()) */;
    check_receiver(_a_102, ".", "a", "attribute_value", "\"main.enc\" (line 78, column 32)");
    _enc__passive_String_t* _new_113 = _enc__constructor_String(_ctx);
    char* _embed_114 = ({"n";});
    _enc__type_init_String(_new_113);
    _enc__method_String__init(_ctx, _new_113, _embed_114);
    _enc__passive_String_t* _sync_method_call_112 = _enc__method_XML_node_attribute_value(_ctx, _a_102, _new_113);
    check_receiver(_sync_method_call_112, ".", "a.attribute_value(new String(embed char* \"n\"; end))", "to_int", "\"main.enc\" (line 78, column 32)");
    option_t* _sync_method_call_111 = _enc__method_String_to_int(_ctx, _sync_method_call_112);
    pony_type_t* _tmp_115[] = {};
    int64_t _global_f_116 = _enc__global_fun_int_or_0(_ctx, NULL, _sync_method_call_111);
    int64_t _max_117 = _global_f_116;
    /* x = int_or_0(a.attribute_value("x").to_int()) */;
    check_receiver(_a_102, ".", "a", "attribute_value", "\"main.enc\" (line 79, column 30)");
    _enc__passive_String_t* _new_120 = _enc__constructor_String(_ctx);
    char* _embed_121 = ({"x";});
    _enc__type_init_String(_new_120);
    _enc__method_String__init(_ctx, _new_120, _embed_121);
    _enc__passive_String_t* _sync_method_call_119 = _enc__method_XML_node_attribute_value(_ctx, _a_102, _new_120);
    check_receiver(_sync_method_call_119, ".", "a.attribute_value(new String(embed char* \"x\"; end))", "to_int", "\"main.enc\" (line 79, column 30)");
    option_t* _sync_method_call_118 = _enc__method_String_to_int(_ctx, _sync_method_call_119);
    pony_type_t* _tmp_122[] = {};
    int64_t _global_f_123 = _enc__global_fun_int_or_0(_ctx, NULL, _sync_method_call_118);
    int64_t _x_124 = _global_f_123;
    /* y = int_or_0(a.attribute_value("y").to_int()) */;
    check_receiver(_a_102, ".", "a", "attribute_value", "\"main.enc\" (line 80, column 30)");
    _enc__passive_String_t* _new_127 = _enc__constructor_String(_ctx);
    char* _embed_128 = ({"y";});
    _enc__type_init_String(_new_127);
    _enc__method_String__init(_ctx, _new_127, _embed_128);
    _enc__passive_String_t* _sync_method_call_126 = _enc__method_XML_node_attribute_value(_ctx, _a_102, _new_127);
    check_receiver(_sync_method_call_126, ".", "a.attribute_value(new String(embed char* \"y\"; end))", "to_int", "\"main.enc\" (line 80, column 30)");
    option_t* _sync_method_call_125 = _enc__method_String_to_int(_ctx, _sync_method_call_126);
    pony_type_t* _tmp_129[] = {};
    int64_t _global_f_130 = _enc__global_fun_int_or_0(_ctx, NULL, _sync_method_call_125);
    int64_t _y_131 = _global_f_130;
    /* dx_max = int_or_0(a.attribute_value("dx").to_int()) */;
    check_receiver(_a_102, ".", "a", "attribute_value", "\"main.enc\" (line 81, column 35)");
    _enc__passive_String_t* _new_134 = _enc__constructor_String(_ctx);
    char* _embed_135 = ({"dx";});
    _enc__type_init_String(_new_134);
    _enc__method_String__init(_ctx, _new_134, _embed_135);
    _enc__passive_String_t* _sync_method_call_133 = _enc__method_XML_node_attribute_value(_ctx, _a_102, _new_134);
    check_receiver(_sync_method_call_133, ".", "a.attribute_value(new String(embed char* \"dx\"; end))", "to_int", "\"main.enc\" (line 81, column 35)");
    option_t* _sync_method_call_132 = _enc__method_String_to_int(_ctx, _sync_method_call_133);
    pony_type_t* _tmp_136[] = {};
    int64_t _global_f_137 = _enc__global_fun_int_or_0(_ctx, NULL, _sync_method_call_132);
    int64_t _dx_max_138 = _global_f_137;
    /* dy_max = int_or_0(a.attribute_value("dy").to_int()) */;
    check_receiver(_a_102, ".", "a", "attribute_value", "\"main.enc\" (line 82, column 35)");
    _enc__passive_String_t* _new_141 = _enc__constructor_String(_ctx);
    char* _embed_142 = ({"dy";});
    _enc__type_init_String(_new_141);
    _enc__method_String__init(_ctx, _new_141, _embed_142);
    _enc__passive_String_t* _sync_method_call_140 = _enc__method_XML_node_attribute_value(_ctx, _a_102, _new_141);
    check_receiver(_sync_method_call_140, ".", "a.attribute_value(new String(embed char* \"dy\"; end))", "to_int", "\"main.enc\" (line 82, column 35)");
    option_t* _sync_method_call_139 = _enc__method_String_to_int(_ctx, _sync_method_call_140);
    pony_type_t* _tmp_143[] = {};
    int64_t _global_f_144 = _enc__global_fun_int_or_0(_ctx, NULL, _sync_method_call_139);
    int64_t _dy_max_145 = _global_f_144;
    /* agent_waypoints = new [(int, int)](|a.children_named("addway")|) */;
    check_receiver(_a_102, ".", "a", "children_named", "\"main.enc\" (line 83, column 50)");
    _enc__passive_String_t* _new_148 = _enc__constructor_String(_ctx);
    char* _embed_149 = ({"addway";});
    _enc__type_init_String(_new_148);
    _enc__method_String__init(_ctx, _new_148, _embed_149);
    array_t* _sync_method_call_147 = _enc__method_XML_node_children_named(_ctx, _a_102, _new_148);
    int64_t _size_150 = array_size(_sync_method_call_147);
    array_t* _array_146 = array_mk(_ctx, _size_150, (&(tuple_type)));
    array_t* _agent_waypoints_151 = _array_146;
    /* dx = 0 */;
    int64_t _literal_152 = 0;
    int64_t _dx_153 = _literal_152;
    /* dy = 0 */;
    int64_t _literal_154 = 0;
    int64_t _dy_155 = _literal_154;
    /* j = 0 */;
    int64_t _literal_156 = 0;
    int64_t _j_157 = _literal_156;
    /* for b in a.children_named("addway")
  {agent_waypoints[j] = waypoints[int_or_0(string_or_empty(b.attribute_value("id").substring(1, 
                                                                                             2)).to_int()) - 1];
   unless |agent_waypoints| > 1 then
     {print("THIS SHOULD NEVER HAPPEN |new_agent.waypoint|={}\n", 
            |agent_waypoints|);
      max = 1 / 0};
   j = j + 1} */;
    void* _for_158;
    check_receiver(_a_102, ".", "a", "children_named", "\"main.enc\" (line 88, column 22)");
    _enc__passive_String_t* _new_166 = _enc__constructor_String(_ctx);
    char* _embed_167 = ({"addway";});
    _enc__type_init_String(_new_166);
    _enc__method_String__init(_ctx, _new_166, _embed_167);
    array_t* _sync_method_call_165 = _enc__method_XML_node_children_named(_ctx, _a_102, _new_166);
    int64_t _start_161 = 0;
    int64_t _stop_162 = (array_size(_sync_method_call_165) - 1);
    int64_t _src_step_164 = 1;
    int64_t _literal_168 = 1;
    int64_t _step_163 = (_literal_168 * _src_step_164);
    range_assert_step(_step_163);
    int64_t _index_159;
    if ((_step_163 > 0))
    {
      _index_159 = _start_161;
    }
    else
    {
      _index_159 = _stop_162;
    };
    while (((_index_159 >= _start_161) && (_index_159 <= _stop_162)))
    {
      _enc__passive_XML_node_t* _b_160 = array_get(_sync_method_call_165, _index_159).p;
      /* agent_waypoints[j] = waypoints[int_or_0(string_or_empty(b.attribute_value("id").substring(1, 
                                                                                          2)).to_int()) - 1] */;
      int64_t _binop_181 = (({check_receiver(_b_160, ".", "b", "attribute_value", "\"main.enc\" (line 89, column 71)");
                              _enc__passive_String_t* _new_172 = _enc__constructor_String(_ctx);
                              char* _embed_173 = ({"id";});
                              _enc__type_init_String(_new_172);
                              _enc__method_String__init(_ctx, _new_172, _embed_173);
                              _enc__passive_String_t* _sync_method_call_171 = _enc__method_XML_node_attribute_value(_ctx, _b_160, _new_172);
                              check_receiver(_sync_method_call_171, ".", "b.attribute_value(new String(embed char* \"id\"; end))", "substring", "\"main.enc\" (line 89, column 71)");
                              int64_t _literal_174 = 1;
                              int64_t _literal_175 = 2;
                              option_t* _sync_method_call_170 = _enc__method_String_substring(_ctx, _sync_method_call_171, _literal_174, _literal_175);
                              pony_type_t* _tmp_176[] = {};
                              _enc__passive_String_t* _global_f_177 = _enc__global_fun_string_or_empty(_ctx, NULL, _sync_method_call_170);
                              check_receiver(_global_f_177, ".", "string_or_empty(b.attribute_value(new String(embed char* \"id\"; end)).substring(1, \n                                                                               2))", "to_int", "\"main.enc\" (line 89, column 55)");
                              option_t* _sync_method_call_169 = _enc__method_String_to_int(_ctx, _global_f_177);
                              pony_type_t* _tmp_178[] = {};
                              int64_t _global_f_179 = _enc__global_fun_int_or_0(_ctx, NULL, _sync_method_call_169); _global_f_179;}) - ({int64_t _literal_180 = 1; _literal_180;}));
      tuple_t* _access_182 = array_get(_waypoints_24, _binop_181).p;
      array_set(_agent_waypoints_151, _j_157, ((encore_arg_t) {.p = _access_182}));
      /* unless |agent_waypoints| > 1 then
  {print("THIS SHOULD NEVER HAPPEN |new_agent.waypoint|={}\n", 
         |agent_waypoints|);
   max = 1 / 0} */;
      void* _ite_183;
      if (({int64_t _binop_186 = (({int64_t _size_184 = array_size(_agent_waypoints_151); _size_184;}) > ({int64_t _literal_185 = 1; _literal_185;}));
            int64_t _unary_187 = (! _binop_186); _unary_187;}))
      {
        /* print("THIS SHOULD NEVER HAPPEN |new_agent.waypoint|={}\n", 
      |agent_waypoints|) */;
        int64_t _size_188 = array_size(_agent_waypoints_151);
        printf("THIS SHOULD NEVER HAPPEN |new_agent.waypoint|=%lli\n", _size_188);
        /* max = 1 / 0 */;
        int64_t _binop_191 = (({int64_t _literal_189 = 1; _literal_189;}) / ({int64_t _literal_190 = 0; _literal_190;}));
        _max_117 = _binop_191;
        _ite_183 = ((void*) UNIT);
      }
      else
      {
        UNIT;
        _ite_183 = ((void*) UNIT);
      };
      /* j = j + 1 */;
      int64_t _binop_193 = (({ _j_157;}) + ({int64_t _literal_192 = 1; _literal_192;}));
      _j_157 = _binop_193;
      _for_158 = UNIT;
      _index_159 = (_index_159 + _step_163);
    };
    /* for derp in [ 0 , max by 1 ]
  {match derp % 4 with
     0 => {agents[i] = new Agent((x + dx, y + dy), 
                                 copy_tr(agent_waypoints), 
                                 i);
           if dx == 0 then
             {dx = dy + 1;
              dy = 0}
           else
             {dx = dx - 1;
              dy = dy + 1}}
     1 => agents[i] = new Agent((x + dx, y - dy), 
                                copy_tr(agent_waypoints), 
                                i)
     2 => agents[i] = new Agent((x - dx, y + dy), 
                                copy_tr(agent_waypoints), 
                                i)
     3 => agents[i] = new Agent((x - dx, y - dy), 
                                copy_tr(agent_waypoints), 
                                i)
   ;
   i = i + 1} */;
    void* _for_194;
    /* Range not generated */;
    int64_t _literal_201 = 0;
    int64_t _literal_202 = 1;
    int64_t _literal_203 = 1;
    int64_t _step_199 = (_literal_203 * _literal_202);
    range_assert_step(_step_199);
    int64_t _index_195;
    if ((_step_199 > 0))
    {
      _index_195 = _literal_201;
    }
    else
    {
      _index_195 = _max_117;
    };
    while (((_index_195 >= _literal_201) && (_index_195 <= _max_117)))
    {
      int64_t _derp_196 = _index_195;
      /* match derp % 4 with
  0 => {agents[i] = new Agent((x + dx, y + dy), 
                              copy_tr(agent_waypoints), 
                              i);
        if dx == 0 then
          {dx = dy + 1;
           dy = 0}
        else
          {dx = dx - 1;
           dy = dy + 1}}
  1 => agents[i] = new Agent((x + dx, y - dy), 
                             copy_tr(agent_waypoints), 
                             i)
  2 => agents[i] = new Agent((x - dx, y + dy), 
                             copy_tr(agent_waypoints), 
                             i)
  3 => agents[i] = new Agent((x - dx, y - dy), 
                             copy_tr(agent_waypoints), 
                             i)
 */;
      int64_t _binop_206 = (({ _derp_196;}) % ({int64_t _literal_205 = 4; _literal_205;}));
      void* _match_204;
      if ((({int64_t _valueCheck_250;
             _valueCheck_250 = (({int64_t _literal_251 = 0; _literal_251;}) == _binop_206); _valueCheck_250;}) && ({int64_t _literal_252 = 1/*True*/; _literal_252;})))
      {
        _match_204 = ((void*) ({/* agents[i] = new Agent((x + dx, y + dy), 
                      copy_tr(agent_waypoints), 
                      i) */;
                                _enc__passive_Agent_t* _new_207 = _enc__constructor_Agent(_ctx);
                                tuple_t* _tuple_208 = tuple_mk(_ctx, 2);
                                tuple_set_type(_tuple_208, 0, ENCORE_PRIMITIVE);
                                tuple_set_type(_tuple_208, 1, ENCORE_PRIMITIVE);
                                int64_t _binop_209 = (({ _x_124;}) + ({ _dx_153;}));
                                int64_t _binop_210 = (({ _y_131;}) + ({ _dy_155;}));
                                tuple_set(_tuple_208, 0, ((encore_arg_t) {.i = _binop_209}));
                                tuple_set(_tuple_208, 1, ((encore_arg_t) {.i = _binop_210}));
                                pony_type_t* _tmp_211[] = {};
                                array_t* _global_f_212 = _enc__global_fun_copy_tr(_ctx, NULL, _agent_waypoints_151);
                                _enc__type_init_Agent(_new_207);
                                _enc__method_Agent__init(_ctx, _new_207, _tuple_208, _global_f_212, _i_99);
                                array_set(_agents_97, _i_99, ((encore_arg_t) {.p = _new_207}));
                                /* if dx == 0 then
  {dx = dy + 1;
   dy = 0}
else
  {dx = dx - 1;
   dy = dy + 1} */;
                                void* _ite_213;
                                if (({int64_t _binop_215 = (({ _dx_153;}) == ({int64_t _literal_214 = 0; _literal_214;})); _binop_215;}))
                                {
                                  /* dx = dy + 1 */;
                                  int64_t _binop_217 = (({ _dy_155;}) + ({int64_t _literal_216 = 1; _literal_216;}));
                                  _dx_153 = _binop_217;
                                  /* dy = 0 */;
                                  int64_t _literal_218 = 0;
                                  _dy_155 = _literal_218;
                                  _ite_213 = ((void*) UNIT);
                                }
                                else
                                {
                                  /* dx = dx - 1 */;
                                  int64_t _binop_220 = (({ _dx_153;}) - ({int64_t _literal_219 = 1; _literal_219;}));
                                  _dx_153 = _binop_220;
                                  /* dy = dy + 1 */;
                                  int64_t _binop_222 = (({ _dy_155;}) + ({int64_t _literal_221 = 1; _literal_221;}));
                                  _dy_155 = _binop_222;
                                  _ite_213 = ((void*) UNIT);
                                }; _ite_213;}));
      }
      else
      {
        if ((({int64_t _valueCheck_247;
               _valueCheck_247 = (({int64_t _literal_248 = 1; _literal_248;}) == _binop_206); _valueCheck_247;}) && ({int64_t _literal_249 = 1/*True*/; _literal_249;})))
        {
          _match_204 = ((void*) ({/* agents[i] = new Agent((x + dx, y - dy), 
                      copy_tr(agent_waypoints), 
                      i) */;
                                  _enc__passive_Agent_t* _new_223 = _enc__constructor_Agent(_ctx);
                                  tuple_t* _tuple_224 = tuple_mk(_ctx, 2);
                                  tuple_set_type(_tuple_224, 0, ENCORE_PRIMITIVE);
                                  tuple_set_type(_tuple_224, 1, ENCORE_PRIMITIVE);
                                  int64_t _binop_225 = (({ _x_124;}) + ({ _dx_153;}));
                                  int64_t _binop_226 = (({ _y_131;}) - ({ _dy_155;}));
                                  tuple_set(_tuple_224, 0, ((encore_arg_t) {.i = _binop_225}));
                                  tuple_set(_tuple_224, 1, ((encore_arg_t) {.i = _binop_226}));
                                  pony_type_t* _tmp_227[] = {};
                                  array_t* _global_f_228 = _enc__global_fun_copy_tr(_ctx, NULL, _agent_waypoints_151);
                                  _enc__type_init_Agent(_new_223);
                                  _enc__method_Agent__init(_ctx, _new_223, _tuple_224, _global_f_228, _i_99);
                                  array_set(_agents_97, _i_99, ((encore_arg_t) {.p = _new_223})); UNIT;}));
        }
        else
        {
          if ((({int64_t _valueCheck_244;
                 _valueCheck_244 = (({int64_t _literal_245 = 2; _literal_245;}) == _binop_206); _valueCheck_244;}) && ({int64_t _literal_246 = 1/*True*/; _literal_246;})))
          {
            _match_204 = ((void*) ({/* agents[i] = new Agent((x - dx, y + dy), 
                      copy_tr(agent_waypoints), 
                      i) */;
                                    _enc__passive_Agent_t* _new_229 = _enc__constructor_Agent(_ctx);
                                    tuple_t* _tuple_230 = tuple_mk(_ctx, 2);
                                    tuple_set_type(_tuple_230, 0, ENCORE_PRIMITIVE);
                                    tuple_set_type(_tuple_230, 1, ENCORE_PRIMITIVE);
                                    int64_t _binop_231 = (({ _x_124;}) - ({ _dx_153;}));
                                    int64_t _binop_232 = (({ _y_131;}) + ({ _dy_155;}));
                                    tuple_set(_tuple_230, 0, ((encore_arg_t) {.i = _binop_231}));
                                    tuple_set(_tuple_230, 1, ((encore_arg_t) {.i = _binop_232}));
                                    pony_type_t* _tmp_233[] = {};
                                    array_t* _global_f_234 = _enc__global_fun_copy_tr(_ctx, NULL, _agent_waypoints_151);
                                    _enc__type_init_Agent(_new_229);
                                    _enc__method_Agent__init(_ctx, _new_229, _tuple_230, _global_f_234, _i_99);
                                    array_set(_agents_97, _i_99, ((encore_arg_t) {.p = _new_229})); UNIT;}));
          }
          else
          {
            if ((({int64_t _valueCheck_241;
                   _valueCheck_241 = (({int64_t _literal_242 = 3; _literal_242;}) == _binop_206); _valueCheck_241;}) && ({int64_t _literal_243 = 1/*True*/; _literal_243;})))
            {
              _match_204 = ((void*) ({/* agents[i] = new Agent((x - dx, y - dy), 
                      copy_tr(agent_waypoints), 
                      i) */;
                                      _enc__passive_Agent_t* _new_235 = _enc__constructor_Agent(_ctx);
                                      tuple_t* _tuple_236 = tuple_mk(_ctx, 2);
                                      tuple_set_type(_tuple_236, 0, ENCORE_PRIMITIVE);
                                      tuple_set_type(_tuple_236, 1, ENCORE_PRIMITIVE);
                                      int64_t _binop_237 = (({ _x_124;}) - ({ _dx_153;}));
                                      int64_t _binop_238 = (({ _y_131;}) - ({ _dy_155;}));
                                      tuple_set(_tuple_236, 0, ((encore_arg_t) {.i = _binop_237}));
                                      tuple_set(_tuple_236, 1, ((encore_arg_t) {.i = _binop_238}));
                                      pony_type_t* _tmp_239[] = {};
                                      array_t* _global_f_240 = _enc__global_fun_copy_tr(_ctx, NULL, _agent_waypoints_151);
                                      _enc__type_init_Agent(_new_235);
                                      _enc__method_Agent__init(_ctx, _new_235, _tuple_236, _global_f_240, _i_99);
                                      array_set(_agents_97, _i_99, ((encore_arg_t) {.p = _new_235})); UNIT;}));
            }
            else
            {
              printf("*** Runtime error: No matching clause was found ***\n");
              exit(1);
            };
          };
        };
      };
      /* i = i + 1 */;
      int64_t _binop_254 = (({ _i_99;}) + ({int64_t _literal_253 = 1; _literal_253;}));
      _i_99 = _binop_254;
      _for_194 = UNIT;
      _index_195 = (_index_195 + _step_199);
    };
    _for_100 = _for_194;
    _index_101 = (_index_101 + _step_105);
  };
  /* for a in agents
  if |a.targets| == 2 then
    print(".")
  else
    print("AGENT HAVE {} WAYPOINTS\n", |a.targets|) */;
  void* _for_255;
  int64_t _start_258 = 0;
  int64_t _stop_259 = (array_size(_agents_97) - 1);
  int64_t _src_step_261 = 1;
  int64_t _literal_262 = 1;
  int64_t _step_260 = (_literal_262 * _src_step_261);
  range_assert_step(_step_260);
  int64_t _index_256;
  if ((_step_260 > 0))
  {
    _index_256 = _start_258;
  }
  else
  {
    _index_256 = _stop_259;
  };
  while (((_index_256 >= _start_258) && (_index_256 <= _stop_259)))
  {
    _enc__passive_Agent_t* _a_257 = array_get(_agents_97, _index_256).p;
    /* if |a.targets| == 2 then
  print(".")
else
  print("AGENT HAVE {} WAYPOINTS\n", |a.targets|) */;
    void* _ite_263;
    if (({int64_t _binop_267 = (({array_t* _fieldacc_264 = (*_a_257)._enc__field_targets;
                                  int64_t _size_265 = array_size(_fieldacc_264); _size_265;}) == ({int64_t _literal_266 = 2; _literal_266;})); _binop_267;}))
    {
      char* _literal_268 = ".";
      printf("%s", _literal_268);
      _ite_263 = ((void*) UNIT);
    }
    else
    {
      array_t* _fieldacc_269 = (*_a_257)._enc__field_targets;
      int64_t _size_270 = array_size(_fieldacc_269);
      printf("AGENT HAVE %lli WAYPOINTS\n", _size_270);
      _ite_263 = ((void*) UNIT);
    };
    _for_255 = _ite_263;
    _index_256 = (_index_256 + _step_260);
  };
  /* agents */;
  return ((array_t*) _agents_97);
}


future_t* _enc__method_Main__init_future(pony_ctx_t** _ctx, _enc__active_Main_t* _this)
{
  future_t* _fut = future_mk(_ctx, ENCORE_PRIMITIVE);
  pony_gc_send((*_ctx));
  encore_trace_object((*_ctx), _fut, future_trace);
  pony_send_done((*_ctx));
  _enc__fut_msg_Main__init_t* msg = ((_enc__fut_msg_Main__init_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__fut_msg_Main__init_t)), _ENC__FUT_MSG_Main__init));
  msg->_fut = _fut;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
  return _fut;
}


future_t* _enc__method_Main_main_future(pony_ctx_t** _ctx, _enc__active_Main_t* _this)
{
  future_t* _fut = future_mk(_ctx, ENCORE_PRIMITIVE);
  pony_gc_send((*_ctx));
  encore_trace_object((*_ctx), _fut, future_trace);
  pony_send_done((*_ctx));
  _enc__fut_msg_Main_main_t* msg = ((_enc__fut_msg_Main_main_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__fut_msg_Main_main_t)), _ENC__FUT_MSG_Main_main));
  msg->_fut = _fut;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
  return _fut;
}


future_t* _enc__method_Main_loop_future(pony_ctx_t** _ctx, _enc__active_Main_t* _this, _enc__active_Multi_box_t* _enc__arg_superbox, int64_t _enc__arg_tick)
{
  future_t* _fut = future_mk(_ctx, ENCORE_PRIMITIVE);
  pony_gc_send((*_ctx));
  encore_trace_actor((*_ctx), ((pony_actor_t*) _enc__arg_superbox));
  /* Not tracing field '_enc__arg_tick' */;
  encore_trace_object((*_ctx), _fut, future_trace);
  pony_send_done((*_ctx));
  _enc__fut_msg_Main_loop_t* msg = ((_enc__fut_msg_Main_loop_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__fut_msg_Main_loop_t)), _ENC__FUT_MSG_Main_loop));
  msg->f1 = _enc__arg_superbox;
  msg->f2 = _enc__arg_tick;
  msg->_fut = _fut;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
  return _fut;
}


future_t* _enc__method_Main_parse_file_future(pony_ctx_t** _ctx, _enc__active_Main_t* _this, _enc__passive_String_t* _enc__arg_fname)
{
  future_t* _fut = future_mk(_ctx, (&(array_type)));
  pony_gc_send((*_ctx));
  encore_trace_object((*_ctx), _enc__arg_fname, _enc__trace_String);
  encore_trace_object((*_ctx), _fut, future_trace);
  pony_send_done((*_ctx));
  _enc__fut_msg_Main_parse_file_t* msg = ((_enc__fut_msg_Main_parse_file_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__fut_msg_Main_parse_file_t)), _ENC__FUT_MSG_Main_parse_file));
  msg->f1 = _enc__arg_fname;
  msg->_fut = _fut;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
  return _fut;
}


void _enc__method_Main__init_one_way(pony_ctx_t** _ctx, _enc__active_Main_t* _this)
{
  pony_gc_send((*_ctx));
  /* No tracing future for oneway msg */;
  pony_send_done((*_ctx));
  _enc__oneway_msg_Main__init_t* msg = ((_enc__oneway_msg_Main__init_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__oneway_msg_Main__init_t)), _ENC__ONEWAY_MSG_Main__init));
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
}


void _enc__method_Main_main_one_way(pony_ctx_t** _ctx, _enc__active_Main_t* _this)
{
  pony_gc_send((*_ctx));
  /* No tracing future for oneway msg */;
  pony_send_done((*_ctx));
  _enc__oneway_msg_Main_main_t* msg = ((_enc__oneway_msg_Main_main_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__oneway_msg_Main_main_t)), _ENC__ONEWAY_MSG_Main_main));
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
}


void _enc__method_Main_loop_one_way(pony_ctx_t** _ctx, _enc__active_Main_t* _this, _enc__active_Multi_box_t* _enc__arg_superbox, int64_t _enc__arg_tick)
{
  pony_gc_send((*_ctx));
  encore_trace_actor((*_ctx), ((pony_actor_t*) _enc__arg_superbox));
  /* Not tracing field '_enc__arg_tick' */;
  /* No tracing future for oneway msg */;
  pony_send_done((*_ctx));
  _enc__oneway_msg_Main_loop_t* msg = ((_enc__oneway_msg_Main_loop_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__oneway_msg_Main_loop_t)), _ENC__ONEWAY_MSG_Main_loop));
  msg->f1 = _enc__arg_superbox;
  msg->f2 = _enc__arg_tick;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
}


void _enc__method_Main_parse_file_one_way(pony_ctx_t** _ctx, _enc__active_Main_t* _this, _enc__passive_String_t* _enc__arg_fname)
{
  pony_gc_send((*_ctx));
  encore_trace_object((*_ctx), _enc__arg_fname, _enc__trace_String);
  /* No tracing future for oneway msg */;
  pony_send_done((*_ctx));
  _enc__oneway_msg_Main_parse_file_t* msg = ((_enc__oneway_msg_Main_parse_file_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__oneway_msg_Main_parse_file_t)), _ENC__ONEWAY_MSG_Main_parse_file));
  msg->f1 = _enc__arg_fname;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
}


static void _enc__dispatch_Main(pony_ctx_t** _ctx, pony_actor_t* _a, pony_msg_t* _m)
{
  _enc__active_Main_t* _this = ((_enc__active_Main_t*) _a);
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
    case _ENC__MSG_MAIN:
    {
      pony_main_msg_t* msg = ((pony_main_msg_t*) _m);
      _enc__method_Main_main(_ctx, ((_enc__active_Main_t*) _a), _init_argv(_ctx, msg->argc, msg->argv));
      break;
    }
    case _ENC__FUT_MSG_Main__init:
    {
      future_t* _fut = ((encore_fut_msg_t*) _m)->_fut;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      encore_trace_object((*_ctx), _fut, future_type.trace);
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      future_fulfil(_ctx, _fut, ((encore_arg_t) {.p = _enc__method_Main__init(_ctx, _this)}));
      break;
    }
    case _ENC__ONEWAY_MSG_Main__init:
    {
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      /* Not tracing the future in a oneWay send */;
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      _enc__method_Main__init(_ctx, _this);
      break;
    }
    case _ENC__FUT_MSG_Main_loop:
    {
      future_t* _fut = ((encore_fut_msg_t*) _m)->_fut;
      _enc__active_Multi_box_t* _enc__arg_superbox = ((_enc__fut_msg_Main_loop_t*) _m)->f1;
      int64_t _enc__arg_tick = ((_enc__fut_msg_Main_loop_t*) _m)->f2;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      encore_trace_actor((*_ctx), ((pony_actor_t*) _enc__arg_superbox));
      /* Not tracing field '_enc__arg_tick' */;
      encore_trace_object((*_ctx), _fut, future_type.trace);
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      future_fulfil(_ctx, _fut, ((encore_arg_t) {.p = _enc__method_Main_loop(_ctx, _this, _enc__arg_superbox, _enc__arg_tick)}));
      break;
    }
    case _ENC__ONEWAY_MSG_Main_loop:
    {
      _enc__active_Multi_box_t* _enc__arg_superbox = ((_enc__oneway_msg_Main_loop_t*) _m)->f1;
      int64_t _enc__arg_tick = ((_enc__oneway_msg_Main_loop_t*) _m)->f2;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      encore_trace_actor((*_ctx), ((pony_actor_t*) _enc__arg_superbox));
      /* Not tracing field '_enc__arg_tick' */;
      /* Not tracing the future in a oneWay send */;
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      _enc__method_Main_loop(_ctx, _this, _enc__arg_superbox, _enc__arg_tick);
      break;
    }
    case _ENC__FUT_MSG_Main_parse_file:
    {
      future_t* _fut = ((encore_fut_msg_t*) _m)->_fut;
      _enc__passive_String_t* _enc__arg_fname = ((_enc__fut_msg_Main_parse_file_t*) _m)->f1;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      encore_trace_object((*_ctx), _enc__arg_fname, _enc__trace_String);
      encore_trace_object((*_ctx), _fut, future_type.trace);
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      future_fulfil(_ctx, _fut, ((encore_arg_t) {.p = _enc__method_Main_parse_file(_ctx, _this, _enc__arg_fname)}));
      break;
    }
    case _ENC__ONEWAY_MSG_Main_parse_file:
    {
      _enc__passive_String_t* _enc__arg_fname = ((_enc__oneway_msg_Main_parse_file_t*) _m)->f1;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      encore_trace_object((*_ctx), _enc__arg_fname, _enc__trace_String);
      /* Not tracing the future in a oneWay send */;
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      _enc__method_Main_parse_file(_ctx, _this, _enc__arg_fname);
      break;
    }
    default:
    {
      printf("error, got invalid id: %zd", _m->id);
    }
  };
}


pony_type_t _enc__active_Main_type = {.id=_ENC__ID_Main, .size=sizeof(_enc__active_Main_t), .trace=_enc__trace_Main, .dispatch=_enc__dispatch_Main, .vtable=trait_method_selector};
