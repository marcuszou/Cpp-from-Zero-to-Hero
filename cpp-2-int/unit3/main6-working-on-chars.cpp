#include <iostream>

using namespace std;

int main() {
    string name = "Marcus Zou";

    // substr()
    cout << isupper(name[0]) << endl;
    cout << islower(name[0]) << endl;
    cout << isalpha(name[0]) << endl;
    cout << isdigit(name[0]) << endl;
    cout << isspace(name[0]) << endl;

    // Converting
    cout << (char) toupper('a') << endl;
    cout << (char) tolower('B') << endl;

    return 0;
}
