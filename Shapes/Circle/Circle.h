#ifndef ETSAI_DLLEXAMPLE_CIRCLE
#define ETSAI_DLLEXAMPLE_CIRCLE

#include "Base/Shape.h"

namespace etsai {
namespace dllexample {

class Circle : public Shape {
public:
    Circle(double radius);

    virtual double area();
    virtual double perimeter();
    virtual const char* whoAmI();

private:
    double radius;
};  //class Circle

}   //namespace dllexample
}   //namespace etsai

#endif
