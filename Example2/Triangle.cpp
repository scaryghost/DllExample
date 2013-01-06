#include "Triangle.h"

#include <cmath>

Triangle::Triangle(double base, double height) : base(base), height(height) {
}

double Triangle::area() {
    if (attrs.count("area") == 0) {
        attrs["area"]= base * height;
    }
    return attrs["area"];
}

double Triangle::perimeter() {
    if (attrs.count("perimeter") == 0) {
        double hypotenuse= std::sqrt(base * base + height * height);
        attrs["perimeter"]= 2 * hypotenuse + base;
    }
    return attrs["perimeter"];
}
