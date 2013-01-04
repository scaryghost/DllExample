export LD_LIBRARY_PATH=.

MAIN=main.cpp
MAIN_OBJ=dllexample

INC_DIR=.
CPP_FLAGS=-Wall -Werror -std=c++0x
DLL_FLAGS=-ldl -rdynamic

all:
	g++ $(CPP_FLAGS) -I$(INC_DIR) -o $(MAIN_OBJ) $(MAIN) $(DLL_FLAGS)

clean:
	rm -f $(MAIN_OBJ)
	make -f Shapes/Circle/src/Makefile clean

run:
	./$(MAIN_OBJ) $(ARGS)

libs: Base/Shape.h
	make -f Shapes/Circle/src/Makefile
