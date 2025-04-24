#include <iostream>
using namespace std;
class base1
{
protected:
    int data1;

public:
    void setdata1(int n)
    {
        data1 = n;
    }
};
class base2
{
protected:
    int data2;

public:
    void setdata2(int n)
    {
        data2 = n;
    }
};

class derived : public base1, public base2
{
public:
    void print()
    {
        cout << "The sum of datas from the two bases is " << data1 + data2 << endl;
    }
};
int main()
{
    derived d1;
    d1.setdata1(25);
    d1.setdata2(11);
    d1.print();

    return 0;
}