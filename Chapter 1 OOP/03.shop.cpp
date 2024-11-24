// class uses Memory only when we use it in main(), it doesn't takes memory to just create class

#include <iostream>
using namespace std;

class shop
{
    int counter;
    int itemID[100];
    int itemPrice[100];

public:
    void initcounter(void);
    void setPrice(void);
    void displayPrice(void);
};

void shop::initcounter(void)
{
    counter = 0;
}
void shop::setPrice(void)
{
    cout << "Enter the ID of item no." << (counter + 1) << " : ";
    cin >> itemID[counter];
    cout << "Enter the price of item no." << (counter + 1) << " : ";
    cin >> itemPrice[counter];
    counter++;
}
void shop::displayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "Price of itemID-" << itemID[i] << " is " << itemPrice[i] << endl;
    }
}

int main()
{
    shop govind;
    govind.initcounter();
    // govind.setPrice();
    // govind.setPrice();
    // govind.setPrice();
    int n;
    cout << "Enter the number of Items: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        govind.setPrice();
    }
    cout<<endl;
    govind.displayPrice();

    return 0;
}