#include <iostream>
#include "utils/greet.hpp"

using namespace std;
using messaging::greet;

// Global variable (global scope)
const double taxRate = .2;

double calcTax(int sales) {
    return sales * taxRate;
}

void greet(string title, string name) {
    cout << "Hello " << title << " " << name;
}

string fullName(string firstName, string lastName){
    // Concatenating (combining)
    return firstName + " " + lastName;
}

// Scope of variables
double increasePrice(double price) {
    price *= 1.2;
    return price;
}

int main() {
    // Calling - Invoking - executing
    greet("Mr", fullName("Marcus", "Zou"));
    cout << "\nDone" << endl;

    // Overloading Function
    // Scope of variables
    double price = 100;
    cout << increasePrice(price) << endl;
    // Passing variable by value (resouces needed more)
    // Passing variable by reference (using symbol of &) saving resources.

    // Local variable (local scope)
    int sales = 10'560;
    double tax = calcTax (sales);
    cout << tax;

    // debugging

    return 0;
}
