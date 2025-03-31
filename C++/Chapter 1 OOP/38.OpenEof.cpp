#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    ofstream out;
    out.open("38.sample.txt");
    out<<"Divya is my name"<<endl;
    out<<"Jack Sparrow is my true name"<<endl;
    out<<"Entry for Thala is prohibited"<<endl;
    out<<"Only those who knows can enter the palace"<<endl;
    out.close();
    
    // out.open("38.sample.txt");
    // out<<endl<<"Hey sundae"<<endl;   
    // out.close();
    
    ifstream in;
    string st, st1, st2;
    in.open("38.sample.txt");
    // in>>st1>>st2;
    // cout<<st1<<endl<<st2<<endl;
    
    while (in.eof() == 0)   // eof is "end of file"
    {
        getline(in, st);
        cout<<st<<endl;
    }
    in.close();

    return 0;
}