#include<iostream>
#include<stack>
using namespace std;

int main(){
   stack <string> s;
   s.push("adarsh");
   s.push("vats");
   s.push("thakur");

   cout<<s.top()<<endl;
   s.pop();
   cout<<s.top()<<endl;
   cout<<s.size()<<endl;
   cout<<s.empty()<<endl;  


    return 0;
}