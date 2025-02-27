#include <iostream>
using namespace std;

class Number 
{
    int num;
public:
    Number(){ num = 0; } // default constructor just so that objects can get initialised 
    Number(int n)
    {
        num = n;
    }

    // Note: In case of No copy constructor, Compiler supplies it's own Copy constructor
     Number(Number &obj) // this is Copy Constructor, it takes object as a parameter and manipulates it's memory
    {
        cout<<"Copy Constructor Called"<<endl;
        num = obj.num;
    }
    Number(Number &o1, Number &o2)
    {
        num = o1.num + o2.num;
    }
    void print()
    {
        cout<<"The number is "<< num <<endl;
    }
};

int main(){
    Number x(54), y(3), z;
    Number p(x);    // Copy constructor Invoked
    Number q(y,p);
    
    x.print();
    y.print();
    z.print();
    p.print();
    q.print();
    cout<<endl;
    
    Number r;
    r=y;        // copy constructor not invoked
    r.print();
    cout<<endl;

    Number s=q; // copy constructor invoked
    s.print();
    return 0;
}
