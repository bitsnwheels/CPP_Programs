#include <iostream>
#include <set>
using namespace std;
int main()
{
    set<int> s;
    s.insert(5);
    s.insert(1);
    s.insert(4);
    s.insert(3);
    s.insert(5);
    s.emplace(7);

    for (int i : s)
    {
        cout << i << " ";
    }
    cout << endl;

    // set<int>::iterator it=s.begin();
    // it++;
    // s.erase(s.begin(),++it);

    cout << "5 is present or not " << s.count(5) << endl; // count() tells if the given element is present or not

    // find() method returns an iterator to the given element if it is found

    for (int i : s)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "Set is empty or not " << s.empty() << endl;

     return 0;
}