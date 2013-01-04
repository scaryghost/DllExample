#include "Shapes/Circle/Circle.h"

const double PI= 3.141592653589793238462643383279502;

namespace etsai {
namespace dllexample {

extern "C" Shape* createShape() {
    return new Circle(10.0);
}

Circle::Circle(double radius) : radius(radius) {
}

double Circle::area() {
    return PI * radius * radius;
}

double Circle::perimeter() {
    return PI * 2 * radius;
}

const char* Circle::whoAmI() {
    return "Circle";
}

}   //namespace dllexample
}   //namespace etsai
