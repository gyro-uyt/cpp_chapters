// Given an integer number n, return the difference between the product of its digits and the sum of its digits.
#include <iostream>
using namespace std;

class Solution {
  public:
    int subtractProductAndSum(int n) {
        int product = 1, sum = 0;
        while(n != 0) {
            int x = n % 10;
            product *= x;
            sum += x;
            n = n / 10;
        }
        return product - sum;
    }
};

int main() {

    Solution s1;
    cout << s1.subtractProductAndSum(4421) << endl;;

    return 0;
}