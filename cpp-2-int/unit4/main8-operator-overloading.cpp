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

// ocerloading
bool operator==(const Movie& first, const Movie& second) {
    return (
            first.title == second.title &&
            first.releaseDate.year == second.releaseDate.year &&
            first.releaseDate.month == second.releaseDate.month &&
            first.releaseDate.day == second.releaseDate.day
    );
}

ostream& operator<<(ostream& stream, const Movie& movie) {
    stream << movie.title;
    return stream;
}

int main() {
    Movie movie1 {
        "Terminator 1",
        {1984, 6, 1}
    };
    Movie movie2 {
            "Terminator 1",
            {1984, 6, 1}
    };

    cout << movie1;

    return 0;
}
