#include<iostream>
#include<functional>
#include<algorithm>
 

using namespace std;
int main(){
    //function objects (aka Functor):A function wrapped inside a class so that it is avalaible like an object
    int arr[]={1,73,4,2,54,7};
    // sort(arr,arr+5);  //this will sort the above array upto its first five elements
    // sort(arr,arr+6);//this will sort the whole array as the size of the array is 6
      sort(arr,arr+6,greater<int>());//this will also sort the whole array but in descending order rather than ascending order as a function object "greater<int>()" has been used
    for (int i = 0; i <6; i++)
    {
        cout<<arr[i]<<endl;
    }
    

return 0;
}