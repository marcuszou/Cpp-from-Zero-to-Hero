#include <iostream>
using namespace std;

int main() {
    // value-swap
    int a = 1;
    int b = 2;
    cout << "a = " << a << "; b = " << b << endl;
    int temp = a;
    a = b;
    b = temp;
    cout << "a = " << a << "; b = " << b << " after swapping!\n" << endl;

    // Hello World!
    cout << "Hello World!\n";

    return 0;
}