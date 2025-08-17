#include <iostream>
using namespace std;

class Test
{
    static int count;
public:
    Test()
    {
        count++;
        cout<<"creating obj-"<<count<<endl;
    }
    ~Test()
    {
        cout<<"destructing obj-"<<count<<endl;
        count--;
    }
};

int Test::count=0;

int main()
{
    Test a,b,c,d;
    {
        cout<<"block-1"<<endl;
        Test e;
    }
    {
        cout<<"bkock-2"<<endl;
        Test f;
    }
    Test g;
    cout<<"end"<<endl;
    
    return 0;
}
