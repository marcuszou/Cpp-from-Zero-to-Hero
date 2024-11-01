#include <iostream>
#include <limits>

using namespace std;

/*
 * - Reading from streams with Error handling
 *
 * // cout << numeric_limits<streamsize>::max();
 * // the output: 9223372036854775807
 */
int getNumber (const string& prompt)
{
    int number;
    while (true)
    {
        cout << prompt;
        cin >> number;
        if (cin.fail())
        {
            cout << "Enter a valid number!" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        else break;
    }
    return number;
}

int main() {
    // Buffer: temporary storage
    // [10 20]
    int first = getNumber("First: ");
    int second = getNumber("Second: ");

	cout << "You entered " << first << " and " << second << endl;

    return 0;
}
