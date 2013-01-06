#include "Triangle.h"
#include <iostream>

using namespace std;

int main(int argc, char **argv) {
    Triangle t(3, 4);
    cout << "Area: " << t.area() << endl;
    cout << "Perimeter: " << t.perimeter() << endl;
}
