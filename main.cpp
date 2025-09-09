#include "ShapeManager.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Triangle.h"
#include "InputValidator.h"

int main() {
    ShapeManager manager;

    if (InputValidator::isPositive(5)) {
        manager.addShape(new Circle(5));
    }

    manager.addShape(new Rectangle(4, 6));
    manager.addShape(new Triangle(3, 4, 5));

    manager.displayAllShapes();

    return 0;
}
