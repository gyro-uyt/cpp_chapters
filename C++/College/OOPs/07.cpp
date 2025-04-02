#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Register
{
    int rn;
    float gpa;
    string name;
    static int count;

public:
    void setData(void)
    {
        cout << "Enter your roll number: ";
        cin >> rn;
        cout << "Enter your gpa: ";
        cin >> gpa;
        cin.ignore();
        cout << "Enter your name: ";
        // cin >> name;
        getline(cin, name);
    }
    void getData(void)
    {
        cout << "Roll number: " << rn << endl
             << "Name: " << name << endl
             << "GPA: " << gpa << endl;
    }
    void storeData(void)
    {
        ofstream out("07.notes.txt", ios::app);
        out << "Data of student-"<<count<< endl
            << "Roll number: " << rn << endl
            << "Name: " << name << endl
            << "GPA: " << gpa << endl<<endl;
            count++;
        out.close();
    }
    void saveCount(void)
    {
        ofstream saveCount("07.count.txt");
        saveCount<<count;
    }
    void loadCount(void)
    {
        ifstream load("07.count.txt");
        load>>count;
        cout<<count<<endl;
        load.close();
    }
};
int Register::count=1;

int main()
{
    int size;
    cout<<"Enter number of students you want to register: ";
    cin>>size;
    Register student[size];
    Register load;
    load.loadCount();

    for (int i = 0; i < size; i++)
    {
        student[i].setData();
        student[i].storeData();
        student[i].saveCount();
    }

    return 0;
}