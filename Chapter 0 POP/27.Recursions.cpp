#include <iostream>
using namespace std;

int fibseries(int p){
    if( p<2 ){
        return 0;
    }
    if( p<4 && p>1 ){
        return 1;
    }
    return fibseries(p-1) + fibseries(p-2);
}

int main(){
   
    int y;
    cout<<"Enter the nth term of Fibuciano Series you want to find of: ";
    cin>>y;
    cout<<"The "<<y<<"th term of the Fibuciano Series is: "<< fibseries(y) <<endl;
    return 0;
}
