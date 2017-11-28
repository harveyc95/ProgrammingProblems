class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int end = nums.size() - 1;
        int ans = 0;
        while (ans <= end) {
            if (nums[ans] == val)   nums[ans] = nums[end--];
            else                    ans++;
        }
        return ans;
    }
};