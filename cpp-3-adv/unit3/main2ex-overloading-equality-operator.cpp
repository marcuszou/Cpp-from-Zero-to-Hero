#include <iostream>
#include "Point.h"

using namespace std;

int main() {
    Point first{10, 20};
    Point second{10, 20};

    cout << boolalpha << (first == second);

    return 0;
}

