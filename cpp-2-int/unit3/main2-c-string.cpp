#include <iostream>
#include <string>

using namespace std;

int main() {
    string name = "Marcus";
    name[0] = 'm';
    cout << name[0] << endl;
    name += " Zou";
    cout << name << endl;

    //cout << name.starts_with('m') // starts_with and ends_with - only from C++ 20 onwards
    //cout << name.ends_with('M');
    cout << name.empty() << endl;
    cout << name.front() << endl; // First letter
    cout << name.back() << endl; // Last letter
    cout << name[name.length() - 1] << endl; //Last letter



    return 0;
}
