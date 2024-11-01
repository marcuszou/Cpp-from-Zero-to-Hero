#include <iostream>

using namespace std;

/* Pointers
 * - Efficiently passing large objects
 * - Dynamic memory allocation
 * - Enabling polymorphism
 */

int main() {
	cout << "Comparing Pointers: " << endl << endl;

    int x = 10;
    int y = 20;

    int* ptrX = &x;
    int* ptrY = &y;

    if (ptrX != nullptr)
        cout << *ptrX << endl << endl;

    cout << "Ex.: Print the array reversely:" << endl;
    int numbers[] = {10, 20, 30, 40, 50};
    int* ptr = &numbers[size(numbers) -1];
    while (ptr >= numbers)
    {
        cout << *ptr << endl;
        ptr--;
    }

    return 0;
}
