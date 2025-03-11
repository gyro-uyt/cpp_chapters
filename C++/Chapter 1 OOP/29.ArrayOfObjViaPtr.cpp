#include <iostream>
using namespace std;

class Shop
{
    int tag;
    float price;
public:
    void setData(int t, float p)
    {
        tag = t;
        price = p;
    }
    void getData(void)
    {
        cout<<"Price of the item-"<< tag <<" is rs."<< price <<endl;
    }
};
/*
 1  2  3
 ^     ^
 |     |
 |     |
 |     ptr  // after the for loop ptr++ will point some random address, so we resets it value by tmptr
 tmptr
*/

int main()
{
    int items = 3;
    
    Shop *ptr = new Shop[items];
    Shop *tmptr = ptr;
    int i, t;
    float p;
    for ( i=0; i<items; i++)
    {
        cout<<"Enter the item number and price"<<endl;
        cin>>t>>p;
        // (*ptr).setData(t, p);
        ptr->setData(t, p);
        ptr++;
    }
    ptr=tmptr;    
    for ( i=0; i<items; i++)
    {
        ptr->getData();
        ptr++;
    }
    
    return 0;
}
