#include <iostream>
using namespace std;
class good
{
    int a;
    int b;

public:
    // good(int n1, int n2) : a(n1), b(n2)  will work fine
    // good(int n1, int n2) : a(n1), b(n2+a)  will work fine
    // good(int n1, int n2) : b(n1),a(n2+b)  will throw garabage value
    // good(int n1, int n2) : b(n1+a),a(n2)   will work fine
    // good(int n1, int n2) : a(n1+b),b(n2)   will throw garabage value
    // good(int n1, int n2) : a(n1+a),b(n2)   will throw garabage value

    good(int n1, int n2) : a(n1), b(n2)
    {
        cout << "constructor called for good class" << endl;
        cout << "The value of a is " << a << " and the value of b is " << b << endl;
    }

   
};
int main()
{
    // good adarsh(3,4);   //even this is valid syntax for initiliazion of constructors
    good adarsh = good(3, 4);

    return 0;
}