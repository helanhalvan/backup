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


void _enc__type_init__encore_libs_master_Ped_util_Quad_tree_Quad(_enc__passive__encore_libs_master_Ped_util_Quad_tree_Quad_t* _this, ... )
{
  va_list params;
  va_start(params, _this);
  va_end(params);
}


void _enc__trace__encore_libs_master_Ped_util_Quad_tree_Quad(pony_ctx_t* _ctx_arg, void* p)
{
  pony_ctx_t** _ctx = (&(_ctx_arg));
  _enc__passive__encore_libs_master_Ped_util_Quad_tree_Quad_t* _this = p;
  array_t* _enc__field_agent = _this->_enc__field_agent;
  encore_trace_object((*_ctx), _enc__field_agent, array_trace);
  _enc__passive__encore_libs_master_Ped_util_Quad_tree_Quad_t* _enc__field_top_right = _this->_enc__field_top_right;
  encore_trace_object((*_ctx), _enc__field_top_right, _enc__trace__encore_libs_master_Ped_util_Quad_tree_Quad);
  _enc__passive__encore_libs_master_Ped_util_Quad_tree_Quad_t* _enc__field_top_left = _this->_enc__field_top_left;
  encore_trace_object((*_ctx), _enc__field_top_left, _enc__trace__encore_libs_master_Ped_util_Quad_tree_Quad);
  _enc__passive__encore_libs_master_Ped_util_Quad_tree_Quad_t* _enc__field_bottom_right = _this->_enc__field_bottom_right;
  encore_trace_object((*_ctx), _enc__field_bottom_right, _enc__trace__encore_libs_master_Ped_util_Quad_tree_Quad);
  _enc__passive__encore_libs_master_Ped_util_Quad_tree_Quad_t* _enc__field_bottom_left = _this->_enc__field_bottom_left;
  encore_trace_object((*_ctx), _enc__field_bottom_left, _enc__trace__encore_libs_master_Ped_util_Quad_tree_Quad);
  int64_t _enc__field_max_x = _this->_enc__field_max_x;
  /* Not tracing field '_enc__field_max_x' */;
  int64_t _enc__field_max_y = _this->_enc__field_max_y;
  /* Not tracing field '_enc__field_max_y' */;
  int64_t _enc__field_min_x = _this->_enc__field_min_x;
  /* Not tracing field '_enc__field_min_x' */;
  int64_t _enc__field_min_y = _this->_enc__field_min_y;
  /* Not tracing field '_enc__field_min_y' */;
  int64_t _enc__field_size = _this->_enc__field_size;
  /* Not tracing field '_enc__field_size' */;
}


_enc__passive__encore_libs_master_Ped_util_Quad_tree_Quad_t* _enc__constructor__encore_libs_master_Ped_util_Quad_tree_Quad(pony_ctx_t** _ctx, pony_type_t** runtimeType)
{
  _enc__passive__encore_libs_master_Ped_util_Quad_tree_Quad_t* _this = ((_enc__passive__encore_libs_master_Ped_util_Quad_tree_Quad_t*) encore_alloc((*_ctx), sizeof(_enc__passive__encore_libs_master_Ped_util_Quad_tree_Quad_t)));
  _this->_enc__self_type = (&(_enc__passive__encore_libs_master_Ped_util_Quad_tree_Quad_type));
  return _this;
}


void* _enc__method__encore_libs_master_Ped_util_Quad_tree_Quad_init(pony_ctx_t** _ctx, _enc__passive__encore_libs_master_Ped_util_Quad_tree_Quad_t* _this, pony_type_t** runtimeType, int64_t _enc__arg_max_x, int64_t _enc__arg_max_y, int64_t _enc__arg_min_x, int64_t _enc__arg_min_y)
{
  ENC_DTRACE3(METHOD_ENTRY, (uintptr_t)*_ctx, (uintptr_t)_this, "init");
  /* this.max_x = max_x */;
  (*({ENC_DTRACE3(FIELD_WRITE, (uintptr_t)*_ctx, (uintptr_t)_this, "max_x"); _this;}))._enc__field_max_x = _enc__arg_max_x;
  /* this.max_y = max_y */;
  (*({ENC_DTRACE3(FIELD_WRITE, (uintptr_t)*_ctx, (uintptr_t)_this, "max_y"); _this;}))._enc__field_max_y = _enc__arg_max_y;
  /* this.min_x = min_x */;
  (*({ENC_DTRACE3(FIELD_WRITE, (uintptr_t)*_ctx, (uintptr_t)_this, "min_x"); _this;}))._enc__field_min_x = _enc__arg_min_x;
  /* this.min_y = min_y */;
  (*({ENC_DTRACE3(FIELD_WRITE, (uintptr_t)*_ctx, (uintptr_t)_this, "min_y"); _this;}))._enc__field_min_y = _enc__arg_min_y;
  /* this.size = 0 */;
  int64_t _literal_0 = 0;
  (*({ENC_DTRACE3(FIELD_WRITE, (uintptr_t)*_ctx, (uintptr_t)_this, "size"); _this;}))._enc__field_size = _literal_0;
  ENC_DTRACE3(METHOD_EXIT, (uintptr_t)*_ctx, (uintptr_t)_this, "init");
  return UNIT;
}


void* _enc__method__encore_libs_master_Ped_util_Quad_tree_Quad_add(pony_ctx_t** _ctx, _enc__passive__encore_libs_master_Ped_util_Quad_tree_Quad_t* _this, pony_type_t** runtimeType, int64_t _enc__arg_x, int64_t _enc__arg_y)
{
  ENC_DTRACE3(METHOD_ENTRY, (uintptr_t)*_ctx, (uintptr_t)_this, "add");
  /* if x <= this.max_x and x >= this.min_x and y <= this.max_y and y >= this.min_y then
  if this.agent == null and this.top_right == null then
    {this.agent = new [int](2);
     this.agent[0] = x;
     this.agent[1] = y;
     this.size = 1}
  else
    {if this.top_right == null then
       {val dx = this.max_x - this.min_x / 2;
        val dy = this.max_y - this.min_y / 2;
        this.top_right = new Quad(this.max_x, 
                                  this.max_y, 
                                  this.min_x + dx + 1, 
                                  this.min_y + dy + 1);
        this.top_left = new Quad(this.min_x + dx, 
                                 this.max_y, 
                                 this.min_x, 
                                 this.min_y + dy + 1);
        this.bottom_right = new Quad(this.max_x, 
                                     this.min_y + dy, 
                                     this.min_x + dx + 1, 
                                     this.min_y);
        this.bottom_left = new Quad(this.min_x + dx, 
                                    this.min_y + dy, 
                                    this.min_x, 
                                    this.min_y);
        this.size = 1;
        this.recur(this.agent[0], this.agent[1]).add(this.agent[0], 
                                                     this.agent[1]);
        this.agent = null};
     this.size = this.size + 1;
     this.recur(x, y).add(x, y)}
else
  print("OUTSIDE! {} {} {} {} {} {}\n", 
        x, 
        y, 
        this.max_x, 
        this.min_x, 
        this.max_y, 
        this.min_y) */;
  void* _ite_0;
  if (({int64_t _binop_11 = (({int64_t _binop_8 = (({int64_t _binop_5 = (({int64_t _binop_2 = (({ _enc__arg_x;}) <= ({ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "max_x");
                                                                                                                      int64_t _fieldacc_1 = (*_this)._enc__field_max_x; _fieldacc_1;})); _binop_2;}) && ({int64_t _binop_4 = (({ _enc__arg_x;}) >= ({ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "min_x");
                                                                                                                                                                                                                                                     int64_t _fieldacc_3 = (*_this)._enc__field_min_x; _fieldacc_3;})); _binop_4;})); _binop_5;}) && ({int64_t _binop_7 = (({ _enc__arg_y;}) <= ({ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "max_y");
                                                                                                                                                                                                                                                                                                                                                                                                  int64_t _fieldacc_6 = (*_this)._enc__field_max_y; _fieldacc_6;})); _binop_7;})); _binop_8;}) && ({int64_t _binop_10 = (({ _enc__arg_y;}) >= ({ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "min_y");
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                int64_t _fieldacc_9 = (*_this)._enc__field_min_y; _fieldacc_9;})); _binop_10;})); _binop_11;}))
  {
    /* if this.agent == null and this.top_right == null then
  {this.agent = new [int](2);
   this.agent[0] = x;
   this.agent[1] = y;
   this.size = 1}
else
  {if this.top_right == null then
     {val dx = this.max_x - this.min_x / 2;
      val dy = this.max_y - this.min_y / 2;
      this.top_right = new Quad(this.max_x, 
                                this.max_y, 
                                this.min_x + dx + 1, 
                                this.min_y + dy + 1);
      this.top_left = new Quad(this.min_x + dx, 
                               this.max_y, 
                               this.min_x, 
                               this.min_y + dy + 1);
      this.bottom_right = new Quad(this.max_x, 
                                   this.min_y + dy, 
                                   this.min_x + dx + 1, 
                                   this.min_y);
      this.bottom_left = new Quad(this.min_x + dx, 
                                  this.min_y + dy, 
                                  this.min_x, 
                                  this.min_y);
      this.size = 1;
      this.recur(this.agent[0], this.agent[1]).add(this.agent[0], 
                                                   this.agent[1]);
      this.agent = null};
   this.size = this.size + 1;
   this.recur(x, y).add(x, y)} */;
    void* _ite_12;
    if (({int64_t _binop_19 = (({int64_t _binop_15 = (({ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "agent");
                                                        array_t* _fieldacc_13 = (*_this)._enc__field_agent; _fieldacc_13;}) == ({array_t* _literal_14 = NULL; _literal_14;})); _binop_15;}) && ({int64_t _binop_18 = (({ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "top_right");
                                                                                                                                                                                                                        _enc__passive__encore_libs_master_Ped_util_Quad_tree_Quad_t* _fieldacc_16 = (*_this)._enc__field_top_right; _fieldacc_16;}) == ((_enc__passive__encore_libs_master_Ped_util_Quad_tree_Quad_t*) ({_enc__passive__encore_libs_master_Ped_util_Quad_tree_Quad_t* _literal_17 = NULL; _literal_17;}))); _binop_18;})); _binop_19;}))
    {
      /* this.agent = new [int](2) */;
      int64_t _literal_21 = 2;
      array_t* _array_20 = array_mk(_ctx, _literal_21, ENCORE_PRIMITIVE);
      (*({ENC_DTRACE3(FIELD_WRITE, (uintptr_t)*_ctx, (uintptr_t)_this, "agent"); _this;}))._enc__field_agent = _array_20;
      /* this.agent[0] = x */;
      ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "agent");
      array_t* _fieldacc_22 = (*_this)._enc__field_agent;
      int64_t _literal_23 = 0;
      array_set(_fieldacc_22, _literal_23, ((encore_arg_t) {.i = _enc__arg_x}));
      /* this.agent[1] = y */;
      ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "agent");
      array_t* _fieldacc_24 = (*_this)._enc__field_agent;
      int64_t _literal_25 = 1;
      array_set(_fieldacc_24, _literal_25, ((encore_arg_t) {.i = _enc__arg_y}));
      /* this.size = 1 */;
      int64_t _literal_26 = 1;
      (*({ENC_DTRACE3(FIELD_WRITE, (uintptr_t)*_ctx, (uintptr_t)_this, "size"); _this;}))._enc__field_size = _literal_26;
      _ite_12 = ((void*) UNIT);
    }
    else
    {
      /* if this.top_right == null then
  {val dx = this.max_x - this.min_x / 2;
   val dy = this.max_y - this.min_y / 2;
   this.top_right = new Quad(this.max_x, 
                             this.max_y, 
                             this.min_x + dx + 1, 
                             this.min_y + dy + 1);
   this.top_left = new Quad(this.min_x + dx, 
                            this.max_y, 
                            this.min_x, 
                            this.min_y + dy + 1);
   this.bottom_right = new Quad(this.max_x, 
                                this.min_y + dy, 
                                this.min_x + dx + 1, 
                                this.min_y);
   this.bottom_left = new Quad(this.min_x + dx, 
                               this.min_y + dy, 
                               this.min_x, 
                               this.min_y);
   this.size = 1;
   this.recur(this.agent[0], this.agent[1]).add(this.agent[0], 
                                                this.agent[1]);
   this.agent = null} */;
      void* _ite_27;
      if (({int64_t _binop_30 = (({ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "top_right");
                                   _enc__passive__encore_libs_master_Ped_util_Quad_tree_Quad_t* _fieldacc_28 = (*_this)._enc__field_top_right; _fieldacc_28;}) == ((_enc__passive__encore_libs_master_Ped_util_Quad_tree_Quad_t*) ({_enc__passive__encore_libs_master_Ped_util_Quad_tree_Quad_t* _literal_29 = NULL; _literal_29;}))); _binop_30;}))
      {
        /* val dx = this.max_x - this.min_x / 2 */;
        /* dx = this.max_x - this.min_x / 2 */;
        int64_t _binop_35 = (({int64_t _binop_33 = (({ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "max_x");
                                                      int64_t _fieldacc_31 = (*_this)._enc__field_max_x; _fieldacc_31;}) - ({ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "min_x");
                                                                                                                             int64_t _fieldacc_32 = (*_this)._enc__field_min_x; _fieldacc_32;})); _binop_33;}) / ({int64_t _literal_34 = 2; _literal_34;}));
        int64_t _dx_36 = _binop_35;
        /* val dy = this.max_y - this.min_y / 2 */;
        /* dy = this.max_y - this.min_y / 2 */;
        int64_t _binop_41 = (({int64_t _binop_39 = (({ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "max_y");
                                                      int64_t _fieldacc_37 = (*_this)._enc__field_max_y; _fieldacc_37;}) - ({ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "min_y");
                                                                                                                             int64_t _fieldacc_38 = (*_this)._enc__field_min_y; _fieldacc_38;})); _binop_39;}) / ({int64_t _literal_40 = 2; _literal_40;}));
        int64_t _dy_42 = _binop_41;
        /* this.top_right = new Quad(this.max_x, 
                          this.max_y, 
                          this.min_x + dx + 1, 
                          this.min_y + dy + 1) */;
        _enc__passive__encore_libs_master_Ped_util_Quad_tree_Quad_t* _new_43 = _enc__constructor__encore_libs_master_Ped_util_Quad_tree_Quad(_ctx, NULL);
        ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "max_x");
        int64_t _fieldacc_44 = (*_this)._enc__field_max_x;
        ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "max_y");
        int64_t _fieldacc_45 = (*_this)._enc__field_max_y;
        int64_t _binop_49 = (({int64_t _binop_47 = (({ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "min_x");
                                                      int64_t _fieldacc_46 = (*_this)._enc__field_min_x; _fieldacc_46;}) + ({ _dx_36;})); _binop_47;}) + ({int64_t _literal_48 = 1; _literal_48;}));
        int64_t _binop_53 = (({int64_t _binop_51 = (({ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "min_y");
                                                      int64_t _fieldacc_50 = (*_this)._enc__field_min_y; _fieldacc_50;}) + ({ _dy_42;})); _binop_51;}) + ({int64_t _literal_52 = 1; _literal_52;}));
        pony_type_t* _tmp_54[] = {};
        _enc__type_init__encore_libs_master_Ped_util_Quad_tree_Quad(_new_43);
        _enc__method__encore_libs_master_Ped_util_Quad_tree_Quad_init(_ctx, _new_43, NULL, _fieldacc_44, _fieldacc_45, _binop_49, _binop_53);
        (*({ENC_DTRACE3(FIELD_WRITE, (uintptr_t)*_ctx, (uintptr_t)_this, "top_right"); _this;}))._enc__field_top_right = _new_43;
        /* this.top_left = new Quad(this.min_x + dx, 
                         this.max_y, 
                         this.min_x, 
                         this.min_y + dy + 1) */;
        _enc__passive__encore_libs_master_Ped_util_Quad_tree_Quad_t* _new_55 = _enc__constructor__encore_libs_master_Ped_util_Quad_tree_Quad(_ctx, NULL);
        int64_t _binop_57 = (({ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "min_x");
                               int64_t _fieldacc_56 = (*_this)._enc__field_min_x; _fieldacc_56;}) + ({ _dx_36;}));
        ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "max_y");
        int64_t _fieldacc_58 = (*_this)._enc__field_max_y;
        ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "min_x");
        int64_t _fieldacc_59 = (*_this)._enc__field_min_x;
        int64_t _binop_63 = (({int64_t _binop_61 = (({ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "min_y");
                                                      int64_t _fieldacc_60 = (*_this)._enc__field_min_y; _fieldacc_60;}) + ({ _dy_42;})); _binop_61;}) + ({int64_t _literal_62 = 1; _literal_62;}));
        pony_type_t* _tmp_64[] = {};
        _enc__type_init__encore_libs_master_Ped_util_Quad_tree_Quad(_new_55);
        _enc__method__encore_libs_master_Ped_util_Quad_tree_Quad_init(_ctx, _new_55, NULL, _binop_57, _fieldacc_58, _fieldacc_59, _binop_63);
        (*({ENC_DTRACE3(FIELD_WRITE, (uintptr_t)*_ctx, (uintptr_t)_this, "top_left"); _this;}))._enc__field_top_left = _new_55;
        /* this.bottom_right = new Quad(this.max_x, 
                             this.min_y + dy, 
                             this.min_x + dx + 1, 
                             this.min_y) */;
        _enc__passive__encore_libs_master_Ped_util_Quad_tree_Quad_t* _new_65 = _enc__constructor__encore_libs_master_Ped_util_Quad_tree_Quad(_ctx, NULL);
        ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "max_x");
        int64_t _fieldacc_66 = (*_this)._enc__field_max_x;
        int64_t _binop_68 = (({ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "min_y");
                               int64_t _fieldacc_67 = (*_this)._enc__field_min_y; _fieldacc_67;}) + ({ _dy_42;}));
        int64_t _binop_72 = (({int64_t _binop_70 = (({ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "min_x");
                                                      int64_t _fieldacc_69 = (*_this)._enc__field_min_x; _fieldacc_69;}) + ({ _dx_36;})); _binop_70;}) + ({int64_t _literal_71 = 1; _literal_71;}));
        ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "min_y");
        int64_t _fieldacc_73 = (*_this)._enc__field_min_y;
        pony_type_t* _tmp_74[] = {};
        _enc__type_init__encore_libs_master_Ped_util_Quad_tree_Quad(_new_65);
        _enc__method__encore_libs_master_Ped_util_Quad_tree_Quad_init(_ctx, _new_65, NULL, _fieldacc_66, _binop_68, _binop_72, _fieldacc_73);
        (*({ENC_DTRACE3(FIELD_WRITE, (uintptr_t)*_ctx, (uintptr_t)_this, "bottom_right"); _this;}))._enc__field_bottom_right = _new_65;
        /* this.bottom_left = new Quad(this.min_x + dx, 
                            this.min_y + dy, 
                            this.min_x, 
                            this.min_y) */;
        _enc__passive__encore_libs_master_Ped_util_Quad_tree_Quad_t* _new_75 = _enc__constructor__encore_libs_master_Ped_util_Quad_tree_Quad(_ctx, NULL);
        int64_t _binop_77 = (({ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "min_x");
                               int64_t _fieldacc_76 = (*_this)._enc__field_min_x; _fieldacc_76;}) + ({ _dx_36;}));
        int64_t _binop_79 = (({ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "min_y");
                               int64_t _fieldacc_78 = (*_this)._enc__field_min_y; _fieldacc_78;}) + ({ _dy_42;}));
        ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "min_x");
        int64_t _fieldacc_80 = (*_this)._enc__field_min_x;
        ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "min_y");
        int64_t _fieldacc_81 = (*_this)._enc__field_min_y;
        pony_type_t* _tmp_82[] = {};
        _enc__type_init__encore_libs_master_Ped_util_Quad_tree_Quad(_new_75);
        _enc__method__encore_libs_master_Ped_util_Quad_tree_Quad_init(_ctx, _new_75, NULL, _binop_77, _binop_79, _fieldacc_80, _fieldacc_81);
        (*({ENC_DTRACE3(FIELD_WRITE, (uintptr_t)*_ctx, (uintptr_t)_this, "bottom_left"); _this;}))._enc__field_bottom_left = _new_75;
        /* this.size = 1 */;
        int64_t _literal_83 = 1;
        (*({ENC_DTRACE3(FIELD_WRITE, (uintptr_t)*_ctx, (uintptr_t)_this, "size"); _this;}))._enc__field_size = _literal_83;
        /* this.recur(this.agent[0], this.agent[1]).add(this.agent[0], 
                                             this.agent[1]) */;
        check_receiver(_this, ".", "this", "recur", "\"./encore-libs-master/Ped_util/Quad_tree.enc\" (line 45, column 21)");
        ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "agent");
        array_t* _fieldacc_86 = (*_this)._enc__field_agent;
        int64_t _literal_87 = 0;
        int64_t _access_88 = array_get(_fieldacc_86, _literal_87).i;
        ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "agent");
        array_t* _fieldacc_89 = (*_this)._enc__field_agent;
        int64_t _literal_90 = 1;
        int64_t _access_91 = array_get(_fieldacc_89, _literal_90).i;
        pony_type_t* _tmp_92[] = {};
        _enc__passive__encore_libs_master_Ped_util_Quad_tree_Quad_t* _sync_method_call_85 = _enc__method__encore_libs_master_Ped_util_Quad_tree_Quad_recur(_ctx, _this, NULL, _access_88, _access_91);
        check_receiver(_sync_method_call_85, ".", "this.recur(this.agent[0], this.agent[1])", "add", "\"./encore-libs-master/Ped_util/Quad_tree.enc\" (line 45, column 21)");
        ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "agent");
        array_t* _fieldacc_93 = (*_this)._enc__field_agent;
        int64_t _literal_94 = 0;
        int64_t _access_95 = array_get(_fieldacc_93, _literal_94).i;
        ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "agent");
        array_t* _fieldacc_96 = (*_this)._enc__field_agent;
        int64_t _literal_97 = 1;
        int64_t _access_98 = array_get(_fieldacc_96, _literal_97).i;
        pony_type_t* _tmp_99[] = {};
        void* _sync_method_call_84 = _enc__method__encore_libs_master_Ped_util_Quad_tree_Quad_add(_ctx, _sync_method_call_85, NULL, _access_95, _access_98);
        /* this.agent = null */;
        array_t* _literal_100 = NULL;
        (*({ENC_DTRACE3(FIELD_WRITE, (uintptr_t)*_ctx, (uintptr_t)_this, "agent"); _this;}))._enc__field_agent = _literal_100;
        _ite_27 = ((void*) UNIT);
      }
      else
      {
        UNIT;
        _ite_27 = ((void*) UNIT);
      };
      /* this.size = this.size + 1 */;
      int64_t _binop_103 = (({ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "size");
                              int64_t _fieldacc_101 = (*_this)._enc__field_size; _fieldacc_101;}) + ({int64_t _literal_102 = 1; _literal_102;}));
      (*({ENC_DTRACE3(FIELD_WRITE, (uintptr_t)*_ctx, (uintptr_t)_this, "size"); _this;}))._enc__field_size = _binop_103;
      /* this.recur(x, y).add(x, y) */;
      check_receiver(_this, ".", "this", "recur", "\"./encore-libs-master/Ped_util/Quad_tree.enc\" (line 49, column 21)");
      pony_type_t* _tmp_106[] = {};
      _enc__passive__encore_libs_master_Ped_util_Quad_tree_Quad_t* _sync_method_call_105 = _enc__method__encore_libs_master_Ped_util_Quad_tree_Quad_recur(_ctx, _this, NULL, _enc__arg_x, _enc__arg_y);
      check_receiver(_sync_method_call_105, ".", "this.recur(x, y)", "add", "\"./encore-libs-master/Ped_util/Quad_tree.enc\" (line 49, column 21)");
      pony_type_t* _tmp_107[] = {};
      void* _sync_method_call_104 = _enc__method__encore_libs_master_Ped_util_Quad_tree_Quad_add(_ctx, _sync_method_call_105, NULL, _enc__arg_x, _enc__arg_y);
      _ite_12 = ((void*) _sync_method_call_104);
    };
    _ite_0 = ((void*) _ite_12);
  }
  else
  {
    /* print("OUTSIDE! {} {} {} {} {} {}\n", 
      x, 
      y, 
      this.max_x, 
      this.min_x, 
      this.max_y, 
      this.min_y) */;
    ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "max_x");
    int64_t _fieldacc_108 = (*_this)._enc__field_max_x;
    ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "min_x");
    int64_t _fieldacc_109 = (*_this)._enc__field_min_x;
    ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "max_y");
    int64_t _fieldacc_110 = (*_this)._enc__field_max_y;
    ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "min_y");
    int64_t _fieldacc_111 = (*_this)._enc__field_min_y;
    fprintf(stdout, "OUTSIDE! %lli %lli %lli %lli %lli %lli\n", _enc__arg_x, _enc__arg_y, _fieldacc_108, _fieldacc_109, _fieldacc_110, _fieldacc_111);
    _ite_0 = ((void*) UNIT);
  };
  ENC_DTRACE3(METHOD_EXIT, (uintptr_t)*_ctx, (uintptr_t)_this, "add");
  return UNIT;
}


int64_t _enc__method__encore_libs_master_Ped_util_Quad_tree_Quad_remove(pony_ctx_t** _ctx, _enc__passive__encore_libs_master_Ped_util_Quad_tree_Quad_t* _this, pony_type_t** runtimeType, int64_t _enc__arg_x, int64_t _enc__arg_y)
{
  ENC_DTRACE3(METHOD_ENTRY, (uintptr_t)*_ctx, (uintptr_t)_this, "remove");
  /* if this.top_right == null then
  if this.same(x, y) then
    {this.agent = null;
     this.size = 0;
     true}
  else
    false
else
  {val hit = this.recur(x, y).remove(x, y);
   if hit then
     {this.size = this.size - 1;
      if this.size == 0 then
        {this.top_right = null;
         this.bottom_right = null;
         this.top_left = null;
         this.bottom_left = null}};
   hit} */;
  int64_t _ite_0;
  if (({int64_t _binop_3 = (({ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "top_right");
                              _enc__passive__encore_libs_master_Ped_util_Quad_tree_Quad_t* _fieldacc_1 = (*_this)._enc__field_top_right; _fieldacc_1;}) == ((_enc__passive__encore_libs_master_Ped_util_Quad_tree_Quad_t*) ({_enc__passive__encore_libs_master_Ped_util_Quad_tree_Quad_t* _literal_2 = NULL; _literal_2;}))); _binop_3;}))
  {
    /* if this.same(x, y) then
  {this.agent = null;
   this.size = 0;
   true}
else
  false */;
    int64_t _ite_4;
    if (({check_receiver(_this, ".", "this", "same", "\"./encore-libs-master/Ped_util/Quad_tree.enc\" (line 56, column 20)");
          pony_type_t* _tmp_6[] = {};
          int64_t _sync_method_call_5 = _enc__method__encore_libs_master_Ped_util_Quad_tree_Quad_same(_ctx, _this, NULL, _enc__arg_x, _enc__arg_y); _sync_method_call_5;}))
    {
      /* this.agent = null */;
      array_t* _literal_7 = NULL;
      (*({ENC_DTRACE3(FIELD_WRITE, (uintptr_t)*_ctx, (uintptr_t)_this, "agent"); _this;}))._enc__field_agent = _literal_7;
      /* this.size = 0 */;
      int64_t _literal_8 = 0;
      (*({ENC_DTRACE3(FIELD_WRITE, (uintptr_t)*_ctx, (uintptr_t)_this, "size"); _this;}))._enc__field_size = _literal_8;
      /* true */;
      int64_t _literal_9 = 1/*True*/;
      _ite_4 = ((int64_t) _literal_9);
    }
    else
    {
      /* false */;
      int64_t _literal_10 = 0/*False*/;
      _ite_4 = ((int64_t) _literal_10);
    };
    _ite_0 = ((int64_t) _ite_4);
  }
  else
  {
    /* val hit = this.recur(x, y).remove(x, y) */;
    /* hit = this.recur(x, y).remove(x, y) */;
    check_receiver(_this, ".", "this", "recur", "\"./encore-libs-master/Ped_util/Quad_tree.enc\" (line 64, column 25)");
    pony_type_t* _tmp_13[] = {};
    _enc__passive__encore_libs_master_Ped_util_Quad_tree_Quad_t* _sync_method_call_12 = _enc__method__encore_libs_master_Ped_util_Quad_tree_Quad_recur(_ctx, _this, NULL, _enc__arg_x, _enc__arg_y);
    check_receiver(_sync_method_call_12, ".", "this.recur(x, y)", "remove", "\"./encore-libs-master/Ped_util/Quad_tree.enc\" (line 64, column 25)");
    pony_type_t* _tmp_14[] = {};
    int64_t _sync_method_call_11 = _enc__method__encore_libs_master_Ped_util_Quad_tree_Quad_remove(_ctx, _sync_method_call_12, NULL, _enc__arg_x, _enc__arg_y);
    int64_t _hit_15 = _sync_method_call_11;
    /* if hit then
  {this.size = this.size - 1;
   if this.size == 0 then
     {this.top_right = null;
      this.bottom_right = null;
      this.top_left = null;
      this.bottom_left = null}} */;
    void* _ite_16;
    if (({ _hit_15;}))
    {
      /* this.size = this.size - 1 */;
      int64_t _binop_19 = (({ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "size");
                             int64_t _fieldacc_17 = (*_this)._enc__field_size; _fieldacc_17;}) - ({int64_t _literal_18 = 1; _literal_18;}));
      (*({ENC_DTRACE3(FIELD_WRITE, (uintptr_t)*_ctx, (uintptr_t)_this, "size"); _this;}))._enc__field_size = _binop_19;
      /* if this.size == 0 then
  {this.top_right = null;
   this.bottom_right = null;
   this.top_left = null;
   this.bottom_left = null} */;
      void* _ite_20;
      if (({int64_t _binop_23 = (({ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "size");
                                   int64_t _fieldacc_21 = (*_this)._enc__field_size; _fieldacc_21;}) == ({int64_t _literal_22 = 0; _literal_22;})); _binop_23;}))
      {
        /* this.top_right = null */;
        _enc__passive__encore_libs_master_Ped_util_Quad_tree_Quad_t* _literal_24 = NULL;
        (*({ENC_DTRACE3(FIELD_WRITE, (uintptr_t)*_ctx, (uintptr_t)_this, "top_right"); _this;}))._enc__field_top_right = _literal_24;
        /* this.bottom_right = null */;
        _enc__passive__encore_libs_master_Ped_util_Quad_tree_Quad_t* _literal_25 = NULL;
        (*({ENC_DTRACE3(FIELD_WRITE, (uintptr_t)*_ctx, (uintptr_t)_this, "bottom_right"); _this;}))._enc__field_bottom_right = _literal_25;
        /* this.top_left = null */;
        _enc__passive__encore_libs_master_Ped_util_Quad_tree_Quad_t* _literal_26 = NULL;
        (*({ENC_DTRACE3(FIELD_WRITE, (uintptr_t)*_ctx, (uintptr_t)_this, "top_left"); _this;}))._enc__field_top_left = _literal_26;
        /* this.bottom_left = null */;
        _enc__passive__encore_libs_master_Ped_util_Quad_tree_Quad_t* _literal_27 = NULL;
        (*({ENC_DTRACE3(FIELD_WRITE, (uintptr_t)*_ctx, (uintptr_t)_this, "bottom_left"); _this;}))._enc__field_bottom_left = _literal_27;
        _ite_20 = ((void*) UNIT);
      }
      else
      {
        UNIT;
        _ite_20 = ((void*) UNIT);
      };
      _ite_16 = ((void*) _ite_20);
    }
    else
    {
      UNIT;
      _ite_16 = ((void*) UNIT);
    };
    /* hit */;
    _ite_0 = ((int64_t) _hit_15);
  };
  ENC_DTRACE3(METHOD_EXIT, (uintptr_t)*_ctx, (uintptr_t)_this, "remove");
  return ((int64_t) _ite_0);
}


int64_t _enc__method__encore_libs_master_Ped_util_Quad_tree_Quad_isin(pony_ctx_t** _ctx, _enc__passive__encore_libs_master_Ped_util_Quad_tree_Quad_t* _this, pony_type_t** runtimeType, int64_t _enc__arg_x, int64_t _enc__arg_y)
{
  ENC_DTRACE3(METHOD_ENTRY, (uintptr_t)*_ctx, (uintptr_t)_this, "isin");
  /* if this.top_right == null then
  this.same(x, y)
else
  this.recur(x, y).isin(x, y) */;
  int64_t _ite_0;
  if (({int64_t _binop_3 = (({ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "top_right");
                              _enc__passive__encore_libs_master_Ped_util_Quad_tree_Quad_t* _fieldacc_1 = (*_this)._enc__field_top_right; _fieldacc_1;}) == ((_enc__passive__encore_libs_master_Ped_util_Quad_tree_Quad_t*) ({_enc__passive__encore_libs_master_Ped_util_Quad_tree_Quad_t* _literal_2 = NULL; _literal_2;}))); _binop_3;}))
  {
    /* this.same(x, y) */;
    check_receiver(_this, ".", "this", "same", "\"./encore-libs-master/Ped_util/Quad_tree.enc\" (line 78, column 17)");
    pony_type_t* _tmp_5[] = {};
    int64_t _sync_method_call_4 = _enc__method__encore_libs_master_Ped_util_Quad_tree_Quad_same(_ctx, _this, NULL, _enc__arg_x, _enc__arg_y);
    _ite_0 = ((int64_t) _sync_method_call_4);
  }
  else
  {
    /* this.recur(x, y).isin(x, y) */;
    check_receiver(_this, ".", "this", "recur", "\"./encore-libs-master/Ped_util/Quad_tree.enc\" (line 80, column 17)");
    pony_type_t* _tmp_8[] = {};
    _enc__passive__encore_libs_master_Ped_util_Quad_tree_Quad_t* _sync_method_call_7 = _enc__method__encore_libs_master_Ped_util_Quad_tree_Quad_recur(_ctx, _this, NULL, _enc__arg_x, _enc__arg_y);
    check_receiver(_sync_method_call_7, ".", "this.recur(x, y)", "isin", "\"./encore-libs-master/Ped_util/Quad_tree.enc\" (line 80, column 17)");
    pony_type_t* _tmp_9[] = {};
    int64_t _sync_method_call_6 = _enc__method__encore_libs_master_Ped_util_Quad_tree_Quad_isin(_ctx, _sync_method_call_7, NULL, _enc__arg_x, _enc__arg_y);
    _ite_0 = ((int64_t) _sync_method_call_6);
  };
  ENC_DTRACE3(METHOD_EXIT, (uintptr_t)*_ctx, (uintptr_t)_this, "isin");
  return ((int64_t) _ite_0);
}


int64_t _enc__method__encore_libs_master_Ped_util_Quad_tree_Quad_same(pony_ctx_t** _ctx, _enc__passive__encore_libs_master_Ped_util_Quad_tree_Quad_t* _this, pony_type_t** runtimeType, int64_t _enc__arg_x, int64_t _enc__arg_y)
{
  ENC_DTRACE3(METHOD_ENTRY, (uintptr_t)*_ctx, (uintptr_t)_this, "same");
  /* if this.agent != null and this.agent[0] == x and this.agent[1] == y then
  true
else
  false */;
  int64_t _ite_0;
  if (({int64_t _binop_13 = (({int64_t _binop_8 = (({int64_t _binop_3 = (({ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "agent");
                                                                           array_t* _fieldacc_1 = (*_this)._enc__field_agent; _fieldacc_1;}) != ({array_t* _literal_2 = NULL; _literal_2;})); _binop_3;}) && ({int64_t _binop_7 = (({ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "agent");
                                                                                                                                                                                                                                     array_t* _fieldacc_4 = (*_this)._enc__field_agent;
                                                                                                                                                                                                                                     int64_t _literal_5 = 0;
                                                                                                                                                                                                                                     int64_t _access_6 = array_get(_fieldacc_4, _literal_5).i; _access_6;}) == ({ _enc__arg_x;})); _binop_7;})); _binop_8;}) && ({int64_t _binop_12 = (({ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "agent");
                                                                                                                                                                                                                                                                                                                                                                                         array_t* _fieldacc_9 = (*_this)._enc__field_agent;
                                                                                                                                                                                                                                                                                                                                                                                         int64_t _literal_10 = 1;
                                                                                                                                                                                                                                                                                                                                                                                         int64_t _access_11 = array_get(_fieldacc_9, _literal_10).i; _access_11;}) == ({ _enc__arg_y;})); _binop_12;})); _binop_13;}))
  {
    int64_t _literal_14 = 1/*True*/;
    _ite_0 = ((int64_t) _literal_14);
  }
  else
  {
    int64_t _literal_15 = 0/*False*/;
    _ite_0 = ((int64_t) _literal_15);
  };
  ENC_DTRACE3(METHOD_EXIT, (uintptr_t)*_ctx, (uintptr_t)_this, "same");
  return ((int64_t) _ite_0);
}


_enc__passive__encore_libs_master_Ped_util_Quad_tree_Quad_t* _enc__method__encore_libs_master_Ped_util_Quad_tree_Quad_recur(pony_ctx_t** _ctx, _enc__passive__encore_libs_master_Ped_util_Quad_tree_Quad_t* _this, pony_type_t** runtimeType, int64_t _enc__arg_x, int64_t _enc__arg_y)
{
  ENC_DTRACE3(METHOD_ENTRY, (uintptr_t)*_ctx, (uintptr_t)_this, "recur");
  /* val top = y > this.max_y - this.min_y / 2 + this.min_y */;
  /* top = y > this.max_y - this.min_y / 2 + this.min_y */;
  int64_t _binop_7 = (({ _enc__arg_y;}) > ({int64_t _binop_6 = (({int64_t _binop_4 = (({int64_t _binop_2 = (({ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "max_y");
                                                                                                              int64_t _fieldacc_0 = (*_this)._enc__field_max_y; _fieldacc_0;}) - ({ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "min_y");
                                                                                                                                                                                   int64_t _fieldacc_1 = (*_this)._enc__field_min_y; _fieldacc_1;})); _binop_2;}) / ({int64_t _literal_3 = 2; _literal_3;})); _binop_4;}) + ({ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "min_y");
                                                                                                                                                                                                                                                                                                                              int64_t _fieldacc_5 = (*_this)._enc__field_min_y; _fieldacc_5;})); _binop_6;}));
  int64_t _top_8 = _binop_7;
  /* val right = x > this.max_x - this.min_x / 2 + this.min_x */;
  /* right = x > this.max_x - this.min_x / 2 + this.min_x */;
  int64_t _binop_16 = (({ _enc__arg_x;}) > ({int64_t _binop_15 = (({int64_t _binop_13 = (({int64_t _binop_11 = (({ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "max_x");
                                                                                                                  int64_t _fieldacc_9 = (*_this)._enc__field_max_x; _fieldacc_9;}) - ({ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "min_x");
                                                                                                                                                                                       int64_t _fieldacc_10 = (*_this)._enc__field_min_x; _fieldacc_10;})); _binop_11;}) / ({int64_t _literal_12 = 2; _literal_12;})); _binop_13;}) + ({ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "min_x");
                                                                                                                                                                                                                                                                                                                                        int64_t _fieldacc_14 = (*_this)._enc__field_min_x; _fieldacc_14;})); _binop_15;}));
  int64_t _right_17 = _binop_16;
  /* if top then
  if right then
    this.top_right
  else
    this.top_left
else
  if right then
    this.bottom_right
  else
    this.bottom_left */;
  _enc__passive__encore_libs_master_Ped_util_Quad_tree_Quad_t* _ite_18;
  if (({ _top_8;}))
  {
    /* if right then
  this.top_right
else
  this.top_left */;
    _enc__passive__encore_libs_master_Ped_util_Quad_tree_Quad_t* _ite_19;
    if (({ _right_17;}))
    {
      /* this.top_right */;
      ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "top_right");
      _enc__passive__encore_libs_master_Ped_util_Quad_tree_Quad_t* _fieldacc_20 = (*_this)._enc__field_top_right;
      _ite_19 = ((_enc__passive__encore_libs_master_Ped_util_Quad_tree_Quad_t*) _fieldacc_20);
    }
    else
    {
      /* this.top_left */;
      ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "top_left");
      _enc__passive__encore_libs_master_Ped_util_Quad_tree_Quad_t* _fieldacc_21 = (*_this)._enc__field_top_left;
      _ite_19 = ((_enc__passive__encore_libs_master_Ped_util_Quad_tree_Quad_t*) _fieldacc_21);
    };
    _ite_18 = ((_enc__passive__encore_libs_master_Ped_util_Quad_tree_Quad_t*) _ite_19);
  }
  else
  {
    /* if right then
  this.bottom_right
else
  this.bottom_left */;
    _enc__passive__encore_libs_master_Ped_util_Quad_tree_Quad_t* _ite_22;
    if (({ _right_17;}))
    {
      /* this.bottom_right */;
      ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "bottom_right");
      _enc__passive__encore_libs_master_Ped_util_Quad_tree_Quad_t* _fieldacc_23 = (*_this)._enc__field_bottom_right;
      _ite_22 = ((_enc__passive__encore_libs_master_Ped_util_Quad_tree_Quad_t*) _fieldacc_23);
    }
    else
    {
      /* this.bottom_left */;
      ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "bottom_left");
      _enc__passive__encore_libs_master_Ped_util_Quad_tree_Quad_t* _fieldacc_24 = (*_this)._enc__field_bottom_left;
      _ite_22 = ((_enc__passive__encore_libs_master_Ped_util_Quad_tree_Quad_t*) _fieldacc_24);
    };
    _ite_18 = ((_enc__passive__encore_libs_master_Ped_util_Quad_tree_Quad_t*) _ite_22);
  };
  ENC_DTRACE3(METHOD_EXIT, (uintptr_t)*_ctx, (uintptr_t)_this, "recur");
  return ((_enc__passive__encore_libs_master_Ped_util_Quad_tree_Quad_t*) _ite_18);
}


pony_type_t _enc__passive__encore_libs_master_Ped_util_Quad_tree_Quad_type = {.id=_ENC__ID__encore_libs_master_Ped_util_Quad_tree_Quad, .size=sizeof(_enc__passive__encore_libs_master_Ped_util_Quad_tree_Quad_t), .trace=_enc__trace__encore_libs_master_Ped_util_Quad_tree_Quad, .vtable=trait_method_selector};
