#include <iostream>

using namespace std;

int main()
{

/*
    auto func = [](){

        cout << "Hello World!" << endl;
    };
    func();
*/

    /*
    [](){
        cout << "Hello" <<endl;
    }();
    */

    // Define a lambda function that takes parameters

    [](int a, int b){

        cout << "a + b = "<< a+b << endl;
    }(7, 3);

    // Define a lambda that returs something

    int sum = [](int  a, int b) -> int{
       return a + b;
    }(7, 30);

    cout << "The sum is : "<< sum <<endl;

    cout << [](int  a, int b) -> int{
        return a + b;
     }(70, 30) << endl;


    // Capture Lists

    int a = 50;
    int b = 70;

    [a, b](){

       cout << "a is: "<<a << endl;
         cout << "b is: "<<b << endl;
    }();

    // Capturing by value

    int c = 42;

    auto func = [c](){
        cout<< "The inner value of  c is: "<< c << endl;
    };


    for (int i = 1; i <5; i++){

        cout << "The outer value of c is : "<< c << endl;
        func();
        c = c + 1;
    }

    // Capturing by reference

    auto func2 = [&c](){
        cout<< "The inner value of  c is: "<< c << endl;
    };


    for (int i = 1; i <5; i++){

        cout << "The outer value of c is : "<< c << endl;
        func2();
        c = c + 1;
    }

    // Capture everthing by value
    int d = 6;

    auto func3 = [=](){
        cout<< "The inner value of  d is: "<< d << endl;
    };


    for (int i = 1; i <5; i++){

        cout << "The outer value of d is : "<< d << endl;
        func3();
        d = d + 1;
    }

    auto func4 = [&](){
        cout<< "The inner value of  d is: "<< d << endl;
    };


    for (int i = 1; i <5; i++){

        cout << "The outer value of d is : "<< d << endl;
        func4();
        d = d + 1;
    }




    return 0;
}
