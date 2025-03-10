#include<iostream>
using namespace std;

class Test
{
    int data1, data2;
public:
    /*
    Test(int i, int j)
    {
        data1 = i, data2 = j;
    }
    */
    //Test(int i, int j) : data1(i), data2(j)
    //Test(int i, int j) : data1(j), data2(i)
    //Test(int i, int j) : data1(i), data2(i+j)
    //Test(int i, int j) : data1(i), data2(2*j)
    Test(int i, int j) : data1(i), data2(data1+j)
    //Test(int i, int j) : data2(j), data1(i+data2) // This creates problem because data1 is initialised First in class
    {
        cout<<"Data1 = "<<data1<<endl;
        cout<<"Data2 = "<<data2<<endl;
    }
};
int main()
{
    Test t1(3,8);

    return 0;
}
