#include <iostream>
using namespace std;
void func(){
    throw 1;
}
int main()
{
    cout << "Welcome to the lecture!" << endl;
    int i = 3;
    try
    {
        if (i == 1)   //as soon as throw works the line of codes written below in the try block are ignored
        //throw 1;
            func();//even this is legal
            

        else if (i == 2)
            throw 2;

        else if (i == 3)
            throw 3;

        
        cout << "In try!" << endl;
    }
    catch (int e)
    {
        cout << "exception no. " << e << endl;
    }
    catch (float e)
    {
        cout << "exception no. " << e << endl;
    }
    cout << "Last line" << endl;
    return 0;
}