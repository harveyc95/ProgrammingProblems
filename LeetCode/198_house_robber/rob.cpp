class Solution {
public:
    int rob(vector<int>& nums) {
        if (nums.size() == 0)   return 0;
        if (nums.size() == 1)   return nums[0];
        std::vector<int> dp (nums.size(), 0);
        dp[0] = nums[0];
        dp[1] = nums[1];
        if (nums.size() == 2)   return max(dp[0], dp[1]);
        int maxMoney = max(dp[0], dp[1]);
        int maxBefore = 0;
        for (int i = 2; i < nums.size(); i++) {
            maxBefore = max(maxBefore, dp[i-2]);
            maxMoney = max(nums[i]+maxBefore,dp[i-1]);
            dp[i] = maxMoney;
        }
        return maxMoney;
    }
};