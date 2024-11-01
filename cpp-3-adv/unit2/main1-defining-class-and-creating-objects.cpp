#include "Rectangle.h"
#include <iostream>

using namespace std;

/*
 * YOU'LL LEARN IN UNIT 2 - "CLASSES"
 * - The basics of Object-oriented programming
 * - Classes
 * - Access modifiers (public, private)
 * - Constructors
 * - Destructors
 * - Static members
 */

int main() {
    Rectangle rectangle;
    rectangle.width = 10;
    rectangle.height = 20;
    cout << rectangle.getArea() << endl;

    Rectangle first;
    Rectangle second;
    cout << &first << endl;
    cout << &second << endl;

    return 0;
}

