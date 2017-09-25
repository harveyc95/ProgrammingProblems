// time complexity O(n^2)
// space compleixty O(1)

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        if (nums.size()<2)
            return false;
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[i] + nums[j] == target) {
                    ans.push_back(i);https://leetcode.com/articles/two-sum/
                    ans.push_back(j);
                    return ans;
                }
            }
        }
    }
};
