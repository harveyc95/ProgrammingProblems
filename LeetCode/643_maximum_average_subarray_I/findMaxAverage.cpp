class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double maxAvg = INT_MIN, tmp = 0;
        for (int start = nums.size() - k; start >= 0; start--) {
            tmp = 0;
            for (int i = 0; i < k; i++) {
                tmp += nums[start+i];
            }
            maxAvg = max(maxAvg, (double)tmp/k);
        }
        return maxAvg;
    }
};