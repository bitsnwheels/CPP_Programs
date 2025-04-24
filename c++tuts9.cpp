#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Enter your age" << endl;
    cin >> age;

    //*************** selection control structure *************\\\\

    // use of if-else

    /* if (age > 18)
     {
         cout << "You are eligible to vote in the election." << endl;
     }
     else if (age = 18)
     {
         cout << "You are also eligible to vote in the election." << endl;
     }
     else
     {
         cout << "You are not eligible to vote in the election." << endl;
     }*/

    // use of switch case

    switch (age)
    {
    case 18:
    {
        cout << "You are 18 years old" << endl;
        break;
    }

    case 22:
    {
        cout << "You are 22 years old" << endl;
        break;
    }

    case 69:
    {
        cout << "You are 69 years old" << endl;
        break;
    }

    default:
    {
        cout << "You are neither 18 nor 22 nor 69 years old" << endl;
        break;
    }
    }

    return 0;
}
