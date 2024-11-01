//
// Created by Marcus Zou on 2024-10-07.
//

#ifndef MAIN_WIDGET_H
#define MAIN_WIDGET_H


class Widget {
public:
    //Widget() = default;
    Widget(bool enabled);
    void enable();
    void disable();
    bool isEnabled() const;
private:
    bool enabled;
protected:
    int width;

};


#endif //MAIN_WIDGET_H
