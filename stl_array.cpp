#include<bits/stdc++.h>
using namespace std;
#include <array>
int main(){
    array<int,6> ar ={3,5,6,1,7,0};
    for(int i=0;i<6;i++)
        cout<<ar.at(i);
    cout<<endl;
    
    int &x=ar.front();
    x=5;
    cout<<"The first element of the array is "<<ar.front()<<endl;
    cout<<"The last element of the array is "<<ar.back()<<endl;
    
    cout<<"The number of elements in the array is "<<ar.size()<<endl;
    cout<<"The max number of elements array can hold is  "<<ar.max_size()<<endl;

    array<int,5> ar1={1,2,3,4,5};
    array<int,5> ar2={7,8,9,4,5};

    cout<<"Elements of ar1 and ar2 before swapping: "<<endl;
    for (int i = 0; i < ar1.size(); i++)
    {
        cout<<ar1.at(i)<<"\t";
    }
    cout<<endl;
    for (int i = 0; i < ar2.size(); i++)
    {
        cout<<ar2.at(i)<<"\t";
    }
    cout<<endl;

    cout<<"Elements of ar1 and ar2 after swapping: "<<endl;
    ar1.swap(ar2);
    for (int i = 0; i < ar1.size(); i++)
    {
        cout<<ar1.at(i)<<"\t";
    }
    cout<<endl;
    for (int i = 0; i < ar2.size(); i++)
    {
        cout<<ar2.at(i)<<"\t";
    }
    cout<<endl;

     array<int,5> ar3={2,3,45,6,7};
     cout<<ar3.empty()<<endl;
     ar3.fill(6);
       for (int i = 0; i < ar3.size(); i++)
    {
        cout<<ar3.at(i)<<"\t";
    }
    return 0;
}