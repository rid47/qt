#include <iostream>
#include "Rectangle.h"
#include "Para.h"
#include "Square.h"

using namespace std;


int main()
{


    Rectangle r;
    Rectangle r2(20, 20);
    Para p (30,30,30);
    Square s(40);
    cout<<"The area of the rectangle is : "<< r2.getArea() << endl;
    cout<<"The volume of the rectangle is : "<< p.getVolume() << endl;
    cout<<"The area of your square is: "<< s.getArea() << endl;

    return 0;
}
