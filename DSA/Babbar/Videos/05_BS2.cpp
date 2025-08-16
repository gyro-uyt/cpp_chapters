// Questions on BS

/*
Q.1  First and Last Position of an Element In Sorted Array (CodingNinja)

    Problem statement
        You have been given a sorted array/list 'arr' consisting of ‘n’
elements. You are also given an integer ‘k’. Now, your task is to find the first
and last occurrence of ‘k’ in 'arr'.

    Note :
        1. If ‘k’ is not present in the array, then the first and the last
occurrence will be -1.
        2. 'arr' may contain duplicate elements.

    Example:
        Input: 'arr' = [0,1,1,5] , 'k' = 1
        Output: 1 2
        Explanation:
        If 'arr' = [0, 1, 1, 5] and 'k' = 1, then the first and last
        occurrence of 1 will be 1(0 - indexed) and 2.
*/
#include <iostream>
#include <utility>
#include <vector>
using namespace std;

pair<int, int> firstAndLastPosition(vector<int> &arr, int size, int target) {
  // Write your code here
  int left = 0, right = size - 1;
  int middle = left + (right - left) / 2;
  pair<int, int> indices = {0, 0};

  while (left <= right) {
    middle = left + (right - left) / 2;
    if (arr[middle] == target) {
      indices.first = middle;
    } else if (arr[middle] < target) {
      left = middle + 1;
    } else {
      right = middle - 1;
    }
  }
  return {indices.first, indices.second};
}

int main() {

  vector<int> arr = {0, 0, 1, 1, 2, 2, 2, 2};
    // pair<int, int> pairs = ;


  return 0;
}