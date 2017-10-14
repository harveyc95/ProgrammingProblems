// time complexity - O(n)
// space complexity - O(1)

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0;
        if (nums.size() == 1) return 1;
        int size = nums.size();
        int i = 1;
        int last = nums[0];
        while (i < size) {
            if (last == nums[i]) {
                nums.erase(nums.begin() + i);
                size--;
            } else {
                last = nums[i];
                i++;
            }
        }
        return i;
    }
};