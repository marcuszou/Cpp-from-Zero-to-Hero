//
// Created by Marcus Zou on 2024-10-07.
//

#include "Widget.h"

#include <iostream>
#include "Widget.h"

using namespace std;

void Widget::enable() {
    enabled = true;
}

void Widget::disable() {
    enabled = false;
}

bool Widget::isEnabled() const {
    return enabled;
}

Widget::Widget(bool enabled) : enabled{enabled} {
    cout << "Widget constructed" << endl;
}