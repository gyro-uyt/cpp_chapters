#include <iostream>
using namespace std;
class X
{
public:
    int x,y;
};
int main(){
    X a={10};
    cout<<a.x<< " ";
    cout<<a.y<< " ";
    return 0;
}

// #include <iostream>
// using namespace std;
// class Point
// {
//     Point()
//     {
//         cout<<"Constructor called";
//     }
// };
// int main(){
//     Point t1;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// class Test
// {
//     public:
//     Test(){cout<<"Hello from Test()";}
// }a,b,c;
// int main(){
//     cout<<"Main started"<<endl;
//     return 0;
// }