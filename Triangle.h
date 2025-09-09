#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "Shape.h"
#include <cmath>

class Triangle : public Shape {
private:
    double a, b, c;

public:
    Triangle(double x, double y, double z) : Shape("Triangle"), a(x), b(y), c(z) {}

    double calculateArea() const override {
        double s = (a + b + c) / 2;
        return sqrt(s * (s - a) * (s - b) * (s - c));
    }

    double calculatePerimeter() const override {
        return a + b + c;
    }

    void display() const override {
        cout << "Triangle (Sides: " << a << ", " << b << ", " << c << ")" << endl;
    }

    // Covariant return type (C++ allows returning derived type)
    Triangle* clone() const {
        return new Triangle(a, b, c);
    }
};

#endif
