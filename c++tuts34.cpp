#include <iostream>
using namespace std;

class number
{
    int a;

public:
    number()
    {
        a = 0;
    } // default constructor
    number(int n)  //parameterized constructor
    {
        a = n;
    }

    number(number &n1)
    {
        cout << "copy constructor is invoked" << endl;
        a = n1.a;
    }

    void showdata()
    {
        cout << "The value is " << a << endl;
    }
};
int main()
{
    number x, y, z(45), z3;

    x.showdata();
    y.showdata();
    z.showdata();

    number z1(z); // copy constructor is invoked
    z1.showdata();

    number z2 = z; // copy constructor is invoked
    z2.showdata();

    z3 = z; // copy constructor is not invoked in this case
    z3.showdata();

    return 0;
}