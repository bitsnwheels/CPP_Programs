#include <iostream>
using namespace std;
class base
{
public:
    int var_base=25;
 virtual void display()
    {
        cout << "The value of var_base is " << var_base << endl;
    }
};
class derived : public base
{
public:
    int var_derived=35;
     void display()
    {
         cout << "The value of var_base is " << var_base << endl;
        cout << "The value of var_derived is " << var_derived << endl;
    }
};
int main()
{
    base base_class;       // making an object of base class
    derived derived_class; // making an object of derived class
    base *ptr_base;
   
    ptr_base=&derived_class;
    ptr_base->display();
  
  
   
    return 0;
}