#include "header.h"


//////////////////////////////////
// Embedded Code from "main.enc"






























// This function is called in the very beginning of the program to
// build an array containing the arguments of the program.
array_t *_init_argv(pony_ctx_t** ctx, size_t argc, char **argv) {
  array_t *arr = array_mk(ctx, argc, &_enc__passive_String_type);
  for(int i = 0; i < argc; i++) {
    _enc__passive_String_t* s =
      encore_alloc(*ctx, sizeof(_enc__passive_String_t));
    s->_enc__self_type = &_enc__passive_String_type;
    _enc__method_String__init(ctx, s, argv[i]);
    array_set(arr, i, (encore_arg_t){.p = s});
  }
  return arr;
}





/////////////////////
// Global functions


_enc__passive_String_t* _enc__global_fun_string_or_empty(pony_ctx_t** _ctx, pony_type_t** runtimeType, option_t* _enc__arg_i)
{
  /* match i with
  Just nr => nr
  _ => {print("orEmpty\n");
        ""}
 */;
  _enc__passive_String_t* _match_0;
  _enc__passive_String_t* _nr_1;
  if ((({int64_t _optionCheck_9;
         _optionCheck_9 = ((JUST == (*_enc__arg_i).tag) && ({int64_t _varBinding_10;
                                                             _enc__passive_String_t* _optionVal_8 = (*_enc__arg_i).val.p;
                                                             _nr_1 = _optionVal_8;
                                                             _varBinding_10 = 1; _varBinding_10;})); _optionCheck_9;}) && ({int64_t _literal_11 = 1/*True*/; _literal_11;})))
  {
    _match_0 = ((_enc__passive_String_t*) ({/* nr */; _nr_1;}));
  }
  else
  {
    option_t* ___2;
    if ((({int64_t _varBinding_6;
           ___2 = _enc__arg_i;
           _varBinding_6 = 1; _varBinding_6;}) && ({int64_t _literal_7 = 1/*True*/; _literal_7;})))
    {
      _match_0 = ((_enc__passive_String_t*) ({/* print("orEmpty\n") */;
                                              char* _literal_3 = "orEmpty\n";
                                              printf("%s", _literal_3);
                                              /* "" */;
                                              _enc__passive_String_t* _new_4 = _enc__constructor_String(_ctx);
                                              char* _embed_5 = ({"";});
                                              _enc__type_init_String(_new_4);
                                              _enc__method_String__init(_ctx, _new_4, _embed_5); _new_4;}));
    }
    else
    {
      printf("*** Runtime error: No matching clause was found ***\n");
      exit(1);
    };
  };
  return ((_enc__passive_String_t*) _match_0);
}


int64_t _enc__global_fun_int_or_0(pony_ctx_t** _ctx, pony_type_t** runtimeType, option_t* _enc__arg_i)
{
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
                              printf("%s", _literal_3);
                              /* 0 */;
                              int64_t _literal_4 = 0; _literal_4;}));
    }
    else
    {
      printf("*** Runtime error: No matching clause was found ***\n");
      exit(1);
    };
  };
  return ((int64_t) _match_0);
}


int64_t _enc__global_fun_min(pony_ctx_t** _ctx, pony_type_t** runtimeType, int64_t _enc__arg_a, int64_t _enc__arg_b)
{
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
  return ((int64_t) _ite_0);
}


int64_t _enc__global_fun_max(pony_ctx_t** _ctx, pony_type_t** runtimeType, int64_t _enc__arg_a, int64_t _enc__arg_b)
{
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
  return ((int64_t) _ite_0);
}


array_t* _enc__global_fun_copy_tr(pony_ctx_t** _ctx, pony_type_t** runtimeType, array_t* _enc__arg_arr)
{
  /* let a2 = new [(int, int)](|arr|) */;
  /* a2 = new [(int, int)](|arr|) */;
  int64_t _size_1 = array_size(_enc__arg_arr);
  array_t* _array_0 = array_mk(_ctx, _size_1, (&(tuple_type)));
  array_t* _a2_2 = _array_0;
  /* let i = 0 */;
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
  return ((array_t*) _a2_2);
}


array_t* _enc__global_fun_flatten(pony_ctx_t** _ctx, pony_type_t** runtimeType, array_t* _enc__arg_listlist)
{
  /* let len = 0 */;
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
  /* let list = new [Agent](len) */;
  /* list = new [Agent](len) */;
  array_t* _array_12 = array_mk(_ctx, _len_1, (&(_enc__passive_Agent_type)));
  array_t* _list_13 = _array_12;
  /* let i = 0 */;
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
      _enc__passive_Agent_t* _b_26 = array_get(_a_18, _index_25).p;
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
  /* list */;
  return ((array_t*) _list_13);
}


int64_t _enc__global_fun_equal(pony_ctx_t** _ctx, pony_type_t** runtimeType, tuple_t* _enc__arg_a, tuple_t* _enc__arg_b)
{
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
      printf("*** Runtime error: No matching clause was found ***\n");
      exit(1);
    };
  };
  return ((int64_t) _match_0);
}


_enc__passive_String_t* _enc__global_fun_string_from_bool(pony_ctx_t** _ctx, pony_type_t** runtimeType, int64_t _enc__arg_x)
{
  _enc__passive_String_t* _ite_0;
  if (({ _enc__arg_x;}))
  {
    _enc__passive_String_t* _new_1 = _enc__constructor_String(_ctx);
    char* _embed_2 = ({"true";});
    _enc__type_init_String(_new_1);
    _enc__method_String__init(_ctx, _new_1, _embed_2);
    _ite_0 = ((_enc__passive_String_t*) _new_1);
  }
  else
  {
    _enc__passive_String_t* _new_3 = _enc__constructor_String(_ctx);
    char* _embed_4 = ({"false";});
    _enc__type_init_String(_new_3);
    _enc__method_String__init(_ctx, _new_3, _embed_4);
    _ite_0 = ((_enc__passive_String_t*) _new_3);
  };
  return ((_enc__passive_String_t*) _ite_0);
}


_enc__passive_String_t* _enc__global_fun_string_from_int(pony_ctx_t** _ctx, pony_type_t** runtimeType, int64_t _enc__arg_n)
{
  _enc__passive_String_t* _new_0 = _enc__constructor_String(_ctx);
  char* _embed_1 = ({int n = _enc__arg_n;
    int len = n == 0? 2:
              n < 0? (int) ceil(log10(-n)) + 2:
                     (int) ceil(log10(n)) + 1;
    char *s = encore_alloc(*_ctx, len);
    sprintf(s, "%d", n);
    s;});
  _enc__type_init_String(_new_0);
  _enc__method_String__init(_ctx, _new_0, _embed_1);
  return ((_enc__passive_String_t*) _new_0);
}


_enc__passive_String_t* _enc__global_fun_string_from_real(pony_ctx_t** _ctx, pony_type_t** runtimeType, double _enc__arg_n)
{
  _enc__passive_String_t* _new_0 = _enc__constructor_String(_ctx);
  char* _embed_1 = ({double n = _enc__arg_n;
    char buf[13] = { 0 }; // long enough to print the minimum double value.
    char *s = encore_alloc(*_ctx, sizeof(buf));
    snprintf(s, sizeof(buf), "%.5g", n);
    s;});
  _enc__type_init_String(_new_0);
  _enc__method_String__init(_ctx, _new_0, _embed_1);
  return ((_enc__passive_String_t*) _new_0);
}


_enc__passive_String_t* _enc__global_fun_string_from_array(pony_ctx_t** _ctx, pony_type_t** runtimeType, array_t* _enc__arg_arr)
{
  /* len = |arr| */;
  int64_t _size_0 = array_size(_enc__arg_arr);
  int64_t _len_1 = _size_0;
  /* s = embed char* encore_alloc(*_ctx, #{len}#+ 1); end */;
  char* _embed_2 = ({encore_alloc(*_ctx, _len_1+ 1);});
  char* _s_3 = _embed_2;
  /* p = s */;
  char* _p_4 = _s_3;
  /* for c in arr
  embed void *#{p}#++ = #{c}#; end */;
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
    ({*_p_4++ = _c_7;});
    _for_5 = UNIT;
    _index_6 = (_index_6 + _step_10);
  };
  /* new String(s) */;
  _enc__passive_String_t* _new_13 = _enc__constructor_String(_ctx);
  _enc__type_init_String(_new_13);
  _enc__method_String__init(_ctx, _new_13, _s_3);
  return ((_enc__passive_String_t*) _new_13);
}


_enc__passive_String_t* _enc__global_fun_string_from_char(pony_ctx_t** _ctx, pony_type_t** runtimeType, char _enc__arg_c)
{
  /* s = embed char* encore_alloc(*_ctx, 2); end */;
  char* _embed_0 = ({encore_alloc(*_ctx, 2);});
  char* _s_1 = _embed_0;
  _enc__passive_String_t* _new_2 = _enc__constructor_String(_ctx);
  char* _embed_3 = ({*_s_1= _enc__arg_c; _s_1;});
  _enc__type_init_String(_new_2);
  _enc__method_String__init(_ctx, _new_2, _embed_3);
  return ((_enc__passive_String_t*) _new_2);
}


value_t _enc__global_fun_wrapper_string_or_empty(pony_ctx_t** _ctx, pony_type_t** runtimeType, value_t _args[], void* _env_not_used)
{
  return ((encore_arg_t) {.p = _enc__global_fun_string_or_empty(_ctx, runtimeType, (_args[0]).p)});
}


value_t _enc__global_fun_wrapper_int_or_0(pony_ctx_t** _ctx, pony_type_t** runtimeType, value_t _args[], void* _env_not_used)
{
  return ((encore_arg_t) {.i = _enc__global_fun_int_or_0(_ctx, runtimeType, (_args[0]).p)});
}


value_t _enc__global_fun_wrapper_min(pony_ctx_t** _ctx, pony_type_t** runtimeType, value_t _args[], void* _env_not_used)
{
  return ((encore_arg_t) {.i = _enc__global_fun_min(_ctx, runtimeType, (_args[0]).i, (_args[1]).i)});
}


value_t _enc__global_fun_wrapper_max(pony_ctx_t** _ctx, pony_type_t** runtimeType, value_t _args[], void* _env_not_used)
{
  return ((encore_arg_t) {.i = _enc__global_fun_max(_ctx, runtimeType, (_args[0]).i, (_args[1]).i)});
}


value_t _enc__global_fun_wrapper_copy_tr(pony_ctx_t** _ctx, pony_type_t** runtimeType, value_t _args[], void* _env_not_used)
{
  return ((encore_arg_t) {.p = _enc__global_fun_copy_tr(_ctx, runtimeType, (_args[0]).p)});
}


value_t _enc__global_fun_wrapper_flatten(pony_ctx_t** _ctx, pony_type_t** runtimeType, value_t _args[], void* _env_not_used)
{
  return ((encore_arg_t) {.p = _enc__global_fun_flatten(_ctx, runtimeType, (_args[0]).p)});
}


value_t _enc__global_fun_wrapper_equal(pony_ctx_t** _ctx, pony_type_t** runtimeType, value_t _args[], void* _env_not_used)
{
  return ((encore_arg_t) {.i = _enc__global_fun_equal(_ctx, runtimeType, (_args[0]).p, (_args[1]).p)});
}


value_t _enc__global_fun_wrapper_string_from_bool(pony_ctx_t** _ctx, pony_type_t** runtimeType, value_t _args[], void* _env_not_used)
{
  return ((encore_arg_t) {.p = _enc__global_fun_string_from_bool(_ctx, runtimeType, (_args[0]).i)});
}


value_t _enc__global_fun_wrapper_string_from_int(pony_ctx_t** _ctx, pony_type_t** runtimeType, value_t _args[], void* _env_not_used)
{
  return ((encore_arg_t) {.p = _enc__global_fun_string_from_int(_ctx, runtimeType, (_args[0]).i)});
}


value_t _enc__global_fun_wrapper_string_from_real(pony_ctx_t** _ctx, pony_type_t** runtimeType, value_t _args[], void* _env_not_used)
{
  return ((encore_arg_t) {.p = _enc__global_fun_string_from_real(_ctx, runtimeType, (_args[0]).d)});
}


value_t _enc__global_fun_wrapper_string_from_array(pony_ctx_t** _ctx, pony_type_t** runtimeType, value_t _args[], void* _env_not_used)
{
  return ((encore_arg_t) {.p = _enc__global_fun_string_from_array(_ctx, runtimeType, (_args[0]).p)});
}


value_t _enc__global_fun_wrapper_string_from_char(pony_ctx_t** _ctx, pony_type_t** runtimeType, value_t _args[], void* _env_not_used)
{
  return ((encore_arg_t) {.p = _enc__global_fun_string_from_char(_ctx, runtimeType, (_args[0]).i)});
}


struct closure* _enc__closure_string_or_empty = &(struct closure){.call=((void*) (&(_enc__global_fun_wrapper_string_or_empty)))};


struct closure* _enc__closure_int_or_0 = &(struct closure){.call=((void*) (&(_enc__global_fun_wrapper_int_or_0)))};


struct closure* _enc__closure_min = &(struct closure){.call=((void*) (&(_enc__global_fun_wrapper_min)))};


struct closure* _enc__closure_max = &(struct closure){.call=((void*) (&(_enc__global_fun_wrapper_max)))};


struct closure* _enc__closure_copy_tr = &(struct closure){.call=((void*) (&(_enc__global_fun_wrapper_copy_tr)))};


struct closure* _enc__closure_flatten = &(struct closure){.call=((void*) (&(_enc__global_fun_wrapper_flatten)))};


struct closure* _enc__closure_equal = &(struct closure){.call=((void*) (&(_enc__global_fun_wrapper_equal)))};


struct closure* _enc__closure_string_from_bool = &(struct closure){.call=((void*) (&(_enc__global_fun_wrapper_string_from_bool)))};


struct closure* _enc__closure_string_from_int = &(struct closure){.call=((void*) (&(_enc__global_fun_wrapper_string_from_int)))};


struct closure* _enc__closure_string_from_real = &(struct closure){.call=((void*) (&(_enc__global_fun_wrapper_string_from_real)))};


struct closure* _enc__closure_string_from_array = &(struct closure){.call=((void*) (&(_enc__global_fun_wrapper_string_from_array)))};


struct closure* _enc__closure_string_from_char = &(struct closure){.call=((void*) (&(_enc__global_fun_wrapper_string_from_char)))};


int main(int argc, char** argv)
{
  return encore_start(argc, argv, (&(_enc__active_Main_type)));
}
