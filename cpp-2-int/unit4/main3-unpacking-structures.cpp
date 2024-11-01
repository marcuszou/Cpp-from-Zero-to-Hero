#include <iostream>

using namespace std;

struct Movie {
    string title;
    int releaseYear = 0;
    bool isPopular = true;
};

int main() {
    Movie movie = {"Terminator", 1984};
    string title = movie.title;
    int releaseYear = movie.releaseYear;
    bool isPopular = movie.isPopular;
    // C++: structure binding
    // JS: destructuring
    // Python: unpacking

    // Alternatively
    auto [tit, relYear, isPop] {movie};

    cout << tit << endl
         << relYear << endl
         << boolalpha << isPop << endl;

    return 0;
}
