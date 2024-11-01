#ifndef POINT_H
#define POINT_H

class Point {
public:
    Point(int x, int y);
    int getX() const;
    int getY() const;
    void setX(int x);
    void setY(int y);
    bool operator==(const Point& other) const;
private:
    int x;
    int y;

};

#endif //POINT_H
