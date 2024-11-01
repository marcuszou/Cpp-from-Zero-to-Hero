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
    // method-
    bool equals(const Movie& movie) {
        return (
                title == movie.title &&
                releaseDate.year == movie.releaseDate.year &&
                releaseDate.month == movie.releaseDate.month &&
                releaseDate.day == movie.releaseDate.day
            );
    }
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
    if (movie1.equals(movie2))
        cout << "Equal";

    return 0;
}
