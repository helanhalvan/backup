CC=clang
TARGET=slow_down.enc.run
INC=/home/sten/Desktop/encore-lang/encore-development/release/inc/
LIB=/home/sten/Desktop/encore-lang/encore-development/release/lib/*.a
FLAGS=-std=gnu11 -Wall -fms-extensions -Wno-format -Wno-microsoft -Wno-parentheses-equality -Wno-unused-variable -Wno-unused-value -lSDL2 -lSDL2_ttf -lSDL2_image -ggdb -O3 -lpthread -ldl -lm -Wno-attributes /home/sten/Desktop/encore-lang/encore-development/release/lib/*.a -I /home/sten/Desktop/encore-lang/encore-development/release/inc/ -I . -g
BENCH_FLAGS=-std=gnu11 -Wall -fms-extensions -Wno-format -Wno-microsoft -Wno-parentheses-equality -Wno-unused-variable -Wno-unused-value -lSDL2 -lSDL2_ttf -lSDL2_image -O3 -O3 -lpthread -ldl -lm -Wno-attributes /home/sten/Desktop/encore-lang/encore-development/release/lib/*.a -I /home/sten/Desktop/encore-lang/encore-development/release/inc/ -I . -g
DEFINES=
DEPS=shared.c Agent_driver.encore.c Main.encore.c String.encore.c

all: $(TARGET)

$(TARGET): $(DEPS)
	$(CC) $(FLAGS) -I $(INC) -I .. $(DEPS) $(LIB) $(LIB) $(DEFINES) -o $(TARGET)

bench: $(DEPS)
	$(CC) $(BENCH_FLAGS) -I $(INC) -I .. $(DEPS) $(LIB) $(LIB) $(DEFINES) -o $(TARGET)

clean:
	rm -rf $(TARGET) $(TARGET).dSYM

.PHONY: all bench clean
