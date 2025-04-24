#include<iostream>
#include<map>
#include<string>
using namespace std;
int main(){

map<string,int> marks;
marks["Adarsh"]=98;
marks["Ankit"]=90;
marks["Shubham"]=99;
 map<string,int>  :: iterator iter;
 
 for (iter=marks.begin();iter != marks.end(); iter++)
 {
    cout<<(*iter).first<<" "<<(*iter).second<<endl;
 }
 cout<<"The size of this map is "<<marks.size()<<endl;

 
 
return 0;
}