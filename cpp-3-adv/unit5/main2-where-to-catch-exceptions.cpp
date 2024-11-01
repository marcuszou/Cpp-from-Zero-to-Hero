#include <iostream>
#include "Rectangle.h"

using namespace std;

void createRectangle() {
    try {
        // Open a file
        Rectangle rect;
        rect.setWidth(-1);
    }
    catch (const invalid_argument& ex) {
        cout << "Close the file" << endl;
        throw;
    }
}

void doWork() {
    createRectangle();
}

int main() {
    try {
        doWork();
    }
    catch (const exception& ex) {
        cout << ex.what();
    }
    return 0;
}

