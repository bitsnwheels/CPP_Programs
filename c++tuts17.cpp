#include <iostream>
using namespace std;
// inline functions
inline int product(int a, int b)
{
    return a * b;
}

// default arguements
float money(int currentmoney, float factor = 1.04)
{
    return currentmoney * factor;
}

// constant arguements
int length(const int *s)
{
    int x;//just doing some random stuffs so that we can return any integer so that it does not throw any error
    return x  ;
}

int main()
{
    int num1 = 12, num2 = 4;
    // cout<<"The product of num1 and num2 is "<<product(num1,num2)<<endl;
    // cout<<"The product of num1 and num2 is "<<product(num1,num2)<<endl;
    // cout<<"The product of num1 and num2 is "<<product(num1,num2)<<endl;
    // cout<<"The product of num1 and num2 is "<<product(num1,num2)<<endl;
    // cout<<"The product of num1 and num2 is "<<product(num1,num2)<<endl;
    // cout<<"The product of num1 and num2 is "<<product(num1,num2)<<endl;
    // cout<<"The product of num1 and num2 is "<<product(num1,num2)<<endl;

    int currentmoney = 100000;
    cout << "If you are a normal customer,The money you will receive for your rs " << currentmoney << " after one year is " << money(currentmoney) << endl;  // her since factor was not provided so the function assigned 1.04 as it was the default value
    cout << "If you are a vip customer,The money you will receive for your rs " << currentmoney << "after one year is " << money(currentmoney, 1.1) << endl; // her since factor was provided so the function assigned the value which was provided to it

    return 0;
}