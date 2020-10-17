#include "Rectangle.h"
#include <iostream>

using namespace std;

void Rectangle::setWidth(int width){

    this -> width = width;
}

void Rectangle::setLength(int length){
    this->length = length;
}



Rectangle::Rectangle(){

    clog << "Default constructor is called" << endl;
    this->length = 5;
    this->width = 5;
}

Rectangle::Rectangle(int w, int l):width(w),length(l){

    clog<< "Custom constructor is called"<<endl;

}
