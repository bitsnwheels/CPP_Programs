#include <iostream>
using namespace std;
/*    //this is for array of objects
class employee
{
    int id;

public:
    void setdata()
    {
        cout << "Enter the employee id" << endl;
        cin >> id;
    }
    void getdata()
    {
        cout << "The employee id of the employee is " << id << endl;
    }
};
*/

class complex
{
private:
    int a, b;

public:
    void setdata(int v1, int v2)
    {
        a = v1;
        b = v2;
    }

    void setdatabysum(complex o1, complex o2)  //passing objects as arguements
    {
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }

    void show()
    {
        cout << "The value of this object  is " << a << " +i " << b << endl;
    }
};



int main()
{

    /*
     employee google[4];
     for (int i = 0; i < 4; i++)
     {
         google[i].setdata();
         google[i].getdata();
     }
    */
   complex c1,c2,c3;
    
    c1.setdata(2,3);
    c1.show();

    c2.setdata(4,5);
    c2.show();

    c3.setdatabysum(c1,c2);
    c3.show();



    return 0;
}