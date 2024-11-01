//
// Created by zenusr on 10/5/24.
//

#include "SmartPointer.h"

SmartPointer::SmartPointer(int* ptr) : ptr{ptr}
{
}

SmartPointer::~SmartPointer()
{   delete ptr;
    ptr = nullptr;
}
