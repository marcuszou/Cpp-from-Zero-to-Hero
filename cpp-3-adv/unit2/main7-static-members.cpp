#include "Rectangle.h"
#include <iostream>

using namespace std;

/*
 * Destructor
 */

int main() {
    Rectangle first{10, 20};
    Rectangle second{30, 40};
    cout << Rectangle::getObjectsCount << endl;

    return 0;
}

