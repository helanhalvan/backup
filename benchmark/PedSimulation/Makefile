LIBPEDSIM_DIR = libpedsim
LIBPEDSIM = $(LIBPEDSIM_DIR)/libpedsim.so
DEMOAPP_DIR = demo
DEMOAPP = $(DEMOAPP_DIR)/demo
SYMLINK = $(DEMOAPP_DIR)/libpedsim.so
CUSTOMLIBS=

CC=gcc
CXX=g++ -std=c++11 -ggdb
OPENCLFLAGS=-lOpenCL
CUSTOMLIBS+=$(OPENCLFLAGS)

# Special setup if you are running on mac
QMAKE_MAC =
MACAPP =
UNAME_S := $(shell uname | tr "A-Z" "a-z")
ifeq ($(UNAME_S),darwin)
$(info Compiling for MAC.)
	COMPILER_VERSION=5
	CC = gcc-$(COMPILER_VERSION)
	CXX = g++-$(COMPILER_VERSION)
	OPENCLFLAGS=-framework OpenCL
	QMAKE_MAC = -spec macx-g++-$(COMPILER_VERSION)
	MACAPP = $(DEMOAPP_DIR)/demo.app/Contents/MacOS/demo
	MACOSLINK = $(DEMOAPP_DIR)/demo
endif

# Nothing special for Linux
ifeq ($(UNAME_S),linux)
$(info Compiling for Linux.)
endif

# Are we going to compile CUDA code?
I_DONT_EVEN_HAVE_CUDA=
I_WANT_TO_LINK_CUDA=-lcudart
ifneq ($(shell which nvcc), )
	CUSTOMLIBS+=$(I_WANT_TO_LINK_CUDA)
else
	CUSTOMLIBS+=$(I_DONT_EVEN_HAVE_CUDA)
endif

all: preprocess_opencl_files $(LIBPEDSIM) $(DEMOAPP)

include Makefile.test

preprocess_opencl_files:
	./file_to_string.rb heatmap_cl $(LIBPEDSIM_DIR)/heatmap.cl > $(LIBPEDSIM_DIR)/opencl_code.h
	./file_to_string.rb move_cl $(LIBPEDSIM_DIR)/move.cl >> $(LIBPEDSIM_DIR)/opencl_code.h
	#cd $(LIBPEDSIM_DIR) && xxd -i heatmap.cl opencl_code.h
	#cd $(LIBPEDSIM_DIR) && xxd -i move.cl >> opencl_code.h


$(LIBPEDSIM):
	make -C $(LIBPEDSIM_DIR)
	ln -fs ../$(LIBPEDSIM) $(SYMLINK)
	ln -fs $(LIBPEDSIM) libpedsim.so

$(DEMOAPP): export LD_RUN_PATH=$(PWD)/libpedsim

$(DEMOAPP): $(MACAPP)
	cd $(DEMOAPP_DIR); qmake "CUSTOMLIBS=$(CUSTOMLIBS)" $(QMAKE_MAC)
	make -C $(DEMOAPP_DIR)

$(MACAPP):
	ln -fs ../$(MACAPP) $(DEMOAPP);

test: clean
	make -k alltests CXX_="$(CXX)" CC_="$(CC)" OPENCLFLAGS="$(OPENCLFLAGS)"\
	&& echo All tests completed successfully! || echo Make test FAILED
#	make    alltests && echo All tests completed successfully || echo Make test FAILED # To stop at first failure

clean:
	-make -C $(DEMOAPP_DIR) clean
	-make -C $(LIBPEDSIM_DIR) clean
	-make -C tests test.clean
	-rm -f $(LIBPEDSIM_DIR)/opencl_code.h
	-rm -f $(DEMOAPP_DIR)/demo
	-rm -f $(DEMOAPP_DIR)/Makefile
	-rm -f $(DEMOAPP_DIR)/src/Makefile
	-rm -f $(SYMLINK) $(MACOSLINK) $(MACAPP) libpedsim.so

clean_libpedsim:
	-make -C $(LIBPEDSIM_DIR) clean
	-rm -f $(LIBPEDSIM_DIR)/opencl_code.h
	-rm -f $(SYMLINK) $(MACOSLINK) $(MACAPP) libpedsim.so

.PHONY: $(LIBPEDSIM) $(DEMOAPP)  alltests clean preprocess_opencl_files
