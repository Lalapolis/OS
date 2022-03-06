#pragma once
#include <Number.h>

class Vector {
    Number x;
    Number y;
public:

    Vector();
    Vector(Number x_, Number y_);


    Vector Add(Vector other);

    Number calcRadius();
    Number clacAngel();

};


extern Vector ZERO_VEC;
extern Vector ONE_VEC;