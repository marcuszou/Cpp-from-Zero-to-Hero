#include <iostream>

using namespace std;

int main() {

    // For loop
    for (int i=5; i > 0; i--) {
        if (i % 2 != 0)
        cout << i << endl;
    }

    // Factorial
    cout << "Enter a positive number: ";
    int nmb;
    cin >> nmb;
    if (nmb < 0)
        cout << "Error! Number is not positive.";
    else {
        int factorial = 1;
        for (int i = 1; i <= nmb; i++)
            factorial *= i;
        cout << "The factorial of " << nmb << ": " << factorial << endl;
    }

    // Regular For loop
    int numbers[] = {1,2,3,4,5};
    // sizeof(numbers: 20
    // sizeof(int): 4
    for (int i=0; i < sizeof(numbers) / sizeof(int); i++)
        cout << numbers[i] << endl;
    // range-based for loop
    cout << "Here is the result of range based for loop: " << endl;
    for (int number: numbers)
        cout << number << endl;

    // Another example of range based for loop
    string name = "Marcus Zou";
    for (char ch: name)
        cout << ch << endl;

    // While loop
    cout << "While loop demo!\n";
    int i = 1;
    while (i <=5 ) {
        cout << i << endl;
        i++;
    }

    // Do-While loop
    int number;
    do {
        cout << "Enter a number: ";
        cin >> number;
    } while (number < 1 || number > 5);

    // Tools
    //      break: ti break out of a loop
    //      continue: to skip an iteration

    // Nested loops - Example: printing (x, y) coordinates
    for (int x = 1; x <= 5; x++) {
        for (int y = 1; y <= 5; y++)
            cout << "(" << x << ", " << y << ")" << endl;
    }

    // Nested loops - Example
    cout << "Rows: ";
    int rows;
    cin >> rows;

    for (int i=1; i <= rows; i++) {
        for (int j = 0; j < i; j++)
            cout << "*";
        cout << endl;
    }

    return 0;
}