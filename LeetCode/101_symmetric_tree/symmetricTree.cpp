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
    bool isSymmetricBFS(TreeNode* root) {
        if (root == nullptr)    return true;
        std::queue<TreeNode*> q1, q2;
        q1.push(root->left);
        q2.push(root->right);
        while (!q1.empty() && !q2.empty()) {
            TreeNode *n1 = q1.front(), *n2 = q2.front();
            q1.pop();
            q2.pop();
            if (n1 == nullptr && n2 == nullptr)
                continue;
            if (n1 == nullptr || n2 == nullptr)
                return false;
            if (n1->val != n2->val)
                return false;
            q1.push(n1->left);
            q1.push(n1->right);
            q2.push(n2->right);
            q2.push(n2->left);
        }
        return true;
    }
    bool isSymmetric(TreeNode* root) {
        return DFS(root, root);
    }
    
    bool DFS(TreeNode* a, TreeNode* b) {
        if (a == nullptr && b == nullptr)
            return true;
        if (a == nullptr || b == nullptr)
            return false;
        if (a->val != b->val)
            return false;
        return DFS(a->left, b->right) && DFS(a->right, b->left);
    }
};