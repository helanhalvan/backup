#include "header.h"


static void* trait_method_selector(int id)
{
  switch (id)
  {
    case _ENC__MSG__encore_libs_master_Ped_util_Box_Box_face_space:
    {
      return _enc__method__encore_libs_master_Ped_util_Box_Multi_Box_face_space;
      break;
    }
    case _ENC__MSG__encore_libs_master_Ped_util_Box_Box_face_add:
    {
      return _enc__method__encore_libs_master_Ped_util_Box_Multi_Box_face_add;
      break;
    }
    case _ENC__MSG__encore_libs_master_Ped_util_Box_Box_face_move:
    {
      return _enc__method__encore_libs_master_Ped_util_Box_Multi_Box_face_move;
      break;
    }
    case _ENC__MSG__encore_libs_master_Ped_util_Box_Box_face_external_move:
    {
      return _enc__method__encore_libs_master_Ped_util_Box_Multi_Box_face_external_move;
      break;
    }
    case _ENC__MSG__encore_libs_master_Ped_util_Box_Box_face_agents:
    {
      return _enc__method__encore_libs_master_Ped_util_Box_Multi_Box_face_agents;
      break;
    }
    case _ENC__MSG__encore_libs_master_Ped_util_Box_Box_face_start:
    {
      return _enc__method__encore_libs_master_Ped_util_Box_Multi_Box_face_start;
      break;
    }
    default:
    {
      printf("error, got invalid id: %d", id);
    }
  };
  return NULL;
}


void _enc__type_init__encore_libs_master_Ped_util_Box_Multi_Box_face(_enc__passive__encore_libs_master_Ped_util_Box_Multi_Box_face_t* this, ... )
{
  va_list params;
  va_start(params, this);
  va_end(params);
}


void _enc__trace__encore_libs_master_Ped_util_Box_Multi_Box_face(pony_ctx_t* _ctx_arg, void* p)
{
  pony_ctx_t** _ctx = (&(_ctx_arg));
  _enc__passive__encore_libs_master_Ped_util_Box_Multi_Box_face_t* _this = p;
  _enc__active__encore_libs_master_Ped_util_Box_Multi_Box_t* _enc__field_t = _this->_enc__field_t;
  encore_trace_actor((*_ctx), ((pony_actor_t*) _enc__field_t));
}


_enc__passive__encore_libs_master_Ped_util_Box_Multi_Box_face_t* _enc__constructor__encore_libs_master_Ped_util_Box_Multi_Box_face(pony_ctx_t** _ctx)
{
  _enc__passive__encore_libs_master_Ped_util_Box_Multi_Box_face_t* this = ((_enc__passive__encore_libs_master_Ped_util_Box_Multi_Box_face_t*) encore_alloc((*_ctx), sizeof(_enc__passive__encore_libs_master_Ped_util_Box_Multi_Box_face_t)));
  this->_enc__self_type = (&(_enc__passive__encore_libs_master_Ped_util_Box_Multi_Box_face_type));
  return this;
}


void* _enc__method__encore_libs_master_Ped_util_Box_Multi_Box_face__init(pony_ctx_t** _ctx, _enc__passive__encore_libs_master_Ped_util_Box_Multi_Box_face_t* _this, _enc__active__encore_libs_master_Ped_util_Box_Multi_Box_t* _enc__arg_t)
{
  /* this.t = t */;
  (*({ _this;}))._enc__field_t = _enc__arg_t;
  return UNIT;
}


future_t* _enc__method__encore_libs_master_Ped_util_Box_Multi_Box_face_space(pony_ctx_t** _ctx, _enc__passive__encore_libs_master_Ped_util_Box_Multi_Box_face_t* _this)
{
  /* this.t.space() */;
  _enc__active__encore_libs_master_Ped_util_Box_Multi_Box_t* _fieldacc_1 = (*_this)._enc__field_t;
  check_receiver(_fieldacc_1, ".", "this.t", "space", "\"./encore-libs-master/Ped_util/Box.enc\" (line 41, column 46)");
  future_t* _fut_0 = _enc__method__encore_libs_master_Ped_util_Box_Multi_Box_space_future(_ctx, _fieldacc_1);
  return ((future_t*) _fut_0);
}


void* _enc__method__encore_libs_master_Ped_util_Box_Multi_Box_face_add(pony_ctx_t** _ctx, _enc__passive__encore_libs_master_Ped_util_Box_Multi_Box_face_t* _this, _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t* _enc__arg_a)
{
  /* this.t.add(a) */;
  _enc__active__encore_libs_master_Ped_util_Box_Multi_Box_t* _fieldacc_1 = (*_this)._enc__field_t;
  check_receiver(_fieldacc_1, ".", "this.t", "add", "\"./encore-libs-master/Ped_util/Box.enc\" (line 42, column 30)");
  future_t* _fut_0 = _enc__method__encore_libs_master_Ped_util_Box_Multi_Box_add_future(_ctx, _fieldacc_1, _enc__arg_a);
  return UNIT;
}


future_t* _enc__method__encore_libs_master_Ped_util_Box_Multi_Box_face_move(pony_ctx_t** _ctx, _enc__passive__encore_libs_master_Ped_util_Box_Multi_Box_face_t* _this)
{
  /* this.t.move() */;
  _enc__active__encore_libs_master_Ped_util_Box_Multi_Box_t* _fieldacc_1 = (*_this)._enc__field_t;
  check_receiver(_fieldacc_1, ".", "this.t", "move", "\"./encore-libs-master/Ped_util/Box.enc\" (line 43, column 27)");
  future_t* _fut_0 = _enc__method__encore_libs_master_Ped_util_Box_Multi_Box_move_future(_ctx, _fieldacc_1);
  return ((future_t*) _fut_0);
}


future_t* _enc__method__encore_libs_master_Ped_util_Box_Multi_Box_face_external_move(pony_ctx_t** _ctx, _enc__passive__encore_libs_master_Ped_util_Box_Multi_Box_face_t* _this, _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t* _enc__arg_a, tuple_t* _enc__arg_b)
{
  /* this.t.external_move(a, b) */;
  _enc__active__encore_libs_master_Ped_util_Box_Multi_Box_t* _fieldacc_1 = (*_this)._enc__field_t;
  check_receiver(_fieldacc_1, ".", "this.t", "external_move", "\"./encore-libs-master/Ped_util/Box.enc\" (line 44, column 57)");
  future_t* _fut_0 = _enc__method__encore_libs_master_Ped_util_Box_Multi_Box_external_move_future(_ctx, _fieldacc_1, _enc__arg_a, _enc__arg_b);
  return ((future_t*) _fut_0);
}


future_t* _enc__method__encore_libs_master_Ped_util_Box_Multi_Box_face_agents(pony_ctx_t** _ctx, _enc__passive__encore_libs_master_Ped_util_Box_Multi_Box_face_t* _this)
{
  /* this.t.agents() */;
  _enc__active__encore_libs_master_Ped_util_Box_Multi_Box_t* _fieldacc_1 = (*_this)._enc__field_t;
  check_receiver(_fieldacc_1, ".", "this.t", "agents", "\"./encore-libs-master/Ped_util/Box.enc\" (line 45, column 37)");
  future_t* _fut_0 = _enc__method__encore_libs_master_Ped_util_Box_Multi_Box_agents_future(_ctx, _fieldacc_1);
  return ((future_t*) _fut_0);
}


void* _enc__method__encore_libs_master_Ped_util_Box_Multi_Box_face_start(pony_ctx_t** _ctx, _enc__passive__encore_libs_master_Ped_util_Box_Multi_Box_face_t* _this)
{
  /* print("multi_start\n") */;
  char* _literal_0 = "multi_start\n";
  printf("%s", _literal_0);
  return UNIT;
}


pony_type_t _enc__passive__encore_libs_master_Ped_util_Box_Multi_Box_face_type = {.id=_ENC__ID__encore_libs_master_Ped_util_Box_Multi_Box_face, .size=sizeof(_enc__passive__encore_libs_master_Ped_util_Box_Multi_Box_face_t), .trace=_enc__trace__encore_libs_master_Ped_util_Box_Multi_Box_face, .vtable=trait_method_selector};
