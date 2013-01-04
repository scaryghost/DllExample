MODULE=Shapes/Circle
LIB_NAME=libcircle.so
OBJ=$(MODULE)/src/Circle.o

all:
	g++ -I. -Wall -fPIC -c $(MODULE)/src/Circle.cpp -o $(OBJ)
	g++ -shared -Wl,-soname,$(LIB_NAME) -o $(LIB_NAME) $(OBJ)

clean:
	rm -f $(LIB_NAME) $(OBJ)
