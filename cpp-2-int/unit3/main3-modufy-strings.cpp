#include <iostream>

using namespace std;

int main() {
    string name = "Marcus";

    cout << name.append(" Zou") << endl;
    cout << name.insert(0, "I am ") << endl;
    cout << name.erase(0, 2) << endl;
    cout << name.replace(0, 2, "  ") << endl;



    return 0;
}
