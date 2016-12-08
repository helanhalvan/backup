#include "header.h"


static void* trait_method_selector(int id)
{
  switch (id)
  {
    case _ENC__MSG__encore_libs_master_Collections_Map_Map_set:
    {
      return _enc__method__encore_libs_master_Collections_HashMap_HashMap_set;
      break;
    }
    case _ENC__MSG__encore_libs_master_Collections_Map_Map_remove:
    {
      return _enc__method__encore_libs_master_Collections_HashMap_HashMap_remove;
      break;
    }
    case _ENC__MSG__encore_libs_master_Collections_Map_Map_resize:
    {
      return _enc__method__encore_libs_master_Collections_HashMap_HashMap_resize;
      break;
    }
    case _ENC__MSG__encore_libs_master_Collections_Map_Map_get_value:
    {
      return _enc__method__encore_libs_master_Collections_HashMap_HashMap_get_value;
      break;
    }
    default:
    {
      printf("error, got invalid id: %d", id);
    }
  };
  return NULL;
}


void _enc__type_init__encore_libs_master_Collections_HashMap_HashMap(_enc__passive__encore_libs_master_Collections_HashMap_HashMap_t* this, ... )
{
  va_list params;
  va_start(params, this);
  this->_enc__type_v = va_arg(params, pony_type_t *);
  va_end(params);
}


void _enc__trace__encore_libs_master_Collections_HashMap_HashMap(pony_ctx_t* _ctx_arg, void* p)
{
  pony_ctx_t** _ctx = (&(_ctx_arg));
  _enc__passive__encore_libs_master_Collections_HashMap_HashMap_t* _this = p;
  uint64_t _enc__field_size = _this->_enc__field_size;
  /* Not tracing field '_enc__field_size' */;
  uint64_t _enc__field_items = _this->_enc__field_items;
  /* Not tracing field '_enc__field_items' */;
  array_t* _enc__field_map = _this->_enc__field_map;
  encore_trace_object((*_ctx), _enc__field_map, array_trace);
}


_enc__passive__encore_libs_master_Collections_HashMap_HashMap_t* _enc__constructor__encore_libs_master_Collections_HashMap_HashMap(pony_ctx_t** _ctx)
{
  _enc__passive__encore_libs_master_Collections_HashMap_HashMap_t* this = ((_enc__passive__encore_libs_master_Collections_HashMap_HashMap_t*) encore_alloc((*_ctx), sizeof(_enc__passive__encore_libs_master_Collections_HashMap_HashMap_t)));
  this->_enc__self_type = (&(_enc__passive__encore_libs_master_Collections_HashMap_HashMap_type));
  return this;
}


void* _enc__method__encore_libs_master_Collections_HashMap_HashMap__init(pony_ctx_t** _ctx, _enc__passive__encore_libs_master_Collections_HashMap_HashMap_t* _this)
{
  pony_type_t* _enc__type_v = (*((_enc__passive__encore_libs_master_Collections_HashMap_HashMap_t*) _this))._enc__type_v;
  /* this.items = 0 */;
  int64_t _literal_0 = 0;
  (*({ _this;}))._enc__field_items = ((uint64_t) _literal_0);
  /* this.size = 32 */;
  int64_t _literal_1 = 32;
  (*({ _this;}))._enc__field_size = ((uint64_t) _literal_1);
  /* this.map = new [LinkedList<Entry<v>>](this.size) */;
  uint64_t _fieldacc_3 = (*_this)._enc__field_size;
  array_t* _array_2 = array_mk(_ctx, _fieldacc_3, (&(_enc__passive__encore_libs_master_Collections_LinkedList_LinkedList_type)));
  (*({ _this;}))._enc__field_map = _array_2;
  /* repeat i <- this.size
  this.map[i] = new LinkedList<Entry<v>>() */;
  /* i = repeat i <- this.size
  this.map[i] = new LinkedList<Entry<v>>() */;
  int64_t _literal_4 = 0;
  int64_t _i_5 = _literal_4;
  /* __gub__ = this.size */;
  uint64_t _fieldacc_6 = (*_this)._enc__field_size;
  uint64_t ___gub___7 = _fieldacc_6;
  void* _while_13;
  while (({int64_t _binop_8 = (({ _i_5;}) < ({ ___gub___7;})); _binop_8;}))
  {
    /* this.map[i] = new LinkedList<Entry<v>>() */;
    /* this.map[i] = new LinkedList<Entry<v>>() */;
    _enc__passive__encore_libs_master_Collections_LinkedList_LinkedList_t* _new_9 = _enc__constructor__encore_libs_master_Collections_LinkedList_LinkedList(_ctx);
    _enc__type_init__encore_libs_master_Collections_LinkedList_LinkedList(_new_9, (&(_enc__passive__encore_libs_master_Collections_HashMap_Entry_type)));
    _enc__method__encore_libs_master_Collections_LinkedList_LinkedList__init(_ctx, _new_9);
    array_t* _fieldacc_10 = (*_this)._enc__field_map;
    array_set(_fieldacc_10, _i_5, ((encore_arg_t) {.p = _new_9}));
    /* repeat i <- this.size
  this.map[i] = new LinkedList<Entry<v>>() */;
    int64_t _binop_12 = (({ _i_5;}) + ({int64_t _literal_11 = 1; _literal_11;}));
    _i_5 = _binop_12;
    _while_13 = UNIT;
  };
  return UNIT;
}


int64_t _enc__method__encore_libs_master_Collections_HashMap_HashMap_remove(pony_ctx_t** _ctx, _enc__passive__encore_libs_master_Collections_HashMap_HashMap_t* _this, _enc__trait__encore_libs_master_Collections_HashCode_HashCode_t* _enc__arg_key)
{
  pony_type_t* _enc__type_v = (*((_enc__passive__encore_libs_master_Collections_HashMap_HashMap_t*) _this))._enc__type_v;
  /* let hash = key.get_hash()
    k = hash % this.size
    list = this.map[k]
    ret_val = false
in
  {let iter = list.iterator()
   in
     while iter.has_next()
       let current = iter.next()
       in
         match current with
           Just node => let entry = node.value
                        in
                          if entry.key.equals(key) then
                            {list.drop(node);
                             this.items = this.items - 1;
                             ret_val = true}
         ;
   ret_val} */;
  /* hash = key.get_hash() */;
  check_receiver(_enc__arg_key, ".", "key", "get_hash", "\"./encore-libs-master/Collections/HashMap.enc\" (line 127, column 23)");
  uint64_t (*_HashCode_get_hash_0) (pony_ctx_t**, _enc__trait__encore_libs_master_Collections_HashCode_HashCode_t*);
  void* (*_HashCode_vtable_1) (int);
  _HashCode_vtable_1 = ((void*) _enc__arg_key->_enc__self_type->vtable);
  _HashCode_get_hash_0 = _HashCode_vtable_1(_ENC__MSG__encore_libs_master_Collections_HashCode_HashCode_get_hash);
  uint64_t _trait_method_call_2 = _HashCode_get_hash_0(_ctx, ((_enc__trait__encore_libs_master_Collections_HashCode_HashCode_t*) _enc__arg_key));
  uint64_t _hash_3 = _trait_method_call_2;
  /* k = hash % this.size */;
  uint64_t _binop_5 = (({ _hash_3;}) % ({uint64_t _fieldacc_4 = (*_this)._enc__field_size; _fieldacc_4;}));
  uint64_t _k_6 = _binop_5;
  /* list = this.map[k] */;
  array_t* _fieldacc_7 = (*_this)._enc__field_map;
  _enc__passive__encore_libs_master_Collections_LinkedList_LinkedList_t* _access_8 = array_get(_fieldacc_7, _k_6).p;
  _enc__passive__encore_libs_master_Collections_LinkedList_LinkedList_t* _list_9 = _access_8;
  /* ret_val = false */;
  int64_t _literal_10 = 0/*False*/;
  int64_t _ret_val_11 = _literal_10;
  /* let iter = list.iterator()
in
  while iter.has_next()
    let current = iter.next()
    in
      match current with
        Just node => let entry = node.value
                     in
                       if entry.key.equals(key) then
                         {list.drop(node);
                          this.items = this.items - 1;
                          ret_val = true}
       */;
  /* iter = list.iterator() */;
  check_receiver(_list_9, ".", "list", "iterator", "\"./encore-libs-master/Collections/HashMap.enc\" (line 134, column 24)");
  _enc__passive__encore_libs_master_Collections_LinkedList_LinkedIterator_t* _sync_method_call_12 = _enc__method__encore_libs_master_Collections_LinkedList_LinkedList_iterator(_ctx, _list_9);
  _enc__passive__encore_libs_master_Collections_LinkedList_LinkedIterator_t* _iter_13 = _sync_method_call_12;
  /* while iter.has_next()
  let current = iter.next()
  in
    match current with
      Just node => let entry = node.value
                   in
                     if entry.key.equals(key) then
                       {list.drop(node);
                        this.items = this.items - 1;
                        ret_val = true}
     */;
  void* _while_35;
  while (({check_receiver(_iter_13, ".", "iter", "has_next", "\"./encore-libs-master/Collections/HashMap.enc\" (line 135, column 23)");
           int64_t _sync_method_call_14 = _enc__method__encore_libs_master_Collections_LinkedList_LinkedIterator_has_next(_ctx, _iter_13); _sync_method_call_14;}))
  {
    /* let current = iter.next()
in
  match current with
    Just node => let entry = node.value
                 in
                   if entry.key.equals(key) then
                     {list.drop(node);
                      this.items = this.items - 1;
                      ret_val = true}
   */;
    /* current = iter.next() */;
    check_receiver(_iter_13, ".", "iter", "next", "\"./encore-libs-master/Collections/HashMap.enc\" (line 136, column 35)");
    option_t* _sync_method_call_15 = _enc__method__encore_libs_master_Collections_LinkedList_LinkedIterator_next(_ctx, _iter_13);
    option_t* _current_16 = _sync_method_call_15;
    /* match current with
  Just node => let entry = node.value
               in
                 if entry.key.equals(key) then
                   {list.drop(node);
                    this.items = this.items - 1;
                    ret_val = true}
 */;
    void* _match_17;
    _enc__passive__encore_libs_master_Collections_LinkedList_LinkedNode_t* _node_18;
    if ((({int64_t _optionCheck_32;
           _optionCheck_32 = ((JUST == (*_current_16).tag) && ({int64_t _varBinding_33;
                                                                _enc__passive__encore_libs_master_Collections_LinkedList_LinkedNode_t* _optionVal_31 = (*_current_16).val.p;
                                                                _node_18 = _optionVal_31;
                                                                _varBinding_33 = 1; _varBinding_33;})); _optionCheck_32;}) && ({int64_t _literal_34 = 1/*True*/; _literal_34;})))
    {
      _match_17 = ((void*) ({/* entry = node.value */;
                             _enc__passive__encore_libs_master_Collections_HashMap_Entry_t* _fieldacc_19 = (*_node_18)._enc__field_value.p;
                             _enc__passive__encore_libs_master_Collections_HashMap_Entry_t* _entry_20 = _fieldacc_19;
                             /* if entry.key.equals(key) then
  {list.drop(node);
   this.items = this.items - 1;
   ret_val = true} */;
                             void* _ite_21;
                             if (({_enc__trait__encore_libs_master_Collections_HashCode_HashCode_t* _fieldacc_22 = (*_entry_20)._enc__field_key;
                                   check_receiver(_fieldacc_22, ".", "entry.key", "equals", "\"./encore-libs-master/Collections/HashMap.enc\" (line 142, column 40)");
                                   int64_t (*_HashCode_equals_23) (pony_ctx_t**, _enc__trait__encore_libs_master_Collections_HashCode_HashCode_t*, _enc__trait__encore_libs_master_Collections_HashCode_HashCode_t*);
                                   void* (*_HashCode_vtable_24) (int);
                                   _HashCode_vtable_24 = ((void*) _fieldacc_22->_enc__self_type->vtable);
                                   _HashCode_equals_23 = _HashCode_vtable_24(_ENC__MSG__encore_libs_master_Collections_HashCode_HashCode_equals);
                                   int64_t _trait_method_call_25 = _HashCode_equals_23(_ctx, ((_enc__trait__encore_libs_master_Collections_HashCode_HashCode_t*) _fieldacc_22), _enc__arg_key); _trait_method_call_25;}))
                             {
                               /* list.drop(node) */;
                               check_receiver(_list_9, ".", "list", "drop", "\"./encore-libs-master/Collections/HashMap.enc\" (line 144, column 41)");
                               void* _sync_method_call_26 = _enc__method__encore_libs_master_Collections_LinkedList_LinkedList_drop(_ctx, _list_9, ((_enc__passive__encore_libs_master_Collections_LinkedList_LinkedNode_t*) _node_18));
                               /* this.items = this.items - 1 */;
                               uint64_t _binop_29 = (({uint64_t _fieldacc_27 = (*_this)._enc__field_items; _fieldacc_27;}) - ({int64_t _literal_28 = 1; _literal_28;}));
                               (*({ _this;}))._enc__field_items = _binop_29;
                               /* ret_val = true */;
                               int64_t _literal_30 = 1/*True*/;
                               _ret_val_11 = _literal_30;
                               _ite_21 = ((void*) UNIT);
                             }
                             else
                             {
                               UNIT;
                               _ite_21 = ((void*) UNIT);
                             }; _ite_21;}));
    }
    else
    {
      printf("*** Runtime error: No matching clause was found ***\n");
      exit(1);
    };
    _while_35 = _match_17;
  };
  /* ret_val */;
  return ((int64_t) _ret_val_11);
}


void* _enc__method__encore_libs_master_Collections_HashMap_HashMap_set(pony_ctx_t** _ctx, _enc__passive__encore_libs_master_Collections_HashMap_HashMap_t* _this, _enc__trait__encore_libs_master_Collections_HashCode_HashCode_t* _enc__arg_key, encore_arg_t _enc__arg_value)
{
  pony_type_t* _enc__type_v = (*((_enc__passive__encore_libs_master_Collections_HashMap_HashMap_t*) _this))._enc__type_v;
  /* let hash = key.get_hash()
    entry = new Entry<v>(key, value)
in
  {if this.items >= this.size * 0.75 then
     this.resize(this.size * 2);
   this.remove(key);
   let k = hash % this.size
       list = this.map[k]
   in
     list.push(entry);
   this.items = this.items + 1} */;
  /* hash = key.get_hash() */;
  check_receiver(_enc__arg_key, ".", "key", "get_hash", "\"./encore-libs-master/Collections/HashMap.enc\" (line 160, column 21)");
  uint64_t (*_HashCode_get_hash_0) (pony_ctx_t**, _enc__trait__encore_libs_master_Collections_HashCode_HashCode_t*);
  void* (*_HashCode_vtable_1) (int);
  _HashCode_vtable_1 = ((void*) _enc__arg_key->_enc__self_type->vtable);
  _HashCode_get_hash_0 = _HashCode_vtable_1(_ENC__MSG__encore_libs_master_Collections_HashCode_HashCode_get_hash);
  uint64_t _trait_method_call_2 = _HashCode_get_hash_0(_ctx, ((_enc__trait__encore_libs_master_Collections_HashCode_HashCode_t*) _enc__arg_key));
  uint64_t _hash_3 = _trait_method_call_2;
  /* entry = new Entry<v>(key, value) */;
  _enc__passive__encore_libs_master_Collections_HashMap_Entry_t* _new_4 = _enc__constructor__encore_libs_master_Collections_HashMap_Entry(_ctx);
  _enc__type_init__encore_libs_master_Collections_HashMap_Entry(_new_4, _enc__type_v);
  _enc__method__encore_libs_master_Collections_HashMap_Entry__init(_ctx, _new_4, _enc__arg_key, _enc__arg_value);
  _enc__passive__encore_libs_master_Collections_HashMap_Entry_t* _entry_5 = _new_4;
  /* if this.items >= this.size * 0.75 then
  this.resize(this.size * 2) */;
  void* _ite_6;
  if (({int64_t _binop_11 = (({uint64_t _fieldacc_7 = (*_this)._enc__field_items; _fieldacc_7;}) >= ({double _binop_10 = (({uint64_t _fieldacc_8 = (*_this)._enc__field_size; _fieldacc_8;}) * ({double _literal_9 = 0.75; _literal_9;})); _binop_10;})); _binop_11;}))
  {
    /* this.resize(this.size * 2) */;
    check_receiver(_this, ".", "this", "resize", "\"./encore-libs-master/Collections/HashMap.enc\" (line 166, column 17)");
    uint64_t _binop_15 = (({uint64_t _fieldacc_13 = (*_this)._enc__field_size; _fieldacc_13;}) * ({int64_t _literal_14 = 2; _literal_14;}));
    void* _sync_method_call_12 = _enc__method__encore_libs_master_Collections_HashMap_HashMap_resize(_ctx, _this, _binop_15);
    _ite_6 = ((void*) _sync_method_call_12);
  }
  else
  {
    UNIT;
    _ite_6 = ((void*) UNIT);
  };
  /* this.remove(key) */;
  check_receiver(_this, ".", "this", "remove", "\"./encore-libs-master/Collections/HashMap.enc\" (line 170, column 13)");
  int64_t _sync_method_call_16 = _enc__method__encore_libs_master_Collections_HashMap_HashMap_remove(_ctx, _this, _enc__arg_key);
  /* let k = hash % this.size
    list = this.map[k]
in
  list.push(entry) */;
  /* k = hash % this.size */;
  uint64_t _binop_18 = (({ _hash_3;}) % ({uint64_t _fieldacc_17 = (*_this)._enc__field_size; _fieldacc_17;}));
  uint64_t _k_19 = _binop_18;
  /* list = this.map[k] */;
  array_t* _fieldacc_20 = (*_this)._enc__field_map;
  _enc__passive__encore_libs_master_Collections_LinkedList_LinkedList_t* _access_21 = array_get(_fieldacc_20, _k_19).p;
  _enc__passive__encore_libs_master_Collections_LinkedList_LinkedList_t* _list_22 = _access_21;
  /* list.push(entry) */;
  check_receiver(_list_22, ".", "list", "push", "\"./encore-libs-master/Collections/HashMap.enc\" (line 176, column 17)");
  void* _sync_method_call_23 = _enc__method__encore_libs_master_Collections_LinkedList_LinkedList_push(_ctx, _list_22, ((encore_arg_t) {.p = _entry_5}));
  /* this.items = this.items + 1 */;
  uint64_t _binop_26 = (({uint64_t _fieldacc_24 = (*_this)._enc__field_items; _fieldacc_24;}) + ({int64_t _literal_25 = 1; _literal_25;}));
  (*({ _this;}))._enc__field_items = _binop_26;
  return UNIT;
}


void* _enc__method__encore_libs_master_Collections_HashMap_HashMap_resize(pony_ctx_t** _ctx, _enc__passive__encore_libs_master_Collections_HashMap_HashMap_t* _this, uint64_t _enc__arg_new_size)
{
  pony_type_t* _enc__type_v = (*((_enc__passive__encore_libs_master_Collections_HashMap_HashMap_t*) _this))._enc__type_v;
  /* let new_map = new [LinkedList<Entry<v>>](new_size)
in
  {repeat i <- new_size
     new_map[i] = new LinkedList<Entry<v>>();
   let iterator = new HashMapIterator<v>(this)
   in
     while iterator.has_next()
       let current = iterator.next()
       in
         match current with
           Just entry => let hash = entry.key.get_hash()
                             k = hash % new_size
                             list = new_map[k]
                         in
                           list.push(entry)
         ;
   this.map = new_map;
   this.size = new_size} */;
  /* new_map = new [LinkedList<Entry<v>>](new_size) */;
  array_t* _array_0 = array_mk(_ctx, _enc__arg_new_size, (&(_enc__passive__encore_libs_master_Collections_LinkedList_LinkedList_type)));
  array_t* _new_map_1 = _array_0;
  /* repeat i <- new_size
  new_map[i] = new LinkedList<Entry<v>>() */;
  /* i = repeat i <- new_size
  new_map[i] = new LinkedList<Entry<v>>() */;
  int64_t _literal_2 = 0;
  int64_t _i_3 = _literal_2;
  /* __gub__ = new_size */;
  uint64_t ___gub___4 = _enc__arg_new_size;
  void* _while_9;
  while (({int64_t _binop_5 = (({ _i_3;}) < ({ ___gub___4;})); _binop_5;}))
  {
    /* new_map[i] = new LinkedList<Entry<v>>() */;
    /* new_map[i] = new LinkedList<Entry<v>>() */;
    _enc__passive__encore_libs_master_Collections_LinkedList_LinkedList_t* _new_6 = _enc__constructor__encore_libs_master_Collections_LinkedList_LinkedList(_ctx);
    _enc__type_init__encore_libs_master_Collections_LinkedList_LinkedList(_new_6, (&(_enc__passive__encore_libs_master_Collections_HashMap_Entry_type)));
    _enc__method__encore_libs_master_Collections_LinkedList_LinkedList__init(_ctx, _new_6);
    array_set(_new_map_1, _i_3, ((encore_arg_t) {.p = _new_6}));
    /* repeat i <- new_size
  new_map[i] = new LinkedList<Entry<v>>() */;
    int64_t _binop_8 = (({ _i_3;}) + ({int64_t _literal_7 = 1; _literal_7;}));
    _i_3 = _binop_8;
    _while_9 = UNIT;
  };
  /* let iterator = new HashMapIterator<v>(this)
in
  while iterator.has_next()
    let current = iterator.next()
    in
      match current with
        Just entry => let hash = entry.key.get_hash()
                          k = hash % new_size
                          list = new_map[k]
                      in
                        list.push(entry)
       */;
  /* iterator = new HashMapIterator<v>(this) */;
  _enc__passive__encore_libs_master_Collections_HashMap_HashMapIterator_t* _new_10 = _enc__constructor__encore_libs_master_Collections_HashMap_HashMapIterator(_ctx);
  _enc__type_init__encore_libs_master_Collections_HashMap_HashMapIterator(_new_10, _enc__type_v);
  _enc__method__encore_libs_master_Collections_HashMap_HashMapIterator__init(_ctx, _new_10, _this);
  _enc__passive__encore_libs_master_Collections_HashMap_HashMapIterator_t* _iterator_11 = _new_10;
  /* while iterator.has_next()
  let current = iterator.next()
  in
    match current with
      Just entry => let hash = entry.key.get_hash()
                        k = hash % new_size
                        list = new_map[k]
                    in
                      list.push(entry)
     */;
  void* _while_31;
  while (({check_receiver(_iterator_11, ".", "iterator", "has_next", "\"./encore-libs-master/Collections/HashMap.enc\" (line 192, column 23)");
           int64_t _sync_method_call_12 = _enc__method__encore_libs_master_Collections_HashMap_HashMapIterator_has_next(_ctx, _iterator_11); _sync_method_call_12;}))
  {
    /* let current = iterator.next()
in
  match current with
    Just entry => let hash = entry.key.get_hash()
                      k = hash % new_size
                      list = new_map[k]
                  in
                    list.push(entry)
   */;
    /* current = iterator.next() */;
    check_receiver(_iterator_11, ".", "iterator", "next", "\"./encore-libs-master/Collections/HashMap.enc\" (line 193, column 35)");
    option_t* _sync_method_call_13 = _enc__method__encore_libs_master_Collections_HashMap_HashMapIterator_next(_ctx, _iterator_11);
    option_t* _current_14 = _sync_method_call_13;
    /* match current with
  Just entry => let hash = entry.key.get_hash()
                    k = hash % new_size
                    list = new_map[k]
                in
                  list.push(entry)
 */;
    void* _match_15;
    _enc__passive__encore_libs_master_Collections_HashMap_Entry_t* _entry_16;
    if ((({int64_t _optionCheck_28;
           _optionCheck_28 = ((JUST == (*_current_14).tag) && ({int64_t _varBinding_29;
                                                                _enc__passive__encore_libs_master_Collections_HashMap_Entry_t* _optionVal_27 = (*_current_14).val.p;
                                                                _entry_16 = _optionVal_27;
                                                                _varBinding_29 = 1; _varBinding_29;})); _optionCheck_28;}) && ({int64_t _literal_30 = 1/*True*/; _literal_30;})))
    {
      _match_15 = ((void*) ({/* let hash = entry.key.get_hash()
    k = hash % new_size
    list = new_map[k]
in
  list.push(entry) */;
                             /* hash = entry.key.get_hash() */;
                             _enc__trait__encore_libs_master_Collections_HashCode_HashCode_t* _fieldacc_17 = (*_entry_16)._enc__field_key;
                             check_receiver(_fieldacc_17, ".", "entry.key", "get_hash", "\"./encore-libs-master/Collections/HashMap.enc\" (line 197, column 44)");
                             uint64_t (*_HashCode_get_hash_18) (pony_ctx_t**, _enc__trait__encore_libs_master_Collections_HashCode_HashCode_t*);
                             void* (*_HashCode_vtable_19) (int);
                             _HashCode_vtable_19 = ((void*) _fieldacc_17->_enc__self_type->vtable);
                             _HashCode_get_hash_18 = _HashCode_vtable_19(_ENC__MSG__encore_libs_master_Collections_HashCode_HashCode_get_hash);
                             uint64_t _trait_method_call_20 = _HashCode_get_hash_18(_ctx, ((_enc__trait__encore_libs_master_Collections_HashCode_HashCode_t*) _fieldacc_17));
                             uint64_t _hash_21 = _trait_method_call_20;
                             /* k = hash % new_size */;
                             uint64_t _binop_22 = (({ _hash_21;}) % ({ _enc__arg_new_size;}));
                             uint64_t _k_23 = _binop_22;
                             /* list = new_map[k] */;
                             _enc__passive__encore_libs_master_Collections_LinkedList_LinkedList_t* _access_24 = array_get(_new_map_1, _k_23).p;
                             _enc__passive__encore_libs_master_Collections_LinkedList_LinkedList_t* _list_25 = _access_24;
                             /* list.push(entry) */;
                             check_receiver(_list_25, ".", "list", "push", "\"./encore-libs-master/Collections/HashMap.enc\" (line 201, column 37)");
                             void* _sync_method_call_26 = _enc__method__encore_libs_master_Collections_LinkedList_LinkedList_push(_ctx, _list_25, ((encore_arg_t) {.p = _entry_16})); _sync_method_call_26;}));
    }
    else
    {
      printf("*** Runtime error: No matching clause was found ***\n");
      exit(1);
    };
    _while_31 = _match_15;
  };
  /* this.map = new_map */;
  (*({ _this;}))._enc__field_map = _new_map_1;
  /* this.size = new_size */;
  (*({ _this;}))._enc__field_size = _enc__arg_new_size;
  return UNIT;
}


option_t* _enc__method__encore_libs_master_Collections_HashMap_HashMap_get_value(pony_ctx_t** _ctx, _enc__passive__encore_libs_master_Collections_HashMap_HashMap_t* _this, _enc__trait__encore_libs_master_Collections_HashCode_HashCode_t* _enc__arg_key)
{
  pony_type_t* _enc__type_v = (*((_enc__passive__encore_libs_master_Collections_HashMap_HashMap_t*) _this))._enc__type_v;
  /* let hash = key.get_hash()
    k = hash % this.size
    list = this.map[k]
in
  let iter = list.iterator()
      tmp = Nothing : Maybe v
  in
    {while iter.has_next() and tmp == Nothing
       let current = iter.next()
       in
         match current with
           Just entry => if entry.value.key.equals(key) then
                           tmp = Just entry.value.value
         ;
     tmp} */;
  /* hash = key.get_hash() */;
  check_receiver(_enc__arg_key, ".", "key", "get_hash", "\"./encore-libs-master/Collections/HashMap.enc\" (line 215, column 20)");
  uint64_t (*_HashCode_get_hash_0) (pony_ctx_t**, _enc__trait__encore_libs_master_Collections_HashCode_HashCode_t*);
  void* (*_HashCode_vtable_1) (int);
  _HashCode_vtable_1 = ((void*) _enc__arg_key->_enc__self_type->vtable);
  _HashCode_get_hash_0 = _HashCode_vtable_1(_ENC__MSG__encore_libs_master_Collections_HashCode_HashCode_get_hash);
  uint64_t _trait_method_call_2 = _HashCode_get_hash_0(_ctx, ((_enc__trait__encore_libs_master_Collections_HashCode_HashCode_t*) _enc__arg_key));
  uint64_t _hash_3 = _trait_method_call_2;
  /* k = hash % this.size */;
  uint64_t _binop_5 = (({ _hash_3;}) % ({uint64_t _fieldacc_4 = (*_this)._enc__field_size; _fieldacc_4;}));
  uint64_t _k_6 = _binop_5;
  /* list = this.map[k] */;
  array_t* _fieldacc_7 = (*_this)._enc__field_map;
  _enc__passive__encore_libs_master_Collections_LinkedList_LinkedList_t* _access_8 = array_get(_fieldacc_7, _k_6).p;
  _enc__passive__encore_libs_master_Collections_LinkedList_LinkedList_t* _list_9 = _access_8;
  /* let iter = list.iterator()
    tmp = Nothing : Maybe v
in
  {while iter.has_next() and tmp == Nothing
     let current = iter.next()
     in
       match current with
         Just entry => if entry.value.key.equals(key) then
                         tmp = Just entry.value.value
       ;
   tmp} */;
  /* iter = list.iterator() */;
  check_receiver(_list_9, ".", "list", "iterator", "\"./encore-libs-master/Collections/HashMap.enc\" (line 223, column 24)");
  _enc__passive__encore_libs_master_Collections_LinkedList_LinkedIterator_t* _sync_method_call_10 = _enc__method__encore_libs_master_Collections_LinkedList_LinkedList_iterator(_ctx, _list_9);
  _enc__passive__encore_libs_master_Collections_LinkedList_LinkedIterator_t* _iter_11 = _sync_method_call_10;
  /* tmp = Nothing : Maybe v */;
  option_t* _option_12 = (&(DEFAULT_NOTHING));
  option_t* _cast_13 = ((option_t*) _option_12);
  option_t* _tmp_14 = _cast_13;
  /* while iter.has_next() and tmp == Nothing
  let current = iter.next()
  in
    match current with
      Just entry => if entry.value.key.equals(key) then
                      tmp = Just entry.value.value
     */;
  void* _while_36;
  while (({int64_t _binop_18 = (({check_receiver(_iter_11, ".", "iter", "has_next", "\"./encore-libs-master/Collections/HashMap.enc\" (line 226, column 23)");
                                  int64_t _sync_method_call_15 = _enc__method__encore_libs_master_Collections_LinkedList_LinkedIterator_has_next(_ctx, _iter_11); _sync_method_call_15;}) && ({int64_t _binop_17 = (({ _tmp_14;}) == ({option_t* _option_16 = (&(DEFAULT_NOTHING)); _option_16;})); _binop_17;})); _binop_18;}))
  {
    /* let current = iter.next()
in
  match current with
    Just entry => if entry.value.key.equals(key) then
                    tmp = Just entry.value.value
   */;
    /* current = iter.next() */;
    check_receiver(_iter_11, ".", "iter", "next", "\"./encore-libs-master/Collections/HashMap.enc\" (line 227, column 35)");
    option_t* _sync_method_call_19 = _enc__method__encore_libs_master_Collections_LinkedList_LinkedIterator_next(_ctx, _iter_11);
    option_t* _current_20 = _sync_method_call_19;
    /* match current with
  Just entry => if entry.value.key.equals(key) then
                  tmp = Just entry.value.value
 */;
    void* _match_21;
    _enc__passive__encore_libs_master_Collections_LinkedList_LinkedNode_t* _entry_22;
    if ((({int64_t _optionCheck_33;
           _optionCheck_33 = ((JUST == (*_current_20).tag) && ({int64_t _varBinding_34;
                                                                _enc__passive__encore_libs_master_Collections_LinkedList_LinkedNode_t* _optionVal_32 = (*_current_20).val.p;
                                                                _entry_22 = _optionVal_32;
                                                                _varBinding_34 = 1; _varBinding_34;})); _optionCheck_33;}) && ({int64_t _literal_35 = 1/*True*/; _literal_35;})))
    {
      _match_21 = ((void*) ({void* _ite_23;
                             if (({_enc__passive__encore_libs_master_Collections_HashMap_Entry_t* _fieldacc_24 = (*_entry_22)._enc__field_value.p;
                                   _enc__trait__encore_libs_master_Collections_HashCode_HashCode_t* _fieldacc_25 = (*_fieldacc_24)._enc__field_key;
                                   check_receiver(_fieldacc_25, ".", "entry.value.key", "equals", "\"./encore-libs-master/Collections/HashMap.enc\" (line 230, column 36)");
                                   int64_t (*_HashCode_equals_26) (pony_ctx_t**, _enc__trait__encore_libs_master_Collections_HashCode_HashCode_t*, _enc__trait__encore_libs_master_Collections_HashCode_HashCode_t*);
                                   void* (*_HashCode_vtable_27) (int);
                                   _HashCode_vtable_27 = ((void*) _fieldacc_25->_enc__self_type->vtable);
                                   _HashCode_equals_26 = _HashCode_vtable_27(_ENC__MSG__encore_libs_master_Collections_HashCode_HashCode_equals);
                                   int64_t _trait_method_call_28 = _HashCode_equals_26(_ctx, ((_enc__trait__encore_libs_master_Collections_HashCode_HashCode_t*) _fieldacc_25), _enc__arg_key); _trait_method_call_28;}))
                             {
                               /* tmp = Just entry.value.value */;
                               _enc__passive__encore_libs_master_Collections_HashMap_Entry_t* _fieldacc_29 = (*_entry_22)._enc__field_value.p;
                               encore_arg_t _fieldacc_30 = (*_fieldacc_29)._enc__field_value;
                               option_t* _option_31 = option_mk(_ctx, JUST, _fieldacc_30, _enc__type_v);
                               _tmp_14 = _option_31;
                               _ite_23 = ((void*) UNIT);
                             }
                             else
                             {
                               UNIT;
                               _ite_23 = ((void*) UNIT);
                             }; _ite_23;}));
    }
    else
    {
      printf("*** Runtime error: No matching clause was found ***\n");
      exit(1);
    };
    _while_36 = _match_21;
  };
  /* tmp */;
  return ((option_t*) _tmp_14);
}


pony_type_t _enc__passive__encore_libs_master_Collections_HashMap_HashMap_type = {.id=_ENC__ID__encore_libs_master_Collections_HashMap_HashMap, .size=sizeof(_enc__passive__encore_libs_master_Collections_HashMap_HashMap_t), .trace=_enc__trace__encore_libs_master_Collections_HashMap_HashMap, .vtable=trait_method_selector};
