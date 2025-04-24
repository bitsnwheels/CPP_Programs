#include <iostream>
using namespace std;
class A
{
    int a;

public:
    /*void setdata(int a)  
    {
        this->a = a;    //this pointer points to the object which invokes the member function
    }*/

    A &setdata(int a)   //in this case a reference to the invoking object is returned 
    {
        this->a = a;
        return *this;
    }
    void getdata()
    {
        cout << "The value of a is " << a << endl;
    }
};
int main()
{
    A a;
    /*
    a.setdata(25);
    a.getdata();
    */
   a.setdata(25).getdata();

    return 0;
}