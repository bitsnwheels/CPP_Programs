#include <iostream>
using namespace std;
typedef struct student
{
    int roll;
    int marks;
    char grade;
}st;

union road{
    int length;
    int zone;
    char category;
};
int main()
{
    //st shubham;
    //struct student adarsh;
    //adarsh.roll = 25;
   // adarsh.marks = 65;
    //adarsh.grade = 'b';

  
    //shubham.roll = 25;
    //shubham.marks = 65;
    //shubham.grade = 'b';
    //cout << shubham.roll << endl;
    //cout << shubham.marks << endl;
    //cout << shubham.grade << endl;

   // union road nh2;
    //nh2.category='c';
    //nh2.length=356;
   // nh2.zone=25;

   // cout<<nh2.category<<endl;  //these two will give garbage values because union uses shared memory location   
   // cout<<nh2.length<<endl;    //these two will give garbage values because union uses shared memory location
   // cout<<nh2.zone<<endl;     

   enum meal{breakfast,lunch,dinner};   //enum baiscally meakes named constants and assigns value to them and makes the  code overall more readable
   meal m1;
   meal m2;
   meal m3;
   m1=breakfast;
   m2=lunch;
   m3=dinner;
   cout<<m1<<endl;   //these three will print 0,1,2 respectively
   cout<<m2<<endl;
   cout<<m3<<endl;

   cout<<breakfast<<endl;   //these three will also print 0,1,2 respectively as it also does the same thing as the above one
   cout<<lunch<<endl;
   cout<<dinner<<endl;

    return 0;
}