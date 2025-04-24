#include <iostream>
#include <cmath>
using namespace std;

/*
class complex
{
    int a, b;

public:
    complex(int x, int y)   //parameterized constructor
    {
        a = x;
        b = y;
    }


    void printdata()
    {
        cout << "The complex no. is " << a << "+ " << b << "i" << endl;
    }
};
*/
class point
{
    int x, y;
    friend float distance(point p1, point p2);

public:
    point(int a, int b)
    {
        x = a;
        y = b;
    }
};

float distance(point p1, point p2)
{
    float s = sqrt((p2.x - p1.x) * (p2.x - p1.x) + (p2.y - p1.y) * (p2.y - p1.y));
    return s;
}

int main()
{
    // implicit call
    // complex s1(2, 5);
    // s1.printdata();

    // explicit call
    // complex s2=complex(3, 8);
    // s2.printdata();
   
    point p1(12, 15);
    point p2=point(0, 5);
    cout << "The distance between the two points is " << distance(p1, p2) << endl;

    return 0;
}