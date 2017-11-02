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
    int kthSmallestIterative(TreeNode* root, int k) {
        std::stack<TreeNode*> s;
        TreeNode* curr = root;
        while (!s.empty() || curr) {
            if (curr) {
                s.push(curr);
                curr = curr->left;
            } else {
                curr = s.top();
                s.pop();
                k--;
                std::cout<<curr->val<<" : "<<k<<std::endl;
                if (k == 0) return curr->val;
                curr = curr->right;
            }
        }
    }

    int count = 0;
    int result = INT_MAX;
    
    int kthSmallestRecurse(TreeNode* root, int k) {
        inOrder(root, k);
        return result;
    }
    
    void inOrder(TreeNode* root, int k) {
        if (!root)  return;
        inOrder(root->left, k);
        count++;
        if (count == k) {
            result = root->val;
            return;
        }
        inOrder(root->right, k);
        return;
    }
};