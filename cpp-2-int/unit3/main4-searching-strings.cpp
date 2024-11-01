#include <iostream>

using namespace std;

int main() {
    string name = "Marcus Zou";

    if (name.find('A') == -1)
        cout << "Doesnt exist" << endl;

    // rfind() - reverse find
    cout << name.rfind('u') << endl;
    // find_first_of
    cout << name.find_first_of(",.;") << endl;
    // find_last_of
    // find_first_not_of
    // find_last_not_of

    return 0;
}
