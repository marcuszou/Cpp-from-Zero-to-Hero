#include <iostream>

using namespace std;

int main() {
    /* Comparison Operators
    >, >=, <, <=, ==, !=
    */
    int x = 10;
    int y = 5;
    bool result = x != y;
    cout << boolalpha << result << endl;

    /* Order of Logical Operators:
     * ()
     * ! (not)
     * && (and)
     * || (or)
     */
    int age = 20;
    int salary = 50'000;
    bool isEligible = (age > 18 || age <= 65) && salary > 30'000;
    cout << boolalpha << !isEligible << endl << endl;

    // if Statement
    int temp = 100;
    if (temp < 60) {
        cout << "Cold\n";
        cout << "Wear warm clothes\n" << endl;
    }
    else if (temp < 90)
        cout << "Nice\n" << endl;
    else
        cout << "Hot\n" << endl;

    // Nested if statements
    // US Citizen
    //  CA Resident: tuition = 0
    //  Non-resident: tuition = 1000
    // Not a US Citizen
    //  tuition = 3000
    bool isCitizen = true;
    bool caResident = true;
    int tuition = 0;
    // Outer if statement
    if (isCitizen) {
        // Inner if statement
        if (!caResident) tuition = 1000;
    }
    else tuition = 3000;
    cout << tuition << endl;

    // Conditional Operator
    int sales = 11'000;
    double commission = (sales > 10'000) ? .1 : .05;
    cout << commission << endl << endl;

    // Switch statement
    cout << "1- Create account" << endl
         << "2- Change passpord" << endl
         << "3- Quit" << endl
         << "Select an option: ";
    short input;
    cin >> input;

    switch (input) {
        case 1:
            cout << "You select option 1." << endl;
            break;
        case 2:
            cout << "You select option 2." << endl;
            break;
        default:
            cout << "Goodbye!" << endl;
    }

    return 0;
}
