#include<iostream>
#include<algorithm>
#include <vector>
using namespace std;

int main(){

vector<int> v={1,4,10,8,9,11};
vector<int> v2={36,6,36,3,8};
vector<int> dest(5);

// sorting 
// sort(v.rbegin(),v.rend());  //sorts the vector in descending order
// for(int i:v){
//     cout<<i<<" ";
// }cout<<endl;

// copy
// copy(v.begin(),v.end(),dest.begin());
// for(int i:dest){
//     cout<<i<<" ";
// }cout<<endl;


// swapping
// swap(v,v2);
// for(int i:v){
//     cout<<i<<" ";
// }cout<<endl;


//max and min
// int a=15;
// int b=5;
// cout<<max(a,b)<<endl;
// cout<<min(a,b)<<endl;

// cout<<"Binary Search "<<binary_search(v.begin(),v.end(),4)<<endl;

// string x="abcd";
// reverse(x.begin(),x.end());
// cout<<x<<endl;

// vector<int>::iterator low,up;
auto low=lower_bound(v.begin(),v.end(),4);
auto up=upper_bound(v.begin(),v.end(),4);
cout<<"lower_bound at index "<<(low-v.begin())<<endl;
cout<<"upper_bound at index "<<(up-v.begin())<<endl;


//               Rotation 
rotate(v.begin(),v.begin()+2,v.end());   //left rotation of vector by 2 units
rotate(v.begin(),v.begin()+v.size()-2,v.end());
for(int i:v){
    cout<<i<<" ";
}cout<<endl;


    return 0;
}