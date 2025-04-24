#include <iostream>
using namespace std;

class employee
{
    int id;
    static int count;

public:
    void setdata()
    {
        cout << "Enter the employee id " << endl;
        cin >> id;
        count++;
    }
    void showdata()
    {
        cout << "The employee id of employee number " << count << " is " << id << endl;
    }

    static void getcount()
    {
       // id=25;//this will throw an error because only static properties and methods can be used in static functions
        cout << "The value of count is " << count << endl;
    }
};

int employee::count;//we have used this even though count is a variable because of its static nature and once a varible is declared static and it is no longer a property of objects ,it becomes a property of class

int main()
{
    employee adarsh, harry, love;

    adarsh.setdata();
    adarsh.showdata();
    employee::getcount();  //this is the synatax of accessing a static function 

    harry.setdata();
    harry.showdata();
    employee::getcount();

    love.setdata();
    love.showdata();
    employee::getcount();

    return 0;
}