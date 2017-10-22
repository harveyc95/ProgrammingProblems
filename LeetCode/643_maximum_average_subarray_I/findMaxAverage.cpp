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
    double findMaxAverage(vector<int>& nums, int k) {
        double window;
        for (int i = 0; i < k; i++) window += nums[i];

        double tmp = window;
        for (int i = 1; i <= nums.size() - k; i++) {
            std::cout<<nums[i-1]<<":"<<nums[i+k-1]<<":"<<tmp<<endl;
            tmp = nums[i+k-1] - nums[i-1] + window;
            window = max(tmp, window);
        }   
        return (double)window/k;
    }
};