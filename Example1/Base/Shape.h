#ifndef ETSAI_DLLEXAMPLE_SHAPE
#define ETSAI_DLLEXAMPLE_SHAPE

namespace etsai {
namespace dllexample {

class Shape {
public:
    virtual double area()= 0;
    virtual double perimeter()= 0;
    virtual const char* whoAmI()= 0;
};  //class Shape

}   //namespace dllexample
}   //namespace etsai

#endif
