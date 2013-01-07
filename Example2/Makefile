export LD_LIBRARY_PATH=.

LIB_ROOT=libtriangle.so
OBJ=Triangle.o
BIN=example2
CPP_FLAGS=-std=c++0x -Wall -Werror -DTRIANGLE_DLL

all:

main:
	g++ -I. -L. $(CPP_FLAGS) main.cpp -o $(BIN) -ltriangle

lib1:
	g++ -I. $(CPP_FLAGS) -fPIC -c Triangle.cpp -o $(OBJ) -DTRIANGLE_DLL_EXPORTS
	g++ -shared -Wl,-soname,$(LIB_ROOT).1 -o $(LIB_ROOT).1.0.0 $(OBJ)

lib2:
	g++ -I. $(CPP_FLAGS) -fPIC -c Triangle2.cpp -o $(OBJ) -DTRIANGLE_DLL_EXPORTS
	g++ -shared -Wl,-soname,$(LIB_ROOT).1 -o $(LIB_ROOT).1.0.1 $(OBJ)

run:
	./example2

clean:
	rm -f $(OBJ) $(LIB_ROOT).1.0.0 $(LIB_ROOT).1.0.1 $(BIN)
