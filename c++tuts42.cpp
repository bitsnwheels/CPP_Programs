#include <iostream>
#include <cmath>
using namespace std;
class simple
{
protected:
    float a, b;

public:
    void setdatasimple(float n1, float n2)
    {
        a = n1;
        b = n2;
    }
    void calculatesimple()
    {
        cout << "The sum is " << a + b << endl;
        cout << "The difference is " << a - b << endl;
        cout << "The product is " << a * b << endl;
        cout << "The division is is " << a / b << endl;
    }
};
class scientific
{
protected:
    float c, d;

public:
    void setdatascientific(float n1, float n2)
    {
        c = n1;
        d = n2;
    }
    void calculatescientific()
    {
        cout << "The sin of the two numbers is " << sin(c) << " and " << sin(d) << endl;
        cout << "The cos of the two numbers is " << cos(c) << " and " << cos(d) << endl;
        cout << "The log of the two numbers is " << log(c) << " and " << log(d) << endl;
        cout << "The tan of the two numbers is " << tan(c) << " and " << tan(d) << endl;
    }
};

class hybrid : public simple, public scientific
{
protected:
    float n1, n2;

public:
    void setdata(float num1, float num2)
    {
        n1 = num1;
        n2 = num2;
    }
    void callfunction()
    {
        setdatasimple(n1, n2);
        calculatesimple();
        setdatascientific(n1, n2);
        calculatescientific();
    }
};

int main()
{
    hybrid h1;
    h1.setdata(3, 25);
    h1.callfunction();

    return 0;
}