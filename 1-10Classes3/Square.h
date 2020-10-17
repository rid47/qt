#ifndef SQUARE_H
#define SQUARE_H
#include <iostream>
#include "Rectangle.h"

using namespace std;


class Square:public Rectangle

{

public:
    Square(int side):Rectangle (side,side)
    {
//        setLength(side);
//        setWidth(side);
    }

};


#endif // SQUARE_H
