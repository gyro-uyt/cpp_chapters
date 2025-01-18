#include <iostream>
using namespace std;

int main() {
  // int a, b;
  // cout << "Enter 2 integers to compare:" << endl;
  // cin >> a >> b;
  // (a > b) ? cout << ("print a > b") << endl : cout << ("print a < b") <<
  // endl;

  // int i, p=10;
  // cout<<sizeof(i)<<endl;
  // cout<<sizeof(p)<<endl;

  // struct Employee {

  //   int id;

  //   string name;

  // } emp1, *ptr;

  // Employee uday;
  // uday.id = 23;
  // uday.name = "heelo";
  // cout << uday.name << endl;
  // cout << uday.id << endl;

  struct Point {
    int x;
    int y;
  };
  Point pt = {10, 20};
  Point *ptr = &pt;
  cout << ptr-> x <<endl;

  return 0;
}