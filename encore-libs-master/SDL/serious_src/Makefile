CC=clang
TARGET=serious
INC=/home/sten/Desktop/encore-lang/encore-development/release/inc/
LIB=/home/sten/Desktop/encore-lang/encore-development/release/lib/*.a
FLAGS=-std=gnu11 -Wall -fms-extensions -Wno-format -Wno-microsoft -Wno-parentheses-equality -Wno-unused-variable -Wno-unused-value  -lpthread -ldl -lm -Wno-attributes /home/sten/Desktop/encore-lang/encore-development/release/lib/*.a -I /home/sten/Desktop/encore-lang/encore-development/release/inc/ -I . 
BENCH_FLAGS=-std=gnu11 -Wall -fms-extensions -Wno-format -Wno-microsoft -Wno-parentheses-equality -Wno-unused-variable -Wno-unused-value  -lpthread -ldl -lm -Wno-attributes /home/sten/Desktop/encore-lang/encore-development/release/lib/*.a -I /home/sten/Desktop/encore-lang/encore-development/release/inc/ -I . 
DEFINES=
DEPS=shared.c Main.encore.c MouseFiddler.encore.c Node.encore.c LinkedList.encore.c SDL_KeyboardEvent.encore.c SDL_MouseMotionEvent.encore.c SDL_MouseButtonEvent.encore.c SDL_Event_Handler.encore.c Event_Vat.encore.c SDL_Main.encore.c ColorRGBA.encore.c Point2D.encore.c Rectangle.encore.c String.encore.c Vat.encore.c

all: $(TARGET)

$(TARGET): $(DEPS)
	$(CC) $(FLAGS) -I $(INC) -I .. $(DEPS) $(LIB) $(LIB) $(DEFINES) -o $(TARGET)

bench: $(DEPS)
	$(CC) $(BENCH_FLAGS) -I $(INC) -I .. $(DEPS) $(LIB) $(LIB) $(DEFINES) -o $(TARGET)

clean:
	rm -rf $(TARGET) $(TARGET).dSYM

.PHONY: all bench clean
