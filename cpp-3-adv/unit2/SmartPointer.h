#ifndef SMARTPOINTER_H
#define SMARTPOINTER_H

class SmartPointer {
public:
    explicit SmartPointer(int* ptr);
    ~SmartPointer();
private:
    int* ptr;

};



#endif //SMARTPOINTER_H
