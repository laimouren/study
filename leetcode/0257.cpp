#include <vector>
using std::vector;
#include <string>
using std::string;

struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
 
class Solution {
public:
    vector<string> binaryTreePaths(TreeNode* root) {

        string tmp;
        backTrack(root, tmp);
        return res;
    }
    void backTrack(TreeNode* node, string tmp) {
        if (node == nullptr) {
            return;
        }
        
        if (!tmp.empty()) {
            tmp += "->";
        }
        tmp += std::to_string(node->val);
        if (node->left == nullptr && node->right == nullptr) {
            res.emplace_back(tmp);
            return;
        }
        if (node->left != nullptr) {
            backTrack(node->left, tmp);
        }
        if (node->right != nullptr) {
            backTrack(node->right, tmp);
        }

    }
private:
    vector<string> res;
};