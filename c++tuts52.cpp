#include <iostream>
using namespace std;
class shopItem
{
    int id;
    float price;

public:
    void setdata(int x, float y)
    {
        id = x;
        price = y;
    }

    void getdata()
    {
        cout << "The id of the product is " << id << endl;
        cout << "The price of the product is " << price << endl;
    }
};
int main()
{
    int size = 3;
    int id;
    float price;
    shopItem *ptr = new shopItem[size];
    shopItem *temp = ptr;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the product no. " << i + 1 << "id and price" << endl;
        cin >> id >> price;
        ptr->setdata(id, price);
        ptr++;
    }

    for (int i = 0; i < size; i++)
    {
        temp->getdata();
        temp++;
    }

    return 0;
}