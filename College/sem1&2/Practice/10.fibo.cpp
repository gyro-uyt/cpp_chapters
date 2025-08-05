#include <iostream>
using namespace std;

// int fib(int x);
class fib{
    // int y= &n;
    int fib_series(int x);
    void print_series(void);
};

int main(){
    fib n;
    // cout<<"The "<<n<<" element fibo. series is: "<< n.fib_series() <<endl;
    n.fib_series();
    return 0;
}

void fib :: print_series(void){
    for (int i = 0; i < n; i++)
    {
        /* code */
    }
    
}

int fib :: fib_series(int x){
    int n;
    cout<<"Enter till which term you want fibo. series: ";
    // cout<<"Enter which term from starting you want of fibo. series: ";
    cin>> n;

    if (x == 1){
        return 0;
    }
    else if ( x == 2){
        return 1;
    }
    else if ( x == 3){
        return 1;
    }    
    return fib_series(x-1) + fib_series(x-2);
} 


    // for (int i = 1; i <= x; i++)
    // {
    //     if (i==1){
    //         return 0;
    //         break;
    //     }
    //     else if (i==2){
    //         return 1;
    //         break;
    //     }
    //     else if (i==3){
    //         return 1;
    //         break;
    //     }
    //     return fib(i-1)+fib(i-2);
    // }