#include <iostream>
#include <unordered_map>
using namespace std;
int main()
{
   unordered_map<int, string> m;
    m[1] = "Adarsh";
    m[13] = "vats";
    m[2] = "Thakur";

    m.insert({5, "Bheem"}); // another method of adding keys to the map
    cout << "Finding 13 " << m.count(13) << endl;
    cout << "Before erase" << endl;
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }
    cout << endl;

    m.erase(5);

    cout << "After erase" << endl;
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }

    auto it = m.find(2);
    for (auto i = it; i != m.end(); i++)
    {
        cout << (*i).first << " ";
    }

    return 0;
}