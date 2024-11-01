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
    Movie movie1 {
        "Terminator 1",
        {1984, 6, 1}
    };
    Movie movie2 {
            "Terminator 1",
            {1984, 6, 1}
    };

    // Comparing
    if (movie1.title == movie2.title &&
        movie1.releaseDate.year == movie2.releaseDate.year &&
        movie1.releaseDate.month == movie2.releaseDate.month &&
        movie1.releaseDate.day == movie2.releaseDate.day
    )
        cout << "Equal";

    return 0;
}
