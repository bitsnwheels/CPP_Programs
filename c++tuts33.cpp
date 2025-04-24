#include <iostream>
using namespace std;
class bankdeposit
{
    int principal;
    int years;
    float roi;
    float returnvalue;

public:
    bankdeposit() {}
    bankdeposit(int p, int y, float r);
    bankdeposit(int p, int y, int R);
    void show()
    {
        cout << "The return value is " << returnvalue << endl;
    }
};

bankdeposit::bankdeposit(int p, int y, float r)
{
    principal = p;
    years = y;
    roi = r;
    returnvalue = principal;
    for (int i = 0; i < y; i++)
    {

        returnvalue = returnvalue * (1 + roi);
    }
}
bankdeposit::bankdeposit(int p, int y, int R)
{
    principal = p;
    years = y;
    roi = ((float)R) / 100;
    returnvalue = principal;
    for (int i = 0; i < y; i++)
    {

        returnvalue = returnvalue * (1 + roi);
    }
}
int main()
{
    bankdeposit bd1, bd2, bd3;
    int p, y, R;
    float r;

    cout << "Enter the value of principal,years and rate of interest(r)" << endl;
    cin >> p >> y >> r;
    bd1 = bankdeposit(p, y, r);
    bd1.show();

    cout << "Enter the value of principal,years and rate of interest(R)" << endl;
    cin >> p >> y >> R;
    bd2 = bankdeposit(p, y, R);
    bd2.show();

    return 0;
}