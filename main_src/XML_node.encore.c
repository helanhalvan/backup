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


void _enc__type_init__encore_libs_master_XML_XML_XML_node(_enc__passive__encore_libs_master_XML_XML_XML_node_t* _this, ... )
{
  va_list params;
  va_start(params, _this);
  va_end(params);
}


void _enc__trace__encore_libs_master_XML_XML_XML_node(pony_ctx_t* _ctx_arg, void* p)
{
  pony_ctx_t** _ctx = (&(_ctx_arg));
  _enc__passive__encore_libs_master_XML_XML_XML_node_t* _this = p;
  _enc__passive_String_String_t* _enc__field_s_rep = _this->_enc__field_s_rep;
  encore_trace_object((*_ctx), _enc__field_s_rep, _enc__trace_String_String);
  array_t* _enc__field_children = _this->_enc__field_children;
  encore_trace_object((*_ctx), _enc__field_children, array_trace);
  array_t* _enc__field_comments = _this->_enc__field_comments;
  encore_trace_object((*_ctx), _enc__field_comments, array_trace);
  _enc__passive_String_String_t* _enc__field_name = _this->_enc__field_name;
  encore_trace_object((*_ctx), _enc__field_name, _enc__trace_String_String);
  array_t* _enc__field_atribs = _this->_enc__field_atribs;
  encore_trace_object((*_ctx), _enc__field_atribs, array_trace);
}


_enc__passive__encore_libs_master_XML_XML_XML_node_t* _enc__constructor__encore_libs_master_XML_XML_XML_node(pony_ctx_t** _ctx, pony_type_t** runtimeType)
{
  _enc__passive__encore_libs_master_XML_XML_XML_node_t* _this = ((_enc__passive__encore_libs_master_XML_XML_XML_node_t*) encore_alloc((*_ctx), sizeof(_enc__passive__encore_libs_master_XML_XML_XML_node_t)));
  _this->_enc__self_type = (&(_enc__passive__encore_libs_master_XML_XML_XML_node_type));
  return _this;
}


void* _enc__method__encore_libs_master_XML_XML_XML_node_init(pony_ctx_t** _ctx, _enc__passive__encore_libs_master_XML_XML_XML_node_t* _this, pony_type_t** runtimeType)
{
  ENC_DTRACE3(METHOD_ENTRY, (uintptr_t)*_ctx, (uintptr_t)_this, "init");
  /* () */;
  UNIT;
  ENC_DTRACE3(METHOD_EXIT, (uintptr_t)*_ctx, (uintptr_t)_this, "init");
  return UNIT;
}


array_t* _enc__method__encore_libs_master_XML_XML_XML_node_children_named(pony_ctx_t** _ctx, _enc__passive__encore_libs_master_XML_XML_XML_node_t* _this, pony_type_t** runtimeType, _enc__passive_String_String_t* _enc__arg_name)
{
  ENC_DTRACE3(METHOD_ENTRY, (uintptr_t)*_ctx, (uintptr_t)_this, "children_named");
  /* var cn = new [XML_node](|this.children|) */;
  /* cn = new [XML_node](|this.children|) */;
  ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "children");
  array_t* _fieldacc_1 = (*_this)._enc__field_children;
  int64_t _size_2 = array_size(_fieldacc_1);
  array_t* _array_0 = array_mk(_ctx, _size_2, (&(_enc__passive__encore_libs_master_XML_XML_XML_node_type)));
  array_t* _cn_3 = _array_0;
  /* var i = 0 */;
  /* i = 0 */;
  int64_t _literal_4 = 0;
  int64_t _i_5 = _literal_4;
  /* for a in this.children
  if a.name.contains(name) then
    {cn[i] = a;
     i = i + 1} */;
  void* _for_6;
  ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "children");
  array_t* _fieldacc_13 = (*_this)._enc__field_children;
  int64_t _start_9 = 0;
  int64_t _stop_10 = (array_size(_fieldacc_13) - 1);
  int64_t _src_step_12 = 1;
  int64_t _literal_14 = 1;
  int64_t _step_11 = (_literal_14 * _src_step_12);
  range_assert_step(_step_11);
  int64_t _index_7;
  if ((_step_11 > 0))
  {
    _index_7 = _start_9;
  }
  else
  {
    _index_7 = _stop_10;
  };
  while (((_index_7 >= _start_9) && (_index_7 <= _stop_10)))
  {
    _enc__passive__encore_libs_master_XML_XML_XML_node_t* _a_8 = array_get(_fieldacc_13, _index_7).p;
    /* if a.name.contains(name) then
  {cn[i] = a;
   i = i + 1} */;
    void* _ite_15;
    if (({ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_a_8, "name");
          _enc__passive_String_String_t* _fieldacc_17 = (*_a_8)._enc__field_name;
          check_receiver(_fieldacc_17, ".", "a.name", "contains", "\"./encore-libs-master/XML/XML.enc\" (line 17, column 16)");
          pony_type_t* _tmp_18[] = {};
          int64_t _sync_method_call_16 = _enc__method_String_String_contains(_ctx, _fieldacc_17, NULL, _enc__arg_name); _sync_method_call_16;}))
    {
      /* cn[i] = a */;
      array_set(_cn_3, _i_5, ((encore_arg_t) {.p = _a_8}));
      /* i = i + 1 */;
      int64_t _binop_20 = (({ _i_5;}) + ({int64_t _literal_19 = 1; _literal_19;}));
      _i_5 = _binop_20;
      _ite_15 = ((void*) UNIT);
    }
    else
    {
      UNIT;
      _ite_15 = ((void*) UNIT);
    };
    _for_6 = _ite_15;
    _index_7 = (_index_7 + _step_11);
  };
  /* var cn2 = new [XML_node](i) */;
  /* cn2 = new [XML_node](i) */;
  array_t* _array_21 = array_mk(_ctx, _i_5, (&(_enc__passive__encore_libs_master_XML_XML_XML_node_type)));
  array_t* _cn2_22 = _array_21;
  /* i = 0 */;
  int64_t _literal_23 = 0;
  _i_5 = _literal_23;
  /* for a in cn2
  {cn2[i] = cn[i];
   i = i + 1} */;
  void* _for_24;
  int64_t _start_27 = 0;
  int64_t _stop_28 = (array_size(_cn2_22) - 1);
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
    _enc__passive__encore_libs_master_XML_XML_XML_node_t* _a_26 = array_get(_cn2_22, _index_25).p;
    /* cn2[i] = cn[i] */;
    _enc__passive__encore_libs_master_XML_XML_XML_node_t* _access_32 = array_get(_cn_3, _i_5).p;
    array_set(_cn2_22, _i_5, ((encore_arg_t) {.p = _access_32}));
    /* i = i + 1 */;
    int64_t _binop_34 = (({ _i_5;}) + ({int64_t _literal_33 = 1; _literal_33;}));
    _i_5 = _binop_34;
    _for_24 = UNIT;
    _index_25 = (_index_25 + _step_29);
  };
  /* cn2 */;
  ENC_DTRACE3(METHOD_EXIT, (uintptr_t)*_ctx, (uintptr_t)_this, "children_named");
  return ((array_t*) _cn2_22);
}


_enc__passive_String_String_t* _enc__method__encore_libs_master_XML_XML_XML_node_attribute_value(pony_ctx_t** _ctx, _enc__passive__encore_libs_master_XML_XML_XML_node_t* _this, pony_type_t** runtimeType, _enc__passive_String_String_t* _enc__arg_name)
{
  ENC_DTRACE3(METHOD_ENTRY, (uintptr_t)*_ctx, (uintptr_t)_this, "attribute_value");
  /* var ret = "" */;
  /* ret = "" */;
  _enc__passive_String_String_t* _new_0 = _enc__constructor_String_String(_ctx, NULL);
  char* _embed_1 = ({"";});
  pony_type_t* _tmp_2[] = {};
  _enc__type_init_String_String(_new_0);
  _enc__method_String_String_init(_ctx, _new_0, NULL, _embed_1);
  _enc__passive_String_String_t* _ret_3 = _new_0;
  /* for a in this.atribs
  match a with
    (key, value) when key.contains(name) => {ret = value;
                                             ()}
    _ => ()
   */;
  void* _for_4;
  ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "atribs");
  array_t* _fieldacc_11 = (*_this)._enc__field_atribs;
  int64_t _start_7 = 0;
  int64_t _stop_8 = (array_size(_fieldacc_11) - 1);
  int64_t _src_step_10 = 1;
  int64_t _literal_12 = 1;
  int64_t _step_9 = (_literal_12 * _src_step_10);
  range_assert_step(_step_9);
  int64_t _index_5;
  if ((_step_9 > 0))
  {
    _index_5 = _start_7;
  }
  else
  {
    _index_5 = _stop_8;
  };
  while (((_index_5 >= _start_7) && (_index_5 <= _stop_8)))
  {
    tuple_t* _a_6 = array_get(_fieldacc_11, _index_5).p;
    /* match a with
  (key, value) when key.contains(name) => {ret = value;
                                           ()}
  _ => ()
 */;
    void* _match_13;
    _enc__passive_String_String_t* _key_14;
    _enc__passive_String_String_t* _value_15;
    if ((({int64_t _tupleCheck_19;
           _tupleCheck_19 = 1;
           _enc__passive_String_String_t* _tupleAccess_20 = tuple_get(_a_6, 0).p;
           int64_t _varBinding_21;
           _key_14 = _tupleAccess_20;
           _varBinding_21 = 1;
           _tupleCheck_19 = (_tupleCheck_19 && _varBinding_21);
           _enc__passive_String_String_t* _tupleAccess_22 = tuple_get(_a_6, 1).p;
           int64_t _varBinding_23;
           _value_15 = _tupleAccess_22;
           _varBinding_23 = 1;
           _tupleCheck_19 = (_tupleCheck_19 && _varBinding_23); _tupleCheck_19;}) && ({check_receiver(_key_14, ".", "key", "contains", "\"./encore-libs-master/XML/XML.enc\" (line 36, column 34)");
                                                                                       pony_type_t* _tmp_25[] = {};
                                                                                       int64_t _sync_method_call_24 = _enc__method_String_String_contains(_ctx, _key_14, NULL, _enc__arg_name); _sync_method_call_24;})))
    {
      _match_13 = ((void*) ({/* ret = value */;
                             _ret_3 = _value_15;
                             /* () */;
                             UNIT; UNIT;}));
    }
    else
    {
      tuple_t* ___16;
      if ((({int64_t _varBinding_17;
             ___16 = _a_6;
             _varBinding_17 = 1; _varBinding_17;}) && ({int64_t _literal_18 = 1/*True*/; _literal_18;})))
      {
        _match_13 = ((void*) ({UNIT; UNIT;}));
      }
      else
      {
        fprintf(stderr, "*** Runtime error: No matching clause was found ***\n");
        exit(1);
      };
    };
    _for_4 = _match_13;
    _index_5 = (_index_5 + _step_9);
  };
  /* ret */;
  ENC_DTRACE3(METHOD_EXIT, (uintptr_t)*_ctx, (uintptr_t)_this, "attribute_value");
  return ((_enc__passive_String_String_t*) _ret_3);
}


pony_type_t _enc__passive__encore_libs_master_XML_XML_XML_node_type = {.id=_ENC__ID__encore_libs_master_XML_XML_XML_node, .size=sizeof(_enc__passive__encore_libs_master_XML_XML_XML_node_t), .trace=_enc__trace__encore_libs_master_XML_XML_XML_node, .vtable=trait_method_selector};
