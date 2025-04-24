#include<iostream>
#include<fstream>
using namespace std;
int main(){
//string st="harry bhai";
//ofstream out("sample60a.txt");
//out<<st;
//out.close();//closing the link file between text file and this program

string st;
ifstream in("sample60b.txt");
getline(in,st);
cout<<st;
in.close();//closing the link file between text file and this program

return 0;
}