export LD_LIBRARY_PATH=.

LIB_NAME=libtriangle.so
OBJ=Triangle.o
BIN=example2
CPP_FLAGS=-std=c++0x -Wall -Werror -DTRIANGLE_DLL

all:
	g++ -I. $(CPP_FLAGS) -fPIC -c Triangle.cpp -o $(OBJ) -DTRIANGLE_DLL_EXPORTS
	g++ -shared -Wl,-soname,$(LIB_NAME) -o $(LIB_NAME) $(OBJ)
	g++ -I. -L. $(CPP_FLAGS) main.cpp -o $(BIN) -ltriangle

run:
	./example2

clean:
	rm -f $(OBJ) $(LIB_NAME) $(BIN)
