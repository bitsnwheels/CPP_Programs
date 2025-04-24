#include <iostream>
using namespace std;
// template<class T>
// class nothing{
//    T data;
//    public:
//    nothing(T x){
//        data=x;
//    }
//    void display();
//
//};
// template<class T>
// void nothing<T>::display(){
//    cout<<data<<endl;
//}
void func(int x)
{
    cout << "This is func1() " << x << endl;
}
template <class t>
void func(t x)
{
    cout << "This is func2() " << x << endl;
}
int main()
{
    // nothing<int>n1(5);
    // n1.display();
    func(5);      // in this case the function without template will be invoked(exact match is given priority in this case)
    func<int>(5); // in this case the function with template will be invoked
    return 0;
}