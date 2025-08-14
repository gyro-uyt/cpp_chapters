#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
  vector<int> plusOne(vector<int> &digits) {
    for (int i = digits.size() - 1; i >= 0; i--) {
      if (digits[i] < 9) {
        digits[i]++;
        return digits;
      }
      digits[i] = 0;
    }
    digits.insert(digits.begin(), 1);
    return digits;
  }

  void print(vector<int> &digits) {
    cout << "vector: ";
    for (int i = 0; i < digits.size(); i++) {
      cout << digits[i] << " ";
    }
    cout << endl;
  }
};

int main() {
  cout << "Plus One\nInput: digits = [1,2,3]\nOutput: [1,2,4]" << endl;

  Solution s1;
  vector<int> arr = {9};
  s1.print(arr);
  s1.plusOne(arr);
  s1.print(arr);

  return 0;
}

// int size = digits.size();

// int countConsecutive9s = 0;
// for (int i = 0; i < digits.size() - 1; i++) {
//   if (digits[size - 1 - i] == 9 && digits[size - 1 - i - 1] == 9) {
//     countConsecutive9s++;
//   }
// }
// cout << "No. of consecutive 9s: " << countConsecutive9s << endl;

// if (digits[size - 1] == 9) {
//   if (countConsecutive9s != 0) {
//     // Extra digit needed (1+9)
//     // [1, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9,]
//     // need to find how many 9s there are?
//     // digits[size - 1] = 1;
//     for (int i = 0; i < countConsecutive9s; i++) {
//       digits[size - 1 - i] = 0;
//     }
//     digits[size - 1 - countConsecutive9s - 1] += 1;
//     digits.push_back(0);
//   } else {
//     // cases where Nine
//     if (digits.size() == 1) {
//       digits[0] = 1;
//       digits.push_back(0);
//     } else {
//       digits[size - 1] = 0;
//       digits[size - 2] += 1;
//     }
//   }
// } else {
//   // normal cases
//   digits[size - 1] += 1;
// }