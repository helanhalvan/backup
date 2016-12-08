#include "header.h"


static void* trait_method_selector(int id)
{
  switch (id)
  {
    case _ENC__MSG__encore_libs_master_Ped_util_Box_Box_face_space:
    {
      return _enc__method__encore_libs_master_Ped_util_Box_Single_Box_face_space;
      break;
    }
    case _ENC__MSG__encore_libs_master_Ped_util_Box_Box_face_add:
    {
      return _enc__method__encore_libs_master_Ped_util_Box_Single_Box_face_add;
      break;
    }
    case _ENC__MSG__encore_libs_master_Ped_util_Box_Box_face_move:
    {
      return _enc__method__encore_libs_master_Ped_util_Box_Single_Box_face_move;
      break;
    }
    case _ENC__MSG__encore_libs_master_Ped_util_Box_Box_face_external_move:
    {
      return _enc__method__encore_libs_master_Ped_util_Box_Single_Box_face_external_move;
      break;
    }
    case _ENC__MSG__encore_libs_master_Ped_util_Box_Box_face_agents:
    {
      return _enc__method__encore_libs_master_Ped_util_Box_Single_Box_face_agents;
      break;
    }
    case _ENC__MSG__encore_libs_master_Ped_util_Box_Box_face_start:
    {
      return _enc__method__encore_libs_master_Ped_util_Box_Single_Box_face_start;
      break;
    }
    case _ENC__MSG__encore_libs_master_Ped_util_Box_Box_face_done:
    {
      return _enc__method__encore_libs_master_Ped_util_Box_Single_Box_face_done;
      break;
    }
    default:
    {
      printf("error, got invalid id: %d", id);
    }
  };
  return NULL;
}


void _enc__type_init__encore_libs_master_Ped_util_Box_Single_Box_face(_enc__passive__encore_libs_master_Ped_util_Box_Single_Box_face_t* this, ... )
{
  va_list params;
  va_start(params, this);
  va_end(params);
}


void _enc__trace__encore_libs_master_Ped_util_Box_Single_Box_face(pony_ctx_t* _ctx_arg, void* p)
{
  pony_ctx_t** _ctx = (&(_ctx_arg));
  _enc__passive__encore_libs_master_Ped_util_Box_Single_Box_face_t* _this = p;
  _enc__active__encore_libs_master_Ped_util_Box_Single_Box_t* _enc__field_t = _this->_enc__field_t;
  encore_trace_actor((*_ctx), ((pony_actor_t*) _enc__field_t));
}


_enc__passive__encore_libs_master_Ped_util_Box_Single_Box_face_t* _enc__constructor__encore_libs_master_Ped_util_Box_Single_Box_face(pony_ctx_t** _ctx)
{
  _enc__passive__encore_libs_master_Ped_util_Box_Single_Box_face_t* this = ((_enc__passive__encore_libs_master_Ped_util_Box_Single_Box_face_t*) encore_alloc((*_ctx), sizeof(_enc__passive__encore_libs_master_Ped_util_Box_Single_Box_face_t)));
  this->_enc__self_type = (&(_enc__passive__encore_libs_master_Ped_util_Box_Single_Box_face_type));
  return this;
}


void* _enc__method__encore_libs_master_Ped_util_Box_Single_Box_face__init(pony_ctx_t** _ctx, _enc__passive__encore_libs_master_Ped_util_Box_Single_Box_face_t* _this, tuple_t* _enc__arg_space, _enc__trait__encore_libs_master_Ped_util_Box_Box_face_t* _enc__arg_toplevel)
{
  /* this.t = new Single_Box(space, toplevel) */;
  _enc__active__encore_libs_master_Ped_util_Box_Single_Box_t* _new_0 = _enc__constructor__encore_libs_master_Ped_util_Box_Single_Box(_ctx);
  _enc__type_init__encore_libs_master_Ped_util_Box_Single_Box(_new_0);
  _enc__method__encore_libs_master_Ped_util_Box_Single_Box__init_one_way(_ctx, _new_0, _enc__arg_space, _enc__arg_toplevel);
  (*({ _this;}))._enc__field_t = _new_0;
  return UNIT;
}


future_t* _enc__method__encore_libs_master_Ped_util_Box_Single_Box_face_space(pony_ctx_t** _ctx, _enc__passive__encore_libs_master_Ped_util_Box_Single_Box_face_t* _this)
{
  /* this.t.space() */;
  _enc__active__encore_libs_master_Ped_util_Box_Single_Box_t* _fieldacc_1 = (*_this)._enc__field_t;
  check_receiver(_fieldacc_1, ".", "this.t", "space", "\"./encore-libs-master/Ped_util/Box.enc\" (line 60, column 46)");
  future_t* _fut_0 = _enc__method__encore_libs_master_Ped_util_Box_Single_Box_space_future(_ctx, _fieldacc_1);
  return ((future_t*) _fut_0);
}


void* _enc__method__encore_libs_master_Ped_util_Box_Single_Box_face_add(pony_ctx_t** _ctx, _enc__passive__encore_libs_master_Ped_util_Box_Single_Box_face_t* _this, _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t* _enc__arg_a)
{
  /* this.t.add(a) */;
  _enc__active__encore_libs_master_Ped_util_Box_Single_Box_t* _fieldacc_1 = (*_this)._enc__field_t;
  check_receiver(_fieldacc_1, ".", "this.t", "add", "\"./encore-libs-master/Ped_util/Box.enc\" (line 61, column 30)");
  future_t* _fut_0 = _enc__method__encore_libs_master_Ped_util_Box_Single_Box_add_future(_ctx, _fieldacc_1, _enc__arg_a);
  return UNIT;
}


future_t* _enc__method__encore_libs_master_Ped_util_Box_Single_Box_face_move(pony_ctx_t** _ctx, _enc__passive__encore_libs_master_Ped_util_Box_Single_Box_face_t* _this)
{
  /* this.t.move() */;
  _enc__active__encore_libs_master_Ped_util_Box_Single_Box_t* _fieldacc_1 = (*_this)._enc__field_t;
  check_receiver(_fieldacc_1, ".", "this.t", "move", "\"./encore-libs-master/Ped_util/Box.enc\" (line 62, column 27)");
  future_t* _fut_0 = _enc__method__encore_libs_master_Ped_util_Box_Single_Box_move_future(_ctx, _fieldacc_1);
  return ((future_t*) _fut_0);
}


future_t* _enc__method__encore_libs_master_Ped_util_Box_Single_Box_face_external_move(pony_ctx_t** _ctx, _enc__passive__encore_libs_master_Ped_util_Box_Single_Box_face_t* _this, _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t* _enc__arg_a, tuple_t* _enc__arg_b)
{
  /* this.t.external_move(a, b) */;
  _enc__active__encore_libs_master_Ped_util_Box_Single_Box_t* _fieldacc_1 = (*_this)._enc__field_t;
  check_receiver(_fieldacc_1, ".", "this.t", "external_move", "\"./encore-libs-master/Ped_util/Box.enc\" (line 63, column 56)");
  future_t* _fut_0 = _enc__method__encore_libs_master_Ped_util_Box_Single_Box_external_move_future(_ctx, _fieldacc_1, _enc__arg_a, _enc__arg_b);
  return ((future_t*) _fut_0);
}


future_t* _enc__method__encore_libs_master_Ped_util_Box_Single_Box_face_agents(pony_ctx_t** _ctx, _enc__passive__encore_libs_master_Ped_util_Box_Single_Box_face_t* _this)
{
  /* this.t.agents() */;
  _enc__active__encore_libs_master_Ped_util_Box_Single_Box_t* _fieldacc_1 = (*_this)._enc__field_t;
  check_receiver(_fieldacc_1, ".", "this.t", "agents", "\"./encore-libs-master/Ped_util/Box.enc\" (line 64, column 37)");
  future_t* _fut_0 = _enc__method__encore_libs_master_Ped_util_Box_Single_Box_agents_future(_ctx, _fieldacc_1);
  return ((future_t*) _fut_0);
}


void* _enc__method__encore_libs_master_Ped_util_Box_Single_Box_face_start(pony_ctx_t** _ctx, _enc__passive__encore_libs_master_Ped_util_Box_Single_Box_face_t* _this)
{
  /* print("single_start\n") */;
  char* _literal_0 = "single_start\n";
  printf("%s", _literal_0);
  /* this.t.start() */;
  _enc__active__encore_libs_master_Ped_util_Box_Single_Box_t* _fieldacc_2 = (*_this)._enc__field_t;
  check_receiver(_fieldacc_2, ".", "this.t", "start", "\"./encore-libs-master/Ped_util/Box.enc\" (line 65, column 49)");
  future_t* _fut_1 = _enc__method__encore_libs_master_Ped_util_Box_Single_Box_start_future(_ctx, _fieldacc_2);
  return UNIT;
}


void* _enc__method__encore_libs_master_Ped_util_Box_Single_Box_face_done(pony_ctx_t** _ctx, _enc__passive__encore_libs_master_Ped_util_Box_Single_Box_face_t* _this)
{
  /* this.t.done() */;
  _enc__active__encore_libs_master_Ped_util_Box_Single_Box_t* _fieldacc_1 = (*_this)._enc__field_t;
  check_receiver(_fieldacc_1, ".", "this.t", "done", "\"./encore-libs-master/Ped_util/Box.enc\" (line 66, column 24)");
  future_t* _fut_0 = _enc__method__encore_libs_master_Ped_util_Box_Single_Box_done_future(_ctx, _fieldacc_1);
  return UNIT;
}


pony_type_t _enc__passive__encore_libs_master_Ped_util_Box_Single_Box_face_type = {.id=_ENC__ID__encore_libs_master_Ped_util_Box_Single_Box_face, .size=sizeof(_enc__passive__encore_libs_master_Ped_util_Box_Single_Box_face_t), .trace=_enc__trace__encore_libs_master_Ped_util_Box_Single_Box_face, .vtable=trait_method_selector};
