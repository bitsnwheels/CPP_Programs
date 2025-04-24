#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    //  ***************Use of constant keyword**************
    // const int a=24;
    // a=25;  //throwing error because a is a constant and we can not change the value of a constant
    // cout<<"The value of a is "<<a<<endl;

    //*****************use of endl and setw*****************

    // int a = 25, b = 2569;
    // cout << "The value of a without setw is " << a << endl;
    // cout << "The value of b without setw is " << b << endl;

    // cout << "The value of a with setw is " << setw(9) << a << endl;

    // cout << "The value of b with setw is " << setw(9) << b << endl;

    //**************operator precedence**********************

    int a = 25, b = 6, c = 9;
    int d = a * b + c;//d will be equal to 159 because *has more precedence than + thus multiplication will be performed first and then associativity will be checked
    cout << "The value of d is " << d << endl;
    return 0;
}
