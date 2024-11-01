#include "Rectangle.h"
#include <iostream>
#include <memory>

using namespace std;

/*
 * Pointers to Objects
 * - Use smart pointers please
 * - unique pointer is dominant, then use shared pointer
 */

int main() {
    /* Showcasing the Heap pointer ("new" keyword) - not encouraged
    auto* rectangle = new Rectangle(10, 20);
    rectangle->draw();
    delete rectangle;
    rectangle = nullptr;
    */

    auto recObj = make_unique<Rectangle>(100, 200);
    recObj->draw();

    return 0;
}

