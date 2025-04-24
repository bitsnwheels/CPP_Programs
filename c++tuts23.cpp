#include <iostream>
using namespace std;
class shop
{
    int id[100];  //by default the properties are decalred in private
    int price[100];
    int counter;

public:
    void initcounter() { counter = 0; }//it is a good practice to initialise the counter variable in the public  
    void setprice();
    void displayprice();
};
void shop::setprice()
{
    cout << "Enter the id of product no. " << counter + 1 << " product " << endl;
    cin >> id[counter];
    cout << "Enter the price of product no. " << counter + 1 << " product " << endl;
    cin >> price[counter];
    counter++;
}

void shop::displayprice()
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The price of product no. " << i+1 << " product is " << price[i] << endl;
    }
}
int main()
{
    shop dukaan;
    dukaan.initcounter();
    dukaan.setprice();
    dukaan.setprice();
    dukaan.setprice();
    dukaan.setprice();
    dukaan.setprice();

    dukaan.displayprice();

    return 0;
}