#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  int minBitFlips(int start, int goal) {
    int x = start ^ goal; // no. of 1s in this will be different bits
    int count = 0;
    for (int i = 0; i < 32; i++)
      if (x & (1u << i))
        count++;

    return count;
  }
};