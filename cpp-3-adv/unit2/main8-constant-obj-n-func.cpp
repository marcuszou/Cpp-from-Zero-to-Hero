#include "Rectangle.h"
#include <iostream>

using namespace std;

/*
 * Constant Objects and Functions
 */

int main() {
    // If an object is "const", then all member variables are immutable
    // you can not set the width, height, etc. any more, Dont call any setters, but getters.
    const Rectangle rectangle;
    rectangle.getArea();
    // getObjectsCount cannot be called from an object: rectangle, but a class: Rectangle
    Rectangle::getObjectsCount();

    return 0;
}

