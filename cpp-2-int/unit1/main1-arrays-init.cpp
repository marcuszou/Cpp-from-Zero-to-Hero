#include <iostream>
using namespace std;
/*
 * Arrays
 *
 */

int main() {

    cout << "Arrays initialization: ";
    int numbers[5] = {10, 20, 30};
    // this will display the address of the array in memory
    cout << numbers << endl;
    // retrieve the elements of the array using range-based for loop
    for (auto number: numbers)
        cout << number << endl;
    // size
    for (int i=0; i < size(numbers); i++)
        cout << numbers[i] << endl;

    return 0;
}
