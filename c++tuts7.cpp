#include <iostream>
using namespace std;

int c = 45;

int main()
{
    //************Discussion about accessing global variable inside a function**************
    // int c=4;
    // cout<<"The value of local c is "<<c<<endl;

    // cout<<"The value of global c is "<<::c<<endl;//The global variable can be accessed inside a function with the help of scope resolution operator

    //******************float,double and long double literals*****************
    // float d = 34.4f;
    // long double e = 34.4l;
    // cout << "The size of  34.4  is  " << sizeof(34.4) << endl; // here it is a double
    // cout << "The size of 34.4f is " << sizeof(34.4f) << endl;  // here it is a float
    // cout << "The size of 34.4F is " << sizeof(34.4F) << endl;  // here it is a float
    // cout << "The size of 34.4l is " << sizeof(34.4l) << endl;  // here it is a long double
    // cout << "The size of 34.4L is " << sizeof(34.4L) << endl;  // here it is a long double

    //******************Reference variable*****************
    // int x=40;
    // int &y=x;  //y is a reference variable to x
    // cout<<x<<endl;
    // cout<<y<<endl;

    //******************Typecasting************************
    int x = 40;
    float y = 34.4;
    cout<<x+y<<endl;

    cout << "The value of x is " << (float)x << endl; // Both of them do the same thing i.e. both are the right ways of typecasting
    cout << "The value of x is " << float(x) << endl;

    cout << "The value of y is " << (int)y << endl; // Both of them do the same thing i.e. both are the right ways of typecasting
    cout << "The value of y is " << int(y) << endl;

    cout << "The value of x+y is " << x + y << endl;
    cout << "The value of x+(int)y is " << x + (int)y << endl;
    cout << "The value of x+int(y )is " << x + int(y) << endl;

    return 0;
}
