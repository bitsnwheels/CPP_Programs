#include <iostream>
using namespace std;
int main()
{   

    //use of break
    for (int i = 0; i < 25; i++)
    {
        if (i == 5)
        {
            break;
        }
        cout << i << endl;
    }

    //use of continue
    for (int i = 0; i < 25; i++)
    {
        if (i == 5)
        {
            continue;;
        }
        cout << i << endl;
    }

    return 0;
}