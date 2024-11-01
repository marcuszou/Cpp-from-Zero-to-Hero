#include <iostream>

using namespace std;

/* Pointers
 * - Efficiently passing large objects
 * - Dynamic memory allocation
 * - Enabling polymorphism
 */

int main() {
	cout << "Dynamic Memory Allocation: " << endl << endl;

    // Stack - Memory will be released automatically out of the scope of this function - fixed size of memory
    // int numbers[1000];

    // Heap (Free Store) - initialize a smaller memory block, can increase later on - that's dynamic.
    // User is responsible for release the memory.
    // Otherwise, memory occupation will increase till systems crashes - that's Memory Leak.
    int* numbers = new int[10];
    int* number = new int;

    // claim the memory manually:
    delete[] numbers;
    delete number;

    number = nullptr;
    numbers = nullptr;

    return 0;
}
