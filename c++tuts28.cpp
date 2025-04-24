#include <iostream>
using namespace std;
/*
   class y;  //forward declaration of y

   class x
{

   int data;
   friend int sum(x first, y second);

public:
    void setval(int value)
    {
        data = value;
    }
};


class y
{

   int data;
   friend int sum(x first, y second);

public:
    void setval(int value)
    {
        data = value;
    }
};

int sum(x first, y second)
{
    return (first.data + second.data);
}
*/
class shubham;//forward decalration of shubahm
class adarsh
{

    int data;
    friend void swap(adarsh &x, shubham &y);

public:
    void setval(int value)
    {
        data = value;
    }

    void show()
    {
        cout << data << endl;
    }
};

class shubham
{

    int data;
    friend void swap(adarsh &x, shubham &y);

public:
    void setval(int value)
    {
        data = value;
    }

    void show()
    {
        cout << data << endl;
    }
};

void swap(adarsh &x, shubham &y)
{
    int temp = x.data;
    x.data = y.data;
    y.data = temp;
}

int main()
{
    /* x first;
     y second;
     first.setval(5);
     second.setval(4);
     cout<<"The sum of first and second is "<<sum(first,second)<<endl;*/
    adarsh x;
    shubham y;
    x.setval(5);
    y.setval(3);

    cout << "The values of x and y before swapping are :" << endl;
    x.show();
    y.show();

    swap(x, y);
    cout << "The values of x and y after swapping are :" << endl;
    x.show();
    y.show();

    return 0;
}