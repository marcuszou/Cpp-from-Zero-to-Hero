#include <iostream>
#include <sstream>
#include <iomanip>

using namespace std;

/*
 * Parsing Strings
 */

// Exercise: Parsing "Terminator 1,1984" to a movie object

struct Movie {
    string title;
    int year;
};

Movie parseMovie(string str) {
    stringstream stream;
    stream.str(str);

    Movie movie;
    getline(stream, movie.title, ',');
    stream >> movie.year;

    return movie;
}

int main(){
    string str = "10 20";
    stringstream stream;
    stream.str(str);

    int first;
    stream >> first;
    int second;
    stream >> second;
    cout << first + second << endl << endl;

    // Exercise: Call tghe function of parseMovie
    auto movie = parseMovie("Terminator 1,1984");
    cout << movie.title << endl;
    cout << movie.year << endl;

	return 0;
}
