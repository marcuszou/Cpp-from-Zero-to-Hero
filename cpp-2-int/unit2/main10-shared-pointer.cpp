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
	cout << "Smart pointers: shared pointer" << endl << endl;
    // Format: class<dataType> objName(new instance)
    // shared_ptr<int> x(new int);
    // Another way to make a unique pointer:
    auto x = make_shared<int>();
    *x = 10;

    // Assign ptr x to ptr y:
    shared_ptr<int> y(x);
    if (x == y)
        cout << "Equal" << endl;
    cout << *y << endl;

    // No need to delete the pointer since its smart pointer.

    return 0;
}
