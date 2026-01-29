#include <iostream>
using namespace std;

int binaryToDecimal(string &b) {
    int ans = 0;
    int power = 1;
    for (int i =b.size()-1; i>=0; i--) {
        if (b[i]=='1') 
            ans+=power;
        power*=2;
    }
    return ans;
}

int main() {
  string a = "110";
  cout << binaryToDecimal(a) << endl;

  return 0;
}