CC=clang
TARGET=main.enc.run
INC=/home/sten/Desktop/encore-lang/encore-development/release/inc/
LIB=/home/sten/Desktop/encore-lang/encore-development/release/lib/*.a
FLAGS=-std=gnu11 -Wall -fms-extensions -Wno-format -Wno-microsoft -Wno-parentheses-equality -Wno-unused-variable -Wno-unused-value -lSDL2 -lSDL2_ttf -lSDL2_image -ggdb -lpthread -ldl -lm -Wno-attributes /home/sten/Desktop/encore-lang/encore-development/release/lib/*.a -I /home/sten/Desktop/encore-lang/encore-development/release/inc/ -I . -g
BENCH_FLAGS=-std=gnu11 -Wall -fms-extensions -Wno-format -Wno-microsoft -Wno-parentheses-equality -Wno-unused-variable -Wno-unused-value -lSDL2 -lSDL2_ttf -lSDL2_image -O3 -lpthread -ldl -lm -Wno-attributes /home/sten/Desktop/encore-lang/encore-development/release/lib/*.a -I /home/sten/Desktop/encore-lang/encore-development/release/inc/ -I . -g
DEFINES=
DEPS=shared.c HashMap.encore.c HashMapIterator.encore.c Entry.encore.c LinkedIterator.encore.c LinkedList.encore.c LinkedNode.encore.c Siphash.encore.c File.encore.c Agent_struct.encore.c Agent.encore.c Single_Box.encore.c Multi_Box.encore.c Top_Box.encore.c Single_Box_face.encore.c Multi_Box_face.encore.c Top_Box_face.encore.c XML_lib.encore.c XML_node.encore.c Main.encore.c Right.encore.c Left.encore.c String.encore.c

all: $(TARGET)

$(TARGET): $(DEPS)
	$(CC) $(FLAGS) -I $(INC) -I .. $(DEPS) $(LIB) $(LIB) $(DEFINES) -o $(TARGET)

bench: $(DEPS)
	$(CC) $(BENCH_FLAGS) -I $(INC) -I .. $(DEPS) $(LIB) $(LIB) $(DEFINES) -o $(TARGET)

clean:
	rm -rf $(TARGET) $(TARGET).dSYM

.PHONY: all bench clean
