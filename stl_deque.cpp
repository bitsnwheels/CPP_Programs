#include <iostream>
#include <deque>
using namespace std;
int main()
{

    deque<int> d;
    d.push_back(4);
    d.push_front(1);
    //deque<int> d1(d);
    deque<int> d1(5,100);

    for (int i : d)
    {
        cout << i << " ";
    }
    cout << endl;
    // d.pop_back();
    // d.pop_front();

    // for (int i : d)
    // {
    //     cout << i << " ";
    // }
    // cout<<endl;

    cout<<"Empty or not "<<d.empty()<<endl;
    
    cout<<"Before erase "<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+1); //removing the first element
    cout<<"After erase "<<d.size()<<endl;
    d.clear();
    cout<<"After clearing "<<d.size()<<endl;

    for(int i:d1){
        cout<<i<<" ";
    }



    return 0;
}