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


void _enc__type_init__encore_libs_master_Ped_util_Agent_passive_Agent_struct(_enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_struct_t* this, ... )
{
  va_list params;
  va_start(params, this);
  va_end(params);
}


void _enc__trace__encore_libs_master_Ped_util_Agent_passive_Agent_struct(pony_ctx_t* _ctx_arg, void* p)
{
  pony_ctx_t** _ctx = (&(_ctx_arg));
  _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_struct_t* _this = p;
  _enc__passive__encore_libs_master_Collections_HashMap_HashMap_t* _enc__field_ss2 = _this->_enc__field_ss2;
  encore_trace_object((*_ctx), _enc__field_ss2, _enc__trace__encore_libs_master_Collections_HashMap_HashMap);
  int64_t _enc__field_size = _this->_enc__field_size;
  /* Not tracing field '_enc__field_size' */;
}


_enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_struct_t* _enc__constructor__encore_libs_master_Ped_util_Agent_passive_Agent_struct(pony_ctx_t** _ctx)
{
  _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_struct_t* this = ((_enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_struct_t*) encore_alloc((*_ctx), sizeof(_enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_struct_t)));
  this->_enc__self_type = (&(_enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_struct_type));
  return this;
}


void* _enc__method__encore_libs_master_Ped_util_Agent_passive_Agent_struct__init(pony_ctx_t** _ctx, _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_struct_t* _this)
{
  /* this.ss2 = new HashMap<Agent>() */;
  _enc__passive__encore_libs_master_Collections_HashMap_HashMap_t* _new_0 = _enc__constructor__encore_libs_master_Collections_HashMap_HashMap(_ctx);
  _enc__type_init__encore_libs_master_Collections_HashMap_HashMap(_new_0, (&(_enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_type)));
  _enc__method__encore_libs_master_Collections_HashMap_HashMap__init(_ctx, _new_0);
  (*({ _this;}))._enc__field_ss2 = _new_0;
  /* this.size = 0 */;
  int64_t _literal_1 = 0;
  (*({ _this;}))._enc__field_size = _literal_1;
  return UNIT;
}


int64_t _enc__method__encore_libs_master_Ped_util_Agent_passive_Agent_struct_isin(pony_ctx_t** _ctx, _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_struct_t* _this, tuple_t* _enc__arg_pos)
{
  /* let iterator = new HashMapIterator<Agent>(this.ss2)
    found = false
in
  {while found == false and iterator.has_next()
     found = match iterator.next() with
               Just item => match (pos, item.value.pos()) with
                              ((x1, y1), (x2, y2)) when x1 == x2 and y1 == y2 => true
                              _ => false
                            
             ;
   found} */;
  /* iterator = new HashMapIterator<Agent>(this.ss2) */;
  _enc__passive__encore_libs_master_Collections_HashMap_HashMapIterator_t* _new_0 = _enc__constructor__encore_libs_master_Collections_HashMap_HashMapIterator(_ctx);
  _enc__passive__encore_libs_master_Collections_HashMap_HashMap_t* _fieldacc_1 = (*_this)._enc__field_ss2;
  _enc__type_init__encore_libs_master_Collections_HashMap_HashMapIterator(_new_0, (&(_enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_type)));
  _enc__method__encore_libs_master_Collections_HashMap_HashMapIterator__init(_ctx, _new_0, ((_enc__passive__encore_libs_master_Collections_HashMap_HashMap_t*) _fieldacc_1));
  _enc__passive__encore_libs_master_Collections_HashMap_HashMapIterator_t* _iterator_2 = _new_0;
  /* found = false */;
  int64_t _literal_3 = 0/*False*/;
  int64_t _found_4 = _literal_3;
  /* while found == false and iterator.has_next()
  found = match iterator.next() with
            Just item => match (pos, item.value.pos()) with
                           ((x1, y1), (x2, y2)) when x1 == x2 and y1 == y2 => true
                           _ => false
                         
           */;
  void* _while_45;
  while (({int64_t _binop_8 = (({int64_t _binop_6 = (({ _found_4;}) == ({int64_t _literal_5 = 0/*False*/; _literal_5;})); _binop_6;}) && ({check_receiver(_iterator_2, ".", "iterator", "has_next", "\"./encore-libs-master/Ped_util/Agent_passive.enc\" (line 87, column 40)");
                                                                                                                                           int64_t _sync_method_call_7 = _enc__method__encore_libs_master_Collections_HashMap_HashMapIterator_has_next(_ctx, _iterator_2); _sync_method_call_7;})); _binop_8;}))
  {
    /* found = match iterator.next() with
          Just item => match (pos, item.value.pos()) with
                         ((x1, y1), (x2, y2)) when x1 == x2 and y1 == y2 => true
                         _ => false
                       
         */;
    /* match iterator.next() with
  Just item => match (pos, item.value.pos()) with
                 ((x1, y1), (x2, y2)) when x1 == x2 and y1 == y2 => true
                 _ => false
               
 */;
    check_receiver(_iterator_2, ".", "iterator", "next", "\"./encore-libs-master/Ped_util/Agent_passive.enc\" (line 88, column 36)");
    option_t* _sync_method_call_10 = _enc__method__encore_libs_master_Collections_HashMap_HashMapIterator_next(_ctx, _iterator_2);
    int64_t _match_9;
    _enc__passive__encore_libs_master_Collections_HashMap_Entry_t* _item_11;
    if ((({int64_t _optionCheck_42;
           _optionCheck_42 = ((JUST == (*_sync_method_call_10).tag) && ({int64_t _varBinding_43;
                                                                         _enc__passive__encore_libs_master_Collections_HashMap_Entry_t* _optionVal_41 = (*_sync_method_call_10).val.p;
                                                                         _item_11 = _optionVal_41;
                                                                         _varBinding_43 = 1; _varBinding_43;})); _optionCheck_42;}) && ({int64_t _literal_44 = 1/*True*/; _literal_44;})))
    {
      _match_9 = ((int64_t) ({/* match (pos, item.value.pos()) with
  ((x1, y1), (x2, y2)) when x1 == x2 and y1 == y2 => true
  _ => false
 */;
                              tuple_t* _tuple_13 = tuple_mk(_ctx, 2);
                              tuple_set_type(_tuple_13, 0, (&(tuple_type)));
                              tuple_set_type(_tuple_13, 1, (&(tuple_type)));
                              _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t* _fieldacc_15 = (*_item_11)._enc__field_value.p;
                              check_receiver(_fieldacc_15, ".", "item.value", "pos", "\"./encore-libs-master/Ped_util/Agent_passive.enc\" (line 89, column 63)");
                              tuple_t* _sync_method_call_14 = _enc__method__encore_libs_master_Ped_util_Agent_passive_Agent_pos(_ctx, _fieldacc_15);
                              tuple_set(_tuple_13, 0, ((encore_arg_t) {.p = _enc__arg_pos}));
                              tuple_set(_tuple_13, 1, ((encore_arg_t) {.p = _sync_method_call_14}));
                              int64_t _match_12;
                              int64_t _x1_16;
                              int64_t _y1_17;
                              int64_t _x2_18;
                              int64_t _y2_19;
                              if ((({int64_t _tupleCheck_25;
                                     _tupleCheck_25 = 1;
                                     tuple_t* _tupleAccess_26 = tuple_get(_tuple_13, 0).p;
                                     int64_t _tupleCheck_27;
                                     _tupleCheck_27 = 1;
                                     int64_t _tupleAccess_28 = tuple_get(_tupleAccess_26, 0).i;
                                     int64_t _varBinding_29;
                                     _x1_16 = _tupleAccess_28;
                                     _varBinding_29 = 1;
                                     _tupleCheck_27 = (_tupleCheck_27 && _varBinding_29);
                                     int64_t _tupleAccess_30 = tuple_get(_tupleAccess_26, 1).i;
                                     int64_t _varBinding_31;
                                     _y1_17 = _tupleAccess_30;
                                     _varBinding_31 = 1;
                                     _tupleCheck_27 = (_tupleCheck_27 && _varBinding_31);
                                     _tupleCheck_25 = (_tupleCheck_25 && _tupleCheck_27);
                                     tuple_t* _tupleAccess_32 = tuple_get(_tuple_13, 1).p;
                                     int64_t _tupleCheck_33;
                                     _tupleCheck_33 = 1;
                                     int64_t _tupleAccess_34 = tuple_get(_tupleAccess_32, 0).i;
                                     int64_t _varBinding_35;
                                     _x2_18 = _tupleAccess_34;
                                     _varBinding_35 = 1;
                                     _tupleCheck_33 = (_tupleCheck_33 && _varBinding_35);
                                     int64_t _tupleAccess_36 = tuple_get(_tupleAccess_32, 1).i;
                                     int64_t _varBinding_37;
                                     _y2_19 = _tupleAccess_36;
                                     _varBinding_37 = 1;
                                     _tupleCheck_33 = (_tupleCheck_33 && _varBinding_37);
                                     _tupleCheck_25 = (_tupleCheck_25 && _tupleCheck_33); _tupleCheck_25;}) && ({int64_t _binop_40 = (({int64_t _binop_38 = (({ _x1_16;}) == ({ _x2_18;})); _binop_38;}) && ({int64_t _binop_39 = (({ _y1_17;}) == ({ _y2_19;})); _binop_39;})); _binop_40;})))
                              {
                                _match_12 = ((int64_t) ({int64_t _literal_20 = 1/*True*/; _literal_20;}));
                              }
                              else
                              {
                                tuple_t* ___21;
                                if ((({int64_t _varBinding_23;
                                       ___21 = _tuple_13;
                                       _varBinding_23 = 1; _varBinding_23;}) && ({int64_t _literal_24 = 1/*True*/; _literal_24;})))
                                {
                                  _match_12 = ((int64_t) ({int64_t _literal_22 = 0/*False*/; _literal_22;}));
                                }
                                else
                                {
                                  printf("*** Runtime error: No matching clause was found ***\n");
                                  exit(1);
                                };
                              }; _match_12;}));
    }
    else
    {
      printf("*** Runtime error: No matching clause was found ***\n");
      exit(1);
    };
    _found_4 = _match_9;
    _while_45 = UNIT;
  };
  /* found */;
  return ((int64_t) _found_4);
}


void* _enc__method__encore_libs_master_Ped_util_Agent_passive_Agent_struct_add(pony_ctx_t** _ctx, _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_struct_t* _this, _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t* _enc__arg_a)
{
  /* this.size = 1 + this.size */;
  int64_t _binop_2 = (({int64_t _literal_0 = 1; _literal_0;}) + ({int64_t _fieldacc_1 = (*_this)._enc__field_size; _fieldacc_1;}));
  (*({ _this;}))._enc__field_size = _binop_2;
  /* this.ss2.set(a, a) */;
  _enc__passive__encore_libs_master_Collections_HashMap_HashMap_t* _fieldacc_4 = (*_this)._enc__field_ss2;
  check_receiver(_fieldacc_4, ".", "this.ss2", "set", "\"./encore-libs-master/Ped_util/Agent_passive.enc\" (line 98, column 13)");
  _enc__trait__encore_libs_master_Collections_HashCode_HashCode_t* _cast_5 = ((_enc__trait__encore_libs_master_Collections_HashCode_HashCode_t*) _enc__arg_a);
  void* _sync_method_call_3 = _enc__method__encore_libs_master_Collections_HashMap_HashMap_set(_ctx, _fieldacc_4, ((_enc__trait__encore_libs_master_Collections_HashCode_HashCode_t*) _cast_5), ((encore_arg_t) {.p = _enc__arg_a}));
  return UNIT;
}


void* _enc__method__encore_libs_master_Ped_util_Agent_passive_Agent_struct_remove(pony_ctx_t** _ctx, _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_struct_t* _this, _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t* _enc__arg_a)
{
  /* this.ss2.remove(a) */;
  _enc__passive__encore_libs_master_Collections_HashMap_HashMap_t* _fieldacc_1 = (*_this)._enc__field_ss2;
  check_receiver(_fieldacc_1, ".", "this.ss2", "remove", "\"./encore-libs-master/Ped_util/Agent_passive.enc\" (line 101, column 13)");
  _enc__trait__encore_libs_master_Collections_HashCode_HashCode_t* _cast_2 = ((_enc__trait__encore_libs_master_Collections_HashCode_HashCode_t*) _enc__arg_a);
  int64_t _sync_method_call_0 = _enc__method__encore_libs_master_Collections_HashMap_HashMap_remove(_ctx, _fieldacc_1, ((_enc__trait__encore_libs_master_Collections_HashCode_HashCode_t*) _cast_2));
  /* this.size = this.size - 1 */;
  int64_t _binop_5 = (({int64_t _fieldacc_3 = (*_this)._enc__field_size; _fieldacc_3;}) - ({int64_t _literal_4 = 1; _literal_4;}));
  (*({ _this;}))._enc__field_size = _binop_5;
  return UNIT;
}


int64_t _enc__method__encore_libs_master_Ped_util_Agent_passive_Agent_struct_size(pony_ctx_t** _ctx, _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_struct_t* _this)
{
  /* this.size */;
  int64_t _fieldacc_0 = (*_this)._enc__field_size;
  return ((int64_t) _fieldacc_0);
}


_enc__passive__encore_libs_master_Collections_HashMap_HashMap_t* _enc__method__encore_libs_master_Ped_util_Agent_passive_Agent_struct_get_data(pony_ctx_t** _ctx, _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_struct_t* _this)
{
  /* this.ss2 */;
  _enc__passive__encore_libs_master_Collections_HashMap_HashMap_t* _fieldacc_0 = (*_this)._enc__field_ss2;
  return ((_enc__passive__encore_libs_master_Collections_HashMap_HashMap_t*) _fieldacc_0);
}


pony_type_t _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_struct_type = {.id=_ENC__ID__encore_libs_master_Ped_util_Agent_passive_Agent_struct, .size=sizeof(_enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_struct_t), .trace=_enc__trace__encore_libs_master_Ped_util_Agent_passive_Agent_struct, .vtable=trait_method_selector};
