#include <iostream>
//#include <string> - subset of <iostream>
//include <cstrings> - subset of <iostream>

using namespace std;

int main() {
    cout << "C Strings: " << endl;
    // Null terminator (\0)
    // String literal
    char name[20] = "Marcus";
    char lastName[] = "Zou";
    // Character literal
    // name[0] = 'm'; // single quote
    cout << name[0] << endl;
    cout << strlen(name) << endl;

    // Concatenating
    strcat(name, lastName);
    cout << name << endl;

    // String copy // be carefull about the first argument's value
    strcpy(name, lastName);
    cout << name << endl;

    // Comparing - strcmp
    if (strcmp(name, lastName) == 0)
        cout << "Equal" << endl;


    return 0;
}
