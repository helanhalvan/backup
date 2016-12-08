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


struct _enc__active__main_Main_t
{
  encore_actor_t _enc__actor;
};


void _enc__type_init__main_Main(_enc__active__main_Main_t* this, ... )
{
  va_list params;
  va_start(params, this);
  va_end(params);
}


void _enc__trace__main_Main(pony_ctx_t* _ctx_arg, void* p)
{
  pony_ctx_t** _ctx = (&(_ctx_arg));
  _enc__active__main_Main_t* _this = p;
}


_enc__active__main_Main_t* _enc__constructor__main_Main(pony_ctx_t** _ctx)
{
  _enc__active__main_Main_t* this = ((_enc__active__main_Main_t*) encore_create((*_ctx), (&(_enc__active__main_Main_type))));
  return this;
}


void* _enc__method__main_Main__init(pony_ctx_t** _ctx, _enc__active__main_Main_t* _this)
{
  UNIT;
  return UNIT;
}


void* _enc__method__main_Main_main(pony_ctx_t** _ctx, _enc__active__main_Main_t* _this, array_t* _argv)
{
  /* let superbox = new Top_Box(this.parse_file("scenario.xml"))
    x_size = 0
    y_size = 0
    aui = false
    sdl_main = null : SDL_Main
in
  {print("constructor-done!\n");
   if aui then
     {sdl_main = new SDL_Main(1000, 1000);
      get sdl_main.clearAll();
      get sdl_main.refresh();
      superbox!start();
      this!loop(superbox, 0, aui, sdl_main)}
   else
     superbox!start()} */;
  /* superbox = new Top_Box(this.parse_file("scenario.xml")) */;
  _enc__active__encore_libs_master_Ped_util_Box_Top_Box_t* _new_0 = _enc__constructor__encore_libs_master_Ped_util_Box_Top_Box(_ctx);
  check_receiver(_this, ".", "this", "parse_file", "\"main.enc\" (line 20, column 31)");
  _enc__passive_String_String_t* _new_2 = _enc__constructor_String_String(_ctx);
  char* _embed_3 = ({"scenario.xml";});
  _enc__type_init_String_String(_new_2);
  _enc__method_String_String__init(_ctx, _new_2, _embed_3);
  array_t* _sync_method_call_1 = _enc__method__main_Main_parse_file(_ctx, _this, _new_2);
  _enc__type_init__encore_libs_master_Ped_util_Box_Top_Box(_new_0);
  _enc__method__encore_libs_master_Ped_util_Box_Top_Box__init_one_way(_ctx, _new_0, ((array_t*) _sync_method_call_1));
  _enc__active__encore_libs_master_Ped_util_Box_Top_Box_t* _superbox_4 = _new_0;
  /* x_size = 0 */;
  int64_t _literal_5 = 0;
  int64_t _x_size_6 = _literal_5;
  /* y_size = 0 */;
  int64_t _literal_7 = 0;
  int64_t _y_size_8 = _literal_7;
  /* aui = false */;
  int64_t _literal_9 = 0/*False*/;
  int64_t _aui_10 = _literal_9;
  /* sdl_main = null : SDL_Main */;
  _enc__active__encore_libs_master_SDL_SDL_Main_SDL_Main_t* _literal_11 = NULL;
  _enc__active__encore_libs_master_SDL_SDL_Main_SDL_Main_t* _cast_12 = ((_enc__active__encore_libs_master_SDL_SDL_Main_SDL_Main_t*) _literal_11);
  _enc__active__encore_libs_master_SDL_SDL_Main_SDL_Main_t* _sdl_main_13 = _cast_12;
  /* print("constructor-done!\n") */;
  char* _literal_14 = "constructor-done!\n";
  printf("%s", _literal_14);
  /* if aui then
  {sdl_main = new SDL_Main(1000, 1000);
   get sdl_main.clearAll();
   get sdl_main.refresh();
   superbox!start();
   this!loop(superbox, 0, aui, sdl_main)}
else
  superbox!start() */;
  void* _ite_15;
  if (({ _aui_10;}))
  {
    /* sdl_main = new SDL_Main(1000, 1000) */;
    _enc__active__encore_libs_master_SDL_SDL_Main_SDL_Main_t* _new_16 = _enc__constructor__encore_libs_master_SDL_SDL_Main_SDL_Main(_ctx);
    int64_t _literal_17 = 1000;
    int64_t _literal_18 = 1000;
    _enc__type_init__encore_libs_master_SDL_SDL_Main_SDL_Main(_new_16);
    _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Main__init_one_way(_ctx, _new_16, _literal_17, _literal_18);
    _sdl_main_13 = _new_16;
    /* get sdl_main.clearAll() */;
    check_receiver(_sdl_main_13, ".", "sdl_main", "clearAll", "\"main.enc\" (line 31, column 12)");
    future_t* _fut_19 = _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Main_clearAll_future(_ctx, _sdl_main_13);
    void* _tmp_20 = future_get_actor(_ctx, _fut_19).p;
    /* get sdl_main.refresh() */;
    check_receiver(_sdl_main_13, ".", "sdl_main", "refresh", "\"main.enc\" (line 32, column 12)");
    future_t* _fut_21 = _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Main_refresh_future(_ctx, _sdl_main_13);
    void* _tmp_22 = future_get_actor(_ctx, _fut_21).p;
    /* superbox!start() */;
    check_receiver(_superbox_4, " ! ", "superbox", "start", "\"main.enc\" (line 33, column 16)");
    _enc__method__encore_libs_master_Ped_util_Box_Top_Box_start_one_way(_ctx, _superbox_4);
    /* this!loop(superbox, 0, aui, sdl_main) */;
    check_receiver(_this, " ! ", "this", "loop", "\"main.enc\" (line 34, column 12)");
    int64_t _literal_23 = 0;
    _enc__method__main_Main_loop_one_way(_ctx, _this, _superbox_4, _literal_23, _aui_10, _sdl_main_13);
    _ite_15 = ((void*) UNIT);
  }
  else
  {
    /* superbox!start() */;
    check_receiver(_superbox_4, " ! ", "superbox", "start", "\"main.enc\" (line 36, column 21)");
    _enc__method__encore_libs_master_Ped_util_Box_Top_Box_start_one_way(_ctx, _superbox_4);
    _ite_15 = ((void*) UNIT);
  };
  return UNIT;
}


void* _enc__method__main_Main_loop(pony_ctx_t** _ctx, _enc__active__main_Main_t* _this, _enc__active__encore_libs_master_Ped_util_Box_Top_Box_t* _enc__arg_superbox, int64_t _enc__arg_tick, int64_t _enc__arg_ui, _enc__active__encore_libs_master_SDL_SDL_Main_SDL_Main_t* _enc__arg_sdl_main)
{
  /* print("tick {}\n", tick) */;
  printf("tick %lli\n", _enc__arg_tick);
  /* if ui then
  {get sdl_main.clearAll();
   get sdl_main.setRenderColor(new ColorRGBA(240, 240, 240, 0));
   for a in get superbox.agents()
     match a with
       (x, y) => get sdl_main.fillRectangle(new Rectangle(x * 4, 
                                                          y * 4, 
                                                          1, 
                                                          1))
       _ => print("AGENT GOT NO POS!?\n")
     ;
   get sdl_main.setRenderColor(new ColorRGBA(0, 240, 0, 0));
   get sdl_main.fillRectangle(new Rectangle(160 * 4, 60 * 4, 3, 3));
   get sdl_main.refresh()} */;
  void* _ite_0;
  if (({ _enc__arg_ui;}))
  {
    /* get sdl_main.clearAll() */;
    check_receiver(_enc__arg_sdl_main, ".", "sdl_main", "clearAll", "\"main.enc\" (line 44, column 12)");
    future_t* _fut_1 = _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Main_clearAll_future(_ctx, _enc__arg_sdl_main);
    void* _tmp_2 = future_get_actor(_ctx, _fut_1).p;
    /* get sdl_main.setRenderColor(new ColorRGBA(240, 240, 240, 0)) */;
    check_receiver(_enc__arg_sdl_main, ".", "sdl_main", "setRenderColor", "\"main.enc\" (line 45, column 12)");
    _enc__passive__encore_libs_master_SDL_SDL_Primitives_ColorRGBA_t* _new_4 = _enc__constructor__encore_libs_master_SDL_SDL_Primitives_ColorRGBA(_ctx);
    int64_t _literal_5 = 240;
    int64_t _literal_6 = 240;
    int64_t _literal_7 = 240;
    int64_t _literal_8 = 0;
    _enc__type_init__encore_libs_master_SDL_SDL_Primitives_ColorRGBA(_new_4);
    _enc__method__encore_libs_master_SDL_SDL_Primitives_ColorRGBA__init(_ctx, _new_4, _literal_5, _literal_6, _literal_7, _literal_8);
    future_t* _fut_3 = _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Main_setRenderColor_future(_ctx, _enc__arg_sdl_main, _new_4);
    void* _tmp_9 = future_get_actor(_ctx, _fut_3).p;
    /* for a in get superbox.agents()
  match a with
    (x, y) => get sdl_main.fillRectangle(new Rectangle(x * 4, 
                                                       y * 4, 
                                                       1, 
                                                       1))
    _ => print("AGENT GOT NO POS!?\n")
   */;
    void* _for_10;
    check_receiver(_enc__arg_superbox, ".", "superbox", "agents", "\"main.enc\" (line 46, column 21)");
    future_t* _fut_17 = _enc__method__encore_libs_master_Ped_util_Box_Top_Box_agents_future(_ctx, _enc__arg_superbox);
    array_t* _tmp_18 = future_get_actor(_ctx, _fut_17).p;
    int64_t _start_13 = 0;
    int64_t _stop_14 = (array_size(_tmp_18) - 1);
    int64_t _src_step_16 = 1;
    int64_t _literal_19 = 1;
    int64_t _step_15 = (_literal_19 * _src_step_16);
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
      tuple_t* _a_12 = array_get(_tmp_18, _index_11).p;
      /* match a with
  (x, y) => get sdl_main.fillRectangle(new Rectangle(x * 4, 
                                                     y * 4, 
                                                     1, 
                                                     1))
  _ => print("AGENT GOT NO POS!?\n")
 */;
      void* _match_20;
      int64_t _x_21;
      int64_t _y_22;
      if ((({int64_t _tupleCheck_36;
             _tupleCheck_36 = 1;
             int64_t _tupleAccess_37 = tuple_get(_a_12, 0).i;
             int64_t _varBinding_38;
             _x_21 = _tupleAccess_37;
             _varBinding_38 = 1;
             _tupleCheck_36 = (_tupleCheck_36 && _varBinding_38);
             int64_t _tupleAccess_39 = tuple_get(_a_12, 1).i;
             int64_t _varBinding_40;
             _y_22 = _tupleAccess_39;
             _varBinding_40 = 1;
             _tupleCheck_36 = (_tupleCheck_36 && _varBinding_40); _tupleCheck_36;}) && ({int64_t _literal_41 = 1/*True*/; _literal_41;})))
      {
        _match_20 = ((void*) ({/* get sdl_main.fillRectangle(new Rectangle(x * 4, y * 4, 1, 1)) */;
                               check_receiver(_enc__arg_sdl_main, ".", "sdl_main", "fillRectangle", "\"main.enc\" (line 50, column 33)");
                               _enc__passive__encore_libs_master_SDL_SDL_Primitives_Rectangle_t* _new_24 = _enc__constructor__encore_libs_master_SDL_SDL_Primitives_Rectangle(_ctx);
                               int64_t _binop_26 = (({ _x_21;}) * ({int64_t _literal_25 = 4; _literal_25;}));
                               int64_t _binop_28 = (({ _y_22;}) * ({int64_t _literal_27 = 4; _literal_27;}));
                               int64_t _literal_29 = 1;
                               int64_t _literal_30 = 1;
                               _enc__type_init__encore_libs_master_SDL_SDL_Primitives_Rectangle(_new_24);
                               _enc__method__encore_libs_master_SDL_SDL_Primitives_Rectangle__init(_ctx, _new_24, _binop_26, _binop_28, _literal_29, _literal_30);
                               future_t* _fut_23 = _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Main_fillRectangle_future(_ctx, _enc__arg_sdl_main, _new_24);
                               void* _tmp_31 = future_get_actor(_ctx, _fut_23).p; _tmp_31;}));
      }
      else
      {
        tuple_t* ___32;
        if ((({int64_t _varBinding_34;
               ___32 = _a_12;
               _varBinding_34 = 1; _varBinding_34;}) && ({int64_t _literal_35 = 1/*True*/; _literal_35;})))
        {
          _match_20 = ((void*) ({char* _literal_33 = "AGENT GOT NO POS!?\n";
                                 printf("%s", _literal_33); UNIT;}));
        }
        else
        {
          printf("*** Runtime error: No matching clause was found ***\n");
          exit(1);
        };
      };
      _for_10 = _match_20;
      _index_11 = (_index_11 + _step_15);
    };
    /* get sdl_main.setRenderColor(new ColorRGBA(0, 240, 0, 0)) */;
    check_receiver(_enc__arg_sdl_main, ".", "sdl_main", "setRenderColor", "\"main.enc\" (line 53, column 12)");
    _enc__passive__encore_libs_master_SDL_SDL_Primitives_ColorRGBA_t* _new_43 = _enc__constructor__encore_libs_master_SDL_SDL_Primitives_ColorRGBA(_ctx);
    int64_t _literal_44 = 0;
    int64_t _literal_45 = 240;
    int64_t _literal_46 = 0;
    int64_t _literal_47 = 0;
    _enc__type_init__encore_libs_master_SDL_SDL_Primitives_ColorRGBA(_new_43);
    _enc__method__encore_libs_master_SDL_SDL_Primitives_ColorRGBA__init(_ctx, _new_43, _literal_44, _literal_45, _literal_46, _literal_47);
    future_t* _fut_42 = _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Main_setRenderColor_future(_ctx, _enc__arg_sdl_main, _new_43);
    void* _tmp_48 = future_get_actor(_ctx, _fut_42).p;
    /* get sdl_main.fillRectangle(new Rectangle(160 * 4, 60 * 4, 3, 3)) */;
    check_receiver(_enc__arg_sdl_main, ".", "sdl_main", "fillRectangle", "\"main.enc\" (line 54, column 12)");
    _enc__passive__encore_libs_master_SDL_SDL_Primitives_Rectangle_t* _new_50 = _enc__constructor__encore_libs_master_SDL_SDL_Primitives_Rectangle(_ctx);
    int64_t _binop_53 = (({int64_t _literal_51 = 160; _literal_51;}) * ({int64_t _literal_52 = 4; _literal_52;}));
    int64_t _binop_56 = (({int64_t _literal_54 = 60; _literal_54;}) * ({int64_t _literal_55 = 4; _literal_55;}));
    int64_t _literal_57 = 3;
    int64_t _literal_58 = 3;
    _enc__type_init__encore_libs_master_SDL_SDL_Primitives_Rectangle(_new_50);
    _enc__method__encore_libs_master_SDL_SDL_Primitives_Rectangle__init(_ctx, _new_50, _binop_53, _binop_56, _literal_57, _literal_58);
    future_t* _fut_49 = _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Main_fillRectangle_future(_ctx, _enc__arg_sdl_main, _new_50);
    void* _tmp_59 = future_get_actor(_ctx, _fut_49).p;
    /* get sdl_main.refresh() */;
    check_receiver(_enc__arg_sdl_main, ".", "sdl_main", "refresh", "\"main.enc\" (line 55, column 12)");
    future_t* _fut_60 = _enc__method__encore_libs_master_SDL_SDL_Main_SDL_Main_refresh_future(_ctx, _enc__arg_sdl_main);
    void* _tmp_61 = future_get_actor(_ctx, _fut_60).p;
    _ite_0 = ((void*) _tmp_61);
  }
  else
  {
    UNIT;
    _ite_0 = ((void*) UNIT);
  };
  /* this!loop(superbox, tick + 1, ui, sdl_main) */;
  check_receiver(_this, " ! ", "this", "loop", "\"main.enc\" (line 57, column 13)");
  int64_t _binop_63 = (({ _enc__arg_tick;}) + ({int64_t _literal_62 = 1; _literal_62;}));
  _enc__method__main_Main_loop_one_way(_ctx, _this, _enc__arg_superbox, _binop_63, _enc__arg_ui, _enc__arg_sdl_main);
  return UNIT;
}


array_t* _enc__method__main_Main_parse_file(pony_ctx_t** _ctx, _enc__active__main_Main_t* _this, _enc__passive_String_String_t* _enc__arg_fname)
{
  /* let sen = new XML_lib()
    file = new XML_node()
in
  {match sen.file_to_xml("scenario.xml") with
     Just xml => {file = xml;
                  print("\n\nWORKED!\n")}
     Nothing => print("\n\nBADXML!\n")
   ;
   let xml_way = file.children_named("waypoint")
       waypoints = new [(int, int)](|xml_way|)
       waypoints_distance = new [int](|xml_way|)
       i = 0
   in
     {for a in xml_way
        {waypoints[i] = match (a.attribute_value("x").to_int(), 
                               a.attribute_value("y").to_int()) with
                          (Just x, Just y) => (x, y)
                          _ => {print("BADINT!\n");
                                (0, 0)}
                        ;
         waypoints_distance[i] = int_or_0(a.attribute_value("r").to_int());
         i = i + 1};
      let nr_agents = 0;
      for a in file.children_named("agent")
        nr_agents = nr_agents + match a.attribute_value("n").to_int() with
                                  Just nr => nr
                                  _ => {print("BADINT2!\n");
                                        0}
                                ;
      let agents = new [Agent](nr_agents)
          i = 0
      in
        {for a in file.children_named("agent")
           let max = int_or_0(a.attribute_value("n").to_int())
               x = int_or_0(a.attribute_value("xs").to_int())
               y = int_or_0(a.attribute_value("ys").to_int())
               dx_max = int_or_0(a.attribute_value("dx").to_int())
               dy_max = int_or_0(a.attribute_value("dy").to_int())
               agent_waypoints = new [(int, int)](|a.children_named("addway")|)
               dx = x
               dy = y
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
              println((x, y, dx_max, dy_max, dx, dy, max));
              for unused in [ 0 , max by 1 ]
                {if dx > x + dx_max then
                   dx = x - dx_max
                 else
                   if dy > y + dy_max then
                     {dy = y - dy_max;
                      dx = dx + rand() % 4}
                   else
                     dy = dy + rand() % 4;
                 agents[i] = new Agent((dx, dy), 
                                       copy_tr(agent_waypoints), 
                                       copy_ar(waypoints_distance), 
                                       i, 
                                       40000);
                 i = i + 1}};
         print("checking\n");
         for a in agents
           if a != null and |a.targets| == 2 and |a.targets_size| == 2 then
             ()
           else
             print("AGENT HAVE {} WAYPOINTS\n", |a.targets|);
         agents}}} */;
  /* sen = new XML_lib() */;
  _enc__passive__encore_libs_master_XML_XML_XML_lib_t* _new_0 = _enc__constructor__encore_libs_master_XML_XML_XML_lib(_ctx);
  _enc__type_init__encore_libs_master_XML_XML_XML_lib(_new_0);
  _enc__method__encore_libs_master_XML_XML_XML_lib__init(_ctx, _new_0);
  _enc__passive__encore_libs_master_XML_XML_XML_lib_t* _sen_1 = _new_0;
  /* file = new XML_node() */;
  _enc__passive__encore_libs_master_XML_XML_XML_node_t* _new_2 = _enc__constructor__encore_libs_master_XML_XML_XML_node(_ctx);
  _enc__type_init__encore_libs_master_XML_XML_XML_node(_new_2);
  _enc__method__encore_libs_master_XML_XML_XML_node__init(_ctx, _new_2);
  _enc__passive__encore_libs_master_XML_XML_XML_node_t* _file_3 = _new_2;
  /* match sen.file_to_xml("scenario.xml") with
  Just xml => {file = xml;
               print("\n\nWORKED!\n")}
  Nothing => print("\n\nBADXML!\n")
 */;
  check_receiver(_sen_1, ".", "sen", "file_to_xml", "\"main.enc\" (line 65, column 22)");
  _enc__passive_String_String_t* _new_6 = _enc__constructor_String_String(_ctx);
  char* _embed_7 = ({"scenario.xml";});
  _enc__type_init_String_String(_new_6);
  _enc__method_String_String__init(_ctx, _new_6, _embed_7);
  option_t* _sync_method_call_5 = _enc__method__encore_libs_master_XML_XML_XML_lib_file_to_xml(_ctx, _sen_1, _new_6);
  void* _match_4;
  _enc__passive__encore_libs_master_XML_XML_XML_node_t* _xml_8;
  if ((({int64_t _optionCheck_15;
         _optionCheck_15 = ((JUST == (*_sync_method_call_5).tag) && ({int64_t _varBinding_16;
                                                                      _enc__passive__encore_libs_master_XML_XML_XML_node_t* _optionVal_14 = (*_sync_method_call_5).val.p;
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
  /* let xml_way = file.children_named("waypoint")
    waypoints = new [(int, int)](|xml_way|)
    waypoints_distance = new [int](|xml_way|)
    i = 0
in
  {for a in xml_way
     {waypoints[i] = match (a.attribute_value("x").to_int(), 
                            a.attribute_value("y").to_int()) with
                       (Just x, Just y) => (x, y)
                       _ => {print("BADINT!\n");
                             (0, 0)}
                     ;
      waypoints_distance[i] = int_or_0(a.attribute_value("r").to_int());
      i = i + 1};
   let nr_agents = 0;
   for a in file.children_named("agent")
     nr_agents = nr_agents + match a.attribute_value("n").to_int() with
                               Just nr => nr
                               _ => {print("BADINT2!\n");
                                     0}
                             ;
   let agents = new [Agent](nr_agents)
       i = 0
   in
     {for a in file.children_named("agent")
        let max = int_or_0(a.attribute_value("n").to_int())
            x = int_or_0(a.attribute_value("xs").to_int())
            y = int_or_0(a.attribute_value("ys").to_int())
            dx_max = int_or_0(a.attribute_value("dx").to_int())
            dy_max = int_or_0(a.attribute_value("dy").to_int())
            agent_waypoints = new [(int, int)](|a.children_named("addway")|)
            dx = x
            dy = y
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
           println((x, y, dx_max, dy_max, dx, dy, max));
           for unused in [ 0 , max by 1 ]
             {if dx > x + dx_max then
                dx = x - dx_max
              else
                if dy > y + dy_max then
                  {dy = y - dy_max;
                   dx = dx + rand() % 4}
                else
                  dy = dy + rand() % 4;
              agents[i] = new Agent((dx, dy), 
                                    copy_tr(agent_waypoints), 
                                    copy_ar(waypoints_distance), 
                                    i, 
                                    40000);
              i = i + 1}};
      print("checking\n");
      for a in agents
        if a != null and |a.targets| == 2 and |a.targets_size| == 2 then
          ()
        else
          print("AGENT HAVE {} WAYPOINTS\n", |a.targets|);
      agents}} */;
  /* xml_way = file.children_named("waypoint") */;
  check_receiver(_file_3, ".", "file", "children_named", "\"main.enc\" (line 69, column 27)");
  _enc__passive_String_String_t* _new_19 = _enc__constructor_String_String(_ctx);
  char* _embed_20 = ({"waypoint";});
  _enc__type_init_String_String(_new_19);
  _enc__method_String_String__init(_ctx, _new_19, _embed_20);
  array_t* _sync_method_call_18 = _enc__method__encore_libs_master_XML_XML_XML_node_children_named(_ctx, _file_3, _new_19);
  array_t* _xml_way_21 = _sync_method_call_18;
  /* waypoints = new [(int, int)](|xml_way|) */;
  int64_t _size_23 = array_size(_xml_way_21);
  array_t* _array_22 = array_mk(_ctx, _size_23, (&(tuple_type)));
  array_t* _waypoints_24 = _array_22;
  /* waypoints_distance = new [int](|xml_way|) */;
  int64_t _size_26 = array_size(_xml_way_21);
  array_t* _array_25 = array_mk(_ctx, _size_26, ENCORE_PRIMITIVE);
  array_t* _waypoints_distance_27 = _array_25;
  /* i = 0 */;
  int64_t _literal_28 = 0;
  int64_t _i_29 = _literal_28;
  /* for a in xml_way
  {waypoints[i] = match (a.attribute_value("x").to_int(), 
                         a.attribute_value("y").to_int()) with
                    (Just x, Just y) => (x, y)
                    _ => {print("BADINT!\n");
                          (0, 0)}
                  ;
   waypoints_distance[i] = int_or_0(a.attribute_value("r").to_int());
   i = i + 1} */;
  void* _for_30;
  int64_t _start_33 = 0;
  int64_t _stop_34 = (array_size(_xml_way_21) - 1);
  int64_t _src_step_36 = 1;
  int64_t _literal_37 = 1;
  int64_t _step_35 = (_literal_37 * _src_step_36);
  range_assert_step(_step_35);
  int64_t _index_31;
  if ((_step_35 > 0))
  {
    _index_31 = _start_33;
  }
  else
  {
    _index_31 = _stop_34;
  };
  while (((_index_31 >= _start_33) && (_index_31 <= _stop_34)))
  {
    _enc__passive__encore_libs_master_XML_XML_XML_node_t* _a_32 = array_get(_xml_way_21, _index_31).p;
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
    tuple_t* _tuple_39 = tuple_mk(_ctx, 2);
    tuple_set_type(_tuple_39, 0, (&(option_type)));
    tuple_set_type(_tuple_39, 1, (&(option_type)));
    check_receiver(_a_32, ".", "a", "attribute_value", "\"main.enc\" (line 77, column 28)");
    _enc__passive_String_String_t* _new_42 = _enc__constructor_String_String(_ctx);
    char* _embed_43 = ({"x";});
    _enc__type_init_String_String(_new_42);
    _enc__method_String_String__init(_ctx, _new_42, _embed_43);
    _enc__passive_String_String_t* _sync_method_call_41 = _enc__method__encore_libs_master_XML_XML_XML_node_attribute_value(_ctx, _a_32, _new_42);
    check_receiver(_sync_method_call_41, ".", "a.attribute_value(new String.String(embed char* \"x\"; end))", "to_int", "\"main.enc\" (line 77, column 28)");
    option_t* _sync_method_call_40 = _enc__method_String_String_to_int(_ctx, _sync_method_call_41);
    check_receiver(_a_32, ".", "a", "attribute_value", "\"main.enc\" (line 77, column 60)");
    _enc__passive_String_String_t* _new_46 = _enc__constructor_String_String(_ctx);
    char* _embed_47 = ({"y";});
    _enc__type_init_String_String(_new_46);
    _enc__method_String_String__init(_ctx, _new_46, _embed_47);
    _enc__passive_String_String_t* _sync_method_call_45 = _enc__method__encore_libs_master_XML_XML_XML_node_attribute_value(_ctx, _a_32, _new_46);
    check_receiver(_sync_method_call_45, ".", "a.attribute_value(new String.String(embed char* \"y\"; end))", "to_int", "\"main.enc\" (line 77, column 60)");
    option_t* _sync_method_call_44 = _enc__method_String_String_to_int(_ctx, _sync_method_call_45);
    tuple_set(_tuple_39, 0, ((encore_arg_t) {.p = _sync_method_call_40}));
    tuple_set(_tuple_39, 1, ((encore_arg_t) {.p = _sync_method_call_44}));
    tuple_t* _match_38;
    int64_t _x_48;
    int64_t _y_49;
    if ((({int64_t _tupleCheck_58;
           _tupleCheck_58 = 1;
           option_t* _tupleAccess_59 = tuple_get(_tuple_39, 0).p;
           int64_t _optionCheck_61;
           _optionCheck_61 = ((JUST == (*_tupleAccess_59).tag) && ({int64_t _varBinding_62;
                                                                    int64_t _optionVal_60 = (*_tupleAccess_59).val.i;
                                                                    _x_48 = _optionVal_60;
                                                                    _varBinding_62 = 1; _varBinding_62;}));
           _tupleCheck_58 = (_tupleCheck_58 && _optionCheck_61);
           option_t* _tupleAccess_63 = tuple_get(_tuple_39, 1).p;
           int64_t _optionCheck_65;
           _optionCheck_65 = ((JUST == (*_tupleAccess_63).tag) && ({int64_t _varBinding_66;
                                                                    int64_t _optionVal_64 = (*_tupleAccess_63).val.i;
                                                                    _y_49 = _optionVal_64;
                                                                    _varBinding_66 = 1; _varBinding_66;}));
           _tupleCheck_58 = (_tupleCheck_58 && _optionCheck_65); _tupleCheck_58;}) && ({int64_t _literal_67 = 1/*True*/; _literal_67;})))
    {
      _match_38 = ((tuple_t*) ({tuple_t* _tuple_50 = tuple_mk(_ctx, 2);
                                tuple_set_type(_tuple_50, 0, ENCORE_PRIMITIVE);
                                tuple_set_type(_tuple_50, 1, ENCORE_PRIMITIVE);
                                tuple_set(_tuple_50, 0, ((encore_arg_t) {.i = _x_48}));
                                tuple_set(_tuple_50, 1, ((encore_arg_t) {.i = _y_49})); _tuple_50;}));
    }
    else
    {
      tuple_t* ___51;
      if ((({int64_t _varBinding_56;
             ___51 = _tuple_39;
             _varBinding_56 = 1; _varBinding_56;}) && ({int64_t _literal_57 = 1/*True*/; _literal_57;})))
      {
        _match_38 = ((tuple_t*) ({/* print("BADINT!\n") */;
                                  char* _literal_52 = "BADINT!\n";
                                  printf("%s", _literal_52);
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
    array_set(_waypoints_24, _i_29, ((encore_arg_t) {.p = _match_38}));
    /* waypoints_distance[i] = int_or_0(a.attribute_value("r").to_int()) */;
    check_receiver(_a_32, ".", "a", "attribute_value", "\"main.enc\" (line 80, column 53)");
    _enc__passive_String_String_t* _new_70 = _enc__constructor_String_String(_ctx);
    char* _embed_71 = ({"r";});
    _enc__type_init_String_String(_new_70);
    _enc__method_String_String__init(_ctx, _new_70, _embed_71);
    _enc__passive_String_String_t* _sync_method_call_69 = _enc__method__encore_libs_master_XML_XML_XML_node_attribute_value(_ctx, _a_32, _new_70);
    check_receiver(_sync_method_call_69, ".", "a.attribute_value(new String.String(embed char* \"r\"; end))", "to_int", "\"main.enc\" (line 80, column 53)");
    option_t* _sync_method_call_68 = _enc__method_String_String_to_int(_ctx, _sync_method_call_69);
    pony_type_t* _tmp_72[] = {};
    int64_t _global_f_73 = _enc__global_fun__encore_libs_master_Ped_util_Global_funsint_or_0(_ctx, NULL, _sync_method_call_68);
    array_set(_waypoints_distance_27, _i_29, ((encore_arg_t) {.i = _global_f_73}));
    /* i = i + 1 */;
    int64_t _binop_75 = (({ _i_29;}) + ({int64_t _literal_74 = 1; _literal_74;}));
    _i_29 = _binop_75;
    _for_30 = UNIT;
    _index_31 = (_index_31 + _step_35);
  };
  /* let nr_agents = 0 */;
  /* nr_agents = 0 */;
  int64_t _literal_76 = 0;
  int64_t _nr_agents_77 = _literal_76;
  /* for a in file.children_named("agent")
  nr_agents = nr_agents + match a.attribute_value("n").to_int() with
                            Just nr => nr
                            _ => {print("BADINT2!\n");
                                  0}
                           */;
  void* _for_78;
  check_receiver(_file_3, ".", "file", "children_named", "\"main.enc\" (line 87, column 25)");
  _enc__passive_String_String_t* _new_86 = _enc__constructor_String_String(_ctx);
  char* _embed_87 = ({"agent";});
  _enc__type_init_String_String(_new_86);
  _enc__method_String_String__init(_ctx, _new_86, _embed_87);
  array_t* _sync_method_call_85 = _enc__method__encore_libs_master_XML_XML_XML_node_children_named(_ctx, _file_3, _new_86);
  int64_t _start_81 = 0;
  int64_t _stop_82 = (array_size(_sync_method_call_85) - 1);
  int64_t _src_step_84 = 1;
  int64_t _literal_88 = 1;
  int64_t _step_83 = (_literal_88 * _src_step_84);
  range_assert_step(_step_83);
  int64_t _index_79;
  if ((_step_83 > 0))
  {
    _index_79 = _start_81;
  }
  else
  {
    _index_79 = _stop_82;
  };
  while (((_index_79 >= _start_81) && (_index_79 <= _stop_82)))
  {
    _enc__passive__encore_libs_master_XML_XML_XML_node_t* _a_80 = array_get(_sync_method_call_85, _index_79).p;
    /* nr_agents = nr_agents + match a.attribute_value("n").to_int() with
                          Just nr => nr
                          _ => {print("BADINT2!\n");
                                0}
                         */;
    int64_t _binop_104 = (({ _nr_agents_77;}) + ({/* match a.attribute_value("n").to_int() with
  Just nr => nr
  _ => {print("BADINT2!\n");
        0}
 */;
                                                  check_receiver(_a_80, ".", "a", "attribute_value", "\"main.enc\" (line 89, column 34)");
                                                  _enc__passive_String_String_t* _new_92 = _enc__constructor_String_String(_ctx);
                                                  char* _embed_93 = ({"n";});
                                                  _enc__type_init_String_String(_new_92);
                                                  _enc__method_String_String__init(_ctx, _new_92, _embed_93);
                                                  _enc__passive_String_String_t* _sync_method_call_91 = _enc__method__encore_libs_master_XML_XML_XML_node_attribute_value(_ctx, _a_80, _new_92);
                                                  check_receiver(_sync_method_call_91, ".", "a.attribute_value(new String.String(embed char* \"n\"; end))", "to_int", "\"main.enc\" (line 89, column 34)");
                                                  option_t* _sync_method_call_90 = _enc__method_String_String_to_int(_ctx, _sync_method_call_91);
                                                  int64_t _match_89;
                                                  int64_t _nr_94;
                                                  if ((({int64_t _optionCheck_101;
                                                         _optionCheck_101 = ((JUST == (*_sync_method_call_90).tag) && ({int64_t _varBinding_102;
                                                                                                                        int64_t _optionVal_100 = (*_sync_method_call_90).val.i;
                                                                                                                        _nr_94 = _optionVal_100;
                                                                                                                        _varBinding_102 = 1; _varBinding_102;})); _optionCheck_101;}) && ({int64_t _literal_103 = 1/*True*/; _literal_103;})))
                                                  {
                                                    _match_89 = ((int64_t) ({ _nr_94;}));
                                                  }
                                                  else
                                                  {
                                                    option_t* ___95;
                                                    if ((({int64_t _varBinding_98;
                                                           ___95 = _sync_method_call_90;
                                                           _varBinding_98 = 1; _varBinding_98;}) && ({int64_t _literal_99 = 1/*True*/; _literal_99;})))
                                                    {
                                                      _match_89 = ((int64_t) ({/* print("BADINT2!\n") */;
                                                                               char* _literal_96 = "BADINT2!\n";
                                                                               printf("%s", _literal_96);
                                                                               /* 0 */;
                                                                               int64_t _literal_97 = 0; _literal_97;}));
                                                    }
                                                    else
                                                    {
                                                      printf("*** Runtime error: No matching clause was found ***\n");
                                                      exit(1);
                                                    };
                                                  }; _match_89;}));
    _nr_agents_77 = _binop_104;
    _for_78 = UNIT;
    _index_79 = (_index_79 + _step_83);
  };
  /* let agents = new [Agent](nr_agents)
    i = 0
in
  {for a in file.children_named("agent")
     let max = int_or_0(a.attribute_value("n").to_int())
         x = int_or_0(a.attribute_value("xs").to_int())
         y = int_or_0(a.attribute_value("ys").to_int())
         dx_max = int_or_0(a.attribute_value("dx").to_int())
         dy_max = int_or_0(a.attribute_value("dy").to_int())
         agent_waypoints = new [(int, int)](|a.children_named("addway")|)
         dx = x
         dy = y
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
        println((x, y, dx_max, dy_max, dx, dy, max));
        for unused in [ 0 , max by 1 ]
          {if dx > x + dx_max then
             dx = x - dx_max
           else
             if dy > y + dy_max then
               {dy = y - dy_max;
                dx = dx + rand() % 4}
             else
               dy = dy + rand() % 4;
           agents[i] = new Agent((dx, dy), 
                                 copy_tr(agent_waypoints), 
                                 copy_ar(waypoints_distance), 
                                 i, 
                                 40000);
           i = i + 1}};
   print("checking\n");
   for a in agents
     if a != null and |a.targets| == 2 and |a.targets_size| == 2 then
       ()
     else
       print("AGENT HAVE {} WAYPOINTS\n", |a.targets|);
   agents} */;
  /* agents = new [Agent](nr_agents) */;
  array_t* _array_105 = array_mk(_ctx, _nr_agents_77, (&(_enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_type)));
  array_t* _agents_106 = _array_105;
  /* i = 0 */;
  int64_t _literal_107 = 0;
  int64_t _i_108 = _literal_107;
  /* for a in file.children_named("agent")
  let max = int_or_0(a.attribute_value("n").to_int())
      x = int_or_0(a.attribute_value("xs").to_int())
      y = int_or_0(a.attribute_value("ys").to_int())
      dx_max = int_or_0(a.attribute_value("dx").to_int())
      dy_max = int_or_0(a.attribute_value("dy").to_int())
      agent_waypoints = new [(int, int)](|a.children_named("addway")|)
      dx = x
      dy = y
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
     println((x, y, dx_max, dy_max, dx, dy, max));
     for unused in [ 0 , max by 1 ]
       {if dx > x + dx_max then
          dx = x - dx_max
        else
          if dy > y + dy_max then
            {dy = y - dy_max;
             dx = dx + rand() % 4}
          else
            dy = dy + rand() % 4;
        agents[i] = new Agent((dx, dy), 
                              copy_tr(agent_waypoints), 
                              copy_ar(waypoints_distance), 
                              i, 
                              40000);
        i = i + 1}} */;
  void* _for_109;
  check_receiver(_file_3, ".", "file", "children_named", "\"main.enc\" (line 97, column 37)");
  _enc__passive_String_String_t* _new_117 = _enc__constructor_String_String(_ctx);
  char* _embed_118 = ({"agent";});
  _enc__type_init_String_String(_new_117);
  _enc__method_String_String__init(_ctx, _new_117, _embed_118);
  array_t* _sync_method_call_116 = _enc__method__encore_libs_master_XML_XML_XML_node_children_named(_ctx, _file_3, _new_117);
  int64_t _start_112 = 0;
  int64_t _stop_113 = (array_size(_sync_method_call_116) - 1);
  int64_t _src_step_115 = 1;
  int64_t _literal_119 = 1;
  int64_t _step_114 = (_literal_119 * _src_step_115);
  range_assert_step(_step_114);
  int64_t _index_110;
  if ((_step_114 > 0))
  {
    _index_110 = _start_112;
  }
  else
  {
    _index_110 = _stop_113;
  };
  while (((_index_110 >= _start_112) && (_index_110 <= _stop_113)))
  {
    _enc__passive__encore_libs_master_XML_XML_XML_node_t* _a_111 = array_get(_sync_method_call_116, _index_110).p;
    /* let max = int_or_0(a.attribute_value("n").to_int())
    x = int_or_0(a.attribute_value("xs").to_int())
    y = int_or_0(a.attribute_value("ys").to_int())
    dx_max = int_or_0(a.attribute_value("dx").to_int())
    dy_max = int_or_0(a.attribute_value("dy").to_int())
    agent_waypoints = new [(int, int)](|a.children_named("addway")|)
    dx = x
    dy = y
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
   println((x, y, dx_max, dy_max, dx, dy, max));
   for unused in [ 0 , max by 1 ]
     {if dx > x + dx_max then
        dx = x - dx_max
      else
        if dy > y + dy_max then
          {dy = y - dy_max;
           dx = dx + rand() % 4}
        else
          dy = dy + rand() % 4;
      agents[i] = new Agent((dx, dy), 
                            copy_tr(agent_waypoints), 
                            copy_ar(waypoints_distance), 
                            i, 
                            40000);
      i = i + 1}} */;
    /* max = int_or_0(a.attribute_value("n").to_int()) */;
    check_receiver(_a_111, ".", "a", "attribute_value", "\"main.enc\" (line 99, column 51)");
    _enc__passive_String_String_t* _new_122 = _enc__constructor_String_String(_ctx);
    char* _embed_123 = ({"n";});
    _enc__type_init_String_String(_new_122);
    _enc__method_String_String__init(_ctx, _new_122, _embed_123);
    _enc__passive_String_String_t* _sync_method_call_121 = _enc__method__encore_libs_master_XML_XML_XML_node_attribute_value(_ctx, _a_111, _new_122);
    check_receiver(_sync_method_call_121, ".", "a.attribute_value(new String.String(embed char* \"n\"; end))", "to_int", "\"main.enc\" (line 99, column 51)");
    option_t* _sync_method_call_120 = _enc__method_String_String_to_int(_ctx, _sync_method_call_121);
    pony_type_t* _tmp_124[] = {};
    int64_t _global_f_125 = _enc__global_fun__encore_libs_master_Ped_util_Global_funsint_or_0(_ctx, NULL, _sync_method_call_120);
    int64_t _max_126 = _global_f_125;
    /* x = int_or_0(a.attribute_value("xs").to_int()) */;
    check_receiver(_a_111, ".", "a", "attribute_value", "\"main.enc\" (line 100, column 49)");
    _enc__passive_String_String_t* _new_129 = _enc__constructor_String_String(_ctx);
    char* _embed_130 = ({"xs";});
    _enc__type_init_String_String(_new_129);
    _enc__method_String_String__init(_ctx, _new_129, _embed_130);
    _enc__passive_String_String_t* _sync_method_call_128 = _enc__method__encore_libs_master_XML_XML_XML_node_attribute_value(_ctx, _a_111, _new_129);
    check_receiver(_sync_method_call_128, ".", "a.attribute_value(new String.String(embed char* \"xs\"; end))", "to_int", "\"main.enc\" (line 100, column 49)");
    option_t* _sync_method_call_127 = _enc__method_String_String_to_int(_ctx, _sync_method_call_128);
    pony_type_t* _tmp_131[] = {};
    int64_t _global_f_132 = _enc__global_fun__encore_libs_master_Ped_util_Global_funsint_or_0(_ctx, NULL, _sync_method_call_127);
    int64_t _x_133 = _global_f_132;
    /* y = int_or_0(a.attribute_value("ys").to_int()) */;
    check_receiver(_a_111, ".", "a", "attribute_value", "\"main.enc\" (line 101, column 49)");
    _enc__passive_String_String_t* _new_136 = _enc__constructor_String_String(_ctx);
    char* _embed_137 = ({"ys";});
    _enc__type_init_String_String(_new_136);
    _enc__method_String_String__init(_ctx, _new_136, _embed_137);
    _enc__passive_String_String_t* _sync_method_call_135 = _enc__method__encore_libs_master_XML_XML_XML_node_attribute_value(_ctx, _a_111, _new_136);
    check_receiver(_sync_method_call_135, ".", "a.attribute_value(new String.String(embed char* \"ys\"; end))", "to_int", "\"main.enc\" (line 101, column 49)");
    option_t* _sync_method_call_134 = _enc__method_String_String_to_int(_ctx, _sync_method_call_135);
    pony_type_t* _tmp_138[] = {};
    int64_t _global_f_139 = _enc__global_fun__encore_libs_master_Ped_util_Global_funsint_or_0(_ctx, NULL, _sync_method_call_134);
    int64_t _y_140 = _global_f_139;
    /* dx_max = int_or_0(a.attribute_value("dx").to_int()) */;
    check_receiver(_a_111, ".", "a", "attribute_value", "\"main.enc\" (line 102, column 54)");
    _enc__passive_String_String_t* _new_143 = _enc__constructor_String_String(_ctx);
    char* _embed_144 = ({"dx";});
    _enc__type_init_String_String(_new_143);
    _enc__method_String_String__init(_ctx, _new_143, _embed_144);
    _enc__passive_String_String_t* _sync_method_call_142 = _enc__method__encore_libs_master_XML_XML_XML_node_attribute_value(_ctx, _a_111, _new_143);
    check_receiver(_sync_method_call_142, ".", "a.attribute_value(new String.String(embed char* \"dx\"; end))", "to_int", "\"main.enc\" (line 102, column 54)");
    option_t* _sync_method_call_141 = _enc__method_String_String_to_int(_ctx, _sync_method_call_142);
    pony_type_t* _tmp_145[] = {};
    int64_t _global_f_146 = _enc__global_fun__encore_libs_master_Ped_util_Global_funsint_or_0(_ctx, NULL, _sync_method_call_141);
    int64_t _dx_max_147 = _global_f_146;
    /* dy_max = int_or_0(a.attribute_value("dy").to_int()) */;
    check_receiver(_a_111, ".", "a", "attribute_value", "\"main.enc\" (line 103, column 54)");
    _enc__passive_String_String_t* _new_150 = _enc__constructor_String_String(_ctx);
    char* _embed_151 = ({"dy";});
    _enc__type_init_String_String(_new_150);
    _enc__method_String_String__init(_ctx, _new_150, _embed_151);
    _enc__passive_String_String_t* _sync_method_call_149 = _enc__method__encore_libs_master_XML_XML_XML_node_attribute_value(_ctx, _a_111, _new_150);
    check_receiver(_sync_method_call_149, ".", "a.attribute_value(new String.String(embed char* \"dy\"; end))", "to_int", "\"main.enc\" (line 103, column 54)");
    option_t* _sync_method_call_148 = _enc__method_String_String_to_int(_ctx, _sync_method_call_149);
    pony_type_t* _tmp_152[] = {};
    int64_t _global_f_153 = _enc__global_fun__encore_libs_master_Ped_util_Global_funsint_or_0(_ctx, NULL, _sync_method_call_148);
    int64_t _dy_max_154 = _global_f_153;
    /* agent_waypoints = new [(int, int)](|a.children_named("addway")|) */;
    check_receiver(_a_111, ".", "a", "children_named", "\"main.enc\" (line 104, column 69)");
    _enc__passive_String_String_t* _new_157 = _enc__constructor_String_String(_ctx);
    char* _embed_158 = ({"addway";});
    _enc__type_init_String_String(_new_157);
    _enc__method_String_String__init(_ctx, _new_157, _embed_158);
    array_t* _sync_method_call_156 = _enc__method__encore_libs_master_XML_XML_XML_node_children_named(_ctx, _a_111, _new_157);
    int64_t _size_159 = array_size(_sync_method_call_156);
    array_t* _array_155 = array_mk(_ctx, _size_159, (&(tuple_type)));
    array_t* _agent_waypoints_160 = _array_155;
    /* dx = x */;
    int64_t _dx_161 = _x_133;
    /* dy = y */;
    int64_t _dy_162 = _y_140;
    /* j = 0 */;
    int64_t _literal_163 = 0;
    int64_t _j_164 = _literal_163;
    /* for b in a.children_named("addway")
  {agent_waypoints[j] = waypoints[int_or_0(string_or_empty(b.attribute_value("id").substring(1, 
                                                                                             2)).to_int()) - 1];
   unless |agent_waypoints| > 1 then
     {print("THIS SHOULD NEVER HAPPEN |new_agent.waypoint|={}\n", 
            |agent_waypoints|);
      max = 1 / 0};
   j = j + 1} */;
    void* _for_165;
    check_receiver(_a_111, ".", "a", "children_named", "\"main.enc\" (line 109, column 49)");
    _enc__passive_String_String_t* _new_173 = _enc__constructor_String_String(_ctx);
    char* _embed_174 = ({"addway";});
    _enc__type_init_String_String(_new_173);
    _enc__method_String_String__init(_ctx, _new_173, _embed_174);
    array_t* _sync_method_call_172 = _enc__method__encore_libs_master_XML_XML_XML_node_children_named(_ctx, _a_111, _new_173);
    int64_t _start_168 = 0;
    int64_t _stop_169 = (array_size(_sync_method_call_172) - 1);
    int64_t _src_step_171 = 1;
    int64_t _literal_175 = 1;
    int64_t _step_170 = (_literal_175 * _src_step_171);
    range_assert_step(_step_170);
    int64_t _index_166;
    if ((_step_170 > 0))
    {
      _index_166 = _start_168;
    }
    else
    {
      _index_166 = _stop_169;
    };
    while (((_index_166 >= _start_168) && (_index_166 <= _stop_169)))
    {
      _enc__passive__encore_libs_master_XML_XML_XML_node_t* _b_167 = array_get(_sync_method_call_172, _index_166).p;
      /* agent_waypoints[j] = waypoints[int_or_0(string_or_empty(b.attribute_value("id").substring(1, 
                                                                                          2)).to_int()) - 1] */;
      int64_t _binop_188 = (({check_receiver(_b_167, ".", "b", "attribute_value", "\"main.enc\" (line 110, column 98)");
                              _enc__passive_String_String_t* _new_179 = _enc__constructor_String_String(_ctx);
                              char* _embed_180 = ({"id";});
                              _enc__type_init_String_String(_new_179);
                              _enc__method_String_String__init(_ctx, _new_179, _embed_180);
                              _enc__passive_String_String_t* _sync_method_call_178 = _enc__method__encore_libs_master_XML_XML_XML_node_attribute_value(_ctx, _b_167, _new_179);
                              check_receiver(_sync_method_call_178, ".", "b.attribute_value(new String.String(embed char* \"id\"; end))", "substring", "\"main.enc\" (line 110, column 98)");
                              int64_t _literal_181 = 1;
                              int64_t _literal_182 = 2;
                              option_t* _sync_method_call_177 = _enc__method_String_String_substring(_ctx, _sync_method_call_178, _literal_181, _literal_182);
                              pony_type_t* _tmp_183[] = {};
                              _enc__passive_String_String_t* _global_f_184 = _enc__global_fun__encore_libs_master_Ped_util_Global_funsstring_or_empty(_ctx, NULL, _sync_method_call_177);
                              check_receiver(_global_f_184, ".", "Ped_util.Global_funs.string_or_empty(b.attribute_value(new String.String(embed char* \"id\"; end)).substring(1, \n                                                                                                           2))", "to_int", "\"main.enc\" (line 110, column 82)");
                              option_t* _sync_method_call_176 = _enc__method_String_String_to_int(_ctx, _global_f_184);
                              pony_type_t* _tmp_185[] = {};
                              int64_t _global_f_186 = _enc__global_fun__encore_libs_master_Ped_util_Global_funsint_or_0(_ctx, NULL, _sync_method_call_176); _global_f_186;}) - ({int64_t _literal_187 = 1; _literal_187;}));
      tuple_t* _access_189 = array_get(_waypoints_24, _binop_188).p;
      array_set(_agent_waypoints_160, _j_164, ((encore_arg_t) {.p = _access_189}));
      /* unless |agent_waypoints| > 1 then
  {print("THIS SHOULD NEVER HAPPEN |new_agent.waypoint|={}\n", 
         |agent_waypoints|);
   max = 1 / 0} */;
      void* _ite_190;
      if (({int64_t _binop_193 = (({int64_t _size_191 = array_size(_agent_waypoints_160); _size_191;}) > ({int64_t _literal_192 = 1; _literal_192;}));
            int64_t _unary_194 = (! _binop_193); _unary_194;}))
      {
        /* print("THIS SHOULD NEVER HAPPEN |new_agent.waypoint|={}\n", 
      |agent_waypoints|) */;
        int64_t _size_195 = array_size(_agent_waypoints_160);
        printf("THIS SHOULD NEVER HAPPEN |new_agent.waypoint|=%lli\n", _size_195);
        /* max = 1 / 0 */;
        int64_t _binop_198 = (({int64_t _literal_196 = 1; _literal_196;}) / ({int64_t _literal_197 = 0; _literal_197;}));
        _max_126 = _binop_198;
        _ite_190 = ((void*) UNIT);
      }
      else
      {
        UNIT;
        _ite_190 = ((void*) UNIT);
      };
      /* j = j + 1 */;
      int64_t _binop_200 = (({ _j_164;}) + ({int64_t _literal_199 = 1; _literal_199;}));
      _j_164 = _binop_200;
      _for_165 = UNIT;
      _index_166 = (_index_166 + _step_170);
    };
    /* println((x, y, dx_max, dy_max, dx, dy, max)) */;
    tuple_t* _tuple_201 = tuple_mk(_ctx, 7);
    tuple_set_type(_tuple_201, 0, ENCORE_PRIMITIVE);
    tuple_set_type(_tuple_201, 1, ENCORE_PRIMITIVE);
    tuple_set_type(_tuple_201, 2, ENCORE_PRIMITIVE);
    tuple_set_type(_tuple_201, 3, ENCORE_PRIMITIVE);
    tuple_set_type(_tuple_201, 4, ENCORE_PRIMITIVE);
    tuple_set_type(_tuple_201, 5, ENCORE_PRIMITIVE);
    tuple_set_type(_tuple_201, 6, ENCORE_PRIMITIVE);
    tuple_set(_tuple_201, 0, ((encore_arg_t) {.i = _x_133}));
    tuple_set(_tuple_201, 1, ((encore_arg_t) {.i = _y_140}));
    tuple_set(_tuple_201, 2, ((encore_arg_t) {.i = _dx_max_147}));
    tuple_set(_tuple_201, 3, ((encore_arg_t) {.i = _dy_max_154}));
    tuple_set(_tuple_201, 4, ((encore_arg_t) {.i = _dx_161}));
    tuple_set(_tuple_201, 5, ((encore_arg_t) {.i = _dy_162}));
    tuple_set(_tuple_201, 6, ((encore_arg_t) {.i = _max_126}));
    printf("(%lli, %lli, %lli, %lli, %lli, %lli, %lli)\n", tuple_get(_tuple_201, 0).i, tuple_get(_tuple_201, 1).i, tuple_get(_tuple_201, 2).i, tuple_get(_tuple_201, 3).i, tuple_get(_tuple_201, 4).i, tuple_get(_tuple_201, 5).i, tuple_get(_tuple_201, 6).i);
    /* for unused in [ 0 , max by 1 ]
  {if dx > x + dx_max then
     dx = x - dx_max
   else
     if dy > y + dy_max then
       {dy = y - dy_max;
        dx = dx + rand() % 4}
     else
       dy = dy + rand() % 4;
   agents[i] = new Agent((dx, dy), 
                         copy_tr(agent_waypoints), 
                         copy_ar(waypoints_distance), 
                         i, 
                         40000);
   i = i + 1} */;
    void* _for_202;
    /* Range not generated */;
    int64_t _literal_209 = 0;
    int64_t _literal_210 = 1;
    int64_t _literal_211 = 1;
    int64_t _step_207 = (_literal_211 * _literal_210);
    range_assert_step(_step_207);
    int64_t _index_203;
    if ((_step_207 > 0))
    {
      _index_203 = _literal_209;
    }
    else
    {
      _index_203 = _max_126;
    };
    while (((_index_203 >= _literal_209) && (_index_203 <= _max_126)))
    {
      int64_t _unused_204 = _index_203;
      /* if dx > x + dx_max then
  dx = x - dx_max
else
  if dy > y + dy_max then
    {dy = y - dy_max;
     dx = dx + rand() % 4}
  else
    dy = dy + rand() % 4 */;
      void* _ite_212;
      if (({int64_t _binop_214 = (({ _dx_161;}) > ({int64_t _binop_213 = (({ _x_133;}) + ({ _dx_max_147;})); _binop_213;})); _binop_214;}))
      {
        /* dx = x - dx_max */;
        int64_t _binop_215 = (({ _x_133;}) - ({ _dx_max_147;}));
        _dx_161 = _binop_215;
        _ite_212 = ((void*) UNIT);
      }
      else
      {
        void* _ite_216;
        if (({int64_t _binop_218 = (({ _dy_162;}) > ({int64_t _binop_217 = (({ _y_140;}) + ({ _dy_max_154;})); _binop_217;})); _binop_218;}))
        {
          /* dy = y - dy_max */;
          int64_t _binop_219 = (({ _y_140;}) - ({ _dy_max_154;}));
          _dy_162 = _binop_219;
          /* dx = dx + rand() % 4 */;
          int64_t _binop_224 = (({ _dx_161;}) + ({int64_t _binop_223 = (({pony_type_t* _tmp_220[] = {};
                                                                          int64_t _global_f_221 = _enc__global_fun__encore_libs_master_Ped_util_Global_funsrand(_ctx, NULL); _global_f_221;}) % ({int64_t _literal_222 = 4; _literal_222;})); _binop_223;}));
          _dx_161 = _binop_224;
          _ite_216 = ((void*) UNIT);
        }
        else
        {
          /* dy = dy + rand() % 4 */;
          int64_t _binop_229 = (({ _dy_162;}) + ({int64_t _binop_228 = (({pony_type_t* _tmp_225[] = {};
                                                                          int64_t _global_f_226 = _enc__global_fun__encore_libs_master_Ped_util_Global_funsrand(_ctx, NULL); _global_f_226;}) % ({int64_t _literal_227 = 4; _literal_227;})); _binop_228;}));
          _dy_162 = _binop_229;
          _ite_216 = ((void*) UNIT);
        };
        _ite_212 = ((void*) _ite_216);
      };
      /* agents[i] = new Agent((dx, dy), 
                      copy_tr(agent_waypoints), 
                      copy_ar(waypoints_distance), 
                      i, 
                      40000) */;
      _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t* _new_230 = _enc__constructor__encore_libs_master_Ped_util_Agent_passive_Agent(_ctx);
      tuple_t* _tuple_231 = tuple_mk(_ctx, 2);
      tuple_set_type(_tuple_231, 0, ENCORE_PRIMITIVE);
      tuple_set_type(_tuple_231, 1, ENCORE_PRIMITIVE);
      tuple_set(_tuple_231, 0, ((encore_arg_t) {.i = _dx_161}));
      tuple_set(_tuple_231, 1, ((encore_arg_t) {.i = _dy_162}));
      pony_type_t* _tmp_232[] = {};
      array_t* _global_f_233 = _enc__global_fun__encore_libs_master_Ped_util_Global_funscopy_tr(_ctx, NULL, _agent_waypoints_160);
      pony_type_t* _tmp_234[] = {};
      array_t* _global_f_235 = _enc__global_fun__encore_libs_master_Ped_util_Global_funscopy_ar(_ctx, NULL, _waypoints_distance_27);
      int64_t _literal_236 = 40000;
      _enc__type_init__encore_libs_master_Ped_util_Agent_passive_Agent(_new_230);
      _enc__method__encore_libs_master_Ped_util_Agent_passive_Agent__init(_ctx, _new_230, _tuple_231, _global_f_233, _global_f_235, _i_108, _literal_236);
      array_set(_agents_106, _i_108, ((encore_arg_t) {.p = _new_230}));
      /* i = i + 1 */;
      int64_t _binop_238 = (({ _i_108;}) + ({int64_t _literal_237 = 1; _literal_237;}));
      _i_108 = _binop_238;
      _for_202 = UNIT;
      _index_203 = (_index_203 + _step_207);
    };
    _for_109 = _for_202;
    _index_110 = (_index_110 + _step_114);
  };
  /* print("checking\n") */;
  char* _literal_239 = "checking\n";
  printf("%s", _literal_239);
  /* for a in agents
  if a != null and |a.targets| == 2 and |a.targets_size| == 2 then
    ()
  else
    print("AGENT HAVE {} WAYPOINTS\n", |a.targets|) */;
  void* _for_240;
  int64_t _start_243 = 0;
  int64_t _stop_244 = (array_size(_agents_106) - 1);
  int64_t _src_step_246 = 1;
  int64_t _literal_247 = 1;
  int64_t _step_245 = (_literal_247 * _src_step_246);
  range_assert_step(_step_245);
  int64_t _index_241;
  if ((_step_245 > 0))
  {
    _index_241 = _start_243;
  }
  else
  {
    _index_241 = _stop_244;
  };
  while (((_index_241 >= _start_243) && (_index_241 <= _stop_244)))
  {
    _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t* _a_242 = array_get(_agents_106, _index_241).p;
    /* if a != null and |a.targets| == 2 and |a.targets_size| == 2 then
  ()
else
  print("AGENT HAVE {} WAYPOINTS\n", |a.targets|) */;
    void* _ite_248;
    if (({int64_t _binop_260 = (({int64_t _binop_255 = (({int64_t _binop_250 = (({ _a_242;}) != ((_enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t*) ({_enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t* _literal_249 = NULL; _literal_249;}))); _binop_250;}) && ({int64_t _binop_254 = (({array_t* _fieldacc_251 = (*_a_242)._enc__field_targets;
                                                                                                                                                                                                                                                                                                                            int64_t _size_252 = array_size(_fieldacc_251); _size_252;}) == ({int64_t _literal_253 = 2; _literal_253;})); _binop_254;})); _binop_255;}) && ({int64_t _binop_259 = (({array_t* _fieldacc_256 = (*_a_242)._enc__field_targets_size;
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    int64_t _size_257 = array_size(_fieldacc_256); _size_257;}) == ({int64_t _literal_258 = 2; _literal_258;})); _binop_259;})); _binop_260;}))
    {
      UNIT;
      _ite_248 = ((void*) UNIT);
    }
    else
    {
      array_t* _fieldacc_261 = (*_a_242)._enc__field_targets;
      int64_t _size_262 = array_size(_fieldacc_261);
      printf("AGENT HAVE %lli WAYPOINTS\n", _size_262);
      _ite_248 = ((void*) UNIT);
    };
    _for_240 = _ite_248;
    _index_241 = (_index_241 + _step_245);
  };
  /* agents */;
  return ((array_t*) _agents_106);
}


future_t* _enc__method__main_Main__init_future(pony_ctx_t** _ctx, _enc__active__main_Main_t* _this)
{
  future_t* _fut = future_mk(_ctx, ENCORE_PRIMITIVE);
  pony_gc_send((*_ctx));
  encore_trace_object((*_ctx), _fut, future_trace);
  pony_send_done((*_ctx));
  _enc__fut_msg__main_Main__init_t* msg = ((_enc__fut_msg__main_Main__init_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__fut_msg__main_Main__init_t)), _ENC__FUT_MSG__main_Main__init));
  msg->_fut = _fut;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
  return _fut;
}


future_t* _enc__method__main_Main_main_future(pony_ctx_t** _ctx, _enc__active__main_Main_t* _this)
{
  future_t* _fut = future_mk(_ctx, ENCORE_PRIMITIVE);
  pony_gc_send((*_ctx));
  encore_trace_object((*_ctx), _fut, future_trace);
  pony_send_done((*_ctx));
  _enc__fut_msg__main_Main_main_t* msg = ((_enc__fut_msg__main_Main_main_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__fut_msg__main_Main_main_t)), _ENC__FUT_MSG__main_Main_main));
  msg->_fut = _fut;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
  return _fut;
}


future_t* _enc__method__main_Main_loop_future(pony_ctx_t** _ctx, _enc__active__main_Main_t* _this, _enc__active__encore_libs_master_Ped_util_Box_Top_Box_t* _enc__arg_superbox, int64_t _enc__arg_tick, int64_t _enc__arg_ui, _enc__active__encore_libs_master_SDL_SDL_Main_SDL_Main_t* _enc__arg_sdl_main)
{
  future_t* _fut = future_mk(_ctx, ENCORE_PRIMITIVE);
  pony_gc_send((*_ctx));
  encore_trace_actor((*_ctx), ((pony_actor_t*) _enc__arg_superbox));
  /* Not tracing field '_enc__arg_tick' */;
  /* Not tracing field '_enc__arg_ui' */;
  encore_trace_actor((*_ctx), ((pony_actor_t*) _enc__arg_sdl_main));
  encore_trace_object((*_ctx), _fut, future_trace);
  pony_send_done((*_ctx));
  _enc__fut_msg__main_Main_loop_t* msg = ((_enc__fut_msg__main_Main_loop_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__fut_msg__main_Main_loop_t)), _ENC__FUT_MSG__main_Main_loop));
  msg->f1 = _enc__arg_superbox;
  msg->f2 = _enc__arg_tick;
  msg->f3 = _enc__arg_ui;
  msg->f4 = _enc__arg_sdl_main;
  msg->_fut = _fut;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
  return _fut;
}


future_t* _enc__method__main_Main_parse_file_future(pony_ctx_t** _ctx, _enc__active__main_Main_t* _this, _enc__passive_String_String_t* _enc__arg_fname)
{
  future_t* _fut = future_mk(_ctx, (&(array_type)));
  pony_gc_send((*_ctx));
  encore_trace_object((*_ctx), _enc__arg_fname, _enc__trace_String_String);
  encore_trace_object((*_ctx), _fut, future_trace);
  pony_send_done((*_ctx));
  _enc__fut_msg__main_Main_parse_file_t* msg = ((_enc__fut_msg__main_Main_parse_file_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__fut_msg__main_Main_parse_file_t)), _ENC__FUT_MSG__main_Main_parse_file));
  msg->f1 = _enc__arg_fname;
  msg->_fut = _fut;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
  return _fut;
}


void _enc__method__main_Main__init_one_way(pony_ctx_t** _ctx, _enc__active__main_Main_t* _this)
{
  pony_gc_send((*_ctx));
  /* No tracing future for oneway msg */;
  pony_send_done((*_ctx));
  _enc__oneway_msg__main_Main__init_t* msg = ((_enc__oneway_msg__main_Main__init_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__oneway_msg__main_Main__init_t)), _ENC__ONEWAY_MSG__main_Main__init));
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
}


void _enc__method__main_Main_main_one_way(pony_ctx_t** _ctx, _enc__active__main_Main_t* _this)
{
  pony_gc_send((*_ctx));
  /* No tracing future for oneway msg */;
  pony_send_done((*_ctx));
  _enc__oneway_msg__main_Main_main_t* msg = ((_enc__oneway_msg__main_Main_main_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__oneway_msg__main_Main_main_t)), _ENC__ONEWAY_MSG__main_Main_main));
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
}


void _enc__method__main_Main_loop_one_way(pony_ctx_t** _ctx, _enc__active__main_Main_t* _this, _enc__active__encore_libs_master_Ped_util_Box_Top_Box_t* _enc__arg_superbox, int64_t _enc__arg_tick, int64_t _enc__arg_ui, _enc__active__encore_libs_master_SDL_SDL_Main_SDL_Main_t* _enc__arg_sdl_main)
{
  pony_gc_send((*_ctx));
  encore_trace_actor((*_ctx), ((pony_actor_t*) _enc__arg_superbox));
  /* Not tracing field '_enc__arg_tick' */;
  /* Not tracing field '_enc__arg_ui' */;
  encore_trace_actor((*_ctx), ((pony_actor_t*) _enc__arg_sdl_main));
  /* No tracing future for oneway msg */;
  pony_send_done((*_ctx));
  _enc__oneway_msg__main_Main_loop_t* msg = ((_enc__oneway_msg__main_Main_loop_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__oneway_msg__main_Main_loop_t)), _ENC__ONEWAY_MSG__main_Main_loop));
  msg->f1 = _enc__arg_superbox;
  msg->f2 = _enc__arg_tick;
  msg->f3 = _enc__arg_ui;
  msg->f4 = _enc__arg_sdl_main;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
}


void _enc__method__main_Main_parse_file_one_way(pony_ctx_t** _ctx, _enc__active__main_Main_t* _this, _enc__passive_String_String_t* _enc__arg_fname)
{
  pony_gc_send((*_ctx));
  encore_trace_object((*_ctx), _enc__arg_fname, _enc__trace_String_String);
  /* No tracing future for oneway msg */;
  pony_send_done((*_ctx));
  _enc__oneway_msg__main_Main_parse_file_t* msg = ((_enc__oneway_msg__main_Main_parse_file_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__oneway_msg__main_Main_parse_file_t)), _ENC__ONEWAY_MSG__main_Main_parse_file));
  msg->f1 = _enc__arg_fname;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
}


static void _enc__dispatch__main_Main(pony_ctx_t** _ctx, pony_actor_t* _a, pony_msg_t* _m)
{
  _enc__active__main_Main_t* _this = ((_enc__active__main_Main_t*) _a);
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
      _enc__method__main_Main_main(_ctx, ((_enc__active__main_Main_t*) _a), _init_argv(_ctx, msg->argc, msg->argv));
      break;
    }
    case _ENC__FUT_MSG__main_Main__init:
    {
      future_t* _fut = ((encore_fut_msg_t*) _m)->_fut;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      encore_trace_object((*_ctx), _fut, future_type.trace);
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      future_fulfil(_ctx, _fut, ((encore_arg_t) {.p = _enc__method__main_Main__init(_ctx, _this)}));
      break;
    }
    case _ENC__ONEWAY_MSG__main_Main__init:
    {
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      /* Not tracing the future in a oneWay send */;
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      _enc__method__main_Main__init(_ctx, _this);
      break;
    }
    case _ENC__FUT_MSG__main_Main_loop:
    {
      future_t* _fut = ((encore_fut_msg_t*) _m)->_fut;
      _enc__active__encore_libs_master_Ped_util_Box_Top_Box_t* _enc__arg_superbox = ((_enc__fut_msg__main_Main_loop_t*) _m)->f1;
      int64_t _enc__arg_tick = ((_enc__fut_msg__main_Main_loop_t*) _m)->f2;
      int64_t _enc__arg_ui = ((_enc__fut_msg__main_Main_loop_t*) _m)->f3;
      _enc__active__encore_libs_master_SDL_SDL_Main_SDL_Main_t* _enc__arg_sdl_main = ((_enc__fut_msg__main_Main_loop_t*) _m)->f4;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      encore_trace_actor((*_ctx), ((pony_actor_t*) _enc__arg_superbox));
      /* Not tracing field '_enc__arg_tick' */;
      /* Not tracing field '_enc__arg_ui' */;
      encore_trace_actor((*_ctx), ((pony_actor_t*) _enc__arg_sdl_main));
      encore_trace_object((*_ctx), _fut, future_type.trace);
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      future_fulfil(_ctx, _fut, ((encore_arg_t) {.p = _enc__method__main_Main_loop(_ctx, _this, _enc__arg_superbox, _enc__arg_tick, _enc__arg_ui, _enc__arg_sdl_main)}));
      break;
    }
    case _ENC__ONEWAY_MSG__main_Main_loop:
    {
      _enc__active__encore_libs_master_Ped_util_Box_Top_Box_t* _enc__arg_superbox = ((_enc__oneway_msg__main_Main_loop_t*) _m)->f1;
      int64_t _enc__arg_tick = ((_enc__oneway_msg__main_Main_loop_t*) _m)->f2;
      int64_t _enc__arg_ui = ((_enc__oneway_msg__main_Main_loop_t*) _m)->f3;
      _enc__active__encore_libs_master_SDL_SDL_Main_SDL_Main_t* _enc__arg_sdl_main = ((_enc__oneway_msg__main_Main_loop_t*) _m)->f4;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      encore_trace_actor((*_ctx), ((pony_actor_t*) _enc__arg_superbox));
      /* Not tracing field '_enc__arg_tick' */;
      /* Not tracing field '_enc__arg_ui' */;
      encore_trace_actor((*_ctx), ((pony_actor_t*) _enc__arg_sdl_main));
      /* Not tracing the future in a oneWay send */;
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      _enc__method__main_Main_loop(_ctx, _this, _enc__arg_superbox, _enc__arg_tick, _enc__arg_ui, _enc__arg_sdl_main);
      break;
    }
    case _ENC__FUT_MSG__main_Main_parse_file:
    {
      future_t* _fut = ((encore_fut_msg_t*) _m)->_fut;
      _enc__passive_String_String_t* _enc__arg_fname = ((_enc__fut_msg__main_Main_parse_file_t*) _m)->f1;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      encore_trace_object((*_ctx), _enc__arg_fname, _enc__trace_String_String);
      encore_trace_object((*_ctx), _fut, future_type.trace);
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      future_fulfil(_ctx, _fut, ((encore_arg_t) {.p = _enc__method__main_Main_parse_file(_ctx, _this, _enc__arg_fname)}));
      break;
    }
    case _ENC__ONEWAY_MSG__main_Main_parse_file:
    {
      _enc__passive_String_String_t* _enc__arg_fname = ((_enc__oneway_msg__main_Main_parse_file_t*) _m)->f1;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      encore_trace_object((*_ctx), _enc__arg_fname, _enc__trace_String_String);
      /* Not tracing the future in a oneWay send */;
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      _enc__method__main_Main_parse_file(_ctx, _this, _enc__arg_fname);
      break;
    }
    default:
    {
      printf("error, got invalid id: %zd", _m->id);
    }
  };
}


pony_type_t _enc__active__main_Main_type = {.id=_ENC__ID__main_Main, .size=sizeof(_enc__active__main_Main_t), .trace=_enc__trace__main_Main, .dispatch=_enc__dispatch__main_Main, .vtable=trait_method_selector};
