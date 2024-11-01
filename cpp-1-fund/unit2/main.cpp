#include <iostream>
#include <cmath>

using namespace std;

int main() {
    //fahrenheit to celsius temporeture conversion
    cout << "Fahrenheit: ";
    int fahrenheit;
    cin >> fahrenheit;
    double celsius = (fahrenheit - 32) / 1.8;
    cout << celsius << "\n";
    // cmath
    cout << "Radius: ";
    double radius;
    cin >> radius;
    const double pi = 3.1415;
    double area = pi * pow(radius, 2);
    cout << area << endl;

    return 0;
}
