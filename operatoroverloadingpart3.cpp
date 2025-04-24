#include <iostream>
using namespace std;
class integer
{
    int x;

public:
    void setdata(int a)
    {
        x = a;
    }
    void getdata()
    {
        cout << "x= " << x << endl;
    }
    integer operator++()   //pre increment
    {
        integer temp;
        temp.x = ++x;
        return temp;
    }

    integer operator++(int)   //post increment,here int is written is the parameter just to make it post increment.We don't need to pass arguements
    {
        integer temp;
        temp.x = x++;
        return temp;
    }
};
int main()
{
    integer i1, i2;
    i1.setdata(8);
    i1.getdata();
    // i2=i1.operator++(); //even this  is legal
    // i2 = ++i1;
    // i1.getdata();
    // i2.getdata();

    // i2=i1.operator++();//even this is legal
    i2=i1++;
    i1.getdata();
    i2.getdata();

    return 0;
}