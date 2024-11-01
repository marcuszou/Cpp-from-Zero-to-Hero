#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

int main() {
    //data types
    cout << "Data Types - " << endl;
    double price = 99.99;
    float interestRate = 3.50F;
    long fileSize = 90000L;
    char letter = 'a';
    bool isValid = false;

    cout << price << endl;
    cout << interestRate << endl;
    cout << fileSize << endl;
    cout << letter << endl;
    cout << isValid << endl << endl;

    // Number system
    cout << "Number system - " << endl;
    int x = 0b11111111;
    int y = 0xFF;
    cout << x << endl;
    cout << y << endl << endl;

    //Number narrowing
    cout << "Number Narrowing - " << endl;
    int z = 1'000'000;
    short another = z;
    cout << another << endl << endl;

    //Random number vs. dice number
    cout << "Random numbers vs. Dice numbers - " << endl;
    const short minValue = 1;
    const short maxValue = 6;
    srand(time(0)); //time in seconds elapsed from Jan 1, 1970
    short first = (rand() % (maxValue - minValue + 1)) + minValue;
    short second = (rand() % (maxValue - minValue + 1)) + minValue;
    cout << first << ", " << second << endl << endl;

    //Formatting
    cout << "Formatting - " << endl;
    cout << left;
    cout << setw(10) << "Spring" << setw(10) <<  "Nice" << endl
         << setw(10) << "Summer" << setw(10) << "Hot" << endl;
    cout << fixed << setprecision(2) << 12.34567 << endl << endl;

    //Data type - comments out in Linux
    //cout << "Data Type - More " << endl;
    //cout << sizeof(int) << endl;
    //cout << numeric_limits<int>::min() << endl
    //     << numeric_limits<int>::max() << endl;

    //int number2 = numeric_limits<int>::max();
    //number2++;
    //cout << number2 << " (overflow)" << endl;

    //int number3 = numeric_limits<int>::min();
    //number3--;
   // cout << number3 << " (underflow)" << endl << endl;

    //Booleans
    cout << "Booleans " << endl;
    bool isNewUser = false;
    cout << isNewUser << endl;
    cout << boolalpha << isNewUser << endl;
    cout << noboolalpha << isNewUser << endl << endl;

    //char and string
    cout << "Char and Strings -" << endl;
    char ch = 'a';
    cout << ch << endl;
    cout << +ch;
    cout << " is the underlined number of " << ch << endl;

    string name;
    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Hi " << name << endl << endl;

    // Arrays
    int numbers[] = {1,2,3,4,5};
    numbers[1] = 10;
    cout << numbers[0] << numbers[1] << endl << endl;

    // Array Exercise
    string names[3];

    cout << "Names: ";
    getline(cin, names[0]);

    cout << "Names: ";
    getline(cin, names[1]);

    cout << "Names: ";
    getline(cin, names[2]);

    cout << names[0] << endl << endl;

    // Casting
    int r = 1;
    double s = 2.2;
    double t = r + s;
    int w = r + static_cast<int>(s);  // C++ casting
    cout << t << endl;
    cout << w << endl << endl;

    return 0;
}
