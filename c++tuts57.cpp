#include <iostream>
using namespace std;
class CWH
{
protected:
    string title;
    float rating;

public:
    CWH(string s, float r)
    {
        title = s;
        rating = r;
    }
    virtual void display(){};
};

class video : public CWH
{
    int videolength;

public:
    video(string s, float r, int vl) : CWH(s, r)
    {
        videolength = vl;
    }
    void display()
    {
        cout << "This is an amazing video tutorial with title " << title << endl;
        cout << "The rating of this video is " << rating << " out of 5" << endl;
        cout << "The length of this video is " << videolength << " seconds" << endl;
    }
};
class text : public CWH
{
    int textlength;

public:
    text(string s, float r, int tl) : CWH(s, r)
    {
        textlength = tl;
    }
    void display()
    {
        cout << "This is an amazing text tutorial with title " << title << endl;
        cout << "The rating of this text is " << rating << " out of 5 " << endl;
        cout << "The number of words in this tutorial  is " << textlength << endl;
    }
};

int main()
{
    string name;
    float stars;
    int vl;
    int tl;
    CWH *ptr[2];
    // for video class
    name = "django tutorial video";
    stars = 4.5;
    vl = 536;

    video djangov(name, stars, vl);
    djangov.display();
    cout << endl;
    cout << "The above thing now gonna be done via base class pointer" << endl;
    cout << endl;
    ptr[0] = &djangov;
    ptr[0]->display();

    cout << endl
         << endl
         << endl;

    // for text class
    name = "django tutorial text";
    stars = 4.5;
    tl = 5360;
    text djangot(name, stars, tl);
    djangot.display();
    cout << endl;
    cout << "The above thing now gonna be done via base class pointer" << endl;
    cout << endl;
    ptr[1] = &djangot;
    ptr[1]->display();

    return 0;
}