#include <iostream>
using namespace std;
class base1
{
    int data1;

public:
    base1(int a)
    {
        data1 = a;
        cout << "Base1 constructor called!" << endl;
    }
    void printbase1()
    {
        cout << "The value of data1 is " << data1 << endl;
    }
};
class base2 : public base1
{
    int data2;

public:
    base2(int a, int b) : base1(a)
    {
        data2 = b;
        cout << "Base2 constructor called!" << endl;
    }
    void printbase2()
    {
        cout << "The value of data2 is " << data2 << endl;
    }
};

class derived : public base2 // if we make public base2 virtual public base 2 then constructor for base2 will be called first
{
    int derived1, derived2;

public:
    derived(int a, int b, int c, int d) : base2(a, b)
    {
        derived1 = c;
        derived2 = d;
        cout << "Derived class constructor called!" << endl;
    }

    void printderived()
    {
        cout << "The value of derived1 and derived2 are " << derived1 << " and " << derived2 << " respectively " << endl;
    }
};

int main()
{
    derived adarsh(2, 4, 9, 0);
    adarsh.printbase1();
    adarsh.printbase2();
    adarsh.printderived();

    return 0;
}