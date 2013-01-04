MODULE=Shapes/Rectangle
LIB_NAME=librectangle.so
OBJ=$(MODULE)/src/Rectangle.o

all:
	g++ -I. -Wall -fPIC -c $(MODULE)/src/Rectangle.cpp -o $(OBJ)
	g++ -shared -Wl,-soname,$(LIB_NAME) -o $(LIB_NAME) $(OBJ)

clean:
	rm -f $(LIB_NAME) $(OBJ)
