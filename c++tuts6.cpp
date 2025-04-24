#include <iostream>
using namespace std;

int main()
{
    int a, b;
    a = 25;
    b = 24;
    // arithmetic operators
    cout << "the value of a+b is  " << a + b << endl;
    cout << "the value of a-b is  " << a - b << endl;
    cout << "the value of a*b is  " << a * b << endl;
    cout << "the value of a/b is  " << a / b << endl;
    cout << "the value of a%b is  " << a % b << endl;
    cout << "the value of a++ is  " << a++ << endl;
    cout << "the value of a-- is  " << a-- << endl;
    cout << "the value of ++a is  " << ++a << endl;
    cout << "the value of --a is  " << --a << endl;

    cout << endl;

    // assignment operator
    // int a=35;

    // comparison operators
    cout << "if a==b " << (a == b) << endl;
    cout << "if a!=b " << (a != b) << endl;
    cout << "if a>=b " << (a >= b) << endl;
    cout << "if a<=b " << (a <= b) << endl;
    cout << "if a<b " << (a < b) << endl;
    cout << "if a>b " << (a > b) << endl;

    // logical operators

    cout << "if (a>b)&&(a==b)" << ((a > b) && (a == b)) << endl;
    cout << "if (a>b)||(a==b)" << ((a > b) || (a == b)) << endl;
    cout << "if !(a>b) " << !(a > b) << endl;

    return 0;
}
