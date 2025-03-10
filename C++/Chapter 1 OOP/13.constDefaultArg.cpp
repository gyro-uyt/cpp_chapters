#include <iostream>
using namespace std;

class Simple
{
    int data1, data2;

public:
    Simple(int x = 0, int y = 7)    // ---> Default Arguement of Constructor
    {
        data1 = x;
        data2 = y;
    }
    void printData() { cout << "Data is " << data1 << " & " << data2 << endl; }
};

int main()
{
    Simple s1(3,1);
    s1.printData();

    Simple s2(5);
    s2.printData();

    Simple s3;
    s3.printData();
    
    return 0;
}