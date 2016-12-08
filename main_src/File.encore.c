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


void _enc__type_init__encore_libs_master_FileIO_IO_File(_enc__passive__encore_libs_master_FileIO_IO_File_t* this, ... )
{
  va_list params;
  va_start(params, this);
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


_enc__passive__encore_libs_master_FileIO_IO_File_t* _enc__constructor__encore_libs_master_FileIO_IO_File(pony_ctx_t** _ctx)
{
  _enc__passive__encore_libs_master_FileIO_IO_File_t* this = ((_enc__passive__encore_libs_master_FileIO_IO_File_t*) encore_alloc((*_ctx), sizeof(_enc__passive__encore_libs_master_FileIO_IO_File_t)));
  this->_enc__self_type = (&(_enc__passive__encore_libs_master_FileIO_IO_File_type));
  return this;
}


void* _enc__method__encore_libs_master_FileIO_IO_File__init(pony_ctx_t** _ctx, _enc__passive__encore_libs_master_FileIO_IO_File_t* _this, _enc__passive_String_String_t* _enc__arg_fname, _enc__passive_String_String_t* _enc__arg_mode)
{
  /* this.fname = fname */;
  (*({ _this;}))._enc__field_fname = _enc__arg_fname;
  /* this.mode = mode */;
  (*({ _this;}))._enc__field_mode = _enc__arg_mode;
  return UNIT;
}


void* _enc__method__encore_libs_master_FileIO_IO_File_open(pony_ctx_t** _ctx, _enc__passive__encore_libs_master_FileIO_IO_File_t* _this, _enc__passive_String_String_t* _enc__arg_fin, _enc__passive_String_String_t* _enc__arg_mode)
{
  /* this.mode = if mode.equals("") then
              "w+r+a"
            else
              mode */;
  _enc__passive_String_String_t* _ite_0;
  if (({check_receiver(_enc__arg_mode, ".", "mode", "equals", "\"./encore-libs-master/FileIO/IO.enc\" (line 15, column 21)");
        _enc__passive_String_String_t* _new_2 = _enc__constructor_String_String(_ctx);
        char* _embed_3 = ({"";});
        _enc__type_init_String_String(_new_2);
        _enc__method_String_String__init(_ctx, _new_2, _embed_3);
        int64_t _sync_method_call_1 = _enc__method_String_String_equals(_ctx, _enc__arg_mode, _new_2); _sync_method_call_1;}))
  {
    _enc__passive_String_String_t* _new_4 = _enc__constructor_String_String(_ctx);
    char* _embed_5 = ({"w+r+a";});
    _enc__type_init_String_String(_new_4);
    _enc__method_String_String__init(_ctx, _new_4, _embed_5);
    _ite_0 = ((_enc__passive_String_String_t*) _new_4);
  }
  else
  {
    _ite_0 = ((_enc__passive_String_String_t*) _enc__arg_mode);
  };
  (*({ _this;}))._enc__field_mode = _ite_0;
  /* this.fname = fin */;
  (*({ _this;}))._enc__field_fname = _enc__arg_fin;
  /* let fin = fin.data */;
  /* fin = fin.data */;
  char* _fieldacc_6 = (*_enc__arg_fin)._enc__field_data;
  char* _fin_7 = _fieldacc_6;
  /* let mChar = this.mode.data */;
  /* mChar = this.mode.data */;
  _enc__passive_String_String_t* _fieldacc_8 = (*_this)._enc__field_mode;
  char* _fieldacc_9 = (*_fieldacc_8)._enc__field_data;
  char* _mChar_10 = _fieldacc_9;
  /* this.file = embed FILE* FILE *file = fopen(#{fin}#, #{mChar}#);
                  if (!file) {
                    printf("Cannot open file, exiting.\n");
                    exit(1);
                  };
                  file; end */;
  FILE* _embed_11 = ({FILE *file = fopen(_fin_7, _mChar_10);
                  if (!file) {
                    printf("Cannot open file, exiting.\n");
                    exit(1);
                  };
                  file;});
  (*({ _this;}))._enc__field_file = _embed_11;
  return UNIT;
}


void* _enc__method__encore_libs_master_FileIO_IO_File_close(pony_ctx_t** _ctx, _enc__passive__encore_libs_master_FileIO_IO_File_t* _this)
{
  /* let f = this.file */;
  /* f = this.file */;
  FILE* _fieldacc_0 = (*_this)._enc__field_file;
  FILE* _f_1 = _fieldacc_0;
  /* this.file = embed FILE* if (!#{f}#) {
        printf("Cannot close file, exiting.\n");
        exit(1);
      };
      fclose(#{f}#);
      (FILE*)NULL; end */;
  FILE* _embed_2 = ({if (!_f_1) {
        printf("Cannot close file, exiting.\n");
        exit(1);
      };
      fclose(_f_1);
      (FILE*)NULL;});
  (*({ _this;}))._enc__field_file = _embed_2;
  return UNIT;
}


void* _enc__method__encore_libs_master_FileIO_IO_File_write(pony_ctx_t** _ctx, _enc__passive__encore_libs_master_FileIO_IO_File_t* _this, _enc__passive_String_String_t* _enc__arg_content)
{
  /* this.writeChar(content.data) */;
  check_receiver(_this, ".", "this", "writeChar", "\"./encore-libs-master/FileIO/IO.enc\" (line 47, column 5)");
  char* _fieldacc_1 = (*_enc__arg_content)._enc__field_data;
  void* _sync_method_call_0 = _enc__method__encore_libs_master_FileIO_IO_File_writeChar(_ctx, _this, _fieldacc_1);
  return UNIT;
}


void* _enc__method__encore_libs_master_FileIO_IO_File_writeChar(pony_ctx_t** _ctx, _enc__passive__encore_libs_master_FileIO_IO_File_t* _this, char* _enc__arg_content)
{
  /* let file = this.file */;
  /* file = this.file */;
  FILE* _fieldacc_0 = (*_this)._enc__field_file;
  FILE* _file_1 = _fieldacc_0;
  /* embed void FILE *fout = #{file}#;
      if (!fout) {
        printf("Cannot open file, exiting.\n");
        exit(1);
      }
      fprintf(fout, #{content}#); end */;
  ({FILE *fout = _file_1;
      if (!fout) {
        printf("Cannot open file, exiting.\n");
        exit(1);
      }
      fprintf(fout, _enc__arg_content);});
  return UNIT;
}


_enc__passive_String_String_t* _enc__method__encore_libs_master_FileIO_IO_File_readline(pony_ctx_t** _ctx, _enc__passive__encore_libs_master_FileIO_IO_File_t* _this)
{
  /* new String(this.readlineChar()) */;
  _enc__passive_String_String_t* _new_0 = _enc__constructor_String_String(_ctx);
  check_receiver(_this, ".", "this", "readlineChar", "\"./encore-libs-master/FileIO/IO.enc\" (line 66, column 16)");
  char* _sync_method_call_1 = _enc__method__encore_libs_master_FileIO_IO_File_readlineChar(_ctx, _this);
  _enc__type_init_String_String(_new_0);
  _enc__method_String_String__init(_ctx, _new_0, _sync_method_call_1);
  return ((_enc__passive_String_String_t*) _new_0);
}


char* _enc__method__encore_libs_master_FileIO_IO_File_readlineChar(pony_ctx_t** _ctx, _enc__passive__encore_libs_master_FileIO_IO_File_t* _this)
{
  /* let f = this.file */;
  /* f = this.file */;
  FILE* _fieldacc_0 = (*_this)._enc__field_file;
  FILE* _f_1 = _fieldacc_0;
  /* embed char* char* line = encore_alloc(*_ctx,255);
      fgets(line, 255, #{f}#);
      line; end */;
  char* _embed_2 = ({char* line = encore_alloc(*_ctx,255);
      fgets(line, 255, _f_1);
      line;});
  return ((char*) _embed_2);
}


int64_t _enc__method__encore_libs_master_FileIO_IO_File_eof(pony_ctx_t** _ctx, _enc__passive__encore_libs_master_FileIO_IO_File_t* _this)
{
  /* let f = this.file */;
  /* f = this.file */;
  FILE* _fieldacc_0 = (*_this)._enc__field_file;
  FILE* _f_1 = _fieldacc_0;
  /* embed bool feof(#{f}#); end */;
  int64_t _embed_2 = ({feof(_f_1);});
  return ((int64_t) _embed_2);
}


pony_type_t _enc__passive__encore_libs_master_FileIO_IO_File_type = {.id=_ENC__ID__encore_libs_master_FileIO_IO_File, .size=sizeof(_enc__passive__encore_libs_master_FileIO_IO_File_t), .trace=_enc__trace__encore_libs_master_FileIO_IO_File, .vtable=trait_method_selector};
