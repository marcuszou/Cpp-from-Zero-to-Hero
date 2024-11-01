#include <iostream>

using namespace std;

int main() {
    //converting string to numeric
    double price = stod("19.99");
    cout << price << endl;

    // numeric to string
    string str = to_string(19.99);
    cout << str << endl;

    return 0;
}
