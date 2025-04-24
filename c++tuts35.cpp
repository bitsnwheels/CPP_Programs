#include <iostream>
using namespace std;
int count = 0;
class example
{
public:
    example()
    {
        count++;
        cout << "This is the time when constructor is called for object number " << count << endl;
    }

    ~example()
    {
        cout << "This is the time when destructor is called for object number " << count << endl;
        count--;
    }
};
int main()
{
    cout<<"Entering our main block"<<endl;
    example e1;
    {
        cout<<"Entering into the block"<<endl;
        example e2,e3;
        cout<<"Exiting the block"<<endl;
    }
    cout<<"Back to main block"<<endl;

    return 0;
}