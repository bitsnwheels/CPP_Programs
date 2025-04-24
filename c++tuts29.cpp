#include <iostream>
using namespace std;
class complex
{
    int a;
    int b;

public:
    complex();   //constructors can only be declared in public part of class
    void printdata()
    {
        cout << a << " + " << b << "i" << endl;
    }
};
complex::complex()//this is a default constructor as it takes no arguement
{
    a = 10;
    b = 5;
}
int main()
{
    complex s1, s2, s3;
    s1.printdata();
    s2.printdata();
    s3.printdata();

    return 0;
}