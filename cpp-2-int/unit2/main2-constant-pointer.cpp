#include <iostream>

using namespace std;

/* Pointers
 * - Efficiently passing large objects
 * - Dynamic memory allocation
 * - Enabling polymorphism
 */

int main() {
	cout << "Constant pointers: " << endl << endl;

    const int x = 10;
    int* ptr1 = &x; // Error! A pointer cannot point to a constant!

    double y = 10;
    int* ptr2 = &y; // Error! Pointer's type is int, then cannot point to a double!

    const int z = 20;
    const int* ptr3 = &z; // This is okay!

    // constant pointer
    int tt = 20;
    int* const ptr4 = &tt; // This is okay!

    // Constant pointer pointing to a constant integer
    const int rr = 10;
    const int* const ptr5 = &rr;

    return 0;
}
