#ifndef SHAPEMANAGER_H
#define SHAPEMANAGER_H

#include "Shape.h"
#include <vector>

class ShapeManager {
private:
    vector<Shape*> shapes; // Encapsulation

public:
    void addShape(Shape* shape) {
        shapes.push_back(shape);
    }

    void displayAllShapes() const {
        for (auto shape : shapes) {
            shape->display();
            cout << "Area: " << shape->calculateArea() << endl;
            cout << "Perimeter: " << shape->calculatePerimeter() << endl;
            cout << "-------------------" << endl;
        }
    }

    ~ShapeManager() {
        for (auto shape : shapes) {
            delete shape;
        }
    }
};

#endif
