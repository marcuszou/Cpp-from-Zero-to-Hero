#include <iostream>

using namespace std;

/* Pointers
 * - Efficiently passing large objects
 * - Dynamic memory allocation
 * - Enabling polymorphism
 */

int main() {
	cout << "pointers and arrays: " << endl << endl;

    int numbers[] = {10, 20, 30};
    cout << "address of numbers: " << endl << numbers << endl << endl;

    int* ptr = numbers;
    cout << "address of ptr: " << ptr << endl;
    cout << "value of ptr: " << *ptr << endl;
    cout << "value of numbers[1]: " << *(numbers + 1) << endl;
    cout << "value of numbers[1]: " << ptr[1] << endl;

    return 0;
}
