#include <iostream>
#include <vector>
using namespace std;

struct Movie {
    string title;
    int releaseYear = 0;
    bool isPopular;
};

int main() {
    vector<Movie> movies;
    movies.push_back({"Terminator 1", 1984});
    movies.push_back({"Terminator 2", 1987, true});

    // referencing
    for (const auto& movie: movies)
        cout << movie.title << endl
             << movie.releaseYear << endl
             << boolalpha << movie.isPopular << endl << endl;

    return 0;
}
