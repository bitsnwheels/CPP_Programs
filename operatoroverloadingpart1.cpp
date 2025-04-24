#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    void setdata(int x, int y)
    {
        a = x;
        b = y;
    }
    void getdata()
    {
        cout << "a= " << a << " b= " << b << endl;
    }
    complex operator +(complex c){
        complex temp;
        temp.a=a+c.a;
        temp.b=b+c.b;
        return temp;
    }
};
int main()
{
    complex c1,c2,c3;
    c1.setdata(2,5);
    c2.setdata(8,5);
    // c3=c1.operator+(c2);//even this will do the same thing as below one and even this is legal
    c3=c1+c2;
    c3.getdata();
    return 0;
}