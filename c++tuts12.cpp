#include<iostream>
using namespace std;
int main(){
    int a=234;
    int *b=&a;
    cout<<"The address of a is " <<&a<<endl;  //both of these will  print the same output
    cout<<"The address of a is " <<b<<endl;

    cout<<"The value of a is "<<a<<endl;   //both of these will  print the same output
    cout<<"The value of a is "<<*b<<endl;  //* is called dereference operator

    //concept of pointer to pointer
    int**c=&b;
    cout<<"The address of b is " <<&b<<endl;  //both of these will  print the same output
    cout<<"The address of b is " <<c<<endl;

    cout<<"The address of a is "<<*c<<endl;   //both of these will  print the same output
    cout<<"The value of a is "<<**c<<endl;  //* is called dereference operator





    


    
return 0;
}