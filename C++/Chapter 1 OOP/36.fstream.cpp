/*
The useful classes for working with files in C++ are:
1. fstreambase
2. ifstream ---> derived from fstreambase
3. ofstream ---> derived from fstreambase

In order work with files in C++, you will have to open it. Primarily, there are 2 ways to open a file:
1. Using the Constructor.
2. Using the member function open() of the class.
*/
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string statement1 = "Yokoso... Watashi no Soru Sosaeti e. Are are.";
    string statement2;

    // 1.1 Opening file using Constructor and Writing in it. 
    ofstream file1("36.1.sample.txt");      // here ofstream is a Class and file1 we have created a parametrised object(constructor)
    file1<<statement1;
    
    // 1.2 Opening file using Constructor and Reading it.
    ifstream file2("36.2.sample.txt");  
    // Note: Spaces and Newlines are not Recorded in ifstream that's, upon there arrival the read function stops.
    // hence, use getline function for tasks like these.
    // file2>>statement2;
    getline(file2, statement2); // it takes i/p from file2 and copies it to statement2
    getline(file2, statement2); // now running it 2nd time will copy the 2nd line and so on...
    cout<<statement2<<endl;


    return 0;
}