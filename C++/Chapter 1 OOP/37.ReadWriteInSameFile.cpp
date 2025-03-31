#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // connecting our file with with write stream
    ofstream write("37.sample.txt");

    // creating a name string and filling it with the string entered by the user
    string name;
    cout << "Enter your name: ";
    cin >> name;

    // writing a string to the write file
    write << name + " is my name fellas..." << endl;
    // each time the write operation is ran it deltes any data on the file and writes fresh

    // closing the write connection
    write.close();

    ifstream read("37.sample.txt");
    string content;
    read>>content;  // use getline to avoid incomplete transfer

    cout<<"The content of the file is "<<content;
    read.close();


    return 0;
}