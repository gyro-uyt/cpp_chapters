#include <climits>
#include <list>
#include <unordered_map>
#include <utility>
#include <vector>
using namespace std;

class Solution {
public:
  vector<pair<pair<int, int>, int>>
  calculatePrimsMST(int n, int m, vector<pair<pair<int, int>, int>> &g) {

    // create adjancy list
    unordered_map<int, list<pair<int, int>>> adjancy;

    for (int i = 0; i < g.size(); i++) {
      int u = g[i].first.first;
      int v = g[i].first.second;
      int w = g[i].second;
      adjancy[u].push_back(make_pair(v, w));
      adjancy[v].push_back(make_pair(u, w));
    }

    /*
    Indexing (1-based vs 0-based confusion)
        You’re making vector<int> key(n+1); so expecting 1-based indexing.
        But if your graph has nodes labeled 0...n-1, this will break.
        → Be consistent: either all nodes from 1..n or all from 0..n-1.
    */
    vector<int> key(n + 1);
    vector<bool> mst(n + 1);
    vector<int> parent(n + 1);

    for (int i = 0; i <= n; i++) {
      key[i] = INT_MAX;
      parent[i] = -1;
      mst[i] = false;
    }

    // let's start algo
    key[1] = 0;
    parent[1] = -1;

    for (int i = 0; i < n; i++) {
      int mini = INT_MAX;
      int u = -1;
      // find min wali node
      for (int v = 1; v <= n; v++) {
        if (mst[v] == false && key[v] < mini) {
          u = v;
          mini = key[v];
        }
      }

      // mark min node as true
      mst[u] = true;

      // check its adjancy nodes
      for (auto it : adjancy[u]) {
        int v = it.first;
        int w = it.second;

        if (mst[v] == false && w < key[v]) {
          parent[v] = u;
          key[v] = w;
        }
      }
    }

    vector<pair<pair<int, int>, int>> result;
    for (int i = 2; i <= n; i++) {
      result.push_back({{parent[i], i}, key[i]});
    }
    return result;
  }
};