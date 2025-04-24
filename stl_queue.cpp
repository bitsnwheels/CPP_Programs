#include <iostream>
#include <queue>
using namespace std;

int main(){
queue<string> q;
q.push("Adarsh");
q.push("Vats");
q.push("Thakur");

cout<<"before pop"<<endl;
cout<<q.front()<<endl;
cout<<"after pop"<<endl;
q.pop();
cout<<q.front()<<endl;



    return 0;
}