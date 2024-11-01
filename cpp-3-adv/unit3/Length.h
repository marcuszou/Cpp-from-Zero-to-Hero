#ifndef LENGTH_H
#define LENGTH_H

#include <compare>
#include <ostream>
#include <istream>

using namespace std;

class Length {
public:
    explicit Length(int value);

    bool operator==(const Length& other) const;
    bool operator==(int other) const;
    bool operator==(int other);
    strong_ordering operator<=>(const Length& other) const;
    Length operator+(const Length& other) const;
    Length& operator+=(const Length& other);
    Length& operator=(const Length& other);

    int getValue() const;
    void setValue(int value);
    // Comparison operator
    /*
     * bool operator<(const Length& other) const;
     * bool operator<=(const Length& other) const;
     * bool operator>(const Length& other) const;
     * bool operator>=(const Length& other) const;
     */

private:
    int value;
    int x;
    friend ostream operator<<(ostream& stream, const Length& length);

};

// Stream insertion operator
ostream& operator<<(ostream& stream, const Length& length);
istream operator>>(istream& stream, Length& length);
#endif //LENGTH_H
