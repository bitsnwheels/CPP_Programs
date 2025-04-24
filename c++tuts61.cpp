#include<iostream>
#include<fstream>
using namespace std;
int main(){
ofstream out;
out.open("sample60a.txt");
out<<"Hellow everyone\n";
out<<"mY name is adarsh raj\n";
out<<"bye everyone\n";
out.close();

ifstream in;
in.open("sample60a.txt");
string st;
while (in.eof()==0)
{
    getline(in,st);
    cout<<st<<endl;
}

return 0;
}