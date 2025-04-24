#include <iostream>
using namespace std;
template <class t1, class t2>
class myclass
{
    t1 data1;
    t2 data2;

public:
    myclass(t1 x, t2 y)
    {
        data1 = x;
        data2 = y;
    }
    void show()
    {
        cout << data1 << endl;
        cout << data2 << endl;
    }
};
int main()
{
    myclass<char, int> m1('C', 5);
    m1.show();
    return 0;
}