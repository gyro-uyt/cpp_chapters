// Take an array of integers (positive or negative or both) and return the sum of the absolute value of each element.
// Examples: getAbsSum([2, -1, 4, 8, 10]) ➞ 25

#include<iostream>
using namespace std;

// int mod(){
//     int x;
//     cout<<"Enter the x: ";
//     cin>> x;
//     x= abs(x);
//     cout<< x <<endl;
//     return 0;
// }

int main(){
    // int absum[] = {2, -1, 4, 8, 10};
    int n, add=0;
    cout<<"Enter the no. of Numbers you want absolute sum of: ";
    cin>>n;

    int sum[n] = {};
    for (int p = 0; p < n; p++)
    {
        cout<<"Enter the num" << p+1 << " :"<<endl;
        cin>> sum[p];
        sum[p] = abs(sum[p]);
    }

    for (int p = 0; p < n; p++)
    {
         add = add + sum[p];
    }
    
    cout<<"Absolute sum of the given numbers is: "<< add <<endl;
    
    // int sum[5] = {};
    // cout<<"Enter the 1st no. : "<<endl;
    // cin>> sum[0];
    // cout<<"Enter the 2nd no. : "<<endl;
    // cin>> sum[1];
    // cout<<"Enter the 3rd no. : "<<endl;
    // cin>> sum[2];
    // cout<<"Enter the 4th no. : "<<endl;
    // cin>> sum[3];
    // cout<<"Enter the 5th no. : "<<endl;
    // cin>> sum[4];

    // sum[0] = abs(sum[0]);
    // sum[1] = abs(sum[1]);
    // sum[2] = abs(sum[2]);
    // sum[3] = abs(sum[3]);
    // sum[4] = abs(sum[4]);
    // for (int i = 0; i < 5; i++)
    // {
    //     sum[i] = abs(sum[i]);
    // }

    // int add;
    // add = sum[0] + sum[1] + sum[2] + sum[3] + sum[4] ;
    // cout<<"The sum of 5 no.s you Entered is: "<< add <<endl;
    

    return 0;
}
