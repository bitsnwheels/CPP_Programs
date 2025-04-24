#include <iostream>
using namespace std;
template <class t1, class t2>
float average(t1 x, t2 y)
{
    return (x + y) / 2;
}
int main()
{
    //float av = average<float,float>(2.8, 3.0);
     float av=average(2.0,3.0);
    cout << "The value of average is " << av << endl;
    return 0;
}