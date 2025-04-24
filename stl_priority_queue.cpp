#include <iostream>
#include <queue>
using namespace std;

int main(){
//max heap
priority_queue<int> maxi;

//min heap
priority_queue<int,vector<int>,greater<int>> mini;

// maxi.emplace(1);    //it does the same task as push() operation but is quicker
// maxi.emplace(6);
// maxi.emplace(3);
// maxi.emplace(4);

maxi.push(1);
maxi.push(6);
maxi.push(3);
maxi.push(4);

int n=maxi.size();
for(int i=0;i<n;i++){
    cout<<maxi.top()<<" ";
    maxi.pop();
}
cout<<endl;

mini.push(5);
mini.push(6);
mini.push(0);
mini.push(4);

int size=mini.size();
for(int i=0;i<size;i++){
    cout<<mini.top()<<" ";
    mini.pop();
}
cout<<endl;


cout<<"Khali hai kya bhai "<<mini.empty()<<endl;


    return 0;
}