#include<iostream>
#include <list>

using namespace std;
void display(list<int> &lst){
    list<int>::iterator itr;
    for ( itr = lst.begin(); itr != lst.end(); itr++)
    {
        cout<<*itr<<endl;
    }
    cout<<endl;
    
}
int main(){
  list<int> list1;//list of length 0
  list1.push_back(5);
  list1.push_back(7);
  list1.push_back(9);
  list1.push_back(1);
  list1.push_back(12);

//   list<int> :: iterator iter;
//   iter=list1.begin();
//   cout<<*iter<<endl;
//   iter++;
//   cout<<*iter<<endl;
//   iter++;
//   cout<<*iter<<endl;
//   iter++;
//   cout<<*iter<<endl;
//   iter++;
//   cout<<*iter<<endl;

//the above line of codes can be replaced by the display function written above
display(list1);
// list1.pop_back();
// display(list1);
// list1.sort();  this will sort the elements of the list1
// display(list1);





  list<int> list2(3); //Empty list of size 3
  list<int>::iterator iter=list2.begin();
  *iter=1;
  iter++;
  *iter=7;
  iter++;
  *iter=4;
  
  display(list2);
  list1.sort();
  list2.sort();

  list1.merge(list2);  //this will make the list2 empty because list2 has been merged with list1
  cout<<"List1 after merging with list2 is:"<<endl;
  display(list1);
  

   
return 0;
}