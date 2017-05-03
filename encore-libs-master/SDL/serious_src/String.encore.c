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


void _enc__type_init_String(_enc__passive_String_t* this, ... )
{
  va_list params;
  va_start(params, this);
  va_end(params);
}


void _enc__trace_String(pony_ctx_t* _ctx_arg, void* p)
{
  pony_ctx_t** _ctx = (&(_ctx_arg));
  _enc__passive_String_t* _this = p;
  char* _enc__field_data = _this->_enc__field_data;
  pony_trace((*_ctx), _enc__field_data);
  int64_t _enc__field_length = _this->_enc__field_length;
  /* Not tracing field '_enc__field_length' */;
}


_enc__passive_String_t* _enc__constructor_String(pony_ctx_t** _ctx)
{
  _enc__passive_String_t* this = ((_enc__passive_String_t*) encore_alloc((*_ctx), sizeof(_enc__passive_String_t)));
  this->_enc__self_type = (&(_enc__passive_String_type));
  return this;
}


void* _enc__method_String__init(pony_ctx_t** _ctx, _enc__passive_String_t* _this, char* _enc__arg_s)
{
  /* this.data = s */;
  (*({ _this;}))._enc__field_data = _enc__arg_s;
  /* this.length = embed int ; strlen(#{s}); end */;
  int64_t _embed_0 = ({; strlen(_enc__arg_s);});
  (*({ _this;}))._enc__field_length = _embed_0;
  return UNIT;
}


int64_t _enc__method_String_is_empty(pony_ctx_t** _ctx, _enc__passive_String_t* _this)
{
  int64_t _binop_2 = (({int64_t _fieldacc_0 = (*_this)._enc__field_length; _fieldacc_0;}) == ({int64_t _literal_1 = 0; _literal_1;}));
  return _binop_2;
}


_enc__passive_String_t* _enc__method_String_concatenate(pony_ctx_t** _ctx, _enc__passive_String_t* _this, _enc__passive_String_t* _enc__arg_b)
{
  /* t_len = this.length() */;
  check_receiver(_this, ".", "this", "length", "\"/home/sten/Desktop/encore-lang/encore-development/bundles/standard/String.enc\" (line 93, column 16)");
  int64_t _sync_method_call_0 = _enc__method_String_length(_ctx, _this);
  int64_t _t_len_1 = _sync_method_call_0;
  /* b_len = b.length() */;
  check_receiver(_enc__arg_b, ".", "b", "length", "\"/home/sten/Desktop/encore-lang/encore-development/bundles/standard/String.enc\" (line 94, column 16)");
  int64_t _sync_method_call_2 = _enc__method_String_length(_ctx, _enc__arg_b);
  int64_t _b_len_3 = _sync_method_call_2;
  /* t_data = this.data */;
  char* _fieldacc_4 = (*_this)._enc__field_data;
  char* _t_data_5 = _fieldacc_4;
  /* b_data = b.data */;
  char* _fieldacc_6 = (*_enc__arg_b)._enc__field_data;
  char* _b_data_7 = _fieldacc_6;
  _enc__passive_String_t* _new_8 = _enc__constructor_String(_ctx);
  char* _embed_9 = ({void *str = encore_alloc(*_ctx, _t_len_1 + _b_len_3 + 1);
        strncpy(str, (char *)_t_data_5, _t_len_1);
        strncat(str, (char *)_b_data_7, _b_len_3);
        str;
     });
  _enc__type_init_String(_new_8);
  _enc__method_String__init(_ctx, _new_8, _embed_9);
  return _new_8;
}


_enc__passive_String_t* _enc__method_String_copy(pony_ctx_t** _ctx, _enc__passive_String_t* _this)
{
  /* t_len = this.length() */;
  check_receiver(_this, ".", "this", "length", "\"/home/sten/Desktop/encore-lang/encore-development/bundles/standard/String.enc\" (line 107, column 15)");
  int64_t _sync_method_call_0 = _enc__method_String_length(_ctx, _this);
  int64_t _t_len_1 = _sync_method_call_0;
  /* data = this.data */;
  char* _fieldacc_2 = (*_this)._enc__field_data;
  char* _data_3 = _fieldacc_2;
  _enc__passive_String_t* _new_4 = _enc__constructor_String(_ctx);
  char* _embed_5 = ({char *str = encore_alloc(*_ctx, _t_len_1 + 1);
        strncpy(str, (char *)_data_3, _t_len_1 + 1);
        str;
     });
  _enc__type_init_String(_new_4);
  _enc__method_String__init(_ctx, _new_4, _embed_5);
  return _new_4;
}


int64_t _enc__method_String_contains(pony_ctx_t** _ctx, _enc__passive_String_t* _this, _enc__passive_String_t* _enc__arg_b)
{
  /* data = this.data */;
  char* _fieldacc_0 = (*_this)._enc__field_data;
  char* _data_1 = _fieldacc_0;
  /* b_data = b.data */;
  char* _fieldacc_2 = (*_enc__arg_b)._enc__field_data;
  char* _b_data_3 = _fieldacc_2;
  int64_t _embed_4 = ({strstr((char *)_data_1, (char *)_b_data_3) != NULL;
     });
  return _embed_4;
}


int64_t _enc__method_String_contains_ignore_case(pony_ctx_t** _ctx, _enc__passive_String_t* _this, _enc__passive_String_t* _enc__arg_b)
{
  check_receiver(_this, ".", "this", "to_upper", "\"/home/sten/Desktop/encore-lang/encore-development/bundles/standard/String.enc\" (line 128, column 5)");
  _enc__passive_String_t* _sync_method_call_1 = _enc__method_String_to_upper(_ctx, _this);
  check_receiver(_sync_method_call_1, ".", "this.to_upper()", "contains", "\"/home/sten/Desktop/encore-lang/encore-development/bundles/standard/String.enc\" (line 128, column 5)");
  check_receiver(_enc__arg_b, ".", "b", "to_upper", "\"/home/sten/Desktop/encore-lang/encore-development/bundles/standard/String.enc\" (line 128, column 30)");
  _enc__passive_String_t* _sync_method_call_2 = _enc__method_String_to_upper(_ctx, _enc__arg_b);
  int64_t _sync_method_call_0 = _enc__method_String_contains(_ctx, _sync_method_call_1, _sync_method_call_2);
  return _sync_method_call_0;
}


int64_t _enc__method_String_compare(pony_ctx_t** _ctx, _enc__passive_String_t* _this, _enc__passive_String_t* _enc__arg_b)
{
  /* t_len = this.length */;
  int64_t _fieldacc_0 = (*_this)._enc__field_length;
  int64_t _t_len_1 = _fieldacc_0;
  /* b_len = b.length */;
  int64_t _fieldacc_2 = (*_enc__arg_b)._enc__field_length;
  int64_t _b_len_3 = _fieldacc_2;
  /* len = if t_len > b_len then
  t_len
else
  b_len */;
  int64_t _ite_4;
  if (({int64_t _binop_5 = (({ _t_len_1;}) > ({ _b_len_3;})); _binop_5;}))
  {
    _ite_4 = ((int64_t) _t_len_1);
  }
  else
  {
    _ite_4 = ((int64_t) _b_len_3);
  };
  int64_t _len_6 = _ite_4;
  /* t_data = this.data */;
  char* _fieldacc_7 = (*_this)._enc__field_data;
  char* _t_data_8 = _fieldacc_7;
  /* b_data = b.data */;
  char* _fieldacc_9 = (*_enc__arg_b)._enc__field_data;
  char* _b_data_10 = _fieldacc_9;
  int64_t _embed_11 = ({strncmp((char *)_t_data_8, (char *)_b_data_10, _len_6);});
  return _embed_11;
}


int64_t _enc__method_String_compare_ignore_case(pony_ctx_t** _ctx, _enc__passive_String_t* _this, _enc__passive_String_t* _enc__arg_b)
{
  check_receiver(_this, ".", "this", "to_upper", "\"/home/sten/Desktop/encore-lang/encore-development/bundles/standard/String.enc\" (line 143, column 5)");
  _enc__passive_String_t* _sync_method_call_1 = _enc__method_String_to_upper(_ctx, _this);
  check_receiver(_sync_method_call_1, ".", "this.to_upper()", "compare", "\"/home/sten/Desktop/encore-lang/encore-development/bundles/standard/String.enc\" (line 143, column 5)");
  check_receiver(_enc__arg_b, ".", "b", "to_upper", "\"/home/sten/Desktop/encore-lang/encore-development/bundles/standard/String.enc\" (line 143, column 29)");
  _enc__passive_String_t* _sync_method_call_2 = _enc__method_String_to_upper(_ctx, _enc__arg_b);
  int64_t _sync_method_call_0 = _enc__method_String_compare(_ctx, _sync_method_call_1, _sync_method_call_2);
  return _sync_method_call_0;
}


_enc__passive_String_t* _enc__method_String_to_upper(pony_ctx_t** _ctx, _enc__passive_String_t* _this)
{
  /* t_len = this.length() */;
  check_receiver(_this, ".", "this", "length", "\"/home/sten/Desktop/encore-lang/encore-development/bundles/standard/String.enc\" (line 148, column 15)");
  int64_t _sync_method_call_0 = _enc__method_String_length(_ctx, _this);
  int64_t _t_len_1 = _sync_method_call_0;
  /* data = this.data */;
  char* _fieldacc_2 = (*_this)._enc__field_data;
  char* _data_3 = _fieldacc_2;
  _enc__passive_String_t* _new_4 = _enc__constructor_String(_ctx);
  char* _embed_5 = ({char *str = encore_alloc(*_ctx, _t_len_1 + 1);
        for (int i = 0; i < _t_len_1; ++i)
          {
            str[i] = toupper(((char *)_data_3)[i]);
          }
        str[_t_len_1] = '\0';
        str;
     });
  _enc__type_init_String(_new_4);
  _enc__method_String__init(_ctx, _new_4, _embed_5);
  return _new_4;
}


_enc__passive_String_t* _enc__method_String_to_lower(pony_ctx_t** _ctx, _enc__passive_String_t* _this)
{
  /* t_len = this.length() */;
  check_receiver(_this, ".", "this", "length", "\"/home/sten/Desktop/encore-lang/encore-development/bundles/standard/String.enc\" (line 164, column 15)");
  int64_t _sync_method_call_0 = _enc__method_String_length(_ctx, _this);
  int64_t _t_len_1 = _sync_method_call_0;
  /* data = this.data */;
  char* _fieldacc_2 = (*_this)._enc__field_data;
  char* _data_3 = _fieldacc_2;
  _enc__passive_String_t* _new_4 = _enc__constructor_String(_ctx);
  char* _embed_5 = ({char *str = encore_alloc(*_ctx, _t_len_1 + 1);
        for (int i = 0; i < _t_len_1; ++i)
          {
            str[i] = tolower(((char *)_data_3)[i]);
          }
        str[_t_len_1] = '\0';
        str;
     });
  _enc__type_init_String(_new_4);
  _enc__method_String__init(_ctx, _new_4, _embed_5);
  return _new_4;
}


int64_t _enc__method_String_length(pony_ctx_t** _ctx, _enc__passive_String_t* _this)
{
  int64_t _fieldacc_0 = (*_this)._enc__field_length;
  return _fieldacc_0;
}


int64_t _enc__method_String_size(pony_ctx_t** _ctx, _enc__passive_String_t* _this)
{
  int64_t _fieldacc_0 = (*_this)._enc__field_length;
  return _fieldacc_0;
}


option_t* _enc__method_String_substring(pony_ctx_t** _ctx, _enc__passive_String_t* _this, int64_t _enc__arg_from, int64_t _enc__arg_to)
{
  option_t* _ite_0;
  if (({int64_t _binop_1 = (({ _enc__arg_to;}) < ({ _enc__arg_from;})); _binop_1;}))
  {
    _enc__passive_String_t* _new_2 = _enc__constructor_String(_ctx);
    char* _embed_3 = ({"";});
    _enc__type_init_String(_new_2);
    _enc__method_String__init(_ctx, _new_2, _embed_3);
    option_t* _option_4 = option_mk(_ctx, JUST, ((encore_arg_t) {.p = _new_2}), (&(_enc__passive_String_type)));
    _ite_0 = ((option_t*) _option_4);
  }
  else
  {
    /* t_len = this.length() */;
    check_receiver(_this, ".", "this", "length", "\"/home/sten/Desktop/encore-lang/encore-development/bundles/standard/String.enc\" (line 192, column 15)");
    int64_t _sync_method_call_5 = _enc__method_String_length(_ctx, _this);
    int64_t _t_len_6 = _sync_method_call_5;
    /* data = this.data */;
    char* _fieldacc_7 = (*_this)._enc__field_data;
    char* _data_8 = _fieldacc_7;
    option_t* _ite_9;
    if (({int64_t _binop_11 = (({ _enc__arg_from;}) >= ({int64_t _literal_10 = 0; _literal_10;})); _binop_11;}))
    {
      _enc__passive_String_t* _new_12 = _enc__constructor_String(_ctx);
      char* _embed_13 = ({int siz = _enc__arg_to - _enc__arg_from;
          siz = siz < _t_len_6 ? siz : _t_len_6;
          char *str = encore_alloc(*_ctx, siz + 1);
          strncpy(str, ((char *)_data_8)+_enc__arg_from, siz);
          str[siz] = '\0';
          str;
       });
      _enc__type_init_String(_new_12);
      _enc__method_String__init(_ctx, _new_12, _embed_13);
      option_t* _option_14 = option_mk(_ctx, JUST, ((encore_arg_t) {.p = _new_12}), (&(_enc__passive_String_type)));
      _ite_9 = ((option_t*) _option_14);
    }
    else
    {
      option_t* _option_15 = (&(DEFAULT_NOTHING));
      option_t* _cast_16 = ((option_t*) _option_15);
      _ite_9 = ((option_t*) _cast_16);
    };
    _ite_0 = ((option_t*) _ite_9);
  };
  return _ite_0;
}


int64_t _enc__method_String_equals(pony_ctx_t** _ctx, _enc__passive_String_t* _this, _enc__passive_String_t* _enc__arg_s)
{
  int64_t _binop_2 = (({check_receiver(_this, ".", "this", "compare", "\"/home/sten/Desktop/encore-lang/encore-development/bundles/standard/String.enc\" (line 208, column 5)");
                        int64_t _sync_method_call_0 = _enc__method_String_compare(_ctx, _this, _enc__arg_s); _sync_method_call_0;}) == ({int64_t _literal_1 = 0; _literal_1;}));
  return _binop_2;
}


int64_t _enc__method_String_occurrences(pony_ctx_t** _ctx, _enc__passive_String_t* _this, _enc__passive_String_t* _enc__arg_s)
{
  int64_t _ite_0;
  if (({int64_t _binop_3 = (({check_receiver(_enc__arg_s, ".", "s", "length", "\"/home/sten/Desktop/encore-lang/encore-development/bundles/standard/String.enc\" (line 212, column 8)");
                              int64_t _sync_method_call_1 = _enc__method_String_length(_ctx, _enc__arg_s); _sync_method_call_1;}) == ({int64_t _literal_2 = 0; _literal_2;})); _binop_3;}))
  {
    check_receiver(_this, ".", "this", "length", "\"/home/sten/Desktop/encore-lang/encore-development/bundles/standard/String.enc\" (line 213, column 10)");
    int64_t _sync_method_call_4 = _enc__method_String_length(_ctx, _this);
    _ite_0 = ((int64_t) _sync_method_call_4);
  }
  else
  {
    /* counter = 0 */;
    int64_t _literal_5 = 0;
    int64_t _counter_6 = _literal_5;
    /* i = this.find(s) */;
    check_receiver(_this, ".", "this", "find", "\"/home/sten/Desktop/encore-lang/encore-development/bundles/standard/String.enc\" (line 216, column 17)");
    int64_t _sync_method_call_7 = _enc__method_String_find(_ctx, _this, _enc__arg_s);
    int64_t _i_8 = _sync_method_call_7;
    /* s_len = s.length() */;
    check_receiver(_enc__arg_s, ".", "s", "length", "\"/home/sten/Desktop/encore-lang/encore-development/bundles/standard/String.enc\" (line 217, column 17)");
    int64_t _sync_method_call_9 = _enc__method_String_length(_ctx, _enc__arg_s);
    int64_t _s_len_10 = _sync_method_call_9;
    /* while i >= 0
  {counter = counter + 1;
   i = this.find_from(s, i + s_len)} */;
    void* _while_17;
    while (({int64_t _binop_12 = (({ _i_8;}) >= ({int64_t _literal_11 = 0; _literal_11;})); _binop_12;}))
    {
      /* counter = counter + 1 */;
      int64_t _binop_14 = (({ _counter_6;}) + ({int64_t _literal_13 = 1; _literal_13;}));
      _counter_6 = _binop_14;
      /* i = this.find_from(s, i + s_len) */;
      check_receiver(_this, ".", "this", "find_from", "\"/home/sten/Desktop/encore-lang/encore-development/bundles/standard/String.enc\" (line 219, column 49)");
      int64_t _binop_16 = (({ _i_8;}) + ({ _s_len_10;}));
      int64_t _sync_method_call_15 = _enc__method_String_find_from(_ctx, _this, _enc__arg_s, _binop_16);
      _i_8 = _sync_method_call_15;
      _while_17 = UNIT;
    };
    /* counter */;
    _ite_0 = ((int64_t) _counter_6);
  };
  return _ite_0;
}


_enc__passive_String_t* _enc__method_String_join(pony_ctx_t** _ctx, _enc__passive_String_t* _this, array_t* _enc__arg_strings)
{
  _enc__passive_String_t* _ite_0;
  if (({int64_t _binop_3 = (({int64_t _size_1 = array_size(_enc__arg_strings); _size_1;}) == ({int64_t _literal_2 = 0; _literal_2;})); _binop_3;}))
  {
    _enc__passive_String_t* _new_4 = _enc__constructor_String(_ctx);
    char* _embed_5 = ({"";});
    _enc__type_init_String(_new_4);
    _enc__method_String__init(_ctx, _new_4, _embed_5);
    _ite_0 = ((_enc__passive_String_t*) _new_4);
  }
  else
  {
    /* result = strings[0] */;
    int64_t _literal_6 = 0;
    _enc__passive_String_t* _access_7 = array_get(_enc__arg_strings, _literal_6).p;
    _enc__passive_String_t* _result_8 = _access_7;
    /* for i in [ 1 , |strings| - 1 by 1 ]
  result = result.concatenate(this).concatenate(strings[i]) */;
    void* _for_9;
    /* Range not generated */;
    int64_t _literal_16 = 1;
    int64_t _binop_19 = (({int64_t _size_17 = array_size(_enc__arg_strings); _size_17;}) - ({int64_t _literal_18 = 1; _literal_18;}));
    int64_t _literal_20 = 1;
    int64_t _literal_21 = 1;
    int64_t _step_14 = (_literal_21 * _literal_20);
    range_assert_step(_step_14);
    int64_t _index_10;
    if ((_step_14 > 0))
    {
      _index_10 = _literal_16;
    }
    else
    {
      _index_10 = _binop_19;
    };
    while (((_index_10 >= _literal_16) && (_index_10 <= _binop_19)))
    {
      int64_t _i_11 = _index_10;
      check_receiver(_result_8, ".", "result", "concatenate", "\"/home/sten/Desktop/encore-lang/encore-development/bundles/standard/String.enc\" (line 235, column 20)");
      _enc__passive_String_t* _sync_method_call_23 = _enc__method_String_concatenate(_ctx, _result_8, _this);
      check_receiver(_sync_method_call_23, ".", "result.concatenate(this)", "concatenate", "\"/home/sten/Desktop/encore-lang/encore-development/bundles/standard/String.enc\" (line 235, column 20)");
      _enc__passive_String_t* _access_24 = array_get(_enc__arg_strings, _i_11).p;
      _enc__passive_String_t* _sync_method_call_22 = _enc__method_String_concatenate(_ctx, _sync_method_call_23, _access_24);
      _result_8 = _sync_method_call_22;
      _for_9 = UNIT;
      _index_10 = (_index_10 + _step_14);
    };
    /* result */;
    _ite_0 = ((_enc__passive_String_t*) _result_8);
  };
  return _ite_0;
}


char* _enc__method_String_getData(pony_ctx_t** _ctx, _enc__passive_String_t* _this)
{
  char* _fieldacc_0 = (*_this)._enc__field_data;
  return _fieldacc_0;
}


_enc__passive_String_t* _enc__method_String_trim(pony_ctx_t** _ctx, _enc__passive_String_t* _this)
{
  /* len = this.length() */;
  check_receiver(_this, ".", "this", "length", "\"/home/sten/Desktop/encore-lang/encore-development/bundles/standard/String.enc\" (line 246, column 13)");
  int64_t _sync_method_call_0 = _enc__method_String_length(_ctx, _this);
  int64_t _len_1 = _sync_method_call_0;
  /* str = this.data */;
  char* _fieldacc_2 = (*_this)._enc__field_data;
  char* _str_3 = _fieldacc_2;
  /* start_index = embed int int s = 0;        while (#{str}[s] && isspace(#{str}[s])) ++s; s; end */;
  int64_t _embed_4 = ({int s = 0;        while (_str_3[s] && isspace(_str_3[s])) ++s; s;});
  int64_t _start_index_5 = _embed_4;
  /* stop_index = embed int int s = #{len}-1; while (#{str}[s] && isspace(#{str}[s])) --s; s; end */;
  int64_t _embed_6 = ({int s = _len_1-1; while (_str_3[s] && isspace(_str_3[s])) --s; s;});
  int64_t _stop_index_7 = _embed_6;
  check_receiver(_this, ".", "this", "substring", "\"/home/sten/Desktop/encore-lang/encore-development/bundles/standard/String.enc\" (line 251, column 13)");
  int64_t _binop_11 = (({ _stop_index_7;}) + ({int64_t _literal_10 = 1; _literal_10;}));
  option_t* _sync_method_call_9 = _enc__method_String_substring(_ctx, _this, _start_index_5, _binop_11);
  _enc__passive_String_t* _match_8;
  _enc__passive_String_t* _s_12;
  if ((({int64_t _optionCheck_14;
         _optionCheck_14 = ((JUST == (*_sync_method_call_9).tag) && ({int64_t _varBinding_15;
                                                                      _enc__passive_String_t* _optionVal_13 = (*_sync_method_call_9).val.p;
                                                                      _s_12 = _optionVal_13;
                                                                      _varBinding_15 = 1; _varBinding_15;})); _optionCheck_14;}) && ({int64_t _literal_16 = 1/*True*/; _literal_16;})))
  {
    _match_8 = ((_enc__passive_String_t*) ({ _s_12;}));
  }
  else
  {
    printf("*** Runtime error: No matching clause was found ***\n");
    exit(1);
  };
  return _match_8;
}


_enc__passive_String_t* _enc__method_String_replace(pony_ctx_t** _ctx, _enc__passive_String_t* _this, _enc__passive_String_t* _enc__arg_a, _enc__passive_String_t* _enc__arg_b)
{
  check_receiver(_enc__arg_b, ".", "b", "join", "\"/home/sten/Desktop/encore-lang/encore-development/bundles/standard/String.enc\" (line 258, column 5)");
  check_receiver(_this, ".", "this", "split", "\"/home/sten/Desktop/encore-lang/encore-development/bundles/standard/String.enc\" (line 258, column 12)");
  array_t* _sync_method_call_1 = _enc__method_String_split(_ctx, _this, _enc__arg_a);
  _enc__passive_String_t* _sync_method_call_0 = _enc__method_String_join(_ctx, _enc__arg_b, _sync_method_call_1);
  return _sync_method_call_0;
}


int64_t _enc__method_String_find(pony_ctx_t** _ctx, _enc__passive_String_t* _this, _enc__passive_String_t* _enc__arg_a)
{
  check_receiver(_this, ".", "this", "find_from", "\"/home/sten/Desktop/encore-lang/encore-development/bundles/standard/String.enc\" (line 263, column 5)");
  int64_t _literal_1 = 0;
  int64_t _sync_method_call_0 = _enc__method_String_find_from(_ctx, _this, _enc__arg_a, _literal_1);
  return _sync_method_call_0;
}


int64_t _enc__method_String_find_from(pony_ctx_t** _ctx, _enc__passive_String_t* _this, _enc__passive_String_t* _enc__arg_a, int64_t _enc__arg_b)
{
  int64_t _ite_0;
  if (({int64_t _binop_5 = (({int64_t _binop_2 = (({ _enc__arg_b;}) < ({int64_t _literal_1 = 0; _literal_1;})); _binop_2;}) || ({int64_t _binop_4 = (({ _enc__arg_b;}) >= ({check_receiver(_this, ".", "this", "length", "\"/home/sten/Desktop/encore-lang/encore-development/bundles/standard/String.enc\" (line 268, column 25)");
                                                                                                                                                                            int64_t _sync_method_call_3 = _enc__method_String_length(_ctx, _this); _sync_method_call_3;})); _binop_4;})); _binop_5;}))
  {
    int64_t _literal_6 = 1;
    int64_t _unary_7 = (- _literal_6);
    _ite_0 = ((int64_t) _unary_7);
  }
  else
  {
    int64_t _embed_8 = ({char *str = _this->_enc__field_data;
      char *pattern = _enc__arg_a->_enc__field_data;
      char *loc = strstr(str + _enc__arg_b, pattern);
      loc ? loc - str : -1;
   });
    _ite_0 = ((int64_t) _embed_8);
  };
  return _ite_0;
}


_enc__passive_String_t* _enc__method_String_delete(pony_ctx_t** _ctx, _enc__passive_String_t* _this, _enc__passive_String_t* _enc__arg_s)
{
  /* to_len = this.length() */;
  check_receiver(_this, ".", "this", "length", "\"/home/sten/Desktop/encore-lang/encore-development/bundles/standard/String.enc\" (line 280, column 16)");
  int64_t _sync_method_call_0 = _enc__method_String_length(_ctx, _this);
  int64_t _to_len_1 = _sync_method_call_0;
  /* s_len = s.length() */;
  check_receiver(_enc__arg_s, ".", "s", "length", "\"/home/sten/Desktop/encore-lang/encore-development/bundles/standard/String.enc\" (line 281, column 15)");
  int64_t _sync_method_call_2 = _enc__method_String_length(_ctx, _enc__arg_s);
  int64_t _s_len_3 = _sync_method_call_2;
  _enc__passive_String_t* _new_4 = _enc__constructor_String(_ctx);
  char* _embed_5 = ({const int STACK_ALLOC_MAX = 16536;
      char *from = _this->_enc__field_data;
      char *pattern  = _enc__arg_s->_enc__field_data;
      char *tmp = NULL;

      if (_to_len_1 > STACK_ALLOC_MAX) { tmp = encore_alloc(*_ctx, _to_len_1 + 1); } else { tmp = alloca(_to_len_1); }

      int copied = 0;
      int skipped = 0;
      for (char *next = strstr(from, pattern); next; next = strstr(next+_s_len_3, pattern))
        {
          strncpy(tmp + copied, from + copied + skipped, next - from - copied - skipped);
          copied  = next - from - skipped;
          skipped += _s_len_3;
        }
      strcpy(tmp + copied, from + copied + skipped);

      char *result = encore_alloc(*_ctx, copied + 1);
      strcpy(result, tmp);
      result;
   });
  _enc__type_init_String(_new_4);
  _enc__method_String__init(_ctx, _new_4, _embed_5);
  return _new_4;
}


_enc__passive_String_t* _enc__method_String_format(pony_ctx_t** _ctx, _enc__passive_String_t* _this, array_t* _enc__arg_b)
{
  _enc__passive_String_t* _new_0 = _enc__constructor_String(_ctx);
  char* _embed_1 = ({"To be implemented";});
  _enc__type_init_String(_new_0);
  _enc__method_String__init(_ctx, _new_0, _embed_1);
  return _new_0;
}


option_t* _enc__method_String_char_at(pony_ctx_t** _ctx, _enc__passive_String_t* _this, int64_t _enc__arg_i)
{
  /* s = this.data */;
  char* _fieldacc_0 = (*_this)._enc__field_data;
  char* _s_1 = _fieldacc_0;
  /* len = this.length() */;
  check_receiver(_this, ".", "this", "length", "\"/home/sten/Desktop/encore-lang/encore-development/bundles/standard/String.enc\" (line 311, column 15)");
  int64_t _sync_method_call_2 = _enc__method_String_length(_ctx, _this);
  int64_t _len_3 = _sync_method_call_2;
  option_t* _ite_4;
  if (({int64_t _binop_8 = (({int64_t _binop_6 = (({ _enc__arg_i;}) >= ({int64_t _literal_5 = 0; _literal_5;})); _binop_6;}) && ({int64_t _binop_7 = (({ _enc__arg_i;}) < ({ _len_3;})); _binop_7;})); _binop_8;}))
  {
    char _embed_9 = ({_s_1[_enc__arg_i];});
    option_t* _option_10 = option_mk(_ctx, JUST, ((encore_arg_t) {.i = _embed_9}), ENCORE_PRIMITIVE);
    _ite_4 = ((option_t*) _option_10);
  }
  else
  {
    option_t* _option_11 = (&(DEFAULT_NOTHING));
    option_t* _cast_12 = ((option_t*) _option_11);
    _ite_4 = ((option_t*) _cast_12);
  };
  return _ite_4;
}


array_t* _enc__method_String_to_array(pony_ctx_t** _ctx, _enc__passive_String_t* _this)
{
  /* len = this.length() */;
  check_receiver(_this, ".", "this", "length", "\"/home/sten/Desktop/encore-lang/encore-development/bundles/standard/String.enc\" (line 318, column 13)");
  int64_t _sync_method_call_0 = _enc__method_String_length(_ctx, _this);
  int64_t _len_1 = _sync_method_call_0;
  /* arr = new [char](len) */;
  array_t* _array_2 = array_mk(_ctx, _len_1, ENCORE_PRIMITIVE);
  array_t* _arr_3 = _array_2;
  /* for i in [ 0 , len - 1 by 1 ]
  arr[i] = match this.char_at(i) with
             Just c => c
            */;
  void* _for_4;
  /* Range not generated */;
  int64_t _literal_11 = 0;
  int64_t _binop_13 = (({ _len_1;}) - ({int64_t _literal_12 = 1; _literal_12;}));
  int64_t _literal_14 = 1;
  int64_t _literal_15 = 1;
  int64_t _step_9 = (_literal_15 * _literal_14);
  range_assert_step(_step_9);
  int64_t _index_5;
  if ((_step_9 > 0))
  {
    _index_5 = _literal_11;
  }
  else
  {
    _index_5 = _binop_13;
  };
  while (((_index_5 >= _literal_11) && (_index_5 <= _binop_13)))
  {
    int64_t _i_6 = _index_5;
    check_receiver(_this, ".", "this", "char_at", "\"/home/sten/Desktop/encore-lang/encore-development/bundles/standard/String.enc\" (line 322, column 24)");
    option_t* _sync_method_call_17 = _enc__method_String_char_at(_ctx, _this, _i_6);
    char _match_16;
    char _c_18;
    if ((({int64_t _optionCheck_20;
           _optionCheck_20 = ((JUST == (*_sync_method_call_17).tag) && ({int64_t _varBinding_21;
                                                                         char _optionVal_19 = (*_sync_method_call_17).val.i;
                                                                         _c_18 = _optionVal_19;
                                                                         _varBinding_21 = 1; _varBinding_21;})); _optionCheck_20;}) && ({int64_t _literal_22 = 1/*True*/; _literal_22;})))
    {
      _match_16 = ((char) ({ _c_18;}));
    }
    else
    {
      printf("*** Runtime error: No matching clause was found ***\n");
      exit(1);
    };
    array_set(_arr_3, _i_6, ((encore_arg_t) {.i = _match_16}));
    _for_4 = UNIT;
    _index_5 = (_index_5 + _step_9);
  };
  /* arr */;
  return _arr_3;
}


array_t* _enc__method_String_split(pony_ctx_t** _ctx, _enc__passive_String_t* _this, _enc__passive_String_t* _enc__arg_p)
{
  /* occurrences = this.occurrences(p) */;
  check_receiver(_this, ".", "this", "occurrences", "\"/home/sten/Desktop/encore-lang/encore-development/bundles/standard/String.enc\" (line 330, column 21)");
  int64_t _sync_method_call_0 = _enc__method_String_occurrences(_ctx, _this, _enc__arg_p);
  int64_t _occurrences_1 = _sync_method_call_0;
  /* pattern_len = p.length() */;
  check_receiver(_enc__arg_p, ".", "p", "length", "\"/home/sten/Desktop/encore-lang/encore-development/bundles/standard/String.enc\" (line 331, column 21)");
  int64_t _sync_method_call_2 = _enc__method_String_length(_ctx, _enc__arg_p);
  int64_t _pattern_len_3 = _sync_method_call_2;
  array_t* _ite_4;
  if (({int64_t _binop_6 = (({ _occurrences_1;}) == ({int64_t _literal_5 = 0; _literal_5;})); _binop_6;}))
  {
    array_t* _array_7 = array_mk(_ctx, 1, (&(_enc__passive_String_type)));
    array_set(_array_7, 0, ((encore_arg_t) {.p = _this}));
    _ite_4 = ((array_t*) _array_7);
  }
  else
  {
    array_t* _ite_8;
    if (({int64_t _binop_10 = (({ _pattern_len_3;}) == ({int64_t _literal_9 = 0; _literal_9;})); _binop_10;}))
    {
      /* s_arr = new [String](this.length()) */;
      check_receiver(_this, ".", "this", "length", "\"/home/sten/Desktop/encore-lang/encore-development/bundles/standard/String.enc\" (line 337, column 32)");
      int64_t _sync_method_call_12 = _enc__method_String_length(_ctx, _this);
      array_t* _array_11 = array_mk(_ctx, _sync_method_call_12, (&(_enc__passive_String_type)));
      array_t* _s_arr_13 = _array_11;
      /* for i in [ 0 , |s_arr| - 1 by 1 ]
  s_arr[i] = string_from_char(match this.char_at(i) with
                                Just c => c
                              ) */;
      void* _for_14;
      /* Range not generated */;
      int64_t _literal_21 = 0;
      int64_t _binop_24 = (({int64_t _size_22 = array_size(_s_arr_13); _size_22;}) - ({int64_t _literal_23 = 1; _literal_23;}));
      int64_t _literal_25 = 1;
      int64_t _literal_26 = 1;
      int64_t _step_19 = (_literal_26 * _literal_25);
      range_assert_step(_step_19);
      int64_t _index_15;
      if ((_step_19 > 0))
      {
        _index_15 = _literal_21;
      }
      else
      {
        _index_15 = _binop_24;
      };
      while (((_index_15 >= _literal_21) && (_index_15 <= _binop_24)))
      {
        int64_t _i_16 = _index_15;
        check_receiver(_this, ".", "this", "char_at", "\"/home/sten/Desktop/encore-lang/encore-development/bundles/standard/String.enc\" (line 340, column 45)");
        option_t* _sync_method_call_28 = _enc__method_String_char_at(_ctx, _this, _i_16);
        char _match_27;
        char _c_29;
        if ((({int64_t _optionCheck_31;
               _optionCheck_31 = ((JUST == (*_sync_method_call_28).tag) && ({int64_t _varBinding_32;
                                                                             char _optionVal_30 = (*_sync_method_call_28).val.i;
                                                                             _c_29 = _optionVal_30;
                                                                             _varBinding_32 = 1; _varBinding_32;})); _optionCheck_31;}) && ({int64_t _literal_33 = 1/*True*/; _literal_33;})))
        {
          _match_27 = ((char) ({ _c_29;}));
        }
        else
        {
          printf("*** Runtime error: No matching clause was found ***\n");
          exit(1);
        };
        pony_type_t* _tmp_34[] = {};
        _enc__passive_String_t* _global_f_35 = _enc__global_fun_string_from_char(_ctx, NULL, _match_27);
        array_set(_s_arr_13, _i_16, ((encore_arg_t) {.p = _global_f_35}));
        _for_14 = UNIT;
        _index_15 = (_index_15 + _step_19);
      };
      /* s_arr */;
      _ite_8 = ((array_t*) _s_arr_13);
    }
    else
    {
      /* result = new [String](occurrences + 1) */;
      int64_t _binop_38 = (({ _occurrences_1;}) + ({int64_t _literal_37 = 1; _literal_37;}));
      array_t* _array_36 = array_mk(_ctx, _binop_38, (&(_enc__passive_String_type)));
      array_t* _result_39 = _array_36;
      /* start = 0 */;
      int64_t _literal_40 = 0;
      int64_t _start_41 = _literal_40;
      /* stop = 0 */;
      int64_t _literal_42 = 0;
      int64_t _stop_43 = _literal_42;
      /* repeat i <- occurrences
  {stop = this.find_from(p, start);
   result[i] = match this.substring(start, stop) with
                 Just s => s
               ;
   start = stop + pattern_len} */;
      /* i = repeat i <- occurrences
  {stop = this.find_from(p, start);
   result[i] = match this.substring(start, stop) with
                 Just s => s
               ;
   start = stop + pattern_len} */;
      int64_t _literal_44 = 0;
      int64_t _i_45 = _literal_44;
      /* __gub__ = occurrences */;
      int64_t ___gub___46 = _occurrences_1;
      void* _while_59;
      while (({int64_t _binop_47 = (({ _i_45;}) < ({ ___gub___46;})); _binop_47;}))
      {
        /* {stop = this.find_from(p, start);
 result[i] = match this.substring(start, stop) with
               Just s => s
             ;
 start = stop + pattern_len} */;
        /* stop = this.find_from(p, start) */;
        check_receiver(_this, ".", "this", "find_from", "\"/home/sten/Desktop/encore-lang/encore-development/bundles/standard/String.enc\" (line 350, column 18)");
        int64_t _sync_method_call_48 = _enc__method_String_find_from(_ctx, _this, _enc__arg_p, _start_41);
        _stop_43 = _sync_method_call_48;
        /* result[i] = match this.substring(start, stop) with
              Just s => s
             */;
        check_receiver(_this, ".", "this", "substring", "\"/home/sten/Desktop/encore-lang/encore-development/bundles/standard/String.enc\" (line 351, column 29)");
        option_t* _sync_method_call_50 = _enc__method_String_substring(_ctx, _this, _start_41, _stop_43);
        _enc__passive_String_t* _match_49;
        _enc__passive_String_t* _s_51;
        if ((({int64_t _optionCheck_53;
               _optionCheck_53 = ((JUST == (*_sync_method_call_50).tag) && ({int64_t _varBinding_54;
                                                                             _enc__passive_String_t* _optionVal_52 = (*_sync_method_call_50).val.p;
                                                                             _s_51 = _optionVal_52;
                                                                             _varBinding_54 = 1; _varBinding_54;})); _optionCheck_53;}) && ({int64_t _literal_55 = 1/*True*/; _literal_55;})))
        {
          _match_49 = ((_enc__passive_String_t*) ({ _s_51;}));
        }
        else
        {
          printf("*** Runtime error: No matching clause was found ***\n");
          exit(1);
        };
        array_set(_result_39, _i_45, ((encore_arg_t) {.p = _match_49}));
        /* start = stop + pattern_len */;
        int64_t _binop_56 = (({ _stop_43;}) + ({ _pattern_len_3;}));
        _start_41 = _binop_56;
        /* repeat i <- occurrences
  {stop = this.find_from(p, start);
   result[i] = match this.substring(start, stop) with
                 Just s => s
               ;
   start = stop + pattern_len} */;
        int64_t _binop_58 = (({ _i_45;}) + ({int64_t _literal_57 = 1; _literal_57;}));
        _i_45 = _binop_58;
        _while_59 = UNIT;
      };
      /* result[occurrences] = match this.substring(start, 
                                           this.length()) with
                        Just s => s
                       */;
      check_receiver(_this, ".", "this", "substring", "\"/home/sten/Desktop/encore-lang/encore-development/bundles/standard/String.enc\" (line 354, column 37)");
      check_receiver(_this, ".", "this", "length", "\"/home/sten/Desktop/encore-lang/encore-development/bundles/standard/String.enc\" (line 354, column 59)");
      int64_t _sync_method_call_62 = _enc__method_String_length(_ctx, _this);
      option_t* _sync_method_call_61 = _enc__method_String_substring(_ctx, _this, _start_41, _sync_method_call_62);
      _enc__passive_String_t* _match_60;
      _enc__passive_String_t* _s_63;
      if ((({int64_t _optionCheck_65;
             _optionCheck_65 = ((JUST == (*_sync_method_call_61).tag) && ({int64_t _varBinding_66;
                                                                           _enc__passive_String_t* _optionVal_64 = (*_sync_method_call_61).val.p;
                                                                           _s_63 = _optionVal_64;
                                                                           _varBinding_66 = 1; _varBinding_66;})); _optionCheck_65;}) && ({int64_t _literal_67 = 1/*True*/; _literal_67;})))
      {
        _match_60 = ((_enc__passive_String_t*) ({ _s_63;}));
      }
      else
      {
        printf("*** Runtime error: No matching clause was found ***\n");
        exit(1);
      };
      array_set(_result_39, _occurrences_1, ((encore_arg_t) {.p = _match_60}));
      /* result */;
      _ite_8 = ((array_t*) _result_39);
    };
    _ite_4 = ((array_t*) _ite_8);
  };
  return _ite_4;
}


option_t* _enc__method_String_to_int(pony_ctx_t** _ctx, _enc__passive_String_t* _this)
{
  /* let s = this.data */;
  /* s = this.data */;
  char* _fieldacc_0 = (*_this)._enc__field_data;
  char* _s_1 = _fieldacc_0;
  /* let n = 0 */;
  /* n = 0 */;
  int64_t _literal_2 = 0;
  int64_t _n_3 = _literal_2;
  /* let success = false */;
  /* success = false */;
  int64_t _literal_4 = 0/*False*/;
  int64_t _success_5 = _literal_4;
  /* embed void char *s = #{s};
      char *endptr;
      #{n} = strtol(s,&endptr,0);
      if (s != endptr)
         #{success} = true;
    end */;
  ({char *s = _s_1;
      char *endptr;
      _n_3 = strtol(s,&endptr,0);
      if (s != endptr)
         _success_5 = true;
   });
  /* if success then
  Just n
else
  Nothing : Maybe int */;
  option_t* _ite_6;
  if (({ _success_5;}))
  {
    /* Just n */;
    option_t* _option_7 = option_mk(_ctx, JUST, ((encore_arg_t) {.i = _n_3}), ENCORE_PRIMITIVE);
    _ite_6 = ((option_t*) _option_7);
  }
  else
  {
    /* Nothing : Maybe int */;
    option_t* _option_8 = (&(DEFAULT_NOTHING));
    option_t* _cast_9 = ((option_t*) _option_8);
    _ite_6 = ((option_t*) _cast_9);
  };
  return _ite_6;
}


static void _enc__dispatch_String(pony_ctx_t** _ctx, pony_actor_t* _a, pony_msg_t* _m)
{
  /* Stub! Might be used when we have dynamic dispatch on passive classes */
}


pony_type_t _enc__passive_String_type = {.id=_ENC__ID_String, .size=sizeof(_enc__passive_String_t), .trace=_enc__trace_String, .dispatch=_enc__dispatch_String, .vtable=trait_method_selector};
