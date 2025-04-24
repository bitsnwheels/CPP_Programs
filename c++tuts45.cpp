#include <iostream>
using namespace std;

class student
{
protected:
    int roll;

public:
    void setroll(int n)
    {
        roll = n;
    }
    void getroll()
    {
        cout << "Your roll number is " << roll << endl;
    }
};

class exam : virtual public student
{
protected:
    float maths, physics;

public:
    void setmarks(float f1, float f2)
    {
        maths = f1;
        physics = f2;
    }

    void getmarks()
    {
        cout << "Your marks in maths out of 100 are " << maths << endl
             << "and your marks in physics out of 100 are " << physics << endl;
    }
};

class sports : virtual public student
{
protected:
    float score;

public:
    void setscore(float n)
    {
        score = n;
    }

    void getscore()
    {
        cout << "Your score in sports out of 10 is " << score << endl;
    }
};

class result : public exam, public sports
{

    float total;

public:
    void showresult()
    {
        getroll();
        getmarks();
        getscore();
        cout << "Your total marks out of 210 are " << maths + physics + score << endl;
    }
};
int main()
{
    result anjan;
    anjan.setroll(6);
    anjan.setmarks(90, 98);
    anjan.setscore(9);

    anjan.showresult();
    // if we would not had used virtual base classed then the compiler would have thrown an error
    // as the class result would had got roll variabe inherited twice

    return 0;
}