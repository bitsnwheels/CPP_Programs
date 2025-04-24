#include <iostream>
using namespace std;
void swap(int x, int y)
{
    int temp = x;
    x = y;
    y = temp;
}

void swapbypointer(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void swapbyreference(int &x, int &y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}
int main()
{
    int num1, num2;
    num1 = 25;
    num2 = 45;
    // cout << "The value of num1 before swapping is " << num1 << " and the value of num2 before swapping is " << num2 << endl;
    // swap(num1, num2);  //this will not change the actual parameters
    // cout << "The value of num1 after swapping is " << num1 << " and the value of num2 after swapping is " << num2 << endl;

    // cout << "The value of num1 before swapping is " << num1 << " and the value of num2 before swapping is " << num2 << endl;
    // swapbypointer(&num1, &num2); // this will  change the actual parameters
    // cout << "The value of num1 after swapping is " << num1 << " and the value of num2 after swapping is " << num2 << endl;


    cout << "The value of num1 before swapping is " << num1 << " and the value of num2 before swapping is " << num2 << endl;
    swapbyreference(num1, num2);  //this will  change the actual parameters
    cout << "The value of num1 after swapping is " << num1 << " and the value of num2 after swapping is " << num2 << endl;
    return 0;
}