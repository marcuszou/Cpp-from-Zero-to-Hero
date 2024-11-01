#include <iostream>
#include <memory>

using namespace std;

/* Smart Pointers: 2 types
 * - Unique pointers:
 *   -- owns the memory address it points to;
 *   -- cannot have 2 unique pointers pointing to the same memory location.
 * - shared pointers
 *   -- If we need multiple pointers pointing to the same memory location,
 *   -- we have to use shared pointers.
 */

int main() {
	cout << "Smart pointers: unique pointer" << endl << endl;
    // Format: class<dataType> objName(new instance)
    unique_ptr<int> x(new int);
    // Another way to make a unique pointer:
    auto y = make_unique<int>();
    auto numbers = make_unique<int[]>(10);

    *x = 10;
    *y = 20;
    numbers[0] = 300;
    cout << *x <<endl << *y << endl << numbers[0];

    // No need to delete the pointer since its smart pointer.

    return 0;
}
