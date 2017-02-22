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


void _enc__type_init__main_Main(_enc__active__main_Main_t* _this, ... )
{
  va_list params;
  va_start(params, _this);
  va_end(params);
}


void _enc__trace__main_Main(pony_ctx_t* _ctx_arg, void* p)
{
  pony_ctx_t** _ctx = (&(_ctx_arg));
  _enc__active__main_Main_t* _this = p;
}


_enc__active__main_Main_t* _enc__constructor__main_Main(pony_ctx_t** _ctx, pony_type_t** runtimeType)
{
  _enc__active__main_Main_t* _this = ((_enc__active__main_Main_t*) encore_create((*_ctx), (&(_enc__active__main_Main_type))));
  return _this;
}


void* _enc__method__main_Main_init(pony_ctx_t** _ctx, _enc__active__main_Main_t* _this, pony_type_t** runtimeType)
{
  ENC_DTRACE3(METHOD_ENTRY, (uintptr_t)*_ctx, (uintptr_t)_this, "init");
  UNIT;
  ENC_DTRACE3(METHOD_EXIT, (uintptr_t)*_ctx, (uintptr_t)_this, "init");
  return UNIT;
}


future_t* _enc__method__main_Main_init_future(pony_ctx_t** _ctx, _enc__active__main_Main_t* _this, pony_type_t** runtimeType)
{
  future_t* _fut = future_mk(_ctx, ENCORE_PRIMITIVE);
  pony_gc_send((*_ctx));
  encore_trace_object((*_ctx), _fut, future_trace);
  pony_send_done((*_ctx));
  _enc__fut_msg__main_Main_init_t* msg = ((_enc__fut_msg__main_Main_init_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__fut_msg__main_Main_init_t)), _ENC__FUT_MSG__main_Main_init));
  msg->_fut = _fut;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
  return _fut;
}


void _enc__method__main_Main_init_one_way(pony_ctx_t** _ctx, _enc__active__main_Main_t* _this, pony_type_t** runtimeType)
{
  pony_gc_send((*_ctx));
  /* No tracing future for oneway msg */;
  pony_send_done((*_ctx));
  _enc__oneway_msg__main_Main_init_t* msg = ((_enc__oneway_msg__main_Main_init_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__oneway_msg__main_Main_init_t)), _ENC__ONEWAY_MSG__main_Main_init));
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
}


void* _enc__method__main_Main_main(pony_ctx_t** _ctx, _enc__active__main_Main_t* _this, pony_type_t** runtimeType, array_t* _enc__arg_args)
{
  ENC_DTRACE3(METHOD_ENTRY, (uintptr_t)*_ctx, (uintptr_t)_this, "main");
  /* let version = match (args[1]).to_int() with
                Just result => result
                Nothing => 0
              
    agents = parse_file(args[1])
    ui = match (args[2]).to_int() with
           Just 1 => true
           _ => false
         
    boxes = if args[3] == null then
              15
            else
              match (args[4]).to_int() with
                Just x => x
                _ => 15
              
in
  {();
   regions(agents, ui, boxes)} */;
  /* version = match (args[1]).to_int() with
  Just result => result
  Nothing => 0
 */;
  /* match (args[1]).to_int() with
  Just result => result
  Nothing => 0
 */;
  int64_t _literal_2 = 1;
  _enc__passive_String_String_t* _access_3 = array_get(_enc__arg_args, _literal_2).p;
  check_receiver(_access_3, ".", "args[1]", "to_int", "\"main.enc\" (line 23, column 33)");
  pony_type_t* _tmp_4[] = {};
  option_t* _sync_method_call_1 = _enc__method_String_String_to_int(_ctx, _access_3, NULL);
  int64_t _match_0;
  int64_t _result_5;
  if ((({int64_t _optionCheck_11;
         _optionCheck_11 = ((JUST == (*_sync_method_call_1).tag) && ({int64_t _varBinding_12;
                                                                      int64_t _optionVal_10 = (*_sync_method_call_1).val.i;
                                                                      _result_5 = _optionVal_10;
                                                                      _varBinding_12 = 1; _varBinding_12;})); _optionCheck_11;}) && ({int64_t _literal_13 = 1/*True*/; _literal_13;})))
  {
    _match_0 = ((int64_t) ({ _result_5;}));
  }
  else
  {
    if ((({int64_t _valueCheck_7;
           _valueCheck_7 = (({option_t* _option_8 = (&(DEFAULT_NOTHING)); _option_8;}) == _sync_method_call_1); _valueCheck_7;}) && ({int64_t _literal_9 = 1/*True*/; _literal_9;})))
    {
      _match_0 = ((int64_t) ({/* 0 */;
                              int64_t _literal_6 = 0; _literal_6;}));
    }
    else
    {
      fprintf(stderr, "*** Runtime error: No matching clause was found ***\n");
      exit(1);
    };
  };
  int64_t _version_14 = _match_0;
  /* agents = parse_file(args[1]) */;
  int64_t _literal_15 = 1;
  _enc__passive_String_String_t* _access_16 = array_get(_enc__arg_args, _literal_15).p;
  ENC_DTRACE2(FUNCTION_CALL, (uintptr_t)*_ctx, "Ped_util.Global_funs.parse_file");
  pony_type_t* _tmp_17[] = {};
  array_t* _fun_call_18 = _enc__global_fun__encore_libs_master_Ped_util_Global_funsparse_file(_ctx, NULL, _access_16);
  array_t* _agents_19 = _fun_call_18;
  /* ui = match (args[2]).to_int() with
  Just 1 => true
  _ => false
 */;
  /* match (args[2]).to_int() with
  Just 1 => true
  _ => false
 */;
  int64_t _literal_22 = 2;
  _enc__passive_String_String_t* _access_23 = array_get(_enc__arg_args, _literal_22).p;
  check_receiver(_access_23, ".", "args[2]", "to_int", "\"main.enc\" (line 27, column 25)");
  pony_type_t* _tmp_24[] = {};
  option_t* _sync_method_call_21 = _enc__method_String_String_to_int(_ctx, _access_23, NULL);
  int64_t _match_20;
  if ((({int64_t _optionCheck_31;
         _optionCheck_31 = ((JUST == (*_sync_method_call_21).tag) && ({int64_t _valueCheck_32;
                                                                       int64_t _optionVal_30 = (*_sync_method_call_21).val.i;
                                                                       _valueCheck_32 = (({int64_t _literal_33 = 1; _literal_33;}) == _optionVal_30); _valueCheck_32;})); _optionCheck_31;}) && ({int64_t _literal_34 = 1/*True*/; _literal_34;})))
  {
    _match_20 = ((int64_t) ({int64_t _literal_25 = 1/*True*/; _literal_25;}));
  }
  else
  {
    option_t* ___26;
    if ((({int64_t _varBinding_28;
           ___26 = _sync_method_call_21;
           _varBinding_28 = 1; _varBinding_28;}) && ({int64_t _literal_29 = 1/*True*/; _literal_29;})))
    {
      _match_20 = ((int64_t) ({int64_t _literal_27 = 0/*False*/; _literal_27;}));
    }
    else
    {
      fprintf(stderr, "*** Runtime error: No matching clause was found ***\n");
      exit(1);
    };
  };
  int64_t _ui_35 = _match_20;
  /* boxes = if args[3] == null then
  15
else
  match (args[4]).to_int() with
    Just x => x
    _ => 15
   */;
  /* if args[3] == null then
  15
else
  match (args[4]).to_int() with
    Just x => x
    _ => 15
   */;
  int64_t _ite_36;
  if (({int64_t _binop_40 = (({int64_t _literal_37 = 3;
                               _enc__passive_String_String_t* _access_38 = array_get(_enc__arg_args, _literal_37).p; _access_38;}) == ((_enc__passive_String_String_t*) ({_enc__passive_String_String_t* _literal_39 = NULL; _literal_39;}))); _binop_40;}))
  {
    /* 15 */;
    int64_t _literal_41 = 15;
    _ite_36 = ((int64_t) _literal_41);
  }
  else
  {
    /* match (args[4]).to_int() with
  Just x => x
  _ => 15
 */;
    int64_t _literal_44 = 4;
    _enc__passive_String_String_t* _access_45 = array_get(_enc__arg_args, _literal_44).p;
    check_receiver(_access_45, ".", "args[4]", "to_int", "\"main.enc\" (line 30, column 63)");
    pony_type_t* _tmp_46[] = {};
    option_t* _sync_method_call_43 = _enc__method_String_String_to_int(_ctx, _access_45, NULL);
    int64_t _match_42;
    int64_t _x_47;
    if ((({int64_t _optionCheck_53;
           _optionCheck_53 = ((JUST == (*_sync_method_call_43).tag) && ({int64_t _varBinding_54;
                                                                         int64_t _optionVal_52 = (*_sync_method_call_43).val.i;
                                                                         _x_47 = _optionVal_52;
                                                                         _varBinding_54 = 1; _varBinding_54;})); _optionCheck_53;}) && ({int64_t _literal_55 = 1/*True*/; _literal_55;})))
    {
      _match_42 = ((int64_t) ({ _x_47;}));
    }
    else
    {
      option_t* ___48;
      if ((({int64_t _varBinding_50;
             ___48 = _sync_method_call_43;
             _varBinding_50 = 1; _varBinding_50;}) && ({int64_t _literal_51 = 1/*True*/; _literal_51;})))
      {
        _match_42 = ((int64_t) ({int64_t _literal_49 = 15; _literal_49;}));
      }
      else
      {
        fprintf(stderr, "*** Runtime error: No matching clause was found ***\n");
        exit(1);
      };
    };
    _ite_36 = ((int64_t) _match_42);
  };
  int64_t _boxes_56 = _ite_36;
  /* () */;
  UNIT;
  /* regions(agents, ui, boxes) */;
  ENC_DTRACE2(FUNCTION_CALL, (uintptr_t)*_ctx, "Ped_util.Regions.regions");
  pony_type_t* _tmp_57[] = {};
  _enc__global_fun__encore_libs_master_Ped_util_Regionsregions(_ctx, NULL, _agents_19, _ui_35, _boxes_56);
  ENC_DTRACE3(METHOD_EXIT, (uintptr_t)*_ctx, (uintptr_t)_this, "main");
  return UNIT;
}


future_t* _enc__method__main_Main_main_future(pony_ctx_t** _ctx, _enc__active__main_Main_t* _this, pony_type_t** runtimeType, array_t* _enc__arg_args)
{
  future_t* _fut = future_mk(_ctx, ENCORE_PRIMITIVE);
  pony_gc_send((*_ctx));
  encore_trace_object((*_ctx), _enc__arg_args, array_trace);
  encore_trace_object((*_ctx), _fut, future_trace);
  pony_send_done((*_ctx));
  _enc__fut_msg__main_Main_main_t* msg = ((_enc__fut_msg__main_Main_main_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__fut_msg__main_Main_main_t)), _ENC__FUT_MSG__main_Main_main));
  msg->f1 = _enc__arg_args;
  msg->_fut = _fut;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
  return _fut;
}


void _enc__method__main_Main_main_one_way(pony_ctx_t** _ctx, _enc__active__main_Main_t* _this, pony_type_t** runtimeType, array_t* _enc__arg_args)
{
  pony_gc_send((*_ctx));
  encore_trace_object((*_ctx), _enc__arg_args, array_trace);
  /* No tracing future for oneway msg */;
  pony_send_done((*_ctx));
  _enc__oneway_msg__main_Main_main_t* msg = ((_enc__oneway_msg__main_Main_main_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__oneway_msg__main_Main_main_t)), _ENC__ONEWAY_MSG__main_Main_main));
  msg->f1 = _enc__arg_args;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
}


static void _enc__dispatch__main_Main(pony_ctx_t** _ctx, pony_actor_t* _a, pony_msg_t* _m)
{
  _enc__active__main_Main_t* _this = ((_enc__active__main_Main_t*) _a);
  switch (_m->id)
  {
    case _ENC__MSG_MAIN:
    {
      pony_main_msg_t* msg = ((pony_main_msg_t*) _m);
      _enc__method__main_Main_main(_ctx, ((_enc__active__main_Main_t*) _a), NULL, _init_argv(_ctx, msg->argc, msg->argv));
      break;
    }
    case _ENC__FUT_MSG__main_Main_init:
    {
      future_t* _fut = ((encore_fut_msg_t*) _m)->_fut;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      encore_trace_object((*_ctx), _fut, future_type.trace);
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      pony_type_t* methodTypeVars[] = {};
      future_fulfil(_ctx, _fut, ((encore_arg_t) {.p = _enc__method__main_Main_init(_ctx, _this, methodTypeVars)}));
      break;
    }
    case _ENC__ONEWAY_MSG__main_Main_init:
    {
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      /* Not tracing the future in a oneWay send */;
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      pony_type_t* methodTypeVars[] = {};
      _enc__method__main_Main_init(_ctx, _this, methodTypeVars);
      break;
    }
    default:
    {
      printf("error, got invalid id: %zd", _m->id);
    }
  };
}


pony_type_t _enc__active__main_Main_type = {.id=_ENC__ID__main_Main, .size=sizeof(_enc__active__main_Main_t), .trace=_enc__trace__main_Main, .dispatch=_enc__dispatch__main_Main, .vtable=trait_method_selector};
