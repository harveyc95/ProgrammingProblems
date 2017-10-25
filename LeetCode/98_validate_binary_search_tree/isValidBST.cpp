/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool isValidBST(TreeNode* root) {
        std::stack<TreeNode*> s;
        TreeNode* prev = nullptr;
        while(root != nullptr || !s.empty()) {
            while (root != nullptr) {
                s.push(root);
                root = root->left;
            }
            root = s.top();
            s.pop();
            if (prev != nullptr && prev->val >= root->val)  return false;
            prev = root;
            root = root->right;
        }
        return true;
    }
};