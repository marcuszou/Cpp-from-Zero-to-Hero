#include <iostream>

using namespace std;

/* Pointers
 * - Efficiently passing large objects
 * - Dynamic memory allocation
 * - Enabling polymorphism
 */

// IncreasePrice Function
void increasePrice(double* price)
{
    *price *= 1.2;
}

// Exercise: Swap function
void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
	cout << "Passing pointers to functions: " << endl << endl;

    double price = 100;
    increasePrice(&price);
    cout << price << endl;

    // test the Swap function with pointer
    int x = 10;
    int y = 20;
    swap(&x, &y);
    cout << x << ", " << y << endl;

    return 0;
}
