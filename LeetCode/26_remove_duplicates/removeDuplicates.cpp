class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() == 0)   return 0;
        int fast = 1, slow = 0, count = 1;
        while (fast < nums.size()) {
            if (nums[slow] == nums[fast])
                fast++;
            else {
                slow++;
                count++;
                int tmp = nums[slow];
                nums[slow] = nums[fast];
                nums[fast] = tmp;
                fast++;
            }
        }
        return count;
    }
};

// 26. Remove Duplicates from Sorted Array