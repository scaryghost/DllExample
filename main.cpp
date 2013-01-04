#include "Base/Shape.h"

#include <iostream>
#include <dlfcn.h>

using etsai::dllexample::Shape;
using std::cerr;
using std::cout;
using std::endl;

typedef Shape* (*ShapeFactory)();

int main(int argc, char **argv) {
    void *dllHandle;

    dllHandle = dlopen ("shapes.so", RTLD_LAZY);
    if (!dllHandle) {
        cerr << dlerror() << endl;
        return 1;
    }
    ShapeFactory createShape = reinterpret_cast<ShapeFactory>(dlsym(dllHandle, "createShape"));
    Shape *instance= createShape();

    cout << "Shape: " << instance->whoAmI() << endl;
    cout << "Area: " << instance->area() << endl;
    cout << "Perimeter" << instance->perimeter() << endl;
    
    dlclose(dllHandle);
    return 0;
}
