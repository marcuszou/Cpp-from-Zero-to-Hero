#include <iostream>

using namespace std;

/* Pointers
 * - Efficiently passing large objects
 * - Dynamic memory allocation
 * - Enabling polymorphism
 */

int main() {
	cout << "Dynamically Resizing an Array: " << endl << endl;
    int capacity = 5;
    int* numbers = new int[capacity];
    int entries = 0;

    while (true) {
        cout << "Number: ";
        cin >> numbers[entries];
        if (cin.fail()) break;
        entries++;
        if (entries == capacity) {
            // Dynamically Resizing the Array:
            // - Create a temp array (twice the size)
            capacity *= 2;
            int* temp = new int[capacity];
            // - Copy all the elements
            for (int i = 0; i < entries; i++)
                temp[i] = numbers[i];
            // - Have "numbers" pointer point to the new array
            delete[] numbers;
            numbers = temp;

        }
    }

    for (int i = 0; i < entries; i++)
        cout << numbers[i] << endl;

    // claim the memory manually:
    delete[] numbers;

    return 0;
}
