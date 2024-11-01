#include <iostream>
#include "Rectangle.h"

using namespace std;

/*
 * Array of Objects
 */

int main() {
    Rectangle rectangles[] = {
        Rectangle(), // or (),
        Rectangle(10, 20),  // or (10, 20),
        Rectangle(10, 20, "blue")  // or (10, 20, "blue")
    };
    //rectangles[0].draw();
    for (Rectangle& rect: rectangles)
    {
        rect.draw();
    }

    return 0;
}

