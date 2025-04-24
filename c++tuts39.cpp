#include <iostream>
using namespace std;
class base
{
private:
    int a;

protected:
    int b;

public:
    void setdata()
    {
        a = 25;
        b = 35;
    }
};

/*
class derived : public base
{
public:
    void show()
    {
    setdata();
        cout << "The value of b is " << b << endl;
    }
};
*/

class derived : protected base
{
public:
    void show()
    {
        setdata();
        cout << b << endl;
    }
};

int main()
{
   

    derived d1;
    d1.show();
    //cout << d1.b << endl; // will throw an error as b is protected in both the base and the derived classes

    return 0;
}