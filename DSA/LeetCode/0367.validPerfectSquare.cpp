#include <iostream>
using namespace std;

class Solution {
  public:
    bool isPerfectSquare(int num) {

        if(num == 1 || num == 0)
            return true;

        for(int i = 1; i <= num / i; i++) {
            if(i * i == num) {
                return true;
            }
        }
        return false;
    }
};

int main() {

    Solution s1;
    cout << s1.isPerfectSquare(154) << endl;
    cout << s1.isPerfectSquare(1) << endl;
    
    cout << s1.isPerfectSquare(46341 ) << endl;

    return 0;
}