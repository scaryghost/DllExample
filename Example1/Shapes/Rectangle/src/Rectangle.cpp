#include "Shapes/Rectangle/Rectangle.h"

namespace etsai {
namespace dllexample {

extern "C" Shape* createShape() {
    return new Rectangle(10.0, 10.0);
}

Rectangle::Rectangle(double length, double width) : 
    length(length),width(width) {
}

double Rectangle::area() {
    return length * width;
}

double Rectangle::perimeter() {
    return 2 * length + 2 * width;
}

const char* Rectangle::whoAmI() {
    return "Rectangle";
}

}   //namespace dllexample
}   //namespace etsai
