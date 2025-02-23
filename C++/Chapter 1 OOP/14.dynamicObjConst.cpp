// Dynamic Initialization of Objects Using Constructors
// dynamic means during run-time
#include <iostream>
using namespace std;

class Fd
{
    int principal;
    int years;
    float rate;
    float returnval;

public:
    Fd() {};                   // default empty defination is necessary for the initialistion of the object, bcz when initialised without values it can't decide which defination of the following 2 to follow
    Fd(int p, int y, float r); // rate can be like 0.04
    Fd(int p, int y, int r);   // also it can be in percentage forms like 4%
    void show();
};
Fd::Fd(int p, int y, float r)
{
    principal = p;
    years = y;
    rate = r;
    returnval = principal;
    for (int i = 0; i < years; i++)
    {
        returnval = returnval * (1 + rate);
    }
}
Fd::Fd(int p, int y, int r)
{
    principal = p;
    years = y;
    rate = (float(r) / 100);
    returnval = principal;
    for (int i = 0; i < years; i++)
    {
        returnval = returnval * (1 + rate);
    }
}
void Fd::show()
{
    cout << principal << " amount was deposited "
         << years << " years ago, which is now " << returnval << endl;
}

int main()
{
    Fd f1, f2, f3;
    int p, y, rI;
    float rF;

    cout << "Enter the value of Principal amount: ";
    cin >> p;
    cout << "Enter number of years: ";
    cin >> y;
    cout << "Enter the interest rate in % form: ";
    cin >> rI;
    cout << "Enter the interest rate in decimal form: ";
    cin >> rF;

    f1 = Fd(p, y, rI);
    f1.show();

    f2 = Fd(p, y, rF);
    f2.show();

    return 0;
}