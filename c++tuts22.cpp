#include <iostream>
#include <string>
using namespace std;
class binary
{
    int a;
    string s; // this is by default a private member

public:
    void read(void);
    void checkbinary(void);
    void ones_compliment(void);
    void display(void);
};

void binary::read(void)
{
    cout << "Enter a binary number " << endl;
    cin >> s;
}

void binary::checkbinary(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '1' && s.at(i) != '0')
        {
            cout << "Entered number is not binary" << endl;
            exit(0);  //doing this make sures that functions beyond b.checkbinary() in main do not run in case the entered number is not found to be binary
        }
    }
}

void binary::ones_compliment(void)
{
    checkbinary();  //this is an example nesting of member functions occur
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else if (s.at(i) == '1')
        {
            s.at(i) = '0';
        }
    }
}

void binary::display(void)
{
    cout<<"Displaying your binary numbers"<<endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}
int main()
{
    binary b;

    b.read();
  //  b.checkbinary();  //we can use it here rather than using nesting of functions as well 
    b.display();
    b.ones_compliment();
    b.display();

    return 0;
}