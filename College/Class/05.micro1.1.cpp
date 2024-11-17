#include <iostream>
using namespace std;

int main(){
    int pass1, pass2, user, input;
    cout<<"\n\t>>> Welcome to Password Management System <<<"<<endl;
    cout<<"Enter your Username: ";
    cin>>user;
    cout<<"Enter the Password: ";
    cin>>pass1;
    cout<<"Re-enter the Password: ";
    cin>>pass2;
    cout<<endl;
    if (pass1 == pass2)
    {
        cout<<"Congratulations, you're Username and Password has been saved.";
    }
    else{
        cout<<"ERROR: Enter the same Password in both fields.";
    }

    cout<<"\n.........................................................................................................................................\n";
    cout<<"\nTo get all Your usernames & passwords enter the Master Password\n";
    cin>> input;
    int master = 96;
    if ( input == master )
    {
        cout<< "username: " << user << " & password: " << pass1 <<endl;
    }
    else{
        cout<<"WRONG MASTER PASS.  :(((\n";
    }

    cout<<endl;
    return 0;
}