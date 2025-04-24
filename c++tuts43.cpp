#include <iostream>
using namespace std;
class base1
{
public:
    void greet()
    {
        cout << "Hellow world" << endl;
    }
};
class base2
{
public:
    void greet()
    {
        cout << "kaise ho aplog?" << endl;
    }
};

class derived : public base1, public base2
{
public:
    void greet() // syntax for ambiguity resolution
    {
        base1::greet();
    }
    /*
    void greet()      //in case a function is defined in the derived class with the same name then we do not need ambiguity resolution as the compiler will automatically use this one
    {
      cout<<"This is for derived class"<<endl;
    }
    */
};
int main()
{

    derived d1;
    d1.greet();
    return 0;
}