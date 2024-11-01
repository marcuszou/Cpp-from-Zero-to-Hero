#include <iostream>
using namespace std;
/*
 * Arrays
 */

int main() {

    cout << "Compare Arrays: " << endl;
    int first[] = {10, 20, 30};
    int second[] = {10, 20, 30};

    bool areEqual = true;
    for (int i = 0; i < size(first); i++)
        if (first[i] != second[i])
        {
            areEqual = false;
            break;
        }

    cout << boolalpha << areEqual << endl;

    return 0;
}
