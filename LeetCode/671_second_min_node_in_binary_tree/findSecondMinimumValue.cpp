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
    int findSecondMinimumValue(TreeNode* root) {
        if (root == nullptr)    return -1;
        int smallest = root->val;
        int second = INT_MAX;
        std::queue<TreeNode*> q;
        q.push(root);
        while (!q.empty()) {
            TreeNode* tmp = q.front();
            q.pop();
            if (tmp->val < second && tmp->val != smallest)  second = tmp->val;
            if (tmp->left != nullptr)   q.push(tmp->left);
            if (tmp->right != nullptr)  q.push(tmp->right);
        }
        if (second != INT_MAX) return second;
        else return -1;
    }
};