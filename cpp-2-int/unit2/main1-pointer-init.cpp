#include <iostream>

using namespace std;

/* Pointers
 * - Efficiently passing large objects
 * - Dynamic memory allocation
 * - Enabling polymorphism
 */

int main() {
	cout << "Declaring and using pointers: " << endl << endl;

    int number = 10;
    cout << "number var is stored at: " << &number << endl << endl;

    // Initialize pointer by pointing to nullptr (this is a keyword):
    // int* ptr = nullptr
    // or a real-world variable, e.g.: &number, as below:

    // The address-of operator
    int* ptr = &number;
    cout << "pointer address/value: " << ptr << endl;
    cout << "the value of number variable: " << *ptr << endl << endl;

    // Indirection (de-referencing) operator
    *ptr = 20;
    cout << "pointer address/value: " << ptr << endl;
    cout << "the value of number variable: " << *ptr << endl;


    return 0;
}
