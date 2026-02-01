#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  // optimal solution
  int getSecondLargestOptimal(vector<int> &arr) {
    if (arr.size() < 2)
      return -1;

    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for (int num : arr) {
      if (num > largest) {
        secondLargest = largest;    // if there's a num > largest then that num is the Largest and the old largest becomes second Largest
        largest = num;
      } else if (num > secondLargest && num != largest) {
        secondLargest = num;
      }
    }

    return (secondLargest == INT_MIN) ? -1 : secondLargest;
  }

  // my approach
  int getSecondLargest(vector<int> &arr) {
    int largest = INT_MIN;
    int smallest = INT_MAX;

    for (int i = 0; i < arr.size(); i++) {
      if (arr[i] > largest)
        largest = arr[i];
      if (arr[i] < smallest)
        smallest = arr[i];
    }

    int sLargest = INT_MIN;

    for (int i = 0; i < arr.size(); i++)
      if (arr[i] > sLargest && largest > arr[i])
        sLargest = arr[i];

    if (largest == smallest)
      return -1;
    else
      return sLargest;
  }
};
