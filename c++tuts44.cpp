#include <iostream>
using namespace std;
class a
{
public:
    int num;
    a() // constructor for a class
    {
        num = 10;
    }
};
class b : virtual public a
{
};

class c : virtual public a
{
};

class d : public b, public c
{
};
int main()
{
    d object;
    cout << "The value of number is " << object.num << endl;

    return 0;
}
