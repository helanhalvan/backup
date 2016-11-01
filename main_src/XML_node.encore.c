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


void _enc__type_init_XML_node(_enc__passive_XML_node_t* this, ... )
{
  va_list params;
  va_start(params, this);
  va_end(params);
}


void _enc__trace_XML_node(pony_ctx_t* _ctx_arg, void* p)
{
  pony_ctx_t** _ctx = (&(_ctx_arg));
  _enc__passive_XML_node_t* _this = p;
  _enc__passive_String_t* _enc__field_s_rep = _this->_enc__field_s_rep;
  encore_trace_object((*_ctx), _enc__field_s_rep, _enc__trace_String);
  array_t* _enc__field_children = _this->_enc__field_children;
  encore_trace_object((*_ctx), _enc__field_children, array_trace);
  array_t* _enc__field_comments = _this->_enc__field_comments;
  encore_trace_object((*_ctx), _enc__field_comments, array_trace);
  _enc__passive_String_t* _enc__field_name = _this->_enc__field_name;
  encore_trace_object((*_ctx), _enc__field_name, _enc__trace_String);
  array_t* _enc__field_atribs = _this->_enc__field_atribs;
  encore_trace_object((*_ctx), _enc__field_atribs, array_trace);
}


_enc__passive_XML_node_t* _enc__constructor_XML_node(pony_ctx_t** _ctx)
{
  _enc__passive_XML_node_t* this = ((_enc__passive_XML_node_t*) encore_alloc((*_ctx), sizeof(_enc__passive_XML_node_t)));
  this->_enc__self_type = (&(_enc__passive_XML_node_type));
  return this;
}


void* _enc__method_XML_node__init(pony_ctx_t** _ctx, _enc__passive_XML_node_t* _this)
{
  /* () */;
  UNIT;
  return UNIT;
}


array_t* _enc__method_XML_node_children_named(pony_ctx_t** _ctx, _enc__passive_XML_node_t* _this, _enc__passive_String_t* _enc__arg_name)
{
  /* let cn = new [XML_node](|this.children|) */;
  /* cn = new [XML_node](|this.children|) */;
  array_t* _fieldacc_1 = (*_this)._enc__field_children;
  int64_t _size_2 = array_size(_fieldacc_1);
  array_t* _array_0 = array_mk(_ctx, _size_2, (&(_enc__passive_XML_node_type)));
  array_t* _cn_3 = _array_0;
  /* let i = 0 */;
  /* i = 0 */;
  int64_t _literal_4 = 0;
  int64_t _i_5 = _literal_4;
  /* for a in this.children
  if a.name.contains(name) then
    {cn[i] = a;
     i = i + 1} */;
  void* _for_6;
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
    _enc__passive_XML_node_t* _a_8 = array_get(_fieldacc_13, _index_7).p;
    /* if a.name.contains(name) then
  {cn[i] = a;
   i = i + 1} */;
    void* _ite_15;
    if (({_enc__passive_String_t* _fieldacc_17 = (*_a_8)._enc__field_name;
          check_receiver(_fieldacc_17, ".", "a.name", "contains", "\"./encore-libs-master/XML/xml.enc\" (line 17, column 16)");
          int64_t _sync_method_call_16 = _enc__method_String_contains(_ctx, _fieldacc_17, _enc__arg_name); _sync_method_call_16;}))
    {
      /* cn[i] = a */;
      array_set(_cn_3, _i_5, ((encore_arg_t) {.p = _a_8}));
      /* i = i + 1 */;
      int64_t _binop_19 = (({ _i_5;}) + ({int64_t _literal_18 = 1; _literal_18;}));
      _i_5 = _binop_19;
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
  /* let cn2 = new [XML_node](i) */;
  /* cn2 = new [XML_node](i) */;
  array_t* _array_20 = array_mk(_ctx, _i_5, (&(_enc__passive_XML_node_type)));
  array_t* _cn2_21 = _array_20;
  /* i = 0 */;
  int64_t _literal_22 = 0;
  _i_5 = _literal_22;
  /* for a in cn2
  {cn2[i] = cn[i];
   i = i + 1} */;
  void* _for_23;
  int64_t _start_26 = 0;
  int64_t _stop_27 = (array_size(_cn2_21) - 1);
  int64_t _src_step_29 = 1;
  int64_t _literal_30 = 1;
  int64_t _step_28 = (_literal_30 * _src_step_29);
  range_assert_step(_step_28);
  int64_t _index_24;
  if ((_step_28 > 0))
  {
    _index_24 = _start_26;
  }
  else
  {
    _index_24 = _stop_27;
  };
  while (((_index_24 >= _start_26) && (_index_24 <= _stop_27)))
  {
    _enc__passive_XML_node_t* _a_25 = array_get(_cn2_21, _index_24).p;
    /* cn2[i] = cn[i] */;
    _enc__passive_XML_node_t* _access_31 = array_get(_cn_3, _i_5).p;
    array_set(_cn2_21, _i_5, ((encore_arg_t) {.p = _access_31}));
    /* i = i + 1 */;
    int64_t _binop_33 = (({ _i_5;}) + ({int64_t _literal_32 = 1; _literal_32;}));
    _i_5 = _binop_33;
    _for_23 = UNIT;
    _index_24 = (_index_24 + _step_28);
  };
  /* cn2 */;
  return ((array_t*) _cn2_21);
}


_enc__passive_String_t* _enc__method_XML_node_attribute_value(pony_ctx_t** _ctx, _enc__passive_XML_node_t* _this, _enc__passive_String_t* _enc__arg_name)
{
  /* let ret = "" */;
  /* ret = "" */;
  _enc__passive_String_t* _new_0 = _enc__constructor_String(_ctx);
  char* _embed_1 = ({"";});
  _enc__type_init_String(_new_0);
  _enc__method_String__init(_ctx, _new_0, _embed_1);
  _enc__passive_String_t* _ret_2 = _new_0;
  /* for a in this.atribs
  match a with
    (key, value) when key.contains(name) => {ret = value;
                                             ()}
    _ => ()
   */;
  void* _for_3;
  array_t* _fieldacc_10 = (*_this)._enc__field_atribs;
  int64_t _start_6 = 0;
  int64_t _stop_7 = (array_size(_fieldacc_10) - 1);
  int64_t _src_step_9 = 1;
  int64_t _literal_11 = 1;
  int64_t _step_8 = (_literal_11 * _src_step_9);
  range_assert_step(_step_8);
  int64_t _index_4;
  if ((_step_8 > 0))
  {
    _index_4 = _start_6;
  }
  else
  {
    _index_4 = _stop_7;
  };
  while (((_index_4 >= _start_6) && (_index_4 <= _stop_7)))
  {
    tuple_t* _a_5 = array_get(_fieldacc_10, _index_4).p;
    /* match a with
  (key, value) when key.contains(name) => {ret = value;
                                           ()}
  _ => ()
 */;
    void* _match_12;
    _enc__passive_String_t* _key_13;
    _enc__passive_String_t* _value_14;
    if ((({int64_t _tupleCheck_18;
           _tupleCheck_18 = 1;
           _enc__passive_String_t* _tupleAccess_19 = tuple_get(_a_5, 0).p;
           int64_t _varBinding_20;
           _key_13 = _tupleAccess_19;
           _varBinding_20 = 1;
           _tupleCheck_18 = (_tupleCheck_18 && _varBinding_20);
           _enc__passive_String_t* _tupleAccess_21 = tuple_get(_a_5, 1).p;
           int64_t _varBinding_22;
           _value_14 = _tupleAccess_21;
           _varBinding_22 = 1;
           _tupleCheck_18 = (_tupleCheck_18 && _varBinding_22); _tupleCheck_18;}) && ({check_receiver(_key_13, ".", "key", "contains", "\"./encore-libs-master/XML/xml.enc\" (line 35, column 34)");
                                                                                       int64_t _sync_method_call_23 = _enc__method_String_contains(_ctx, _key_13, _enc__arg_name); _sync_method_call_23;})))
    {
      _match_12 = ((void*) ({/* ret = value */;
                             _ret_2 = _value_14;
                             /* () */;
                             UNIT; UNIT;}));
    }
    else
    {
      tuple_t* ___15;
      if ((({int64_t _varBinding_16;
             ___15 = _a_5;
             _varBinding_16 = 1; _varBinding_16;}) && ({int64_t _literal_17 = 1/*True*/; _literal_17;})))
      {
        _match_12 = ((void*) ({UNIT; UNIT;}));
      }
      else
      {
        printf("*** Runtime error: No matching clause was found ***\n");
        exit(1);
      };
    };
    _for_3 = _match_12;
    _index_4 = (_index_4 + _step_8);
  };
  /* ret */;
  return ((_enc__passive_String_t*) _ret_2);
}


pony_type_t _enc__passive_XML_node_type = {.id=_ENC__ID_XML_node, .size=sizeof(_enc__passive_XML_node_t), .trace=_enc__trace_XML_node, .vtable=trait_method_selector};
