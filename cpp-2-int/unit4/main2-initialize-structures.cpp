#include <iostream>

using namespace std;

// Structure Initialization here or in the main()
struct Movie {
    string title;
    int releaseYear = 0;
    bool isPopular = true;
};

int main() {
    Movie movie = {"terminator", 1984};

	cout << "Title: " << movie.title << endl
         << "Release Year: " << movie.releaseYear << endl
         << "isPopular: " << boolalpha << movie.isPopular << endl;

    return 0;
}
