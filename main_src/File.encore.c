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


void _enc__type_init__encore_libs_master_FileIO_IO_File(_enc__passive__encore_libs_master_FileIO_IO_File_t* _this, ... )
{
  va_list params;
  va_start(params, _this);
  va_end(params);
}


void _enc__trace__encore_libs_master_FileIO_IO_File(pony_ctx_t* _ctx_arg, void* p)
{
  pony_ctx_t** _ctx = (&(_ctx_arg));
  _enc__passive__encore_libs_master_FileIO_IO_File_t* _this = p;
  FILE* _enc__field_file = _this->_enc__field_file;
  pony_trace((*_ctx), _enc__field_file);
  _enc__passive_String_String_t* _enc__field_fname = _this->_enc__field_fname;
  encore_trace_object((*_ctx), _enc__field_fname, _enc__trace_String_String);
  _enc__passive_String_String_t* _enc__field_mode = _this->_enc__field_mode;
  encore_trace_object((*_ctx), _enc__field_mode, _enc__trace_String_String);
}


_enc__passive__encore_libs_master_FileIO_IO_File_t* _enc__constructor__encore_libs_master_FileIO_IO_File(pony_ctx_t** _ctx, pony_type_t** runtimeType)
{
  _enc__passive__encore_libs_master_FileIO_IO_File_t* _this = ((_enc__passive__encore_libs_master_FileIO_IO_File_t*) encore_alloc((*_ctx), sizeof(_enc__passive__encore_libs_master_FileIO_IO_File_t)));
  _this->_enc__self_type = (&(_enc__passive__encore_libs_master_FileIO_IO_File_type));
  return _this;
}


void* _enc__method__encore_libs_master_FileIO_IO_File_init(pony_ctx_t** _ctx, _enc__passive__encore_libs_master_FileIO_IO_File_t* _this, pony_type_t** runtimeType, _enc__passive_String_String_t* _enc__arg_fname, _enc__passive_String_String_t* _enc__arg_mode)
{
  ENC_DTRACE3(METHOD_ENTRY, (uintptr_t)*_ctx, (uintptr_t)_this, "init");
  /* this.fname = fname */;
  (*({ENC_DTRACE3(FIELD_WRITE, (uintptr_t)*_ctx, (uintptr_t)_this, "fname"); _this;}))._enc__field_fname = _enc__arg_fname;
  /* this.mode = mode */;
  (*({ENC_DTRACE3(FIELD_WRITE, (uintptr_t)*_ctx, (uintptr_t)_this, "mode"); _this;}))._enc__field_mode = _enc__arg_mode;
  ENC_DTRACE3(METHOD_EXIT, (uintptr_t)*_ctx, (uintptr_t)_this, "init");
  return UNIT;
}


void* _enc__method__encore_libs_master_FileIO_IO_File_open(pony_ctx_t** _ctx, _enc__passive__encore_libs_master_FileIO_IO_File_t* _this, pony_type_t** runtimeType, _enc__passive_String_String_t* _enc__arg_fin, _enc__passive_String_String_t* _enc__arg_mode)
{
  ENC_DTRACE3(METHOD_ENTRY, (uintptr_t)*_ctx, (uintptr_t)_this, "open");
  /* this.mode = if mode.equals("") then
              "w+r+a"
            else
              mode */;
  _enc__passive_String_String_t* _ite_0;
  if (({check_receiver(_enc__arg_mode, ".", "mode", "equals", "\"./encore-libs-master/FileIO/IO.enc\" (line 15, column 21)");
        _enc__passive_String_String_t* _new_2 = _enc__constructor_String_String(_ctx, NULL);
        char* _embed_3 = ({"";});
        pony_type_t* _tmp_4[] = {};
        _enc__type_init_String_String(_new_2);
        _enc__method_String_String_init(_ctx, _new_2, NULL, _embed_3);
        pony_type_t* _tmp_5[] = {};
        int64_t _sync_method_call_1 = _enc__method_String_String_equals(_ctx, _enc__arg_mode, NULL, _new_2); _sync_method_call_1;}))
  {
    _enc__passive_String_String_t* _new_6 = _enc__constructor_String_String(_ctx, NULL);
    char* _embed_7 = ({"w+r+a";});
    pony_type_t* _tmp_8[] = {};
    _enc__type_init_String_String(_new_6);
    _enc__method_String_String_init(_ctx, _new_6, NULL, _embed_7);
    _ite_0 = ((_enc__passive_String_String_t*) _new_6);
  }
  else
  {
    _ite_0 = ((_enc__passive_String_String_t*) _enc__arg_mode);
  };
  (*({ENC_DTRACE3(FIELD_WRITE, (uintptr_t)*_ctx, (uintptr_t)_this, "mode"); _this;}))._enc__field_mode = _ite_0;
  /* this.fname = fin */;
  (*({ENC_DTRACE3(FIELD_WRITE, (uintptr_t)*_ctx, (uintptr_t)_this, "fname"); _this;}))._enc__field_fname = _enc__arg_fin;
  /* var fin = fin.data */;
  /* fin = fin.data */;
  ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_enc__arg_fin, "data");
  char* _fieldacc_9 = (*_enc__arg_fin)._enc__field_data;
  char* _fin_10 = _fieldacc_9;
  /* var mChar = this.mode.data */;
  /* mChar = this.mode.data */;
  ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "mode");
  _enc__passive_String_String_t* _fieldacc_11 = (*_this)._enc__field_mode;
  ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_fieldacc_11, "data");
  char* _fieldacc_12 = (*_fieldacc_11)._enc__field_data;
  char* _mChar_13 = _fieldacc_12;
  /* this.file = embed FILE* FILE *file = fopen(#{fin}, #{mChar});
                  if (!file) {
                    printf("Cannot open file, exiting.\n");
                    exit(1);
                  };
                  file;
                end */;
  FILE* _embed_14 = ({FILE *file = fopen(_fin_10, _mChar_13);
                  if (!file) {
                    printf("Cannot open file, exiting.\n");
                    exit(1);
                  };
                  file;
               });
  (*({ENC_DTRACE3(FIELD_WRITE, (uintptr_t)*_ctx, (uintptr_t)_this, "file"); _this;}))._enc__field_file = _embed_14;
  ENC_DTRACE3(METHOD_EXIT, (uintptr_t)*_ctx, (uintptr_t)_this, "open");
  return UNIT;
}


void* _enc__method__encore_libs_master_FileIO_IO_File_close(pony_ctx_t** _ctx, _enc__passive__encore_libs_master_FileIO_IO_File_t* _this, pony_type_t** runtimeType)
{
  ENC_DTRACE3(METHOD_ENTRY, (uintptr_t)*_ctx, (uintptr_t)_this, "close");
  /* var f = this.file */;
  /* f = this.file */;
  ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "file");
  FILE* _fieldacc_0 = (*_this)._enc__field_file;
  FILE* _f_1 = _fieldacc_0;
  /* this.file = embed FILE* if (!#{f}) {
        printf("Cannot close file, exiting.\n");
        exit(1);
      };
      fclose(#{f});
      (FILE*)NULL;
    end */;
  FILE* _embed_2 = ({if (!_f_1) {
        printf("Cannot close file, exiting.\n");
        exit(1);
      };
      fclose(_f_1);
      (FILE*)NULL;
   });
  (*({ENC_DTRACE3(FIELD_WRITE, (uintptr_t)*_ctx, (uintptr_t)_this, "file"); _this;}))._enc__field_file = _embed_2;
  ENC_DTRACE3(METHOD_EXIT, (uintptr_t)*_ctx, (uintptr_t)_this, "close");
  return UNIT;
}


void* _enc__method__encore_libs_master_FileIO_IO_File_write(pony_ctx_t** _ctx, _enc__passive__encore_libs_master_FileIO_IO_File_t* _this, pony_type_t** runtimeType, _enc__passive_String_String_t* _enc__arg_content)
{
  ENC_DTRACE3(METHOD_ENTRY, (uintptr_t)*_ctx, (uintptr_t)_this, "write");
  /* this.writeChar(content.data) */;
  check_receiver(_this, ".", "this", "writeChar", "\"./encore-libs-master/FileIO/IO.enc\" (line 47, column 5)");
  ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_enc__arg_content, "data");
  char* _fieldacc_1 = (*_enc__arg_content)._enc__field_data;
  pony_type_t* _tmp_2[] = {};
  void* _sync_method_call_0 = _enc__method__encore_libs_master_FileIO_IO_File_writeChar(_ctx, _this, NULL, _fieldacc_1);
  ENC_DTRACE3(METHOD_EXIT, (uintptr_t)*_ctx, (uintptr_t)_this, "write");
  return UNIT;
}


void* _enc__method__encore_libs_master_FileIO_IO_File_writeChar(pony_ctx_t** _ctx, _enc__passive__encore_libs_master_FileIO_IO_File_t* _this, pony_type_t** runtimeType, char* _enc__arg_content)
{
  ENC_DTRACE3(METHOD_ENTRY, (uintptr_t)*_ctx, (uintptr_t)_this, "writeChar");
  /* var file = this.file */;
  /* file = this.file */;
  ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "file");
  FILE* _fieldacc_0 = (*_this)._enc__field_file;
  FILE* _file_1 = _fieldacc_0;
  /* embed void FILE *fout = #{file};
      if (!fout) {
        printf("Cannot open file, exiting.\n");
        exit(1);
      }
      fprintf(fout, #{content});
    end */;
  ({FILE *fout = _file_1;
      if (!fout) {
        printf("Cannot open file, exiting.\n");
        exit(1);
      }
      fprintf(fout, _enc__arg_content);
   });
  ENC_DTRACE3(METHOD_EXIT, (uintptr_t)*_ctx, (uintptr_t)_this, "writeChar");
  return UNIT;
}


_enc__passive_String_String_t* _enc__method__encore_libs_master_FileIO_IO_File_readline(pony_ctx_t** _ctx, _enc__passive__encore_libs_master_FileIO_IO_File_t* _this, pony_type_t** runtimeType)
{
  ENC_DTRACE3(METHOD_ENTRY, (uintptr_t)*_ctx, (uintptr_t)_this, "readline");
  /* new String(this.readlineChar()) */;
  _enc__passive_String_String_t* _new_0 = _enc__constructor_String_String(_ctx, NULL);
  check_receiver(_this, ".", "this", "readlineChar", "\"./encore-libs-master/FileIO/IO.enc\" (line 66, column 16)");
  pony_type_t* _tmp_2[] = {};
  char* _sync_method_call_1 = _enc__method__encore_libs_master_FileIO_IO_File_readlineChar(_ctx, _this, NULL);
  pony_type_t* _tmp_3[] = {};
  _enc__type_init_String_String(_new_0);
  _enc__method_String_String_init(_ctx, _new_0, NULL, _sync_method_call_1);
  ENC_DTRACE3(METHOD_EXIT, (uintptr_t)*_ctx, (uintptr_t)_this, "readline");
  return ((_enc__passive_String_String_t*) _new_0);
}


char* _enc__method__encore_libs_master_FileIO_IO_File_readlineChar(pony_ctx_t** _ctx, _enc__passive__encore_libs_master_FileIO_IO_File_t* _this, pony_type_t** runtimeType)
{
  ENC_DTRACE3(METHOD_ENTRY, (uintptr_t)*_ctx, (uintptr_t)_this, "readlineChar");
  /* var f = this.file */;
  /* f = this.file */;
  ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "file");
  FILE* _fieldacc_0 = (*_this)._enc__field_file;
  FILE* _f_1 = _fieldacc_0;
  /* embed char* char* line = encore_alloc(*_ctx,255);
      fgets(line, 255, #{f});
      line;
    end */;
  char* _embed_2 = ({char* line = encore_alloc(*_ctx,255);
      fgets(line, 255, _f_1);
      line;
   });
  ENC_DTRACE3(METHOD_EXIT, (uintptr_t)*_ctx, (uintptr_t)_this, "readlineChar");
  return ((char*) _embed_2);
}


int64_t _enc__method__encore_libs_master_FileIO_IO_File_eof(pony_ctx_t** _ctx, _enc__passive__encore_libs_master_FileIO_IO_File_t* _this, pony_type_t** runtimeType)
{
  ENC_DTRACE3(METHOD_ENTRY, (uintptr_t)*_ctx, (uintptr_t)_this, "eof");
  /* var f = this.file */;
  /* f = this.file */;
  ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "file");
  FILE* _fieldacc_0 = (*_this)._enc__field_file;
  FILE* _f_1 = _fieldacc_0;
  /* embed bool feof(#{f}); end */;
  int64_t _embed_2 = ({feof(_f_1);});
  ENC_DTRACE3(METHOD_EXIT, (uintptr_t)*_ctx, (uintptr_t)_this, "eof");
  return ((int64_t) _embed_2);
}


pony_type_t _enc__passive__encore_libs_master_FileIO_IO_File_type = {.id=_ENC__ID__encore_libs_master_FileIO_IO_File, .size=sizeof(_enc__passive__encore_libs_master_FileIO_IO_File_t), .trace=_enc__trace__encore_libs_master_FileIO_IO_File, .vtable=trait_method_selector};
