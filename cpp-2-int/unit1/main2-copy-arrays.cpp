#include <iostream>
using namespace std;
/*
 * Arrays
 */

int main() {

    cout << " Copy Arrays: " << endl;
    int first[] = {10, 20, 30};
    int second[size(first)];

    // Copy the Array
    for (int i = 0; i < size(first); i++)
        second[i] = first[i];

    // Verify
    for (int number: second)
        cout << number << endl;

    return 0;
}
