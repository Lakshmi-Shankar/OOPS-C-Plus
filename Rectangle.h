#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Shape.h"

class Rectangle : public Shape {
private:
    double length, width;

public:
    Rectangle(double l, double w) : Shape("Rectangle"), length(l), width(w) {}

    double calculateArea() const override {
        return length * width;
    }

    double calculatePerimeter() const override {
        return 2 * (length + width);
    }

    void display() const override {
        cout << "Rectangle (L=" << length << ", W=" << width << ")" << endl;
    }
};

#endif
