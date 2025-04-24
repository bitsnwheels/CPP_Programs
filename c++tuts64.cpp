#include <iostream>
using namespace std;

template <class t>
class vector
{
public:
    t *arr;
    int size;
    vector(int m)
    {
        size = m;
        arr = new t[size];
    }
    t dotproduct(vector &a)
    {
        t sum = 0;
        for (int i = 0; i < size; i++)
        {
            sum += this->arr[i] * a.arr[i];
        }
        return sum;
    }
};
int main()
{
    vector<float> v1(3);
    v1.arr[0] = 1.02;
    v1.arr[1] = 2.0;
    v1.arr[2] = 1.0;

    vector<float> v2(3);
    v2.arr[0] = 1.06;
    v2.arr[1] = 6.0;
    v2.arr[2] = 1.0;

    float sum = v1.dotproduct(v2);
    cout << sum << endl;

    return 0;
}