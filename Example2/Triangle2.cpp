#include "Triangle.h"
#include <chrono>
#include <cmath>
#include <iostream>
#include <random>

static unsigned seed= std::chrono::system_clock::now().time_since_epoch().count();
static std::uniform_real_distribution<double> dist(1, 10);
static std::default_random_engine re(seed);

Triangle::Triangle(double base, double height) : base(dist(re)), height(dist(re)) {
}

double Triangle::area() {
    std::cout << "Calculating the area of a triangle fools!" << std::endl;
    if (attrs.count("area") == 0) {
        attrs["area"]= base * height;
    }
    return attrs["area"];
}

double Triangle::perimeter() {
    std::cout << "Calculating the perimeter of a triangle fools!" << std::endl;
    if (attrs.count("perimeter") == 0) {
        double hypotenuse= std::sqrt(base * base + height * height);
        attrs["perimeter"]= 2 * hypotenuse + base;
    }
    return attrs["perimeter"];
}
