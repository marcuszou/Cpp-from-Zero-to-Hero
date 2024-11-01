#include <iostream>
#include <vector>
using namespace std;

struct Date {
    short year = 1900;
    short month = 1;
    short day = 1;
};

struct Movie {
    string title;
    Date releaseDate;
    bool isPopular;
};

int main() {
    Movie movie {
        "Terminator 1",
        {1984, 6, 1}
    };

    cout << movie.title << endl
         << movie.releaseDate.year << endl
         << boolalpha << movie.isPopular << endl << endl;

    return 0;
}
