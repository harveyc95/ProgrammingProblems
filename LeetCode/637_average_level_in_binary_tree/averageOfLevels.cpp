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
    vector<double> averageOfLevels(TreeNode* root) {
        std::vector<double> ans;
        if (root == nullptr)    return ans;
        std::queue<TreeNode*> myq;
        myq.push(root);
        while (!myq.empty()) {
            double currSum = 0;
            int count = myq.size();
            for (int i=0; i<count; i++) {
                TreeNode* n = myq.front();
                myq.pop();
                currSum += n->val;
                if (n->left != nullptr)     myq.push(n->left);
                if (n->right != nullptr)    myq.push(n->right);
            }
            ans.push_back((double)currSum/count);
        }
        return ans;        
    }
};