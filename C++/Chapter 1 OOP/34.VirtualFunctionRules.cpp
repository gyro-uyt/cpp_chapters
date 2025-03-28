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
    virtual void display(){};
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
/*
Rules for Virtual functions
1. They cannot be static.
2. They are accessed by object parameters.
3. Virtual functions can be a friend of another class.
4. A function in a base class might not be used.
5. If a virtual function is defined in the base class, then there is no necessity if redefining it in the derived class,
   meaning if the function is not defined in the derived class then virtual function will run from base class.
*/