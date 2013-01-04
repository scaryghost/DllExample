#ifndef ETSAI_DLLEXAMPLE_RECTANGLE
#define ETSAI_DLLEXAMPLE_RECTANGLE

#include "Base/Shape.h"

namespace etsai {
namespace dllexample {

class Rectangle : public Shape {
public:
    Rectangle(double length, double width);

    virtual double area();
    virtual double perimeter();
    virtual const char* whoAmI();

private:
    double length, width;
};  //class Circle

}   //namespace dllexample
}   //namespace etsai

#endif
