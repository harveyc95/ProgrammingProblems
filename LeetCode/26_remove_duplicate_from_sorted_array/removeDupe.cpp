// time complexity - O(n)
// space complexity - O(1)

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0;
        int writing = 1;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[writing-1] != nums[i]) {
                nums[writing++] = nums[i];
            }
        }
        return writing;
    }
};