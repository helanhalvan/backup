#include "header.h"


static void* trait_method_selector(int id)
{
  switch (id)
  {
    case _ENC__MSG_Either_Either_Left:
    {
      return _enc__method_Either_Left_Left;
      break;
    }
    case _ENC__MSG_Either_Either_Right:
    {
      return _enc__method_Either_Left_Right;
      break;
    }
    case _ENC__MSG_Either_Either_map:
    {
      return _enc__method_Either_Left_map;
      break;
    }
    case _ENC__MSG_Either_Either_foreach:
    {
      return _enc__method_Either_Left_foreach;
      break;
    }
    case _ENC__MSG_Either_Either_flatMap:
    {
      return _enc__method_Either_Left_flatMap;
      break;
    }
    default:
    {
      printf("error, got invalid id: %d", id);
    }
  };
  return NULL;
}


void _enc__type_init_Either_Left(_enc__passive_Either_Left_t* this, ... )
{
  va_list params;
  va_start(params, this);
  this->_enc__type_a = va_arg(params, pony_type_t *);
  this->_enc__type_b = va_arg(params, pony_type_t *);
  va_end(params);
}


void _enc__trace_Either_Left(pony_ctx_t* _ctx_arg, void* p)
{
  pony_ctx_t** _ctx = (&(_ctx_arg));
  _enc__passive_Either_Left_t* _this = p;
  encore_arg_t _enc__field_x = _this->_enc__field_x;
  encore_trace_polymorphic_variable((*_ctx), _this->_enc__type_a, _enc__field_x);
}


_enc__passive_Either_Left_t* _enc__constructor_Either_Left(pony_ctx_t** _ctx)
{
  _enc__passive_Either_Left_t* this = ((_enc__passive_Either_Left_t*) encore_alloc((*_ctx), sizeof(_enc__passive_Either_Left_t)));
  this->_enc__self_type = (&(_enc__passive_Either_Left_type));
  return this;
}


void* _enc__method_Either_Left__init(pony_ctx_t** _ctx, _enc__passive_Either_Left_t* _this, encore_arg_t _enc__arg_x)
{
  pony_type_t* _enc__type_a = (*((_enc__passive_Either_Left_t*) _this))._enc__type_a;
  pony_type_t* _enc__type_b = (*((_enc__passive_Either_Left_t*) _this))._enc__type_b;
  (*({ _this;}))._enc__field_x = _enc__arg_x;
  return UNIT;
}


option_t* _enc__method_Either_Left_Left(pony_ctx_t** _ctx, _enc__passive_Either_Left_t* _this)
{
  pony_type_t* _enc__type_a = (*((_enc__passive_Either_Left_t*) _this))._enc__type_a;
  pony_type_t* _enc__type_b = (*((_enc__passive_Either_Left_t*) _this))._enc__type_b;
  encore_arg_t _fieldacc_0 = (*_this)._enc__field_x;
  option_t* _option_1 = option_mk(_ctx, JUST, _fieldacc_0, _enc__type_a);
  return ((option_t*) _option_1);
}


option_t* _enc__method_Either_Left_Right(pony_ctx_t** _ctx, _enc__passive_Either_Left_t* _this)
{
  pony_type_t* _enc__type_a = (*((_enc__passive_Either_Left_t*) _this))._enc__type_a;
  pony_type_t* _enc__type_b = (*((_enc__passive_Either_Left_t*) _this))._enc__type_b;
  option_t* _option_0 = (&(DEFAULT_NOTHING));
  return ((option_t*) _option_0);
}


_enc__trait_Either_Either_t* _enc__method_Either_Left_map(pony_ctx_t** _ctx, _enc__passive_Either_Left_t* _this, closure_t* _enc__arg_f)
{
  pony_type_t* _enc__type_a = (*((_enc__passive_Either_Left_t*) _this))._enc__type_a;
  pony_type_t* _enc__type_b = (*((_enc__passive_Either_Left_t*) _this))._enc__type_b;
  /* match this with
  Left(x) => new Left<a, b>(x)
  Right(x) => new Right<a, b>(f(x))
 */;
  _enc__trait_Either_Either_t* _match_0;
  encore_arg_t _x_1;
  if ((({int64_t _extractoCheck_17;
         _extractoCheck_17 = ((_this != NULL) && ({int64_t _optionCheck_15;
                                                   option_t* _extractedOption_13 = _enc__method_Either_Left_Left(_ctx, _this);
                                                   _optionCheck_15 = ((JUST == (*_extractedOption_13).tag) && ({int64_t _varBinding_16;
                                                                                                                encore_arg_t _optionVal_14 = (*_extractedOption_13).val;
                                                                                                                _x_1 = _optionVal_14;
                                                                                                                _varBinding_16 = 1; _varBinding_16;})); _optionCheck_15;})); _extractoCheck_17;}) && ({int64_t _literal_18 = 1/*True*/; _literal_18;})))
  {
    _match_0 = ((_enc__trait_Either_Either_t*) ({_enc__passive_Either_Left_t* _new_2 = _enc__constructor_Either_Left(_ctx);
                                                 _enc__type_init_Either_Left(_new_2, _enc__type_a, _enc__type_b);
                                                 _enc__method_Either_Left__init(_ctx, _new_2, _x_1); _new_2;}));
  }
  else
  {
    encore_arg_t _x_3;
    if ((({int64_t _extractoCheck_11;
           _extractoCheck_11 = ((_this != NULL) && ({int64_t _optionCheck_9;
                                                     option_t* _extractedOption_7 = _enc__method_Either_Left_Right(_ctx, _this);
                                                     _optionCheck_9 = ((JUST == (*_extractedOption_7).tag) && ({int64_t _varBinding_10;
                                                                                                                encore_arg_t _optionVal_8 = (*_extractedOption_7).val;
                                                                                                                _x_3 = _optionVal_8;
                                                                                                                _varBinding_10 = 1; _varBinding_10;})); _optionCheck_9;})); _extractoCheck_11;}) && ({int64_t _literal_12 = 1/*True*/; _literal_12;})))
    {
      _match_0 = ((_enc__trait_Either_Either_t*) ({_enc__passive_Either_Right_t* _new_4 = _enc__constructor_Either_Right(_ctx);
                                                   value_t _tmp_5[] = {({ _x_3;})};
                                                   encore_arg_t _clos_6 = closure_call(_ctx, _enc__arg_f, _tmp_5);
                                                   _enc__type_init_Either_Right(_new_4, _enc__type_a, _enc__type_b);
                                                   _enc__method_Either_Right__init(_ctx, _new_4, _clos_6); _new_4;}));
    }
    else
    {
      printf("*** Runtime error: No matching clause was found ***\n");
      exit(1);
    };
  };
  return ((_enc__trait_Either_Either_t*) _match_0);
}


void* _enc__method_Either_Left_foreach(pony_ctx_t** _ctx, _enc__passive_Either_Left_t* _this, closure_t* _enc__arg_f)
{
  pony_type_t* _enc__type_a = (*((_enc__passive_Either_Left_t*) _this))._enc__type_a;
  pony_type_t* _enc__type_b = (*((_enc__passive_Either_Left_t*) _this))._enc__type_b;
  /* match this with
  Left(x) => ()
  Right(x) => f(x)
 */;
  void* _match_0;
  encore_arg_t _x_1;
  if ((({int64_t _extractoCheck_14;
         _extractoCheck_14 = ((_this != NULL) && ({int64_t _optionCheck_12;
                                                   option_t* _extractedOption_10 = _enc__method_Either_Left_Left(_ctx, _this);
                                                   _optionCheck_12 = ((JUST == (*_extractedOption_10).tag) && ({int64_t _varBinding_13;
                                                                                                                encore_arg_t _optionVal_11 = (*_extractedOption_10).val;
                                                                                                                _x_1 = _optionVal_11;
                                                                                                                _varBinding_13 = 1; _varBinding_13;})); _optionCheck_12;})); _extractoCheck_14;}) && ({int64_t _literal_15 = 1/*True*/; _literal_15;})))
  {
    _match_0 = ((void*) ({UNIT; UNIT;}));
  }
  else
  {
    encore_arg_t _x_2;
    if ((({int64_t _extractoCheck_8;
           _extractoCheck_8 = ((_this != NULL) && ({int64_t _optionCheck_6;
                                                    option_t* _extractedOption_4 = _enc__method_Either_Left_Right(_ctx, _this);
                                                    _optionCheck_6 = ((JUST == (*_extractedOption_4).tag) && ({int64_t _varBinding_7;
                                                                                                               encore_arg_t _optionVal_5 = (*_extractedOption_4).val;
                                                                                                               _x_2 = _optionVal_5;
                                                                                                               _varBinding_7 = 1; _varBinding_7;})); _optionCheck_6;})); _extractoCheck_8;}) && ({int64_t _literal_9 = 1/*True*/; _literal_9;})))
    {
      _match_0 = ((void*) ({value_t _tmp_3[] = {({ _x_2;})};
                            closure_call(_ctx, _enc__arg_f, _tmp_3).p; UNIT;}));
    }
    else
    {
      printf("*** Runtime error: No matching clause was found ***\n");
      exit(1);
    };
  };
  return UNIT;
}


_enc__trait_Either_Either_t* _enc__method_Either_Left_flatMap(pony_ctx_t** _ctx, _enc__passive_Either_Left_t* _this, closure_t* _enc__arg_f)
{
  pony_type_t* _enc__type_a = (*((_enc__passive_Either_Left_t*) _this))._enc__type_a;
  pony_type_t* _enc__type_b = (*((_enc__passive_Either_Left_t*) _this))._enc__type_b;
  /* match this with
  Left(x) => new Left<a, b>(x)
  Right(x) => f(x)
 */;
  _enc__trait_Either_Either_t* _match_0;
  encore_arg_t _x_1;
  if ((({int64_t _extractoCheck_16;
         _extractoCheck_16 = ((_this != NULL) && ({int64_t _optionCheck_14;
                                                   option_t* _extractedOption_12 = _enc__method_Either_Left_Left(_ctx, _this);
                                                   _optionCheck_14 = ((JUST == (*_extractedOption_12).tag) && ({int64_t _varBinding_15;
                                                                                                                encore_arg_t _optionVal_13 = (*_extractedOption_12).val;
                                                                                                                _x_1 = _optionVal_13;
                                                                                                                _varBinding_15 = 1; _varBinding_15;})); _optionCheck_14;})); _extractoCheck_16;}) && ({int64_t _literal_17 = 1/*True*/; _literal_17;})))
  {
    _match_0 = ((_enc__trait_Either_Either_t*) ({_enc__passive_Either_Left_t* _new_2 = _enc__constructor_Either_Left(_ctx);
                                                 _enc__type_init_Either_Left(_new_2, _enc__type_a, _enc__type_b);
                                                 _enc__method_Either_Left__init(_ctx, _new_2, _x_1); _new_2;}));
  }
  else
  {
    encore_arg_t _x_3;
    if ((({int64_t _extractoCheck_10;
           _extractoCheck_10 = ((_this != NULL) && ({int64_t _optionCheck_8;
                                                     option_t* _extractedOption_6 = _enc__method_Either_Left_Right(_ctx, _this);
                                                     _optionCheck_8 = ((JUST == (*_extractedOption_6).tag) && ({int64_t _varBinding_9;
                                                                                                                encore_arg_t _optionVal_7 = (*_extractedOption_6).val;
                                                                                                                _x_3 = _optionVal_7;
                                                                                                                _varBinding_9 = 1; _varBinding_9;})); _optionCheck_8;})); _extractoCheck_10;}) && ({int64_t _literal_11 = 1/*True*/; _literal_11;})))
    {
      _match_0 = ((_enc__trait_Either_Either_t*) ({value_t _tmp_4[] = {({ _x_3;})};
                                                   _enc__trait_Either_Either_t* _clos_5 = closure_call(_ctx, _enc__arg_f, _tmp_4).p; _clos_5;}));
    }
    else
    {
      printf("*** Runtime error: No matching clause was found ***\n");
      exit(1);
    };
  };
  return ((_enc__trait_Either_Either_t*) _match_0);
}


pony_type_t _enc__passive_Either_Left_type = {.id=_ENC__ID_Either_Left, .size=sizeof(_enc__passive_Either_Left_t), .trace=_enc__trace_Either_Left, .vtable=trait_method_selector};
