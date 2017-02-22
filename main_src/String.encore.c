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


void _enc__type_init_String_String(_enc__passive_String_String_t* _this, ... )
{
  va_list params;
  va_start(params, _this);
  va_end(params);
}


void _enc__trace_String_String(pony_ctx_t* _ctx_arg, void* p)
{
  pony_ctx_t** _ctx = (&(_ctx_arg));
  _enc__passive_String_String_t* _this = p;
  char* _enc__field_data = _this->_enc__field_data;
  pony_trace((*_ctx), _enc__field_data);
  int64_t _enc__field_length = _this->_enc__field_length;
  /* Not tracing field '_enc__field_length' */;
}


_enc__passive_String_String_t* _enc__constructor_String_String(pony_ctx_t** _ctx, pony_type_t** runtimeType)
{
  _enc__passive_String_String_t* _this = ((_enc__passive_String_String_t*) encore_alloc((*_ctx), sizeof(_enc__passive_String_String_t)));
  _this->_enc__self_type = (&(_enc__passive_String_String_type));
  return _this;
}


void* _enc__method_String_String_init(pony_ctx_t** _ctx, _enc__passive_String_String_t* _this, pony_type_t** runtimeType, char* _enc__arg_s)
{
  ENC_DTRACE3(METHOD_ENTRY, (uintptr_t)*_ctx, (uintptr_t)_this, "init");
  /* this.data = s */;
  (*({ENC_DTRACE3(FIELD_WRITE, (uintptr_t)*_ctx, (uintptr_t)_this, "data"); _this;}))._enc__field_data = _enc__arg_s;
  /* this.length = embed int ; strlen(#{s}); end */;
  int64_t _embed_0 = ({; strlen(_enc__arg_s);});
  (*({ENC_DTRACE3(FIELD_WRITE, (uintptr_t)*_ctx, (uintptr_t)_this, "length"); _this;}))._enc__field_length = _embed_0;
  ENC_DTRACE3(METHOD_EXIT, (uintptr_t)*_ctx, (uintptr_t)_this, "init");
  return UNIT;
}


int64_t _enc__method_String_String_is_empty(pony_ctx_t** _ctx, _enc__passive_String_String_t* _this, pony_type_t** runtimeType)
{
  ENC_DTRACE3(METHOD_ENTRY, (uintptr_t)*_ctx, (uintptr_t)_this, "is_empty");
  int64_t _binop_2 = (({ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "length");
                        int64_t _fieldacc_0 = (*_this)._enc__field_length; _fieldacc_0;}) == ({int64_t _literal_1 = 0; _literal_1;}));
  ENC_DTRACE3(METHOD_EXIT, (uintptr_t)*_ctx, (uintptr_t)_this, "is_empty");
  return ((int64_t) _binop_2);
}


_enc__passive_String_String_t* _enc__method_String_String_concatenate(pony_ctx_t** _ctx, _enc__passive_String_String_t* _this, pony_type_t** runtimeType, _enc__passive_String_String_t* _enc__arg_b)
{
  ENC_DTRACE3(METHOD_ENTRY, (uintptr_t)*_ctx, (uintptr_t)_this, "concatenate");
  /* t_len = this.length() */;
  check_receiver(_this, ".", "this", "length", "\"/home/sten/Desktop/encore-lang/encore-development/modules/standard/String.enc\" (line 95, column 16)");
  pony_type_t* _tmp_1[] = {};
  int64_t _sync_method_call_0 = _enc__method_String_String_length(_ctx, _this, NULL);
  int64_t _t_len_2 = _sync_method_call_0;
  /* b_len = b.length() */;
  check_receiver(_enc__arg_b, ".", "b", "length", "\"/home/sten/Desktop/encore-lang/encore-development/modules/standard/String.enc\" (line 96, column 16)");
  pony_type_t* _tmp_4[] = {};
  int64_t _sync_method_call_3 = _enc__method_String_String_length(_ctx, _enc__arg_b, NULL);
  int64_t _b_len_5 = _sync_method_call_3;
  /* t_data = this.data */;
  ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "data");
  char* _fieldacc_6 = (*_this)._enc__field_data;
  char* _t_data_7 = _fieldacc_6;
  /* b_data = b.data */;
  ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_enc__arg_b, "data");
  char* _fieldacc_8 = (*_enc__arg_b)._enc__field_data;
  char* _b_data_9 = _fieldacc_8;
  _enc__passive_String_String_t* _new_10 = _enc__constructor_String_String(_ctx, NULL);
  char* _embed_11 = ({void *str = encore_alloc(*_ctx, _t_len_2+ _b_len_5+ 1);
        strncpy(str, (char *)_t_data_7, _t_len_2);
        strncat(str, (char *)_b_data_9, _b_len_5);
        str;
     });
  pony_type_t* _tmp_12[] = {};
  _enc__type_init_String_String(_new_10);
  _enc__method_String_String_init(_ctx, _new_10, NULL, _embed_11);
  ENC_DTRACE3(METHOD_EXIT, (uintptr_t)*_ctx, (uintptr_t)_this, "concatenate");
  return ((_enc__passive_String_String_t*) _new_10);
}


_enc__passive_String_String_t* _enc__method_String_String_copy(pony_ctx_t** _ctx, _enc__passive_String_String_t* _this, pony_type_t** runtimeType)
{
  ENC_DTRACE3(METHOD_ENTRY, (uintptr_t)*_ctx, (uintptr_t)_this, "copy");
  /* t_len = this.length() */;
  check_receiver(_this, ".", "this", "length", "\"/home/sten/Desktop/encore-lang/encore-development/modules/standard/String.enc\" (line 109, column 15)");
  pony_type_t* _tmp_1[] = {};
  int64_t _sync_method_call_0 = _enc__method_String_String_length(_ctx, _this, NULL);
  int64_t _t_len_2 = _sync_method_call_0;
  /* data = this.data */;
  ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "data");
  char* _fieldacc_3 = (*_this)._enc__field_data;
  char* _data_4 = _fieldacc_3;
  _enc__passive_String_String_t* _new_5 = _enc__constructor_String_String(_ctx, NULL);
  char* _embed_6 = ({char *str = encore_alloc(*_ctx, _t_len_2+ 1);
        strncpy(str, (char *)_data_4, _t_len_2+ 1);
        str;
     });
  pony_type_t* _tmp_7[] = {};
  _enc__type_init_String_String(_new_5);
  _enc__method_String_String_init(_ctx, _new_5, NULL, _embed_6);
  ENC_DTRACE3(METHOD_EXIT, (uintptr_t)*_ctx, (uintptr_t)_this, "copy");
  return ((_enc__passive_String_String_t*) _new_5);
}


int64_t _enc__method_String_String_contains(pony_ctx_t** _ctx, _enc__passive_String_String_t* _this, pony_type_t** runtimeType, _enc__passive_String_String_t* _enc__arg_b)
{
  ENC_DTRACE3(METHOD_ENTRY, (uintptr_t)*_ctx, (uintptr_t)_this, "contains");
  /* data = this.data */;
  ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "data");
  char* _fieldacc_0 = (*_this)._enc__field_data;
  char* _data_1 = _fieldacc_0;
  /* b_data = b.data */;
  ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_enc__arg_b, "data");
  char* _fieldacc_2 = (*_enc__arg_b)._enc__field_data;
  char* _b_data_3 = _fieldacc_2;
  int64_t _embed_4 = ({strstr((char *)_data_1, (char *)_b_data_3) != NULL;
     });
  ENC_DTRACE3(METHOD_EXIT, (uintptr_t)*_ctx, (uintptr_t)_this, "contains");
  return ((int64_t) _embed_4);
}


int64_t _enc__method_String_String_contains_ignore_case(pony_ctx_t** _ctx, _enc__passive_String_String_t* _this, pony_type_t** runtimeType, _enc__passive_String_String_t* _enc__arg_b)
{
  ENC_DTRACE3(METHOD_ENTRY, (uintptr_t)*_ctx, (uintptr_t)_this, "contains_ignore_case");
  check_receiver(_this, ".", "this", "to_upper", "\"/home/sten/Desktop/encore-lang/encore-development/modules/standard/String.enc\" (line 130, column 5)");
  pony_type_t* _tmp_2[] = {};
  _enc__passive_String_String_t* _sync_method_call_1 = _enc__method_String_String_to_upper(_ctx, _this, NULL);
  check_receiver(_sync_method_call_1, ".", "this.to_upper()", "contains", "\"/home/sten/Desktop/encore-lang/encore-development/modules/standard/String.enc\" (line 130, column 5)");
  check_receiver(_enc__arg_b, ".", "b", "to_upper", "\"/home/sten/Desktop/encore-lang/encore-development/modules/standard/String.enc\" (line 130, column 30)");
  pony_type_t* _tmp_4[] = {};
  _enc__passive_String_String_t* _sync_method_call_3 = _enc__method_String_String_to_upper(_ctx, _enc__arg_b, NULL);
  pony_type_t* _tmp_5[] = {};
  int64_t _sync_method_call_0 = _enc__method_String_String_contains(_ctx, _sync_method_call_1, NULL, _sync_method_call_3);
  ENC_DTRACE3(METHOD_EXIT, (uintptr_t)*_ctx, (uintptr_t)_this, "contains_ignore_case");
  return ((int64_t) _sync_method_call_0);
}


int64_t _enc__method_String_String_compare(pony_ctx_t** _ctx, _enc__passive_String_String_t* _this, pony_type_t** runtimeType, _enc__passive_String_String_t* _enc__arg_b)
{
  ENC_DTRACE3(METHOD_ENTRY, (uintptr_t)*_ctx, (uintptr_t)_this, "compare");
  /* t_len = this.length */;
  ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "length");
  int64_t _fieldacc_0 = (*_this)._enc__field_length;
  int64_t _t_len_1 = _fieldacc_0;
  /* b_len = b.length */;
  ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_enc__arg_b, "length");
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
  ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "data");
  char* _fieldacc_7 = (*_this)._enc__field_data;
  char* _t_data_8 = _fieldacc_7;
  /* b_data = b.data */;
  ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_enc__arg_b, "data");
  char* _fieldacc_9 = (*_enc__arg_b)._enc__field_data;
  char* _b_data_10 = _fieldacc_9;
  int64_t _embed_11 = ({strncmp((char *)_t_data_8, (char *)_b_data_10, _len_6);});
  ENC_DTRACE3(METHOD_EXIT, (uintptr_t)*_ctx, (uintptr_t)_this, "compare");
  return ((int64_t) _embed_11);
}


int64_t _enc__method_String_String_compare_ignore_case(pony_ctx_t** _ctx, _enc__passive_String_String_t* _this, pony_type_t** runtimeType, _enc__passive_String_String_t* _enc__arg_b)
{
  ENC_DTRACE3(METHOD_ENTRY, (uintptr_t)*_ctx, (uintptr_t)_this, "compare_ignore_case");
  check_receiver(_this, ".", "this", "to_upper", "\"/home/sten/Desktop/encore-lang/encore-development/modules/standard/String.enc\" (line 145, column 5)");
  pony_type_t* _tmp_2[] = {};
  _enc__passive_String_String_t* _sync_method_call_1 = _enc__method_String_String_to_upper(_ctx, _this, NULL);
  check_receiver(_sync_method_call_1, ".", "this.to_upper()", "compare", "\"/home/sten/Desktop/encore-lang/encore-development/modules/standard/String.enc\" (line 145, column 5)");
  check_receiver(_enc__arg_b, ".", "b", "to_upper", "\"/home/sten/Desktop/encore-lang/encore-development/modules/standard/String.enc\" (line 145, column 29)");
  pony_type_t* _tmp_4[] = {};
  _enc__passive_String_String_t* _sync_method_call_3 = _enc__method_String_String_to_upper(_ctx, _enc__arg_b, NULL);
  pony_type_t* _tmp_5[] = {};
  int64_t _sync_method_call_0 = _enc__method_String_String_compare(_ctx, _sync_method_call_1, NULL, _sync_method_call_3);
  ENC_DTRACE3(METHOD_EXIT, (uintptr_t)*_ctx, (uintptr_t)_this, "compare_ignore_case");
  return ((int64_t) _sync_method_call_0);
}


_enc__passive_String_String_t* _enc__method_String_String_to_upper(pony_ctx_t** _ctx, _enc__passive_String_String_t* _this, pony_type_t** runtimeType)
{
  ENC_DTRACE3(METHOD_ENTRY, (uintptr_t)*_ctx, (uintptr_t)_this, "to_upper");
  /* t_len = this.length() */;
  check_receiver(_this, ".", "this", "length", "\"/home/sten/Desktop/encore-lang/encore-development/modules/standard/String.enc\" (line 150, column 15)");
  pony_type_t* _tmp_1[] = {};
  int64_t _sync_method_call_0 = _enc__method_String_String_length(_ctx, _this, NULL);
  int64_t _t_len_2 = _sync_method_call_0;
  /* data = this.data */;
  ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "data");
  char* _fieldacc_3 = (*_this)._enc__field_data;
  char* _data_4 = _fieldacc_3;
  _enc__passive_String_String_t* _new_5 = _enc__constructor_String_String(_ctx, NULL);
  char* _embed_6 = ({char *str = encore_alloc(*_ctx, _t_len_2+ 1);
        for (int i = 0; i < _t_len_2; ++i)
          {
            str[i] = toupper(((char *)_data_4)[i]);
          }
        str[_t_len_2] = '\0';
        str;
     });
  pony_type_t* _tmp_7[] = {};
  _enc__type_init_String_String(_new_5);
  _enc__method_String_String_init(_ctx, _new_5, NULL, _embed_6);
  ENC_DTRACE3(METHOD_EXIT, (uintptr_t)*_ctx, (uintptr_t)_this, "to_upper");
  return ((_enc__passive_String_String_t*) _new_5);
}


_enc__passive_String_String_t* _enc__method_String_String_to_lower(pony_ctx_t** _ctx, _enc__passive_String_String_t* _this, pony_type_t** runtimeType)
{
  ENC_DTRACE3(METHOD_ENTRY, (uintptr_t)*_ctx, (uintptr_t)_this, "to_lower");
  /* t_len = this.length() */;
  check_receiver(_this, ".", "this", "length", "\"/home/sten/Desktop/encore-lang/encore-development/modules/standard/String.enc\" (line 166, column 15)");
  pony_type_t* _tmp_1[] = {};
  int64_t _sync_method_call_0 = _enc__method_String_String_length(_ctx, _this, NULL);
  int64_t _t_len_2 = _sync_method_call_0;
  /* data = this.data */;
  ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "data");
  char* _fieldacc_3 = (*_this)._enc__field_data;
  char* _data_4 = _fieldacc_3;
  _enc__passive_String_String_t* _new_5 = _enc__constructor_String_String(_ctx, NULL);
  char* _embed_6 = ({char *str = encore_alloc(*_ctx, _t_len_2+ 1);
        for (int i = 0; i < _t_len_2; ++i)
          {
            str[i] = tolower(((char *)_data_4)[i]);
          }
        str[_t_len_2] = '\0';
        str;
     });
  pony_type_t* _tmp_7[] = {};
  _enc__type_init_String_String(_new_5);
  _enc__method_String_String_init(_ctx, _new_5, NULL, _embed_6);
  ENC_DTRACE3(METHOD_EXIT, (uintptr_t)*_ctx, (uintptr_t)_this, "to_lower");
  return ((_enc__passive_String_String_t*) _new_5);
}


int64_t _enc__method_String_String_length(pony_ctx_t** _ctx, _enc__passive_String_String_t* _this, pony_type_t** runtimeType)
{
  ENC_DTRACE3(METHOD_ENTRY, (uintptr_t)*_ctx, (uintptr_t)_this, "length");
  ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "length");
  int64_t _fieldacc_0 = (*_this)._enc__field_length;
  ENC_DTRACE3(METHOD_EXIT, (uintptr_t)*_ctx, (uintptr_t)_this, "length");
  return ((int64_t) _fieldacc_0);
}


int64_t _enc__method_String_String_size(pony_ctx_t** _ctx, _enc__passive_String_String_t* _this, pony_type_t** runtimeType)
{
  ENC_DTRACE3(METHOD_ENTRY, (uintptr_t)*_ctx, (uintptr_t)_this, "size");
  ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "length");
  int64_t _fieldacc_0 = (*_this)._enc__field_length;
  ENC_DTRACE3(METHOD_EXIT, (uintptr_t)*_ctx, (uintptr_t)_this, "size");
  return ((int64_t) _fieldacc_0);
}


option_t* _enc__method_String_String_substring(pony_ctx_t** _ctx, _enc__passive_String_String_t* _this, pony_type_t** runtimeType, int64_t _enc__arg_from, int64_t _enc__arg_to)
{
  ENC_DTRACE3(METHOD_ENTRY, (uintptr_t)*_ctx, (uintptr_t)_this, "substring");
  option_t* _ite_0;
  if (({int64_t _binop_1 = (({ _enc__arg_to;}) < ({ _enc__arg_from;})); _binop_1;}))
  {
    _enc__passive_String_String_t* _new_2 = _enc__constructor_String_String(_ctx, NULL);
    char* _embed_3 = ({"";});
    pony_type_t* _tmp_4[] = {};
    _enc__type_init_String_String(_new_2);
    _enc__method_String_String_init(_ctx, _new_2, NULL, _embed_3);
    option_t* _option_5 = option_mk(_ctx, JUST, ((encore_arg_t) {.p = _new_2}), (&(_enc__passive_String_String_type)));
    _ite_0 = ((option_t*) _option_5);
  }
  else
  {
    /* t_len = this.length() */;
    check_receiver(_this, ".", "this", "length", "\"/home/sten/Desktop/encore-lang/encore-development/modules/standard/String.enc\" (line 194, column 15)");
    pony_type_t* _tmp_7[] = {};
    int64_t _sync_method_call_6 = _enc__method_String_String_length(_ctx, _this, NULL);
    int64_t _t_len_8 = _sync_method_call_6;
    /* data = this.data */;
    ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "data");
    char* _fieldacc_9 = (*_this)._enc__field_data;
    char* _data_10 = _fieldacc_9;
    option_t* _ite_11;
    if (({int64_t _binop_13 = (({ _enc__arg_from;}) >= ({int64_t _literal_12 = 0; _literal_12;})); _binop_13;}))
    {
      _enc__passive_String_String_t* _new_14 = _enc__constructor_String_String(_ctx, NULL);
      char* _embed_15 = ({int siz = _enc__arg_to- _enc__arg_from;
          siz = siz < _t_len_8? siz : _t_len_8;
          char *str = encore_alloc(*_ctx, siz + 1);
          strncpy(str, ((char *)_data_10)+_enc__arg_from, siz);
          str[siz] = '\0';
          str;
       });
      pony_type_t* _tmp_16[] = {};
      _enc__type_init_String_String(_new_14);
      _enc__method_String_String_init(_ctx, _new_14, NULL, _embed_15);
      option_t* _option_17 = option_mk(_ctx, JUST, ((encore_arg_t) {.p = _new_14}), (&(_enc__passive_String_String_type)));
      _ite_11 = ((option_t*) _option_17);
    }
    else
    {
      option_t* _option_18 = (&(DEFAULT_NOTHING));
      option_t* _cast_19 = ((option_t*) _option_18);
      _ite_11 = ((option_t*) _cast_19);
    };
    _ite_0 = ((option_t*) _ite_11);
  };
  ENC_DTRACE3(METHOD_EXIT, (uintptr_t)*_ctx, (uintptr_t)_this, "substring");
  return ((option_t*) _ite_0);
}


int64_t _enc__method_String_String_equals(pony_ctx_t** _ctx, _enc__passive_String_String_t* _this, pony_type_t** runtimeType, _enc__passive_String_String_t* _enc__arg_s)
{
  ENC_DTRACE3(METHOD_ENTRY, (uintptr_t)*_ctx, (uintptr_t)_this, "equals");
  int64_t _binop_3 = (({check_receiver(_this, ".", "this", "compare", "\"/home/sten/Desktop/encore-lang/encore-development/modules/standard/String.enc\" (line 210, column 5)");
                        pony_type_t* _tmp_1[] = {};
                        int64_t _sync_method_call_0 = _enc__method_String_String_compare(_ctx, _this, NULL, _enc__arg_s); _sync_method_call_0;}) == ({int64_t _literal_2 = 0; _literal_2;}));
  ENC_DTRACE3(METHOD_EXIT, (uintptr_t)*_ctx, (uintptr_t)_this, "equals");
  return ((int64_t) _binop_3);
}


int64_t _enc__method_String_String_occurrences(pony_ctx_t** _ctx, _enc__passive_String_String_t* _this, pony_type_t** runtimeType, _enc__passive_String_String_t* _enc__arg_s)
{
  ENC_DTRACE3(METHOD_ENTRY, (uintptr_t)*_ctx, (uintptr_t)_this, "occurrences");
  int64_t _ite_0;
  if (({int64_t _binop_4 = (({check_receiver(_enc__arg_s, ".", "s", "length", "\"/home/sten/Desktop/encore-lang/encore-development/modules/standard/String.enc\" (line 214, column 8)");
                              pony_type_t* _tmp_2[] = {};
                              int64_t _sync_method_call_1 = _enc__method_String_String_length(_ctx, _enc__arg_s, NULL); _sync_method_call_1;}) == ({int64_t _literal_3 = 0; _literal_3;})); _binop_4;}))
  {
    check_receiver(_this, ".", "this", "length", "\"/home/sten/Desktop/encore-lang/encore-development/modules/standard/String.enc\" (line 215, column 10)");
    pony_type_t* _tmp_6[] = {};
    int64_t _sync_method_call_5 = _enc__method_String_String_length(_ctx, _this, NULL);
    _ite_0 = ((int64_t) _sync_method_call_5);
  }
  else
  {
    /* var counter = 0 */;
    /* counter = 0 */;
    int64_t _literal_7 = 0;
    int64_t _counter_8 = _literal_7;
    /* var i = this.find(s) */;
    /* i = this.find(s) */;
    check_receiver(_this, ".", "this", "find", "\"/home/sten/Desktop/encore-lang/encore-development/modules/standard/String.enc\" (line 218, column 21)");
    pony_type_t* _tmp_10[] = {};
    int64_t _sync_method_call_9 = _enc__method_String_String_find(_ctx, _this, NULL, _enc__arg_s);
    int64_t _i_11 = _sync_method_call_9;
    /* val s_len = s.length() */;
    /* s_len = s.length() */;
    check_receiver(_enc__arg_s, ".", "s", "length", "\"/home/sten/Desktop/encore-lang/encore-development/modules/standard/String.enc\" (line 219, column 21)");
    pony_type_t* _tmp_13[] = {};
    int64_t _sync_method_call_12 = _enc__method_String_String_length(_ctx, _enc__arg_s, NULL);
    int64_t _s_len_14 = _sync_method_call_12;
    /* while i >= 0
  {counter = counter + 1;
   i = this.find_from(s, i + s_len)} */;
    void* _while_22;
    while (({int64_t _binop_16 = (({ _i_11;}) >= ({int64_t _literal_15 = 0; _literal_15;})); _binop_16;}))
    {
      /* counter = counter + 1 */;
      int64_t _binop_18 = (({ _counter_8;}) + ({int64_t _literal_17 = 1; _literal_17;}));
      _counter_8 = _binop_18;
      /* i = this.find_from(s, i + s_len) */;
      check_receiver(_this, ".", "this", "find_from", "\"/home/sten/Desktop/encore-lang/encore-development/modules/standard/String.enc\" (line 220, column 49)");
      int64_t _binop_20 = (({ _i_11;}) + ({ _s_len_14;}));
      pony_type_t* _tmp_21[] = {};
      int64_t _sync_method_call_19 = _enc__method_String_String_find_from(_ctx, _this, NULL, _enc__arg_s, _binop_20);
      _i_11 = _sync_method_call_19;
      _while_22 = UNIT;
    };
    /* counter */;
    _ite_0 = ((int64_t) _counter_8);
  };
  ENC_DTRACE3(METHOD_EXIT, (uintptr_t)*_ctx, (uintptr_t)_this, "occurrences");
  return ((int64_t) _ite_0);
}


_enc__passive_String_String_t* _enc__method_String_String_join(pony_ctx_t** _ctx, _enc__passive_String_String_t* _this, pony_type_t** runtimeType, array_t* _enc__arg_strings)
{
  ENC_DTRACE3(METHOD_ENTRY, (uintptr_t)*_ctx, (uintptr_t)_this, "join");
  _enc__passive_String_String_t* _ite_0;
  if (({int64_t _binop_3 = (({int64_t _size_1 = array_size(_enc__arg_strings); _size_1;}) == ({int64_t _literal_2 = 0; _literal_2;})); _binop_3;}))
  {
    _enc__passive_String_String_t* _new_4 = _enc__constructor_String_String(_ctx, NULL);
    char* _embed_5 = ({"";});
    pony_type_t* _tmp_6[] = {};
    _enc__type_init_String_String(_new_4);
    _enc__method_String_String_init(_ctx, _new_4, NULL, _embed_5);
    _ite_0 = ((_enc__passive_String_String_t*) _new_4);
  }
  else
  {
    /* var result = strings[0] */;
    /* result = strings[0] */;
    int64_t _literal_7 = 0;
    _enc__passive_String_String_t* _access_8 = array_get(_enc__arg_strings, _literal_7).p;
    _enc__passive_String_String_t* _result_9 = _access_8;
    /* for i in [ 1 , |strings| - 1 by 1 ]
  result = result.concatenate(this).concatenate(strings[i]) */;
    void* _for_10;
    /* Range not generated */;
    int64_t _literal_17 = 1;
    int64_t _binop_20 = (({int64_t _size_18 = array_size(_enc__arg_strings); _size_18;}) - ({int64_t _literal_19 = 1; _literal_19;}));
    int64_t _literal_21 = 1;
    int64_t _literal_22 = 1;
    int64_t _step_15 = (_literal_22 * _literal_21);
    range_assert_step(_step_15);
    int64_t _index_11;
    if ((_step_15 > 0))
    {
      _index_11 = _literal_17;
    }
    else
    {
      _index_11 = _binop_20;
    };
    while (((_index_11 >= _literal_17) && (_index_11 <= _binop_20)))
    {
      int64_t _i_12 = _index_11;
      check_receiver(_result_9, ".", "result", "concatenate", "\"/home/sten/Desktop/encore-lang/encore-development/modules/standard/String.enc\" (line 234, column 18)");
      pony_type_t* _tmp_25[] = {};
      _enc__passive_String_String_t* _sync_method_call_24 = _enc__method_String_String_concatenate(_ctx, _result_9, NULL, _this);
      check_receiver(_sync_method_call_24, ".", "result.concatenate(this)", "concatenate", "\"/home/sten/Desktop/encore-lang/encore-development/modules/standard/String.enc\" (line 234, column 18)");
      _enc__passive_String_String_t* _access_26 = array_get(_enc__arg_strings, _i_12).p;
      pony_type_t* _tmp_27[] = {};
      _enc__passive_String_String_t* _sync_method_call_23 = _enc__method_String_String_concatenate(_ctx, _sync_method_call_24, NULL, _access_26);
      _result_9 = _sync_method_call_23;
      _for_10 = UNIT;
      _index_11 = (_index_11 + _step_15);
    };
    /* result */;
    _ite_0 = ((_enc__passive_String_String_t*) _result_9);
  };
  ENC_DTRACE3(METHOD_EXIT, (uintptr_t)*_ctx, (uintptr_t)_this, "join");
  return ((_enc__passive_String_String_t*) _ite_0);
}


char* _enc__method_String_String_getData(pony_ctx_t** _ctx, _enc__passive_String_String_t* _this, pony_type_t** runtimeType)
{
  ENC_DTRACE3(METHOD_ENTRY, (uintptr_t)*_ctx, (uintptr_t)_this, "getData");
  ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "data");
  char* _fieldacc_0 = (*_this)._enc__field_data;
  ENC_DTRACE3(METHOD_EXIT, (uintptr_t)*_ctx, (uintptr_t)_this, "getData");
  return ((char*) _fieldacc_0);
}


_enc__passive_String_String_t* _enc__method_String_String_trim(pony_ctx_t** _ctx, _enc__passive_String_String_t* _this, pony_type_t** runtimeType)
{
  ENC_DTRACE3(METHOD_ENTRY, (uintptr_t)*_ctx, (uintptr_t)_this, "trim");
  /* len = this.length() */;
  check_receiver(_this, ".", "this", "length", "\"/home/sten/Desktop/encore-lang/encore-development/modules/standard/String.enc\" (line 245, column 13)");
  pony_type_t* _tmp_1[] = {};
  int64_t _sync_method_call_0 = _enc__method_String_String_length(_ctx, _this, NULL);
  int64_t _len_2 = _sync_method_call_0;
  /* str = this.data */;
  ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "data");
  char* _fieldacc_3 = (*_this)._enc__field_data;
  char* _str_4 = _fieldacc_3;
  /* start_index = embed int int s = 0;        while (#{str}[s] && isspace(#{str}[s])) ++s; s; end */;
  int64_t _embed_5 = ({int s = 0;        while (_str_4[s] && isspace(_str_4[s])) ++s; s;});
  int64_t _start_index_6 = _embed_5;
  /* stop_index = embed int int s = #{len}-1; while (#{str}[s] && isspace(#{str}[s])) --s; s; end */;
  int64_t _embed_7 = ({int s = _len_2-1; while (_str_4[s] && isspace(_str_4[s])) --s; s;});
  int64_t _stop_index_8 = _embed_7;
  check_receiver(_this, ".", "this", "substring", "\"/home/sten/Desktop/encore-lang/encore-development/modules/standard/String.enc\" (line 250, column 13)");
  int64_t _binop_12 = (({ _stop_index_8;}) + ({int64_t _literal_11 = 1; _literal_11;}));
  pony_type_t* _tmp_13[] = {};
  option_t* _sync_method_call_10 = _enc__method_String_String_substring(_ctx, _this, NULL, _start_index_6, _binop_12);
  _enc__passive_String_String_t* _match_9;
  _enc__passive_String_String_t* _s_14;
  if ((({int64_t _optionCheck_16;
         _optionCheck_16 = ((JUST == (*_sync_method_call_10).tag) && ({int64_t _varBinding_17;
                                                                       _enc__passive_String_String_t* _optionVal_15 = (*_sync_method_call_10).val.p;
                                                                       _s_14 = _optionVal_15;
                                                                       _varBinding_17 = 1; _varBinding_17;})); _optionCheck_16;}) && ({int64_t _literal_18 = 1/*True*/; _literal_18;})))
  {
    _match_9 = ((_enc__passive_String_String_t*) ({ _s_14;}));
  }
  else
  {
    fprintf(stderr, "*** Runtime error: No matching clause was found ***\n");
    exit(1);
  };
  ENC_DTRACE3(METHOD_EXIT, (uintptr_t)*_ctx, (uintptr_t)_this, "trim");
  return ((_enc__passive_String_String_t*) _match_9);
}


_enc__passive_String_String_t* _enc__method_String_String_replace(pony_ctx_t** _ctx, _enc__passive_String_String_t* _this, pony_type_t** runtimeType, _enc__passive_String_String_t* _enc__arg_a, _enc__passive_String_String_t* _enc__arg_b)
{
  ENC_DTRACE3(METHOD_ENTRY, (uintptr_t)*_ctx, (uintptr_t)_this, "replace");
  check_receiver(_enc__arg_b, ".", "b", "join", "\"/home/sten/Desktop/encore-lang/encore-development/modules/standard/String.enc\" (line 257, column 5)");
  check_receiver(_this, ".", "this", "split", "\"/home/sten/Desktop/encore-lang/encore-development/modules/standard/String.enc\" (line 257, column 12)");
  pony_type_t* _tmp_2[] = {};
  array_t* _sync_method_call_1 = _enc__method_String_String_split(_ctx, _this, NULL, _enc__arg_a);
  pony_type_t* _tmp_3[] = {};
  _enc__passive_String_String_t* _sync_method_call_0 = _enc__method_String_String_join(_ctx, _enc__arg_b, NULL, _sync_method_call_1);
  ENC_DTRACE3(METHOD_EXIT, (uintptr_t)*_ctx, (uintptr_t)_this, "replace");
  return ((_enc__passive_String_String_t*) _sync_method_call_0);
}


int64_t _enc__method_String_String_find(pony_ctx_t** _ctx, _enc__passive_String_String_t* _this, pony_type_t** runtimeType, _enc__passive_String_String_t* _enc__arg_a)
{
  ENC_DTRACE3(METHOD_ENTRY, (uintptr_t)*_ctx, (uintptr_t)_this, "find");
  check_receiver(_this, ".", "this", "find_from", "\"/home/sten/Desktop/encore-lang/encore-development/modules/standard/String.enc\" (line 262, column 5)");
  int64_t _literal_1 = 0;
  pony_type_t* _tmp_2[] = {};
  int64_t _sync_method_call_0 = _enc__method_String_String_find_from(_ctx, _this, NULL, _enc__arg_a, _literal_1);
  ENC_DTRACE3(METHOD_EXIT, (uintptr_t)*_ctx, (uintptr_t)_this, "find");
  return ((int64_t) _sync_method_call_0);
}


int64_t _enc__method_String_String_find_from(pony_ctx_t** _ctx, _enc__passive_String_String_t* _this, pony_type_t** runtimeType, _enc__passive_String_String_t* _enc__arg_a, int64_t _enc__arg_b)
{
  ENC_DTRACE3(METHOD_ENTRY, (uintptr_t)*_ctx, (uintptr_t)_this, "find_from");
  int64_t _ite_0;
  if (({int64_t _binop_6 = (({int64_t _binop_2 = (({ _enc__arg_b;}) < ({int64_t _literal_1 = 0; _literal_1;})); _binop_2;}) || ({int64_t _binop_5 = (({ _enc__arg_b;}) >= ({check_receiver(_this, ".", "this", "length", "\"/home/sten/Desktop/encore-lang/encore-development/modules/standard/String.enc\" (line 267, column 25)");
                                                                                                                                                                            pony_type_t* _tmp_4[] = {};
                                                                                                                                                                            int64_t _sync_method_call_3 = _enc__method_String_String_length(_ctx, _this, NULL); _sync_method_call_3;})); _binop_5;})); _binop_6;}))
  {
    int64_t _literal_7 = 1;
    int64_t _unary_8 = (- _literal_7);
    _ite_0 = ((int64_t) _unary_8);
  }
  else
  {
    int64_t _embed_9 = ({char *str = _this->_enc__field_data;
      char *pattern = _enc__arg_a->_enc__field_data;
      char *loc = strstr(str + _enc__arg_b, pattern);
      loc ? loc - str : -1;
   });
    _ite_0 = ((int64_t) _embed_9);
  };
  ENC_DTRACE3(METHOD_EXIT, (uintptr_t)*_ctx, (uintptr_t)_this, "find_from");
  return ((int64_t) _ite_0);
}


_enc__passive_String_String_t* _enc__method_String_String_delete(pony_ctx_t** _ctx, _enc__passive_String_String_t* _this, pony_type_t** runtimeType, _enc__passive_String_String_t* _enc__arg_s)
{
  ENC_DTRACE3(METHOD_ENTRY, (uintptr_t)*_ctx, (uintptr_t)_this, "delete");
  /* to_len = this.length() */;
  check_receiver(_this, ".", "this", "length", "\"/home/sten/Desktop/encore-lang/encore-development/modules/standard/String.enc\" (line 279, column 16)");
  pony_type_t* _tmp_1[] = {};
  int64_t _sync_method_call_0 = _enc__method_String_String_length(_ctx, _this, NULL);
  int64_t _to_len_2 = _sync_method_call_0;
  /* s_len = s.length() */;
  check_receiver(_enc__arg_s, ".", "s", "length", "\"/home/sten/Desktop/encore-lang/encore-development/modules/standard/String.enc\" (line 280, column 15)");
  pony_type_t* _tmp_4[] = {};
  int64_t _sync_method_call_3 = _enc__method_String_String_length(_ctx, _enc__arg_s, NULL);
  int64_t _s_len_5 = _sync_method_call_3;
  _enc__passive_String_String_t* _new_6 = _enc__constructor_String_String(_ctx, NULL);
  char* _embed_7 = ({const int STACK_ALLOC_MAX = 16536;
      char *from = _this->_enc__field_data;
      char *pattern  = _enc__arg_s->_enc__field_data;
      char *tmp = NULL;

      if (_to_len_2> STACK_ALLOC_MAX) { tmp = encore_alloc(*_ctx, _to_len_2+ 1); } else { tmp = alloca(_to_len_2); }

      int copied = 0;
      int skipped = 0;
      for (char *next = strstr(from, pattern); next; next = strstr(next+_s_len_5, pattern))
        {
          strncpy(tmp + copied, from + copied + skipped, next - from - copied - skipped);
          copied  = next - from - skipped;
          skipped += _s_len_5;
        }
      strcpy(tmp + copied, from + copied + skipped);

      char *result = encore_alloc(*_ctx, copied + 1);
      strcpy(result, tmp);
      result;
   });
  pony_type_t* _tmp_8[] = {};
  _enc__type_init_String_String(_new_6);
  _enc__method_String_String_init(_ctx, _new_6, NULL, _embed_7);
  ENC_DTRACE3(METHOD_EXIT, (uintptr_t)*_ctx, (uintptr_t)_this, "delete");
  return ((_enc__passive_String_String_t*) _new_6);
}


_enc__passive_String_String_t* _enc__method_String_String_format(pony_ctx_t** _ctx, _enc__passive_String_String_t* _this, pony_type_t** runtimeType, array_t* _enc__arg_b)
{
  ENC_DTRACE3(METHOD_ENTRY, (uintptr_t)*_ctx, (uintptr_t)_this, "format");
  _enc__passive_String_String_t* _new_0 = _enc__constructor_String_String(_ctx, NULL);
  char* _embed_1 = ({"To be implemented";});
  pony_type_t* _tmp_2[] = {};
  _enc__type_init_String_String(_new_0);
  _enc__method_String_String_init(_ctx, _new_0, NULL, _embed_1);
  ENC_DTRACE3(METHOD_EXIT, (uintptr_t)*_ctx, (uintptr_t)_this, "format");
  return ((_enc__passive_String_String_t*) _new_0);
}


option_t* _enc__method_String_String_char_at(pony_ctx_t** _ctx, _enc__passive_String_String_t* _this, pony_type_t** runtimeType, int64_t _enc__arg_i)
{
  ENC_DTRACE3(METHOD_ENTRY, (uintptr_t)*_ctx, (uintptr_t)_this, "char_at");
  /* s = this.data */;
  ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "data");
  char* _fieldacc_0 = (*_this)._enc__field_data;
  char* _s_1 = _fieldacc_0;
  /* len = this.length() */;
  check_receiver(_this, ".", "this", "length", "\"/home/sten/Desktop/encore-lang/encore-development/modules/standard/String.enc\" (line 310, column 15)");
  pony_type_t* _tmp_3[] = {};
  int64_t _sync_method_call_2 = _enc__method_String_String_length(_ctx, _this, NULL);
  int64_t _len_4 = _sync_method_call_2;
  option_t* _ite_5;
  if (({int64_t _binop_9 = (({int64_t _binop_7 = (({ _enc__arg_i;}) >= ({int64_t _literal_6 = 0; _literal_6;})); _binop_7;}) && ({int64_t _binop_8 = (({ _enc__arg_i;}) < ({ _len_4;})); _binop_8;})); _binop_9;}))
  {
    char _embed_10 = ({_s_1[_enc__arg_i];});
    option_t* _option_11 = option_mk(_ctx, JUST, ((encore_arg_t) {.i = _embed_10}), ENCORE_PRIMITIVE);
    _ite_5 = ((option_t*) _option_11);
  }
  else
  {
    option_t* _option_12 = (&(DEFAULT_NOTHING));
    option_t* _cast_13 = ((option_t*) _option_12);
    _ite_5 = ((option_t*) _cast_13);
  };
  ENC_DTRACE3(METHOD_EXIT, (uintptr_t)*_ctx, (uintptr_t)_this, "char_at");
  return ((option_t*) _ite_5);
}


array_t* _enc__method_String_String_to_array(pony_ctx_t** _ctx, _enc__passive_String_String_t* _this, pony_type_t** runtimeType)
{
  ENC_DTRACE3(METHOD_ENTRY, (uintptr_t)*_ctx, (uintptr_t)_this, "to_array");
  /* len = this.length() */;
  check_receiver(_this, ".", "this", "length", "\"/home/sten/Desktop/encore-lang/encore-development/modules/standard/String.enc\" (line 317, column 13)");
  pony_type_t* _tmp_1[] = {};
  int64_t _sync_method_call_0 = _enc__method_String_String_length(_ctx, _this, NULL);
  int64_t _len_2 = _sync_method_call_0;
  /* arr = new [char](len) */;
  array_t* _array_3 = array_mk(_ctx, _len_2, ENCORE_PRIMITIVE);
  array_t* _arr_4 = _array_3;
  /* for i in [ 0 , len - 1 by 1 ]
  arr[i] = match this.char_at(i) with
             Just c => c
            */;
  void* _for_5;
  /* Range not generated */;
  int64_t _literal_12 = 0;
  int64_t _binop_14 = (({ _len_2;}) - ({int64_t _literal_13 = 1; _literal_13;}));
  int64_t _literal_15 = 1;
  int64_t _literal_16 = 1;
  int64_t _step_10 = (_literal_16 * _literal_15);
  range_assert_step(_step_10);
  int64_t _index_6;
  if ((_step_10 > 0))
  {
    _index_6 = _literal_12;
  }
  else
  {
    _index_6 = _binop_14;
  };
  while (((_index_6 >= _literal_12) && (_index_6 <= _binop_14)))
  {
    int64_t _i_7 = _index_6;
    check_receiver(_this, ".", "this", "char_at", "\"/home/sten/Desktop/encore-lang/encore-development/modules/standard/String.enc\" (line 321, column 24)");
    pony_type_t* _tmp_19[] = {};
    option_t* _sync_method_call_18 = _enc__method_String_String_char_at(_ctx, _this, NULL, _i_7);
    char _match_17;
    char _c_20;
    if ((({int64_t _optionCheck_22;
           _optionCheck_22 = ((JUST == (*_sync_method_call_18).tag) && ({int64_t _varBinding_23;
                                                                         char _optionVal_21 = (*_sync_method_call_18).val.i;
                                                                         _c_20 = _optionVal_21;
                                                                         _varBinding_23 = 1; _varBinding_23;})); _optionCheck_22;}) && ({int64_t _literal_24 = 1/*True*/; _literal_24;})))
    {
      _match_17 = ((char) ({ _c_20;}));
    }
    else
    {
      fprintf(stderr, "*** Runtime error: No matching clause was found ***\n");
      exit(1);
    };
    array_set(_arr_4, _i_7, ((encore_arg_t) {.i = _match_17}));
    _for_5 = UNIT;
    _index_6 = (_index_6 + _step_10);
  };
  /* arr */;
  ENC_DTRACE3(METHOD_EXIT, (uintptr_t)*_ctx, (uintptr_t)_this, "to_array");
  return ((array_t*) _arr_4);
}


array_t* _enc__method_String_String_split(pony_ctx_t** _ctx, _enc__passive_String_String_t* _this, pony_type_t** runtimeType, _enc__passive_String_String_t* _enc__arg_p)
{
  ENC_DTRACE3(METHOD_ENTRY, (uintptr_t)*_ctx, (uintptr_t)_this, "split");
  /* occurrences = this.occurrences(p) */;
  check_receiver(_this, ".", "this", "occurrences", "\"/home/sten/Desktop/encore-lang/encore-development/modules/standard/String.enc\" (line 329, column 21)");
  pony_type_t* _tmp_1[] = {};
  int64_t _sync_method_call_0 = _enc__method_String_String_occurrences(_ctx, _this, NULL, _enc__arg_p);
  int64_t _occurrences_2 = _sync_method_call_0;
  /* pattern_len = p.length() */;
  check_receiver(_enc__arg_p, ".", "p", "length", "\"/home/sten/Desktop/encore-lang/encore-development/modules/standard/String.enc\" (line 330, column 21)");
  pony_type_t* _tmp_4[] = {};
  int64_t _sync_method_call_3 = _enc__method_String_String_length(_ctx, _enc__arg_p, NULL);
  int64_t _pattern_len_5 = _sync_method_call_3;
  array_t* _ite_6;
  if (({int64_t _binop_8 = (({ _occurrences_2;}) == ({int64_t _literal_7 = 0; _literal_7;})); _binop_8;}))
  {
    array_t* _array_9 = array_mk(_ctx, 1, (&(_enc__passive_String_String_type)));
    array_set(_array_9, 0, ((encore_arg_t) {.p = _this}));
    _ite_6 = ((array_t*) _array_9);
  }
  else
  {
    array_t* _ite_10;
    if (({int64_t _binop_12 = (({ _pattern_len_5;}) == ({int64_t _literal_11 = 0; _literal_11;})); _binop_12;}))
    {
      /* s_arr = new [String](this.length()) */;
      check_receiver(_this, ".", "this", "length", "\"/home/sten/Desktop/encore-lang/encore-development/modules/standard/String.enc\" (line 336, column 32)");
      pony_type_t* _tmp_15[] = {};
      int64_t _sync_method_call_14 = _enc__method_String_String_length(_ctx, _this, NULL);
      array_t* _array_13 = array_mk(_ctx, _sync_method_call_14, (&(_enc__passive_String_String_type)));
      array_t* _s_arr_16 = _array_13;
      /* for i in [ 0 , |s_arr| - 1 by 1 ]
  s_arr[i] = string_from_char(match this.char_at(i) with
                                Just c => c
                              ) */;
      void* _for_17;
      /* Range not generated */;
      int64_t _literal_24 = 0;
      int64_t _binop_27 = (({int64_t _size_25 = array_size(_s_arr_16); _size_25;}) - ({int64_t _literal_26 = 1; _literal_26;}));
      int64_t _literal_28 = 1;
      int64_t _literal_29 = 1;
      int64_t _step_22 = (_literal_29 * _literal_28);
      range_assert_step(_step_22);
      int64_t _index_18;
      if ((_step_22 > 0))
      {
        _index_18 = _literal_24;
      }
      else
      {
        _index_18 = _binop_27;
      };
      while (((_index_18 >= _literal_24) && (_index_18 <= _binop_27)))
      {
        int64_t _i_19 = _index_18;
        check_receiver(_this, ".", "this", "char_at", "\"/home/sten/Desktop/encore-lang/encore-development/modules/standard/String.enc\" (line 339, column 45)");
        pony_type_t* _tmp_32[] = {};
        option_t* _sync_method_call_31 = _enc__method_String_String_char_at(_ctx, _this, NULL, _i_19);
        char _match_30;
        char _c_33;
        if ((({int64_t _optionCheck_35;
               _optionCheck_35 = ((JUST == (*_sync_method_call_31).tag) && ({int64_t _varBinding_36;
                                                                             char _optionVal_34 = (*_sync_method_call_31).val.i;
                                                                             _c_33 = _optionVal_34;
                                                                             _varBinding_36 = 1; _varBinding_36;})); _optionCheck_35;}) && ({int64_t _literal_37 = 1/*True*/; _literal_37;})))
        {
          _match_30 = ((char) ({ _c_33;}));
        }
        else
        {
          fprintf(stderr, "*** Runtime error: No matching clause was found ***\n");
          exit(1);
        };
        ENC_DTRACE2(FUNCTION_CALL, (uintptr_t)*_ctx, "String.string_from_char");
        pony_type_t* _tmp_38[] = {};
        _enc__passive_String_String_t* _fun_call_39 = _enc__global_fun_Stringstring_from_char(_ctx, NULL, _match_30);
        array_set(_s_arr_16, _i_19, ((encore_arg_t) {.p = _fun_call_39}));
        _for_17 = UNIT;
        _index_18 = (_index_18 + _step_22);
      };
      /* s_arr */;
      _ite_10 = ((array_t*) _s_arr_16);
    }
    else
    {
      /* val result = new [String](occurrences + 1) */;
      /* result = new [String](occurrences + 1) */;
      int64_t _binop_42 = (({ _occurrences_2;}) + ({int64_t _literal_41 = 1; _literal_41;}));
      array_t* _array_40 = array_mk(_ctx, _binop_42, (&(_enc__passive_String_String_type)));
      array_t* _result_43 = _array_40;
      /* var start = 0 */;
      /* start = 0 */;
      int64_t _literal_44 = 0;
      int64_t _start_45 = _literal_44;
      /* var stop = 0 */;
      /* stop = 0 */;
      int64_t _literal_46 = 0;
      int64_t _stop_47 = _literal_46;
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
      int64_t _literal_48 = 0;
      int64_t _i_49 = _literal_48;
      /* __gub__ = occurrences */;
      int64_t ___gub___50 = _occurrences_2;
      void* _while_65;
      while (({int64_t _binop_51 = (({ _i_49;}) < ({ ___gub___50;})); _binop_51;}))
      {
        /* {stop = this.find_from(p, start);
 result[i] = match this.substring(start, stop) with
               Just s => s
             ;
 start = stop + pattern_len} */;
        /* stop = this.find_from(p, start) */;
        check_receiver(_this, ".", "this", "find_from", "\"/home/sten/Desktop/encore-lang/encore-development/modules/standard/String.enc\" (line 347, column 16)");
        pony_type_t* _tmp_53[] = {};
        int64_t _sync_method_call_52 = _enc__method_String_String_find_from(_ctx, _this, NULL, _enc__arg_p, _start_45);
        _stop_47 = _sync_method_call_52;
        /* result[i] = match this.substring(start, stop) with
              Just s => s
             */;
        check_receiver(_this, ".", "this", "substring", "\"/home/sten/Desktop/encore-lang/encore-development/modules/standard/String.enc\" (line 348, column 27)");
        pony_type_t* _tmp_56[] = {};
        option_t* _sync_method_call_55 = _enc__method_String_String_substring(_ctx, _this, NULL, _start_45, _stop_47);
        _enc__passive_String_String_t* _match_54;
        _enc__passive_String_String_t* _s_57;
        if ((({int64_t _optionCheck_59;
               _optionCheck_59 = ((JUST == (*_sync_method_call_55).tag) && ({int64_t _varBinding_60;
                                                                             _enc__passive_String_String_t* _optionVal_58 = (*_sync_method_call_55).val.p;
                                                                             _s_57 = _optionVal_58;
                                                                             _varBinding_60 = 1; _varBinding_60;})); _optionCheck_59;}) && ({int64_t _literal_61 = 1/*True*/; _literal_61;})))
        {
          _match_54 = ((_enc__passive_String_String_t*) ({ _s_57;}));
        }
        else
        {
          fprintf(stderr, "*** Runtime error: No matching clause was found ***\n");
          exit(1);
        };
        array_set(_result_43, _i_49, ((encore_arg_t) {.p = _match_54}));
        /* start = stop + pattern_len */;
        int64_t _binop_62 = (({ _stop_47;}) + ({ _pattern_len_5;}));
        _start_45 = _binop_62;
        /* repeat i <- occurrences
  {stop = this.find_from(p, start);
   result[i] = match this.substring(start, stop) with
                 Just s => s
               ;
   start = stop + pattern_len} */;
        int64_t _binop_64 = (({ _i_49;}) + ({int64_t _literal_63 = 1; _literal_63;}));
        _i_49 = _binop_64;
        _while_65 = UNIT;
      };
      /* result[occurrences] = match this.substring(start, 
                                           this.length()) with
                        Just s => s
                       */;
      check_receiver(_this, ".", "this", "substring", "\"/home/sten/Desktop/encore-lang/encore-development/modules/standard/String.enc\" (line 351, column 35)");
      check_receiver(_this, ".", "this", "length", "\"/home/sten/Desktop/encore-lang/encore-development/modules/standard/String.enc\" (line 351, column 57)");
      pony_type_t* _tmp_69[] = {};
      int64_t _sync_method_call_68 = _enc__method_String_String_length(_ctx, _this, NULL);
      pony_type_t* _tmp_70[] = {};
      option_t* _sync_method_call_67 = _enc__method_String_String_substring(_ctx, _this, NULL, _start_45, _sync_method_call_68);
      _enc__passive_String_String_t* _match_66;
      _enc__passive_String_String_t* _s_71;
      if ((({int64_t _optionCheck_73;
             _optionCheck_73 = ((JUST == (*_sync_method_call_67).tag) && ({int64_t _varBinding_74;
                                                                           _enc__passive_String_String_t* _optionVal_72 = (*_sync_method_call_67).val.p;
                                                                           _s_71 = _optionVal_72;
                                                                           _varBinding_74 = 1; _varBinding_74;})); _optionCheck_73;}) && ({int64_t _literal_75 = 1/*True*/; _literal_75;})))
      {
        _match_66 = ((_enc__passive_String_String_t*) ({ _s_71;}));
      }
      else
      {
        fprintf(stderr, "*** Runtime error: No matching clause was found ***\n");
        exit(1);
      };
      array_set(_result_43, _occurrences_2, ((encore_arg_t) {.p = _match_66}));
      /* result */;
      _ite_10 = ((array_t*) _result_43);
    };
    _ite_6 = ((array_t*) _ite_10);
  };
  ENC_DTRACE3(METHOD_EXIT, (uintptr_t)*_ctx, (uintptr_t)_this, "split");
  return ((array_t*) _ite_6);
}


option_t* _enc__method_String_String_to_int(pony_ctx_t** _ctx, _enc__passive_String_String_t* _this, pony_type_t** runtimeType)
{
  ENC_DTRACE3(METHOD_ENTRY, (uintptr_t)*_ctx, (uintptr_t)_this, "to_int");
  /* val s = this.data */;
  /* s = this.data */;
  ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "data");
  char* _fieldacc_0 = (*_this)._enc__field_data;
  char* _s_1 = _fieldacc_0;
  /* val n = 0 */;
  /* n = 0 */;
  int64_t _literal_2 = 0;
  int64_t _n_3 = _literal_2;
  /* val success = false */;
  /* success = false */;
  int64_t _literal_4 = 0/*False*/;
  int64_t _success_5 = _literal_4;
  /* embed void char *s = #{s};
      char *endptr;
      #{n}= strtol(s,&endptr,0);
      if (s != endptr)
         #{success}= true;
    end */;
  ({char *s = _s_1;
      char *endptr;
      _n_3= strtol(s,&endptr,0);
      if (s != endptr)
         _success_5= true;
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
  ENC_DTRACE3(METHOD_EXIT, (uintptr_t)*_ctx, (uintptr_t)_this, "to_int");
  return ((option_t*) _ite_6);
}


pony_type_t _enc__passive_String_String_type = {.id=_ENC__ID_String_String, .size=sizeof(_enc__passive_String_String_t), .trace=_enc__trace_String_String, .vtable=trait_method_selector};
