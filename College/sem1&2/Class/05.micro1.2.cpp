#include <iostream>
#include <string>
#include <fstream>      // for FILE operations
using namespace std;

// Function to save the Username & Password to password.txt file
void savedata( const string& user, const string& pass1)
    {
        ofstream file("password.txt", ios::app);
        if (file.is_open())
        {
            file << user << " " << pass1 << endl;
            file.close();
            cout<< "Username & Password saved successfully!\n";
        }
        else
        {
            cout<<"Unable to open file :(\n";
        }
    }
// Function to Retrive stored Username & Password
void retrivedata()
    {
        ifstream file("password.txt");                                          // opens files for reading
        if (file.is_open())
        {
            string user, pass1;
            cout << "\nStored Usernames and Passwords:\n";
            while (file >> user >> pass1)
            {                                     // Read each username and password pair
            cout << "Username: " << user << " | Password: " << pass1 << endl;
            }
            file.close();                                                           // Close the file after reading
        } 
        else
        {
            cout << "Error: Unable to open file to retrieve credentials." << endl;
        }
    }

int main(){
    string pass1, pass2, input, user;
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
        savedata(user, pass1);
    }
    else{
        cout<<"ERROR: Enter the same Password in both fields.";
    }

    cout<<"\n.........................................................................................................................................\n";
    
    // Optional: Retrieve and display stored credentials
    cout << "\nEnter Master Password to retrieve credentials: ";
    int masterPassword;
    cin >> masterPassword;
    if (masterPassword == 96)       // Simple master password check
    {                               
        retrivedata();              // Retrieve and show stored credentials
    } 
    else
    {
        cout << "Wrong Master Password." << endl;
    }

    cout<<endl;
    return 0;
}