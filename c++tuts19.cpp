#include <iostream>
using namespace std;
int sum(int a, int b)
{
    return (a + b);
}
int sum(int a, int b,int c)
{
    return (a + b+c );
}
int main()
{
    cout << "The sum of 3 and 2 is " << sum(3, 2) << endl;  //thus we have decalred two functions with the same name and with different number of arguements and still it is working
    cout << "The sum of 3 ,2 and 5 is " << sum(3,2,5) << endl;//this is what we call function overloading 

    return 0;
}