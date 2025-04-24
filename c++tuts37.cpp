#include <iostream>
using namespace std;

class employee
{
public:
    int id;
    float salary;
    employee(int inpid)
    {
        id = inpid;

        salary = 34;
    }
    employee(){}  //default constructor which is must in case of inheritance

    void showdata()
    {
        cout << "The id of the employee is " << id << " and salary of the employee is " << salary << endl;
    }
};

class programmer :  employee
{
public:
    int languagecode;
    programmer(int inpid)
    {
        id = inpid;
        languagecode = 9;
        salary = 34;
    }
    void showdata()
    {
        cout << "The id of the employee is " << id << " and the salary of the employee is " << salary << " and language code of the employee is " << languagecode << endl;
    }
};




int main()
{
    employee harry, adarsh;
    harry = employee(123);
    adarsh = employee(125);
    harry.showdata();
    adarsh.showdata();
    programmer shubham(129);
    shubham.showdata();

    return 0;
}