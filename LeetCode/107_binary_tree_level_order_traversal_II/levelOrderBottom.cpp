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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        std::vector<vector<int>> ans;
        if (root == nullptr)    return ans;
        std::queue<TreeNode*> myq;
        myq.push(root);
        while (!myq.empty()) {
            int count = myq.size();
            vector<int> currLevel;
            while (count > 0) {
                TreeNode* n = myq.front();
                myq.pop();
                currLevel.push_back(n->val);
                if (n->left != nullptr)     myq.push(n->left);
                if (n->right != nullptr)    myq.push(n->right);
                --count;
            }
            ans.push_back(currLevel);
        }
        
        std::reverse(ans.begin(), ans.end());
        return ans;
    }
};