#ifndef HEADER_H
#define HEADER_H


#define _XOPEN_SOURCE 800


#include <pthread.h>
#include <pony.h>
#include <pool.h>
#include <stdlib.h>
#include <closure.h>
#include <stream.h>
#include <array.h>
#include <tuple.h>
#include <range.h>
#include <future.h>
#include <task.h>
#include <option.h>
#include <party.h>
#include <string.h>
#include <stdio.h>
#include <stdarg.h>


#define UNIT ((void*) -1)


////////////////////
// Shared messages


pony_msg_t m_MSG_alloc;


pony_msg_t m_resume_get;


pony_msg_t m_resume_suspend;


pony_msg_t m_resume_await;


pony_msg_t m_run_closure;


//////////////////
// Embedded code



    #include <stdint.h> // uintptr_t


















    #include <stdint.h>
    #include <stdio.h>
    #include <string.h>

    /* default: SipHash-2-4 */
    #define cROUNDS 2
    #define dROUNDS 4

    #define ROTL(x, b) (uint64_t)(((x) << (b)) | ((x) >> (64 - (b))))

    // Little Endian (_LE) typecasting
    #define U32TO8_LE(p, v)                                          \
      (p)[0] = (uint8_t)((v));                                       \
      (p)[1] = (uint8_t)((v) >> 8);                                  \
      (p)[2] = (uint8_t)((v) >> 16);                                 \
      (p)[3] = (uint8_t)((v) >> 24);

    #define U64TO8_LE(p, v)                                          \
      U32TO8_LE((p), (uint32_t)((v)));                               \
      U32TO8_LE((p) + 4, (uint32_t)((v) >> 32));

    #define U8TO64_LE(p)                                             \
      (((uint64_t)((p)[0])) | ((uint64_t)((p)[1]) << 8) |            \
       ((uint64_t)((p)[2]) << 16) | ((uint64_t)((p)[3]) << 24) |     \
       ((uint64_t)((p)[4]) << 32) | ((uint64_t)((p)[5]) << 40) |     \
       ((uint64_t)((p)[6]) << 48) | ((uint64_t)((p)[7]) << 56))

    #define SIPROUND         \
      do {                   \
        v0 += v1;            \
        v1 = ROTL(v1, 13);   \
        v1 ^= v0;            \
        v0 = ROTL(v0, 32);   \
        v2 += v3;            \
        v3 = ROTL(v3, 16);   \
        v3 ^= v2;            \
        v0 += v3;            \
        v3 = ROTL(v3, 21);   \
        v3 ^= v0;            \
        v2 += v1;            \
        v1 = ROTL(v1, 17);   \
        v1 ^= v2;            \
        v2 = ROTL(v2, 32);   \
      } while (0)
























#include <string.h>
#include <strings.h>
#include <alloca.h>
#include <ctype.h>
#include <math.h>
array_t *_init_argv(pony_ctx_t** ctx, size_t argc, char **argv);


/////////////////////
// Class type decls


typedef struct _enc__passive__encore_libs_master_Collections_HashMap_HashMap_t _enc__passive__encore_libs_master_Collections_HashMap_HashMap_t;


typedef struct _enc__passive__encore_libs_master_Collections_HashMap_HashMapIterator_t _enc__passive__encore_libs_master_Collections_HashMap_HashMapIterator_t;


typedef struct _enc__passive__encore_libs_master_Collections_HashMap_Entry_t _enc__passive__encore_libs_master_Collections_HashMap_Entry_t;


typedef struct _enc__passive__encore_libs_master_Collections_LinkedList_LinkedIterator_t _enc__passive__encore_libs_master_Collections_LinkedList_LinkedIterator_t;


typedef struct _enc__passive__encore_libs_master_Collections_LinkedList_LinkedList_t _enc__passive__encore_libs_master_Collections_LinkedList_LinkedList_t;


typedef struct _enc__passive__encore_libs_master_Collections_LinkedList_LinkedNode_t _enc__passive__encore_libs_master_Collections_LinkedList_LinkedNode_t;


typedef struct _enc__passive__encore_libs_master_Collections_Siphash_Siphash_t _enc__passive__encore_libs_master_Collections_Siphash_Siphash_t;


typedef struct _enc__passive__encore_libs_master_FileIO_IO_File_t _enc__passive__encore_libs_master_FileIO_IO_File_t;


typedef struct _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_struct_t _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_struct_t;


typedef struct _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t;


typedef struct _enc__active__encore_libs_master_Ped_util_Box_Single_Box_t _enc__active__encore_libs_master_Ped_util_Box_Single_Box_t;


typedef struct _enc__active__encore_libs_master_Ped_util_Box_Multi_Box_t _enc__active__encore_libs_master_Ped_util_Box_Multi_Box_t;


typedef struct _enc__active__encore_libs_master_Ped_util_Box_Top_Box_t _enc__active__encore_libs_master_Ped_util_Box_Top_Box_t;


typedef struct _enc__passive__encore_libs_master_Ped_util_Box_Single_Box_face_t _enc__passive__encore_libs_master_Ped_util_Box_Single_Box_face_t;


typedef struct _enc__passive__encore_libs_master_Ped_util_Box_Multi_Box_face_t _enc__passive__encore_libs_master_Ped_util_Box_Multi_Box_face_t;


typedef struct _enc__passive__encore_libs_master_Ped_util_Box_Top_Box_face_t _enc__passive__encore_libs_master_Ped_util_Box_Top_Box_face_t;


typedef struct _enc__passive__encore_libs_master_XML_XML_XML_lib_t _enc__passive__encore_libs_master_XML_XML_XML_lib_t;


typedef struct _enc__passive__encore_libs_master_XML_XML_XML_node_t _enc__passive__encore_libs_master_XML_XML_XML_node_t;


typedef struct _enc__active__main_Main_t _enc__active__main_Main_t;


typedef struct _enc__passive_Either_Right_t _enc__passive_Either_Right_t;


typedef struct _enc__passive_Either_Left_t _enc__passive_Either_Left_t;


typedef struct _enc__passive_String_String_t _enc__passive_String_String_t;


/////////////////////
// Trait type decls


typedef struct _enc__trait__encore_libs_master_Collections_HashCode_HashCode_t _enc__trait__encore_libs_master_Collections_HashCode_HashCode_t;


typedef struct _enc__trait__encore_libs_master_Collections_Hasher_Hasher_t _enc__trait__encore_libs_master_Collections_Hasher_Hasher_t;


typedef struct _enc__trait__encore_libs_master_Collections_Iterator_Iterator_t _enc__trait__encore_libs_master_Collections_Iterator_Iterator_t;


typedef struct _enc__trait__encore_libs_master_Collections_Map_Map_t _enc__trait__encore_libs_master_Collections_Map_Map_t;


typedef struct _enc__trait__encore_libs_master_Ped_util_Box_Box_face_t _enc__trait__encore_libs_master_Ped_util_Box_Box_face_t;


typedef struct _enc__trait_Either_Either_t _enc__trait_Either_Either_t;


////////////////////////
// Passive class types


struct _enc__passive__encore_libs_master_Collections_HashMap_HashMap_t
{
  pony_type_t* _enc__self_type;
  pony_type_t* _enc__type_v;
  uint64_t _enc__field_size;
  uint64_t _enc__field_items;
  array_t* _enc__field_map;
};


struct _enc__passive__encore_libs_master_Collections_HashMap_HashMapIterator_t
{
  pony_type_t* _enc__self_type;
  pony_type_t* _enc__type_v;
  _enc__passive__encore_libs_master_Collections_HashMap_HashMap_t* _enc__field_map;
  uint64_t _enc__field_current_index;
  option_t* _enc__field_current_node;
};


struct _enc__passive__encore_libs_master_Collections_HashMap_Entry_t
{
  pony_type_t* _enc__self_type;
  pony_type_t* _enc__type_v;
  _enc__trait__encore_libs_master_Collections_HashCode_HashCode_t* _enc__field_key;
  encore_arg_t _enc__field_value;
};


struct _enc__passive__encore_libs_master_Collections_LinkedList_LinkedIterator_t
{
  pony_type_t* _enc__self_type;
  pony_type_t* _enc__type_t;
  _enc__passive__encore_libs_master_Collections_LinkedList_LinkedList_t* _enc__field_list;
  option_t* _enc__field_cursor;
};


struct _enc__passive__encore_libs_master_Collections_LinkedList_LinkedList_t
{
  pony_type_t* _enc__self_type;
  pony_type_t* _enc__type_t;
  option_t* _enc__field_top;
  int64_t _enc__field_length;
};


struct _enc__passive__encore_libs_master_Collections_LinkedList_LinkedNode_t
{
  pony_type_t* _enc__self_type;
  pony_type_t* _enc__type_t;
  encore_arg_t _enc__field_value;
  option_t* _enc__field_prev;
  option_t* _enc__field_next;
};


struct _enc__passive__encore_libs_master_Collections_Siphash_Siphash_t
{
  pony_type_t* _enc__self_type;
};


struct _enc__passive__encore_libs_master_FileIO_IO_File_t
{
  pony_type_t* _enc__self_type;
  FILE* _enc__field_file;
  _enc__passive_String_String_t* _enc__field_fname;
  _enc__passive_String_String_t* _enc__field_mode;
};


struct _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_struct_t
{
  pony_type_t* _enc__self_type;
  _enc__passive__encore_libs_master_Collections_HashMap_HashMap_t* _enc__field_ss2;
  int64_t _enc__field_size;
};


struct _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t
{
  pony_type_t* _enc__self_type;
  uint64_t _enc__field_hash_code;
  tuple_t* _enc__field_pos;
  array_t* _enc__field_targets;
  array_t* _enc__field_targets_size;
  int64_t _enc__field_i;
  int64_t _enc__field_ttl;
};


struct _enc__passive__encore_libs_master_Ped_util_Box_Single_Box_face_t
{
  pony_type_t* _enc__self_type;
  _enc__active__encore_libs_master_Ped_util_Box_Single_Box_t* _enc__field_t;
};


struct _enc__passive__encore_libs_master_Ped_util_Box_Multi_Box_face_t
{
  pony_type_t* _enc__self_type;
  _enc__active__encore_libs_master_Ped_util_Box_Multi_Box_t* _enc__field_t;
};


struct _enc__passive__encore_libs_master_Ped_util_Box_Top_Box_face_t
{
  pony_type_t* _enc__self_type;
  _enc__active__encore_libs_master_Ped_util_Box_Top_Box_t* _enc__field_t;
};


struct _enc__passive__encore_libs_master_XML_XML_XML_lib_t
{
  pony_type_t* _enc__self_type;
};


struct _enc__passive__encore_libs_master_XML_XML_XML_node_t
{
  pony_type_t* _enc__self_type;
  _enc__passive_String_String_t* _enc__field_s_rep;
  array_t* _enc__field_children;
  array_t* _enc__field_comments;
  _enc__passive_String_String_t* _enc__field_name;
  array_t* _enc__field_atribs;
};


struct _enc__passive_Either_Right_t
{
  pony_type_t* _enc__self_type;
  pony_type_t* _enc__type_a;
  pony_type_t* _enc__type_b;
  encore_arg_t _enc__field_x;
};


struct _enc__passive_Either_Left_t
{
  pony_type_t* _enc__self_type;
  pony_type_t* _enc__type_a;
  pony_type_t* _enc__type_b;
  encore_arg_t _enc__field_x;
};


struct _enc__passive_String_String_t
{
  pony_type_t* _enc__self_type;
  char* _enc__field_data;
  int64_t _enc__field_length;
};


//////////////////
// Runtime types


extern pony_type_t _enc__passive__encore_libs_master_Collections_HashMap_HashMap_type;


extern pony_type_t _enc__passive__encore_libs_master_Collections_HashMap_HashMapIterator_type;


extern pony_type_t _enc__passive__encore_libs_master_Collections_HashMap_Entry_type;


extern pony_type_t _enc__passive__encore_libs_master_Collections_LinkedList_LinkedIterator_type;


extern pony_type_t _enc__passive__encore_libs_master_Collections_LinkedList_LinkedList_type;


extern pony_type_t _enc__passive__encore_libs_master_Collections_LinkedList_LinkedNode_type;


extern pony_type_t _enc__passive__encore_libs_master_Collections_Siphash_Siphash_type;


extern pony_type_t _enc__passive__encore_libs_master_FileIO_IO_File_type;


extern pony_type_t _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_struct_type;


extern pony_type_t _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_type;


extern pony_type_t _enc__active__encore_libs_master_Ped_util_Box_Single_Box_type;


extern pony_type_t _enc__active__encore_libs_master_Ped_util_Box_Multi_Box_type;


extern pony_type_t _enc__active__encore_libs_master_Ped_util_Box_Top_Box_type;


extern pony_type_t _enc__passive__encore_libs_master_Ped_util_Box_Single_Box_face_type;


extern pony_type_t _enc__passive__encore_libs_master_Ped_util_Box_Multi_Box_face_type;


extern pony_type_t _enc__passive__encore_libs_master_Ped_util_Box_Top_Box_face_type;


extern pony_type_t _enc__passive__encore_libs_master_XML_XML_XML_lib_type;


extern pony_type_t _enc__passive__encore_libs_master_XML_XML_XML_node_type;


extern pony_type_t _enc__active__main_Main_type;


extern pony_type_t _enc__passive_Either_Right_type;


extern pony_type_t _enc__passive_Either_Left_type;


extern pony_type_t _enc__passive_String_String_type;


extern pony_type_t _enc__trait__encore_libs_master_Collections_HashCode_HashCode_type;


extern pony_type_t _enc__trait__encore_libs_master_Collections_Hasher_Hasher_type;


extern pony_type_t _enc__trait__encore_libs_master_Collections_Iterator_Iterator_type;


extern pony_type_t _enc__trait__encore_libs_master_Collections_Map_Map_type;


extern pony_type_t _enc__trait__encore_libs_master_Ped_util_Box_Box_face_type;


extern pony_type_t _enc__trait_Either_Either_type;


////////////////
// Message IDs


enum
{
  _MSG_DUMMY__ = 1024,
  _ENC__FUT_MSG__encore_libs_master_Collections_HashMap_HashMap__init,
  _ENC__FUT_MSG__encore_libs_master_Collections_HashMap_HashMap_remove,
  _ENC__FUT_MSG__encore_libs_master_Collections_HashMap_HashMap_set,
  _ENC__FUT_MSG__encore_libs_master_Collections_HashMap_HashMap_resize,
  _ENC__FUT_MSG__encore_libs_master_Collections_HashMap_HashMap_get_value,
  _ENC__FUT_MSG__encore_libs_master_Collections_HashMap_HashMapIterator__init,
  _ENC__FUT_MSG__encore_libs_master_Collections_HashMap_HashMapIterator_locate_next,
  _ENC__FUT_MSG__encore_libs_master_Collections_HashMap_HashMapIterator_next,
  _ENC__FUT_MSG__encore_libs_master_Collections_HashMap_HashMapIterator_has_next,
  _ENC__FUT_MSG__encore_libs_master_Collections_HashMap_Entry__init,
  _ENC__FUT_MSG__encore_libs_master_Collections_LinkedList_LinkedIterator__init,
  _ENC__FUT_MSG__encore_libs_master_Collections_LinkedList_LinkedIterator_next,
  _ENC__FUT_MSG__encore_libs_master_Collections_LinkedList_LinkedIterator_has_next,
  _ENC__FUT_MSG__encore_libs_master_Collections_LinkedList_LinkedList__init,
  _ENC__FUT_MSG__encore_libs_master_Collections_LinkedList_LinkedList_iterator,
  _ENC__FUT_MSG__encore_libs_master_Collections_LinkedList_LinkedList_push,
  _ENC__FUT_MSG__encore_libs_master_Collections_LinkedList_LinkedList_drop,
  _ENC__FUT_MSG__encore_libs_master_Collections_LinkedList_LinkedList_remove_all,
  _ENC__FUT_MSG__encore_libs_master_Collections_LinkedList_LinkedNode__init,
  _ENC__FUT_MSG__encore_libs_master_Collections_Siphash_Siphash__init,
  _ENC__FUT_MSG__encore_libs_master_Collections_Siphash_Siphash_hash,
  _ENC__FUT_MSG__encore_libs_master_Collections_Siphash_Siphash_modulo,
  _ENC__FUT_MSG__encore_libs_master_FileIO_IO_File__init,
  _ENC__FUT_MSG__encore_libs_master_FileIO_IO_File_open,
  _ENC__FUT_MSG__encore_libs_master_FileIO_IO_File_close,
  _ENC__FUT_MSG__encore_libs_master_FileIO_IO_File_write,
  _ENC__FUT_MSG__encore_libs_master_FileIO_IO_File_writeChar,
  _ENC__FUT_MSG__encore_libs_master_FileIO_IO_File_readline,
  _ENC__FUT_MSG__encore_libs_master_FileIO_IO_File_readlineChar,
  _ENC__FUT_MSG__encore_libs_master_FileIO_IO_File_eof,
  _ENC__FUT_MSG__encore_libs_master_Ped_util_Agent_passive_Agent_struct__init,
  _ENC__FUT_MSG__encore_libs_master_Ped_util_Agent_passive_Agent_struct_isin,
  _ENC__FUT_MSG__encore_libs_master_Ped_util_Agent_passive_Agent_struct_add,
  _ENC__FUT_MSG__encore_libs_master_Ped_util_Agent_passive_Agent_struct_remove,
  _ENC__FUT_MSG__encore_libs_master_Ped_util_Agent_passive_Agent_struct_size,
  _ENC__FUT_MSG__encore_libs_master_Ped_util_Agent_passive_Agent_struct_get_data,
  _ENC__FUT_MSG__encore_libs_master_Ped_util_Agent_passive_Agent__init,
  _ENC__FUT_MSG__encore_libs_master_Ped_util_Agent_passive_Agent_next,
  _ENC__FUT_MSG__encore_libs_master_Ped_util_Agent_passive_Agent_move,
  _ENC__FUT_MSG__encore_libs_master_Ped_util_Agent_passive_Agent_pos,
  _ENC__FUT_MSG__encore_libs_master_Ped_util_Agent_passive_Agent_copy,
  _ENC__FUT_MSG__encore_libs_master_Ped_util_Agent_passive_Agent_hash_adress,
  _ENC__FUT_MSG__encore_libs_master_Ped_util_Agent_passive_Agent_get_hash,
  _ENC__FUT_MSG__encore_libs_master_Ped_util_Agent_passive_Agent_equals,
  _ENC__FUT_MSG__encore_libs_master_Ped_util_Box_Single_Box__init,
  _ENC__FUT_MSG__encore_libs_master_Ped_util_Box_Single_Box_space,
  _ENC__FUT_MSG__encore_libs_master_Ped_util_Box_Single_Box_agents,
  _ENC__FUT_MSG__encore_libs_master_Ped_util_Box_Single_Box_add,
  _ENC__FUT_MSG__encore_libs_master_Ped_util_Box_Single_Box_start,
  _ENC__FUT_MSG__encore_libs_master_Ped_util_Box_Single_Box_move,
  _ENC__FUT_MSG__encore_libs_master_Ped_util_Box_Single_Box_external_move,
  _ENC__FUT_MSG__encore_libs_master_Ped_util_Box_Multi_Box__init,
  _ENC__FUT_MSG__encore_libs_master_Ped_util_Box_Multi_Box_space,
  _ENC__FUT_MSG__encore_libs_master_Ped_util_Box_Multi_Box_add,
  _ENC__FUT_MSG__encore_libs_master_Ped_util_Box_Multi_Box_agents,
  _ENC__FUT_MSG__encore_libs_master_Ped_util_Box_Multi_Box_external_move,
  _ENC__FUT_MSG__encore_libs_master_Ped_util_Box_Multi_Box_move,
  _ENC__FUT_MSG__encore_libs_master_Ped_util_Box_Multi_Box_start,
  _ENC__FUT_MSG__encore_libs_master_Ped_util_Box_Top_Box__init,
  _ENC__FUT_MSG__encore_libs_master_Ped_util_Box_Top_Box_move,
  _ENC__FUT_MSG__encore_libs_master_Ped_util_Box_Top_Box_external_move,
  _ENC__FUT_MSG__encore_libs_master_Ped_util_Box_Top_Box_start,
  _ENC__FUT_MSG__encore_libs_master_Ped_util_Box_Top_Box_max,
  _ENC__FUT_MSG__encore_libs_master_Ped_util_Box_Top_Box_min,
  _ENC__FUT_MSG__encore_libs_master_Ped_util_Box_Top_Box_space,
  _ENC__FUT_MSG__encore_libs_master_Ped_util_Box_Top_Box_agents,
  _ENC__FUT_MSG__encore_libs_master_Ped_util_Box_Top_Box_find_extreme,
  _ENC__FUT_MSG__encore_libs_master_Ped_util_Box_Top_Box_extreme_check,
  _ENC__FUT_MSG__encore_libs_master_Ped_util_Box_Single_Box_face__init,
  _ENC__FUT_MSG__encore_libs_master_Ped_util_Box_Single_Box_face_space,
  _ENC__FUT_MSG__encore_libs_master_Ped_util_Box_Single_Box_face_add,
  _ENC__FUT_MSG__encore_libs_master_Ped_util_Box_Single_Box_face_move,
  _ENC__FUT_MSG__encore_libs_master_Ped_util_Box_Single_Box_face_external_move,
  _ENC__FUT_MSG__encore_libs_master_Ped_util_Box_Single_Box_face_agents,
  _ENC__FUT_MSG__encore_libs_master_Ped_util_Box_Single_Box_face_start,
  _ENC__FUT_MSG__encore_libs_master_Ped_util_Box_Multi_Box_face__init,
  _ENC__FUT_MSG__encore_libs_master_Ped_util_Box_Multi_Box_face_space,
  _ENC__FUT_MSG__encore_libs_master_Ped_util_Box_Multi_Box_face_add,
  _ENC__FUT_MSG__encore_libs_master_Ped_util_Box_Multi_Box_face_move,
  _ENC__FUT_MSG__encore_libs_master_Ped_util_Box_Multi_Box_face_external_move,
  _ENC__FUT_MSG__encore_libs_master_Ped_util_Box_Multi_Box_face_agents,
  _ENC__FUT_MSG__encore_libs_master_Ped_util_Box_Multi_Box_face_start,
  _ENC__FUT_MSG__encore_libs_master_Ped_util_Box_Top_Box_face__init,
  _ENC__FUT_MSG__encore_libs_master_Ped_util_Box_Top_Box_face_space,
  _ENC__FUT_MSG__encore_libs_master_Ped_util_Box_Top_Box_face_add,
  _ENC__FUT_MSG__encore_libs_master_Ped_util_Box_Top_Box_face_move,
  _ENC__FUT_MSG__encore_libs_master_Ped_util_Box_Top_Box_face_external_move,
  _ENC__FUT_MSG__encore_libs_master_Ped_util_Box_Top_Box_face_agents,
  _ENC__FUT_MSG__encore_libs_master_Ped_util_Box_Top_Box_face_start,
  _ENC__FUT_MSG__encore_libs_master_XML_XML_XML_lib__init,
  _ENC__FUT_MSG__encore_libs_master_XML_XML_XML_lib_new_XML_node,
  _ENC__FUT_MSG__encore_libs_master_XML_XML_XML_lib_tag_type,
  _ENC__FUT_MSG__encore_libs_master_XML_XML_XML_lib_ext_atribs,
  _ENC__FUT_MSG__encore_libs_master_XML_XML_XML_lib_or_find_from,
  _ENC__FUT_MSG__encore_libs_master_XML_XML_XML_lib_pair,
  _ENC__FUT_MSG__encore_libs_master_XML_XML_XML_lib_file_to_xml,
  _ENC__FUT_MSG__encore_libs_master_XML_XML_XML_node__init,
  _ENC__FUT_MSG__encore_libs_master_XML_XML_XML_node_children_named,
  _ENC__FUT_MSG__encore_libs_master_XML_XML_XML_node_attribute_value,
  _ENC__FUT_MSG__main_Main__init,
  _ENC__FUT_MSG__main_Main_main,
  _ENC__FUT_MSG__main_Main_loop,
  _ENC__FUT_MSG__main_Main_parse_file,
  _ENC__FUT_MSG_Either_Right__init,
  _ENC__FUT_MSG_Either_Right_Left,
  _ENC__FUT_MSG_Either_Right_Right,
  _ENC__FUT_MSG_Either_Right_map,
  _ENC__FUT_MSG_Either_Right_foreach,
  _ENC__FUT_MSG_Either_Right_flatMap,
  _ENC__FUT_MSG_Either_Left__init,
  _ENC__FUT_MSG_Either_Left_Left,
  _ENC__FUT_MSG_Either_Left_Right,
  _ENC__FUT_MSG_Either_Left_map,
  _ENC__FUT_MSG_Either_Left_foreach,
  _ENC__FUT_MSG_Either_Left_flatMap,
  _ENC__FUT_MSG_String_String__init,
  _ENC__FUT_MSG_String_String_is_empty,
  _ENC__FUT_MSG_String_String_concatenate,
  _ENC__FUT_MSG_String_String_copy,
  _ENC__FUT_MSG_String_String_contains,
  _ENC__FUT_MSG_String_String_contains_ignore_case,
  _ENC__FUT_MSG_String_String_compare,
  _ENC__FUT_MSG_String_String_compare_ignore_case,
  _ENC__FUT_MSG_String_String_to_upper,
  _ENC__FUT_MSG_String_String_to_lower,
  _ENC__FUT_MSG_String_String_length,
  _ENC__FUT_MSG_String_String_size,
  _ENC__FUT_MSG_String_String_substring,
  _ENC__FUT_MSG_String_String_equals,
  _ENC__FUT_MSG_String_String_occurrences,
  _ENC__FUT_MSG_String_String_join,
  _ENC__FUT_MSG_String_String_getData,
  _ENC__FUT_MSG_String_String_trim,
  _ENC__FUT_MSG_String_String_replace,
  _ENC__FUT_MSG_String_String_find,
  _ENC__FUT_MSG_String_String_find_from,
  _ENC__FUT_MSG_String_String_delete,
  _ENC__FUT_MSG_String_String_format,
  _ENC__FUT_MSG_String_String_char_at,
  _ENC__FUT_MSG_String_String_to_array,
  _ENC__FUT_MSG_String_String_split,
  _ENC__FUT_MSG_String_String_to_int,
  _ENC__ONEWAY_MSG__encore_libs_master_Collections_HashMap_HashMap__init,
  _ENC__ONEWAY_MSG__encore_libs_master_Collections_HashMap_HashMap_remove,
  _ENC__ONEWAY_MSG__encore_libs_master_Collections_HashMap_HashMap_set,
  _ENC__ONEWAY_MSG__encore_libs_master_Collections_HashMap_HashMap_resize,
  _ENC__ONEWAY_MSG__encore_libs_master_Collections_HashMap_HashMap_get_value,
  _ENC__ONEWAY_MSG__encore_libs_master_Collections_HashMap_HashMapIterator__init,
  _ENC__ONEWAY_MSG__encore_libs_master_Collections_HashMap_HashMapIterator_locate_next,
  _ENC__ONEWAY_MSG__encore_libs_master_Collections_HashMap_HashMapIterator_next,
  _ENC__ONEWAY_MSG__encore_libs_master_Collections_HashMap_HashMapIterator_has_next,
  _ENC__ONEWAY_MSG__encore_libs_master_Collections_HashMap_Entry__init,
  _ENC__ONEWAY_MSG__encore_libs_master_Collections_LinkedList_LinkedIterator__init,
  _ENC__ONEWAY_MSG__encore_libs_master_Collections_LinkedList_LinkedIterator_next,
  _ENC__ONEWAY_MSG__encore_libs_master_Collections_LinkedList_LinkedIterator_has_next,
  _ENC__ONEWAY_MSG__encore_libs_master_Collections_LinkedList_LinkedList__init,
  _ENC__ONEWAY_MSG__encore_libs_master_Collections_LinkedList_LinkedList_iterator,
  _ENC__ONEWAY_MSG__encore_libs_master_Collections_LinkedList_LinkedList_push,
  _ENC__ONEWAY_MSG__encore_libs_master_Collections_LinkedList_LinkedList_drop,
  _ENC__ONEWAY_MSG__encore_libs_master_Collections_LinkedList_LinkedList_remove_all,
  _ENC__ONEWAY_MSG__encore_libs_master_Collections_LinkedList_LinkedNode__init,
  _ENC__ONEWAY_MSG__encore_libs_master_Collections_Siphash_Siphash__init,
  _ENC__ONEWAY_MSG__encore_libs_master_Collections_Siphash_Siphash_hash,
  _ENC__ONEWAY_MSG__encore_libs_master_Collections_Siphash_Siphash_modulo,
  _ENC__ONEWAY_MSG__encore_libs_master_FileIO_IO_File__init,
  _ENC__ONEWAY_MSG__encore_libs_master_FileIO_IO_File_open,
  _ENC__ONEWAY_MSG__encore_libs_master_FileIO_IO_File_close,
  _ENC__ONEWAY_MSG__encore_libs_master_FileIO_IO_File_write,
  _ENC__ONEWAY_MSG__encore_libs_master_FileIO_IO_File_writeChar,
  _ENC__ONEWAY_MSG__encore_libs_master_FileIO_IO_File_readline,
  _ENC__ONEWAY_MSG__encore_libs_master_FileIO_IO_File_readlineChar,
  _ENC__ONEWAY_MSG__encore_libs_master_FileIO_IO_File_eof,
  _ENC__ONEWAY_MSG__encore_libs_master_Ped_util_Agent_passive_Agent_struct__init,
  _ENC__ONEWAY_MSG__encore_libs_master_Ped_util_Agent_passive_Agent_struct_isin,
  _ENC__ONEWAY_MSG__encore_libs_master_Ped_util_Agent_passive_Agent_struct_add,
  _ENC__ONEWAY_MSG__encore_libs_master_Ped_util_Agent_passive_Agent_struct_remove,
  _ENC__ONEWAY_MSG__encore_libs_master_Ped_util_Agent_passive_Agent_struct_size,
  _ENC__ONEWAY_MSG__encore_libs_master_Ped_util_Agent_passive_Agent_struct_get_data,
  _ENC__ONEWAY_MSG__encore_libs_master_Ped_util_Agent_passive_Agent__init,
  _ENC__ONEWAY_MSG__encore_libs_master_Ped_util_Agent_passive_Agent_next,
  _ENC__ONEWAY_MSG__encore_libs_master_Ped_util_Agent_passive_Agent_move,
  _ENC__ONEWAY_MSG__encore_libs_master_Ped_util_Agent_passive_Agent_pos,
  _ENC__ONEWAY_MSG__encore_libs_master_Ped_util_Agent_passive_Agent_copy,
  _ENC__ONEWAY_MSG__encore_libs_master_Ped_util_Agent_passive_Agent_hash_adress,
  _ENC__ONEWAY_MSG__encore_libs_master_Ped_util_Agent_passive_Agent_get_hash,
  _ENC__ONEWAY_MSG__encore_libs_master_Ped_util_Agent_passive_Agent_equals,
  _ENC__ONEWAY_MSG__encore_libs_master_Ped_util_Box_Single_Box__init,
  _ENC__ONEWAY_MSG__encore_libs_master_Ped_util_Box_Single_Box_space,
  _ENC__ONEWAY_MSG__encore_libs_master_Ped_util_Box_Single_Box_agents,
  _ENC__ONEWAY_MSG__encore_libs_master_Ped_util_Box_Single_Box_add,
  _ENC__ONEWAY_MSG__encore_libs_master_Ped_util_Box_Single_Box_start,
  _ENC__ONEWAY_MSG__encore_libs_master_Ped_util_Box_Single_Box_move,
  _ENC__ONEWAY_MSG__encore_libs_master_Ped_util_Box_Single_Box_external_move,
  _ENC__ONEWAY_MSG__encore_libs_master_Ped_util_Box_Multi_Box__init,
  _ENC__ONEWAY_MSG__encore_libs_master_Ped_util_Box_Multi_Box_space,
  _ENC__ONEWAY_MSG__encore_libs_master_Ped_util_Box_Multi_Box_add,
  _ENC__ONEWAY_MSG__encore_libs_master_Ped_util_Box_Multi_Box_agents,
  _ENC__ONEWAY_MSG__encore_libs_master_Ped_util_Box_Multi_Box_external_move,
  _ENC__ONEWAY_MSG__encore_libs_master_Ped_util_Box_Multi_Box_move,
  _ENC__ONEWAY_MSG__encore_libs_master_Ped_util_Box_Multi_Box_start,
  _ENC__ONEWAY_MSG__encore_libs_master_Ped_util_Box_Top_Box__init,
  _ENC__ONEWAY_MSG__encore_libs_master_Ped_util_Box_Top_Box_move,
  _ENC__ONEWAY_MSG__encore_libs_master_Ped_util_Box_Top_Box_external_move,
  _ENC__ONEWAY_MSG__encore_libs_master_Ped_util_Box_Top_Box_start,
  _ENC__ONEWAY_MSG__encore_libs_master_Ped_util_Box_Top_Box_max,
  _ENC__ONEWAY_MSG__encore_libs_master_Ped_util_Box_Top_Box_min,
  _ENC__ONEWAY_MSG__encore_libs_master_Ped_util_Box_Top_Box_space,
  _ENC__ONEWAY_MSG__encore_libs_master_Ped_util_Box_Top_Box_agents,
  _ENC__ONEWAY_MSG__encore_libs_master_Ped_util_Box_Top_Box_find_extreme,
  _ENC__ONEWAY_MSG__encore_libs_master_Ped_util_Box_Top_Box_extreme_check,
  _ENC__ONEWAY_MSG__encore_libs_master_Ped_util_Box_Single_Box_face__init,
  _ENC__ONEWAY_MSG__encore_libs_master_Ped_util_Box_Single_Box_face_space,
  _ENC__ONEWAY_MSG__encore_libs_master_Ped_util_Box_Single_Box_face_add,
  _ENC__ONEWAY_MSG__encore_libs_master_Ped_util_Box_Single_Box_face_move,
  _ENC__ONEWAY_MSG__encore_libs_master_Ped_util_Box_Single_Box_face_external_move,
  _ENC__ONEWAY_MSG__encore_libs_master_Ped_util_Box_Single_Box_face_agents,
  _ENC__ONEWAY_MSG__encore_libs_master_Ped_util_Box_Single_Box_face_start,
  _ENC__ONEWAY_MSG__encore_libs_master_Ped_util_Box_Multi_Box_face__init,
  _ENC__ONEWAY_MSG__encore_libs_master_Ped_util_Box_Multi_Box_face_space,
  _ENC__ONEWAY_MSG__encore_libs_master_Ped_util_Box_Multi_Box_face_add,
  _ENC__ONEWAY_MSG__encore_libs_master_Ped_util_Box_Multi_Box_face_move,
  _ENC__ONEWAY_MSG__encore_libs_master_Ped_util_Box_Multi_Box_face_external_move,
  _ENC__ONEWAY_MSG__encore_libs_master_Ped_util_Box_Multi_Box_face_agents,
  _ENC__ONEWAY_MSG__encore_libs_master_Ped_util_Box_Multi_Box_face_start,
  _ENC__ONEWAY_MSG__encore_libs_master_Ped_util_Box_Top_Box_face__init,
  _ENC__ONEWAY_MSG__encore_libs_master_Ped_util_Box_Top_Box_face_space,
  _ENC__ONEWAY_MSG__encore_libs_master_Ped_util_Box_Top_Box_face_add,
  _ENC__ONEWAY_MSG__encore_libs_master_Ped_util_Box_Top_Box_face_move,
  _ENC__ONEWAY_MSG__encore_libs_master_Ped_util_Box_Top_Box_face_external_move,
  _ENC__ONEWAY_MSG__encore_libs_master_Ped_util_Box_Top_Box_face_agents,
  _ENC__ONEWAY_MSG__encore_libs_master_Ped_util_Box_Top_Box_face_start,
  _ENC__ONEWAY_MSG__encore_libs_master_XML_XML_XML_lib__init,
  _ENC__ONEWAY_MSG__encore_libs_master_XML_XML_XML_lib_new_XML_node,
  _ENC__ONEWAY_MSG__encore_libs_master_XML_XML_XML_lib_tag_type,
  _ENC__ONEWAY_MSG__encore_libs_master_XML_XML_XML_lib_ext_atribs,
  _ENC__ONEWAY_MSG__encore_libs_master_XML_XML_XML_lib_or_find_from,
  _ENC__ONEWAY_MSG__encore_libs_master_XML_XML_XML_lib_pair,
  _ENC__ONEWAY_MSG__encore_libs_master_XML_XML_XML_lib_file_to_xml,
  _ENC__ONEWAY_MSG__encore_libs_master_XML_XML_XML_node__init,
  _ENC__ONEWAY_MSG__encore_libs_master_XML_XML_XML_node_children_named,
  _ENC__ONEWAY_MSG__encore_libs_master_XML_XML_XML_node_attribute_value,
  _ENC__ONEWAY_MSG__main_Main__init,
  _ENC__ONEWAY_MSG__main_Main_main,
  _ENC__ONEWAY_MSG__main_Main_loop,
  _ENC__ONEWAY_MSG__main_Main_parse_file,
  _ENC__ONEWAY_MSG_Either_Right__init,
  _ENC__ONEWAY_MSG_Either_Right_Left,
  _ENC__ONEWAY_MSG_Either_Right_Right,
  _ENC__ONEWAY_MSG_Either_Right_map,
  _ENC__ONEWAY_MSG_Either_Right_foreach,
  _ENC__ONEWAY_MSG_Either_Right_flatMap,
  _ENC__ONEWAY_MSG_Either_Left__init,
  _ENC__ONEWAY_MSG_Either_Left_Left,
  _ENC__ONEWAY_MSG_Either_Left_Right,
  _ENC__ONEWAY_MSG_Either_Left_map,
  _ENC__ONEWAY_MSG_Either_Left_foreach,
  _ENC__ONEWAY_MSG_Either_Left_flatMap,
  _ENC__ONEWAY_MSG_String_String__init,
  _ENC__ONEWAY_MSG_String_String_is_empty,
  _ENC__ONEWAY_MSG_String_String_concatenate,
  _ENC__ONEWAY_MSG_String_String_copy,
  _ENC__ONEWAY_MSG_String_String_contains,
  _ENC__ONEWAY_MSG_String_String_contains_ignore_case,
  _ENC__ONEWAY_MSG_String_String_compare,
  _ENC__ONEWAY_MSG_String_String_compare_ignore_case,
  _ENC__ONEWAY_MSG_String_String_to_upper,
  _ENC__ONEWAY_MSG_String_String_to_lower,
  _ENC__ONEWAY_MSG_String_String_length,
  _ENC__ONEWAY_MSG_String_String_size,
  _ENC__ONEWAY_MSG_String_String_substring,
  _ENC__ONEWAY_MSG_String_String_equals,
  _ENC__ONEWAY_MSG_String_String_occurrences,
  _ENC__ONEWAY_MSG_String_String_join,
  _ENC__ONEWAY_MSG_String_String_getData,
  _ENC__ONEWAY_MSG_String_String_trim,
  _ENC__ONEWAY_MSG_String_String_replace,
  _ENC__ONEWAY_MSG_String_String_find,
  _ENC__ONEWAY_MSG_String_String_find_from,
  _ENC__ONEWAY_MSG_String_String_delete,
  _ENC__ONEWAY_MSG_String_String_format,
  _ENC__ONEWAY_MSG_String_String_char_at,
  _ENC__ONEWAY_MSG_String_String_to_array,
  _ENC__ONEWAY_MSG_String_String_split,
  _ENC__ONEWAY_MSG_String_String_to_int,
};


//////////////////
// Message types


typedef struct _enc__fut_msg__encore_libs_master_Collections_HashMap_HashMap__init_t _enc__fut_msg__encore_libs_master_Collections_HashMap_HashMap__init_t;


typedef struct _enc__oneway_msg__encore_libs_master_Collections_HashMap_HashMap__init_t _enc__oneway_msg__encore_libs_master_Collections_HashMap_HashMap__init_t;


typedef struct _enc__fut_msg__encore_libs_master_Collections_HashMap_HashMap_remove_t _enc__fut_msg__encore_libs_master_Collections_HashMap_HashMap_remove_t;


typedef struct _enc__oneway_msg__encore_libs_master_Collections_HashMap_HashMap_remove_t _enc__oneway_msg__encore_libs_master_Collections_HashMap_HashMap_remove_t;


typedef struct _enc__fut_msg__encore_libs_master_Collections_HashMap_HashMap_set_t _enc__fut_msg__encore_libs_master_Collections_HashMap_HashMap_set_t;


typedef struct _enc__oneway_msg__encore_libs_master_Collections_HashMap_HashMap_set_t _enc__oneway_msg__encore_libs_master_Collections_HashMap_HashMap_set_t;


typedef struct _enc__fut_msg__encore_libs_master_Collections_HashMap_HashMap_resize_t _enc__fut_msg__encore_libs_master_Collections_HashMap_HashMap_resize_t;


typedef struct _enc__oneway_msg__encore_libs_master_Collections_HashMap_HashMap_resize_t _enc__oneway_msg__encore_libs_master_Collections_HashMap_HashMap_resize_t;


typedef struct _enc__fut_msg__encore_libs_master_Collections_HashMap_HashMap_get_value_t _enc__fut_msg__encore_libs_master_Collections_HashMap_HashMap_get_value_t;


typedef struct _enc__oneway_msg__encore_libs_master_Collections_HashMap_HashMap_get_value_t _enc__oneway_msg__encore_libs_master_Collections_HashMap_HashMap_get_value_t;


typedef struct _enc__fut_msg__encore_libs_master_Collections_HashMap_HashMapIterator__init_t _enc__fut_msg__encore_libs_master_Collections_HashMap_HashMapIterator__init_t;


typedef struct _enc__oneway_msg__encore_libs_master_Collections_HashMap_HashMapIterator__init_t _enc__oneway_msg__encore_libs_master_Collections_HashMap_HashMapIterator__init_t;


typedef struct _enc__fut_msg__encore_libs_master_Collections_HashMap_HashMapIterator_locate_next_t _enc__fut_msg__encore_libs_master_Collections_HashMap_HashMapIterator_locate_next_t;


typedef struct _enc__oneway_msg__encore_libs_master_Collections_HashMap_HashMapIterator_locate_next_t _enc__oneway_msg__encore_libs_master_Collections_HashMap_HashMapIterator_locate_next_t;


typedef struct _enc__fut_msg__encore_libs_master_Collections_HashMap_HashMapIterator_next_t _enc__fut_msg__encore_libs_master_Collections_HashMap_HashMapIterator_next_t;


typedef struct _enc__oneway_msg__encore_libs_master_Collections_HashMap_HashMapIterator_next_t _enc__oneway_msg__encore_libs_master_Collections_HashMap_HashMapIterator_next_t;


typedef struct _enc__fut_msg__encore_libs_master_Collections_HashMap_HashMapIterator_has_next_t _enc__fut_msg__encore_libs_master_Collections_HashMap_HashMapIterator_has_next_t;


typedef struct _enc__oneway_msg__encore_libs_master_Collections_HashMap_HashMapIterator_has_next_t _enc__oneway_msg__encore_libs_master_Collections_HashMap_HashMapIterator_has_next_t;


typedef struct _enc__fut_msg__encore_libs_master_Collections_HashMap_Entry__init_t _enc__fut_msg__encore_libs_master_Collections_HashMap_Entry__init_t;


typedef struct _enc__oneway_msg__encore_libs_master_Collections_HashMap_Entry__init_t _enc__oneway_msg__encore_libs_master_Collections_HashMap_Entry__init_t;


typedef struct _enc__fut_msg__encore_libs_master_Collections_LinkedList_LinkedIterator__init_t _enc__fut_msg__encore_libs_master_Collections_LinkedList_LinkedIterator__init_t;


typedef struct _enc__oneway_msg__encore_libs_master_Collections_LinkedList_LinkedIterator__init_t _enc__oneway_msg__encore_libs_master_Collections_LinkedList_LinkedIterator__init_t;


typedef struct _enc__fut_msg__encore_libs_master_Collections_LinkedList_LinkedIterator_next_t _enc__fut_msg__encore_libs_master_Collections_LinkedList_LinkedIterator_next_t;


typedef struct _enc__oneway_msg__encore_libs_master_Collections_LinkedList_LinkedIterator_next_t _enc__oneway_msg__encore_libs_master_Collections_LinkedList_LinkedIterator_next_t;


typedef struct _enc__fut_msg__encore_libs_master_Collections_LinkedList_LinkedIterator_has_next_t _enc__fut_msg__encore_libs_master_Collections_LinkedList_LinkedIterator_has_next_t;


typedef struct _enc__oneway_msg__encore_libs_master_Collections_LinkedList_LinkedIterator_has_next_t _enc__oneway_msg__encore_libs_master_Collections_LinkedList_LinkedIterator_has_next_t;


typedef struct _enc__fut_msg__encore_libs_master_Collections_LinkedList_LinkedList__init_t _enc__fut_msg__encore_libs_master_Collections_LinkedList_LinkedList__init_t;


typedef struct _enc__oneway_msg__encore_libs_master_Collections_LinkedList_LinkedList__init_t _enc__oneway_msg__encore_libs_master_Collections_LinkedList_LinkedList__init_t;


typedef struct _enc__fut_msg__encore_libs_master_Collections_LinkedList_LinkedList_iterator_t _enc__fut_msg__encore_libs_master_Collections_LinkedList_LinkedList_iterator_t;


typedef struct _enc__oneway_msg__encore_libs_master_Collections_LinkedList_LinkedList_iterator_t _enc__oneway_msg__encore_libs_master_Collections_LinkedList_LinkedList_iterator_t;


typedef struct _enc__fut_msg__encore_libs_master_Collections_LinkedList_LinkedList_push_t _enc__fut_msg__encore_libs_master_Collections_LinkedList_LinkedList_push_t;


typedef struct _enc__oneway_msg__encore_libs_master_Collections_LinkedList_LinkedList_push_t _enc__oneway_msg__encore_libs_master_Collections_LinkedList_LinkedList_push_t;


typedef struct _enc__fut_msg__encore_libs_master_Collections_LinkedList_LinkedList_drop_t _enc__fut_msg__encore_libs_master_Collections_LinkedList_LinkedList_drop_t;


typedef struct _enc__oneway_msg__encore_libs_master_Collections_LinkedList_LinkedList_drop_t _enc__oneway_msg__encore_libs_master_Collections_LinkedList_LinkedList_drop_t;


typedef struct _enc__fut_msg__encore_libs_master_Collections_LinkedList_LinkedList_remove_all_t _enc__fut_msg__encore_libs_master_Collections_LinkedList_LinkedList_remove_all_t;


typedef struct _enc__oneway_msg__encore_libs_master_Collections_LinkedList_LinkedList_remove_all_t _enc__oneway_msg__encore_libs_master_Collections_LinkedList_LinkedList_remove_all_t;


typedef struct _enc__fut_msg__encore_libs_master_Collections_LinkedList_LinkedNode__init_t _enc__fut_msg__encore_libs_master_Collections_LinkedList_LinkedNode__init_t;


typedef struct _enc__oneway_msg__encore_libs_master_Collections_LinkedList_LinkedNode__init_t _enc__oneway_msg__encore_libs_master_Collections_LinkedList_LinkedNode__init_t;


typedef struct _enc__fut_msg__encore_libs_master_Collections_Siphash_Siphash__init_t _enc__fut_msg__encore_libs_master_Collections_Siphash_Siphash__init_t;


typedef struct _enc__oneway_msg__encore_libs_master_Collections_Siphash_Siphash__init_t _enc__oneway_msg__encore_libs_master_Collections_Siphash_Siphash__init_t;


typedef struct _enc__fut_msg__encore_libs_master_Collections_Siphash_Siphash_hash_t _enc__fut_msg__encore_libs_master_Collections_Siphash_Siphash_hash_t;


typedef struct _enc__oneway_msg__encore_libs_master_Collections_Siphash_Siphash_hash_t _enc__oneway_msg__encore_libs_master_Collections_Siphash_Siphash_hash_t;


typedef struct _enc__fut_msg__encore_libs_master_Collections_Siphash_Siphash_modulo_t _enc__fut_msg__encore_libs_master_Collections_Siphash_Siphash_modulo_t;


typedef struct _enc__oneway_msg__encore_libs_master_Collections_Siphash_Siphash_modulo_t _enc__oneway_msg__encore_libs_master_Collections_Siphash_Siphash_modulo_t;


typedef struct _enc__fut_msg__encore_libs_master_FileIO_IO_File__init_t _enc__fut_msg__encore_libs_master_FileIO_IO_File__init_t;


typedef struct _enc__oneway_msg__encore_libs_master_FileIO_IO_File__init_t _enc__oneway_msg__encore_libs_master_FileIO_IO_File__init_t;


typedef struct _enc__fut_msg__encore_libs_master_FileIO_IO_File_open_t _enc__fut_msg__encore_libs_master_FileIO_IO_File_open_t;


typedef struct _enc__oneway_msg__encore_libs_master_FileIO_IO_File_open_t _enc__oneway_msg__encore_libs_master_FileIO_IO_File_open_t;


typedef struct _enc__fut_msg__encore_libs_master_FileIO_IO_File_close_t _enc__fut_msg__encore_libs_master_FileIO_IO_File_close_t;


typedef struct _enc__oneway_msg__encore_libs_master_FileIO_IO_File_close_t _enc__oneway_msg__encore_libs_master_FileIO_IO_File_close_t;


typedef struct _enc__fut_msg__encore_libs_master_FileIO_IO_File_write_t _enc__fut_msg__encore_libs_master_FileIO_IO_File_write_t;


typedef struct _enc__oneway_msg__encore_libs_master_FileIO_IO_File_write_t _enc__oneway_msg__encore_libs_master_FileIO_IO_File_write_t;


typedef struct _enc__fut_msg__encore_libs_master_FileIO_IO_File_writeChar_t _enc__fut_msg__encore_libs_master_FileIO_IO_File_writeChar_t;


typedef struct _enc__oneway_msg__encore_libs_master_FileIO_IO_File_writeChar_t _enc__oneway_msg__encore_libs_master_FileIO_IO_File_writeChar_t;


typedef struct _enc__fut_msg__encore_libs_master_FileIO_IO_File_readline_t _enc__fut_msg__encore_libs_master_FileIO_IO_File_readline_t;


typedef struct _enc__oneway_msg__encore_libs_master_FileIO_IO_File_readline_t _enc__oneway_msg__encore_libs_master_FileIO_IO_File_readline_t;


typedef struct _enc__fut_msg__encore_libs_master_FileIO_IO_File_readlineChar_t _enc__fut_msg__encore_libs_master_FileIO_IO_File_readlineChar_t;


typedef struct _enc__oneway_msg__encore_libs_master_FileIO_IO_File_readlineChar_t _enc__oneway_msg__encore_libs_master_FileIO_IO_File_readlineChar_t;


typedef struct _enc__fut_msg__encore_libs_master_FileIO_IO_File_eof_t _enc__fut_msg__encore_libs_master_FileIO_IO_File_eof_t;


typedef struct _enc__oneway_msg__encore_libs_master_FileIO_IO_File_eof_t _enc__oneway_msg__encore_libs_master_FileIO_IO_File_eof_t;


typedef struct _enc__fut_msg__encore_libs_master_Ped_util_Agent_passive_Agent_struct__init_t _enc__fut_msg__encore_libs_master_Ped_util_Agent_passive_Agent_struct__init_t;


typedef struct _enc__oneway_msg__encore_libs_master_Ped_util_Agent_passive_Agent_struct__init_t _enc__oneway_msg__encore_libs_master_Ped_util_Agent_passive_Agent_struct__init_t;


typedef struct _enc__fut_msg__encore_libs_master_Ped_util_Agent_passive_Agent_struct_isin_t _enc__fut_msg__encore_libs_master_Ped_util_Agent_passive_Agent_struct_isin_t;


typedef struct _enc__oneway_msg__encore_libs_master_Ped_util_Agent_passive_Agent_struct_isin_t _enc__oneway_msg__encore_libs_master_Ped_util_Agent_passive_Agent_struct_isin_t;


typedef struct _enc__fut_msg__encore_libs_master_Ped_util_Agent_passive_Agent_struct_add_t _enc__fut_msg__encore_libs_master_Ped_util_Agent_passive_Agent_struct_add_t;


typedef struct _enc__oneway_msg__encore_libs_master_Ped_util_Agent_passive_Agent_struct_add_t _enc__oneway_msg__encore_libs_master_Ped_util_Agent_passive_Agent_struct_add_t;


typedef struct _enc__fut_msg__encore_libs_master_Ped_util_Agent_passive_Agent_struct_remove_t _enc__fut_msg__encore_libs_master_Ped_util_Agent_passive_Agent_struct_remove_t;


typedef struct _enc__oneway_msg__encore_libs_master_Ped_util_Agent_passive_Agent_struct_remove_t _enc__oneway_msg__encore_libs_master_Ped_util_Agent_passive_Agent_struct_remove_t;


typedef struct _enc__fut_msg__encore_libs_master_Ped_util_Agent_passive_Agent_struct_size_t _enc__fut_msg__encore_libs_master_Ped_util_Agent_passive_Agent_struct_size_t;


typedef struct _enc__oneway_msg__encore_libs_master_Ped_util_Agent_passive_Agent_struct_size_t _enc__oneway_msg__encore_libs_master_Ped_util_Agent_passive_Agent_struct_size_t;


typedef struct _enc__fut_msg__encore_libs_master_Ped_util_Agent_passive_Agent_struct_get_data_t _enc__fut_msg__encore_libs_master_Ped_util_Agent_passive_Agent_struct_get_data_t;


typedef struct _enc__oneway_msg__encore_libs_master_Ped_util_Agent_passive_Agent_struct_get_data_t _enc__oneway_msg__encore_libs_master_Ped_util_Agent_passive_Agent_struct_get_data_t;


typedef struct _enc__fut_msg__encore_libs_master_Ped_util_Agent_passive_Agent__init_t _enc__fut_msg__encore_libs_master_Ped_util_Agent_passive_Agent__init_t;


typedef struct _enc__oneway_msg__encore_libs_master_Ped_util_Agent_passive_Agent__init_t _enc__oneway_msg__encore_libs_master_Ped_util_Agent_passive_Agent__init_t;


typedef struct _enc__fut_msg__encore_libs_master_Ped_util_Agent_passive_Agent_next_t _enc__fut_msg__encore_libs_master_Ped_util_Agent_passive_Agent_next_t;


typedef struct _enc__oneway_msg__encore_libs_master_Ped_util_Agent_passive_Agent_next_t _enc__oneway_msg__encore_libs_master_Ped_util_Agent_passive_Agent_next_t;


typedef struct _enc__fut_msg__encore_libs_master_Ped_util_Agent_passive_Agent_move_t _enc__fut_msg__encore_libs_master_Ped_util_Agent_passive_Agent_move_t;


typedef struct _enc__oneway_msg__encore_libs_master_Ped_util_Agent_passive_Agent_move_t _enc__oneway_msg__encore_libs_master_Ped_util_Agent_passive_Agent_move_t;


typedef struct _enc__fut_msg__encore_libs_master_Ped_util_Agent_passive_Agent_pos_t _enc__fut_msg__encore_libs_master_Ped_util_Agent_passive_Agent_pos_t;


typedef struct _enc__oneway_msg__encore_libs_master_Ped_util_Agent_passive_Agent_pos_t _enc__oneway_msg__encore_libs_master_Ped_util_Agent_passive_Agent_pos_t;


typedef struct _enc__fut_msg__encore_libs_master_Ped_util_Agent_passive_Agent_copy_t _enc__fut_msg__encore_libs_master_Ped_util_Agent_passive_Agent_copy_t;


typedef struct _enc__oneway_msg__encore_libs_master_Ped_util_Agent_passive_Agent_copy_t _enc__oneway_msg__encore_libs_master_Ped_util_Agent_passive_Agent_copy_t;


typedef struct _enc__fut_msg__encore_libs_master_Ped_util_Agent_passive_Agent_hash_adress_t _enc__fut_msg__encore_libs_master_Ped_util_Agent_passive_Agent_hash_adress_t;


typedef struct _enc__oneway_msg__encore_libs_master_Ped_util_Agent_passive_Agent_hash_adress_t _enc__oneway_msg__encore_libs_master_Ped_util_Agent_passive_Agent_hash_adress_t;


typedef struct _enc__fut_msg__encore_libs_master_Ped_util_Agent_passive_Agent_get_hash_t _enc__fut_msg__encore_libs_master_Ped_util_Agent_passive_Agent_get_hash_t;


typedef struct _enc__oneway_msg__encore_libs_master_Ped_util_Agent_passive_Agent_get_hash_t _enc__oneway_msg__encore_libs_master_Ped_util_Agent_passive_Agent_get_hash_t;


typedef struct _enc__fut_msg__encore_libs_master_Ped_util_Agent_passive_Agent_equals_t _enc__fut_msg__encore_libs_master_Ped_util_Agent_passive_Agent_equals_t;


typedef struct _enc__oneway_msg__encore_libs_master_Ped_util_Agent_passive_Agent_equals_t _enc__oneway_msg__encore_libs_master_Ped_util_Agent_passive_Agent_equals_t;


typedef struct _enc__fut_msg__encore_libs_master_Ped_util_Box_Single_Box__init_t _enc__fut_msg__encore_libs_master_Ped_util_Box_Single_Box__init_t;


typedef struct _enc__oneway_msg__encore_libs_master_Ped_util_Box_Single_Box__init_t _enc__oneway_msg__encore_libs_master_Ped_util_Box_Single_Box__init_t;


typedef struct _enc__fut_msg__encore_libs_master_Ped_util_Box_Single_Box_space_t _enc__fut_msg__encore_libs_master_Ped_util_Box_Single_Box_space_t;


typedef struct _enc__oneway_msg__encore_libs_master_Ped_util_Box_Single_Box_space_t _enc__oneway_msg__encore_libs_master_Ped_util_Box_Single_Box_space_t;


typedef struct _enc__fut_msg__encore_libs_master_Ped_util_Box_Single_Box_agents_t _enc__fut_msg__encore_libs_master_Ped_util_Box_Single_Box_agents_t;


typedef struct _enc__oneway_msg__encore_libs_master_Ped_util_Box_Single_Box_agents_t _enc__oneway_msg__encore_libs_master_Ped_util_Box_Single_Box_agents_t;


typedef struct _enc__fut_msg__encore_libs_master_Ped_util_Box_Single_Box_add_t _enc__fut_msg__encore_libs_master_Ped_util_Box_Single_Box_add_t;


typedef struct _enc__oneway_msg__encore_libs_master_Ped_util_Box_Single_Box_add_t _enc__oneway_msg__encore_libs_master_Ped_util_Box_Single_Box_add_t;


typedef struct _enc__fut_msg__encore_libs_master_Ped_util_Box_Single_Box_start_t _enc__fut_msg__encore_libs_master_Ped_util_Box_Single_Box_start_t;


typedef struct _enc__oneway_msg__encore_libs_master_Ped_util_Box_Single_Box_start_t _enc__oneway_msg__encore_libs_master_Ped_util_Box_Single_Box_start_t;


typedef struct _enc__fut_msg__encore_libs_master_Ped_util_Box_Single_Box_move_t _enc__fut_msg__encore_libs_master_Ped_util_Box_Single_Box_move_t;


typedef struct _enc__oneway_msg__encore_libs_master_Ped_util_Box_Single_Box_move_t _enc__oneway_msg__encore_libs_master_Ped_util_Box_Single_Box_move_t;


typedef struct _enc__fut_msg__encore_libs_master_Ped_util_Box_Single_Box_external_move_t _enc__fut_msg__encore_libs_master_Ped_util_Box_Single_Box_external_move_t;


typedef struct _enc__oneway_msg__encore_libs_master_Ped_util_Box_Single_Box_external_move_t _enc__oneway_msg__encore_libs_master_Ped_util_Box_Single_Box_external_move_t;


typedef struct _enc__fut_msg__encore_libs_master_Ped_util_Box_Multi_Box__init_t _enc__fut_msg__encore_libs_master_Ped_util_Box_Multi_Box__init_t;


typedef struct _enc__oneway_msg__encore_libs_master_Ped_util_Box_Multi_Box__init_t _enc__oneway_msg__encore_libs_master_Ped_util_Box_Multi_Box__init_t;


typedef struct _enc__fut_msg__encore_libs_master_Ped_util_Box_Multi_Box_space_t _enc__fut_msg__encore_libs_master_Ped_util_Box_Multi_Box_space_t;


typedef struct _enc__oneway_msg__encore_libs_master_Ped_util_Box_Multi_Box_space_t _enc__oneway_msg__encore_libs_master_Ped_util_Box_Multi_Box_space_t;


typedef struct _enc__fut_msg__encore_libs_master_Ped_util_Box_Multi_Box_add_t _enc__fut_msg__encore_libs_master_Ped_util_Box_Multi_Box_add_t;


typedef struct _enc__oneway_msg__encore_libs_master_Ped_util_Box_Multi_Box_add_t _enc__oneway_msg__encore_libs_master_Ped_util_Box_Multi_Box_add_t;


typedef struct _enc__fut_msg__encore_libs_master_Ped_util_Box_Multi_Box_agents_t _enc__fut_msg__encore_libs_master_Ped_util_Box_Multi_Box_agents_t;


typedef struct _enc__oneway_msg__encore_libs_master_Ped_util_Box_Multi_Box_agents_t _enc__oneway_msg__encore_libs_master_Ped_util_Box_Multi_Box_agents_t;


typedef struct _enc__fut_msg__encore_libs_master_Ped_util_Box_Multi_Box_external_move_t _enc__fut_msg__encore_libs_master_Ped_util_Box_Multi_Box_external_move_t;


typedef struct _enc__oneway_msg__encore_libs_master_Ped_util_Box_Multi_Box_external_move_t _enc__oneway_msg__encore_libs_master_Ped_util_Box_Multi_Box_external_move_t;


typedef struct _enc__fut_msg__encore_libs_master_Ped_util_Box_Multi_Box_move_t _enc__fut_msg__encore_libs_master_Ped_util_Box_Multi_Box_move_t;


typedef struct _enc__oneway_msg__encore_libs_master_Ped_util_Box_Multi_Box_move_t _enc__oneway_msg__encore_libs_master_Ped_util_Box_Multi_Box_move_t;


typedef struct _enc__fut_msg__encore_libs_master_Ped_util_Box_Multi_Box_start_t _enc__fut_msg__encore_libs_master_Ped_util_Box_Multi_Box_start_t;


typedef struct _enc__oneway_msg__encore_libs_master_Ped_util_Box_Multi_Box_start_t _enc__oneway_msg__encore_libs_master_Ped_util_Box_Multi_Box_start_t;


typedef struct _enc__fut_msg__encore_libs_master_Ped_util_Box_Top_Box__init_t _enc__fut_msg__encore_libs_master_Ped_util_Box_Top_Box__init_t;


typedef struct _enc__oneway_msg__encore_libs_master_Ped_util_Box_Top_Box__init_t _enc__oneway_msg__encore_libs_master_Ped_util_Box_Top_Box__init_t;


typedef struct _enc__fut_msg__encore_libs_master_Ped_util_Box_Top_Box_move_t _enc__fut_msg__encore_libs_master_Ped_util_Box_Top_Box_move_t;


typedef struct _enc__oneway_msg__encore_libs_master_Ped_util_Box_Top_Box_move_t _enc__oneway_msg__encore_libs_master_Ped_util_Box_Top_Box_move_t;


typedef struct _enc__fut_msg__encore_libs_master_Ped_util_Box_Top_Box_external_move_t _enc__fut_msg__encore_libs_master_Ped_util_Box_Top_Box_external_move_t;


typedef struct _enc__oneway_msg__encore_libs_master_Ped_util_Box_Top_Box_external_move_t _enc__oneway_msg__encore_libs_master_Ped_util_Box_Top_Box_external_move_t;


typedef struct _enc__fut_msg__encore_libs_master_Ped_util_Box_Top_Box_start_t _enc__fut_msg__encore_libs_master_Ped_util_Box_Top_Box_start_t;


typedef struct _enc__oneway_msg__encore_libs_master_Ped_util_Box_Top_Box_start_t _enc__oneway_msg__encore_libs_master_Ped_util_Box_Top_Box_start_t;


typedef struct _enc__fut_msg__encore_libs_master_Ped_util_Box_Top_Box_max_t _enc__fut_msg__encore_libs_master_Ped_util_Box_Top_Box_max_t;


typedef struct _enc__oneway_msg__encore_libs_master_Ped_util_Box_Top_Box_max_t _enc__oneway_msg__encore_libs_master_Ped_util_Box_Top_Box_max_t;


typedef struct _enc__fut_msg__encore_libs_master_Ped_util_Box_Top_Box_min_t _enc__fut_msg__encore_libs_master_Ped_util_Box_Top_Box_min_t;


typedef struct _enc__oneway_msg__encore_libs_master_Ped_util_Box_Top_Box_min_t _enc__oneway_msg__encore_libs_master_Ped_util_Box_Top_Box_min_t;


typedef struct _enc__fut_msg__encore_libs_master_Ped_util_Box_Top_Box_space_t _enc__fut_msg__encore_libs_master_Ped_util_Box_Top_Box_space_t;


typedef struct _enc__oneway_msg__encore_libs_master_Ped_util_Box_Top_Box_space_t _enc__oneway_msg__encore_libs_master_Ped_util_Box_Top_Box_space_t;


typedef struct _enc__fut_msg__encore_libs_master_Ped_util_Box_Top_Box_agents_t _enc__fut_msg__encore_libs_master_Ped_util_Box_Top_Box_agents_t;


typedef struct _enc__oneway_msg__encore_libs_master_Ped_util_Box_Top_Box_agents_t _enc__oneway_msg__encore_libs_master_Ped_util_Box_Top_Box_agents_t;


typedef struct _enc__fut_msg__encore_libs_master_Ped_util_Box_Top_Box_find_extreme_t _enc__fut_msg__encore_libs_master_Ped_util_Box_Top_Box_find_extreme_t;


typedef struct _enc__oneway_msg__encore_libs_master_Ped_util_Box_Top_Box_find_extreme_t _enc__oneway_msg__encore_libs_master_Ped_util_Box_Top_Box_find_extreme_t;


typedef struct _enc__fut_msg__encore_libs_master_Ped_util_Box_Top_Box_extreme_check_t _enc__fut_msg__encore_libs_master_Ped_util_Box_Top_Box_extreme_check_t;


typedef struct _enc__oneway_msg__encore_libs_master_Ped_util_Box_Top_Box_extreme_check_t _enc__oneway_msg__encore_libs_master_Ped_util_Box_Top_Box_extreme_check_t;


typedef struct _enc__fut_msg__encore_libs_master_Ped_util_Box_Single_Box_face__init_t _enc__fut_msg__encore_libs_master_Ped_util_Box_Single_Box_face__init_t;


typedef struct _enc__oneway_msg__encore_libs_master_Ped_util_Box_Single_Box_face__init_t _enc__oneway_msg__encore_libs_master_Ped_util_Box_Single_Box_face__init_t;


typedef struct _enc__fut_msg__encore_libs_master_Ped_util_Box_Single_Box_face_space_t _enc__fut_msg__encore_libs_master_Ped_util_Box_Single_Box_face_space_t;


typedef struct _enc__oneway_msg__encore_libs_master_Ped_util_Box_Single_Box_face_space_t _enc__oneway_msg__encore_libs_master_Ped_util_Box_Single_Box_face_space_t;


typedef struct _enc__fut_msg__encore_libs_master_Ped_util_Box_Single_Box_face_add_t _enc__fut_msg__encore_libs_master_Ped_util_Box_Single_Box_face_add_t;


typedef struct _enc__oneway_msg__encore_libs_master_Ped_util_Box_Single_Box_face_add_t _enc__oneway_msg__encore_libs_master_Ped_util_Box_Single_Box_face_add_t;


typedef struct _enc__fut_msg__encore_libs_master_Ped_util_Box_Single_Box_face_move_t _enc__fut_msg__encore_libs_master_Ped_util_Box_Single_Box_face_move_t;


typedef struct _enc__oneway_msg__encore_libs_master_Ped_util_Box_Single_Box_face_move_t _enc__oneway_msg__encore_libs_master_Ped_util_Box_Single_Box_face_move_t;


typedef struct _enc__fut_msg__encore_libs_master_Ped_util_Box_Single_Box_face_external_move_t _enc__fut_msg__encore_libs_master_Ped_util_Box_Single_Box_face_external_move_t;


typedef struct _enc__oneway_msg__encore_libs_master_Ped_util_Box_Single_Box_face_external_move_t _enc__oneway_msg__encore_libs_master_Ped_util_Box_Single_Box_face_external_move_t;


typedef struct _enc__fut_msg__encore_libs_master_Ped_util_Box_Single_Box_face_agents_t _enc__fut_msg__encore_libs_master_Ped_util_Box_Single_Box_face_agents_t;


typedef struct _enc__oneway_msg__encore_libs_master_Ped_util_Box_Single_Box_face_agents_t _enc__oneway_msg__encore_libs_master_Ped_util_Box_Single_Box_face_agents_t;


typedef struct _enc__fut_msg__encore_libs_master_Ped_util_Box_Single_Box_face_start_t _enc__fut_msg__encore_libs_master_Ped_util_Box_Single_Box_face_start_t;


typedef struct _enc__oneway_msg__encore_libs_master_Ped_util_Box_Single_Box_face_start_t _enc__oneway_msg__encore_libs_master_Ped_util_Box_Single_Box_face_start_t;


typedef struct _enc__fut_msg__encore_libs_master_Ped_util_Box_Multi_Box_face__init_t _enc__fut_msg__encore_libs_master_Ped_util_Box_Multi_Box_face__init_t;


typedef struct _enc__oneway_msg__encore_libs_master_Ped_util_Box_Multi_Box_face__init_t _enc__oneway_msg__encore_libs_master_Ped_util_Box_Multi_Box_face__init_t;


typedef struct _enc__fut_msg__encore_libs_master_Ped_util_Box_Multi_Box_face_space_t _enc__fut_msg__encore_libs_master_Ped_util_Box_Multi_Box_face_space_t;


typedef struct _enc__oneway_msg__encore_libs_master_Ped_util_Box_Multi_Box_face_space_t _enc__oneway_msg__encore_libs_master_Ped_util_Box_Multi_Box_face_space_t;


typedef struct _enc__fut_msg__encore_libs_master_Ped_util_Box_Multi_Box_face_add_t _enc__fut_msg__encore_libs_master_Ped_util_Box_Multi_Box_face_add_t;


typedef struct _enc__oneway_msg__encore_libs_master_Ped_util_Box_Multi_Box_face_add_t _enc__oneway_msg__encore_libs_master_Ped_util_Box_Multi_Box_face_add_t;


typedef struct _enc__fut_msg__encore_libs_master_Ped_util_Box_Multi_Box_face_move_t _enc__fut_msg__encore_libs_master_Ped_util_Box_Multi_Box_face_move_t;


typedef struct _enc__oneway_msg__encore_libs_master_Ped_util_Box_Multi_Box_face_move_t _enc__oneway_msg__encore_libs_master_Ped_util_Box_Multi_Box_face_move_t;


typedef struct _enc__fut_msg__encore_libs_master_Ped_util_Box_Multi_Box_face_external_move_t _enc__fut_msg__encore_libs_master_Ped_util_Box_Multi_Box_face_external_move_t;


typedef struct _enc__oneway_msg__encore_libs_master_Ped_util_Box_Multi_Box_face_external_move_t _enc__oneway_msg__encore_libs_master_Ped_util_Box_Multi_Box_face_external_move_t;


typedef struct _enc__fut_msg__encore_libs_master_Ped_util_Box_Multi_Box_face_agents_t _enc__fut_msg__encore_libs_master_Ped_util_Box_Multi_Box_face_agents_t;


typedef struct _enc__oneway_msg__encore_libs_master_Ped_util_Box_Multi_Box_face_agents_t _enc__oneway_msg__encore_libs_master_Ped_util_Box_Multi_Box_face_agents_t;


typedef struct _enc__fut_msg__encore_libs_master_Ped_util_Box_Multi_Box_face_start_t _enc__fut_msg__encore_libs_master_Ped_util_Box_Multi_Box_face_start_t;


typedef struct _enc__oneway_msg__encore_libs_master_Ped_util_Box_Multi_Box_face_start_t _enc__oneway_msg__encore_libs_master_Ped_util_Box_Multi_Box_face_start_t;


typedef struct _enc__fut_msg__encore_libs_master_Ped_util_Box_Top_Box_face__init_t _enc__fut_msg__encore_libs_master_Ped_util_Box_Top_Box_face__init_t;


typedef struct _enc__oneway_msg__encore_libs_master_Ped_util_Box_Top_Box_face__init_t _enc__oneway_msg__encore_libs_master_Ped_util_Box_Top_Box_face__init_t;


typedef struct _enc__fut_msg__encore_libs_master_Ped_util_Box_Top_Box_face_space_t _enc__fut_msg__encore_libs_master_Ped_util_Box_Top_Box_face_space_t;


typedef struct _enc__oneway_msg__encore_libs_master_Ped_util_Box_Top_Box_face_space_t _enc__oneway_msg__encore_libs_master_Ped_util_Box_Top_Box_face_space_t;


typedef struct _enc__fut_msg__encore_libs_master_Ped_util_Box_Top_Box_face_add_t _enc__fut_msg__encore_libs_master_Ped_util_Box_Top_Box_face_add_t;


typedef struct _enc__oneway_msg__encore_libs_master_Ped_util_Box_Top_Box_face_add_t _enc__oneway_msg__encore_libs_master_Ped_util_Box_Top_Box_face_add_t;


typedef struct _enc__fut_msg__encore_libs_master_Ped_util_Box_Top_Box_face_move_t _enc__fut_msg__encore_libs_master_Ped_util_Box_Top_Box_face_move_t;


typedef struct _enc__oneway_msg__encore_libs_master_Ped_util_Box_Top_Box_face_move_t _enc__oneway_msg__encore_libs_master_Ped_util_Box_Top_Box_face_move_t;


typedef struct _enc__fut_msg__encore_libs_master_Ped_util_Box_Top_Box_face_external_move_t _enc__fut_msg__encore_libs_master_Ped_util_Box_Top_Box_face_external_move_t;


typedef struct _enc__oneway_msg__encore_libs_master_Ped_util_Box_Top_Box_face_external_move_t _enc__oneway_msg__encore_libs_master_Ped_util_Box_Top_Box_face_external_move_t;


typedef struct _enc__fut_msg__encore_libs_master_Ped_util_Box_Top_Box_face_agents_t _enc__fut_msg__encore_libs_master_Ped_util_Box_Top_Box_face_agents_t;


typedef struct _enc__oneway_msg__encore_libs_master_Ped_util_Box_Top_Box_face_agents_t _enc__oneway_msg__encore_libs_master_Ped_util_Box_Top_Box_face_agents_t;


typedef struct _enc__fut_msg__encore_libs_master_Ped_util_Box_Top_Box_face_start_t _enc__fut_msg__encore_libs_master_Ped_util_Box_Top_Box_face_start_t;


typedef struct _enc__oneway_msg__encore_libs_master_Ped_util_Box_Top_Box_face_start_t _enc__oneway_msg__encore_libs_master_Ped_util_Box_Top_Box_face_start_t;


typedef struct _enc__fut_msg__encore_libs_master_XML_XML_XML_lib__init_t _enc__fut_msg__encore_libs_master_XML_XML_XML_lib__init_t;


typedef struct _enc__oneway_msg__encore_libs_master_XML_XML_XML_lib__init_t _enc__oneway_msg__encore_libs_master_XML_XML_XML_lib__init_t;


typedef struct _enc__fut_msg__encore_libs_master_XML_XML_XML_lib_new_XML_node_t _enc__fut_msg__encore_libs_master_XML_XML_XML_lib_new_XML_node_t;


typedef struct _enc__oneway_msg__encore_libs_master_XML_XML_XML_lib_new_XML_node_t _enc__oneway_msg__encore_libs_master_XML_XML_XML_lib_new_XML_node_t;


typedef struct _enc__fut_msg__encore_libs_master_XML_XML_XML_lib_tag_type_t _enc__fut_msg__encore_libs_master_XML_XML_XML_lib_tag_type_t;


typedef struct _enc__oneway_msg__encore_libs_master_XML_XML_XML_lib_tag_type_t _enc__oneway_msg__encore_libs_master_XML_XML_XML_lib_tag_type_t;


typedef struct _enc__fut_msg__encore_libs_master_XML_XML_XML_lib_ext_atribs_t _enc__fut_msg__encore_libs_master_XML_XML_XML_lib_ext_atribs_t;


typedef struct _enc__oneway_msg__encore_libs_master_XML_XML_XML_lib_ext_atribs_t _enc__oneway_msg__encore_libs_master_XML_XML_XML_lib_ext_atribs_t;


typedef struct _enc__fut_msg__encore_libs_master_XML_XML_XML_lib_or_find_from_t _enc__fut_msg__encore_libs_master_XML_XML_XML_lib_or_find_from_t;


typedef struct _enc__oneway_msg__encore_libs_master_XML_XML_XML_lib_or_find_from_t _enc__oneway_msg__encore_libs_master_XML_XML_XML_lib_or_find_from_t;


typedef struct _enc__fut_msg__encore_libs_master_XML_XML_XML_lib_pair_t _enc__fut_msg__encore_libs_master_XML_XML_XML_lib_pair_t;


typedef struct _enc__oneway_msg__encore_libs_master_XML_XML_XML_lib_pair_t _enc__oneway_msg__encore_libs_master_XML_XML_XML_lib_pair_t;


typedef struct _enc__fut_msg__encore_libs_master_XML_XML_XML_lib_file_to_xml_t _enc__fut_msg__encore_libs_master_XML_XML_XML_lib_file_to_xml_t;


typedef struct _enc__oneway_msg__encore_libs_master_XML_XML_XML_lib_file_to_xml_t _enc__oneway_msg__encore_libs_master_XML_XML_XML_lib_file_to_xml_t;


typedef struct _enc__fut_msg__encore_libs_master_XML_XML_XML_node__init_t _enc__fut_msg__encore_libs_master_XML_XML_XML_node__init_t;


typedef struct _enc__oneway_msg__encore_libs_master_XML_XML_XML_node__init_t _enc__oneway_msg__encore_libs_master_XML_XML_XML_node__init_t;


typedef struct _enc__fut_msg__encore_libs_master_XML_XML_XML_node_children_named_t _enc__fut_msg__encore_libs_master_XML_XML_XML_node_children_named_t;


typedef struct _enc__oneway_msg__encore_libs_master_XML_XML_XML_node_children_named_t _enc__oneway_msg__encore_libs_master_XML_XML_XML_node_children_named_t;


typedef struct _enc__fut_msg__encore_libs_master_XML_XML_XML_node_attribute_value_t _enc__fut_msg__encore_libs_master_XML_XML_XML_node_attribute_value_t;


typedef struct _enc__oneway_msg__encore_libs_master_XML_XML_XML_node_attribute_value_t _enc__oneway_msg__encore_libs_master_XML_XML_XML_node_attribute_value_t;


typedef struct _enc__fut_msg__main_Main__init_t _enc__fut_msg__main_Main__init_t;


typedef struct _enc__oneway_msg__main_Main__init_t _enc__oneway_msg__main_Main__init_t;


typedef struct _enc__fut_msg__main_Main_main_t _enc__fut_msg__main_Main_main_t;


typedef struct _enc__oneway_msg__main_Main_main_t _enc__oneway_msg__main_Main_main_t;


typedef struct _enc__fut_msg__main_Main_loop_t _enc__fut_msg__main_Main_loop_t;


typedef struct _enc__oneway_msg__main_Main_loop_t _enc__oneway_msg__main_Main_loop_t;


typedef struct _enc__fut_msg__main_Main_parse_file_t _enc__fut_msg__main_Main_parse_file_t;


typedef struct _enc__oneway_msg__main_Main_parse_file_t _enc__oneway_msg__main_Main_parse_file_t;


typedef struct _enc__fut_msg_Either_Right__init_t _enc__fut_msg_Either_Right__init_t;


typedef struct _enc__oneway_msg_Either_Right__init_t _enc__oneway_msg_Either_Right__init_t;


typedef struct _enc__fut_msg_Either_Right_Left_t _enc__fut_msg_Either_Right_Left_t;


typedef struct _enc__oneway_msg_Either_Right_Left_t _enc__oneway_msg_Either_Right_Left_t;


typedef struct _enc__fut_msg_Either_Right_Right_t _enc__fut_msg_Either_Right_Right_t;


typedef struct _enc__oneway_msg_Either_Right_Right_t _enc__oneway_msg_Either_Right_Right_t;


typedef struct _enc__fut_msg_Either_Right_map_t _enc__fut_msg_Either_Right_map_t;


typedef struct _enc__oneway_msg_Either_Right_map_t _enc__oneway_msg_Either_Right_map_t;


typedef struct _enc__fut_msg_Either_Right_foreach_t _enc__fut_msg_Either_Right_foreach_t;


typedef struct _enc__oneway_msg_Either_Right_foreach_t _enc__oneway_msg_Either_Right_foreach_t;


typedef struct _enc__fut_msg_Either_Right_flatMap_t _enc__fut_msg_Either_Right_flatMap_t;


typedef struct _enc__oneway_msg_Either_Right_flatMap_t _enc__oneway_msg_Either_Right_flatMap_t;


typedef struct _enc__fut_msg_Either_Left__init_t _enc__fut_msg_Either_Left__init_t;


typedef struct _enc__oneway_msg_Either_Left__init_t _enc__oneway_msg_Either_Left__init_t;


typedef struct _enc__fut_msg_Either_Left_Left_t _enc__fut_msg_Either_Left_Left_t;


typedef struct _enc__oneway_msg_Either_Left_Left_t _enc__oneway_msg_Either_Left_Left_t;


typedef struct _enc__fut_msg_Either_Left_Right_t _enc__fut_msg_Either_Left_Right_t;


typedef struct _enc__oneway_msg_Either_Left_Right_t _enc__oneway_msg_Either_Left_Right_t;


typedef struct _enc__fut_msg_Either_Left_map_t _enc__fut_msg_Either_Left_map_t;


typedef struct _enc__oneway_msg_Either_Left_map_t _enc__oneway_msg_Either_Left_map_t;


typedef struct _enc__fut_msg_Either_Left_foreach_t _enc__fut_msg_Either_Left_foreach_t;


typedef struct _enc__oneway_msg_Either_Left_foreach_t _enc__oneway_msg_Either_Left_foreach_t;


typedef struct _enc__fut_msg_Either_Left_flatMap_t _enc__fut_msg_Either_Left_flatMap_t;


typedef struct _enc__oneway_msg_Either_Left_flatMap_t _enc__oneway_msg_Either_Left_flatMap_t;


typedef struct _enc__fut_msg_String_String__init_t _enc__fut_msg_String_String__init_t;


typedef struct _enc__oneway_msg_String_String__init_t _enc__oneway_msg_String_String__init_t;


typedef struct _enc__fut_msg_String_String_is_empty_t _enc__fut_msg_String_String_is_empty_t;


typedef struct _enc__oneway_msg_String_String_is_empty_t _enc__oneway_msg_String_String_is_empty_t;


typedef struct _enc__fut_msg_String_String_concatenate_t _enc__fut_msg_String_String_concatenate_t;


typedef struct _enc__oneway_msg_String_String_concatenate_t _enc__oneway_msg_String_String_concatenate_t;


typedef struct _enc__fut_msg_String_String_copy_t _enc__fut_msg_String_String_copy_t;


typedef struct _enc__oneway_msg_String_String_copy_t _enc__oneway_msg_String_String_copy_t;


typedef struct _enc__fut_msg_String_String_contains_t _enc__fut_msg_String_String_contains_t;


typedef struct _enc__oneway_msg_String_String_contains_t _enc__oneway_msg_String_String_contains_t;


typedef struct _enc__fut_msg_String_String_contains_ignore_case_t _enc__fut_msg_String_String_contains_ignore_case_t;


typedef struct _enc__oneway_msg_String_String_contains_ignore_case_t _enc__oneway_msg_String_String_contains_ignore_case_t;


typedef struct _enc__fut_msg_String_String_compare_t _enc__fut_msg_String_String_compare_t;


typedef struct _enc__oneway_msg_String_String_compare_t _enc__oneway_msg_String_String_compare_t;


typedef struct _enc__fut_msg_String_String_compare_ignore_case_t _enc__fut_msg_String_String_compare_ignore_case_t;


typedef struct _enc__oneway_msg_String_String_compare_ignore_case_t _enc__oneway_msg_String_String_compare_ignore_case_t;


typedef struct _enc__fut_msg_String_String_to_upper_t _enc__fut_msg_String_String_to_upper_t;


typedef struct _enc__oneway_msg_String_String_to_upper_t _enc__oneway_msg_String_String_to_upper_t;


typedef struct _enc__fut_msg_String_String_to_lower_t _enc__fut_msg_String_String_to_lower_t;


typedef struct _enc__oneway_msg_String_String_to_lower_t _enc__oneway_msg_String_String_to_lower_t;


typedef struct _enc__fut_msg_String_String_length_t _enc__fut_msg_String_String_length_t;


typedef struct _enc__oneway_msg_String_String_length_t _enc__oneway_msg_String_String_length_t;


typedef struct _enc__fut_msg_String_String_size_t _enc__fut_msg_String_String_size_t;


typedef struct _enc__oneway_msg_String_String_size_t _enc__oneway_msg_String_String_size_t;


typedef struct _enc__fut_msg_String_String_substring_t _enc__fut_msg_String_String_substring_t;


typedef struct _enc__oneway_msg_String_String_substring_t _enc__oneway_msg_String_String_substring_t;


typedef struct _enc__fut_msg_String_String_equals_t _enc__fut_msg_String_String_equals_t;


typedef struct _enc__oneway_msg_String_String_equals_t _enc__oneway_msg_String_String_equals_t;


typedef struct _enc__fut_msg_String_String_occurrences_t _enc__fut_msg_String_String_occurrences_t;


typedef struct _enc__oneway_msg_String_String_occurrences_t _enc__oneway_msg_String_String_occurrences_t;


typedef struct _enc__fut_msg_String_String_join_t _enc__fut_msg_String_String_join_t;


typedef struct _enc__oneway_msg_String_String_join_t _enc__oneway_msg_String_String_join_t;


typedef struct _enc__fut_msg_String_String_getData_t _enc__fut_msg_String_String_getData_t;


typedef struct _enc__oneway_msg_String_String_getData_t _enc__oneway_msg_String_String_getData_t;


typedef struct _enc__fut_msg_String_String_trim_t _enc__fut_msg_String_String_trim_t;


typedef struct _enc__oneway_msg_String_String_trim_t _enc__oneway_msg_String_String_trim_t;


typedef struct _enc__fut_msg_String_String_replace_t _enc__fut_msg_String_String_replace_t;


typedef struct _enc__oneway_msg_String_String_replace_t _enc__oneway_msg_String_String_replace_t;


typedef struct _enc__fut_msg_String_String_find_t _enc__fut_msg_String_String_find_t;


typedef struct _enc__oneway_msg_String_String_find_t _enc__oneway_msg_String_String_find_t;


typedef struct _enc__fut_msg_String_String_find_from_t _enc__fut_msg_String_String_find_from_t;


typedef struct _enc__oneway_msg_String_String_find_from_t _enc__oneway_msg_String_String_find_from_t;


typedef struct _enc__fut_msg_String_String_delete_t _enc__fut_msg_String_String_delete_t;


typedef struct _enc__oneway_msg_String_String_delete_t _enc__oneway_msg_String_String_delete_t;


typedef struct _enc__fut_msg_String_String_format_t _enc__fut_msg_String_String_format_t;


typedef struct _enc__oneway_msg_String_String_format_t _enc__oneway_msg_String_String_format_t;


typedef struct _enc__fut_msg_String_String_char_at_t _enc__fut_msg_String_String_char_at_t;


typedef struct _enc__oneway_msg_String_String_char_at_t _enc__oneway_msg_String_String_char_at_t;


typedef struct _enc__fut_msg_String_String_to_array_t _enc__fut_msg_String_String_to_array_t;


typedef struct _enc__oneway_msg_String_String_to_array_t _enc__oneway_msg_String_String_to_array_t;


typedef struct _enc__fut_msg_String_String_split_t _enc__fut_msg_String_String_split_t;


typedef struct _enc__oneway_msg_String_String_split_t _enc__oneway_msg_String_String_split_t;


typedef struct _enc__fut_msg_String_String_to_int_t _enc__fut_msg_String_String_to_int_t;


typedef struct _enc__oneway_msg_String_String_to_int_t _enc__oneway_msg_String_String_to_int_t;


struct _enc__fut_msg__encore_libs_master_Collections_HashMap_HashMap__init_t
{
  encore_fut_msg_t ;
};


struct _enc__oneway_msg__encore_libs_master_Collections_HashMap_HashMap__init_t
{
  encore_oneway_msg_t msg;
};


struct _enc__fut_msg__encore_libs_master_Collections_HashMap_HashMap_remove_t
{
  encore_fut_msg_t ;
  _enc__trait__encore_libs_master_Collections_HashCode_HashCode_t* f1 /* key */;
};


struct _enc__oneway_msg__encore_libs_master_Collections_HashMap_HashMap_remove_t
{
  encore_oneway_msg_t msg;
  _enc__trait__encore_libs_master_Collections_HashCode_HashCode_t* f1 /* key */;
};


struct _enc__fut_msg__encore_libs_master_Collections_HashMap_HashMap_set_t
{
  encore_fut_msg_t ;
  _enc__trait__encore_libs_master_Collections_HashCode_HashCode_t* f1 /* key */;
  encore_arg_t f2 /* value */;
};


struct _enc__oneway_msg__encore_libs_master_Collections_HashMap_HashMap_set_t
{
  encore_oneway_msg_t msg;
  _enc__trait__encore_libs_master_Collections_HashCode_HashCode_t* f1 /* key */;
  encore_arg_t f2 /* value */;
};


struct _enc__fut_msg__encore_libs_master_Collections_HashMap_HashMap_resize_t
{
  encore_fut_msg_t ;
  uint64_t f1 /* new_size */;
};


struct _enc__oneway_msg__encore_libs_master_Collections_HashMap_HashMap_resize_t
{
  encore_oneway_msg_t msg;
  uint64_t f1 /* new_size */;
};


struct _enc__fut_msg__encore_libs_master_Collections_HashMap_HashMap_get_value_t
{
  encore_fut_msg_t ;
  _enc__trait__encore_libs_master_Collections_HashCode_HashCode_t* f1 /* key */;
};


struct _enc__oneway_msg__encore_libs_master_Collections_HashMap_HashMap_get_value_t
{
  encore_oneway_msg_t msg;
  _enc__trait__encore_libs_master_Collections_HashCode_HashCode_t* f1 /* key */;
};


struct _enc__fut_msg__encore_libs_master_Collections_HashMap_HashMapIterator__init_t
{
  encore_fut_msg_t ;
  _enc__passive__encore_libs_master_Collections_HashMap_HashMap_t* f1 /* map */;
};


struct _enc__oneway_msg__encore_libs_master_Collections_HashMap_HashMapIterator__init_t
{
  encore_oneway_msg_t msg;
  _enc__passive__encore_libs_master_Collections_HashMap_HashMap_t* f1 /* map */;
};


struct _enc__fut_msg__encore_libs_master_Collections_HashMap_HashMapIterator_locate_next_t
{
  encore_fut_msg_t ;
};


struct _enc__oneway_msg__encore_libs_master_Collections_HashMap_HashMapIterator_locate_next_t
{
  encore_oneway_msg_t msg;
};


struct _enc__fut_msg__encore_libs_master_Collections_HashMap_HashMapIterator_next_t
{
  encore_fut_msg_t ;
};


struct _enc__oneway_msg__encore_libs_master_Collections_HashMap_HashMapIterator_next_t
{
  encore_oneway_msg_t msg;
};


struct _enc__fut_msg__encore_libs_master_Collections_HashMap_HashMapIterator_has_next_t
{
  encore_fut_msg_t ;
};


struct _enc__oneway_msg__encore_libs_master_Collections_HashMap_HashMapIterator_has_next_t
{
  encore_oneway_msg_t msg;
};


struct _enc__fut_msg__encore_libs_master_Collections_HashMap_Entry__init_t
{
  encore_fut_msg_t ;
  _enc__trait__encore_libs_master_Collections_HashCode_HashCode_t* f1 /* key */;
  encore_arg_t f2 /* value */;
};


struct _enc__oneway_msg__encore_libs_master_Collections_HashMap_Entry__init_t
{
  encore_oneway_msg_t msg;
  _enc__trait__encore_libs_master_Collections_HashCode_HashCode_t* f1 /* key */;
  encore_arg_t f2 /* value */;
};


struct _enc__fut_msg__encore_libs_master_Collections_LinkedList_LinkedIterator__init_t
{
  encore_fut_msg_t ;
  _enc__passive__encore_libs_master_Collections_LinkedList_LinkedList_t* f1 /* list */;
};


struct _enc__oneway_msg__encore_libs_master_Collections_LinkedList_LinkedIterator__init_t
{
  encore_oneway_msg_t msg;
  _enc__passive__encore_libs_master_Collections_LinkedList_LinkedList_t* f1 /* list */;
};


struct _enc__fut_msg__encore_libs_master_Collections_LinkedList_LinkedIterator_next_t
{
  encore_fut_msg_t ;
};


struct _enc__oneway_msg__encore_libs_master_Collections_LinkedList_LinkedIterator_next_t
{
  encore_oneway_msg_t msg;
};


struct _enc__fut_msg__encore_libs_master_Collections_LinkedList_LinkedIterator_has_next_t
{
  encore_fut_msg_t ;
};


struct _enc__oneway_msg__encore_libs_master_Collections_LinkedList_LinkedIterator_has_next_t
{
  encore_oneway_msg_t msg;
};


struct _enc__fut_msg__encore_libs_master_Collections_LinkedList_LinkedList__init_t
{
  encore_fut_msg_t ;
};


struct _enc__oneway_msg__encore_libs_master_Collections_LinkedList_LinkedList__init_t
{
  encore_oneway_msg_t msg;
};


struct _enc__fut_msg__encore_libs_master_Collections_LinkedList_LinkedList_iterator_t
{
  encore_fut_msg_t ;
};


struct _enc__oneway_msg__encore_libs_master_Collections_LinkedList_LinkedList_iterator_t
{
  encore_oneway_msg_t msg;
};


struct _enc__fut_msg__encore_libs_master_Collections_LinkedList_LinkedList_push_t
{
  encore_fut_msg_t ;
  encore_arg_t f1 /* value */;
};


struct _enc__oneway_msg__encore_libs_master_Collections_LinkedList_LinkedList_push_t
{
  encore_oneway_msg_t msg;
  encore_arg_t f1 /* value */;
};


struct _enc__fut_msg__encore_libs_master_Collections_LinkedList_LinkedList_drop_t
{
  encore_fut_msg_t ;
  _enc__passive__encore_libs_master_Collections_LinkedList_LinkedNode_t* f1 /* node */;
};


struct _enc__oneway_msg__encore_libs_master_Collections_LinkedList_LinkedList_drop_t
{
  encore_oneway_msg_t msg;
  _enc__passive__encore_libs_master_Collections_LinkedList_LinkedNode_t* f1 /* node */;
};


struct _enc__fut_msg__encore_libs_master_Collections_LinkedList_LinkedList_remove_all_t
{
  encore_fut_msg_t ;
  encore_arg_t f1 /* value */;
};


struct _enc__oneway_msg__encore_libs_master_Collections_LinkedList_LinkedList_remove_all_t
{
  encore_oneway_msg_t msg;
  encore_arg_t f1 /* value */;
};


struct _enc__fut_msg__encore_libs_master_Collections_LinkedList_LinkedNode__init_t
{
  encore_fut_msg_t ;
  encore_arg_t f1 /* value */;
  option_t* f2 /* prev */;
  option_t* f3 /* next */;
};


struct _enc__oneway_msg__encore_libs_master_Collections_LinkedList_LinkedNode__init_t
{
  encore_oneway_msg_t msg;
  encore_arg_t f1 /* value */;
  option_t* f2 /* prev */;
  option_t* f3 /* next */;
};


struct _enc__fut_msg__encore_libs_master_Collections_Siphash_Siphash__init_t
{
  encore_fut_msg_t ;
};


struct _enc__oneway_msg__encore_libs_master_Collections_Siphash_Siphash__init_t
{
  encore_oneway_msg_t msg;
};


struct _enc__fut_msg__encore_libs_master_Collections_Siphash_Siphash_hash_t
{
  encore_fut_msg_t ;
  uint64_t f1 /* id */;
};


struct _enc__oneway_msg__encore_libs_master_Collections_Siphash_Siphash_hash_t
{
  encore_oneway_msg_t msg;
  uint64_t f1 /* id */;
};


struct _enc__fut_msg__encore_libs_master_Collections_Siphash_Siphash_modulo_t
{
  encore_fut_msg_t ;
  uint64_t f1 /* value */;
  uint64_t f2 /* mod */;
};


struct _enc__oneway_msg__encore_libs_master_Collections_Siphash_Siphash_modulo_t
{
  encore_oneway_msg_t msg;
  uint64_t f1 /* value */;
  uint64_t f2 /* mod */;
};


struct _enc__fut_msg__encore_libs_master_FileIO_IO_File__init_t
{
  encore_fut_msg_t ;
  _enc__passive_String_String_t* f1 /* fname */;
  _enc__passive_String_String_t* f2 /* mode */;
};


struct _enc__oneway_msg__encore_libs_master_FileIO_IO_File__init_t
{
  encore_oneway_msg_t msg;
  _enc__passive_String_String_t* f1 /* fname */;
  _enc__passive_String_String_t* f2 /* mode */;
};


struct _enc__fut_msg__encore_libs_master_FileIO_IO_File_open_t
{
  encore_fut_msg_t ;
  _enc__passive_String_String_t* f1 /* fin */;
  _enc__passive_String_String_t* f2 /* mode */;
};


struct _enc__oneway_msg__encore_libs_master_FileIO_IO_File_open_t
{
  encore_oneway_msg_t msg;
  _enc__passive_String_String_t* f1 /* fin */;
  _enc__passive_String_String_t* f2 /* mode */;
};


struct _enc__fut_msg__encore_libs_master_FileIO_IO_File_close_t
{
  encore_fut_msg_t ;
};


struct _enc__oneway_msg__encore_libs_master_FileIO_IO_File_close_t
{
  encore_oneway_msg_t msg;
};


struct _enc__fut_msg__encore_libs_master_FileIO_IO_File_write_t
{
  encore_fut_msg_t ;
  _enc__passive_String_String_t* f1 /* content */;
};


struct _enc__oneway_msg__encore_libs_master_FileIO_IO_File_write_t
{
  encore_oneway_msg_t msg;
  _enc__passive_String_String_t* f1 /* content */;
};


struct _enc__fut_msg__encore_libs_master_FileIO_IO_File_writeChar_t
{
  encore_fut_msg_t ;
  char* f1 /* content */;
};


struct _enc__oneway_msg__encore_libs_master_FileIO_IO_File_writeChar_t
{
  encore_oneway_msg_t msg;
  char* f1 /* content */;
};


struct _enc__fut_msg__encore_libs_master_FileIO_IO_File_readline_t
{
  encore_fut_msg_t ;
};


struct _enc__oneway_msg__encore_libs_master_FileIO_IO_File_readline_t
{
  encore_oneway_msg_t msg;
};


struct _enc__fut_msg__encore_libs_master_FileIO_IO_File_readlineChar_t
{
  encore_fut_msg_t ;
};


struct _enc__oneway_msg__encore_libs_master_FileIO_IO_File_readlineChar_t
{
  encore_oneway_msg_t msg;
};


struct _enc__fut_msg__encore_libs_master_FileIO_IO_File_eof_t
{
  encore_fut_msg_t ;
};


struct _enc__oneway_msg__encore_libs_master_FileIO_IO_File_eof_t
{
  encore_oneway_msg_t msg;
};


struct _enc__fut_msg__encore_libs_master_Ped_util_Agent_passive_Agent_struct__init_t
{
  encore_fut_msg_t ;
};


struct _enc__oneway_msg__encore_libs_master_Ped_util_Agent_passive_Agent_struct__init_t
{
  encore_oneway_msg_t msg;
};


struct _enc__fut_msg__encore_libs_master_Ped_util_Agent_passive_Agent_struct_isin_t
{
  encore_fut_msg_t ;
  tuple_t* f1 /* pos */;
};


struct _enc__oneway_msg__encore_libs_master_Ped_util_Agent_passive_Agent_struct_isin_t
{
  encore_oneway_msg_t msg;
  tuple_t* f1 /* pos */;
};


struct _enc__fut_msg__encore_libs_master_Ped_util_Agent_passive_Agent_struct_add_t
{
  encore_fut_msg_t ;
  _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t* f1 /* a */;
};


struct _enc__oneway_msg__encore_libs_master_Ped_util_Agent_passive_Agent_struct_add_t
{
  encore_oneway_msg_t msg;
  _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t* f1 /* a */;
};


struct _enc__fut_msg__encore_libs_master_Ped_util_Agent_passive_Agent_struct_remove_t
{
  encore_fut_msg_t ;
  _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t* f1 /* a */;
};


struct _enc__oneway_msg__encore_libs_master_Ped_util_Agent_passive_Agent_struct_remove_t
{
  encore_oneway_msg_t msg;
  _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t* f1 /* a */;
};


struct _enc__fut_msg__encore_libs_master_Ped_util_Agent_passive_Agent_struct_size_t
{
  encore_fut_msg_t ;
};


struct _enc__oneway_msg__encore_libs_master_Ped_util_Agent_passive_Agent_struct_size_t
{
  encore_oneway_msg_t msg;
};


struct _enc__fut_msg__encore_libs_master_Ped_util_Agent_passive_Agent_struct_get_data_t
{
  encore_fut_msg_t ;
};


struct _enc__oneway_msg__encore_libs_master_Ped_util_Agent_passive_Agent_struct_get_data_t
{
  encore_oneway_msg_t msg;
};


struct _enc__fut_msg__encore_libs_master_Ped_util_Agent_passive_Agent__init_t
{
  encore_fut_msg_t ;
  tuple_t* f1 /* in_pos */;
  array_t* f2 /* list */;
  array_t* f3 /* targets_size */;
  int64_t f4 /* in_id */;
  int64_t f5 /* ttl */;
};


struct _enc__oneway_msg__encore_libs_master_Ped_util_Agent_passive_Agent__init_t
{
  encore_oneway_msg_t msg;
  tuple_t* f1 /* in_pos */;
  array_t* f2 /* list */;
  array_t* f3 /* targets_size */;
  int64_t f4 /* in_id */;
  int64_t f5 /* ttl */;
};


struct _enc__fut_msg__encore_libs_master_Ped_util_Agent_passive_Agent_next_t
{
  encore_fut_msg_t ;
};


struct _enc__oneway_msg__encore_libs_master_Ped_util_Agent_passive_Agent_next_t
{
  encore_oneway_msg_t msg;
};


struct _enc__fut_msg__encore_libs_master_Ped_util_Agent_passive_Agent_move_t
{
  encore_fut_msg_t ;
  tuple_t* f1 /* in_pos */;
};


struct _enc__oneway_msg__encore_libs_master_Ped_util_Agent_passive_Agent_move_t
{
  encore_oneway_msg_t msg;
  tuple_t* f1 /* in_pos */;
};


struct _enc__fut_msg__encore_libs_master_Ped_util_Agent_passive_Agent_pos_t
{
  encore_fut_msg_t ;
};


struct _enc__oneway_msg__encore_libs_master_Ped_util_Agent_passive_Agent_pos_t
{
  encore_oneway_msg_t msg;
};


struct _enc__fut_msg__encore_libs_master_Ped_util_Agent_passive_Agent_copy_t
{
  encore_fut_msg_t ;
};


struct _enc__oneway_msg__encore_libs_master_Ped_util_Agent_passive_Agent_copy_t
{
  encore_oneway_msg_t msg;
};


struct _enc__fut_msg__encore_libs_master_Ped_util_Agent_passive_Agent_hash_adress_t
{
  encore_fut_msg_t ;
};


struct _enc__oneway_msg__encore_libs_master_Ped_util_Agent_passive_Agent_hash_adress_t
{
  encore_oneway_msg_t msg;
};


struct _enc__fut_msg__encore_libs_master_Ped_util_Agent_passive_Agent_get_hash_t
{
  encore_fut_msg_t ;
};


struct _enc__oneway_msg__encore_libs_master_Ped_util_Agent_passive_Agent_get_hash_t
{
  encore_oneway_msg_t msg;
};


struct _enc__fut_msg__encore_libs_master_Ped_util_Agent_passive_Agent_equals_t
{
  encore_fut_msg_t ;
  _enc__trait__encore_libs_master_Collections_HashCode_HashCode_t* f1 /* other */;
};


struct _enc__oneway_msg__encore_libs_master_Ped_util_Agent_passive_Agent_equals_t
{
  encore_oneway_msg_t msg;
  _enc__trait__encore_libs_master_Collections_HashCode_HashCode_t* f1 /* other */;
};


struct _enc__fut_msg__encore_libs_master_Ped_util_Box_Single_Box__init_t
{
  encore_fut_msg_t ;
  tuple_t* f1 /* space */;
  _enc__trait__encore_libs_master_Ped_util_Box_Box_face_t* f2 /* toplevel */;
};


struct _enc__oneway_msg__encore_libs_master_Ped_util_Box_Single_Box__init_t
{
  encore_oneway_msg_t msg;
  tuple_t* f1 /* space */;
  _enc__trait__encore_libs_master_Ped_util_Box_Box_face_t* f2 /* toplevel */;
};


struct _enc__fut_msg__encore_libs_master_Ped_util_Box_Single_Box_space_t
{
  encore_fut_msg_t ;
};


struct _enc__oneway_msg__encore_libs_master_Ped_util_Box_Single_Box_space_t
{
  encore_oneway_msg_t msg;
};


struct _enc__fut_msg__encore_libs_master_Ped_util_Box_Single_Box_agents_t
{
  encore_fut_msg_t ;
};


struct _enc__oneway_msg__encore_libs_master_Ped_util_Box_Single_Box_agents_t
{
  encore_oneway_msg_t msg;
};


struct _enc__fut_msg__encore_libs_master_Ped_util_Box_Single_Box_add_t
{
  encore_fut_msg_t ;
  _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t* f1 /* a */;
};


struct _enc__oneway_msg__encore_libs_master_Ped_util_Box_Single_Box_add_t
{
  encore_oneway_msg_t msg;
  _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t* f1 /* a */;
};


struct _enc__fut_msg__encore_libs_master_Ped_util_Box_Single_Box_start_t
{
  encore_fut_msg_t ;
};


struct _enc__oneway_msg__encore_libs_master_Ped_util_Box_Single_Box_start_t
{
  encore_oneway_msg_t msg;
};


struct _enc__fut_msg__encore_libs_master_Ped_util_Box_Single_Box_move_t
{
  encore_fut_msg_t ;
};


struct _enc__oneway_msg__encore_libs_master_Ped_util_Box_Single_Box_move_t
{
  encore_oneway_msg_t msg;
};


struct _enc__fut_msg__encore_libs_master_Ped_util_Box_Single_Box_external_move_t
{
  encore_fut_msg_t ;
  _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t* f1 /* a */;
  tuple_t* f2 /* pos */;
};


struct _enc__oneway_msg__encore_libs_master_Ped_util_Box_Single_Box_external_move_t
{
  encore_oneway_msg_t msg;
  _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t* f1 /* a */;
  tuple_t* f2 /* pos */;
};


struct _enc__fut_msg__encore_libs_master_Ped_util_Box_Multi_Box__init_t
{
  encore_fut_msg_t ;
  tuple_t* f1 /* space */;
  _enc__trait__encore_libs_master_Ped_util_Box_Box_face_t* f2 /* toplevel */;
  int64_t f3 /* levels_left */;
};


struct _enc__oneway_msg__encore_libs_master_Ped_util_Box_Multi_Box__init_t
{
  encore_oneway_msg_t msg;
  tuple_t* f1 /* space */;
  _enc__trait__encore_libs_master_Ped_util_Box_Box_face_t* f2 /* toplevel */;
  int64_t f3 /* levels_left */;
};


struct _enc__fut_msg__encore_libs_master_Ped_util_Box_Multi_Box_space_t
{
  encore_fut_msg_t ;
};


struct _enc__oneway_msg__encore_libs_master_Ped_util_Box_Multi_Box_space_t
{
  encore_oneway_msg_t msg;
};


struct _enc__fut_msg__encore_libs_master_Ped_util_Box_Multi_Box_add_t
{
  encore_fut_msg_t ;
  _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t* f1 /* a */;
};


struct _enc__oneway_msg__encore_libs_master_Ped_util_Box_Multi_Box_add_t
{
  encore_oneway_msg_t msg;
  _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t* f1 /* a */;
};


struct _enc__fut_msg__encore_libs_master_Ped_util_Box_Multi_Box_agents_t
{
  encore_fut_msg_t ;
};


struct _enc__oneway_msg__encore_libs_master_Ped_util_Box_Multi_Box_agents_t
{
  encore_oneway_msg_t msg;
};


struct _enc__fut_msg__encore_libs_master_Ped_util_Box_Multi_Box_external_move_t
{
  encore_fut_msg_t ;
  _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t* f1 /* a */;
  tuple_t* f2 /* pos */;
};


struct _enc__oneway_msg__encore_libs_master_Ped_util_Box_Multi_Box_external_move_t
{
  encore_oneway_msg_t msg;
  _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t* f1 /* a */;
  tuple_t* f2 /* pos */;
};


struct _enc__fut_msg__encore_libs_master_Ped_util_Box_Multi_Box_move_t
{
  encore_fut_msg_t ;
};


struct _enc__oneway_msg__encore_libs_master_Ped_util_Box_Multi_Box_move_t
{
  encore_oneway_msg_t msg;
};


struct _enc__fut_msg__encore_libs_master_Ped_util_Box_Multi_Box_start_t
{
  encore_fut_msg_t ;
};


struct _enc__oneway_msg__encore_libs_master_Ped_util_Box_Multi_Box_start_t
{
  encore_oneway_msg_t msg;
};


struct _enc__fut_msg__encore_libs_master_Ped_util_Box_Top_Box__init_t
{
  encore_fut_msg_t ;
  array_t* f1 /* agents */;
};


struct _enc__oneway_msg__encore_libs_master_Ped_util_Box_Top_Box__init_t
{
  encore_oneway_msg_t msg;
  array_t* f1 /* agents */;
};


struct _enc__fut_msg__encore_libs_master_Ped_util_Box_Top_Box_move_t
{
  encore_fut_msg_t ;
};


struct _enc__oneway_msg__encore_libs_master_Ped_util_Box_Top_Box_move_t
{
  encore_oneway_msg_t msg;
};


struct _enc__fut_msg__encore_libs_master_Ped_util_Box_Top_Box_external_move_t
{
  encore_fut_msg_t ;
  _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t* f1 /* b */;
  tuple_t* f2 /* a */;
};


struct _enc__oneway_msg__encore_libs_master_Ped_util_Box_Top_Box_external_move_t
{
  encore_oneway_msg_t msg;
  _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t* f1 /* b */;
  tuple_t* f2 /* a */;
};


struct _enc__fut_msg__encore_libs_master_Ped_util_Box_Top_Box_start_t
{
  encore_fut_msg_t ;
};


struct _enc__oneway_msg__encore_libs_master_Ped_util_Box_Top_Box_start_t
{
  encore_oneway_msg_t msg;
};


struct _enc__fut_msg__encore_libs_master_Ped_util_Box_Top_Box_max_t
{
  encore_fut_msg_t ;
};


struct _enc__oneway_msg__encore_libs_master_Ped_util_Box_Top_Box_max_t
{
  encore_oneway_msg_t msg;
};


struct _enc__fut_msg__encore_libs_master_Ped_util_Box_Top_Box_min_t
{
  encore_fut_msg_t ;
};


struct _enc__oneway_msg__encore_libs_master_Ped_util_Box_Top_Box_min_t
{
  encore_oneway_msg_t msg;
};


struct _enc__fut_msg__encore_libs_master_Ped_util_Box_Top_Box_space_t
{
  encore_fut_msg_t ;
};


struct _enc__oneway_msg__encore_libs_master_Ped_util_Box_Top_Box_space_t
{
  encore_oneway_msg_t msg;
};


struct _enc__fut_msg__encore_libs_master_Ped_util_Box_Top_Box_agents_t
{
  encore_fut_msg_t ;
};


struct _enc__oneway_msg__encore_libs_master_Ped_util_Box_Top_Box_agents_t
{
  encore_oneway_msg_t msg;
};


struct _enc__fut_msg__encore_libs_master_Ped_util_Box_Top_Box_find_extreme_t
{
  encore_fut_msg_t ;
  array_t* f1 /* agents */;
};


struct _enc__oneway_msg__encore_libs_master_Ped_util_Box_Top_Box_find_extreme_t
{
  encore_oneway_msg_t msg;
  array_t* f1 /* agents */;
};


struct _enc__fut_msg__encore_libs_master_Ped_util_Box_Top_Box_extreme_check_t
{
  encore_fut_msg_t ;
  tuple_t* f1 /* a */;
  tuple_t* f2 /* b */;
};


struct _enc__oneway_msg__encore_libs_master_Ped_util_Box_Top_Box_extreme_check_t
{
  encore_oneway_msg_t msg;
  tuple_t* f1 /* a */;
  tuple_t* f2 /* b */;
};


struct _enc__fut_msg__encore_libs_master_Ped_util_Box_Single_Box_face__init_t
{
  encore_fut_msg_t ;
  tuple_t* f1 /* space */;
  _enc__trait__encore_libs_master_Ped_util_Box_Box_face_t* f2 /* toplevel */;
};


struct _enc__oneway_msg__encore_libs_master_Ped_util_Box_Single_Box_face__init_t
{
  encore_oneway_msg_t msg;
  tuple_t* f1 /* space */;
  _enc__trait__encore_libs_master_Ped_util_Box_Box_face_t* f2 /* toplevel */;
};


struct _enc__fut_msg__encore_libs_master_Ped_util_Box_Single_Box_face_space_t
{
  encore_fut_msg_t ;
};


struct _enc__oneway_msg__encore_libs_master_Ped_util_Box_Single_Box_face_space_t
{
  encore_oneway_msg_t msg;
};


struct _enc__fut_msg__encore_libs_master_Ped_util_Box_Single_Box_face_add_t
{
  encore_fut_msg_t ;
  _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t* f1 /* a */;
};


struct _enc__oneway_msg__encore_libs_master_Ped_util_Box_Single_Box_face_add_t
{
  encore_oneway_msg_t msg;
  _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t* f1 /* a */;
};


struct _enc__fut_msg__encore_libs_master_Ped_util_Box_Single_Box_face_move_t
{
  encore_fut_msg_t ;
};


struct _enc__oneway_msg__encore_libs_master_Ped_util_Box_Single_Box_face_move_t
{
  encore_oneway_msg_t msg;
};


struct _enc__fut_msg__encore_libs_master_Ped_util_Box_Single_Box_face_external_move_t
{
  encore_fut_msg_t ;
  _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t* f1 /* a */;
  tuple_t* f2 /* b */;
};


struct _enc__oneway_msg__encore_libs_master_Ped_util_Box_Single_Box_face_external_move_t
{
  encore_oneway_msg_t msg;
  _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t* f1 /* a */;
  tuple_t* f2 /* b */;
};


struct _enc__fut_msg__encore_libs_master_Ped_util_Box_Single_Box_face_agents_t
{
  encore_fut_msg_t ;
};


struct _enc__oneway_msg__encore_libs_master_Ped_util_Box_Single_Box_face_agents_t
{
  encore_oneway_msg_t msg;
};


struct _enc__fut_msg__encore_libs_master_Ped_util_Box_Single_Box_face_start_t
{
  encore_fut_msg_t ;
};


struct _enc__oneway_msg__encore_libs_master_Ped_util_Box_Single_Box_face_start_t
{
  encore_oneway_msg_t msg;
};


struct _enc__fut_msg__encore_libs_master_Ped_util_Box_Multi_Box_face__init_t
{
  encore_fut_msg_t ;
  _enc__active__encore_libs_master_Ped_util_Box_Multi_Box_t* f1 /* t */;
};


struct _enc__oneway_msg__encore_libs_master_Ped_util_Box_Multi_Box_face__init_t
{
  encore_oneway_msg_t msg;
  _enc__active__encore_libs_master_Ped_util_Box_Multi_Box_t* f1 /* t */;
};


struct _enc__fut_msg__encore_libs_master_Ped_util_Box_Multi_Box_face_space_t
{
  encore_fut_msg_t ;
};


struct _enc__oneway_msg__encore_libs_master_Ped_util_Box_Multi_Box_face_space_t
{
  encore_oneway_msg_t msg;
};


struct _enc__fut_msg__encore_libs_master_Ped_util_Box_Multi_Box_face_add_t
{
  encore_fut_msg_t ;
  _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t* f1 /* a */;
};


struct _enc__oneway_msg__encore_libs_master_Ped_util_Box_Multi_Box_face_add_t
{
  encore_oneway_msg_t msg;
  _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t* f1 /* a */;
};


struct _enc__fut_msg__encore_libs_master_Ped_util_Box_Multi_Box_face_move_t
{
  encore_fut_msg_t ;
};


struct _enc__oneway_msg__encore_libs_master_Ped_util_Box_Multi_Box_face_move_t
{
  encore_oneway_msg_t msg;
};


struct _enc__fut_msg__encore_libs_master_Ped_util_Box_Multi_Box_face_external_move_t
{
  encore_fut_msg_t ;
  _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t* f1 /* a */;
  tuple_t* f2 /* b */;
};


struct _enc__oneway_msg__encore_libs_master_Ped_util_Box_Multi_Box_face_external_move_t
{
  encore_oneway_msg_t msg;
  _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t* f1 /* a */;
  tuple_t* f2 /* b */;
};


struct _enc__fut_msg__encore_libs_master_Ped_util_Box_Multi_Box_face_agents_t
{
  encore_fut_msg_t ;
};


struct _enc__oneway_msg__encore_libs_master_Ped_util_Box_Multi_Box_face_agents_t
{
  encore_oneway_msg_t msg;
};


struct _enc__fut_msg__encore_libs_master_Ped_util_Box_Multi_Box_face_start_t
{
  encore_fut_msg_t ;
};


struct _enc__oneway_msg__encore_libs_master_Ped_util_Box_Multi_Box_face_start_t
{
  encore_oneway_msg_t msg;
};


struct _enc__fut_msg__encore_libs_master_Ped_util_Box_Top_Box_face__init_t
{
  encore_fut_msg_t ;
  _enc__active__encore_libs_master_Ped_util_Box_Top_Box_t* f1 /* t */;
};


struct _enc__oneway_msg__encore_libs_master_Ped_util_Box_Top_Box_face__init_t
{
  encore_oneway_msg_t msg;
  _enc__active__encore_libs_master_Ped_util_Box_Top_Box_t* f1 /* t */;
};


struct _enc__fut_msg__encore_libs_master_Ped_util_Box_Top_Box_face_space_t
{
  encore_fut_msg_t ;
};


struct _enc__oneway_msg__encore_libs_master_Ped_util_Box_Top_Box_face_space_t
{
  encore_oneway_msg_t msg;
};


struct _enc__fut_msg__encore_libs_master_Ped_util_Box_Top_Box_face_add_t
{
  encore_fut_msg_t ;
  _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t* f1 /* a */;
};


struct _enc__oneway_msg__encore_libs_master_Ped_util_Box_Top_Box_face_add_t
{
  encore_oneway_msg_t msg;
  _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t* f1 /* a */;
};


struct _enc__fut_msg__encore_libs_master_Ped_util_Box_Top_Box_face_move_t
{
  encore_fut_msg_t ;
};


struct _enc__oneway_msg__encore_libs_master_Ped_util_Box_Top_Box_face_move_t
{
  encore_oneway_msg_t msg;
};


struct _enc__fut_msg__encore_libs_master_Ped_util_Box_Top_Box_face_external_move_t
{
  encore_fut_msg_t ;
  _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t* f1 /* a */;
  tuple_t* f2 /* b */;
};


struct _enc__oneway_msg__encore_libs_master_Ped_util_Box_Top_Box_face_external_move_t
{
  encore_oneway_msg_t msg;
  _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t* f1 /* a */;
  tuple_t* f2 /* b */;
};


struct _enc__fut_msg__encore_libs_master_Ped_util_Box_Top_Box_face_agents_t
{
  encore_fut_msg_t ;
};


struct _enc__oneway_msg__encore_libs_master_Ped_util_Box_Top_Box_face_agents_t
{
  encore_oneway_msg_t msg;
};


struct _enc__fut_msg__encore_libs_master_Ped_util_Box_Top_Box_face_start_t
{
  encore_fut_msg_t ;
};


struct _enc__oneway_msg__encore_libs_master_Ped_util_Box_Top_Box_face_start_t
{
  encore_oneway_msg_t msg;
};


struct _enc__fut_msg__encore_libs_master_XML_XML_XML_lib__init_t
{
  encore_fut_msg_t ;
};


struct _enc__oneway_msg__encore_libs_master_XML_XML_XML_lib__init_t
{
  encore_oneway_msg_t msg;
};


struct _enc__fut_msg__encore_libs_master_XML_XML_XML_lib_new_XML_node_t
{
  encore_fut_msg_t ;
  _enc__passive_String_String_t* f1 /* s */;
};


struct _enc__oneway_msg__encore_libs_master_XML_XML_XML_lib_new_XML_node_t
{
  encore_oneway_msg_t msg;
  _enc__passive_String_String_t* f1 /* s */;
};


struct _enc__fut_msg__encore_libs_master_XML_XML_XML_lib_tag_type_t
{
  encore_fut_msg_t ;
  _enc__passive_String_String_t* f1 /* s */;
};


struct _enc__oneway_msg__encore_libs_master_XML_XML_XML_lib_tag_type_t
{
  encore_oneway_msg_t msg;
  _enc__passive_String_String_t* f1 /* s */;
};


struct _enc__fut_msg__encore_libs_master_XML_XML_XML_lib_ext_atribs_t
{
  encore_fut_msg_t ;
  _enc__passive__encore_libs_master_XML_XML_XML_node_t* f1 /* node */;
  _enc__passive_String_String_t* f2 /* s */;
};


struct _enc__oneway_msg__encore_libs_master_XML_XML_XML_lib_ext_atribs_t
{
  encore_oneway_msg_t msg;
  _enc__passive__encore_libs_master_XML_XML_XML_node_t* f1 /* node */;
  _enc__passive_String_String_t* f2 /* s */;
};


struct _enc__fut_msg__encore_libs_master_XML_XML_XML_lib_or_find_from_t
{
  encore_fut_msg_t ;
  _enc__passive_String_String_t* f1 /* a */;
  _enc__passive_String_String_t* f2 /* b */;
  int64_t f3 /* i */;
  _enc__passive_String_String_t* f4 /* s */;
};


struct _enc__oneway_msg__encore_libs_master_XML_XML_XML_lib_or_find_from_t
{
  encore_oneway_msg_t msg;
  _enc__passive_String_String_t* f1 /* a */;
  _enc__passive_String_String_t* f2 /* b */;
  int64_t f3 /* i */;
  _enc__passive_String_String_t* f4 /* s */;
};


struct _enc__fut_msg__encore_libs_master_XML_XML_XML_lib_pair_t
{
  encore_fut_msg_t ;
  _enc__passive_String_String_t* f1 /* head */;
  _enc__passive_String_String_t* f2 /* tail */;
};


struct _enc__oneway_msg__encore_libs_master_XML_XML_XML_lib_pair_t
{
  encore_oneway_msg_t msg;
  _enc__passive_String_String_t* f1 /* head */;
  _enc__passive_String_String_t* f2 /* tail */;
};


struct _enc__fut_msg__encore_libs_master_XML_XML_XML_lib_file_to_xml_t
{
  encore_fut_msg_t ;
  _enc__passive_String_String_t* f1 /* fname */;
};


struct _enc__oneway_msg__encore_libs_master_XML_XML_XML_lib_file_to_xml_t
{
  encore_oneway_msg_t msg;
  _enc__passive_String_String_t* f1 /* fname */;
};


struct _enc__fut_msg__encore_libs_master_XML_XML_XML_node__init_t
{
  encore_fut_msg_t ;
};


struct _enc__oneway_msg__encore_libs_master_XML_XML_XML_node__init_t
{
  encore_oneway_msg_t msg;
};


struct _enc__fut_msg__encore_libs_master_XML_XML_XML_node_children_named_t
{
  encore_fut_msg_t ;
  _enc__passive_String_String_t* f1 /* name */;
};


struct _enc__oneway_msg__encore_libs_master_XML_XML_XML_node_children_named_t
{
  encore_oneway_msg_t msg;
  _enc__passive_String_String_t* f1 /* name */;
};


struct _enc__fut_msg__encore_libs_master_XML_XML_XML_node_attribute_value_t
{
  encore_fut_msg_t ;
  _enc__passive_String_String_t* f1 /* name */;
};


struct _enc__oneway_msg__encore_libs_master_XML_XML_XML_node_attribute_value_t
{
  encore_oneway_msg_t msg;
  _enc__passive_String_String_t* f1 /* name */;
};


struct _enc__fut_msg__main_Main__init_t
{
  encore_fut_msg_t ;
};


struct _enc__oneway_msg__main_Main__init_t
{
  encore_oneway_msg_t msg;
};


struct _enc__fut_msg__main_Main_main_t
{
  encore_fut_msg_t ;
};


struct _enc__oneway_msg__main_Main_main_t
{
  encore_oneway_msg_t msg;
};


struct _enc__fut_msg__main_Main_loop_t
{
  encore_fut_msg_t ;
  _enc__active__encore_libs_master_Ped_util_Box_Top_Box_t* f1 /* superbox */;
  int64_t f2 /* tick */;
  int64_t f3 /* ui */;
};


struct _enc__oneway_msg__main_Main_loop_t
{
  encore_oneway_msg_t msg;
  _enc__active__encore_libs_master_Ped_util_Box_Top_Box_t* f1 /* superbox */;
  int64_t f2 /* tick */;
  int64_t f3 /* ui */;
};


struct _enc__fut_msg__main_Main_parse_file_t
{
  encore_fut_msg_t ;
  _enc__passive_String_String_t* f1 /* fname */;
};


struct _enc__oneway_msg__main_Main_parse_file_t
{
  encore_oneway_msg_t msg;
  _enc__passive_String_String_t* f1 /* fname */;
};


struct _enc__fut_msg_Either_Right__init_t
{
  encore_fut_msg_t ;
  encore_arg_t f1 /* x */;
};


struct _enc__oneway_msg_Either_Right__init_t
{
  encore_oneway_msg_t msg;
  encore_arg_t f1 /* x */;
};


struct _enc__fut_msg_Either_Right_Left_t
{
  encore_fut_msg_t ;
};


struct _enc__oneway_msg_Either_Right_Left_t
{
  encore_oneway_msg_t msg;
};


struct _enc__fut_msg_Either_Right_Right_t
{
  encore_fut_msg_t ;
};


struct _enc__oneway_msg_Either_Right_Right_t
{
  encore_oneway_msg_t msg;
};


struct _enc__fut_msg_Either_Right_map_t
{
  encore_fut_msg_t ;
  closure_t* f1 /* f */;
};


struct _enc__oneway_msg_Either_Right_map_t
{
  encore_oneway_msg_t msg;
  closure_t* f1 /* f */;
};


struct _enc__fut_msg_Either_Right_foreach_t
{
  encore_fut_msg_t ;
  closure_t* f1 /* f */;
};


struct _enc__oneway_msg_Either_Right_foreach_t
{
  encore_oneway_msg_t msg;
  closure_t* f1 /* f */;
};


struct _enc__fut_msg_Either_Right_flatMap_t
{
  encore_fut_msg_t ;
  closure_t* f1 /* f */;
};


struct _enc__oneway_msg_Either_Right_flatMap_t
{
  encore_oneway_msg_t msg;
  closure_t* f1 /* f */;
};


struct _enc__fut_msg_Either_Left__init_t
{
  encore_fut_msg_t ;
  encore_arg_t f1 /* x */;
};


struct _enc__oneway_msg_Either_Left__init_t
{
  encore_oneway_msg_t msg;
  encore_arg_t f1 /* x */;
};


struct _enc__fut_msg_Either_Left_Left_t
{
  encore_fut_msg_t ;
};


struct _enc__oneway_msg_Either_Left_Left_t
{
  encore_oneway_msg_t msg;
};


struct _enc__fut_msg_Either_Left_Right_t
{
  encore_fut_msg_t ;
};


struct _enc__oneway_msg_Either_Left_Right_t
{
  encore_oneway_msg_t msg;
};


struct _enc__fut_msg_Either_Left_map_t
{
  encore_fut_msg_t ;
  closure_t* f1 /* f */;
};


struct _enc__oneway_msg_Either_Left_map_t
{
  encore_oneway_msg_t msg;
  closure_t* f1 /* f */;
};


struct _enc__fut_msg_Either_Left_foreach_t
{
  encore_fut_msg_t ;
  closure_t* f1 /* f */;
};


struct _enc__oneway_msg_Either_Left_foreach_t
{
  encore_oneway_msg_t msg;
  closure_t* f1 /* f */;
};


struct _enc__fut_msg_Either_Left_flatMap_t
{
  encore_fut_msg_t ;
  closure_t* f1 /* f */;
};


struct _enc__oneway_msg_Either_Left_flatMap_t
{
  encore_oneway_msg_t msg;
  closure_t* f1 /* f */;
};


struct _enc__fut_msg_String_String__init_t
{
  encore_fut_msg_t ;
  char* f1 /* s */;
};


struct _enc__oneway_msg_String_String__init_t
{
  encore_oneway_msg_t msg;
  char* f1 /* s */;
};


struct _enc__fut_msg_String_String_is_empty_t
{
  encore_fut_msg_t ;
};


struct _enc__oneway_msg_String_String_is_empty_t
{
  encore_oneway_msg_t msg;
};


struct _enc__fut_msg_String_String_concatenate_t
{
  encore_fut_msg_t ;
  _enc__passive_String_String_t* f1 /* b */;
};


struct _enc__oneway_msg_String_String_concatenate_t
{
  encore_oneway_msg_t msg;
  _enc__passive_String_String_t* f1 /* b */;
};


struct _enc__fut_msg_String_String_copy_t
{
  encore_fut_msg_t ;
};


struct _enc__oneway_msg_String_String_copy_t
{
  encore_oneway_msg_t msg;
};


struct _enc__fut_msg_String_String_contains_t
{
  encore_fut_msg_t ;
  _enc__passive_String_String_t* f1 /* b */;
};


struct _enc__oneway_msg_String_String_contains_t
{
  encore_oneway_msg_t msg;
  _enc__passive_String_String_t* f1 /* b */;
};


struct _enc__fut_msg_String_String_contains_ignore_case_t
{
  encore_fut_msg_t ;
  _enc__passive_String_String_t* f1 /* b */;
};


struct _enc__oneway_msg_String_String_contains_ignore_case_t
{
  encore_oneway_msg_t msg;
  _enc__passive_String_String_t* f1 /* b */;
};


struct _enc__fut_msg_String_String_compare_t
{
  encore_fut_msg_t ;
  _enc__passive_String_String_t* f1 /* b */;
};


struct _enc__oneway_msg_String_String_compare_t
{
  encore_oneway_msg_t msg;
  _enc__passive_String_String_t* f1 /* b */;
};


struct _enc__fut_msg_String_String_compare_ignore_case_t
{
  encore_fut_msg_t ;
  _enc__passive_String_String_t* f1 /* b */;
};


struct _enc__oneway_msg_String_String_compare_ignore_case_t
{
  encore_oneway_msg_t msg;
  _enc__passive_String_String_t* f1 /* b */;
};


struct _enc__fut_msg_String_String_to_upper_t
{
  encore_fut_msg_t ;
};


struct _enc__oneway_msg_String_String_to_upper_t
{
  encore_oneway_msg_t msg;
};


struct _enc__fut_msg_String_String_to_lower_t
{
  encore_fut_msg_t ;
};


struct _enc__oneway_msg_String_String_to_lower_t
{
  encore_oneway_msg_t msg;
};


struct _enc__fut_msg_String_String_length_t
{
  encore_fut_msg_t ;
};


struct _enc__oneway_msg_String_String_length_t
{
  encore_oneway_msg_t msg;
};


struct _enc__fut_msg_String_String_size_t
{
  encore_fut_msg_t ;
};


struct _enc__oneway_msg_String_String_size_t
{
  encore_oneway_msg_t msg;
};


struct _enc__fut_msg_String_String_substring_t
{
  encore_fut_msg_t ;
  int64_t f1 /* from */;
  int64_t f2 /* to */;
};


struct _enc__oneway_msg_String_String_substring_t
{
  encore_oneway_msg_t msg;
  int64_t f1 /* from */;
  int64_t f2 /* to */;
};


struct _enc__fut_msg_String_String_equals_t
{
  encore_fut_msg_t ;
  _enc__passive_String_String_t* f1 /* s */;
};


struct _enc__oneway_msg_String_String_equals_t
{
  encore_oneway_msg_t msg;
  _enc__passive_String_String_t* f1 /* s */;
};


struct _enc__fut_msg_String_String_occurrences_t
{
  encore_fut_msg_t ;
  _enc__passive_String_String_t* f1 /* s */;
};


struct _enc__oneway_msg_String_String_occurrences_t
{
  encore_oneway_msg_t msg;
  _enc__passive_String_String_t* f1 /* s */;
};


struct _enc__fut_msg_String_String_join_t
{
  encore_fut_msg_t ;
  array_t* f1 /* strings */;
};


struct _enc__oneway_msg_String_String_join_t
{
  encore_oneway_msg_t msg;
  array_t* f1 /* strings */;
};


struct _enc__fut_msg_String_String_getData_t
{
  encore_fut_msg_t ;
};


struct _enc__oneway_msg_String_String_getData_t
{
  encore_oneway_msg_t msg;
};


struct _enc__fut_msg_String_String_trim_t
{
  encore_fut_msg_t ;
};


struct _enc__oneway_msg_String_String_trim_t
{
  encore_oneway_msg_t msg;
};


struct _enc__fut_msg_String_String_replace_t
{
  encore_fut_msg_t ;
  _enc__passive_String_String_t* f1 /* a */;
  _enc__passive_String_String_t* f2 /* b */;
};


struct _enc__oneway_msg_String_String_replace_t
{
  encore_oneway_msg_t msg;
  _enc__passive_String_String_t* f1 /* a */;
  _enc__passive_String_String_t* f2 /* b */;
};


struct _enc__fut_msg_String_String_find_t
{
  encore_fut_msg_t ;
  _enc__passive_String_String_t* f1 /* a */;
};


struct _enc__oneway_msg_String_String_find_t
{
  encore_oneway_msg_t msg;
  _enc__passive_String_String_t* f1 /* a */;
};


struct _enc__fut_msg_String_String_find_from_t
{
  encore_fut_msg_t ;
  _enc__passive_String_String_t* f1 /* a */;
  int64_t f2 /* b */;
};


struct _enc__oneway_msg_String_String_find_from_t
{
  encore_oneway_msg_t msg;
  _enc__passive_String_String_t* f1 /* a */;
  int64_t f2 /* b */;
};


struct _enc__fut_msg_String_String_delete_t
{
  encore_fut_msg_t ;
  _enc__passive_String_String_t* f1 /* s */;
};


struct _enc__oneway_msg_String_String_delete_t
{
  encore_oneway_msg_t msg;
  _enc__passive_String_String_t* f1 /* s */;
};


struct _enc__fut_msg_String_String_format_t
{
  encore_fut_msg_t ;
  array_t* f1 /* b */;
};


struct _enc__oneway_msg_String_String_format_t
{
  encore_oneway_msg_t msg;
  array_t* f1 /* b */;
};


struct _enc__fut_msg_String_String_char_at_t
{
  encore_fut_msg_t ;
  int64_t f1 /* i */;
};


struct _enc__oneway_msg_String_String_char_at_t
{
  encore_oneway_msg_t msg;
  int64_t f1 /* i */;
};


struct _enc__fut_msg_String_String_to_array_t
{
  encore_fut_msg_t ;
};


struct _enc__oneway_msg_String_String_to_array_t
{
  encore_oneway_msg_t msg;
};


struct _enc__fut_msg_String_String_split_t
{
  encore_fut_msg_t ;
  _enc__passive_String_String_t* f1 /* p */;
};


struct _enc__oneway_msg_String_String_split_t
{
  encore_oneway_msg_t msg;
  _enc__passive_String_String_t* f1 /* p */;
};


struct _enc__fut_msg_String_String_to_int_t
{
  encore_fut_msg_t ;
};


struct _enc__oneway_msg_String_String_to_int_t
{
  encore_oneway_msg_t msg;
};


/////////////////////
// Global functions


int64_t _enc__global_fun__encore_libs_master_Ped_util_Global_funsequal(pony_ctx_t**, pony_type_t**, tuple_t*, tuple_t*);


int64_t _enc__global_fun__encore_libs_master_Ped_util_Global_funsdistance(pony_ctx_t**, pony_type_t**, tuple_t*, tuple_t*);


int64_t _enc__global_fun__encore_libs_master_Ped_util_Global_funsrot(pony_ctx_t**, pony_type_t**, int64_t);


void* _enc__global_fun__encore_libs_master_Ped_util_Global_funssleep(pony_ctx_t**, pony_type_t**, double);


int64_t _enc__global_fun__encore_libs_master_Ped_util_Global_funsrand(pony_ctx_t**, pony_type_t**);


_enc__passive_String_String_t* _enc__global_fun__encore_libs_master_Ped_util_Global_funsstring_or_empty(pony_ctx_t**, pony_type_t**, option_t*);


int64_t _enc__global_fun__encore_libs_master_Ped_util_Global_funsint_or_0(pony_ctx_t**, pony_type_t**, option_t*);


int64_t _enc__global_fun__encore_libs_master_Ped_util_Global_funsmin(pony_ctx_t**, pony_type_t**, int64_t, int64_t);


int64_t _enc__global_fun__encore_libs_master_Ped_util_Global_funsmax(pony_ctx_t**, pony_type_t**, int64_t, int64_t);


array_t* _enc__global_fun__encore_libs_master_Ped_util_Global_funsflatten(pony_ctx_t**, pony_type_t**, array_t*);


array_t* _enc__global_fun__encore_libs_master_Ped_util_Global_funscopy_tr(pony_ctx_t**, pony_type_t**, array_t*);


array_t* _enc__global_fun__encore_libs_master_Ped_util_Global_funscopy_ar(pony_ctx_t**, pony_type_t**, array_t*);


int64_t _enc__global_fun__encore_libs_master_Ped_util_Global_funsinside(pony_ctx_t**, pony_type_t**, tuple_t*, tuple_t*);


future_t* _enc__global_fun__encore_libs_master_Ped_util_Global_funsmk_Future(pony_ctx_t**, pony_type_t**, int64_t);


_enc__trait_Either_Either_t* _enc__global_fun_EitherRight(pony_ctx_t**, pony_type_t**, encore_arg_t);


_enc__trait_Either_Either_t* _enc__global_fun_EitherLeft(pony_ctx_t**, pony_type_t**, encore_arg_t);


_enc__passive_String_String_t* _enc__global_fun_Stringstring_from_bool(pony_ctx_t**, pony_type_t**, int64_t);


_enc__passive_String_String_t* _enc__global_fun_Stringstring_from_int(pony_ctx_t**, pony_type_t**, int64_t);


_enc__passive_String_String_t* _enc__global_fun_Stringstring_from_real(pony_ctx_t**, pony_type_t**, double);


_enc__passive_String_String_t* _enc__global_fun_Stringstring_from_array(pony_ctx_t**, pony_type_t**, array_t*);


_enc__passive_String_String_t* _enc__global_fun_Stringstring_from_char(pony_ctx_t**, pony_type_t**, char);


value_t _enc__global_fun_wrapper__encore_libs_master_Ped_util_Global_funsequal(pony_ctx_t**, pony_type_t**, value_t*, void*);


value_t _enc__global_fun_wrapper__encore_libs_master_Ped_util_Global_funsdistance(pony_ctx_t**, pony_type_t**, value_t*, void*);


value_t _enc__global_fun_wrapper__encore_libs_master_Ped_util_Global_funsrot(pony_ctx_t**, pony_type_t**, value_t*, void*);


value_t _enc__global_fun_wrapper__encore_libs_master_Ped_util_Global_funssleep(pony_ctx_t**, pony_type_t**, value_t*, void*);


value_t _enc__global_fun_wrapper__encore_libs_master_Ped_util_Global_funsrand(pony_ctx_t**, pony_type_t**, value_t*, void*);


value_t _enc__global_fun_wrapper__encore_libs_master_Ped_util_Global_funsstring_or_empty(pony_ctx_t**, pony_type_t**, value_t*, void*);


value_t _enc__global_fun_wrapper__encore_libs_master_Ped_util_Global_funsint_or_0(pony_ctx_t**, pony_type_t**, value_t*, void*);


value_t _enc__global_fun_wrapper__encore_libs_master_Ped_util_Global_funsmin(pony_ctx_t**, pony_type_t**, value_t*, void*);


value_t _enc__global_fun_wrapper__encore_libs_master_Ped_util_Global_funsmax(pony_ctx_t**, pony_type_t**, value_t*, void*);


value_t _enc__global_fun_wrapper__encore_libs_master_Ped_util_Global_funsflatten(pony_ctx_t**, pony_type_t**, value_t*, void*);


value_t _enc__global_fun_wrapper__encore_libs_master_Ped_util_Global_funscopy_tr(pony_ctx_t**, pony_type_t**, value_t*, void*);


value_t _enc__global_fun_wrapper__encore_libs_master_Ped_util_Global_funscopy_ar(pony_ctx_t**, pony_type_t**, value_t*, void*);


value_t _enc__global_fun_wrapper__encore_libs_master_Ped_util_Global_funsinside(pony_ctx_t**, pony_type_t**, value_t*, void*);


value_t _enc__global_fun_wrapper__encore_libs_master_Ped_util_Global_funsmk_Future(pony_ctx_t**, pony_type_t**, value_t*, void*);


value_t _enc__global_fun_wrapper_EitherRight(pony_ctx_t**, pony_type_t**, value_t*, void*);


value_t _enc__global_fun_wrapper_EitherLeft(pony_ctx_t**, pony_type_t**, value_t*, void*);


value_t _enc__global_fun_wrapper_Stringstring_from_bool(pony_ctx_t**, pony_type_t**, value_t*, void*);


value_t _enc__global_fun_wrapper_Stringstring_from_int(pony_ctx_t**, pony_type_t**, value_t*, void*);


value_t _enc__global_fun_wrapper_Stringstring_from_real(pony_ctx_t**, pony_type_t**, value_t*, void*);


value_t _enc__global_fun_wrapper_Stringstring_from_array(pony_ctx_t**, pony_type_t**, value_t*, void*);


value_t _enc__global_fun_wrapper_Stringstring_from_char(pony_ctx_t**, pony_type_t**, value_t*, void*);


closure_t* _enc__closure__encore_libs_master_Ped_util_Global_funsequal;


closure_t* _enc__closure__encore_libs_master_Ped_util_Global_funsdistance;


closure_t* _enc__closure__encore_libs_master_Ped_util_Global_funsrot;


closure_t* _enc__closure__encore_libs_master_Ped_util_Global_funssleep;


closure_t* _enc__closure__encore_libs_master_Ped_util_Global_funsrand;


closure_t* _enc__closure__encore_libs_master_Ped_util_Global_funsstring_or_empty;


closure_t* _enc__closure__encore_libs_master_Ped_util_Global_funsint_or_0;


closure_t* _enc__closure__encore_libs_master_Ped_util_Global_funsmin;


closure_t* _enc__closure__encore_libs_master_Ped_util_Global_funsmax;


closure_t* _enc__closure__encore_libs_master_Ped_util_Global_funsflatten;


closure_t* _enc__closure__encore_libs_master_Ped_util_Global_funscopy_tr;


closure_t* _enc__closure__encore_libs_master_Ped_util_Global_funscopy_ar;


closure_t* _enc__closure__encore_libs_master_Ped_util_Global_funsinside;


closure_t* _enc__closure__encore_libs_master_Ped_util_Global_funsmk_Future;


closure_t* _enc__closure_EitherRight;


closure_t* _enc__closure_EitherLeft;


closure_t* _enc__closure_Stringstring_from_bool;


closure_t* _enc__closure_Stringstring_from_int;


closure_t* _enc__closure_Stringstring_from_real;


closure_t* _enc__closure_Stringstring_from_array;


closure_t* _enc__closure_Stringstring_from_char;


//////////////
// Class IDs


enum
{
  __ID_DUMMY__ = 1024,
  _ENC__ID__encore_libs_master_Collections_HashMap_HashMap,
  _ENC__ID__encore_libs_master_Collections_HashMap_HashMapIterator,
  _ENC__ID__encore_libs_master_Collections_HashMap_Entry,
  _ENC__ID__encore_libs_master_Collections_LinkedList_LinkedIterator,
  _ENC__ID__encore_libs_master_Collections_LinkedList_LinkedList,
  _ENC__ID__encore_libs_master_Collections_LinkedList_LinkedNode,
  _ENC__ID__encore_libs_master_Collections_Siphash_Siphash,
  _ENC__ID__encore_libs_master_FileIO_IO_File,
  _ENC__ID__encore_libs_master_Ped_util_Agent_passive_Agent_struct,
  _ENC__ID__encore_libs_master_Ped_util_Agent_passive_Agent,
  _ENC__ID__encore_libs_master_Ped_util_Box_Single_Box,
  _ENC__ID__encore_libs_master_Ped_util_Box_Multi_Box,
  _ENC__ID__encore_libs_master_Ped_util_Box_Top_Box,
  _ENC__ID__encore_libs_master_Ped_util_Box_Single_Box_face,
  _ENC__ID__encore_libs_master_Ped_util_Box_Multi_Box_face,
  _ENC__ID__encore_libs_master_Ped_util_Box_Top_Box_face,
  _ENC__ID__encore_libs_master_XML_XML_XML_lib,
  _ENC__ID__encore_libs_master_XML_XML_XML_node,
  _ENC__ID__main_Main,
  _ENC__ID_Either_Right,
  _ENC__ID_Either_Left,
  _ENC__ID_String_String,
  _ENC__ID__encore_libs_master_Collections_HashCode_HashCode,
  _ENC__ID__encore_libs_master_Collections_Hasher_Hasher,
  _ENC__ID__encore_libs_master_Collections_Iterator_Iterator,
  _ENC__ID__encore_libs_master_Collections_Map_Map,
  _ENC__ID__encore_libs_master_Ped_util_Box_Box_face,
  _ENC__ID_Either_Either,
};


////////////////////
// Trace functions


void _enc__trace__encore_libs_master_Collections_HashMap_HashMap(pony_ctx_t*, void*);


void _enc__trace__encore_libs_master_Collections_HashMap_HashMapIterator(pony_ctx_t*, void*);


void _enc__trace__encore_libs_master_Collections_HashMap_Entry(pony_ctx_t*, void*);


void _enc__trace__encore_libs_master_Collections_LinkedList_LinkedIterator(pony_ctx_t*, void*);


void _enc__trace__encore_libs_master_Collections_LinkedList_LinkedList(pony_ctx_t*, void*);


void _enc__trace__encore_libs_master_Collections_LinkedList_LinkedNode(pony_ctx_t*, void*);


void _enc__trace__encore_libs_master_Collections_Siphash_Siphash(pony_ctx_t*, void*);


void _enc__trace__encore_libs_master_FileIO_IO_File(pony_ctx_t*, void*);


void _enc__trace__encore_libs_master_Ped_util_Agent_passive_Agent_struct(pony_ctx_t*, void*);


void _enc__trace__encore_libs_master_Ped_util_Agent_passive_Agent(pony_ctx_t*, void*);


void _enc__trace__encore_libs_master_Ped_util_Box_Single_Box(pony_ctx_t*, void*);


void _enc__trace__encore_libs_master_Ped_util_Box_Multi_Box(pony_ctx_t*, void*);


void _enc__trace__encore_libs_master_Ped_util_Box_Top_Box(pony_ctx_t*, void*);


void _enc__trace__encore_libs_master_Ped_util_Box_Single_Box_face(pony_ctx_t*, void*);


void _enc__trace__encore_libs_master_Ped_util_Box_Multi_Box_face(pony_ctx_t*, void*);


void _enc__trace__encore_libs_master_Ped_util_Box_Top_Box_face(pony_ctx_t*, void*);


void _enc__trace__encore_libs_master_XML_XML_XML_lib(pony_ctx_t*, void*);


void _enc__trace__encore_libs_master_XML_XML_XML_node(pony_ctx_t*, void*);


void _enc__trace__main_Main(pony_ctx_t*, void*);


void _enc__trace_Either_Right(pony_ctx_t*, void*);


void _enc__trace_Either_Left(pony_ctx_t*, void*);


void _enc__trace_String_String(pony_ctx_t*, void*);


////////////////////////////////
// Runtime type init functions


void _enc__type_init__encore_libs_master_Collections_HashMap_HashMap(_enc__passive__encore_libs_master_Collections_HashMap_HashMap_t*, ...);


void _enc__type_init__encore_libs_master_Collections_HashMap_HashMapIterator(_enc__passive__encore_libs_master_Collections_HashMap_HashMapIterator_t*, ...);


void _enc__type_init__encore_libs_master_Collections_HashMap_Entry(_enc__passive__encore_libs_master_Collections_HashMap_Entry_t*, ...);


void _enc__type_init__encore_libs_master_Collections_LinkedList_LinkedIterator(_enc__passive__encore_libs_master_Collections_LinkedList_LinkedIterator_t*, ...);


void _enc__type_init__encore_libs_master_Collections_LinkedList_LinkedList(_enc__passive__encore_libs_master_Collections_LinkedList_LinkedList_t*, ...);


void _enc__type_init__encore_libs_master_Collections_LinkedList_LinkedNode(_enc__passive__encore_libs_master_Collections_LinkedList_LinkedNode_t*, ...);


void _enc__type_init__encore_libs_master_Collections_Siphash_Siphash(_enc__passive__encore_libs_master_Collections_Siphash_Siphash_t*, ...);


void _enc__type_init__encore_libs_master_FileIO_IO_File(_enc__passive__encore_libs_master_FileIO_IO_File_t*, ...);


void _enc__type_init__encore_libs_master_Ped_util_Agent_passive_Agent_struct(_enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_struct_t*, ...);


void _enc__type_init__encore_libs_master_Ped_util_Agent_passive_Agent(_enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t*, ...);


void _enc__type_init__encore_libs_master_Ped_util_Box_Single_Box(_enc__active__encore_libs_master_Ped_util_Box_Single_Box_t*, ...);


void _enc__type_init__encore_libs_master_Ped_util_Box_Multi_Box(_enc__active__encore_libs_master_Ped_util_Box_Multi_Box_t*, ...);


void _enc__type_init__encore_libs_master_Ped_util_Box_Top_Box(_enc__active__encore_libs_master_Ped_util_Box_Top_Box_t*, ...);


void _enc__type_init__encore_libs_master_Ped_util_Box_Single_Box_face(_enc__passive__encore_libs_master_Ped_util_Box_Single_Box_face_t*, ...);


void _enc__type_init__encore_libs_master_Ped_util_Box_Multi_Box_face(_enc__passive__encore_libs_master_Ped_util_Box_Multi_Box_face_t*, ...);


void _enc__type_init__encore_libs_master_Ped_util_Box_Top_Box_face(_enc__passive__encore_libs_master_Ped_util_Box_Top_Box_face_t*, ...);


void _enc__type_init__encore_libs_master_XML_XML_XML_lib(_enc__passive__encore_libs_master_XML_XML_XML_lib_t*, ...);


void _enc__type_init__encore_libs_master_XML_XML_XML_node(_enc__passive__encore_libs_master_XML_XML_XML_node_t*, ...);


void _enc__type_init__main_Main(_enc__active__main_Main_t*, ...);


void _enc__type_init_Either_Right(_enc__passive_Either_Right_t*, ...);


void _enc__type_init_Either_Left(_enc__passive_Either_Left_t*, ...);


void _enc__type_init_String_String(_enc__passive_String_String_t*, ...);


////////////
// Methods


void* _enc__method__encore_libs_master_Collections_HashMap_HashMap__init(pony_ctx_t**, _enc__passive__encore_libs_master_Collections_HashMap_HashMap_t*);


int64_t _enc__method__encore_libs_master_Collections_HashMap_HashMap_remove(pony_ctx_t**, _enc__passive__encore_libs_master_Collections_HashMap_HashMap_t*, _enc__trait__encore_libs_master_Collections_HashCode_HashCode_t*);


void* _enc__method__encore_libs_master_Collections_HashMap_HashMap_set(pony_ctx_t**, _enc__passive__encore_libs_master_Collections_HashMap_HashMap_t*, _enc__trait__encore_libs_master_Collections_HashCode_HashCode_t*, encore_arg_t);


void* _enc__method__encore_libs_master_Collections_HashMap_HashMap_resize(pony_ctx_t**, _enc__passive__encore_libs_master_Collections_HashMap_HashMap_t*, uint64_t);


option_t* _enc__method__encore_libs_master_Collections_HashMap_HashMap_get_value(pony_ctx_t**, _enc__passive__encore_libs_master_Collections_HashMap_HashMap_t*, _enc__trait__encore_libs_master_Collections_HashCode_HashCode_t*);


void* _enc__method__encore_libs_master_Collections_HashMap_HashMapIterator__init(pony_ctx_t**, _enc__passive__encore_libs_master_Collections_HashMap_HashMapIterator_t*, _enc__passive__encore_libs_master_Collections_HashMap_HashMap_t*);


option_t* _enc__method__encore_libs_master_Collections_HashMap_HashMapIterator_locate_next(pony_ctx_t**, _enc__passive__encore_libs_master_Collections_HashMap_HashMapIterator_t*);


option_t* _enc__method__encore_libs_master_Collections_HashMap_HashMapIterator_next(pony_ctx_t**, _enc__passive__encore_libs_master_Collections_HashMap_HashMapIterator_t*);


int64_t _enc__method__encore_libs_master_Collections_HashMap_HashMapIterator_has_next(pony_ctx_t**, _enc__passive__encore_libs_master_Collections_HashMap_HashMapIterator_t*);


void* _enc__method__encore_libs_master_Collections_HashMap_Entry__init(pony_ctx_t**, _enc__passive__encore_libs_master_Collections_HashMap_Entry_t*, _enc__trait__encore_libs_master_Collections_HashCode_HashCode_t*, encore_arg_t);


void* _enc__method__encore_libs_master_Collections_LinkedList_LinkedIterator__init(pony_ctx_t**, _enc__passive__encore_libs_master_Collections_LinkedList_LinkedIterator_t*, _enc__passive__encore_libs_master_Collections_LinkedList_LinkedList_t*);


option_t* _enc__method__encore_libs_master_Collections_LinkedList_LinkedIterator_next(pony_ctx_t**, _enc__passive__encore_libs_master_Collections_LinkedList_LinkedIterator_t*);


int64_t _enc__method__encore_libs_master_Collections_LinkedList_LinkedIterator_has_next(pony_ctx_t**, _enc__passive__encore_libs_master_Collections_LinkedList_LinkedIterator_t*);


void* _enc__method__encore_libs_master_Collections_LinkedList_LinkedList__init(pony_ctx_t**, _enc__passive__encore_libs_master_Collections_LinkedList_LinkedList_t*);


_enc__passive__encore_libs_master_Collections_LinkedList_LinkedIterator_t* _enc__method__encore_libs_master_Collections_LinkedList_LinkedList_iterator(pony_ctx_t**, _enc__passive__encore_libs_master_Collections_LinkedList_LinkedList_t*);


void* _enc__method__encore_libs_master_Collections_LinkedList_LinkedList_push(pony_ctx_t**, _enc__passive__encore_libs_master_Collections_LinkedList_LinkedList_t*, encore_arg_t);


void* _enc__method__encore_libs_master_Collections_LinkedList_LinkedList_drop(pony_ctx_t**, _enc__passive__encore_libs_master_Collections_LinkedList_LinkedList_t*, _enc__passive__encore_libs_master_Collections_LinkedList_LinkedNode_t*);


void* _enc__method__encore_libs_master_Collections_LinkedList_LinkedList_remove_all(pony_ctx_t**, _enc__passive__encore_libs_master_Collections_LinkedList_LinkedList_t*, encore_arg_t);


void* _enc__method__encore_libs_master_Collections_LinkedList_LinkedNode__init(pony_ctx_t**, _enc__passive__encore_libs_master_Collections_LinkedList_LinkedNode_t*, encore_arg_t, option_t*, option_t*);


void* _enc__method__encore_libs_master_Collections_Siphash_Siphash__init(pony_ctx_t**, _enc__passive__encore_libs_master_Collections_Siphash_Siphash_t*);


uint64_t _enc__method__encore_libs_master_Collections_Siphash_Siphash_hash(pony_ctx_t**, _enc__passive__encore_libs_master_Collections_Siphash_Siphash_t*, uint64_t);


uint64_t _enc__method__encore_libs_master_Collections_Siphash_Siphash_modulo(pony_ctx_t**, _enc__passive__encore_libs_master_Collections_Siphash_Siphash_t*, uint64_t, uint64_t);


void* _enc__method__encore_libs_master_FileIO_IO_File__init(pony_ctx_t**, _enc__passive__encore_libs_master_FileIO_IO_File_t*, _enc__passive_String_String_t*, _enc__passive_String_String_t*);


void* _enc__method__encore_libs_master_FileIO_IO_File_open(pony_ctx_t**, _enc__passive__encore_libs_master_FileIO_IO_File_t*, _enc__passive_String_String_t*, _enc__passive_String_String_t*);


void* _enc__method__encore_libs_master_FileIO_IO_File_close(pony_ctx_t**, _enc__passive__encore_libs_master_FileIO_IO_File_t*);


void* _enc__method__encore_libs_master_FileIO_IO_File_write(pony_ctx_t**, _enc__passive__encore_libs_master_FileIO_IO_File_t*, _enc__passive_String_String_t*);


void* _enc__method__encore_libs_master_FileIO_IO_File_writeChar(pony_ctx_t**, _enc__passive__encore_libs_master_FileIO_IO_File_t*, char*);


_enc__passive_String_String_t* _enc__method__encore_libs_master_FileIO_IO_File_readline(pony_ctx_t**, _enc__passive__encore_libs_master_FileIO_IO_File_t*);


char* _enc__method__encore_libs_master_FileIO_IO_File_readlineChar(pony_ctx_t**, _enc__passive__encore_libs_master_FileIO_IO_File_t*);


int64_t _enc__method__encore_libs_master_FileIO_IO_File_eof(pony_ctx_t**, _enc__passive__encore_libs_master_FileIO_IO_File_t*);


void* _enc__method__encore_libs_master_Ped_util_Agent_passive_Agent_struct__init(pony_ctx_t**, _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_struct_t*);


int64_t _enc__method__encore_libs_master_Ped_util_Agent_passive_Agent_struct_isin(pony_ctx_t**, _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_struct_t*, tuple_t*);


void* _enc__method__encore_libs_master_Ped_util_Agent_passive_Agent_struct_add(pony_ctx_t**, _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_struct_t*, _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t*);


void* _enc__method__encore_libs_master_Ped_util_Agent_passive_Agent_struct_remove(pony_ctx_t**, _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_struct_t*, _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t*);


int64_t _enc__method__encore_libs_master_Ped_util_Agent_passive_Agent_struct_size(pony_ctx_t**, _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_struct_t*);


_enc__passive__encore_libs_master_Collections_HashMap_HashMap_t* _enc__method__encore_libs_master_Ped_util_Agent_passive_Agent_struct_get_data(pony_ctx_t**, _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_struct_t*);


void* _enc__method__encore_libs_master_Ped_util_Agent_passive_Agent__init(pony_ctx_t**, _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t*, tuple_t*, array_t*, array_t*, int64_t, int64_t);


array_t* _enc__method__encore_libs_master_Ped_util_Agent_passive_Agent_next(pony_ctx_t**, _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t*);


void* _enc__method__encore_libs_master_Ped_util_Agent_passive_Agent_move(pony_ctx_t**, _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t*, tuple_t*);


tuple_t* _enc__method__encore_libs_master_Ped_util_Agent_passive_Agent_pos(pony_ctx_t**, _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t*);


_enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t* _enc__method__encore_libs_master_Ped_util_Agent_passive_Agent_copy(pony_ctx_t**, _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t*);


uint64_t _enc__method__encore_libs_master_Ped_util_Agent_passive_Agent_hash_adress(pony_ctx_t**, _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t*);


uint64_t _enc__method__encore_libs_master_Ped_util_Agent_passive_Agent_get_hash(pony_ctx_t**, _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t*);


int64_t _enc__method__encore_libs_master_Ped_util_Agent_passive_Agent_equals(pony_ctx_t**, _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t*, _enc__trait__encore_libs_master_Collections_HashCode_HashCode_t*);


void* _enc__method__encore_libs_master_Ped_util_Box_Single_Box__init(pony_ctx_t**, _enc__active__encore_libs_master_Ped_util_Box_Single_Box_t*, tuple_t*, _enc__trait__encore_libs_master_Ped_util_Box_Box_face_t*);


tuple_t* _enc__method__encore_libs_master_Ped_util_Box_Single_Box_space(pony_ctx_t**, _enc__active__encore_libs_master_Ped_util_Box_Single_Box_t*);


array_t* _enc__method__encore_libs_master_Ped_util_Box_Single_Box_agents(pony_ctx_t**, _enc__active__encore_libs_master_Ped_util_Box_Single_Box_t*);


void* _enc__method__encore_libs_master_Ped_util_Box_Single_Box_add(pony_ctx_t**, _enc__active__encore_libs_master_Ped_util_Box_Single_Box_t*, _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t*);


void* _enc__method__encore_libs_master_Ped_util_Box_Single_Box_start(pony_ctx_t**, _enc__active__encore_libs_master_Ped_util_Box_Single_Box_t*);


int64_t _enc__method__encore_libs_master_Ped_util_Box_Single_Box_move(pony_ctx_t**, _enc__active__encore_libs_master_Ped_util_Box_Single_Box_t*);


int64_t _enc__method__encore_libs_master_Ped_util_Box_Single_Box_external_move(pony_ctx_t**, _enc__active__encore_libs_master_Ped_util_Box_Single_Box_t*, _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t*, tuple_t*);


void* _enc__method__encore_libs_master_Ped_util_Box_Multi_Box__init(pony_ctx_t**, _enc__active__encore_libs_master_Ped_util_Box_Multi_Box_t*, tuple_t*, _enc__trait__encore_libs_master_Ped_util_Box_Box_face_t*, int64_t);


tuple_t* _enc__method__encore_libs_master_Ped_util_Box_Multi_Box_space(pony_ctx_t**, _enc__active__encore_libs_master_Ped_util_Box_Multi_Box_t*);


void* _enc__method__encore_libs_master_Ped_util_Box_Multi_Box_add(pony_ctx_t**, _enc__active__encore_libs_master_Ped_util_Box_Multi_Box_t*, _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t*);


array_t* _enc__method__encore_libs_master_Ped_util_Box_Multi_Box_agents(pony_ctx_t**, _enc__active__encore_libs_master_Ped_util_Box_Multi_Box_t*);


int64_t _enc__method__encore_libs_master_Ped_util_Box_Multi_Box_external_move(pony_ctx_t**, _enc__active__encore_libs_master_Ped_util_Box_Multi_Box_t*, _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t*, tuple_t*);


int64_t _enc__method__encore_libs_master_Ped_util_Box_Multi_Box_move(pony_ctx_t**, _enc__active__encore_libs_master_Ped_util_Box_Multi_Box_t*);


void* _enc__method__encore_libs_master_Ped_util_Box_Multi_Box_start(pony_ctx_t**, _enc__active__encore_libs_master_Ped_util_Box_Multi_Box_t*);


void* _enc__method__encore_libs_master_Ped_util_Box_Top_Box__init(pony_ctx_t**, _enc__active__encore_libs_master_Ped_util_Box_Top_Box_t*, array_t*);


int64_t _enc__method__encore_libs_master_Ped_util_Box_Top_Box_move(pony_ctx_t**, _enc__active__encore_libs_master_Ped_util_Box_Top_Box_t*);


int64_t _enc__method__encore_libs_master_Ped_util_Box_Top_Box_external_move(pony_ctx_t**, _enc__active__encore_libs_master_Ped_util_Box_Top_Box_t*, _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t*, tuple_t*);


void* _enc__method__encore_libs_master_Ped_util_Box_Top_Box_start(pony_ctx_t**, _enc__active__encore_libs_master_Ped_util_Box_Top_Box_t*);


tuple_t* _enc__method__encore_libs_master_Ped_util_Box_Top_Box_max(pony_ctx_t**, _enc__active__encore_libs_master_Ped_util_Box_Top_Box_t*);


tuple_t* _enc__method__encore_libs_master_Ped_util_Box_Top_Box_min(pony_ctx_t**, _enc__active__encore_libs_master_Ped_util_Box_Top_Box_t*);


tuple_t* _enc__method__encore_libs_master_Ped_util_Box_Top_Box_space(pony_ctx_t**, _enc__active__encore_libs_master_Ped_util_Box_Top_Box_t*);


array_t* _enc__method__encore_libs_master_Ped_util_Box_Top_Box_agents(pony_ctx_t**, _enc__active__encore_libs_master_Ped_util_Box_Top_Box_t*);


tuple_t* _enc__method__encore_libs_master_Ped_util_Box_Top_Box_find_extreme(pony_ctx_t**, _enc__active__encore_libs_master_Ped_util_Box_Top_Box_t*, array_t*);


tuple_t* _enc__method__encore_libs_master_Ped_util_Box_Top_Box_extreme_check(pony_ctx_t**, _enc__active__encore_libs_master_Ped_util_Box_Top_Box_t*, tuple_t*, tuple_t*);


void* _enc__method__encore_libs_master_Ped_util_Box_Single_Box_face__init(pony_ctx_t**, _enc__passive__encore_libs_master_Ped_util_Box_Single_Box_face_t*, tuple_t*, _enc__trait__encore_libs_master_Ped_util_Box_Box_face_t*);


future_t* _enc__method__encore_libs_master_Ped_util_Box_Single_Box_face_space(pony_ctx_t**, _enc__passive__encore_libs_master_Ped_util_Box_Single_Box_face_t*);


void* _enc__method__encore_libs_master_Ped_util_Box_Single_Box_face_add(pony_ctx_t**, _enc__passive__encore_libs_master_Ped_util_Box_Single_Box_face_t*, _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t*);


future_t* _enc__method__encore_libs_master_Ped_util_Box_Single_Box_face_move(pony_ctx_t**, _enc__passive__encore_libs_master_Ped_util_Box_Single_Box_face_t*);


future_t* _enc__method__encore_libs_master_Ped_util_Box_Single_Box_face_external_move(pony_ctx_t**, _enc__passive__encore_libs_master_Ped_util_Box_Single_Box_face_t*, _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t*, tuple_t*);


future_t* _enc__method__encore_libs_master_Ped_util_Box_Single_Box_face_agents(pony_ctx_t**, _enc__passive__encore_libs_master_Ped_util_Box_Single_Box_face_t*);


void* _enc__method__encore_libs_master_Ped_util_Box_Single_Box_face_start(pony_ctx_t**, _enc__passive__encore_libs_master_Ped_util_Box_Single_Box_face_t*);


void* _enc__method__encore_libs_master_Ped_util_Box_Multi_Box_face__init(pony_ctx_t**, _enc__passive__encore_libs_master_Ped_util_Box_Multi_Box_face_t*, _enc__active__encore_libs_master_Ped_util_Box_Multi_Box_t*);


future_t* _enc__method__encore_libs_master_Ped_util_Box_Multi_Box_face_space(pony_ctx_t**, _enc__passive__encore_libs_master_Ped_util_Box_Multi_Box_face_t*);


void* _enc__method__encore_libs_master_Ped_util_Box_Multi_Box_face_add(pony_ctx_t**, _enc__passive__encore_libs_master_Ped_util_Box_Multi_Box_face_t*, _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t*);


future_t* _enc__method__encore_libs_master_Ped_util_Box_Multi_Box_face_move(pony_ctx_t**, _enc__passive__encore_libs_master_Ped_util_Box_Multi_Box_face_t*);


future_t* _enc__method__encore_libs_master_Ped_util_Box_Multi_Box_face_external_move(pony_ctx_t**, _enc__passive__encore_libs_master_Ped_util_Box_Multi_Box_face_t*, _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t*, tuple_t*);


future_t* _enc__method__encore_libs_master_Ped_util_Box_Multi_Box_face_agents(pony_ctx_t**, _enc__passive__encore_libs_master_Ped_util_Box_Multi_Box_face_t*);


void* _enc__method__encore_libs_master_Ped_util_Box_Multi_Box_face_start(pony_ctx_t**, _enc__passive__encore_libs_master_Ped_util_Box_Multi_Box_face_t*);


void* _enc__method__encore_libs_master_Ped_util_Box_Top_Box_face__init(pony_ctx_t**, _enc__passive__encore_libs_master_Ped_util_Box_Top_Box_face_t*, _enc__active__encore_libs_master_Ped_util_Box_Top_Box_t*);


future_t* _enc__method__encore_libs_master_Ped_util_Box_Top_Box_face_space(pony_ctx_t**, _enc__passive__encore_libs_master_Ped_util_Box_Top_Box_face_t*);


void* _enc__method__encore_libs_master_Ped_util_Box_Top_Box_face_add(pony_ctx_t**, _enc__passive__encore_libs_master_Ped_util_Box_Top_Box_face_t*, _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t*);


future_t* _enc__method__encore_libs_master_Ped_util_Box_Top_Box_face_move(pony_ctx_t**, _enc__passive__encore_libs_master_Ped_util_Box_Top_Box_face_t*);


future_t* _enc__method__encore_libs_master_Ped_util_Box_Top_Box_face_external_move(pony_ctx_t**, _enc__passive__encore_libs_master_Ped_util_Box_Top_Box_face_t*, _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t*, tuple_t*);


future_t* _enc__method__encore_libs_master_Ped_util_Box_Top_Box_face_agents(pony_ctx_t**, _enc__passive__encore_libs_master_Ped_util_Box_Top_Box_face_t*);


void* _enc__method__encore_libs_master_Ped_util_Box_Top_Box_face_start(pony_ctx_t**, _enc__passive__encore_libs_master_Ped_util_Box_Top_Box_face_t*);


void* _enc__method__encore_libs_master_XML_XML_XML_lib__init(pony_ctx_t**, _enc__passive__encore_libs_master_XML_XML_XML_lib_t*);


option_t* _enc__method__encore_libs_master_XML_XML_XML_lib_new_XML_node(pony_ctx_t**, _enc__passive__encore_libs_master_XML_XML_XML_lib_t*, _enc__passive_String_String_t*);


char _enc__method__encore_libs_master_XML_XML_XML_lib_tag_type(pony_ctx_t**, _enc__passive__encore_libs_master_XML_XML_XML_lib_t*, _enc__passive_String_String_t*);


void* _enc__method__encore_libs_master_XML_XML_XML_lib_ext_atribs(pony_ctx_t**, _enc__passive__encore_libs_master_XML_XML_XML_lib_t*, _enc__passive__encore_libs_master_XML_XML_XML_node_t*, _enc__passive_String_String_t*);


int64_t _enc__method__encore_libs_master_XML_XML_XML_lib_or_find_from(pony_ctx_t**, _enc__passive__encore_libs_master_XML_XML_XML_lib_t*, _enc__passive_String_String_t*, _enc__passive_String_String_t*, int64_t, _enc__passive_String_String_t*);


int64_t _enc__method__encore_libs_master_XML_XML_XML_lib_pair(pony_ctx_t**, _enc__passive__encore_libs_master_XML_XML_XML_lib_t*, _enc__passive_String_String_t*, _enc__passive_String_String_t*);


option_t* _enc__method__encore_libs_master_XML_XML_XML_lib_file_to_xml(pony_ctx_t**, _enc__passive__encore_libs_master_XML_XML_XML_lib_t*, _enc__passive_String_String_t*);


void* _enc__method__encore_libs_master_XML_XML_XML_node__init(pony_ctx_t**, _enc__passive__encore_libs_master_XML_XML_XML_node_t*);


array_t* _enc__method__encore_libs_master_XML_XML_XML_node_children_named(pony_ctx_t**, _enc__passive__encore_libs_master_XML_XML_XML_node_t*, _enc__passive_String_String_t*);


_enc__passive_String_String_t* _enc__method__encore_libs_master_XML_XML_XML_node_attribute_value(pony_ctx_t**, _enc__passive__encore_libs_master_XML_XML_XML_node_t*, _enc__passive_String_String_t*);


void* _enc__method__main_Main__init(pony_ctx_t**, _enc__active__main_Main_t*);


void* _enc__method__main_Main_main(pony_ctx_t**, _enc__active__main_Main_t*, array_t*);


void* _enc__method__main_Main_loop(pony_ctx_t**, _enc__active__main_Main_t*, _enc__active__encore_libs_master_Ped_util_Box_Top_Box_t*, int64_t, int64_t);


array_t* _enc__method__main_Main_parse_file(pony_ctx_t**, _enc__active__main_Main_t*, _enc__passive_String_String_t*);


void* _enc__method_Either_Right__init(pony_ctx_t**, _enc__passive_Either_Right_t*, encore_arg_t);


option_t* _enc__method_Either_Right_Left(pony_ctx_t**, _enc__passive_Either_Right_t*);


option_t* _enc__method_Either_Right_Right(pony_ctx_t**, _enc__passive_Either_Right_t*);


_enc__trait_Either_Either_t* _enc__method_Either_Right_map(pony_ctx_t**, _enc__passive_Either_Right_t*, closure_t*);


void* _enc__method_Either_Right_foreach(pony_ctx_t**, _enc__passive_Either_Right_t*, closure_t*);


_enc__trait_Either_Either_t* _enc__method_Either_Right_flatMap(pony_ctx_t**, _enc__passive_Either_Right_t*, closure_t*);


void* _enc__method_Either_Left__init(pony_ctx_t**, _enc__passive_Either_Left_t*, encore_arg_t);


option_t* _enc__method_Either_Left_Left(pony_ctx_t**, _enc__passive_Either_Left_t*);


option_t* _enc__method_Either_Left_Right(pony_ctx_t**, _enc__passive_Either_Left_t*);


_enc__trait_Either_Either_t* _enc__method_Either_Left_map(pony_ctx_t**, _enc__passive_Either_Left_t*, closure_t*);


void* _enc__method_Either_Left_foreach(pony_ctx_t**, _enc__passive_Either_Left_t*, closure_t*);


_enc__trait_Either_Either_t* _enc__method_Either_Left_flatMap(pony_ctx_t**, _enc__passive_Either_Left_t*, closure_t*);


void* _enc__method_String_String__init(pony_ctx_t**, _enc__passive_String_String_t*, char*);


int64_t _enc__method_String_String_is_empty(pony_ctx_t**, _enc__passive_String_String_t*);


_enc__passive_String_String_t* _enc__method_String_String_concatenate(pony_ctx_t**, _enc__passive_String_String_t*, _enc__passive_String_String_t*);


_enc__passive_String_String_t* _enc__method_String_String_copy(pony_ctx_t**, _enc__passive_String_String_t*);


int64_t _enc__method_String_String_contains(pony_ctx_t**, _enc__passive_String_String_t*, _enc__passive_String_String_t*);


int64_t _enc__method_String_String_contains_ignore_case(pony_ctx_t**, _enc__passive_String_String_t*, _enc__passive_String_String_t*);


int64_t _enc__method_String_String_compare(pony_ctx_t**, _enc__passive_String_String_t*, _enc__passive_String_String_t*);


int64_t _enc__method_String_String_compare_ignore_case(pony_ctx_t**, _enc__passive_String_String_t*, _enc__passive_String_String_t*);


_enc__passive_String_String_t* _enc__method_String_String_to_upper(pony_ctx_t**, _enc__passive_String_String_t*);


_enc__passive_String_String_t* _enc__method_String_String_to_lower(pony_ctx_t**, _enc__passive_String_String_t*);


int64_t _enc__method_String_String_length(pony_ctx_t**, _enc__passive_String_String_t*);


int64_t _enc__method_String_String_size(pony_ctx_t**, _enc__passive_String_String_t*);


option_t* _enc__method_String_String_substring(pony_ctx_t**, _enc__passive_String_String_t*, int64_t, int64_t);


int64_t _enc__method_String_String_equals(pony_ctx_t**, _enc__passive_String_String_t*, _enc__passive_String_String_t*);


int64_t _enc__method_String_String_occurrences(pony_ctx_t**, _enc__passive_String_String_t*, _enc__passive_String_String_t*);


_enc__passive_String_String_t* _enc__method_String_String_join(pony_ctx_t**, _enc__passive_String_String_t*, array_t*);


char* _enc__method_String_String_getData(pony_ctx_t**, _enc__passive_String_String_t*);


_enc__passive_String_String_t* _enc__method_String_String_trim(pony_ctx_t**, _enc__passive_String_String_t*);


_enc__passive_String_String_t* _enc__method_String_String_replace(pony_ctx_t**, _enc__passive_String_String_t*, _enc__passive_String_String_t*, _enc__passive_String_String_t*);


int64_t _enc__method_String_String_find(pony_ctx_t**, _enc__passive_String_String_t*, _enc__passive_String_String_t*);


int64_t _enc__method_String_String_find_from(pony_ctx_t**, _enc__passive_String_String_t*, _enc__passive_String_String_t*, int64_t);


_enc__passive_String_String_t* _enc__method_String_String_delete(pony_ctx_t**, _enc__passive_String_String_t*, _enc__passive_String_String_t*);


_enc__passive_String_String_t* _enc__method_String_String_format(pony_ctx_t**, _enc__passive_String_String_t*, array_t*);


option_t* _enc__method_String_String_char_at(pony_ctx_t**, _enc__passive_String_String_t*, int64_t);


array_t* _enc__method_String_String_to_array(pony_ctx_t**, _enc__passive_String_String_t*);


array_t* _enc__method_String_String_split(pony_ctx_t**, _enc__passive_String_String_t*, _enc__passive_String_String_t*);


option_t* _enc__method_String_String_to_int(pony_ctx_t**, _enc__passive_String_String_t*);


future_t* _enc__method__encore_libs_master_Ped_util_Box_Single_Box__init_future(pony_ctx_t**, _enc__active__encore_libs_master_Ped_util_Box_Single_Box_t*, tuple_t*, _enc__trait__encore_libs_master_Ped_util_Box_Box_face_t*);


future_t* _enc__method__encore_libs_master_Ped_util_Box_Single_Box_space_future(pony_ctx_t**, _enc__active__encore_libs_master_Ped_util_Box_Single_Box_t*);


future_t* _enc__method__encore_libs_master_Ped_util_Box_Single_Box_agents_future(pony_ctx_t**, _enc__active__encore_libs_master_Ped_util_Box_Single_Box_t*);


future_t* _enc__method__encore_libs_master_Ped_util_Box_Single_Box_add_future(pony_ctx_t**, _enc__active__encore_libs_master_Ped_util_Box_Single_Box_t*, _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t*);


future_t* _enc__method__encore_libs_master_Ped_util_Box_Single_Box_start_future(pony_ctx_t**, _enc__active__encore_libs_master_Ped_util_Box_Single_Box_t*);


future_t* _enc__method__encore_libs_master_Ped_util_Box_Single_Box_move_future(pony_ctx_t**, _enc__active__encore_libs_master_Ped_util_Box_Single_Box_t*);


future_t* _enc__method__encore_libs_master_Ped_util_Box_Single_Box_external_move_future(pony_ctx_t**, _enc__active__encore_libs_master_Ped_util_Box_Single_Box_t*, _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t*, tuple_t*);


void _enc__method__encore_libs_master_Ped_util_Box_Single_Box__init_one_way(pony_ctx_t**, _enc__active__encore_libs_master_Ped_util_Box_Single_Box_t*, tuple_t*, _enc__trait__encore_libs_master_Ped_util_Box_Box_face_t*);


void _enc__method__encore_libs_master_Ped_util_Box_Single_Box_space_one_way(pony_ctx_t**, _enc__active__encore_libs_master_Ped_util_Box_Single_Box_t*);


void _enc__method__encore_libs_master_Ped_util_Box_Single_Box_agents_one_way(pony_ctx_t**, _enc__active__encore_libs_master_Ped_util_Box_Single_Box_t*);


void _enc__method__encore_libs_master_Ped_util_Box_Single_Box_add_one_way(pony_ctx_t**, _enc__active__encore_libs_master_Ped_util_Box_Single_Box_t*, _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t*);


void _enc__method__encore_libs_master_Ped_util_Box_Single_Box_start_one_way(pony_ctx_t**, _enc__active__encore_libs_master_Ped_util_Box_Single_Box_t*);


void _enc__method__encore_libs_master_Ped_util_Box_Single_Box_move_one_way(pony_ctx_t**, _enc__active__encore_libs_master_Ped_util_Box_Single_Box_t*);


void _enc__method__encore_libs_master_Ped_util_Box_Single_Box_external_move_one_way(pony_ctx_t**, _enc__active__encore_libs_master_Ped_util_Box_Single_Box_t*, _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t*, tuple_t*);


future_t* _enc__method__encore_libs_master_Ped_util_Box_Multi_Box__init_future(pony_ctx_t**, _enc__active__encore_libs_master_Ped_util_Box_Multi_Box_t*, tuple_t*, _enc__trait__encore_libs_master_Ped_util_Box_Box_face_t*, int64_t);


future_t* _enc__method__encore_libs_master_Ped_util_Box_Multi_Box_space_future(pony_ctx_t**, _enc__active__encore_libs_master_Ped_util_Box_Multi_Box_t*);


future_t* _enc__method__encore_libs_master_Ped_util_Box_Multi_Box_add_future(pony_ctx_t**, _enc__active__encore_libs_master_Ped_util_Box_Multi_Box_t*, _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t*);


future_t* _enc__method__encore_libs_master_Ped_util_Box_Multi_Box_agents_future(pony_ctx_t**, _enc__active__encore_libs_master_Ped_util_Box_Multi_Box_t*);


future_t* _enc__method__encore_libs_master_Ped_util_Box_Multi_Box_external_move_future(pony_ctx_t**, _enc__active__encore_libs_master_Ped_util_Box_Multi_Box_t*, _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t*, tuple_t*);


future_t* _enc__method__encore_libs_master_Ped_util_Box_Multi_Box_move_future(pony_ctx_t**, _enc__active__encore_libs_master_Ped_util_Box_Multi_Box_t*);


future_t* _enc__method__encore_libs_master_Ped_util_Box_Multi_Box_start_future(pony_ctx_t**, _enc__active__encore_libs_master_Ped_util_Box_Multi_Box_t*);


void _enc__method__encore_libs_master_Ped_util_Box_Multi_Box__init_one_way(pony_ctx_t**, _enc__active__encore_libs_master_Ped_util_Box_Multi_Box_t*, tuple_t*, _enc__trait__encore_libs_master_Ped_util_Box_Box_face_t*, int64_t);


void _enc__method__encore_libs_master_Ped_util_Box_Multi_Box_space_one_way(pony_ctx_t**, _enc__active__encore_libs_master_Ped_util_Box_Multi_Box_t*);


void _enc__method__encore_libs_master_Ped_util_Box_Multi_Box_add_one_way(pony_ctx_t**, _enc__active__encore_libs_master_Ped_util_Box_Multi_Box_t*, _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t*);


void _enc__method__encore_libs_master_Ped_util_Box_Multi_Box_agents_one_way(pony_ctx_t**, _enc__active__encore_libs_master_Ped_util_Box_Multi_Box_t*);


void _enc__method__encore_libs_master_Ped_util_Box_Multi_Box_external_move_one_way(pony_ctx_t**, _enc__active__encore_libs_master_Ped_util_Box_Multi_Box_t*, _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t*, tuple_t*);


void _enc__method__encore_libs_master_Ped_util_Box_Multi_Box_move_one_way(pony_ctx_t**, _enc__active__encore_libs_master_Ped_util_Box_Multi_Box_t*);


void _enc__method__encore_libs_master_Ped_util_Box_Multi_Box_start_one_way(pony_ctx_t**, _enc__active__encore_libs_master_Ped_util_Box_Multi_Box_t*);


future_t* _enc__method__encore_libs_master_Ped_util_Box_Top_Box__init_future(pony_ctx_t**, _enc__active__encore_libs_master_Ped_util_Box_Top_Box_t*, array_t*);


future_t* _enc__method__encore_libs_master_Ped_util_Box_Top_Box_move_future(pony_ctx_t**, _enc__active__encore_libs_master_Ped_util_Box_Top_Box_t*);


future_t* _enc__method__encore_libs_master_Ped_util_Box_Top_Box_external_move_future(pony_ctx_t**, _enc__active__encore_libs_master_Ped_util_Box_Top_Box_t*, _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t*, tuple_t*);


future_t* _enc__method__encore_libs_master_Ped_util_Box_Top_Box_start_future(pony_ctx_t**, _enc__active__encore_libs_master_Ped_util_Box_Top_Box_t*);


future_t* _enc__method__encore_libs_master_Ped_util_Box_Top_Box_max_future(pony_ctx_t**, _enc__active__encore_libs_master_Ped_util_Box_Top_Box_t*);


future_t* _enc__method__encore_libs_master_Ped_util_Box_Top_Box_min_future(pony_ctx_t**, _enc__active__encore_libs_master_Ped_util_Box_Top_Box_t*);


future_t* _enc__method__encore_libs_master_Ped_util_Box_Top_Box_space_future(pony_ctx_t**, _enc__active__encore_libs_master_Ped_util_Box_Top_Box_t*);


future_t* _enc__method__encore_libs_master_Ped_util_Box_Top_Box_agents_future(pony_ctx_t**, _enc__active__encore_libs_master_Ped_util_Box_Top_Box_t*);


future_t* _enc__method__encore_libs_master_Ped_util_Box_Top_Box_find_extreme_future(pony_ctx_t**, _enc__active__encore_libs_master_Ped_util_Box_Top_Box_t*, array_t*);


future_t* _enc__method__encore_libs_master_Ped_util_Box_Top_Box_extreme_check_future(pony_ctx_t**, _enc__active__encore_libs_master_Ped_util_Box_Top_Box_t*, tuple_t*, tuple_t*);


void _enc__method__encore_libs_master_Ped_util_Box_Top_Box__init_one_way(pony_ctx_t**, _enc__active__encore_libs_master_Ped_util_Box_Top_Box_t*, array_t*);


void _enc__method__encore_libs_master_Ped_util_Box_Top_Box_move_one_way(pony_ctx_t**, _enc__active__encore_libs_master_Ped_util_Box_Top_Box_t*);


void _enc__method__encore_libs_master_Ped_util_Box_Top_Box_external_move_one_way(pony_ctx_t**, _enc__active__encore_libs_master_Ped_util_Box_Top_Box_t*, _enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t*, tuple_t*);


void _enc__method__encore_libs_master_Ped_util_Box_Top_Box_start_one_way(pony_ctx_t**, _enc__active__encore_libs_master_Ped_util_Box_Top_Box_t*);


void _enc__method__encore_libs_master_Ped_util_Box_Top_Box_max_one_way(pony_ctx_t**, _enc__active__encore_libs_master_Ped_util_Box_Top_Box_t*);


void _enc__method__encore_libs_master_Ped_util_Box_Top_Box_min_one_way(pony_ctx_t**, _enc__active__encore_libs_master_Ped_util_Box_Top_Box_t*);


void _enc__method__encore_libs_master_Ped_util_Box_Top_Box_space_one_way(pony_ctx_t**, _enc__active__encore_libs_master_Ped_util_Box_Top_Box_t*);


void _enc__method__encore_libs_master_Ped_util_Box_Top_Box_agents_one_way(pony_ctx_t**, _enc__active__encore_libs_master_Ped_util_Box_Top_Box_t*);


void _enc__method__encore_libs_master_Ped_util_Box_Top_Box_find_extreme_one_way(pony_ctx_t**, _enc__active__encore_libs_master_Ped_util_Box_Top_Box_t*, array_t*);


void _enc__method__encore_libs_master_Ped_util_Box_Top_Box_extreme_check_one_way(pony_ctx_t**, _enc__active__encore_libs_master_Ped_util_Box_Top_Box_t*, tuple_t*, tuple_t*);


future_t* _enc__method__main_Main__init_future(pony_ctx_t**, _enc__active__main_Main_t*);


future_t* _enc__method__main_Main_main_future(pony_ctx_t**, _enc__active__main_Main_t*);


future_t* _enc__method__main_Main_loop_future(pony_ctx_t**, _enc__active__main_Main_t*, _enc__active__encore_libs_master_Ped_util_Box_Top_Box_t*, int64_t, int64_t);


future_t* _enc__method__main_Main_parse_file_future(pony_ctx_t**, _enc__active__main_Main_t*, _enc__passive_String_String_t*);


void _enc__method__main_Main__init_one_way(pony_ctx_t**, _enc__active__main_Main_t*);


void _enc__method__main_Main_main_one_way(pony_ctx_t**, _enc__active__main_Main_t*);


void _enc__method__main_Main_loop_one_way(pony_ctx_t**, _enc__active__main_Main_t*, _enc__active__encore_libs_master_Ped_util_Box_Top_Box_t*, int64_t, int64_t);


void _enc__method__main_Main_parse_file_one_way(pony_ctx_t**, _enc__active__main_Main_t*, _enc__passive_String_String_t*);


/////////////////
// Constructors


_enc__passive__encore_libs_master_Collections_HashMap_HashMap_t* _enc__constructor__encore_libs_master_Collections_HashMap_HashMap();


_enc__passive__encore_libs_master_Collections_HashMap_HashMapIterator_t* _enc__constructor__encore_libs_master_Collections_HashMap_HashMapIterator();


_enc__passive__encore_libs_master_Collections_HashMap_Entry_t* _enc__constructor__encore_libs_master_Collections_HashMap_Entry();


_enc__passive__encore_libs_master_Collections_LinkedList_LinkedIterator_t* _enc__constructor__encore_libs_master_Collections_LinkedList_LinkedIterator();


_enc__passive__encore_libs_master_Collections_LinkedList_LinkedList_t* _enc__constructor__encore_libs_master_Collections_LinkedList_LinkedList();


_enc__passive__encore_libs_master_Collections_LinkedList_LinkedNode_t* _enc__constructor__encore_libs_master_Collections_LinkedList_LinkedNode();


_enc__passive__encore_libs_master_Collections_Siphash_Siphash_t* _enc__constructor__encore_libs_master_Collections_Siphash_Siphash();


_enc__passive__encore_libs_master_FileIO_IO_File_t* _enc__constructor__encore_libs_master_FileIO_IO_File();


_enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_struct_t* _enc__constructor__encore_libs_master_Ped_util_Agent_passive_Agent_struct();


_enc__passive__encore_libs_master_Ped_util_Agent_passive_Agent_t* _enc__constructor__encore_libs_master_Ped_util_Agent_passive_Agent();


_enc__active__encore_libs_master_Ped_util_Box_Single_Box_t* _enc__constructor__encore_libs_master_Ped_util_Box_Single_Box();


_enc__active__encore_libs_master_Ped_util_Box_Multi_Box_t* _enc__constructor__encore_libs_master_Ped_util_Box_Multi_Box();


_enc__active__encore_libs_master_Ped_util_Box_Top_Box_t* _enc__constructor__encore_libs_master_Ped_util_Box_Top_Box();


_enc__passive__encore_libs_master_Ped_util_Box_Single_Box_face_t* _enc__constructor__encore_libs_master_Ped_util_Box_Single_Box_face();


_enc__passive__encore_libs_master_Ped_util_Box_Multi_Box_face_t* _enc__constructor__encore_libs_master_Ped_util_Box_Multi_Box_face();


_enc__passive__encore_libs_master_Ped_util_Box_Top_Box_face_t* _enc__constructor__encore_libs_master_Ped_util_Box_Top_Box_face();


_enc__passive__encore_libs_master_XML_XML_XML_lib_t* _enc__constructor__encore_libs_master_XML_XML_XML_lib();


_enc__passive__encore_libs_master_XML_XML_XML_node_t* _enc__constructor__encore_libs_master_XML_XML_XML_node();


_enc__active__main_Main_t* _enc__constructor__main_Main();


_enc__passive_Either_Right_t* _enc__constructor_Either_Right();


_enc__passive_Either_Left_t* _enc__constructor_Either_Left();


_enc__passive_String_String_t* _enc__constructor_String_String();


////////////////////
// Main actor rtti


extern pony_type_t _enc__active_Main_type;


////////////////
// Trait types


enum
{
  __TRAIT_METHOD_DUMMY__ = 1024,
  _ENC__MSG__encore_libs_master_Collections_HashCode_HashCode_hash_adress,
  _ENC__MSG__encore_libs_master_Collections_HashCode_HashCode_get_hash,
  _ENC__MSG__encore_libs_master_Collections_HashCode_HashCode_equals,
  _ENC__MSG__encore_libs_master_Collections_Hasher_Hasher_hash,
  _ENC__MSG__encore_libs_master_Collections_Hasher_Hasher_modulo,
  _ENC__MSG__encore_libs_master_Collections_Iterator_Iterator_next,
  _ENC__MSG__encore_libs_master_Collections_Iterator_Iterator_has_next,
  _ENC__MSG__encore_libs_master_Collections_Map_Map_set,
  _ENC__MSG__encore_libs_master_Collections_Map_Map_remove,
  _ENC__MSG__encore_libs_master_Collections_Map_Map_resize,
  _ENC__MSG__encore_libs_master_Collections_Map_Map_get_value,
  _ENC__MSG__encore_libs_master_Ped_util_Box_Box_face_space,
  _ENC__MSG__encore_libs_master_Ped_util_Box_Box_face_add,
  _ENC__MSG__encore_libs_master_Ped_util_Box_Box_face_move,
  _ENC__MSG__encore_libs_master_Ped_util_Box_Box_face_external_move,
  _ENC__MSG__encore_libs_master_Ped_util_Box_Box_face_agents,
  _ENC__MSG__encore_libs_master_Ped_util_Box_Box_face_start,
  _ENC__MSG_Either_Either_Left,
  _ENC__MSG_Either_Either_Right,
  _ENC__MSG_Either_Either_map,
  _ENC__MSG_Either_Either_foreach,
  _ENC__MSG_Either_Either_flatMap,
};


struct _enc__trait__encore_libs_master_Collections_HashCode_HashCode_t
{
  pony_type_t* _enc__self_type;
};


struct _enc__trait__encore_libs_master_Collections_Hasher_Hasher_t
{
  pony_type_t* _enc__self_type;
};


struct _enc__trait__encore_libs_master_Collections_Iterator_Iterator_t
{
  pony_type_t* _enc__self_type;
};


struct _enc__trait__encore_libs_master_Collections_Map_Map_t
{
  pony_type_t* _enc__self_type;
};


struct _enc__trait__encore_libs_master_Ped_util_Box_Box_face_t
{
  pony_type_t* _enc__self_type;
};


struct _enc__trait_Either_Either_t
{
  pony_type_t* _enc__self_type;
};
#endif /* ifndef HEADER_H */
