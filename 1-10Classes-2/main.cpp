#include <iostream>

using namespace std;


class Rectangle

{

public:

    Rectangle();
    Rectangle(int w, int l);

    void setWidth(int width);


    void setLength(int length);


    int getArea()
    {

        return width*length;

    }


private:
    int width;
    int length;

};


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

/*
Rectangle::Rectangle(int w, int l){

    clog<< "Custom constructor is called"<<endl;
    this->width=w;
    this->length=l;
}
*/

Rectangle::Rectangle(int w, int l):width(w),length(l){

    clog<< "Custom constructor is called"<<endl;

}


//Para class

class Para{
public:

    Para(int w, int l, int h):r(w,l), height(h){
        cout<< "Para Consturctor Called";
    }

    int getVolume(){
        return r.getArea() * height;
    }

private:
    Rectangle r;
    int height;


};


int main()
{
//    cout << "Hello World!" << endl;

    Rectangle r;
    Rectangle r2(20, 20);
    Para p (30,30,30);
//    r.setWidth(10);
//    r.setLength(20);
    cout<<"The area of the rectangle is : "<< r2.getArea() << endl;
     cout<<"The volume of the rectangle is : "<< p.getVolume() << endl;


    return 0;
}
