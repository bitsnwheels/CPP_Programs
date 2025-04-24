#include <iostream>
using namespace std;
class student
{
protected:
    int roll;

public:
    void set_roll(int n)
    {
        roll = n;
    }

    void getroll()
    {
        cout << "The roll number is " << roll << endl;
    }
};
class exam : public student
{
protected:
    float maths;
    float physics;

public:
    void setmarks(int, int);
    void getmarks();
};

void exam::setmarks(int m1, int m2)
{
    maths = m1;
    physics = m2;
}
void exam::getmarks()
{
    cout << "The marks in physics are " << physics << " and the marks in maths are " << maths << endl;
}

class result : public exam
{
    float percentage;

public:
    void show()
    {
        getroll();
        getmarks();
        cout << "The marks  of the  student is " << (maths + physics) / 2 << "%" << endl;
    }
};
int main()
{
    result adarsh;
    adarsh.set_roll(47);
    adarsh.setmarks(75, 85);
    adarsh.show();

    return 0;
}

/*

                         _
 _._ _..._ .-',     _.._(`))
'-. `     '  /-._.-'    ',/
   )         \            '.
  / _    _    |             \
 |  a    a    /              |
 \   .-.                     ;
  '-('' ).-'       ,'       ;
     '-;           |      .'
        \           \    /
        | 7  .__  _.-\   \
        | |  |  ``/  /`  /
       /,_|  |   /,_/   /
          /,_/      '`-'

*/