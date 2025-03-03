/*
Create 2 classes:
    1. SimpleCalculator - Takes input of 2 numbers using a utility function and performs +, -, *, / and displays the results using another function.
    2. ScientificCalculator - Takes input of 2 numbers using a utility function and performs any four scientific operations of your choice and displays the results using another function.

    Create another class HybridCalculator and inherit it using these 2 classes:
    Q1. What type of Inheritance are you using?
    Q2. Which mode of Inheritance are you using?
    Q3. Create an object of HybridCalculator and display results of the simple and scientific calculator.
    Q4. How is code reusability implemented?
*/

#include <iostream>
#include <cmath>    // common mathematics operations
#include <numeric>
using namespace std;

class SimpleCalculator
{
    protected:
        float n1, n2, result;
        int choice;
    public:
        void getNumber(float, float);
        void processSimp(void);
        void outcome(void);
};
void SimpleCalculator :: getNumber(float x1, float x2)
{
    n1 = x1;
    n2 = x2;
}
void SimpleCalculator :: processSimp(void)
{
    cout<<"Choose the operation to perform:\n 1) +\n 2) -\n 3) *\n 4) /"<<endl;
    cin>>choice;
    switch (choice)
    {
        case 1:
            result = n1 + n2;
            break;
        case 2:
            result = n1 - n2;
            break;
        case 3:
            result = n1 * n2;
            break;
        case 4:
            if(n2==0)
            {
                cout<<"Error: Division by zero!"<<endl;
                result=0;
            }
            else
            {
                result = n1 / n2;
            }
            break;
        default:
            cout<<"Choose a valid operation!"<<endl;
            break;
    }
}
void SimpleCalculator :: outcome(void)
{
    cout<< result <<endl;
}

class ScientificCalculator : public SimpleCalculator
{
    public:
        void processSci(void);
};
void ScientificCalculator :: processSci(void)
{
    cout<<"Choose the operation to perform:\n 1) Modulus (a%b)\n 2) Exponentiation (a^b)\n 3) Logarithm (log a base b)\n 4) Greatest Common divsor(GCD)"<<endl;
    cin>>choice;

    // round roundes of instead of Truncating
    int i1 = round(this->n1);        //int i1=static_cast<int>(this->n1);
    int i2 = round(this->n2);        //int i2=static_cast<int>(this->n2);
    switch (choice)
    {
        case 1:
            result = i1 % i2;
            break;
        case 2:
            result = static_cast<int>(pow(i1, i2));   // i1 raise to i2
            break;
        case 3:
            result = log(i1)/log(i2);
            break;
        case 4:
            if(i1==0 || i2==0)
            {
                cout<<"Error: GCD with zero's not possible"<<endl;
            }
            else
            {
                result = gcd(abs(i1), abs(i2));    // abs() Converts negatives to positives
            }
            break;
    }
}

class HybridCalculator : public ScientificCalculator
{
        int select;
    public:
        void choose(void);
};
void HybridCalculator :: choose(void)
{
    cout<<"Select: 1) Basic Calculator 2) Scientific Calculator"<<endl;
    do
    {
        cin>>select;
        if(select==1 || select==2)
        {
            switch (select)
            {
                case 1:
                    processSimp();
                    outcome();
                    break;
                case 2:
                    processSci();
                    outcome();
                    break;
            }
            break;
        }
        else
        {
            cout<<"Choose either 1) or 2) only!"<<endl;
        }
    }
    while(true);
}

int main()
{
    HybridCalculator o1;
    float f1, f2;
    cout<<"Enter the 2 numbers:"<<endl;
    cin>>f1>>f2;
    o1.getNumber(f1, f2);
    o1.choose();    

    return 0;
}
