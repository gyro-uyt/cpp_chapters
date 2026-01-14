#include <bits/stdc++.h>

using namespace std;

int main() {
  // ********** Pair **********

  pair<int, pair<int, int>> p = {1, {2, 3}};
  cout << p.first << " " << p.second.second;

  // ********** Vector (singly LinkedList) **********

  // creates a vector named 'v' containing 2 elements which are {100, 100}
  vector<int> v(2, 100);

  v.push_back(200);
  v.emplace_back(300); // similar to push_back but faster than it

  // creates an iterator pointing to the address of the first element
  vector<int>::iterator it = v.begin();
  // auto fills the above
  auto it2 = v.end();
  cout << *it << " " << *it2 << endl;
  cout << v.at(2) << endl;

  v.erase(v.begin() + 1, v.begin() + 3); // deletes the range supplied *address

  v.insert(v.begin(), 400);        // insert 400 at begining
  v.insert(v.begin() + 1, 4, 500); // insert 4 copies of 500 after begining

  // ********** List (doubly LinkedList) **********

  list<int> l(3, 100);
  // everything similar but push_front is present as it can be done in O(1) TC
  l.push_front(200);

  // ********** Deque **********
  // similar to vector and list
  deque<int> d(3, 100);

  // ********** Stack (LIFO) **********
  stack<int> stk;

  // ********** Queue (FIFO) **********
  queue<int> qu;

  // ********** Priority Queue **********
  priority_queue<int> pq;

  // ********** set (unique & sorted) **********
  set<int> st;

  // ********** multi-set (sorted) **********
  multiset<int> multst;

  // ********** unordered_set (unique) **********
  unordered_set<int> unodSet;

  // ********** map (key & value) **********
  map<int, int> mp;

  // ********** sort **********
  sort(v.begin(), v.begin() + 4);               // sorts in ascending order
  sort(v.begin(), v.begin() + 4, greater<int>); // sorts in descending order
  
  int cnt = __builtin_popcountll(4);
  
  string srs = "213";
  sort(srs.begin(), srs.end());
  
  do {
  cout<<srs<<" "; // prints all permutations possible only from supplied state, if given 213 only permutations after it will be given
  }while (next_permutation(srs.begin(),srs.end()));
  
  int maxx = *max_element(v.begin(),v.begin()+3);
}
