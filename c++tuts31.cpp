#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    complex(int x, int y) // parameterized constructor
    {
        a = x;
        b = y;
    }

    complex(int x)
    {
        a = x;
        b = 0;
    }

    complex()
    {
        a = 0;
        b = 0;
    }

    void printdata()
    {
        cout << "The complex no. is " << a << "+ " << b << "i" << endl;
    }
};
int main()
{

    complex c1,c2,c3;
    c1=complex(4, 5);
    c2=complex(4);
    c3=complex();

    c1.printdata();
    c2.printdata();
    c3.printdata();

    return 0;
}