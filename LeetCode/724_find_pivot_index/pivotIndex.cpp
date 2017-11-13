class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        if (nums.size() < 2)    return -1;
        int left = 0;
        int right = accumulate(nums.begin()+1, nums.end(), 0);
        for (int i = 0; i < nums.size(); i++) {
            if (left == right)  return i;
            left += nums[i];
            right -= nums[i+1];
        }
        return -1;
    }
};