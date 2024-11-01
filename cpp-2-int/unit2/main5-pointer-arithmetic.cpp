#include <iostream>

using namespace std;

/* Pointers
 * - Efficiently passing large objects
 * - Dynamic memory allocation
 * - Enabling polymorphism
 */

int main() {
	cout << "pointers arithmetic: " << endl << endl;

    int numbers[] = {10, 20, 30};

    int* ptr = numbers; // ptr pointing to the 1st element of array numbers
    cout << *(ptr + 1) << endl; // harder to understand
    cout << ptr[1] << endl; // Preferred
    cout << numbers[1] << endl; // Same value as previous two

    return 0;
}
