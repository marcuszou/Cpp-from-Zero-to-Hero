#include <iostream>

using namespace std;

/*
 * Arrays
 */

void printNumbers(int numbers[], int size)
{
    for (int i=0; i < size; i++)
        cout << numbers[i] << endl;
}

int main() {

    cout << "Passing Arrays to Functions: " << endl;
    int numbers[] = {10, 20, 30};
    printNumbers(numbers, size(numbers));

    return 0;
}
