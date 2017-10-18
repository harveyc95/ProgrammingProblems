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
    vector<vector<int>> levelOrder(TreeNode* root) {
        std::vector<vector<int>> ans;
        std::vector<int> curr_level;
        std::queue<TreeNode*> myq;
        if (root == nullptr)    return ans;
        myq.push(root);
        myq.push(nullptr);
        while(!myq.empty()) {
            TreeNode* node = myq.front();
            myq.pop();
            if (node == nullptr) { // end of level, copy level into ans
                ans.push_back(curr_level);
                curr_level.clear();
                if (myq.size() > 0)
                    myq.push(nullptr);
            }
            else {
                curr_level.push_back(node->val);
                if (node->left != nullptr)  myq.push(node->left);
                if (node->right != nullptr) myq.push(node->right);
            }
        }
        return ans;
    }
};