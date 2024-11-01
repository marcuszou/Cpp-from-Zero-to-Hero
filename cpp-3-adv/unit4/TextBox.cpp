//
// Created by Marcus Zou on 2024-10-07.
//

#include <iostream>
#include "TextBox.h"

using namespace std;

string TextBox::getValue() {
    // Protected members: OK
    this->width;
    //Private members: No
    return value;
}

TextBox::TextBox(bool enabled) : Widget(enabled) {
    // In some cases, the constructor does not do anything, but pass the base constructor.
    // cout << "TextBox constructed" << endl;
}

TextBox::TextBox(bool enabled, const string &value) : Widget(enabled), value{value} {

}
