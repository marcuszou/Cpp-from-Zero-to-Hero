#include "Point.h"

int Point::getX() const {
    return x;
}

void Point::setX(const int x) {
    this->x = x;
}

int Point::getY() const {
    return y;
}

void Point::setY(const int y) {
    this->y = y;
}

Point::Point(int x, int y) : x(x), y(y) {}

bool Point::operator==(const Point& other) const {
    return (x == other.x) && (y == other.y);
}
