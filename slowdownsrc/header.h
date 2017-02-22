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
#include <dtrace_enabled.h>
#include <dtrace_encore.h>


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






#include <string.h>
#include <strings.h>
#include <alloca.h>
#include <ctype.h>
#include <math.h>
array_t *_init_argv(pony_ctx_t** ctx, size_t argc, char **argv);


/////////////////////
// Class type decls


typedef struct _enc__active__slow_down_Agent_driver_t _enc__active__slow_down_Agent_driver_t;


typedef struct _enc__active__slow_down_Main_t _enc__active__slow_down_Main_t;


typedef struct _enc__passive_String_String_t _enc__passive_String_String_t;


/////////////////////
// Trait type decls


////////////////////////
// Passive class types


struct _enc__passive_String_String_t
{
  pony_type_t* _enc__self_type;
  char* _enc__field_data;
  int64_t _enc__field_length;
};


//////////////////
// Runtime types


extern pony_type_t _enc__active__slow_down_Agent_driver_type;


extern pony_type_t _enc__active__slow_down_Main_type;


extern pony_type_t _enc__passive_String_String_type;


////////////////
// Message IDs


enum
{
  _MSG_DUMMY__ = 1024,
  _ENC__FUT_MSG__slow_down_Agent_driver_init,
  _ENC__FUT_MSG__slow_down_Agent_driver_link,
  _ENC__FUT_MSG__slow_down_Agent_driver_move,
  _ENC__FUT_MSG__slow_down_Agent_driver_there,
  _ENC__FUT_MSG__slow_down_Main_init,
  _ENC__FUT_MSG__slow_down_Main_main,
  _ENC__FUT_MSG__slow_down_Main_baseline,
  _ENC__FUT_MSG__slow_down_Main_baseline_loop,
  _ENC__FUT_MSG_String_String_init,
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
  _ENC__ONEWAY_MSG__slow_down_Agent_driver_init,
  _ENC__ONEWAY_MSG__slow_down_Agent_driver_link,
  _ENC__ONEWAY_MSG__slow_down_Agent_driver_move,
  _ENC__ONEWAY_MSG__slow_down_Agent_driver_there,
  _ENC__ONEWAY_MSG__slow_down_Main_init,
  _ENC__ONEWAY_MSG__slow_down_Main_main,
  _ENC__ONEWAY_MSG__slow_down_Main_baseline,
  _ENC__ONEWAY_MSG__slow_down_Main_baseline_loop,
  _ENC__ONEWAY_MSG_String_String_init,
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


typedef struct _enc__fut_msg__slow_down_Agent_driver_init_t _enc__fut_msg__slow_down_Agent_driver_init_t;


typedef struct _enc__oneway_msg__slow_down_Agent_driver_init_t _enc__oneway_msg__slow_down_Agent_driver_init_t;


typedef struct _enc__fut_msg__slow_down_Agent_driver_link_t _enc__fut_msg__slow_down_Agent_driver_link_t;


typedef struct _enc__oneway_msg__slow_down_Agent_driver_link_t _enc__oneway_msg__slow_down_Agent_driver_link_t;


typedef struct _enc__fut_msg__slow_down_Agent_driver_move_t _enc__fut_msg__slow_down_Agent_driver_move_t;


typedef struct _enc__oneway_msg__slow_down_Agent_driver_move_t _enc__oneway_msg__slow_down_Agent_driver_move_t;


typedef struct _enc__fut_msg__slow_down_Agent_driver_there_t _enc__fut_msg__slow_down_Agent_driver_there_t;


typedef struct _enc__oneway_msg__slow_down_Agent_driver_there_t _enc__oneway_msg__slow_down_Agent_driver_there_t;


typedef struct _enc__fut_msg__slow_down_Main_init_t _enc__fut_msg__slow_down_Main_init_t;


typedef struct _enc__oneway_msg__slow_down_Main_init_t _enc__oneway_msg__slow_down_Main_init_t;


typedef struct _enc__fut_msg__slow_down_Main_main_t _enc__fut_msg__slow_down_Main_main_t;


typedef struct _enc__oneway_msg__slow_down_Main_main_t _enc__oneway_msg__slow_down_Main_main_t;


typedef struct _enc__fut_msg__slow_down_Main_baseline_t _enc__fut_msg__slow_down_Main_baseline_t;


typedef struct _enc__oneway_msg__slow_down_Main_baseline_t _enc__oneway_msg__slow_down_Main_baseline_t;


typedef struct _enc__fut_msg__slow_down_Main_baseline_loop_t _enc__fut_msg__slow_down_Main_baseline_loop_t;


typedef struct _enc__oneway_msg__slow_down_Main_baseline_loop_t _enc__oneway_msg__slow_down_Main_baseline_loop_t;


typedef struct _enc__fut_msg_String_String_init_t _enc__fut_msg_String_String_init_t;


typedef struct _enc__oneway_msg_String_String_init_t _enc__oneway_msg_String_String_init_t;


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


struct _enc__fut_msg__slow_down_Agent_driver_init_t
{
  encore_fut_msg_t ;
  int64_t f1 /* size */;
};


struct _enc__oneway_msg__slow_down_Agent_driver_init_t
{
  encore_oneway_msg_t msg;
  int64_t f1 /* size */;
};


struct _enc__fut_msg__slow_down_Agent_driver_link_t
{
  encore_fut_msg_t ;
  _enc__active__slow_down_Agent_driver_t* f1 /* a */;
};


struct _enc__oneway_msg__slow_down_Agent_driver_link_t
{
  encore_oneway_msg_t msg;
  _enc__active__slow_down_Agent_driver_t* f1 /* a */;
};


struct _enc__fut_msg__slow_down_Agent_driver_move_t
{
  encore_fut_msg_t ;
};


struct _enc__oneway_msg__slow_down_Agent_driver_move_t
{
  encore_oneway_msg_t msg;
};


struct _enc__fut_msg__slow_down_Agent_driver_there_t
{
  encore_fut_msg_t ;
};


struct _enc__oneway_msg__slow_down_Agent_driver_there_t
{
  encore_oneway_msg_t msg;
};


struct _enc__fut_msg__slow_down_Main_init_t
{
  encore_fut_msg_t ;
};


struct _enc__oneway_msg__slow_down_Main_init_t
{
  encore_oneway_msg_t msg;
};


struct _enc__fut_msg__slow_down_Main_main_t
{
  encore_fut_msg_t ;
  array_t* f1 /* args */;
};


struct _enc__oneway_msg__slow_down_Main_main_t
{
  encore_oneway_msg_t msg;
  array_t* f1 /* args */;
};


struct _enc__fut_msg__slow_down_Main_baseline_t
{
  encore_fut_msg_t ;
  int64_t f1 /* size */;
};


struct _enc__oneway_msg__slow_down_Main_baseline_t
{
  encore_oneway_msg_t msg;
  int64_t f1 /* size */;
};


struct _enc__fut_msg__slow_down_Main_baseline_loop_t
{
  encore_fut_msg_t ;
  int64_t f1 /* i */;
  int64_t f2 /* times */;
};


struct _enc__oneway_msg__slow_down_Main_baseline_loop_t
{
  encore_oneway_msg_t msg;
  int64_t f1 /* i */;
  int64_t f2 /* times */;
};


struct _enc__fut_msg_String_String_init_t
{
  encore_fut_msg_t ;
  char* f1 /* s */;
};


struct _enc__oneway_msg_String_String_init_t
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


int64_t _enc__global_fun__slow_downclock(pony_ctx_t**, pony_type_t**);


_enc__passive_String_String_t* _enc__global_fun_Stringstring_from_bool(pony_ctx_t**, pony_type_t**, int64_t);


_enc__passive_String_String_t* _enc__global_fun_Stringstring_from_int(pony_ctx_t**, pony_type_t**, int64_t);


_enc__passive_String_String_t* _enc__global_fun_Stringstring_from_real(pony_ctx_t**, pony_type_t**, double);


_enc__passive_String_String_t* _enc__global_fun_Stringstring_from_array(pony_ctx_t**, pony_type_t**, array_t*);


_enc__passive_String_String_t* _enc__global_fun_Stringstring_from_char(pony_ctx_t**, pony_type_t**, char);


value_t _enc__fun_wrapper__slow_downclock(pony_ctx_t**, pony_type_t**, value_t*, void*);


value_t _enc__fun_wrapper_Stringstring_from_bool(pony_ctx_t**, pony_type_t**, value_t*, void*);


value_t _enc__fun_wrapper_Stringstring_from_int(pony_ctx_t**, pony_type_t**, value_t*, void*);


value_t _enc__fun_wrapper_Stringstring_from_real(pony_ctx_t**, pony_type_t**, value_t*, void*);


value_t _enc__fun_wrapper_Stringstring_from_array(pony_ctx_t**, pony_type_t**, value_t*, void*);


value_t _enc__fun_wrapper_Stringstring_from_char(pony_ctx_t**, pony_type_t**, value_t*, void*);


closure_t* _enc__closure__slow_downclock;


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
  _ENC__ID__slow_down_Agent_driver,
  _ENC__ID__slow_down_Main,
  _ENC__ID_String_String,
};


////////////////////
// Trace functions


void _enc__trace__slow_down_Agent_driver(pony_ctx_t*, void*);


void _enc__trace__slow_down_Main(pony_ctx_t*, void*);


void _enc__trace_String_String(pony_ctx_t*, void*);


////////////////////////////////
// Runtime type init functions


void _enc__type_init__slow_down_Agent_driver(_enc__active__slow_down_Agent_driver_t*, ...);


void _enc__type_init__slow_down_Main(_enc__active__slow_down_Main_t*, ...);


void _enc__type_init_String_String(_enc__passive_String_String_t*, ...);


////////////
// Methods


void* _enc__method__slow_down_Agent_driver_init(pony_ctx_t**, _enc__active__slow_down_Agent_driver_t*, pony_type_t**, int64_t);


void* _enc__method__slow_down_Agent_driver_link(pony_ctx_t**, _enc__active__slow_down_Agent_driver_t*, pony_type_t**, _enc__active__slow_down_Agent_driver_t*);


void* _enc__method__slow_down_Agent_driver_move(pony_ctx_t**, _enc__active__slow_down_Agent_driver_t*, pony_type_t**);


void* _enc__method__slow_down_Agent_driver_there(pony_ctx_t**, _enc__active__slow_down_Agent_driver_t*, pony_type_t**);


void* _enc__method__slow_down_Main_init(pony_ctx_t**, _enc__active__slow_down_Main_t*, pony_type_t**);


void* _enc__method__slow_down_Main_main(pony_ctx_t**, _enc__active__slow_down_Main_t*, pony_type_t**, array_t*);


void* _enc__method__slow_down_Main_baseline(pony_ctx_t**, _enc__active__slow_down_Main_t*, pony_type_t**, int64_t);


void* _enc__method__slow_down_Main_baseline_loop(pony_ctx_t**, _enc__active__slow_down_Main_t*, pony_type_t**, int64_t, int64_t);


void* _enc__method_String_String_init(pony_ctx_t**, _enc__passive_String_String_t*, pony_type_t**, char*);


int64_t _enc__method_String_String_is_empty(pony_ctx_t**, _enc__passive_String_String_t*, pony_type_t**);


_enc__passive_String_String_t* _enc__method_String_String_concatenate(pony_ctx_t**, _enc__passive_String_String_t*, pony_type_t**, _enc__passive_String_String_t*);


_enc__passive_String_String_t* _enc__method_String_String_copy(pony_ctx_t**, _enc__passive_String_String_t*, pony_type_t**);


int64_t _enc__method_String_String_contains(pony_ctx_t**, _enc__passive_String_String_t*, pony_type_t**, _enc__passive_String_String_t*);


int64_t _enc__method_String_String_contains_ignore_case(pony_ctx_t**, _enc__passive_String_String_t*, pony_type_t**, _enc__passive_String_String_t*);


int64_t _enc__method_String_String_compare(pony_ctx_t**, _enc__passive_String_String_t*, pony_type_t**, _enc__passive_String_String_t*);


int64_t _enc__method_String_String_compare_ignore_case(pony_ctx_t**, _enc__passive_String_String_t*, pony_type_t**, _enc__passive_String_String_t*);


_enc__passive_String_String_t* _enc__method_String_String_to_upper(pony_ctx_t**, _enc__passive_String_String_t*, pony_type_t**);


_enc__passive_String_String_t* _enc__method_String_String_to_lower(pony_ctx_t**, _enc__passive_String_String_t*, pony_type_t**);


int64_t _enc__method_String_String_length(pony_ctx_t**, _enc__passive_String_String_t*, pony_type_t**);


int64_t _enc__method_String_String_size(pony_ctx_t**, _enc__passive_String_String_t*, pony_type_t**);


option_t* _enc__method_String_String_substring(pony_ctx_t**, _enc__passive_String_String_t*, pony_type_t**, int64_t, int64_t);


int64_t _enc__method_String_String_equals(pony_ctx_t**, _enc__passive_String_String_t*, pony_type_t**, _enc__passive_String_String_t*);


int64_t _enc__method_String_String_occurrences(pony_ctx_t**, _enc__passive_String_String_t*, pony_type_t**, _enc__passive_String_String_t*);


_enc__passive_String_String_t* _enc__method_String_String_join(pony_ctx_t**, _enc__passive_String_String_t*, pony_type_t**, array_t*);


char* _enc__method_String_String_getData(pony_ctx_t**, _enc__passive_String_String_t*, pony_type_t**);


_enc__passive_String_String_t* _enc__method_String_String_trim(pony_ctx_t**, _enc__passive_String_String_t*, pony_type_t**);


_enc__passive_String_String_t* _enc__method_String_String_replace(pony_ctx_t**, _enc__passive_String_String_t*, pony_type_t**, _enc__passive_String_String_t*, _enc__passive_String_String_t*);


int64_t _enc__method_String_String_find(pony_ctx_t**, _enc__passive_String_String_t*, pony_type_t**, _enc__passive_String_String_t*);


int64_t _enc__method_String_String_find_from(pony_ctx_t**, _enc__passive_String_String_t*, pony_type_t**, _enc__passive_String_String_t*, int64_t);


_enc__passive_String_String_t* _enc__method_String_String_delete(pony_ctx_t**, _enc__passive_String_String_t*, pony_type_t**, _enc__passive_String_String_t*);


_enc__passive_String_String_t* _enc__method_String_String_format(pony_ctx_t**, _enc__passive_String_String_t*, pony_type_t**, array_t*);


option_t* _enc__method_String_String_char_at(pony_ctx_t**, _enc__passive_String_String_t*, pony_type_t**, int64_t);


array_t* _enc__method_String_String_to_array(pony_ctx_t**, _enc__passive_String_String_t*, pony_type_t**);


array_t* _enc__method_String_String_split(pony_ctx_t**, _enc__passive_String_String_t*, pony_type_t**, _enc__passive_String_String_t*);


option_t* _enc__method_String_String_to_int(pony_ctx_t**, _enc__passive_String_String_t*, pony_type_t**);


future_t* _enc__method__slow_down_Agent_driver_init_future(pony_ctx_t**, _enc__active__slow_down_Agent_driver_t*, pony_type_t**, int64_t);


future_t* _enc__method__slow_down_Agent_driver_link_future(pony_ctx_t**, _enc__active__slow_down_Agent_driver_t*, pony_type_t**, _enc__active__slow_down_Agent_driver_t*);


future_t* _enc__method__slow_down_Agent_driver_move_future(pony_ctx_t**, _enc__active__slow_down_Agent_driver_t*, pony_type_t**);


future_t* _enc__method__slow_down_Agent_driver_there_future(pony_ctx_t**, _enc__active__slow_down_Agent_driver_t*, pony_type_t**);


void _enc__method__slow_down_Agent_driver_init_one_way(pony_ctx_t**, _enc__active__slow_down_Agent_driver_t*, pony_type_t**, int64_t);


void _enc__method__slow_down_Agent_driver_link_one_way(pony_ctx_t**, _enc__active__slow_down_Agent_driver_t*, pony_type_t**, _enc__active__slow_down_Agent_driver_t*);


void _enc__method__slow_down_Agent_driver_move_one_way(pony_ctx_t**, _enc__active__slow_down_Agent_driver_t*, pony_type_t**);


void _enc__method__slow_down_Agent_driver_there_one_way(pony_ctx_t**, _enc__active__slow_down_Agent_driver_t*, pony_type_t**);


future_t* _enc__method__slow_down_Main_init_future(pony_ctx_t**, _enc__active__slow_down_Main_t*, pony_type_t**);


future_t* _enc__method__slow_down_Main_main_future(pony_ctx_t**, _enc__active__slow_down_Main_t*, pony_type_t**, array_t*);


future_t* _enc__method__slow_down_Main_baseline_future(pony_ctx_t**, _enc__active__slow_down_Main_t*, pony_type_t**, int64_t);


future_t* _enc__method__slow_down_Main_baseline_loop_future(pony_ctx_t**, _enc__active__slow_down_Main_t*, pony_type_t**, int64_t, int64_t);


void _enc__method__slow_down_Main_init_one_way(pony_ctx_t**, _enc__active__slow_down_Main_t*, pony_type_t**);


void _enc__method__slow_down_Main_main_one_way(pony_ctx_t**, _enc__active__slow_down_Main_t*, pony_type_t**, array_t*);


void _enc__method__slow_down_Main_baseline_one_way(pony_ctx_t**, _enc__active__slow_down_Main_t*, pony_type_t**, int64_t);


void _enc__method__slow_down_Main_baseline_loop_one_way(pony_ctx_t**, _enc__active__slow_down_Main_t*, pony_type_t**, int64_t, int64_t);


/////////////////
// Constructors


_enc__active__slow_down_Agent_driver_t* _enc__constructor__slow_down_Agent_driver();


_enc__active__slow_down_Main_t* _enc__constructor__slow_down_Main();


_enc__passive_String_String_t* _enc__constructor_String_String();


////////////////////
// Main actor rtti


extern pony_type_t _enc__active_Main_type;


////////////////
// Trait types


enum
{
  __TRAIT_METHOD_DUMMY__ = 1024,
};
#endif /* ifndef HEADER_H */
