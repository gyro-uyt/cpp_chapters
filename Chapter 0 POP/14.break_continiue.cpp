#include <iostream>
using namespace std;

int main(){
    //******* BREAK statement ********//
    cout<<"This is a 'Break' statement for a=7"<<endl;
    for (int a = 1; a <= 20; a++)
    {
        cout<< a <<endl;    // here '7' was printed as break was defined after pinting it

        if (a==7)   // if, else if, else any can be used here
        {
            break;  // BREAKS the whole loop here when a==7.
        }
        
    }
    
    cout<<"\nThis is a 'Break' statement for a=7, but it breaks BEFORE that"<<endl;
    for (int a = 1; a <= 20; a++)
    {
        if (a==7)
        {
            break;
        }
        
        cout<< a <<endl;    // as the BREAK is defined before printing it Breaks there and doesn't prints

    }

    //********* CONTINUE statement *********//
    cout<<"\nThis is Continue statement it SKIPS the particualar vale(7)"<<endl;
    for (int b = 1; b <= 10; b++)
    {
        if (b==7)
        {
            continue;       // when b==7 it SKIPS this loop, cout never printed
        }                   // BUT IF cout is written BEFORE this condn. then 7 gets printed and other no.s too..
        
        cout<< b <<endl;

    }
    
    return 0;
}
