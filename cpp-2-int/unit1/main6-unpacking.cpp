#include <iostream>
#include <limits>
using namespace std;

/*
 * Arrays
 */

int main() {
    cout << "Unpacking Arrays: " << endl;
    int values[3] = {10, 20, 30};
    // C++ structured binding
    // JavaScript: Destructuring
    // Python: unpacking
    auto [x, y, z] = values;
    cout << "x: " << x << ", y: " << y << ", z: " << z << endl;

    return 0;
}
