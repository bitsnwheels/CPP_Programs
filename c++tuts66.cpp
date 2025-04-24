#include <iostream>
using namespace std;
template <class t1 = int, class t2 = float, class t3 = char>
class adarsh
{
public:
    t1 data1;
    t2 data2;
    t3 data3;

    adarsh(t1 x, t2 y, t2 z)
    {
        data1 = x;
        data2 = y;
        data3 = z;
    }
    void show()
    {
        cout << "The value of data1 is " << data1 << endl;
        cout << "The value of data2 is " << data2 << endl;
        cout << "The value of data3 is " << data3 << endl;
    }
};

int main()
{
    adarsh<> a1(2, 1.5, 'c');
    a1.show();
    cout << endl;
    adarsh<char,char> a2('v', 't', 'm');
    a2.show();
    cout<<endl;
    adarsh<int,int ,int> a3(2,5,8);
    a3.show();
    
    cout << endl;

    return 0;
}