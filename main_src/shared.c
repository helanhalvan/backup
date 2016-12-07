#include "header.h"


////////////////////////////////////
// Embedded Code from "./main.enc"





















    int siphash(uint8_t *out, const uint8_t *input, uint64_t inlen, const uint8_t *k) {
      // "somepseudorandomlygeneratedbytes"
      uint64_t v0 = 0x736f6d6570736575ULL;
      uint64_t v1 = 0x646f72616e646f6dULL;
      uint64_t v2 = 0x6c7967656e657261ULL;
      uint64_t v3 = 0x7465646279746573ULL;
      uint64_t b;
      uint64_t k0 = U8TO64_LE(k);
      uint64_t k1 = U8TO64_LE(k + 8);
      uint64_t m;
      int i;
      const uint8_t *_end = input + inlen - (inlen % sizeof(uint64_t));
      const int left = inlen & 7;
      b = ((uint64_t)inlen) << 56;
      v3 ^= k1;
      v2 ^= k0;
      v1 ^= k1;
      v0 ^= k0;

      for (; input != _end; input += 8) {
        m = U8TO64_LE(input);
        v3 ^= m;

        for (i = 0; i < cROUNDS; ++i)
          SIPROUND;

        v0 ^= m;
      }

      switch (left) {
        case 7:
          b |= ((uint64_t)input[6]) << 48;
        case 6:
          b |= ((uint64_t)input[5]) << 40;
        case 5:
          b |= ((uint64_t)input[4]) << 32;
        case 4:
          b |= ((uint64_t)input[3]) << 24;
        case 3:
          b |= ((uint64_t)input[2]) << 16;
        case 2:
          b |= ((uint64_t)input[1]) << 8;
        case 1:
          b |= ((uint64_t)input[0]);
          break;
        case 0:
          break;
      }

      v3 ^= b;

      for (i = 0; i < cROUNDS; ++i)
        SIPROUND;

      v0 ^= b;

      v2 ^= 0xff;

      for (i = 0; i < dROUNDS; ++i)
        SIPROUND;

      b = v0 ^ v1 ^ v2 ^ v3;
      U64TO8_LE(out, b);

      return 0;
    }
























// This function is called in the very beginning of the program to
// build an array containing the arguments of the program.
array_t *_init_argv(pony_ctx_t** ctx, size_t argc, char **argv) {
  array_t *arr = array_mk(ctx, argc, &_enc__passive_String_String_type);
  for(int i = 0; i < argc; i++) {
    _enc__passive_String_String_t* s =
      encore_alloc(*ctx, sizeof(_enc__passive_String_String_t));
    s->_enc__self_type = &_enc__passive_String_String_type;
    _enc__method_String_String__init(ctx, s, argv[i]);
    array_set(arr, i, (encore_arg_t){.p = s});
  }
  return arr;
}


/////////////////////
// Global functions


int64_t _enc__global_fun__encore_libs_master_Ped_util_Global_funsequal(pony_ctx_t** _ctx, pony_type_t** runtimeType, tuple_t* _enc__arg_a, tuple_t* _enc__arg_b)
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


int64_t _enc__global_fun__encore_libs_master_Ped_util_Global_funsdistance(pony_ctx_t** _ctx, pony_type_t** runtimeType, tuple_t* _enc__arg_a, tuple_t* _enc__arg_b)
{
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
  int64_t _match_0;
  int64_t _x1_2;
  int64_t _y1_3;
  int64_t _x2_4;
  int64_t _y2_5;
  if ((({int64_t _tupleCheck_22;
         _tupleCheck_22 = 1;
         tuple_t* _tupleAccess_23 = tuple_get(_tuple_1, 0).p;
         int64_t _tupleCheck_24;
         _tupleCheck_24 = 1;
         int64_t _tupleAccess_25 = tuple_get(_tupleAccess_23, 0).i;
         int64_t _varBinding_26;
         _x1_2 = _tupleAccess_25;
         _varBinding_26 = 1;
         _tupleCheck_24 = (_tupleCheck_24 && _varBinding_26);
         int64_t _tupleAccess_27 = tuple_get(_tupleAccess_23, 1).i;
         int64_t _varBinding_28;
         _y1_3 = _tupleAccess_27;
         _varBinding_28 = 1;
         _tupleCheck_24 = (_tupleCheck_24 && _varBinding_28);
         _tupleCheck_22 = (_tupleCheck_22 && _tupleCheck_24);
         tuple_t* _tupleAccess_29 = tuple_get(_tuple_1, 1).p;
         int64_t _tupleCheck_30;
         _tupleCheck_30 = 1;
         int64_t _tupleAccess_31 = tuple_get(_tupleAccess_29, 0).i;
         int64_t _varBinding_32;
         _x2_4 = _tupleAccess_31;
         _varBinding_32 = 1;
         _tupleCheck_30 = (_tupleCheck_30 && _varBinding_32);
         int64_t _tupleAccess_33 = tuple_get(_tupleAccess_29, 1).i;
         int64_t _varBinding_34;
         _y2_5 = _tupleAccess_33;
         _varBinding_34 = 1;
         _tupleCheck_30 = (_tupleCheck_30 && _varBinding_34);
         _tupleCheck_22 = (_tupleCheck_22 && _tupleCheck_30); _tupleCheck_22;}) && ({int64_t _literal_35 = 1/*True*/; _literal_35;})))
  {
    _match_0 = ((int64_t) ({int64_t _binop_12 = (({int64_t _binop_8 = (({int64_t _binop_6 = (({ _x1_2;}) - ({ _x2_4;})); _binop_6;}) * ({int64_t _binop_7 = (({ _x1_2;}) - ({ _x2_4;})); _binop_7;})); _binop_8;}) + ({int64_t _binop_11 = (({int64_t _binop_9 = (({ _y1_3;}) - ({ _y2_5;})); _binop_9;}) * ({int64_t _binop_10 = (({ _y1_3;}) - ({ _y2_5;})); _binop_10;})); _binop_11;}));
                            pony_type_t* _tmp_13[] = {};
                            int64_t _global_f_14 = _enc__global_fun__encore_libs_master_Ped_util_Global_funsrot(_ctx, NULL, _binop_12); _global_f_14;}));
  }
  else
  {
    tuple_t* ___15;
    if ((({int64_t _varBinding_20;
           ___15 = _tuple_1;
           _varBinding_20 = 1; _varBinding_20;}) && ({int64_t _literal_21 = 1/*True*/; _literal_21;})))
    {
      _match_0 = ((int64_t) ({/* print("THIS WILL NEVER HAPPEN!") */;
                              char* _literal_16 = "THIS WILL NEVER HAPPEN!";
                              printf("%s", _literal_16);
                              /* 1 / 0 */;
                              int64_t _binop_19 = (({int64_t _literal_17 = 1; _literal_17;}) / ({int64_t _literal_18 = 0; _literal_18;})); _binop_19;}));
    }
    else
    {
      printf("*** Runtime error: No matching clause was found ***\n");
      exit(1);
    };
  };
  return ((int64_t) _match_0);
}


int64_t _enc__global_fun__encore_libs_master_Ped_util_Global_funsrot(pony_ctx_t** _ctx, pony_type_t** runtimeType, int64_t _enc__arg_nr)
{
  /* embed void { #{nr}#=sqrt(#{nr}#); } end */;
  ({{ _enc__arg_nr=sqrt(_enc__arg_nr); }});
  /* nr */;
  return ((int64_t) _enc__arg_nr);
}


void* _enc__global_fun__encore_libs_master_Ped_util_Global_funssleep(pony_ctx_t** _ctx, pony_type_t** runtimeType, double _enc__arg_x)
{
  /* embed void { sleep( #{x}#); } end */;
  ({{ sleep( _enc__arg_x); }});
  return UNIT;
}


int64_t _enc__global_fun__encore_libs_master_Ped_util_Global_funsrand(pony_ctx_t** _ctx, pony_type_t** runtimeType)
{
  /* let x = 0 */;
  /* x = 0 */;
  int64_t _literal_0 = 0;
  int64_t _x_1 = _literal_0;
  /* embed void { #{x}#=rand(); } end */;
  ({{ _x_1=rand(); }});
  /* x */;
  return ((int64_t) _x_1);
}


_enc__passive_String_String_t* _enc__global_fun__encore_libs_master_Ped_util_Global_funsstring_or_empty(pony_ctx_t** _ctx, pony_type_t** runtimeType, option_t* _enc__arg_i)
{
  /* match i with
  Just nr => nr
  _ => {print("orEmpty\n");
        ""}
 */;
  _enc__passive_String_String_t* _match_0;
  _enc__passive_String_String_t* _nr_1;
  if ((({int64_t _optionCheck_9;
         _optionCheck_9 = ((JUST == (*_enc__arg_i).tag) && ({int64_t _varBinding_10;
                                                             _enc__passive_String_String_t* _optionVal_8 = (*_enc__arg_i).val.p;
                                                             _nr_1 = _optionVal_8;
                                                             _varBinding_10 = 1; _varBinding_10;})); _optionCheck_9;}) && ({int64_t _literal_11 = 1/*True*/; _literal_11;})))
  {
    _match_0 = ((_enc__passive_String_String_t*) ({/* nr */; _nr_1;}));
  }
  else
  {
    option_t* ___2;
    if ((({int64_t _varBinding_6;
           ___2 = _enc__arg_i;
           _varBinding_6 = 1; _varBinding_6;}) && ({int64_t _literal_7 = 1/*True*/; _literal_7;})))
    {
      _match_0 = ((_enc__passive_String_String_t*) ({/* print("orEmpty\n") */;
                                                     char* _literal_3 = "orEmpty\n";
                                                     printf("%s", _literal_3);
                                                     /* "" */;
                                                     _enc__passive_String_String_t* _new_4 = _enc__constructor_String_String(_ctx);
                                                     char* _embed_5 = ({"";});
                                                     _enc__type_init_String_String(_new_4);
                                                     _enc__method_String_String__init(_ctx, _new_4, _embed_5); _new_4;}));
    }
    else
    {
      printf("*** Runtime error: No matching clause was found ***\n");
      exit(1);
    };
  };
  return ((_enc__passive_String_String_t*) _match_0);
}


int64_t _enc__global_fun__encore_libs_master_Ped_util_Global_funsint_or_0(pony_ctx_t** _ctx, pony_type_t** runtimeType, option_t* _enc__arg_i)
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


int64_t _enc__global_fun__encore_libs_master_Ped_util_Global_funsmin(pony_ctx_t** _ctx, pony_type_t** runtimeType, int64_t _enc__arg_a, int64_t _enc__arg_b)
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


int64_t _enc__global_fun__encore_libs_master_Ped_util_Global_funsmax(pony_ctx_t** _ctx, pony_type_t** runtimeType, int64_t _enc__arg_a, int64_t _enc__arg_b)
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


array_t* _enc__global_fun__encore_libs_master_Ped_util_Global_funsflatten(pony_ctx_t** _ctx, pony_type_t** runtimeType, array_t* _enc__arg_listlist)
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
  /* let list = new [(int, int)](len) */;
  /* list = new [(int, int)](len) */;
  array_t* _array_12 = array_mk(_ctx, _len_1, (&(tuple_type)));
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
  /* list */;
  return ((array_t*) _list_13);
}


array_t* _enc__global_fun__encore_libs_master_Ped_util_Global_funscopy_tr(pony_ctx_t** _ctx, pony_type_t** runtimeType, array_t* _enc__arg_arr)
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


array_t* _enc__global_fun__encore_libs_master_Ped_util_Global_funscopy_ar(pony_ctx_t** _ctx, pony_type_t** runtimeType, array_t* _enc__arg_arr)
{
  /* let a2 = new [int](|arr|)
    i = 0
in
  {for a in arr
     {a2[i] = a;
      i = i + 1};
   a2} */;
  /* a2 = new [int](|arr|) */;
  int64_t _size_1 = array_size(_enc__arg_arr);
  array_t* _array_0 = array_mk(_ctx, _size_1, ENCORE_PRIMITIVE);
  array_t* _a2_2 = _array_0;
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
  return ((array_t*) _a2_2);
}


int64_t _enc__global_fun__encore_libs_master_Ped_util_Global_funsinside(pony_ctx_t** _ctx, pony_type_t** runtimeType, tuple_t* _enc__arg_pos, tuple_t* _enc__arg_space)
{
  /* match (pos, space) with
  ((x, y), 
   ((xmax, ymax), 
    (xmin, 
     ymin))) when x > xmax or x < xmin or y > ymax or y < ymin => false
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
         tuple_t* _tupleAccess_22 = tuple_get(_tupleAccess_20, 0).p;
         int64_t _tupleCheck_23;
         _tupleCheck_23 = 1;
         int64_t _tupleAccess_24 = tuple_get(_tupleAccess_22, 0).i;
         int64_t _varBinding_25;
         _xmax_4 = _tupleAccess_24;
         _varBinding_25 = 1;
         _tupleCheck_23 = (_tupleCheck_23 && _varBinding_25);
         int64_t _tupleAccess_26 = tuple_get(_tupleAccess_22, 1).i;
         int64_t _varBinding_27;
         _ymax_5 = _tupleAccess_26;
         _varBinding_27 = 1;
         _tupleCheck_23 = (_tupleCheck_23 && _varBinding_27);
         _tupleCheck_21 = (_tupleCheck_21 && _tupleCheck_23);
         tuple_t* _tupleAccess_28 = tuple_get(_tupleAccess_20, 1).p;
         int64_t _tupleCheck_29;
         _tupleCheck_29 = 1;
         int64_t _tupleAccess_30 = tuple_get(_tupleAccess_28, 0).i;
         int64_t _varBinding_31;
         _xmin_6 = _tupleAccess_30;
         _varBinding_31 = 1;
         _tupleCheck_29 = (_tupleCheck_29 && _varBinding_31);
         int64_t _tupleAccess_32 = tuple_get(_tupleAccess_28, 1).i;
         int64_t _varBinding_33;
         _ymin_7 = _tupleAccess_32;
         _varBinding_33 = 1;
         _tupleCheck_29 = (_tupleCheck_29 && _varBinding_33);
         _tupleCheck_21 = (_tupleCheck_21 && _tupleCheck_29);
         _tupleCheck_13 = (_tupleCheck_13 && _tupleCheck_21); _tupleCheck_13;}) && ({int64_t _binop_40 = (({int64_t _binop_38 = (({int64_t _binop_36 = (({int64_t _binop_34 = (({ _x_2;}) > ({ _xmax_4;})); _binop_34;}) || ({int64_t _binop_35 = (({ _x_2;}) < ({ _xmin_6;})); _binop_35;})); _binop_36;}) || ({int64_t _binop_37 = (({ _y_3;}) > ({ _ymax_5;})); _binop_37;})); _binop_38;}) || ({int64_t _binop_39 = (({ _y_3;}) < ({ _ymin_7;})); _binop_39;})); _binop_40;})))
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
      printf("*** Runtime error: No matching clause was found ***\n");
      exit(1);
    };
  };
  return ((int64_t) _match_0);
}


future_t* _enc__global_fun__encore_libs_master_Ped_util_Global_funsmk_Future(pony_ctx_t** _ctx, pony_type_t** runtimeType, int64_t _enc__arg_n)
{
  future_t* _embed_0 = ({future_t *fut = future_mk(_ctx, ENCORE_PRIMITIVE);
   future_fulfil(_ctx, fut, (encore_arg_t) {.i = _enc__arg_n});
   fut;});
  return ((future_t*) _embed_0);
}


_enc__trait_Either_Either_t* _enc__global_fun_EitherRight(pony_ctx_t** _ctx, pony_type_t** runtimeType, encore_arg_t _enc__arg_x)
{
  pony_type_t* _enc__type_a = (runtimeType[0]);
  pony_type_t* _enc__type_b = (runtimeType[1]);
  _enc__passive_Either_Right_t* _new_0 = _enc__constructor_Either_Right(_ctx);
  _enc__type_init_Either_Right(_new_0, _enc__type_a, _enc__type_b);
  _enc__method_Either_Right__init(_ctx, _new_0, _enc__arg_x);
  _enc__trait_Either_Either_t* _cast_1 = ((_enc__trait_Either_Either_t*) _new_0);
  return ((_enc__trait_Either_Either_t*) _cast_1);
}


_enc__trait_Either_Either_t* _enc__global_fun_EitherLeft(pony_ctx_t** _ctx, pony_type_t** runtimeType, encore_arg_t _enc__arg_x)
{
  pony_type_t* _enc__type_a = (runtimeType[0]);
  pony_type_t* _enc__type_b = (runtimeType[1]);
  _enc__passive_Either_Left_t* _new_0 = _enc__constructor_Either_Left(_ctx);
  _enc__type_init_Either_Left(_new_0, _enc__type_a, _enc__type_b);
  _enc__method_Either_Left__init(_ctx, _new_0, _enc__arg_x);
  _enc__trait_Either_Either_t* _cast_1 = ((_enc__trait_Either_Either_t*) _new_0);
  return ((_enc__trait_Either_Either_t*) _cast_1);
}


_enc__passive_String_String_t* _enc__global_fun_Stringstring_from_bool(pony_ctx_t** _ctx, pony_type_t** runtimeType, int64_t _enc__arg_x)
{
  _enc__passive_String_String_t* _ite_0;
  if (({ _enc__arg_x;}))
  {
    _enc__passive_String_String_t* _new_1 = _enc__constructor_String_String(_ctx);
    char* _embed_2 = ({"true";});
    _enc__type_init_String_String(_new_1);
    _enc__method_String_String__init(_ctx, _new_1, _embed_2);
    _ite_0 = ((_enc__passive_String_String_t*) _new_1);
  }
  else
  {
    _enc__passive_String_String_t* _new_3 = _enc__constructor_String_String(_ctx);
    char* _embed_4 = ({"false";});
    _enc__type_init_String_String(_new_3);
    _enc__method_String_String__init(_ctx, _new_3, _embed_4);
    _ite_0 = ((_enc__passive_String_String_t*) _new_3);
  };
  return ((_enc__passive_String_String_t*) _ite_0);
}


_enc__passive_String_String_t* _enc__global_fun_Stringstring_from_int(pony_ctx_t** _ctx, pony_type_t** runtimeType, int64_t _enc__arg_n)
{
  _enc__passive_String_String_t* _new_0 = _enc__constructor_String_String(_ctx);
  char* _embed_1 = ({int n = _enc__arg_n;
    int len = n == 0? 2:
              n < 0? (int) ceil(log10(-n)) + 2:
                     (int) ceil(log10(n)) + 1;
    char *s = encore_alloc(*_ctx, len);
    sprintf(s, "%d", n);
    s;});
  _enc__type_init_String_String(_new_0);
  _enc__method_String_String__init(_ctx, _new_0, _embed_1);
  return ((_enc__passive_String_String_t*) _new_0);
}


_enc__passive_String_String_t* _enc__global_fun_Stringstring_from_real(pony_ctx_t** _ctx, pony_type_t** runtimeType, double _enc__arg_n)
{
  _enc__passive_String_String_t* _new_0 = _enc__constructor_String_String(_ctx);
  char* _embed_1 = ({double n = _enc__arg_n;
    char buf[13] = { 0 }; // long enough to print the minimum double value.
    char *s = encore_alloc(*_ctx, sizeof(buf));
    snprintf(s, sizeof(buf), "%.5g", n);
    s;});
  _enc__type_init_String_String(_new_0);
  _enc__method_String_String__init(_ctx, _new_0, _embed_1);
  return ((_enc__passive_String_String_t*) _new_0);
}


_enc__passive_String_String_t* _enc__global_fun_Stringstring_from_array(pony_ctx_t** _ctx, pony_type_t** runtimeType, array_t* _enc__arg_arr)
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
  _enc__passive_String_String_t* _new_13 = _enc__constructor_String_String(_ctx);
  _enc__type_init_String_String(_new_13);
  _enc__method_String_String__init(_ctx, _new_13, _s_3);
  return ((_enc__passive_String_String_t*) _new_13);
}


_enc__passive_String_String_t* _enc__global_fun_Stringstring_from_char(pony_ctx_t** _ctx, pony_type_t** runtimeType, char _enc__arg_c)
{
  /* s = embed char* encore_alloc(*_ctx, 2); end */;
  char* _embed_0 = ({encore_alloc(*_ctx, 2);});
  char* _s_1 = _embed_0;
  _enc__passive_String_String_t* _new_2 = _enc__constructor_String_String(_ctx);
  char* _embed_3 = ({*_s_1= _enc__arg_c; _s_1;});
  _enc__type_init_String_String(_new_2);
  _enc__method_String_String__init(_ctx, _new_2, _embed_3);
  return ((_enc__passive_String_String_t*) _new_2);
}


value_t _enc__global_fun_wrapper__encore_libs_master_Ped_util_Global_funsequal(pony_ctx_t** _ctx, pony_type_t** runtimeType, value_t _args[], void* _env_not_used)
{
  return ((encore_arg_t) {.i = _enc__global_fun__encore_libs_master_Ped_util_Global_funsequal(_ctx, runtimeType, (_args[0]).p, (_args[1]).p)});
}


value_t _enc__global_fun_wrapper__encore_libs_master_Ped_util_Global_funsdistance(pony_ctx_t** _ctx, pony_type_t** runtimeType, value_t _args[], void* _env_not_used)
{
  return ((encore_arg_t) {.i = _enc__global_fun__encore_libs_master_Ped_util_Global_funsdistance(_ctx, runtimeType, (_args[0]).p, (_args[1]).p)});
}


value_t _enc__global_fun_wrapper__encore_libs_master_Ped_util_Global_funsrot(pony_ctx_t** _ctx, pony_type_t** runtimeType, value_t _args[], void* _env_not_used)
{
  return ((encore_arg_t) {.i = _enc__global_fun__encore_libs_master_Ped_util_Global_funsrot(_ctx, runtimeType, (_args[0]).i)});
}


value_t _enc__global_fun_wrapper__encore_libs_master_Ped_util_Global_funssleep(pony_ctx_t** _ctx, pony_type_t** runtimeType, value_t _args[], void* _env_not_used)
{
  return ((encore_arg_t) {.p = _enc__global_fun__encore_libs_master_Ped_util_Global_funssleep(_ctx, runtimeType, (_args[0]).d)});
}


value_t _enc__global_fun_wrapper__encore_libs_master_Ped_util_Global_funsrand(pony_ctx_t** _ctx, pony_type_t** runtimeType, value_t _args[], void* _env_not_used)
{
  return ((encore_arg_t) {.i = _enc__global_fun__encore_libs_master_Ped_util_Global_funsrand(_ctx, runtimeType)});
}


value_t _enc__global_fun_wrapper__encore_libs_master_Ped_util_Global_funsstring_or_empty(pony_ctx_t** _ctx, pony_type_t** runtimeType, value_t _args[], void* _env_not_used)
{
  return ((encore_arg_t) {.p = _enc__global_fun__encore_libs_master_Ped_util_Global_funsstring_or_empty(_ctx, runtimeType, (_args[0]).p)});
}


value_t _enc__global_fun_wrapper__encore_libs_master_Ped_util_Global_funsint_or_0(pony_ctx_t** _ctx, pony_type_t** runtimeType, value_t _args[], void* _env_not_used)
{
  return ((encore_arg_t) {.i = _enc__global_fun__encore_libs_master_Ped_util_Global_funsint_or_0(_ctx, runtimeType, (_args[0]).p)});
}


value_t _enc__global_fun_wrapper__encore_libs_master_Ped_util_Global_funsmin(pony_ctx_t** _ctx, pony_type_t** runtimeType, value_t _args[], void* _env_not_used)
{
  return ((encore_arg_t) {.i = _enc__global_fun__encore_libs_master_Ped_util_Global_funsmin(_ctx, runtimeType, (_args[0]).i, (_args[1]).i)});
}


value_t _enc__global_fun_wrapper__encore_libs_master_Ped_util_Global_funsmax(pony_ctx_t** _ctx, pony_type_t** runtimeType, value_t _args[], void* _env_not_used)
{
  return ((encore_arg_t) {.i = _enc__global_fun__encore_libs_master_Ped_util_Global_funsmax(_ctx, runtimeType, (_args[0]).i, (_args[1]).i)});
}


value_t _enc__global_fun_wrapper__encore_libs_master_Ped_util_Global_funsflatten(pony_ctx_t** _ctx, pony_type_t** runtimeType, value_t _args[], void* _env_not_used)
{
  return ((encore_arg_t) {.p = _enc__global_fun__encore_libs_master_Ped_util_Global_funsflatten(_ctx, runtimeType, (_args[0]).p)});
}


value_t _enc__global_fun_wrapper__encore_libs_master_Ped_util_Global_funscopy_tr(pony_ctx_t** _ctx, pony_type_t** runtimeType, value_t _args[], void* _env_not_used)
{
  return ((encore_arg_t) {.p = _enc__global_fun__encore_libs_master_Ped_util_Global_funscopy_tr(_ctx, runtimeType, (_args[0]).p)});
}


value_t _enc__global_fun_wrapper__encore_libs_master_Ped_util_Global_funscopy_ar(pony_ctx_t** _ctx, pony_type_t** runtimeType, value_t _args[], void* _env_not_used)
{
  return ((encore_arg_t) {.p = _enc__global_fun__encore_libs_master_Ped_util_Global_funscopy_ar(_ctx, runtimeType, (_args[0]).p)});
}


value_t _enc__global_fun_wrapper__encore_libs_master_Ped_util_Global_funsinside(pony_ctx_t** _ctx, pony_type_t** runtimeType, value_t _args[], void* _env_not_used)
{
  return ((encore_arg_t) {.i = _enc__global_fun__encore_libs_master_Ped_util_Global_funsinside(_ctx, runtimeType, (_args[0]).p, (_args[1]).p)});
}


value_t _enc__global_fun_wrapper__encore_libs_master_Ped_util_Global_funsmk_Future(pony_ctx_t** _ctx, pony_type_t** runtimeType, value_t _args[], void* _env_not_used)
{
  return ((encore_arg_t) {.p = _enc__global_fun__encore_libs_master_Ped_util_Global_funsmk_Future(_ctx, runtimeType, (_args[0]).i)});
}


value_t _enc__global_fun_wrapper_EitherRight(pony_ctx_t** _ctx, pony_type_t** runtimeType, value_t _args[], void* _env_not_used)
{
  return ((encore_arg_t) {.p = _enc__global_fun_EitherRight(_ctx, runtimeType, (_args[0]))});
}


value_t _enc__global_fun_wrapper_EitherLeft(pony_ctx_t** _ctx, pony_type_t** runtimeType, value_t _args[], void* _env_not_used)
{
  return ((encore_arg_t) {.p = _enc__global_fun_EitherLeft(_ctx, runtimeType, (_args[0]))});
}


value_t _enc__global_fun_wrapper_Stringstring_from_bool(pony_ctx_t** _ctx, pony_type_t** runtimeType, value_t _args[], void* _env_not_used)
{
  return ((encore_arg_t) {.p = _enc__global_fun_Stringstring_from_bool(_ctx, runtimeType, (_args[0]).i)});
}


value_t _enc__global_fun_wrapper_Stringstring_from_int(pony_ctx_t** _ctx, pony_type_t** runtimeType, value_t _args[], void* _env_not_used)
{
  return ((encore_arg_t) {.p = _enc__global_fun_Stringstring_from_int(_ctx, runtimeType, (_args[0]).i)});
}


value_t _enc__global_fun_wrapper_Stringstring_from_real(pony_ctx_t** _ctx, pony_type_t** runtimeType, value_t _args[], void* _env_not_used)
{
  return ((encore_arg_t) {.p = _enc__global_fun_Stringstring_from_real(_ctx, runtimeType, (_args[0]).d)});
}


value_t _enc__global_fun_wrapper_Stringstring_from_array(pony_ctx_t** _ctx, pony_type_t** runtimeType, value_t _args[], void* _env_not_used)
{
  return ((encore_arg_t) {.p = _enc__global_fun_Stringstring_from_array(_ctx, runtimeType, (_args[0]).p)});
}


value_t _enc__global_fun_wrapper_Stringstring_from_char(pony_ctx_t** _ctx, pony_type_t** runtimeType, value_t _args[], void* _env_not_used)
{
  return ((encore_arg_t) {.p = _enc__global_fun_Stringstring_from_char(_ctx, runtimeType, (_args[0]).i)});
}


struct closure* _enc__closure__encore_libs_master_Ped_util_Global_funsequal = &(struct closure){.call=((void*) (&(_enc__global_fun_wrapper__encore_libs_master_Ped_util_Global_funsequal)))};


struct closure* _enc__closure__encore_libs_master_Ped_util_Global_funsdistance = &(struct closure){.call=((void*) (&(_enc__global_fun_wrapper__encore_libs_master_Ped_util_Global_funsdistance)))};


struct closure* _enc__closure__encore_libs_master_Ped_util_Global_funsrot = &(struct closure){.call=((void*) (&(_enc__global_fun_wrapper__encore_libs_master_Ped_util_Global_funsrot)))};


struct closure* _enc__closure__encore_libs_master_Ped_util_Global_funssleep = &(struct closure){.call=((void*) (&(_enc__global_fun_wrapper__encore_libs_master_Ped_util_Global_funssleep)))};


struct closure* _enc__closure__encore_libs_master_Ped_util_Global_funsrand = &(struct closure){.call=((void*) (&(_enc__global_fun_wrapper__encore_libs_master_Ped_util_Global_funsrand)))};


struct closure* _enc__closure__encore_libs_master_Ped_util_Global_funsstring_or_empty = &(struct closure){.call=((void*) (&(_enc__global_fun_wrapper__encore_libs_master_Ped_util_Global_funsstring_or_empty)))};


struct closure* _enc__closure__encore_libs_master_Ped_util_Global_funsint_or_0 = &(struct closure){.call=((void*) (&(_enc__global_fun_wrapper__encore_libs_master_Ped_util_Global_funsint_or_0)))};


struct closure* _enc__closure__encore_libs_master_Ped_util_Global_funsmin = &(struct closure){.call=((void*) (&(_enc__global_fun_wrapper__encore_libs_master_Ped_util_Global_funsmin)))};


struct closure* _enc__closure__encore_libs_master_Ped_util_Global_funsmax = &(struct closure){.call=((void*) (&(_enc__global_fun_wrapper__encore_libs_master_Ped_util_Global_funsmax)))};


struct closure* _enc__closure__encore_libs_master_Ped_util_Global_funsflatten = &(struct closure){.call=((void*) (&(_enc__global_fun_wrapper__encore_libs_master_Ped_util_Global_funsflatten)))};


struct closure* _enc__closure__encore_libs_master_Ped_util_Global_funscopy_tr = &(struct closure){.call=((void*) (&(_enc__global_fun_wrapper__encore_libs_master_Ped_util_Global_funscopy_tr)))};


struct closure* _enc__closure__encore_libs_master_Ped_util_Global_funscopy_ar = &(struct closure){.call=((void*) (&(_enc__global_fun_wrapper__encore_libs_master_Ped_util_Global_funscopy_ar)))};


struct closure* _enc__closure__encore_libs_master_Ped_util_Global_funsinside = &(struct closure){.call=((void*) (&(_enc__global_fun_wrapper__encore_libs_master_Ped_util_Global_funsinside)))};


struct closure* _enc__closure__encore_libs_master_Ped_util_Global_funsmk_Future = &(struct closure){.call=((void*) (&(_enc__global_fun_wrapper__encore_libs_master_Ped_util_Global_funsmk_Future)))};


struct closure* _enc__closure_EitherRight = &(struct closure){.call=((void*) (&(_enc__global_fun_wrapper_EitherRight)))};


struct closure* _enc__closure_EitherLeft = &(struct closure){.call=((void*) (&(_enc__global_fun_wrapper_EitherLeft)))};


struct closure* _enc__closure_Stringstring_from_bool = &(struct closure){.call=((void*) (&(_enc__global_fun_wrapper_Stringstring_from_bool)))};


struct closure* _enc__closure_Stringstring_from_int = &(struct closure){.call=((void*) (&(_enc__global_fun_wrapper_Stringstring_from_int)))};


struct closure* _enc__closure_Stringstring_from_real = &(struct closure){.call=((void*) (&(_enc__global_fun_wrapper_Stringstring_from_real)))};


struct closure* _enc__closure_Stringstring_from_array = &(struct closure){.call=((void*) (&(_enc__global_fun_wrapper_Stringstring_from_array)))};


struct closure* _enc__closure_Stringstring_from_char = &(struct closure){.call=((void*) (&(_enc__global_fun_wrapper_Stringstring_from_char)))};


int main(int argc, char** argv)
{
  return encore_start(argc, argv, (&(_enc__active__main_Main_type)));
}
