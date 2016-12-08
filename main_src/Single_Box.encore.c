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


struct _enc__active__encore_libs_master_Ped_util_Box_Single_Box_t
{
  encore_actor_t _enc__actor;
  tuple_t* _enc__field_space;
  _enc__trait__encore_libs_master_Ped_util_Box_Box_face_t* _enc__field_toplevel;
  _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_struct_t* _enc__field_agents;
};


void _enc__type_init__encore_libs_master_Ped_util_Box_Single_Box(_enc__active__encore_libs_master_Ped_util_Box_Single_Box_t* this, ... )
{
  va_list params;
  va_start(params, this);
  va_end(params);
}


void _enc__trace__encore_libs_master_Ped_util_Box_Single_Box(pony_ctx_t* _ctx_arg, void* p)
{
  pony_ctx_t** _ctx = (&(_ctx_arg));
  _enc__active__encore_libs_master_Ped_util_Box_Single_Box_t* _this = p;
  tuple_t* _enc__field_space = _this->_enc__field_space;
  encore_trace_object((*_ctx), _enc__field_space, tuple_trace);
  _enc__trait__encore_libs_master_Ped_util_Box_Box_face_t* _enc__field_toplevel = _this->_enc__field_toplevel;
  ((capability_t*) _enc__field_toplevel)->_enc__self_type->trace((*_ctx), _enc__field_toplevel);
  _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_struct_t* _enc__field_agents = _this->_enc__field_agents;
  encore_trace_object((*_ctx), _enc__field_agents, _enc__trace__encore_libs_master_Ped_util_Agent_passive_Agent_struct);
}


_enc__active__encore_libs_master_Ped_util_Box_Single_Box_t* _enc__constructor__encore_libs_master_Ped_util_Box_Single_Box(pony_ctx_t** _ctx)
{
  _enc__active__encore_libs_master_Ped_util_Box_Single_Box_t* this = ((_enc__active__encore_libs_master_Ped_util_Box_Single_Box_t*) encore_create((*_ctx), (&(_enc__active__encore_libs_master_Ped_util_Box_Single_Box_type))));
  return this;
}


void* _enc__method__encore_libs_master_Ped_util_Box_Single_Box__init(pony_ctx_t** _ctx, _enc__active__encore_libs_master_Ped_util_Box_Single_Box_t* _this, tuple_t* _enc__arg_space, _enc__trait__encore_libs_master_Ped_util_Box_Box_face_t* _enc__arg_toplevel)
{
  /* this.agents = new Agent_struct() */;
  _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_struct_t* _new_0 = _enc__constructor__encore_libs_master_Ped_util_Agent_passive_Agent_struct(_ctx);
  _enc__type_init__encore_libs_master_Ped_util_Agent_passive_Agent_struct(_new_0);
  _enc__method__encore_libs_master_Ped_util_Agent_passive_Agent_struct__init(_ctx, _new_0);
  (*({ _this;}))._enc__field_agents = _new_0;
  /* this.space = space */;
  (*({ _this;}))._enc__field_space = _enc__arg_space;
  /* this.toplevel = toplevel */;
  (*({ _this;}))._enc__field_toplevel = _enc__arg_toplevel;
  return UNIT;
}


tuple_t* _enc__method__encore_libs_master_Ped_util_Box_Single_Box_space(pony_ctx_t** _ctx, _enc__active__encore_libs_master_Ped_util_Box_Single_Box_t* _this)
{
  /* this.space */;
  tuple_t* _fieldacc_0 = (*_this)._enc__field_space;
  return ((tuple_t*) _fieldacc_0);
}


array_t* _enc__method__encore_libs_master_Ped_util_Box_Single_Box_agents(pony_ctx_t** _ctx, _enc__active__encore_libs_master_Ped_util_Box_Single_Box_t* _this)
{
  /* let b = new [(int, int)](this.agents.size())
    hashmap = this.agents.get_data()
    a = new HashMapIterator<Agent>(hashmap)
    i = 0
in
  {while a.has_next()
     {b[i] = match a.next() with
               Just entry => entry.value.pos()
             ;
      i = i + 1};
   if i < this.agents.size() then
     {let c = new [(int, int)](i);
      for index in [ 0 , i by 1 ]
        c[index] = b[index];
      c}
   else
     b} */;
  /* b = new [(int, int)](this.agents.size()) */;
  _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_struct_t* _fieldacc_2 = (*_this)._enc__field_agents;
  check_receiver(_fieldacc_2, ".", "this.agents", "size", "\"./encore-libs-master/Ped_util/Box.enc\" (line 232, column 26)");
  int64_t _sync_method_call_1 = _enc__method__encore_libs_master_Ped_util_Agent_passive_Agent_struct_size(_ctx, _fieldacc_2);
  array_t* _array_0 = array_mk(_ctx, _sync_method_call_1, (&(tuple_type)));
  array_t* _b_3 = _array_0;
  /* hashmap = this.agents.get_data() */;
  _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_struct_t* _fieldacc_5 = (*_this)._enc__field_agents;
  check_receiver(_fieldacc_5, ".", "this.agents", "get_data", "\"./encore-libs-master/Ped_util/Box.enc\" (line 233, column 16)");
  _enc__passive__encore_libs_master_Collections_HashMap_HashMap_t* _sync_method_call_4 = _enc__method__encore_libs_master_Ped_util_Agent_passive_Agent_struct_get_data(_ctx, _fieldacc_5);
  _enc__passive__encore_libs_master_Collections_HashMap_HashMap_t* _hashmap_6 = _sync_method_call_4;
  /* a = new HashMapIterator<Agent>(hashmap) */;
  _enc__passive__encore_libs_master_Collections_HashMap_HashMapIterator_t* _new_7 = _enc__constructor__encore_libs_master_Collections_HashMap_HashMapIterator(_ctx);
  _enc__type_init__encore_libs_master_Collections_HashMap_HashMapIterator(_new_7, (&(_enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_type)));
  _enc__method__encore_libs_master_Collections_HashMap_HashMapIterator__init(_ctx, _new_7, ((_enc__passive__encore_libs_master_Collections_HashMap_HashMap_t*) _hashmap_6));
  _enc__passive__encore_libs_master_Collections_HashMap_HashMapIterator_t* _a_8 = _new_7;
  /* i = 0 */;
  int64_t _literal_9 = 0;
  int64_t _i_10 = _literal_9;
  /* while a.has_next()
  {b[i] = match a.next() with
            Just entry => entry.value.pos()
          ;
   i = i + 1} */;
  void* _while_23;
  while (({check_receiver(_a_8, ".", "a", "has_next", "\"./encore-libs-master/Ped_util/Box.enc\" (line 237, column 11)");
           int64_t _sync_method_call_11 = _enc__method__encore_libs_master_Collections_HashMap_HashMapIterator_has_next(_ctx, _a_8); _sync_method_call_11;}))
  {
    /* b[i] = match a.next() with
         Just entry => entry.value.pos()
        */;
    check_receiver(_a_8, ".", "a", "next", "\"./encore-libs-master/Ped_util/Box.enc\" (line 238, column 20)");
    option_t* _sync_method_call_13 = _enc__method__encore_libs_master_Collections_HashMap_HashMapIterator_next(_ctx, _a_8);
    tuple_t* _match_12;
    _enc__passive__encore_libs_master_Collections_HashMap_Entry_t* _entry_14;
    if ((({int64_t _optionCheck_18;
           _optionCheck_18 = ((JUST == (*_sync_method_call_13).tag) && ({int64_t _varBinding_19;
                                                                         _enc__passive__encore_libs_master_Collections_HashMap_Entry_t* _optionVal_17 = (*_sync_method_call_13).val.p;
                                                                         _entry_14 = _optionVal_17;
                                                                         _varBinding_19 = 1; _varBinding_19;})); _optionCheck_18;}) && ({int64_t _literal_20 = 1/*True*/; _literal_20;})))
    {
      _match_12 = ((tuple_t*) ({_enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t* _fieldacc_16 = (*_entry_14)._enc__field_value.p;
                                check_receiver(_fieldacc_16, ".", "entry.value", "pos", "\"./encore-libs-master/Ped_util/Box.enc\" (line 238, column 48)");
                                tuple_t* _sync_method_call_15 = _enc__method__encore_libs_master_Ped_util_Agent_passive_Agent_pos(_ctx, _fieldacc_16); _sync_method_call_15;}));
    }
    else
    {
      printf("*** Runtime error: No matching clause was found ***\n");
      exit(1);
    };
    array_set(_b_3, _i_10, ((encore_arg_t) {.p = _match_12}));
    /* i = i + 1 */;
    int64_t _binop_22 = (({ _i_10;}) + ({int64_t _literal_21 = 1; _literal_21;}));
    _i_10 = _binop_22;
    _while_23 = UNIT;
  };
  /* if i < this.agents.size() then
  {let c = new [(int, int)](i);
   for index in [ 0 , i by 1 ]
     c[index] = b[index];
   c}
else
  b */;
  array_t* _ite_24;
  if (({int64_t _binop_27 = (({ _i_10;}) < ({_enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_struct_t* _fieldacc_26 = (*_this)._enc__field_agents;
                                             check_receiver(_fieldacc_26, ".", "this.agents", "size", "\"./encore-libs-master/Ped_util/Box.enc\" (line 241, column 12)");
                                             int64_t _sync_method_call_25 = _enc__method__encore_libs_master_Ped_util_Agent_passive_Agent_struct_size(_ctx, _fieldacc_26); _sync_method_call_25;})); _binop_27;}))
  {
    /* let c = new [(int, int)](i) */;
    /* c = new [(int, int)](i) */;
    array_t* _array_28 = array_mk(_ctx, _i_10, (&(tuple_type)));
    array_t* _c_29 = _array_28;
    /* for index in [ 0 , i by 1 ]
  c[index] = b[index] */;
    void* _for_30;
    /* Range not generated */;
    int64_t _literal_37 = 0;
    int64_t _literal_38 = 1;
    int64_t _literal_39 = 1;
    int64_t _step_35 = (_literal_39 * _literal_38);
    range_assert_step(_step_35);
    int64_t _index_31;
    if ((_step_35 > 0))
    {
      _index_31 = _literal_37;
    }
    else
    {
      _index_31 = _i_10;
    };
    while (((_index_31 >= _literal_37) && (_index_31 <= _i_10)))
    {
      int64_t _index_32 = _index_31;
      /* c[index] = b[index] */;
      tuple_t* _access_40 = array_get(_b_3, _index_32).p;
      array_set(_c_29, _index_32, ((encore_arg_t) {.p = _access_40}));
      _for_30 = UNIT;
      _index_31 = (_index_31 + _step_35);
    };
    /* c */;
    _ite_24 = ((array_t*) _c_29);
  }
  else
  {
    _ite_24 = ((array_t*) _b_3);
  };
  return ((array_t*) _ite_24);
}


void* _enc__method__encore_libs_master_Ped_util_Box_Single_Box_add(pony_ctx_t** _ctx, _enc__active__encore_libs_master_Ped_util_Box_Single_Box_t* _this, _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t* _enc__arg_a)
{
  /* this.agents.add(a) */;
  _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_struct_t* _fieldacc_1 = (*_this)._enc__field_agents;
  check_receiver(_fieldacc_1, ".", "this.agents", "add", "\"./encore-libs-master/Ped_util/Box.enc\" (line 252, column 27)");
  void* _sync_method_call_0 = _enc__method__encore_libs_master_Ped_util_Agent_passive_Agent_struct_add(_ctx, _fieldacc_1, _enc__arg_a);
  return UNIT;
}


void* _enc__method__encore_libs_master_Ped_util_Box_Single_Box_start(pony_ctx_t** _ctx, _enc__active__encore_libs_master_Ped_util_Box_Single_Box_t* _this)
{
  /* this!move() */;
  check_receiver(_this, " ! ", "this", "move", "\"./encore-libs-master/Ped_util/Box.enc\" (line 254, column 26)");
  _enc__method__encore_libs_master_Ped_util_Box_Single_Box_move_one_way(_ctx, _this);
  /* print("bottom_starting\n") */;
  char* _literal_0 = "bottom_starting\n";
  printf("%s", _literal_0);
  return UNIT;
}


int64_t _enc__method__encore_libs_master_Ped_util_Box_Single_Box_move(pony_ctx_t** _ctx, _enc__active__encore_libs_master_Ped_util_Box_Single_Box_t* _this)
{
  /* let iterator = new HashMapIterator<Agent>(this.agents.get_data()) */;
  /* iterator = new HashMapIterator<Agent>(this.agents.get_data()) */;
  _enc__passive__encore_libs_master_Collections_HashMap_HashMapIterator_t* _new_0 = _enc__constructor__encore_libs_master_Collections_HashMap_HashMapIterator(_ctx);
  _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_struct_t* _fieldacc_2 = (*_this)._enc__field_agents;
  check_receiver(_fieldacc_2, ".", "this.agents", "get_data", "\"./encore-libs-master/Ped_util/Box.enc\" (line 257, column 51)");
  _enc__passive__encore_libs_master_Collections_HashMap_HashMap_t* _sync_method_call_1 = _enc__method__encore_libs_master_Ped_util_Agent_passive_Agent_struct_get_data(_ctx, _fieldacc_2);
  _enc__type_init__encore_libs_master_Collections_HashMap_HashMapIterator(_new_0, (&(_enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_type)));
  _enc__method__encore_libs_master_Collections_HashMap_HashMapIterator__init(_ctx, _new_0, ((_enc__passive__encore_libs_master_Collections_HashMap_HashMap_t*) _sync_method_call_1));
  _enc__passive__encore_libs_master_Collections_HashMap_HashMapIterator_t* _iterator_3 = _new_0;
  /* while iterator.has_next()
  let a = match iterator.next() with
            Just entry => entry.value
          
      desired = a.next()
      i = 0
      nejbor = null : Fut bool
      stillhere = true
  in
    {if |desired| == 0 then
       stillhere = false;
     while i < |desired| and stillhere == true
       {match (desired[i], this.space) with
          _ when this.agents.isin(desired[i]) => {i = i + 1;
                                                  embed void { continue; } end;
                                                  ()}
          ((x, y), 
           ((x_max, y_max), 
            (x_min, 
             y_min))) when x <= x_max and x >= x_min and y <= y_max and y >= y_min => {a.move((x, 
                                                                                               y));
                                                                                       embed void { break; } end}
          ((x, y), 
           ((x_max, y_max), 
            (x_min, 
             y_min))) when x > x_max and y < y_min or y > y_max or x < x_min and y < y_min or y > y_max => {print("this should never happen, agent way off");
                                                                                                            1 / 0;
                                                                                                            ()}
          ((x, y), 
           ((x_max, y_max), 
            (x_min, 
             y_min))) => {nejbor = this.toplevel.external_move(a.copy(), 
                                                               (x, y));
                          ()}
        ;
        await nejbor;
        if get nejbor then
          {stillhere = false;
           embed void { break; } end}
        else
          {stillhere = true;
           i = i + 1}};
     if stillhere == false then
       this.agents.remove(a)} */;
  void* _while_168;
  while (({check_receiver(_iterator_3, ".", "iterator", "has_next", "\"./encore-libs-master/Ped_util/Box.enc\" (line 258, column 14)");
           int64_t _sync_method_call_4 = _enc__method__encore_libs_master_Collections_HashMap_HashMapIterator_has_next(_ctx, _iterator_3); _sync_method_call_4;}))
  {
    /* let a = match iterator.next() with
          Just entry => entry.value
        
    desired = a.next()
    i = 0
    nejbor = null : Fut bool
    stillhere = true
in
  {if |desired| == 0 then
     stillhere = false;
   while i < |desired| and stillhere == true
     {match (desired[i], this.space) with
        _ when this.agents.isin(desired[i]) => {i = i + 1;
                                                embed void { continue; } end;
                                                ()}
        ((x, y), 
         ((x_max, y_max), 
          (x_min, 
           y_min))) when x <= x_max and x >= x_min and y <= y_max and y >= y_min => {a.move((x, 
                                                                                             y));
                                                                                     embed void { break; } end}
        ((x, y), 
         ((x_max, y_max), 
          (x_min, 
           y_min))) when x > x_max and y < y_min or y > y_max or x < x_min and y < y_min or y > y_max => {print("this should never happen, agent way off");
                                                                                                          1 / 0;
                                                                                                          ()}
        ((x, y), 
         ((x_max, y_max), 
          (x_min, 
           y_min))) => {nejbor = this.toplevel.external_move(a.copy(), 
                                                             (x, y));
                        ()}
      ;
      await nejbor;
      if get nejbor then
        {stillhere = false;
         embed void { break; } end}
      else
        {stillhere = true;
         i = i + 1}};
   if stillhere == false then
     this.agents.remove(a)} */;
    /* a = match iterator.next() with
  Just entry => entry.value
 */;
    /* match iterator.next() with
  Just entry => entry.value
 */;
    check_receiver(_iterator_3, ".", "iterator", "next", "\"./encore-libs-master/Ped_util/Box.enc\" (line 260, column 28)");
    option_t* _sync_method_call_6 = _enc__method__encore_libs_master_Collections_HashMap_HashMapIterator_next(_ctx, _iterator_3);
    _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t* _match_5;
    _enc__passive__encore_libs_master_Collections_HashMap_Entry_t* _entry_7;
    if ((({int64_t _optionCheck_10;
           _optionCheck_10 = ((JUST == (*_sync_method_call_6).tag) && ({int64_t _varBinding_11;
                                                                        _enc__passive__encore_libs_master_Collections_HashMap_Entry_t* _optionVal_9 = (*_sync_method_call_6).val.p;
                                                                        _entry_7 = _optionVal_9;
                                                                        _varBinding_11 = 1; _varBinding_11;})); _optionCheck_10;}) && ({int64_t _literal_12 = 1/*True*/; _literal_12;})))
    {
      _match_5 = ((_enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t*) ({/* entry.value */;
                                                                                        _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t* _fieldacc_8 = (*_entry_7)._enc__field_value.p; _fieldacc_8;}));
    }
    else
    {
      printf("*** Runtime error: No matching clause was found ***\n");
      exit(1);
    };
    _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t* _a_13 = _match_5;
    /* desired = a.next() */;
    check_receiver(_a_13, ".", "a", "next", "\"./encore-libs-master/Ped_util/Box.enc\" (line 261, column 27)");
    array_t* _sync_method_call_14 = _enc__method__encore_libs_master_Ped_util_Agent_passive_Agent_next(_ctx, _a_13);
    array_t* _desired_15 = _sync_method_call_14;
    /* i = 0 */;
    int64_t _literal_16 = 0;
    int64_t _i_17 = _literal_16;
    /* nejbor = null : Fut bool */;
    future_t* _literal_18 = NULL;
    future_t* _cast_19 = ((future_t*) _literal_18);
    future_t* _nejbor_20 = _cast_19;
    /* stillhere = true */;
    int64_t _literal_21 = 1/*True*/;
    int64_t _stillhere_22 = _literal_21;
    /* if |desired| == 0 then
  stillhere = false */;
    void* _ite_23;
    if (({int64_t _binop_26 = (({int64_t _size_24 = array_size(_desired_15); _size_24;}) == ({int64_t _literal_25 = 0; _literal_25;})); _binop_26;}))
    {
      int64_t _literal_27 = 0/*False*/;
      _stillhere_22 = _literal_27;
      _ite_23 = ((void*) UNIT);
    }
    else
    {
      UNIT;
      _ite_23 = ((void*) UNIT);
    };
    /* while i < |desired| and stillhere == true
  {match (desired[i], this.space) with
     _ when this.agents.isin(desired[i]) => {i = i + 1;
                                             embed void { continue; } end;
                                             ()}
     ((x, y), 
      ((x_max, y_max), 
       (x_min, 
        y_min))) when x <= x_max and x >= x_min and y <= y_max and y >= y_min => {a.move((x, 
                                                                                          y));
                                                                                  embed void { break; } end}
     ((x, y), 
      ((x_max, y_max), 
       (x_min, 
        y_min))) when x > x_max and y < y_min or y > y_max or x < x_min and y < y_min or y > y_max => {print("this should never happen, agent way off");
                                                                                                       1 / 0;
                                                                                                       ()}
     ((x, y), 
      ((x_max, y_max), 
       (x_min, 
        y_min))) => {nejbor = this.toplevel.external_move(a.copy(), 
                                                          (x, y));
                     ()}
   ;
   await nejbor;
   if get nejbor then
     {stillhere = false;
      embed void { break; } end}
   else
     {stillhere = true;
      i = i + 1}} */;
    void* _while_162;
    while (({int64_t _binop_32 = (({int64_t _binop_29 = (({ _i_17;}) < ({int64_t _size_28 = array_size(_desired_15); _size_28;})); _binop_29;}) && ({int64_t _binop_31 = (({ _stillhere_22;}) == ({int64_t _literal_30 = 1/*True*/; _literal_30;})); _binop_31;})); _binop_32;}))
    {
      /* match (desired[i], this.space) with
  _ when this.agents.isin(desired[i]) => {i = i + 1;
                                          embed void { continue; } end;
                                          ()}
  ((x, y), 
   ((x_max, y_max), 
    (x_min, 
     y_min))) when x <= x_max and x >= x_min and y <= y_max and y >= y_min => {a.move((x, 
                                                                                       y));
                                                                               embed void { break; } end}
  ((x, y), 
   ((x_max, y_max), 
    (x_min, 
     y_min))) when x > x_max and y < y_min or y > y_max or x < x_min and y < y_min or y > y_max => {print("this should never happen, agent way off");
                                                                                                    1 / 0;
                                                                                                    ()}
  ((x, y), 
   ((x_max, y_max), 
    (x_min, 
     y_min))) => {nejbor = this.toplevel.external_move(a.copy(), 
                                                       (x, y));
                  ()}
 */;
      tuple_t* _tuple_34 = tuple_mk(_ctx, 2);
      tuple_set_type(_tuple_34, 0, (&(tuple_type)));
      tuple_set_type(_tuple_34, 1, (&(tuple_type)));
      tuple_t* _access_35 = array_get(_desired_15, _i_17).p;
      tuple_t* _fieldacc_36 = (*_this)._enc__field_space;
      tuple_set(_tuple_34, 0, ((encore_arg_t) {.p = _access_35}));
      tuple_set(_tuple_34, 1, ((encore_arg_t) {.p = _fieldacc_36}));
      void* _match_33;
      tuple_t* ___37;
      if ((({int64_t _varBinding_152;
             ___37 = _tuple_34;
             _varBinding_152 = 1; _varBinding_152;}) && ({_enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_struct_t* _fieldacc_154 = (*_this)._enc__field_agents;
                                                          check_receiver(_fieldacc_154, ".", "this.agents", "isin", "\"./encore-libs-master/Ped_util/Box.enc\" (line 271, column 28)");
                                                          tuple_t* _access_155 = array_get(_desired_15, _i_17).p;
                                                          int64_t _sync_method_call_153 = _enc__method__encore_libs_master_Ped_util_Agent_passive_Agent_struct_isin(_ctx, _fieldacc_154, _access_155); _sync_method_call_153;})))
      {
        _match_33 = ((void*) ({/* i = i + 1 */;
                               int64_t _binop_39 = (({ _i_17;}) + ({int64_t _literal_38 = 1; _literal_38;}));
                               _i_17 = _binop_39;
                               /* embed void { continue; } end */;
                               ({{ continue; }});
                               /* () */;
                               UNIT; UNIT;}));
      }
      else
      {
        int64_t _x_40;
        int64_t _y_41;
        int64_t _x_max_42;
        int64_t _y_max_43;
        int64_t _x_min_44;
        int64_t _y_min_45;
        if ((({int64_t _tupleCheck_124;
               _tupleCheck_124 = 1;
               tuple_t* _tupleAccess_125 = tuple_get(_tuple_34, 0).p;
               int64_t _tupleCheck_126;
               _tupleCheck_126 = 1;
               int64_t _tupleAccess_127 = tuple_get(_tupleAccess_125, 0).i;
               int64_t _varBinding_128;
               _x_40 = _tupleAccess_127;
               _varBinding_128 = 1;
               _tupleCheck_126 = (_tupleCheck_126 && _varBinding_128);
               int64_t _tupleAccess_129 = tuple_get(_tupleAccess_125, 1).i;
               int64_t _varBinding_130;
               _y_41 = _tupleAccess_129;
               _varBinding_130 = 1;
               _tupleCheck_126 = (_tupleCheck_126 && _varBinding_130);
               _tupleCheck_124 = (_tupleCheck_124 && _tupleCheck_126);
               tuple_t* _tupleAccess_131 = tuple_get(_tuple_34, 1).p;
               int64_t _tupleCheck_132;
               _tupleCheck_132 = 1;
               tuple_t* _tupleAccess_133 = tuple_get(_tupleAccess_131, 0).p;
               int64_t _tupleCheck_134;
               _tupleCheck_134 = 1;
               int64_t _tupleAccess_135 = tuple_get(_tupleAccess_133, 0).i;
               int64_t _varBinding_136;
               _x_max_42 = _tupleAccess_135;
               _varBinding_136 = 1;
               _tupleCheck_134 = (_tupleCheck_134 && _varBinding_136);
               int64_t _tupleAccess_137 = tuple_get(_tupleAccess_133, 1).i;
               int64_t _varBinding_138;
               _y_max_43 = _tupleAccess_137;
               _varBinding_138 = 1;
               _tupleCheck_134 = (_tupleCheck_134 && _varBinding_138);
               _tupleCheck_132 = (_tupleCheck_132 && _tupleCheck_134);
               tuple_t* _tupleAccess_139 = tuple_get(_tupleAccess_131, 1).p;
               int64_t _tupleCheck_140;
               _tupleCheck_140 = 1;
               int64_t _tupleAccess_141 = tuple_get(_tupleAccess_139, 0).i;
               int64_t _varBinding_142;
               _x_min_44 = _tupleAccess_141;
               _varBinding_142 = 1;
               _tupleCheck_140 = (_tupleCheck_140 && _varBinding_142);
               int64_t _tupleAccess_143 = tuple_get(_tupleAccess_139, 1).i;
               int64_t _varBinding_144;
               _y_min_45 = _tupleAccess_143;
               _varBinding_144 = 1;
               _tupleCheck_140 = (_tupleCheck_140 && _varBinding_144);
               _tupleCheck_132 = (_tupleCheck_132 && _tupleCheck_140);
               _tupleCheck_124 = (_tupleCheck_124 && _tupleCheck_132); _tupleCheck_124;}) && ({int64_t _binop_151 = (({int64_t _binop_149 = (({int64_t _binop_147 = (({int64_t _binop_145 = (({ _x_40;}) <= ({ _x_max_42;})); _binop_145;}) && ({int64_t _binop_146 = (({ _x_40;}) >= ({ _x_min_44;})); _binop_146;})); _binop_147;}) && ({int64_t _binop_148 = (({ _y_41;}) <= ({ _y_max_43;})); _binop_148;})); _binop_149;}) && ({int64_t _binop_150 = (({ _y_41;}) >= ({ _y_min_45;})); _binop_150;})); _binop_151;})))
        {
          _match_33 = ((void*) ({/* a.move((x, y)) */;
                                 check_receiver(_a_13, ".", "a", "move", "\"./encore-libs-master/Ped_util/Box.enc\" (line 273, column 119)");
                                 tuple_t* _tuple_47 = tuple_mk(_ctx, 2);
                                 tuple_set_type(_tuple_47, 0, ENCORE_PRIMITIVE);
                                 tuple_set_type(_tuple_47, 1, ENCORE_PRIMITIVE);
                                 tuple_set(_tuple_47, 0, ((encore_arg_t) {.i = _x_40}));
                                 tuple_set(_tuple_47, 1, ((encore_arg_t) {.i = _y_41}));
                                 void* _sync_method_call_46 = _enc__method__encore_libs_master_Ped_util_Agent_passive_Agent_move(_ctx, _a_13, _tuple_47);
                                 /* embed void { break; } end */;
                                 ({{ break; }}); UNIT;}));
        }
        else
        {
          int64_t _x_48;
          int64_t _y_49;
          int64_t _x_max_50;
          int64_t _y_max_51;
          int64_t _x_min_52;
          int64_t _y_min_53;
          if ((({int64_t _tupleCheck_92;
                 _tupleCheck_92 = 1;
                 tuple_t* _tupleAccess_93 = tuple_get(_tuple_34, 0).p;
                 int64_t _tupleCheck_94;
                 _tupleCheck_94 = 1;
                 int64_t _tupleAccess_95 = tuple_get(_tupleAccess_93, 0).i;
                 int64_t _varBinding_96;
                 _x_48 = _tupleAccess_95;
                 _varBinding_96 = 1;
                 _tupleCheck_94 = (_tupleCheck_94 && _varBinding_96);
                 int64_t _tupleAccess_97 = tuple_get(_tupleAccess_93, 1).i;
                 int64_t _varBinding_98;
                 _y_49 = _tupleAccess_97;
                 _varBinding_98 = 1;
                 _tupleCheck_94 = (_tupleCheck_94 && _varBinding_98);
                 _tupleCheck_92 = (_tupleCheck_92 && _tupleCheck_94);
                 tuple_t* _tupleAccess_99 = tuple_get(_tuple_34, 1).p;
                 int64_t _tupleCheck_100;
                 _tupleCheck_100 = 1;
                 tuple_t* _tupleAccess_101 = tuple_get(_tupleAccess_99, 0).p;
                 int64_t _tupleCheck_102;
                 _tupleCheck_102 = 1;
                 int64_t _tupleAccess_103 = tuple_get(_tupleAccess_101, 0).i;
                 int64_t _varBinding_104;
                 _x_max_50 = _tupleAccess_103;
                 _varBinding_104 = 1;
                 _tupleCheck_102 = (_tupleCheck_102 && _varBinding_104);
                 int64_t _tupleAccess_105 = tuple_get(_tupleAccess_101, 1).i;
                 int64_t _varBinding_106;
                 _y_max_51 = _tupleAccess_105;
                 _varBinding_106 = 1;
                 _tupleCheck_102 = (_tupleCheck_102 && _varBinding_106);
                 _tupleCheck_100 = (_tupleCheck_100 && _tupleCheck_102);
                 tuple_t* _tupleAccess_107 = tuple_get(_tupleAccess_99, 1).p;
                 int64_t _tupleCheck_108;
                 _tupleCheck_108 = 1;
                 int64_t _tupleAccess_109 = tuple_get(_tupleAccess_107, 0).i;
                 int64_t _varBinding_110;
                 _x_min_52 = _tupleAccess_109;
                 _varBinding_110 = 1;
                 _tupleCheck_108 = (_tupleCheck_108 && _varBinding_110);
                 int64_t _tupleAccess_111 = tuple_get(_tupleAccess_107, 1).i;
                 int64_t _varBinding_112;
                 _y_min_53 = _tupleAccess_111;
                 _varBinding_112 = 1;
                 _tupleCheck_108 = (_tupleCheck_108 && _varBinding_112);
                 _tupleCheck_100 = (_tupleCheck_100 && _tupleCheck_108);
                 _tupleCheck_92 = (_tupleCheck_92 && _tupleCheck_100); _tupleCheck_92;}) && ({int64_t _binop_123 = (({int64_t _binop_117 = (({int64_t _binop_113 = (({ _x_48;}) > ({ _x_max_50;})); _binop_113;}) && ({int64_t _binop_116 = (({int64_t _binop_114 = (({ _y_49;}) < ({ _y_min_53;})); _binop_114;}) || ({int64_t _binop_115 = (({ _y_49;}) > ({ _y_max_51;})); _binop_115;})); _binop_116;})); _binop_117;}) || ({int64_t _binop_122 = (({int64_t _binop_118 = (({ _x_48;}) < ({ _x_min_52;})); _binop_118;}) && ({int64_t _binop_121 = (({int64_t _binop_119 = (({ _y_49;}) < ({ _y_min_53;})); _binop_119;}) || ({int64_t _binop_120 = (({ _y_49;}) > ({ _y_max_51;})); _binop_120;})); _binop_121;})); _binop_122;})); _binop_123;})))
          {
            _match_33 = ((void*) ({/* print("this should never happen, agent way off") */;
                                   char* _literal_54 = "this should never happen, agent way off";
                                   printf("%s", _literal_54);
                                   /* 1 / 0 */;
                                   int64_t _binop_57 = (({int64_t _literal_55 = 1; _literal_55;}) / ({int64_t _literal_56 = 0; _literal_56;}));
                                   /* () */;
                                   UNIT; UNIT;}));
          }
          else
          {
            int64_t _x_58;
            int64_t _y_59;
            int64_t _x_max_60;
            int64_t _y_max_61;
            int64_t _x_min_62;
            int64_t _y_min_63;
            if ((({int64_t _tupleCheck_70;
                   _tupleCheck_70 = 1;
                   tuple_t* _tupleAccess_71 = tuple_get(_tuple_34, 0).p;
                   int64_t _tupleCheck_72;
                   _tupleCheck_72 = 1;
                   int64_t _tupleAccess_73 = tuple_get(_tupleAccess_71, 0).i;
                   int64_t _varBinding_74;
                   _x_58 = _tupleAccess_73;
                   _varBinding_74 = 1;
                   _tupleCheck_72 = (_tupleCheck_72 && _varBinding_74);
                   int64_t _tupleAccess_75 = tuple_get(_tupleAccess_71, 1).i;
                   int64_t _varBinding_76;
                   _y_59 = _tupleAccess_75;
                   _varBinding_76 = 1;
                   _tupleCheck_72 = (_tupleCheck_72 && _varBinding_76);
                   _tupleCheck_70 = (_tupleCheck_70 && _tupleCheck_72);
                   tuple_t* _tupleAccess_77 = tuple_get(_tuple_34, 1).p;
                   int64_t _tupleCheck_78;
                   _tupleCheck_78 = 1;
                   tuple_t* _tupleAccess_79 = tuple_get(_tupleAccess_77, 0).p;
                   int64_t _tupleCheck_80;
                   _tupleCheck_80 = 1;
                   int64_t _tupleAccess_81 = tuple_get(_tupleAccess_79, 0).i;
                   int64_t _varBinding_82;
                   _x_max_60 = _tupleAccess_81;
                   _varBinding_82 = 1;
                   _tupleCheck_80 = (_tupleCheck_80 && _varBinding_82);
                   int64_t _tupleAccess_83 = tuple_get(_tupleAccess_79, 1).i;
                   int64_t _varBinding_84;
                   _y_max_61 = _tupleAccess_83;
                   _varBinding_84 = 1;
                   _tupleCheck_80 = (_tupleCheck_80 && _varBinding_84);
                   _tupleCheck_78 = (_tupleCheck_78 && _tupleCheck_80);
                   tuple_t* _tupleAccess_85 = tuple_get(_tupleAccess_77, 1).p;
                   int64_t _tupleCheck_86;
                   _tupleCheck_86 = 1;
                   int64_t _tupleAccess_87 = tuple_get(_tupleAccess_85, 0).i;
                   int64_t _varBinding_88;
                   _x_min_62 = _tupleAccess_87;
                   _varBinding_88 = 1;
                   _tupleCheck_86 = (_tupleCheck_86 && _varBinding_88);
                   int64_t _tupleAccess_89 = tuple_get(_tupleAccess_85, 1).i;
                   int64_t _varBinding_90;
                   _y_min_63 = _tupleAccess_89;
                   _varBinding_90 = 1;
                   _tupleCheck_86 = (_tupleCheck_86 && _varBinding_90);
                   _tupleCheck_78 = (_tupleCheck_78 && _tupleCheck_86);
                   _tupleCheck_70 = (_tupleCheck_70 && _tupleCheck_78); _tupleCheck_70;}) && ({int64_t _literal_91 = 1/*True*/; _literal_91;})))
            {
              _match_33 = ((void*) ({/* nejbor = this.toplevel.external_move(a.copy(), (x, y)) */;
                                     _enc__trait__encore_libs_master_Ped_util_Box_Box_face_t* _fieldacc_64 = (*_this)._enc__field_toplevel;
                                     check_receiver(_fieldacc_64, ".", "this.toplevel", "external_move", "\"./encore-libs-master/Ped_util/Box.enc\" (line 278, column 71)");
                                     check_receiver(_a_13, ".", "a", "copy", "\"./encore-libs-master/Ped_util/Box.enc\" (line 278, column 99)");
                                     _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t* _sync_method_call_68 = _enc__method__encore_libs_master_Ped_util_Agent_passive_Agent_copy(_ctx, _a_13);
                                     tuple_t* _tuple_69 = tuple_mk(_ctx, 2);
                                     tuple_set_type(_tuple_69, 0, ENCORE_PRIMITIVE);
                                     tuple_set_type(_tuple_69, 1, ENCORE_PRIMITIVE);
                                     tuple_set(_tuple_69, 0, ((encore_arg_t) {.i = _x_58}));
                                     tuple_set(_tuple_69, 1, ((encore_arg_t) {.i = _y_59}));
                                     future_t* (*_Box_face_external_move_65) (pony_ctx_t**, _enc__trait__encore_libs_master_Ped_util_Box_Box_face_t*, _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t*, tuple_t*);
                                     void* (*_Box_face_vtable_66) (int);
                                     _Box_face_vtable_66 = ((void*) _fieldacc_64->_enc__self_type->vtable);
                                     _Box_face_external_move_65 = _Box_face_vtable_66(_ENC__MSG__encore_libs_master_Ped_util_Box_Box_face_external_move);
                                     future_t* _trait_method_call_67 = _Box_face_external_move_65(_ctx, ((_enc__trait__encore_libs_master_Ped_util_Box_Box_face_t*) _fieldacc_64), _sync_method_call_68, _tuple_69);
                                     _nejbor_20 = _trait_method_call_67;
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
      /* await nejbor */;
      future_await(_ctx, _nejbor_20);
      /* if get nejbor then
  {stillhere = false;
   embed void { break; } end}
else
  {stillhere = true;
   i = i + 1} */;
      void* _ite_156;
      if (({int64_t _tmp_157 = future_get_actor(_ctx, _nejbor_20).i; _tmp_157;}))
      {
        /* stillhere = false */;
        int64_t _literal_158 = 0/*False*/;
        _stillhere_22 = _literal_158;
        /* embed void { break; } end */;
        ({{ break; }});
        _ite_156 = ((void*) UNIT);
      }
      else
      {
        /* stillhere = true */;
        int64_t _literal_159 = 1/*True*/;
        _stillhere_22 = _literal_159;
        /* i = i + 1 */;
        int64_t _binop_161 = (({ _i_17;}) + ({int64_t _literal_160 = 1; _literal_160;}));
        _i_17 = _binop_161;
        _ite_156 = ((void*) UNIT);
      };
      _while_162 = _ite_156;
    };
    /* if stillhere == false then
  this.agents.remove(a) */;
    void* _ite_163;
    if (({int64_t _binop_165 = (({ _stillhere_22;}) == ({int64_t _literal_164 = 0/*False*/; _literal_164;})); _binop_165;}))
    {
      /* this.agents.remove(a) */;
      _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_struct_t* _fieldacc_167 = (*_this)._enc__field_agents;
      check_receiver(_fieldacc_167, ".", "this.agents", "remove", "\"./encore-libs-master/Ped_util/Box.enc\" (line 294, column 21)");
      void* _sync_method_call_166 = _enc__method__encore_libs_master_Ped_util_Agent_passive_Agent_struct_remove(_ctx, _fieldacc_167, _a_13);
      _ite_163 = ((void*) _sync_method_call_166);
    }
    else
    {
      UNIT;
      _ite_163 = ((void*) UNIT);
    };
    _while_168 = _ite_163;
  };
  /* if this.agents.size() > 0 then
  this!move()
else
  this.toplevel.done() */;
  void* _ite_169;
  if (({int64_t _binop_173 = (({_enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_struct_t* _fieldacc_171 = (*_this)._enc__field_agents;
                                check_receiver(_fieldacc_171, ".", "this.agents", "size", "\"./encore-libs-master/Ped_util/Box.enc\" (line 297, column 12)");
                                int64_t _sync_method_call_170 = _enc__method__encore_libs_master_Ped_util_Agent_passive_Agent_struct_size(_ctx, _fieldacc_171); _sync_method_call_170;}) > ({int64_t _literal_172 = 0; _literal_172;})); _binop_173;}))
  {
    /* this!move() */;
    check_receiver(_this, " ! ", "this", "move", "\"./encore-libs-master/Ped_util/Box.enc\" (line 297, column 43)");
    _enc__method__encore_libs_master_Ped_util_Box_Single_Box_move_one_way(_ctx, _this);
    _ite_169 = ((void*) UNIT);
  }
  else
  {
    /* this.toplevel.done() */;
    _enc__trait__encore_libs_master_Ped_util_Box_Box_face_t* _fieldacc_174 = (*_this)._enc__field_toplevel;
    check_receiver(_fieldacc_174, ".", "this.toplevel", "done", "\"./encore-libs-master/Ped_util/Box.enc\" (line 298, column 13)");
    void* (*_Box_face_done_175) (pony_ctx_t**, _enc__trait__encore_libs_master_Ped_util_Box_Box_face_t*);
    void* (*_Box_face_vtable_176) (int);
    _Box_face_vtable_176 = ((void*) _fieldacc_174->_enc__self_type->vtable);
    _Box_face_done_175 = _Box_face_vtable_176(_ENC__MSG__encore_libs_master_Ped_util_Box_Box_face_done);
    void* _trait_method_call_177 = _Box_face_done_175(_ctx, ((_enc__trait__encore_libs_master_Ped_util_Box_Box_face_t*) _fieldacc_174));
    _ite_169 = ((void*) _trait_method_call_177);
  };
  /* this.agents.size() */;
  _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_struct_t* _fieldacc_179 = (*_this)._enc__field_agents;
  check_receiver(_fieldacc_179, ".", "this.agents", "size", "\"./encore-libs-master/Ped_util/Box.enc\" (line 300, column 9)");
  int64_t _sync_method_call_178 = _enc__method__encore_libs_master_Ped_util_Agent_passive_Agent_struct_size(_ctx, _fieldacc_179);
  return ((int64_t) _sync_method_call_178);
}


void* _enc__method__encore_libs_master_Ped_util_Box_Single_Box_done(pony_ctx_t** _ctx, _enc__active__encore_libs_master_Ped_util_Box_Single_Box_t* _this)
{
  /* if this.agents.size() == 0 then
  this.toplevel.done() */;
  void* _ite_0;
  if (({int64_t _binop_4 = (({_enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_struct_t* _fieldacc_2 = (*_this)._enc__field_agents;
                              check_receiver(_fieldacc_2, ".", "this.agents", "size", "\"./encore-libs-master/Ped_util/Box.enc\" (line 304, column 12)");
                              int64_t _sync_method_call_1 = _enc__method__encore_libs_master_Ped_util_Agent_passive_Agent_struct_size(_ctx, _fieldacc_2); _sync_method_call_1;}) == ({int64_t _literal_3 = 0; _literal_3;})); _binop_4;}))
  {
    /* this.toplevel.done() */;
    _enc__trait__encore_libs_master_Ped_util_Box_Box_face_t* _fieldacc_5 = (*_this)._enc__field_toplevel;
    check_receiver(_fieldacc_5, ".", "this.toplevel", "done", "\"./encore-libs-master/Ped_util/Box.enc\" (line 305, column 13)");
    void* (*_Box_face_done_6) (pony_ctx_t**, _enc__trait__encore_libs_master_Ped_util_Box_Box_face_t*);
    void* (*_Box_face_vtable_7) (int);
    _Box_face_vtable_7 = ((void*) _fieldacc_5->_enc__self_type->vtable);
    _Box_face_done_6 = _Box_face_vtable_7(_ENC__MSG__encore_libs_master_Ped_util_Box_Box_face_done);
    void* _trait_method_call_8 = _Box_face_done_6(_ctx, ((_enc__trait__encore_libs_master_Ped_util_Box_Box_face_t*) _fieldacc_5));
    _ite_0 = ((void*) _trait_method_call_8);
  }
  else
  {
    UNIT;
    _ite_0 = ((void*) UNIT);
  };
  return UNIT;
}


int64_t _enc__method__encore_libs_master_Ped_util_Box_Single_Box_external_move(pony_ctx_t** _ctx, _enc__active__encore_libs_master_Ped_util_Box_Single_Box_t* _this, _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t* _enc__arg_a, tuple_t* _enc__arg_pos)
{
  /* if this.agents.size() == 0 then
  {a.move(pos);
   this.agents.add(a);
   this!move();
   true}
else
  if this.agents.isin(pos) then
    false
  else
    {a.move(pos);
     this.agents.add(a);
     true} */;
  int64_t _ite_0;
  if (({int64_t _binop_4 = (({_enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_struct_t* _fieldacc_2 = (*_this)._enc__field_agents;
                              check_receiver(_fieldacc_2, ".", "this.agents", "size", "\"./encore-libs-master/Ped_util/Box.enc\" (line 310, column 8)");
                              int64_t _sync_method_call_1 = _enc__method__encore_libs_master_Ped_util_Agent_passive_Agent_struct_size(_ctx, _fieldacc_2); _sync_method_call_1;}) == ({int64_t _literal_3 = 0; _literal_3;})); _binop_4;}))
  {
    /* a.move(pos) */;
    check_receiver(_enc__arg_a, ".", "a", "move", "\"./encore-libs-master/Ped_util/Box.enc\" (line 310, column 37)");
    void* _sync_method_call_5 = _enc__method__encore_libs_master_Ped_util_Agent_passive_Agent_move(_ctx, _enc__arg_a, _enc__arg_pos);
    /* this.agents.add(a) */;
    _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_struct_t* _fieldacc_7 = (*_this)._enc__field_agents;
    check_receiver(_fieldacc_7, ".", "this.agents", "add", "\"./encore-libs-master/Ped_util/Box.enc\" (line 310, column 50)");
    void* _sync_method_call_6 = _enc__method__encore_libs_master_Ped_util_Agent_passive_Agent_struct_add(_ctx, _fieldacc_7, _enc__arg_a);
    /* this!move() */;
    check_receiver(_this, " ! ", "this", "move", "\"./encore-libs-master/Ped_util/Box.enc\" (line 310, column 74)");
    _enc__method__encore_libs_master_Ped_util_Box_Single_Box_move_one_way(_ctx, _this);
    /* true */;
    int64_t _literal_8 = 1/*True*/;
    _ite_0 = ((int64_t) _literal_8);
  }
  else
  {
    /* if this.agents.isin(pos) then
  false
else
  {a.move(pos);
   this.agents.add(a);
   true} */;
    int64_t _ite_9;
    if (({_enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_struct_t* _fieldacc_11 = (*_this)._enc__field_agents;
          check_receiver(_fieldacc_11, ".", "this.agents", "isin", "\"./encore-libs-master/Ped_util/Box.enc\" (line 311, column 8)");
          int64_t _sync_method_call_10 = _enc__method__encore_libs_master_Ped_util_Agent_passive_Agent_struct_isin(_ctx, _fieldacc_11, _enc__arg_pos); _sync_method_call_10;}))
    {
      /* false */;
      int64_t _literal_12 = 0/*False*/;
      _ite_9 = ((int64_t) _literal_12);
    }
    else
    {
      /* a.move(pos) */;
      check_receiver(_enc__arg_a, ".", "a", "move", "\"./encore-libs-master/Ped_util/Box.enc\" (line 312, column 9)");
      void* _sync_method_call_13 = _enc__method__encore_libs_master_Ped_util_Agent_passive_Agent_move(_ctx, _enc__arg_a, _enc__arg_pos);
      /* this.agents.add(a) */;
      _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_struct_t* _fieldacc_15 = (*_this)._enc__field_agents;
      check_receiver(_fieldacc_15, ".", "this.agents", "add", "\"./encore-libs-master/Ped_util/Box.enc\" (line 313, column 9)");
      void* _sync_method_call_14 = _enc__method__encore_libs_master_Ped_util_Agent_passive_Agent_struct_add(_ctx, _fieldacc_15, _enc__arg_a);
      /* true */;
      int64_t _literal_16 = 1/*True*/;
      _ite_9 = ((int64_t) _literal_16);
    };
    _ite_0 = ((int64_t) _ite_9);
  };
  return ((int64_t) _ite_0);
}


future_t* _enc__method__encore_libs_master_Ped_util_Box_Single_Box__init_future(pony_ctx_t** _ctx, _enc__active__encore_libs_master_Ped_util_Box_Single_Box_t* _this, tuple_t* _enc__arg_space, _enc__trait__encore_libs_master_Ped_util_Box_Box_face_t* _enc__arg_toplevel)
{
  future_t* _fut = future_mk(_ctx, ENCORE_PRIMITIVE);
  pony_gc_send((*_ctx));
  encore_trace_object((*_ctx), _enc__arg_space, tuple_trace);
  ((capability_t*) _enc__arg_toplevel)->_enc__self_type->trace((*_ctx), _enc__arg_toplevel);
  encore_trace_object((*_ctx), _fut, future_trace);
  pony_send_done((*_ctx));
  _enc__fut_msg__encore_libs_master_Ped_util_Box_Single_Box__init_t* msg = ((_enc__fut_msg__encore_libs_master_Ped_util_Box_Single_Box__init_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__fut_msg__encore_libs_master_Ped_util_Box_Single_Box__init_t)), _ENC__FUT_MSG__encore_libs_master_Ped_util_Box_Single_Box__init));
  msg->f1 = _enc__arg_space;
  msg->f2 = _enc__arg_toplevel;
  msg->_fut = _fut;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
  return _fut;
}


future_t* _enc__method__encore_libs_master_Ped_util_Box_Single_Box_space_future(pony_ctx_t** _ctx, _enc__active__encore_libs_master_Ped_util_Box_Single_Box_t* _this)
{
  future_t* _fut = future_mk(_ctx, (&(tuple_type)));
  pony_gc_send((*_ctx));
  encore_trace_object((*_ctx), _fut, future_trace);
  pony_send_done((*_ctx));
  _enc__fut_msg__encore_libs_master_Ped_util_Box_Single_Box_space_t* msg = ((_enc__fut_msg__encore_libs_master_Ped_util_Box_Single_Box_space_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__fut_msg__encore_libs_master_Ped_util_Box_Single_Box_space_t)), _ENC__FUT_MSG__encore_libs_master_Ped_util_Box_Single_Box_space));
  msg->_fut = _fut;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
  return _fut;
}


future_t* _enc__method__encore_libs_master_Ped_util_Box_Single_Box_agents_future(pony_ctx_t** _ctx, _enc__active__encore_libs_master_Ped_util_Box_Single_Box_t* _this)
{
  future_t* _fut = future_mk(_ctx, (&(array_type)));
  pony_gc_send((*_ctx));
  encore_trace_object((*_ctx), _fut, future_trace);
  pony_send_done((*_ctx));
  _enc__fut_msg__encore_libs_master_Ped_util_Box_Single_Box_agents_t* msg = ((_enc__fut_msg__encore_libs_master_Ped_util_Box_Single_Box_agents_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__fut_msg__encore_libs_master_Ped_util_Box_Single_Box_agents_t)), _ENC__FUT_MSG__encore_libs_master_Ped_util_Box_Single_Box_agents));
  msg->_fut = _fut;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
  return _fut;
}


future_t* _enc__method__encore_libs_master_Ped_util_Box_Single_Box_add_future(pony_ctx_t** _ctx, _enc__active__encore_libs_master_Ped_util_Box_Single_Box_t* _this, _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t* _enc__arg_a)
{
  future_t* _fut = future_mk(_ctx, ENCORE_PRIMITIVE);
  pony_gc_send((*_ctx));
  encore_trace_object((*_ctx), _enc__arg_a, _enc__trace__encore_libs_master_Ped_util_Agent_passive_Agent);
  encore_trace_object((*_ctx), _fut, future_trace);
  pony_send_done((*_ctx));
  _enc__fut_msg__encore_libs_master_Ped_util_Box_Single_Box_add_t* msg = ((_enc__fut_msg__encore_libs_master_Ped_util_Box_Single_Box_add_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__fut_msg__encore_libs_master_Ped_util_Box_Single_Box_add_t)), _ENC__FUT_MSG__encore_libs_master_Ped_util_Box_Single_Box_add));
  msg->f1 = _enc__arg_a;
  msg->_fut = _fut;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
  return _fut;
}


future_t* _enc__method__encore_libs_master_Ped_util_Box_Single_Box_start_future(pony_ctx_t** _ctx, _enc__active__encore_libs_master_Ped_util_Box_Single_Box_t* _this)
{
  future_t* _fut = future_mk(_ctx, ENCORE_PRIMITIVE);
  pony_gc_send((*_ctx));
  encore_trace_object((*_ctx), _fut, future_trace);
  pony_send_done((*_ctx));
  _enc__fut_msg__encore_libs_master_Ped_util_Box_Single_Box_start_t* msg = ((_enc__fut_msg__encore_libs_master_Ped_util_Box_Single_Box_start_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__fut_msg__encore_libs_master_Ped_util_Box_Single_Box_start_t)), _ENC__FUT_MSG__encore_libs_master_Ped_util_Box_Single_Box_start));
  msg->_fut = _fut;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
  return _fut;
}


future_t* _enc__method__encore_libs_master_Ped_util_Box_Single_Box_move_future(pony_ctx_t** _ctx, _enc__active__encore_libs_master_Ped_util_Box_Single_Box_t* _this)
{
  future_t* _fut = future_mk(_ctx, ENCORE_PRIMITIVE);
  pony_gc_send((*_ctx));
  encore_trace_object((*_ctx), _fut, future_trace);
  pony_send_done((*_ctx));
  _enc__fut_msg__encore_libs_master_Ped_util_Box_Single_Box_move_t* msg = ((_enc__fut_msg__encore_libs_master_Ped_util_Box_Single_Box_move_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__fut_msg__encore_libs_master_Ped_util_Box_Single_Box_move_t)), _ENC__FUT_MSG__encore_libs_master_Ped_util_Box_Single_Box_move));
  msg->_fut = _fut;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
  return _fut;
}


future_t* _enc__method__encore_libs_master_Ped_util_Box_Single_Box_done_future(pony_ctx_t** _ctx, _enc__active__encore_libs_master_Ped_util_Box_Single_Box_t* _this)
{
  future_t* _fut = future_mk(_ctx, ENCORE_PRIMITIVE);
  pony_gc_send((*_ctx));
  encore_trace_object((*_ctx), _fut, future_trace);
  pony_send_done((*_ctx));
  _enc__fut_msg__encore_libs_master_Ped_util_Box_Single_Box_done_t* msg = ((_enc__fut_msg__encore_libs_master_Ped_util_Box_Single_Box_done_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__fut_msg__encore_libs_master_Ped_util_Box_Single_Box_done_t)), _ENC__FUT_MSG__encore_libs_master_Ped_util_Box_Single_Box_done));
  msg->_fut = _fut;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
  return _fut;
}


future_t* _enc__method__encore_libs_master_Ped_util_Box_Single_Box_external_move_future(pony_ctx_t** _ctx, _enc__active__encore_libs_master_Ped_util_Box_Single_Box_t* _this, _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t* _enc__arg_a, tuple_t* _enc__arg_pos)
{
  future_t* _fut = future_mk(_ctx, ENCORE_PRIMITIVE);
  pony_gc_send((*_ctx));
  encore_trace_object((*_ctx), _enc__arg_a, _enc__trace__encore_libs_master_Ped_util_Agent_passive_Agent);
  encore_trace_object((*_ctx), _enc__arg_pos, tuple_trace);
  encore_trace_object((*_ctx), _fut, future_trace);
  pony_send_done((*_ctx));
  _enc__fut_msg__encore_libs_master_Ped_util_Box_Single_Box_external_move_t* msg = ((_enc__fut_msg__encore_libs_master_Ped_util_Box_Single_Box_external_move_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__fut_msg__encore_libs_master_Ped_util_Box_Single_Box_external_move_t)), _ENC__FUT_MSG__encore_libs_master_Ped_util_Box_Single_Box_external_move));
  msg->f1 = _enc__arg_a;
  msg->f2 = _enc__arg_pos;
  msg->_fut = _fut;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
  return _fut;
}


void _enc__method__encore_libs_master_Ped_util_Box_Single_Box__init_one_way(pony_ctx_t** _ctx, _enc__active__encore_libs_master_Ped_util_Box_Single_Box_t* _this, tuple_t* _enc__arg_space, _enc__trait__encore_libs_master_Ped_util_Box_Box_face_t* _enc__arg_toplevel)
{
  pony_gc_send((*_ctx));
  encore_trace_object((*_ctx), _enc__arg_space, tuple_trace);
  ((capability_t*) _enc__arg_toplevel)->_enc__self_type->trace((*_ctx), _enc__arg_toplevel);
  /* No tracing future for oneway msg */;
  pony_send_done((*_ctx));
  _enc__oneway_msg__encore_libs_master_Ped_util_Box_Single_Box__init_t* msg = ((_enc__oneway_msg__encore_libs_master_Ped_util_Box_Single_Box__init_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__oneway_msg__encore_libs_master_Ped_util_Box_Single_Box__init_t)), _ENC__ONEWAY_MSG__encore_libs_master_Ped_util_Box_Single_Box__init));
  msg->f1 = _enc__arg_space;
  msg->f2 = _enc__arg_toplevel;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
}


void _enc__method__encore_libs_master_Ped_util_Box_Single_Box_space_one_way(pony_ctx_t** _ctx, _enc__active__encore_libs_master_Ped_util_Box_Single_Box_t* _this)
{
  pony_gc_send((*_ctx));
  /* No tracing future for oneway msg */;
  pony_send_done((*_ctx));
  _enc__oneway_msg__encore_libs_master_Ped_util_Box_Single_Box_space_t* msg = ((_enc__oneway_msg__encore_libs_master_Ped_util_Box_Single_Box_space_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__oneway_msg__encore_libs_master_Ped_util_Box_Single_Box_space_t)), _ENC__ONEWAY_MSG__encore_libs_master_Ped_util_Box_Single_Box_space));
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
}


void _enc__method__encore_libs_master_Ped_util_Box_Single_Box_agents_one_way(pony_ctx_t** _ctx, _enc__active__encore_libs_master_Ped_util_Box_Single_Box_t* _this)
{
  pony_gc_send((*_ctx));
  /* No tracing future for oneway msg */;
  pony_send_done((*_ctx));
  _enc__oneway_msg__encore_libs_master_Ped_util_Box_Single_Box_agents_t* msg = ((_enc__oneway_msg__encore_libs_master_Ped_util_Box_Single_Box_agents_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__oneway_msg__encore_libs_master_Ped_util_Box_Single_Box_agents_t)), _ENC__ONEWAY_MSG__encore_libs_master_Ped_util_Box_Single_Box_agents));
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
}


void _enc__method__encore_libs_master_Ped_util_Box_Single_Box_add_one_way(pony_ctx_t** _ctx, _enc__active__encore_libs_master_Ped_util_Box_Single_Box_t* _this, _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t* _enc__arg_a)
{
  pony_gc_send((*_ctx));
  encore_trace_object((*_ctx), _enc__arg_a, _enc__trace__encore_libs_master_Ped_util_Agent_passive_Agent);
  /* No tracing future for oneway msg */;
  pony_send_done((*_ctx));
  _enc__oneway_msg__encore_libs_master_Ped_util_Box_Single_Box_add_t* msg = ((_enc__oneway_msg__encore_libs_master_Ped_util_Box_Single_Box_add_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__oneway_msg__encore_libs_master_Ped_util_Box_Single_Box_add_t)), _ENC__ONEWAY_MSG__encore_libs_master_Ped_util_Box_Single_Box_add));
  msg->f1 = _enc__arg_a;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
}


void _enc__method__encore_libs_master_Ped_util_Box_Single_Box_start_one_way(pony_ctx_t** _ctx, _enc__active__encore_libs_master_Ped_util_Box_Single_Box_t* _this)
{
  pony_gc_send((*_ctx));
  /* No tracing future for oneway msg */;
  pony_send_done((*_ctx));
  _enc__oneway_msg__encore_libs_master_Ped_util_Box_Single_Box_start_t* msg = ((_enc__oneway_msg__encore_libs_master_Ped_util_Box_Single_Box_start_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__oneway_msg__encore_libs_master_Ped_util_Box_Single_Box_start_t)), _ENC__ONEWAY_MSG__encore_libs_master_Ped_util_Box_Single_Box_start));
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
}


void _enc__method__encore_libs_master_Ped_util_Box_Single_Box_move_one_way(pony_ctx_t** _ctx, _enc__active__encore_libs_master_Ped_util_Box_Single_Box_t* _this)
{
  pony_gc_send((*_ctx));
  /* No tracing future for oneway msg */;
  pony_send_done((*_ctx));
  _enc__oneway_msg__encore_libs_master_Ped_util_Box_Single_Box_move_t* msg = ((_enc__oneway_msg__encore_libs_master_Ped_util_Box_Single_Box_move_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__oneway_msg__encore_libs_master_Ped_util_Box_Single_Box_move_t)), _ENC__ONEWAY_MSG__encore_libs_master_Ped_util_Box_Single_Box_move));
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
}


void _enc__method__encore_libs_master_Ped_util_Box_Single_Box_done_one_way(pony_ctx_t** _ctx, _enc__active__encore_libs_master_Ped_util_Box_Single_Box_t* _this)
{
  pony_gc_send((*_ctx));
  /* No tracing future for oneway msg */;
  pony_send_done((*_ctx));
  _enc__oneway_msg__encore_libs_master_Ped_util_Box_Single_Box_done_t* msg = ((_enc__oneway_msg__encore_libs_master_Ped_util_Box_Single_Box_done_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__oneway_msg__encore_libs_master_Ped_util_Box_Single_Box_done_t)), _ENC__ONEWAY_MSG__encore_libs_master_Ped_util_Box_Single_Box_done));
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
}


void _enc__method__encore_libs_master_Ped_util_Box_Single_Box_external_move_one_way(pony_ctx_t** _ctx, _enc__active__encore_libs_master_Ped_util_Box_Single_Box_t* _this, _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t* _enc__arg_a, tuple_t* _enc__arg_pos)
{
  pony_gc_send((*_ctx));
  encore_trace_object((*_ctx), _enc__arg_a, _enc__trace__encore_libs_master_Ped_util_Agent_passive_Agent);
  encore_trace_object((*_ctx), _enc__arg_pos, tuple_trace);
  /* No tracing future for oneway msg */;
  pony_send_done((*_ctx));
  _enc__oneway_msg__encore_libs_master_Ped_util_Box_Single_Box_external_move_t* msg = ((_enc__oneway_msg__encore_libs_master_Ped_util_Box_Single_Box_external_move_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__oneway_msg__encore_libs_master_Ped_util_Box_Single_Box_external_move_t)), _ENC__ONEWAY_MSG__encore_libs_master_Ped_util_Box_Single_Box_external_move));
  msg->f1 = _enc__arg_a;
  msg->f2 = _enc__arg_pos;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
}


static void _enc__dispatch__encore_libs_master_Ped_util_Box_Single_Box(pony_ctx_t** _ctx, pony_actor_t* _a, pony_msg_t* _m)
{
  _enc__active__encore_libs_master_Ped_util_Box_Single_Box_t* _this = ((_enc__active__encore_libs_master_Ped_util_Box_Single_Box_t*) _a);
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
    case _ENC__FUT_MSG__encore_libs_master_Ped_util_Box_Single_Box__init:
    {
      future_t* _fut = ((encore_fut_msg_t*) _m)->_fut;
      tuple_t* _enc__arg_space = ((_enc__fut_msg__encore_libs_master_Ped_util_Box_Single_Box__init_t*) _m)->f1;
      _enc__trait__encore_libs_master_Ped_util_Box_Box_face_t* _enc__arg_toplevel = ((_enc__fut_msg__encore_libs_master_Ped_util_Box_Single_Box__init_t*) _m)->f2;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      encore_trace_object((*_ctx), _enc__arg_space, tuple_trace);
      ((capability_t*) _enc__arg_toplevel)->_enc__self_type->trace((*_ctx), _enc__arg_toplevel);
      encore_trace_object((*_ctx), _fut, future_type.trace);
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      future_fulfil(_ctx, _fut, ((encore_arg_t) {.p = _enc__method__encore_libs_master_Ped_util_Box_Single_Box__init(_ctx, _this, _enc__arg_space, _enc__arg_toplevel)}));
      break;
    }
    case _ENC__ONEWAY_MSG__encore_libs_master_Ped_util_Box_Single_Box__init:
    {
      tuple_t* _enc__arg_space = ((_enc__oneway_msg__encore_libs_master_Ped_util_Box_Single_Box__init_t*) _m)->f1;
      _enc__trait__encore_libs_master_Ped_util_Box_Box_face_t* _enc__arg_toplevel = ((_enc__oneway_msg__encore_libs_master_Ped_util_Box_Single_Box__init_t*) _m)->f2;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      encore_trace_object((*_ctx), _enc__arg_space, tuple_trace);
      ((capability_t*) _enc__arg_toplevel)->_enc__self_type->trace((*_ctx), _enc__arg_toplevel);
      /* Not tracing the future in a oneWay send */;
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      _enc__method__encore_libs_master_Ped_util_Box_Single_Box__init(_ctx, _this, _enc__arg_space, _enc__arg_toplevel);
      break;
    }
    case _ENC__FUT_MSG__encore_libs_master_Ped_util_Box_Single_Box_space:
    {
      future_t* _fut = ((encore_fut_msg_t*) _m)->_fut;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      encore_trace_object((*_ctx), _fut, future_type.trace);
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      future_fulfil(_ctx, _fut, ((encore_arg_t) {.p = _enc__method__encore_libs_master_Ped_util_Box_Single_Box_space(_ctx, _this)}));
      break;
    }
    case _ENC__ONEWAY_MSG__encore_libs_master_Ped_util_Box_Single_Box_space:
    {
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      /* Not tracing the future in a oneWay send */;
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      _enc__method__encore_libs_master_Ped_util_Box_Single_Box_space(_ctx, _this);
      break;
    }
    case _ENC__FUT_MSG__encore_libs_master_Ped_util_Box_Single_Box_agents:
    {
      future_t* _fut = ((encore_fut_msg_t*) _m)->_fut;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      encore_trace_object((*_ctx), _fut, future_type.trace);
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      future_fulfil(_ctx, _fut, ((encore_arg_t) {.p = _enc__method__encore_libs_master_Ped_util_Box_Single_Box_agents(_ctx, _this)}));
      break;
    }
    case _ENC__ONEWAY_MSG__encore_libs_master_Ped_util_Box_Single_Box_agents:
    {
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      /* Not tracing the future in a oneWay send */;
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      _enc__method__encore_libs_master_Ped_util_Box_Single_Box_agents(_ctx, _this);
      break;
    }
    case _ENC__FUT_MSG__encore_libs_master_Ped_util_Box_Single_Box_add:
    {
      future_t* _fut = ((encore_fut_msg_t*) _m)->_fut;
      _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t* _enc__arg_a = ((_enc__fut_msg__encore_libs_master_Ped_util_Box_Single_Box_add_t*) _m)->f1;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      encore_trace_object((*_ctx), _enc__arg_a, _enc__trace__encore_libs_master_Ped_util_Agent_passive_Agent);
      encore_trace_object((*_ctx), _fut, future_type.trace);
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      future_fulfil(_ctx, _fut, ((encore_arg_t) {.p = _enc__method__encore_libs_master_Ped_util_Box_Single_Box_add(_ctx, _this, _enc__arg_a)}));
      break;
    }
    case _ENC__ONEWAY_MSG__encore_libs_master_Ped_util_Box_Single_Box_add:
    {
      _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t* _enc__arg_a = ((_enc__oneway_msg__encore_libs_master_Ped_util_Box_Single_Box_add_t*) _m)->f1;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      encore_trace_object((*_ctx), _enc__arg_a, _enc__trace__encore_libs_master_Ped_util_Agent_passive_Agent);
      /* Not tracing the future in a oneWay send */;
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      _enc__method__encore_libs_master_Ped_util_Box_Single_Box_add(_ctx, _this, _enc__arg_a);
      break;
    }
    case _ENC__FUT_MSG__encore_libs_master_Ped_util_Box_Single_Box_start:
    {
      future_t* _fut = ((encore_fut_msg_t*) _m)->_fut;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      encore_trace_object((*_ctx), _fut, future_type.trace);
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      future_fulfil(_ctx, _fut, ((encore_arg_t) {.p = _enc__method__encore_libs_master_Ped_util_Box_Single_Box_start(_ctx, _this)}));
      break;
    }
    case _ENC__ONEWAY_MSG__encore_libs_master_Ped_util_Box_Single_Box_start:
    {
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      /* Not tracing the future in a oneWay send */;
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      _enc__method__encore_libs_master_Ped_util_Box_Single_Box_start(_ctx, _this);
      break;
    }
    case _ENC__FUT_MSG__encore_libs_master_Ped_util_Box_Single_Box_move:
    {
      future_t* _fut = ((encore_fut_msg_t*) _m)->_fut;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      encore_trace_object((*_ctx), _fut, future_type.trace);
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      future_fulfil(_ctx, _fut, ((encore_arg_t) {.i = _enc__method__encore_libs_master_Ped_util_Box_Single_Box_move(_ctx, _this)}));
      break;
    }
    case _ENC__ONEWAY_MSG__encore_libs_master_Ped_util_Box_Single_Box_move:
    {
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      /* Not tracing the future in a oneWay send */;
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      _enc__method__encore_libs_master_Ped_util_Box_Single_Box_move(_ctx, _this);
      break;
    }
    case _ENC__FUT_MSG__encore_libs_master_Ped_util_Box_Single_Box_done:
    {
      future_t* _fut = ((encore_fut_msg_t*) _m)->_fut;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      encore_trace_object((*_ctx), _fut, future_type.trace);
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      future_fulfil(_ctx, _fut, ((encore_arg_t) {.p = _enc__method__encore_libs_master_Ped_util_Box_Single_Box_done(_ctx, _this)}));
      break;
    }
    case _ENC__ONEWAY_MSG__encore_libs_master_Ped_util_Box_Single_Box_done:
    {
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      /* Not tracing the future in a oneWay send */;
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      _enc__method__encore_libs_master_Ped_util_Box_Single_Box_done(_ctx, _this);
      break;
    }
    case _ENC__FUT_MSG__encore_libs_master_Ped_util_Box_Single_Box_external_move:
    {
      future_t* _fut = ((encore_fut_msg_t*) _m)->_fut;
      _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t* _enc__arg_a = ((_enc__fut_msg__encore_libs_master_Ped_util_Box_Single_Box_external_move_t*) _m)->f1;
      tuple_t* _enc__arg_pos = ((_enc__fut_msg__encore_libs_master_Ped_util_Box_Single_Box_external_move_t*) _m)->f2;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      encore_trace_object((*_ctx), _enc__arg_a, _enc__trace__encore_libs_master_Ped_util_Agent_passive_Agent);
      encore_trace_object((*_ctx), _enc__arg_pos, tuple_trace);
      encore_trace_object((*_ctx), _fut, future_type.trace);
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      future_fulfil(_ctx, _fut, ((encore_arg_t) {.i = _enc__method__encore_libs_master_Ped_util_Box_Single_Box_external_move(_ctx, _this, _enc__arg_a, _enc__arg_pos)}));
      break;
    }
    case _ENC__ONEWAY_MSG__encore_libs_master_Ped_util_Box_Single_Box_external_move:
    {
      _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t* _enc__arg_a = ((_enc__oneway_msg__encore_libs_master_Ped_util_Box_Single_Box_external_move_t*) _m)->f1;
      tuple_t* _enc__arg_pos = ((_enc__oneway_msg__encore_libs_master_Ped_util_Box_Single_Box_external_move_t*) _m)->f2;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      encore_trace_object((*_ctx), _enc__arg_a, _enc__trace__encore_libs_master_Ped_util_Agent_passive_Agent);
      encore_trace_object((*_ctx), _enc__arg_pos, tuple_trace);
      /* Not tracing the future in a oneWay send */;
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      _enc__method__encore_libs_master_Ped_util_Box_Single_Box_external_move(_ctx, _this, _enc__arg_a, _enc__arg_pos);
      break;
    }
    default:
    {
      printf("error, got invalid id: %zd", _m->id);
    }
  };
}


pony_type_t _enc__active__encore_libs_master_Ped_util_Box_Single_Box_type = {.id=_ENC__ID__encore_libs_master_Ped_util_Box_Single_Box, .size=sizeof(_enc__active__encore_libs_master_Ped_util_Box_Single_Box_t), .trace=_enc__trace__encore_libs_master_Ped_util_Box_Single_Box, .dispatch=_enc__dispatch__encore_libs_master_Ped_util_Box_Single_Box, .vtable=trait_method_selector};
