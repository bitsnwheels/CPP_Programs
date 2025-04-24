#include <iostream>
using namespace std;
class base
{
public:
    int var_base;
    void display()
    {
        cout << "The value of var_base is " << var_base << endl;
    }
};
class derived : public base
{
public:
    int var_derived;
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
    ptr_base = &derived_class; // pointing a pointer of base class to derived class as it is legal in c++
    ptr_base->var_base = 254;
    //ptr_base->var_derived=25;  //this will throw an error as we can not set the value of derived class data member with a base class pointer
    ptr_base->display();   //the display function of the base class will run because we can not run member functions of derived class with a base class pointer

    derived*ptr_derived;
   // ptr_derived=&base_class;  //this will throw an error because we can not point to the base class with derived class pointer
    ptr_derived=&derived_class;
    ptr_derived->var_base=25;  //the value of the base class data member can be set with derived class pointer but not vice versa as we have seen above
    ptr_derived->var_derived=35;
    ptr_derived->display();  //derived class display function will run in this case

    return 0;
}