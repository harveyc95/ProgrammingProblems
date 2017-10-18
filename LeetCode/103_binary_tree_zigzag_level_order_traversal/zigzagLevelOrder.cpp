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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        std::vector<vector<int>> ans;
        if (root == nullptr)    return ans;
        bool leftToRight = true;    // used to alternate direction
        std::queue<TreeNode *> myq;
        myq.push(root);
        myq.push(nullptr);
        std::vector<int> currLevel;
        while (!myq.empty()) {
            TreeNode *n = myq.front();
            myq.pop();
            if (n == nullptr) {
                if (!leftToRight)   std::reverse(currLevel.begin(), currLevel.end());
                ans.push_back(currLevel);
                currLevel.clear();
                leftToRight = !leftToRight;
                if (myq.size() > 0) {
                    myq.push(nullptr);
                }
            } else {
                currLevel.push_back(n->val);
                if (n->left != nullptr)     myq.push(n->left);
                if (n->right != nullptr)    myq.push(n->right);
            }
        }
        return ans;
    }
};