#include "Rectangle.h"
#include <iostream>

using namespace std;

/*
 * Definition: Data Hiding
 * - A class should hide its internal data from the outside code
 * - and provide functions for accessing the data.
 */
int main() {
    Rectangle rectangle;
    rectangle.setWidth(100);
    cout << rectangle.getWidth() << endl;

    return 0;
}

