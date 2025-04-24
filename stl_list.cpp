#include<iostream>
#include<list>

using namespace std;
int main(){
   list<int> l;

   l.push_back(5);
   l.push_front(6);
//    l.pop_back();
//   l.pop_front();

//    for(int i:l){
//     cout<<i<<" ";
//    }

// l.erase(l.begin());  //removes the first element
   cout<<endl;
      for(int i:l){
    cout<<i<<" ";
   }
    l.clear();
   cout<<endl<<"size of list "<<l.size();

    return 0;
}