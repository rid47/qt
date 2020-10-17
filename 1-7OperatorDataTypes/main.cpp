#include <iostream>

using namespace std;

int main()
{

    int a = 20;
    int b = 20;

    /*
    cout << "----------------------------Math Operators------------------------------"<<endl;
    cout << "a + b = " << a + b << endl;
    cout << "a - b = " << a - b << endl;
    cout << "a * b = " << a * b << endl;
    cout << "a / b = " << (float) a / b << endl;
    cout << "a % b = " <<  a % b << endl;
    */
//    cout<<"----------------------------Logical Operator------------------------------"<<endl;

    if (a == b){

        cout << "A is equal to b" << endl;
    }else{
        cout << "A is not equal b" <<endl;
    }

    // Loops

   // for loops

    /*
    for (int i = 1; i <=20; i++)
    {
        cout<< "Hello Mizan "<< i << endl;
    }
    */

    // while loop

    /*
    int i = 1;
    while (i<=20){
        cout << "Hello Mizan "<< i << endl;
        i++;
    }
    */

    int i = 1;
    do {
        cout << "Hello Mizan "<< i << endl;
        i ++;
    }while(i<=10);



    return 0;
}
