#include <iostream>
#include "Length.h"

using namespace std;

// Spaceship Operator

int main() {
    Length first{10};
    Length second{10};
    Length third = first + second;
    //cout << third;
    first = second;

    return 0;
}

