#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode() : val(0), left(nullptr), right(nullptr) {}
  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
  TreeNode(int x, TreeNode *left, TreeNode *right)
      : val(x), left(left), right(right) {}
};

class Solution {
public:
  // Recursion
  bool isSameTree0(TreeNode *p, TreeNode *q) {
    if (!p && !q) // !p means p is nullptr and p means it is ptr
      return true;
    if (!p || !q)
      return false;
    // if (p==nullptr&&q==nullptr) return true;
    // if (p==nullptr||q==nullptr) return false;
    if (p->val != q->val)
      return false;

    return (isSameTree0(p->left, q->left) && isSameTree0(p->right, q->right));
  }

  // bfs
  bool isSameTree(TreeNode *p, TreeNode *q) {
    queue<TreeNode *> qp, qq;
    qp.push(p);
    qq.push(q);

    while (!qp.empty() && !qq.empty()) {
      TreeNode *a = qp.front();
      qp.pop();
      TreeNode *b = qq.front();
      qq.pop();

      if (!a && !b)
        continue;
      if (!a || !b)
        return false;
      if (a->val != b->val)
        return false;

      qp.push(a->left);
      qp.push(a->right);
      qq.push(b->left);
      qq.push(b->right);
    }
    return true;
  }
};
