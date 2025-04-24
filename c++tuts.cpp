#include <iostream>
using namespace std;
int main()
{
    int marks[4] = {25, 56, 45, 78};
   // for (int i = 0; i < 4; i++)
   // {
   //     cout << marks[i] << endl;
   // }

    int *x = marks;
    //cout << *x << endl;
    //cout << *(x + 1) << endl;
    //cout << *(x + 2) << endl;
    //cout << *(x + 3) << endl;

    
    cout<<*(x++)<<endl;
    cout<<*x<<endl;
    cout<<*(++x)<<endl;

    return 0;
}