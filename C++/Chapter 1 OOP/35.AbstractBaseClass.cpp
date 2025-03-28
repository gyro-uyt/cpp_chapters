// A Abstract base class is a class which have atleast one Pure Virtual function.
// The purpose of Abstract base class is, it is made Only because we'll create Derived class from it,
// it is designed to imherit more classes, not to make Objects.
#include <iostream>
#include <cstring>
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
    virtual void display()=0;   // do-nothing function ---> Pure Virtual function
    // A pure virtual function can Never be runned, you'll definetly need to define it in derived class.
};

class CWHVideo : public CWH
{
    float videoLength;

public:
    CWHVideo(string s, float r, float vl) : CWH(s, r)
    {
        videoLength = vl;
    }
    void display()
    {
        cout << "Title: " << title << endl;
        cout << "Rating: " << rating << "/5" << endl;
        cout << "Video length: " << videoLength << endl;
    }
};

class CWHText : public CWH
{
    int words;

public:
    CWHText(string s, float r, int wc) : CWH(s, r)
    {
        words = wc;
    }
    void display()
    {
        cout << "Title: " << title << endl;
        cout << "Rating: " << rating << "/5" << endl;
        cout << "Words count: " << words << endl;
    }
};

int main()
{
    string title;
    float rating, vlen;
    int words;

    // CWHVideo
    title="Yokoso... Watashi no Soru Sosaeti e. Are are.";
    rating = 5;
    vlen = 30;

    CWHVideo SosukeAizen(title, rating, vlen);
    // SosukeAizen.display();

    //CWHText
    title="John Dillinger - Public Enemies";
    rating=4.2;
    words=1669;

    CWHText djtext(title, rating, words);
    // djtext.display();

    // using pointer to display via Virtual functions
    CWH * review[2];
    review[0]=&SosukeAizen;
    review[1]=&djtext;

    review[0]->display();
    review[1]->display();

    return 0;
}