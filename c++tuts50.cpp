#include<iostream>
using namespace std;
int main(){
    int *p=new int(22);  //dynamically allocating the memory
    cout<<*p<<endl;
    //now we are going to free the space of dynamically allocated memory
    delete p; //even free(p); this will do the same job as delete

    int *arr=new int[3];
    arr[0]=25;
    arr[1]=5;
    arr[2]=2;
    delete[] arr;   //syntax for deleting the dynamically allocated memory to a array
    cout<<"value of p[0] is "<<arr[0]<<endl;
    cout<<"value of p[1] is "<<arr[1]<<endl;
    cout<<"value of p[2] is "<<arr[2]<<endl;
    

return 0;
}