#include <iostream>
#include <vector>

using namespace std;

template <class t>
void display(vector<t> &v)
{
    cout << "Displaying this vector" << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
int main()
{
    // ways to create a vector

    vector<int> v1;       // zero length integer vector
    vector<char> v2(4);   // 4 elements character vector
    vector<char> v3(v2);  // 4 elements character vector from v2
    vector<int> v4(6, 3); // 6 elements vector of 3s
    vector <int> v5{4,64,3}; //3 elements and are intialised just like arrays

    v2.push_back('5');
    display(v2);
    int size, element;
    size = 5;
    //   cout<<"Enter the size of your vector"<<endl;
    //   cin>>size;

    //   for (int i = 0; i <size; i++)
    //   {
    //     cout<<"Enter the element to be added"<<endl;
    //     cin>>element;
    //     v1.push_back(element);

    //   }

    //   display(v1);
    //   vector<int> :: iterator iter=v1.begin();  //an example for iterator
    // v1.insert(iter,10,566);  //insert function needs an iterator //this line of code will ten 566s in the beginning of the vector

    //   display(v1);

    return 0;
}