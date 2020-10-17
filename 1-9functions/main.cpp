#include <iostream>

using namespace std;


void sayHi()
{

    cout << "Hello Mizan!" << endl;
}

int sum(int a, int b){
    return a + b;
}

float sum(float a, float b){
    return a + b;
}


double sum(double a, double b){
    return a + b;
}

int main()
{
    sayHi();

    cout <<"The sum of 3 and 7 is: "<<sum(3,7)<<endl;

    cout <<"The sum of 3 and 7 is: "<<sum(3.0f,7.2f)<<endl;

    cout <<"The sum of 3 and 7 is: "<<sum(3.3,7.2)<<endl;

    return 0;
}


