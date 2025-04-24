#include <iostream>
using namespace std;
class simple
{
    int data1;
    int data2;
    int data3;

public:
    simple(int x, int y = 15, int z = 65)
    {
        data1 = x;
        data2 = y;
        data3 = z;
    }
 

    void printdata()
    {
        cout << "The value of data1,data2 and data 3 is " << data1 << " , " << data2 << " and " << data3 << endl;
    }
};
int main()
{
    simple s1(5);
    simple s2(5, 6);
    simple s3(5, 6, 8);

    s1.printdata();
    s2.printdata();
    s3.printdata();

    return 0;
}