#include <iostream>
using namespace std;
class complex
{
    int real, imaginary;

public:
    void getdata()
    {
        cout << "The value of real part is " << real << endl;
        cout << "The value of imaginary part is " << imaginary << endl;
    }

    void setdata(int a, int b)
    {
        real = a;
        imaginary = b;
    }
};
int main()
{
    complex c1;
    // complex *ptr=&c1;  //this and the below mentioned  line do the same thing
    complex *ptr = new complex;

    // conventional way of using pointer to access member functions
    /*
    (*ptr).setdata(5, 25);
    (*ptr).getdata();
    */

    // more easier and understandable way of doing it
    ptr->setdata(2, 5);
    ptr->getdata();

    //  array of objects
    complex *arr=new complex[3];
    arr[0].setdata(2,3);
    arr[1].setdata(12,3);
    arr[2].setdata(21,4);
    arr[0].getdata();
    arr[1].getdata();
    arr[2].getdata();

    


    return 0;
}