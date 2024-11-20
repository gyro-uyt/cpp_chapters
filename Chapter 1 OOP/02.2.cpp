#include <iostream>
#include <string>
using namespace std;

class binary
{
    string binput;
    void chk_binary(void);      // now, it can' be accessedd in main() directly

public:
    void read_binary(void);
    // void chk_binary(void);
    void ones_comp(void);
    void display_binary(void);
};

void binary ::read_binary(void)
{
    cout << "Enter the Binary number: ";
    cin >> binput;
    chk_binary();       //* this is NESTING of function in another function
}
void binary ::chk_binary(void)
{
    int length_binary = binput.length();
    //**    "_____.at(i)" this a string function tell the ith element,
    //**    indexing in string starts from ZERO(0)

    cout << "Lenght of the input number is: " << length_binary << endl;
    for (int i = 0; i < length_binary; i++)
    {
        // if ( binput.at(i)!= 0 && binput.at(i)!= 1 )  //* characters in a string are of type char, issue lies in comparing binput.at(i) with 0 and 1
        if (binput.at(i) != '0' && binput.at(i) != '1')
        {
            cout << "!!Enter a Binary number ONLY!!" << endl;
            // break;       // exits a loop or terminates a switch statement.
            exit(0); // Terminates the entire program immediately, regardless of where it is called.
        }
    }
    cout << "Binary number Registered" << endl; // if 'break' was used above this statement would have RAN, but exit(0) stopped whole code
}
void binary ::ones_comp(void)
{
    for (int i = 0; i < binput.length(); i++)
    {
        if (binput.at(i) == '0')
        {
            binput.at(i) = '1';
        }
        else if (binput.at(i) == '1')
        {
            binput.at(i) = '0';
        }
        // else{
        //     binput.at(i)='0';
        // }
    }
}
void binary :: display_binary(void)
// {
//     cout << binput << endl;
// }
{
    for (int i = 0; i < binput.length(); i++)
    {
        cout<< binput.at(i);
    }
    cout<<endl;
}

int main()
{
    binary x;
    x.read_binary();            // nested chk_binary in read_binary
    // x.chk_binary();         // we can NEST this function in another function
    x.display_binary();
    x.ones_comp();
    x.display_binary();
    return 0;
}