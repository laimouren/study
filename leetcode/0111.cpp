#include <algorithm>
using std::min;
class Solution {
public:
    int minDepth(TreeNode* root) {
        if (root == nullptr) {
            return 0;
        }
        return helper(root);
    }
    int helper(TreeNode* node) {
        if (node->left == nullptr) {
            return 1 + (node->right == nullptr ? 0 : helper(node->right));
        }
        if (node->right == nullptr) {
            return 1 + helper(node->left);
        }
        return 1 + (min(helper(node->left), helper(node->right)));
    }
};
  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };