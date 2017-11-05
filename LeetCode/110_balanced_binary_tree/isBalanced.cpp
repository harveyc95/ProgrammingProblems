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
    bool isBalanced(TreeNode* root) {
        if (checkBalance(root) == -1)
            return false;
        else
            return true;
    }
    
    int checkBalance(TreeNode* root) {
        if (root == nullptr)
            return 0;
        int left = checkBalance(root->left);
        if (left == -1)
            return -1;
        int right = checkBalance(root->right);
        if (right == -1)
            return -1;
        int diff = abs(left - right);
        if (diff > 1)
            return -1;
        else
            return (1 + max(left,right));
    }
};
