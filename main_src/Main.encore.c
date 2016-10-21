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
  /* let superbox = new Multi_box(this.parse_file("scenario.xml")) */;
  /* superbox = new Multi_box(this.parse_file("scenario.xml")) */;
  _enc__active_Multi_box_t* _new_0 = _enc__constructor_Multi_box(_ctx);
  check_receiver(_this, ".", "this", "parse_file", "\"main.enc\" (line 17, column 37)");
  _enc__passive_String_t* _new_2 = _enc__constructor_String(_ctx);
  char* _embed_3 = ({"scenario.xml";});
  _enc__type_init_String(_new_2);
  _enc__method_String__init(_ctx, _new_2, _embed_3);
  array_t* _sync_method_call_1 = _enc__method_Main_parse_file(_ctx, _this, _new_2);
  _enc__type_init_Multi_box(_new_0);
  _enc__method_Multi_box__init_one_way(_ctx, _new_0, _sync_method_call_1);
  _enc__active_Multi_box_t* _superbox_4 = _new_0;
  /* let x_size = 0 */;
  /* x_size = 0 */;
  int64_t _literal_5 = 0;
  int64_t _x_size_6 = _literal_5;
  /* let y_size = 0 */;
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
  check_receiver(_superbox_4, ".", "superbox", "max", "\"main.enc\" (line 20, column 19)");
  future_t* _fut_11 = _enc__method_Multi_box_max_future(_ctx, _superbox_4);
  tuple_t* _tmp_12 = future_get_actor(_ctx, _fut_11).p;
  check_receiver(_superbox_4, ".", "superbox", "min", "\"main.enc\" (line 20, column 39)");
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
  /* let cond = true */;
  /* cond = true */;
  int64_t _literal_35 = 1/*True*/;
  int64_t _cond_36 = _literal_35;
  /* let i = 0 */;
  /* i = 0 */;
  int64_t _literal_37 = 0;
  int64_t _i_38 = _literal_37;
  /* while cond and i < 40000
  {print("tick {}\n", i);
   i = i + 1;
   cond = get superbox.move()} */;
  void* _while_46;
  while (({int64_t _binop_41 = (({ _cond_36;}) && ({int64_t _binop_40 = (({ _i_38;}) < ({int64_t _literal_39 = 40000; _literal_39;})); _binop_40;})); _binop_41;}))
  {
    /* print("tick {}\n", i) */;
    printf("tick %lli\n", _i_38);
    /* i = i + 1 */;
    int64_t _binop_43 = (({ _i_38;}) + ({int64_t _literal_42 = 1; _literal_42;}));
    _i_38 = _binop_43;
    /* cond = get superbox.move() */;
    check_receiver(_superbox_4, ".", "superbox", "move", "\"main.enc\" (line 43, column 17)");
    future_t* _fut_44 = _enc__method_Multi_box_move_future(_ctx, _superbox_4);
    int64_t _tmp_45 = future_get_actor(_ctx, _fut_44).i;
    _cond_36 = _tmp_45;
    _while_46 = UNIT;
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
  check_receiver(_sen_1, ".", "sen", "file_to_xml", "\"main.enc\" (line 50, column 14)");
  _enc__passive_String_t* _new_6 = _enc__constructor_String(_ctx);
  char* _embed_7 = ({"scenario.xml";});
  _enc__type_init_String(_new_6);
  _enc__method_String__init(_ctx, _new_6, _embed_7);
  option_t* _sync_method_call_5 = _enc__method_XML_lib_file_to_xml(_ctx, _sen_1, _new_6);
  void* _match_4;
  _enc__passive_XML_node_t* _xml_8;
  if ((({int64_t _optionCheck_17;
         _optionCheck_17 = ((JUST == (*_sync_method_call_5).tag) && ({int64_t _varBinding_18;
                                                                      _enc__passive_XML_node_t* _optionVal_16 = (*_sync_method_call_5).val.p;
                                                                      _xml_8 = _optionVal_16;
                                                                      _varBinding_18 = 1; _varBinding_18;})); _optionCheck_17;}) && ({int64_t _literal_19 = 1/*True*/; _literal_19;})))
  {
    _match_4 = ((void*) ({/* file = xml */;
                          _file_3 = _xml_8;
                          /* print("\n\nWORKED!\n") */;
                          _enc__passive_String_t* _new_9 = _enc__constructor_String(_ctx);
                          char* _embed_10 = ({"\n\nWORKED!\n";});
                          _enc__type_init_String(_new_9);
                          _enc__method_String__init(_ctx, _new_9, _embed_10);
                          printf("%s", ((_enc__passive_String_t*) _new_9)->_enc__field_data); UNIT;}));
  }
  else
  {
    if ((({int64_t _valueCheck_13;
           _valueCheck_13 = (({option_t* _option_14 = (&(DEFAULT_NOTHING)); _option_14;}) == _sync_method_call_5); _valueCheck_13;}) && ({int64_t _literal_15 = 1/*True*/; _literal_15;})))
    {
      _match_4 = ((void*) ({_enc__passive_String_t* _new_11 = _enc__constructor_String(_ctx);
                            char* _embed_12 = ({"\n\nBADXML!\n";});
                            _enc__type_init_String(_new_11);
                            _enc__method_String__init(_ctx, _new_11, _embed_12);
                            printf("%s", ((_enc__passive_String_t*) _new_11)->_enc__field_data); UNIT;}));
    }
    else
    {
      printf("*** Runtime error: No matching clause was found ***\n");
      exit(1);
    };
  };
  /* let xml_way = file.children_named("waypoint") */;
  /* xml_way = file.children_named("waypoint") */;
  check_receiver(_file_3, ".", "file", "children_named", "\"main.enc\" (line 54, column 22)");
  _enc__passive_String_t* _new_21 = _enc__constructor_String(_ctx);
  char* _embed_22 = ({"waypoint";});
  _enc__type_init_String(_new_21);
  _enc__method_String__init(_ctx, _new_21, _embed_22);
  array_t* _sync_method_call_20 = _enc__method_XML_node_children_named(_ctx, _file_3, _new_21);
  array_t* _xml_way_23 = _sync_method_call_20;
  /* let waypoints = new [(int, int)](|xml_way|) */;
  /* waypoints = new [(int, int)](|xml_way|) */;
  int64_t _size_25 = array_size(_xml_way_23);
  array_t* _array_24 = array_mk(_ctx, _size_25, (&(tuple_type)));
  array_t* _waypoints_26 = _array_24;
  /* let i = 0 */;
  /* i = 0 */;
  int64_t _literal_27 = 0;
  int64_t _i_28 = _literal_27;
  /* for a in xml_way
  {waypoints[i] = match (a.attribute_value("x").to_int(), 
                         a.attribute_value("y").to_int()) with
                    (Just x, Just y) => (x, y)
                    _ => {print("BADINT!\n");
                          (0, 0)}
                  ;
   i = i + 1} */;
  void* _for_29;
  int64_t _start_32 = 0;
  int64_t _stop_33 = (array_size(_xml_way_23) - 1);
  int64_t _src_step_35 = 1;
  int64_t _literal_36 = 1;
  int64_t _step_34 = (_literal_36 * _src_step_35);
  range_assert_step(_step_34);
  int64_t _index_30;
  if ((_step_34 > 0))
  {
    _index_30 = _start_32;
  }
  else
  {
    _index_30 = _stop_33;
  };
  while (((_index_30 >= _start_32) && (_index_30 <= _stop_33)))
  {
    _enc__passive_XML_node_t* _a_31 = array_get(_xml_way_23, _index_30).p;
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
    tuple_t* _tuple_38 = tuple_mk(_ctx, 2);
    tuple_set_type(_tuple_38, 0, (&(option_type)));
    tuple_set_type(_tuple_38, 1, (&(option_type)));
    check_receiver(_a_31, ".", "a", "attribute_value", "\"main.enc\" (line 59, column 19)");
    _enc__passive_String_t* _new_41 = _enc__constructor_String(_ctx);
    char* _embed_42 = ({"x";});
    _enc__type_init_String(_new_41);
    _enc__method_String__init(_ctx, _new_41, _embed_42);
    _enc__passive_String_t* _sync_method_call_40 = _enc__method_XML_node_attribute_value(_ctx, _a_31, _new_41);
    check_receiver(_sync_method_call_40, ".", "a.attribute_value(new String(embed char* \"x\"; end))", "to_int", "\"main.enc\" (line 59, column 19)");
    option_t* _sync_method_call_39 = _enc__method_String_to_int(_ctx, _sync_method_call_40);
    check_receiver(_a_31, ".", "a", "attribute_value", "\"main.enc\" (line 59, column 51)");
    _enc__passive_String_t* _new_45 = _enc__constructor_String(_ctx);
    char* _embed_46 = ({"y";});
    _enc__type_init_String(_new_45);
    _enc__method_String__init(_ctx, _new_45, _embed_46);
    _enc__passive_String_t* _sync_method_call_44 = _enc__method_XML_node_attribute_value(_ctx, _a_31, _new_45);
    check_receiver(_sync_method_call_44, ".", "a.attribute_value(new String(embed char* \"y\"; end))", "to_int", "\"main.enc\" (line 59, column 51)");
    option_t* _sync_method_call_43 = _enc__method_String_to_int(_ctx, _sync_method_call_44);
    tuple_set(_tuple_38, 0, ((encore_arg_t) {.p = _sync_method_call_39}));
    tuple_set(_tuple_38, 1, ((encore_arg_t) {.p = _sync_method_call_43}));
    tuple_t* _match_37;
    int64_t _x_47;
    int64_t _y_48;
    if ((({int64_t _tupleCheck_58;
           _tupleCheck_58 = 1;
           option_t* _tupleAccess_59 = tuple_get(_tuple_38, 0).p;
           int64_t _optionCheck_61;
           _optionCheck_61 = ((JUST == (*_tupleAccess_59).tag) && ({int64_t _varBinding_62;
                                                                    int64_t _optionVal_60 = (*_tupleAccess_59).val.i;
                                                                    _x_47 = _optionVal_60;
                                                                    _varBinding_62 = 1; _varBinding_62;}));
           _tupleCheck_58 = (_tupleCheck_58 && _optionCheck_61);
           option_t* _tupleAccess_63 = tuple_get(_tuple_38, 1).p;
           int64_t _optionCheck_65;
           _optionCheck_65 = ((JUST == (*_tupleAccess_63).tag) && ({int64_t _varBinding_66;
                                                                    int64_t _optionVal_64 = (*_tupleAccess_63).val.i;
                                                                    _y_48 = _optionVal_64;
                                                                    _varBinding_66 = 1; _varBinding_66;}));
           _tupleCheck_58 = (_tupleCheck_58 && _optionCheck_65); _tupleCheck_58;}) && ({int64_t _literal_67 = 1/*True*/; _literal_67;})))
    {
      _match_37 = ((tuple_t*) ({tuple_t* _tuple_49 = tuple_mk(_ctx, 2);
                                tuple_set_type(_tuple_49, 0, ENCORE_PRIMITIVE);
                                tuple_set_type(_tuple_49, 1, ENCORE_PRIMITIVE);
                                tuple_set(_tuple_49, 0, ((encore_arg_t) {.i = _x_47}));
                                tuple_set(_tuple_49, 1, ((encore_arg_t) {.i = _y_48})); _tuple_49;}));
    }
    else
    {
      tuple_t* ___50;
      if ((({int64_t _varBinding_56;
             ___50 = _tuple_38;
             _varBinding_56 = 1; _varBinding_56;}) && ({int64_t _literal_57 = 1/*True*/; _literal_57;})))
      {
        _match_37 = ((tuple_t*) ({/* print("BADINT!\n") */;
                                  _enc__passive_String_t* _new_51 = _enc__constructor_String(_ctx);
                                  char* _embed_52 = ({"BADINT!\n";});
                                  _enc__type_init_String(_new_51);
                                  _enc__method_String__init(_ctx, _new_51, _embed_52);
                                  printf("%s", ((_enc__passive_String_t*) _new_51)->_enc__field_data);
                                  /* (0, 0) */;
                                  tuple_t* _tuple_53 = tuple_mk(_ctx, 2);
                                  tuple_set_type(_tuple_53, 0, ENCORE_PRIMITIVE);
                                  tuple_set_type(_tuple_53, 1, ENCORE_PRIMITIVE);
                                  int64_t _literal_54 = 0;
                                  int64_t _literal_55 = 0;
                                  tuple_set(_tuple_53, 0, ((encore_arg_t) {.i = _literal_54}));
                                  tuple_set(_tuple_53, 1, ((encore_arg_t) {.i = _literal_55})); _tuple_53;}));
      }
      else
      {
        printf("*** Runtime error: No matching clause was found ***\n");
        exit(1);
      };
    };
    array_set(_waypoints_26, _i_28, ((encore_arg_t) {.p = _match_37}));
    /* i = i + 1 */;
    int64_t _binop_69 = (({ _i_28;}) + ({int64_t _literal_68 = 1; _literal_68;}));
    _i_28 = _binop_69;
    _for_29 = UNIT;
    _index_30 = (_index_30 + _step_34);
  };
  /* let nr_agents = 0 */;
  /* nr_agents = 0 */;
  int64_t _literal_70 = 0;
  int64_t _nr_agents_71 = _literal_70;
  /* for a in file.children_named("agent")
  nr_agents = nr_agents + match a.attribute_value("n").to_int() with
                            Just nr => nr
                            _ => {print("BADINT2!\n");
                                  0}
                           */;
  void* _for_72;
  check_receiver(_file_3, ".", "file", "children_named", "\"main.enc\" (line 67, column 17)");
  _enc__passive_String_t* _new_80 = _enc__constructor_String(_ctx);
  char* _embed_81 = ({"agent";});
  _enc__type_init_String(_new_80);
  _enc__method_String__init(_ctx, _new_80, _embed_81);
  array_t* _sync_method_call_79 = _enc__method_XML_node_children_named(_ctx, _file_3, _new_80);
  int64_t _start_75 = 0;
  int64_t _stop_76 = (array_size(_sync_method_call_79) - 1);
  int64_t _src_step_78 = 1;
  int64_t _literal_82 = 1;
  int64_t _step_77 = (_literal_82 * _src_step_78);
  range_assert_step(_step_77);
  int64_t _index_73;
  if ((_step_77 > 0))
  {
    _index_73 = _start_75;
  }
  else
  {
    _index_73 = _stop_76;
  };
  while (((_index_73 >= _start_75) && (_index_73 <= _stop_76)))
  {
    _enc__passive_XML_node_t* _a_74 = array_get(_sync_method_call_79, _index_73).p;
    /* nr_agents = nr_agents + match a.attribute_value("n").to_int() with
                          Just nr => nr
                          _ => {print("BADINT2!\n");
                                0}
                         */;
    int64_t _binop_99 = (({ _nr_agents_71;}) + ({/* match a.attribute_value("n").to_int() with
  Just nr => nr
  _ => {print("BADINT2!\n");
        0}
 */;
                                                 check_receiver(_a_74, ".", "a", "attribute_value", "\"main.enc\" (line 69, column 23)");
                                                 _enc__passive_String_t* _new_86 = _enc__constructor_String(_ctx);
                                                 char* _embed_87 = ({"n";});
                                                 _enc__type_init_String(_new_86);
                                                 _enc__method_String__init(_ctx, _new_86, _embed_87);
                                                 _enc__passive_String_t* _sync_method_call_85 = _enc__method_XML_node_attribute_value(_ctx, _a_74, _new_86);
                                                 check_receiver(_sync_method_call_85, ".", "a.attribute_value(new String(embed char* \"n\"; end))", "to_int", "\"main.enc\" (line 69, column 23)");
                                                 option_t* _sync_method_call_84 = _enc__method_String_to_int(_ctx, _sync_method_call_85);
                                                 int64_t _match_83;
                                                 int64_t _nr_88;
                                                 if ((({int64_t _optionCheck_96;
                                                        _optionCheck_96 = ((JUST == (*_sync_method_call_84).tag) && ({int64_t _varBinding_97;
                                                                                                                      int64_t _optionVal_95 = (*_sync_method_call_84).val.i;
                                                                                                                      _nr_88 = _optionVal_95;
                                                                                                                      _varBinding_97 = 1; _varBinding_97;})); _optionCheck_96;}) && ({int64_t _literal_98 = 1/*True*/; _literal_98;})))
                                                 {
                                                   _match_83 = ((int64_t) ({ _nr_88;}));
                                                 }
                                                 else
                                                 {
                                                   option_t* ___89;
                                                   if ((({int64_t _varBinding_93;
                                                          ___89 = _sync_method_call_84;
                                                          _varBinding_93 = 1; _varBinding_93;}) && ({int64_t _literal_94 = 1/*True*/; _literal_94;})))
                                                   {
                                                     _match_83 = ((int64_t) ({/* print("BADINT2!\n") */;
                                                                              _enc__passive_String_t* _new_90 = _enc__constructor_String(_ctx);
                                                                              char* _embed_91 = ({"BADINT2!\n";});
                                                                              _enc__type_init_String(_new_90);
                                                                              _enc__method_String__init(_ctx, _new_90, _embed_91);
                                                                              printf("%s", ((_enc__passive_String_t*) _new_90)->_enc__field_data);
                                                                              /* 0 */;
                                                                              int64_t _literal_92 = 0; _literal_92;}));
                                                   }
                                                   else
                                                   {
                                                     printf("*** Runtime error: No matching clause was found ***\n");
                                                     exit(1);
                                                   };
                                                 }; _match_83;}));
    _nr_agents_71 = _binop_99;
    _for_72 = UNIT;
    _index_73 = (_index_73 + _step_77);
  };
  /* let agents = new [Agent](nr_agents) */;
  /* agents = new [Agent](nr_agents) */;
  array_t* _array_100 = array_mk(_ctx, _nr_agents_71, (&(_enc__passive_Agent_type)));
  array_t* _agents_101 = _array_100;
  /* let i = 0 */;
  /* i = 0 */;
  int64_t _literal_102 = 0;
  int64_t _i_103 = _literal_102;
  /* for a in file.children_named("agent")
  {let max = int_or_0(a.attribute_value("n").to_int());
   let x = int_or_0(a.attribute_value("x").to_int());
   let y = int_or_0(a.attribute_value("y").to_int());
   let dx_max = int_or_0(a.attribute_value("dx").to_int());
   let dy_max = int_or_0(a.attribute_value("dy").to_int());
   let dx = 0;
   let dy = 0;
   let agent_waypoints = new [(int, int)](|a.children_named("addway")|);
   let j = 0;
   for b in a.children_named("addway")
     {agent_waypoints[j] = waypoints[int_or_0(string_or_empty(b.attribute_value("id").substring(1, 
                                                                                                2)).to_int()) - 1];
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
  void* _for_104;
  check_receiver(_file_3, ".", "file", "children_named", "\"main.enc\" (line 77, column 17)");
  _enc__passive_String_t* _new_112 = _enc__constructor_String(_ctx);
  char* _embed_113 = ({"agent";});
  _enc__type_init_String(_new_112);
  _enc__method_String__init(_ctx, _new_112, _embed_113);
  array_t* _sync_method_call_111 = _enc__method_XML_node_children_named(_ctx, _file_3, _new_112);
  int64_t _start_107 = 0;
  int64_t _stop_108 = (array_size(_sync_method_call_111) - 1);
  int64_t _src_step_110 = 1;
  int64_t _literal_114 = 1;
  int64_t _step_109 = (_literal_114 * _src_step_110);
  range_assert_step(_step_109);
  int64_t _index_105;
  if ((_step_109 > 0))
  {
    _index_105 = _start_107;
  }
  else
  {
    _index_105 = _stop_108;
  };
  while (((_index_105 >= _start_107) && (_index_105 <= _stop_108)))
  {
    _enc__passive_XML_node_t* _a_106 = array_get(_sync_method_call_111, _index_105).p;
    /* let max = int_or_0(a.attribute_value("n").to_int()) */;
    /* max = int_or_0(a.attribute_value("n").to_int()) */;
    check_receiver(_a_106, ".", "a", "attribute_value", "\"main.enc\" (line 78, column 32)");
    _enc__passive_String_t* _new_117 = _enc__constructor_String(_ctx);
    char* _embed_118 = ({"n";});
    _enc__type_init_String(_new_117);
    _enc__method_String__init(_ctx, _new_117, _embed_118);
    _enc__passive_String_t* _sync_method_call_116 = _enc__method_XML_node_attribute_value(_ctx, _a_106, _new_117);
    check_receiver(_sync_method_call_116, ".", "a.attribute_value(new String(embed char* \"n\"; end))", "to_int", "\"main.enc\" (line 78, column 32)");
    option_t* _sync_method_call_115 = _enc__method_String_to_int(_ctx, _sync_method_call_116);
    pony_type_t* _tmp_119[] = {};
    int64_t _global_f_120 = _enc__global_fun_int_or_0(_ctx, NULL, _sync_method_call_115);
    int64_t _max_121 = _global_f_120;
    /* let x = int_or_0(a.attribute_value("x").to_int()) */;
    /* x = int_or_0(a.attribute_value("x").to_int()) */;
    check_receiver(_a_106, ".", "a", "attribute_value", "\"main.enc\" (line 79, column 30)");
    _enc__passive_String_t* _new_124 = _enc__constructor_String(_ctx);
    char* _embed_125 = ({"x";});
    _enc__type_init_String(_new_124);
    _enc__method_String__init(_ctx, _new_124, _embed_125);
    _enc__passive_String_t* _sync_method_call_123 = _enc__method_XML_node_attribute_value(_ctx, _a_106, _new_124);
    check_receiver(_sync_method_call_123, ".", "a.attribute_value(new String(embed char* \"x\"; end))", "to_int", "\"main.enc\" (line 79, column 30)");
    option_t* _sync_method_call_122 = _enc__method_String_to_int(_ctx, _sync_method_call_123);
    pony_type_t* _tmp_126[] = {};
    int64_t _global_f_127 = _enc__global_fun_int_or_0(_ctx, NULL, _sync_method_call_122);
    int64_t _x_128 = _global_f_127;
    /* let y = int_or_0(a.attribute_value("y").to_int()) */;
    /* y = int_or_0(a.attribute_value("y").to_int()) */;
    check_receiver(_a_106, ".", "a", "attribute_value", "\"main.enc\" (line 80, column 30)");
    _enc__passive_String_t* _new_131 = _enc__constructor_String(_ctx);
    char* _embed_132 = ({"y";});
    _enc__type_init_String(_new_131);
    _enc__method_String__init(_ctx, _new_131, _embed_132);
    _enc__passive_String_t* _sync_method_call_130 = _enc__method_XML_node_attribute_value(_ctx, _a_106, _new_131);
    check_receiver(_sync_method_call_130, ".", "a.attribute_value(new String(embed char* \"y\"; end))", "to_int", "\"main.enc\" (line 80, column 30)");
    option_t* _sync_method_call_129 = _enc__method_String_to_int(_ctx, _sync_method_call_130);
    pony_type_t* _tmp_133[] = {};
    int64_t _global_f_134 = _enc__global_fun_int_or_0(_ctx, NULL, _sync_method_call_129);
    int64_t _y_135 = _global_f_134;
    /* let dx_max = int_or_0(a.attribute_value("dx").to_int()) */;
    /* dx_max = int_or_0(a.attribute_value("dx").to_int()) */;
    check_receiver(_a_106, ".", "a", "attribute_value", "\"main.enc\" (line 81, column 35)");
    _enc__passive_String_t* _new_138 = _enc__constructor_String(_ctx);
    char* _embed_139 = ({"dx";});
    _enc__type_init_String(_new_138);
    _enc__method_String__init(_ctx, _new_138, _embed_139);
    _enc__passive_String_t* _sync_method_call_137 = _enc__method_XML_node_attribute_value(_ctx, _a_106, _new_138);
    check_receiver(_sync_method_call_137, ".", "a.attribute_value(new String(embed char* \"dx\"; end))", "to_int", "\"main.enc\" (line 81, column 35)");
    option_t* _sync_method_call_136 = _enc__method_String_to_int(_ctx, _sync_method_call_137);
    pony_type_t* _tmp_140[] = {};
    int64_t _global_f_141 = _enc__global_fun_int_or_0(_ctx, NULL, _sync_method_call_136);
    int64_t _dx_max_142 = _global_f_141;
    /* let dy_max = int_or_0(a.attribute_value("dy").to_int()) */;
    /* dy_max = int_or_0(a.attribute_value("dy").to_int()) */;
    check_receiver(_a_106, ".", "a", "attribute_value", "\"main.enc\" (line 82, column 35)");
    _enc__passive_String_t* _new_145 = _enc__constructor_String(_ctx);
    char* _embed_146 = ({"dy";});
    _enc__type_init_String(_new_145);
    _enc__method_String__init(_ctx, _new_145, _embed_146);
    _enc__passive_String_t* _sync_method_call_144 = _enc__method_XML_node_attribute_value(_ctx, _a_106, _new_145);
    check_receiver(_sync_method_call_144, ".", "a.attribute_value(new String(embed char* \"dy\"; end))", "to_int", "\"main.enc\" (line 82, column 35)");
    option_t* _sync_method_call_143 = _enc__method_String_to_int(_ctx, _sync_method_call_144);
    pony_type_t* _tmp_147[] = {};
    int64_t _global_f_148 = _enc__global_fun_int_or_0(_ctx, NULL, _sync_method_call_143);
    int64_t _dy_max_149 = _global_f_148;
    /* let dx = 0 */;
    /* dx = 0 */;
    int64_t _literal_150 = 0;
    int64_t _dx_151 = _literal_150;
    /* let dy = 0 */;
    /* dy = 0 */;
    int64_t _literal_152 = 0;
    int64_t _dy_153 = _literal_152;
    /* let agent_waypoints = new [(int, int)](|a.children_named("addway")|) */;
    /* agent_waypoints = new [(int, int)](|a.children_named("addway")|) */;
    check_receiver(_a_106, ".", "a", "children_named", "\"main.enc\" (line 85, column 50)");
    _enc__passive_String_t* _new_156 = _enc__constructor_String(_ctx);
    char* _embed_157 = ({"addway";});
    _enc__type_init_String(_new_156);
    _enc__method_String__init(_ctx, _new_156, _embed_157);
    array_t* _sync_method_call_155 = _enc__method_XML_node_children_named(_ctx, _a_106, _new_156);
    int64_t _size_158 = array_size(_sync_method_call_155);
    array_t* _array_154 = array_mk(_ctx, _size_158, (&(tuple_type)));
    array_t* _agent_waypoints_159 = _array_154;
    /* let j = 0 */;
    /* j = 0 */;
    int64_t _literal_160 = 0;
    int64_t _j_161 = _literal_160;
    /* for b in a.children_named("addway")
  {agent_waypoints[j] = waypoints[int_or_0(string_or_empty(b.attribute_value("id").substring(1, 
                                                                                             2)).to_int()) - 1];
   j = j + 1} */;
    void* _for_162;
    check_receiver(_a_106, ".", "a", "children_named", "\"main.enc\" (line 88, column 22)");
    _enc__passive_String_t* _new_170 = _enc__constructor_String(_ctx);
    char* _embed_171 = ({"addway";});
    _enc__type_init_String(_new_170);
    _enc__method_String__init(_ctx, _new_170, _embed_171);
    array_t* _sync_method_call_169 = _enc__method_XML_node_children_named(_ctx, _a_106, _new_170);
    int64_t _start_165 = 0;
    int64_t _stop_166 = (array_size(_sync_method_call_169) - 1);
    int64_t _src_step_168 = 1;
    int64_t _literal_172 = 1;
    int64_t _step_167 = (_literal_172 * _src_step_168);
    range_assert_step(_step_167);
    int64_t _index_163;
    if ((_step_167 > 0))
    {
      _index_163 = _start_165;
    }
    else
    {
      _index_163 = _stop_166;
    };
    while (((_index_163 >= _start_165) && (_index_163 <= _stop_166)))
    {
      _enc__passive_XML_node_t* _b_164 = array_get(_sync_method_call_169, _index_163).p;
      /* agent_waypoints[j] = waypoints[int_or_0(string_or_empty(b.attribute_value("id").substring(1, 
                                                                                          2)).to_int()) - 1] */;
      int64_t _binop_185 = (({check_receiver(_b_164, ".", "b", "attribute_value", "\"main.enc\" (line 89, column 71)");
                              _enc__passive_String_t* _new_176 = _enc__constructor_String(_ctx);
                              char* _embed_177 = ({"id";});
                              _enc__type_init_String(_new_176);
                              _enc__method_String__init(_ctx, _new_176, _embed_177);
                              _enc__passive_String_t* _sync_method_call_175 = _enc__method_XML_node_attribute_value(_ctx, _b_164, _new_176);
                              check_receiver(_sync_method_call_175, ".", "b.attribute_value(new String(embed char* \"id\"; end))", "substring", "\"main.enc\" (line 89, column 71)");
                              int64_t _literal_178 = 1;
                              int64_t _literal_179 = 2;
                              option_t* _sync_method_call_174 = _enc__method_String_substring(_ctx, _sync_method_call_175, _literal_178, _literal_179);
                              pony_type_t* _tmp_180[] = {};
                              _enc__passive_String_t* _global_f_181 = _enc__global_fun_string_or_empty(_ctx, NULL, _sync_method_call_174);
                              check_receiver(_global_f_181, ".", "string_or_empty(b.attribute_value(new String(embed char* \"id\"; end)).substring(1, \n                                                                               2))", "to_int", "\"main.enc\" (line 89, column 55)");
                              option_t* _sync_method_call_173 = _enc__method_String_to_int(_ctx, _global_f_181);
                              pony_type_t* _tmp_182[] = {};
                              int64_t _global_f_183 = _enc__global_fun_int_or_0(_ctx, NULL, _sync_method_call_173); _global_f_183;}) - ({int64_t _literal_184 = 1; _literal_184;}));
      tuple_t* _access_186 = array_get(_waypoints_26, _binop_185).p;
      array_set(_agent_waypoints_159, _j_161, ((encore_arg_t) {.p = _access_186}));
      /* j = j + 1 */;
      int64_t _binop_188 = (({ _j_161;}) + ({int64_t _literal_187 = 1; _literal_187;}));
      _j_161 = _binop_188;
      _for_162 = UNIT;
      _index_163 = (_index_163 + _step_167);
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
    void* _for_189;
    /* Range not generated */;
    int64_t _literal_196 = 0;
    int64_t _literal_197 = 1;
    int64_t _literal_198 = 1;
    int64_t _step_194 = (_literal_198 * _literal_197);
    range_assert_step(_step_194);
    int64_t _index_190;
    if ((_step_194 > 0))
    {
      _index_190 = _literal_196;
    }
    else
    {
      _index_190 = _max_121;
    };
    while (((_index_190 >= _literal_196) && (_index_190 <= _max_121)))
    {
      int64_t _derp_191 = _index_190;
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
      int64_t _binop_201 = (({ _derp_191;}) % ({int64_t _literal_200 = 4; _literal_200;}));
      void* _match_199;
      if ((({int64_t _valueCheck_245;
             _valueCheck_245 = (({int64_t _literal_246 = 0; _literal_246;}) == _binop_201); _valueCheck_245;}) && ({int64_t _literal_247 = 1/*True*/; _literal_247;})))
      {
        _match_199 = ((void*) ({/* agents[i] = new Agent((x + dx, y + dy), 
                      copy_tr(agent_waypoints), 
                      i) */;
                                _enc__passive_Agent_t* _new_202 = _enc__constructor_Agent(_ctx);
                                tuple_t* _tuple_203 = tuple_mk(_ctx, 2);
                                tuple_set_type(_tuple_203, 0, ENCORE_PRIMITIVE);
                                tuple_set_type(_tuple_203, 1, ENCORE_PRIMITIVE);
                                int64_t _binop_204 = (({ _x_128;}) + ({ _dx_151;}));
                                int64_t _binop_205 = (({ _y_135;}) + ({ _dy_153;}));
                                tuple_set(_tuple_203, 0, ((encore_arg_t) {.i = _binop_204}));
                                tuple_set(_tuple_203, 1, ((encore_arg_t) {.i = _binop_205}));
                                pony_type_t* _tmp_206[] = {};
                                array_t* _global_f_207 = _enc__global_fun_copy_tr(_ctx, NULL, _agent_waypoints_159);
                                _enc__type_init_Agent(_new_202);
                                _enc__method_Agent__init(_ctx, _new_202, _tuple_203, _global_f_207, _i_103);
                                array_set(_agents_101, _i_103, ((encore_arg_t) {.p = _new_202}));
                                /* if dx == 0 then
  {dx = dy + 1;
   dy = 0}
else
  {dx = dx - 1;
   dy = dy + 1} */;
                                void* _ite_208;
                                if (({int64_t _binop_210 = (({ _dx_151;}) == ({int64_t _literal_209 = 0; _literal_209;})); _binop_210;}))
                                {
                                  /* dx = dy + 1 */;
                                  int64_t _binop_212 = (({ _dy_153;}) + ({int64_t _literal_211 = 1; _literal_211;}));
                                  _dx_151 = _binop_212;
                                  /* dy = 0 */;
                                  int64_t _literal_213 = 0;
                                  _dy_153 = _literal_213;
                                  _ite_208 = ((void*) UNIT);
                                }
                                else
                                {
                                  /* dx = dx - 1 */;
                                  int64_t _binop_215 = (({ _dx_151;}) - ({int64_t _literal_214 = 1; _literal_214;}));
                                  _dx_151 = _binop_215;
                                  /* dy = dy + 1 */;
                                  int64_t _binop_217 = (({ _dy_153;}) + ({int64_t _literal_216 = 1; _literal_216;}));
                                  _dy_153 = _binop_217;
                                  _ite_208 = ((void*) UNIT);
                                }; _ite_208;}));
      }
      else
      {
        if ((({int64_t _valueCheck_242;
               _valueCheck_242 = (({int64_t _literal_243 = 1; _literal_243;}) == _binop_201); _valueCheck_242;}) && ({int64_t _literal_244 = 1/*True*/; _literal_244;})))
        {
          _match_199 = ((void*) ({/* agents[i] = new Agent((x + dx, y - dy), 
                      copy_tr(agent_waypoints), 
                      i) */;
                                  _enc__passive_Agent_t* _new_218 = _enc__constructor_Agent(_ctx);
                                  tuple_t* _tuple_219 = tuple_mk(_ctx, 2);
                                  tuple_set_type(_tuple_219, 0, ENCORE_PRIMITIVE);
                                  tuple_set_type(_tuple_219, 1, ENCORE_PRIMITIVE);
                                  int64_t _binop_220 = (({ _x_128;}) + ({ _dx_151;}));
                                  int64_t _binop_221 = (({ _y_135;}) - ({ _dy_153;}));
                                  tuple_set(_tuple_219, 0, ((encore_arg_t) {.i = _binop_220}));
                                  tuple_set(_tuple_219, 1, ((encore_arg_t) {.i = _binop_221}));
                                  pony_type_t* _tmp_222[] = {};
                                  array_t* _global_f_223 = _enc__global_fun_copy_tr(_ctx, NULL, _agent_waypoints_159);
                                  _enc__type_init_Agent(_new_218);
                                  _enc__method_Agent__init(_ctx, _new_218, _tuple_219, _global_f_223, _i_103);
                                  array_set(_agents_101, _i_103, ((encore_arg_t) {.p = _new_218})); UNIT;}));
        }
        else
        {
          if ((({int64_t _valueCheck_239;
                 _valueCheck_239 = (({int64_t _literal_240 = 2; _literal_240;}) == _binop_201); _valueCheck_239;}) && ({int64_t _literal_241 = 1/*True*/; _literal_241;})))
          {
            _match_199 = ((void*) ({/* agents[i] = new Agent((x - dx, y + dy), 
                      copy_tr(agent_waypoints), 
                      i) */;
                                    _enc__passive_Agent_t* _new_224 = _enc__constructor_Agent(_ctx);
                                    tuple_t* _tuple_225 = tuple_mk(_ctx, 2);
                                    tuple_set_type(_tuple_225, 0, ENCORE_PRIMITIVE);
                                    tuple_set_type(_tuple_225, 1, ENCORE_PRIMITIVE);
                                    int64_t _binop_226 = (({ _x_128;}) - ({ _dx_151;}));
                                    int64_t _binop_227 = (({ _y_135;}) + ({ _dy_153;}));
                                    tuple_set(_tuple_225, 0, ((encore_arg_t) {.i = _binop_226}));
                                    tuple_set(_tuple_225, 1, ((encore_arg_t) {.i = _binop_227}));
                                    pony_type_t* _tmp_228[] = {};
                                    array_t* _global_f_229 = _enc__global_fun_copy_tr(_ctx, NULL, _agent_waypoints_159);
                                    _enc__type_init_Agent(_new_224);
                                    _enc__method_Agent__init(_ctx, _new_224, _tuple_225, _global_f_229, _i_103);
                                    array_set(_agents_101, _i_103, ((encore_arg_t) {.p = _new_224})); UNIT;}));
          }
          else
          {
            if ((({int64_t _valueCheck_236;
                   _valueCheck_236 = (({int64_t _literal_237 = 3; _literal_237;}) == _binop_201); _valueCheck_236;}) && ({int64_t _literal_238 = 1/*True*/; _literal_238;})))
            {
              _match_199 = ((void*) ({/* agents[i] = new Agent((x - dx, y - dy), 
                      copy_tr(agent_waypoints), 
                      i) */;
                                      _enc__passive_Agent_t* _new_230 = _enc__constructor_Agent(_ctx);
                                      tuple_t* _tuple_231 = tuple_mk(_ctx, 2);
                                      tuple_set_type(_tuple_231, 0, ENCORE_PRIMITIVE);
                                      tuple_set_type(_tuple_231, 1, ENCORE_PRIMITIVE);
                                      int64_t _binop_232 = (({ _x_128;}) - ({ _dx_151;}));
                                      int64_t _binop_233 = (({ _y_135;}) - ({ _dy_153;}));
                                      tuple_set(_tuple_231, 0, ((encore_arg_t) {.i = _binop_232}));
                                      tuple_set(_tuple_231, 1, ((encore_arg_t) {.i = _binop_233}));
                                      pony_type_t* _tmp_234[] = {};
                                      array_t* _global_f_235 = _enc__global_fun_copy_tr(_ctx, NULL, _agent_waypoints_159);
                                      _enc__type_init_Agent(_new_230);
                                      _enc__method_Agent__init(_ctx, _new_230, _tuple_231, _global_f_235, _i_103);
                                      array_set(_agents_101, _i_103, ((encore_arg_t) {.p = _new_230})); UNIT;}));
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
      int64_t _binop_249 = (({ _i_103;}) + ({int64_t _literal_248 = 1; _literal_248;}));
      _i_103 = _binop_249;
      _for_189 = UNIT;
      _index_190 = (_index_190 + _step_194);
    };
    _for_104 = _for_189;
    _index_105 = (_index_105 + _step_109);
  };
  /* agents */;
  return _agents_101;
}


future_t* _enc__method_Main__init_future(pony_ctx_t** _ctx, _enc__active_Main_t* _this)
{
  future_t* _fut = future_mk(_ctx, ENCORE_PRIMITIVE);
  pony_gc_send((*_ctx));
  pony_traceobject((*_ctx), _fut, future_trace);
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
  pony_traceobject((*_ctx), _fut, future_trace);
  pony_send_done((*_ctx));
  _enc__fut_msg_Main_main_t* msg = ((_enc__fut_msg_Main_main_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__fut_msg_Main_main_t)), _ENC__FUT_MSG_Main_main));
  msg->_fut = _fut;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
  return _fut;
}


future_t* _enc__method_Main_parse_file_future(pony_ctx_t** _ctx, _enc__active_Main_t* _this, _enc__passive_String_t* _enc__arg_fname)
{
  future_t* _fut = future_mk(_ctx, (&(array_type)));
  pony_gc_send((*_ctx));
  pony_traceobject((*_ctx), _enc__arg_fname, _enc__trace_String);
  pony_traceobject((*_ctx), _fut, future_trace);
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


void _enc__method_Main_parse_file_one_way(pony_ctx_t** _ctx, _enc__active_Main_t* _this, _enc__passive_String_t* _enc__arg_fname)
{
  pony_gc_send((*_ctx));
  pony_traceobject((*_ctx), _enc__arg_fname, _enc__trace_String);
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
      pony_traceobject((*_ctx), _fut, future_type.trace);
      pony_traceobject((*_ctx), _task, NULL);
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
      pony_traceobject((*_ctx), _fut, future_type.trace);
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
    case _ENC__FUT_MSG_Main_parse_file:
    {
      future_t* _fut = ((encore_fut_msg_t*) _m)->_fut;
      _enc__passive_String_t* _enc__arg_fname = ((_enc__fut_msg_Main_parse_file_t*) _m)->f1;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      pony_traceobject((*_ctx), _enc__arg_fname, _enc__trace_String);
      pony_traceobject((*_ctx), _fut, future_type.trace);
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
      pony_traceobject((*_ctx), _enc__arg_fname, _enc__trace_String);
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
