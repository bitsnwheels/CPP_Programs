#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    friend complex sumofnum(complex o1,complex o2);  //it can be declared anywhere in the class,even in private 
    void setdata(int v1, int v2)
    {
        a = v1;
        b = v2;
    }

    void show()
    {
        cout << "The complex number is " << a << " + " << b << "i" << endl;
    }
};

complex sumofnum(complex o1, complex o2)
{
    complex o3;
    o3.setdata((o1.a + o2.a) , (o1.b + o2.b));
    return o3;
}
int main()
{
    complex first, second, sum;

    first.setdata(1, 2);
    first.show();

    second.setdata(3, 4);
    second.show();
    
    sum=sumofnum(first,second);
    sum.show();

    return 0;
}