#ifndef MAIN_RECTANGLE_H
#define MAIN_RECTANGLE_H

#include <string>

using namespace std;

class Rectangle {
public:
    // Constructor
    Rectangle() = default;
    Rectangle(const Rectangle& source);
    Rectangle(int width, int height);
    Rectangle(int width, int height, const string& color);
    // Destructor
    ~Rectangle();

    void draw() const;
    int getArea() const;
    int getWidth() const;
    int getHeight() const;

    void setWidth(int width);
    void setHeight(int height);
    Rectangle operator~();

    static int getObjectsCount();

private:
    int width = 0;
    int height = 0;
    string color;
    // move objectsCount from public section to private,
    // then create getter and setter in public section.
    static int objectsCount;
};


#endif //MAIN_RECTANGLE_H
