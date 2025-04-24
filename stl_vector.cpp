#include <iostream>
#include <vector>
using namespace std;
int main(){

    vector <int> a(5,1); //5 is the size of the vector and initialize all the values of the vector with 1.by default it will be zero
    vector<int> b(a);   //creating a new vectro having all the elements of vector a
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4); 
    cout<<"vector before popping: "<<endl;
    for(int i:v){
        cout<<i<<" ";
    }

    cout<<"vector after popping: "<<endl;
    v.pop_back();
    for(int i:v){
        cout<<i<<" ";
    }

    cout<<"capacity "<<v.capacity()<<endl;
    cout<<"size "<<v.size()<<endl;

    cout<<"front: "<<v.front()<<endl;
    cout<<"back: "<<v.back()<<endl;

    cout<<"element at 2nd index is: "<<v.at(2)<<endl;

    // cout<<"size before clear: "<<v.size()<<endl;
    // cout<<"capacity before clear: "<<v.capacity()<<endl;
    // v.clear();
    // cout<<"sizez after clear: "<<v.size()<<endl;
    // cout<<"capacity before clear: "<<v.capacity()<<endl;
    

    v.erase(v.begin(),v.begin()+1);

    for(int i:v){
        cout<<i<<" ";
    }


   
    return 0;
}