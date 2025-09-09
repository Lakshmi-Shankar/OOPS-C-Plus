#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>
#include <string>
using namespace std;

class Shape {
protected:
    string name; // Encapsulation

public:
    Shape(string n) : name(n) {}
    virtual ~Shape() {}

    // Pure virtual functions (Abstraction)
    virtual double calculateArea() const = 0;
    virtual double calculatePerimeter() const = 0;

    // Virtual function for Polymorphism
    virtual void display() const {
        cout << "Shape: " << name << endl;
    }

    string getName() const { return name; }
};

#endif
