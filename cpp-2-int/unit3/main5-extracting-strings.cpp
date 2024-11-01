#include <iostream>

using namespace std;

int main() {
    string name = "Marcus Zou";

    // substr()
    cout << name.substr(3,3) << endl;

    // find the first name and last name
    auto index = name.find(' ');
    string firstName = name.substr(0, index);
    string lastName = name.substr(index + 1);
    cout << firstName << endl
         << lastName << endl;

    return 0;
}
