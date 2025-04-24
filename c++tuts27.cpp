#include <iostream>
using namespace std;
// forward decalration of complex
class complex;

class calculator
{
public:
    int sum(int v1,int v2){
        return v1+v2;
    }
  
    int sumrealcomplex(complex o1, complex o2);
    int sumimagcomplex(complex o1, complex o2);
};

class complex
{
    int a, b;
    //making the member functions of calculator a friend in the below  2 lines of code
    //friend int calculator::sumrealcomplex(complex o1, complex o2); 
    //friend int calculator::sumimagcomplex(complex o1, complex o2);
    friend class calculator;//making the whole class a friend 

public:
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

int calculator::sumrealcomplex(complex o1, complex o2)
{
    return (o1.a + o2.a);
}

int calculator::sumimagcomplex(complex o1, complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    complex first, second;
    first.setdata(2, 3);
    first.show();
    second.setdata(2, 3);
    second.show();

    calculator cal;
   int sumimag= cal.sumimagcomplex(first, second);
   int sumreal= cal.sumrealcomplex(first, second);

    cout<<"The sum of real part of first and second is "<<sumreal<<endl;
    cout<<"The sum of imaginary part of first and second is "<<sumimag<<endl;

    return 0;
}
