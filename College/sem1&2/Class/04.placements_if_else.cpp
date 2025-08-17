#include <iostream>
using namespace std;

int main(){
 float tenth,twelth,cgpa;

 cout<<"Enter your 10th Percentage: ";
 cin>>tenth;
 cout<<"Enter your 12th Percentage: ";
 cin>>twelth;
 cout<<"Enter your CGPA: ";
 cin>>cgpa;

 if((tenth>=75 || twelth>=75)&& cgpa>=6)
 cout<<"Congratulations, You are Elidgble for 1st Round of Placements;))\n";

 else
 cout<<"sorry Try next time ;((\n";

 return 0;
}