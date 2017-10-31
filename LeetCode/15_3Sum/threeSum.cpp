class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        std::vector<vector<int>> triplet;
        std::vector<int> tmp;
        std::sort(nums.begin(), nums.end());
        int left, right, target, n = nums.size();
        for (int i = 0; i < n; i++) {
            // skip duplicates
            if (i > 0 && nums[i] == nums[i-1])  continue;
            
            // scan from nums[i+1:n-1] to see if nums[i] + nums[j] + nums[k] = 0
            int left = i+1, right = n-1, target = -nums[i];
            while (left < right) {
                if (nums[i] + nums[left] + nums[right] > 0)        right--;
                else if (nums[i] + nums[left] + nums[right] < 0)   left++;
                else { // nums[i] + nums[j] + nums[k] == 0
                    tmp.push_back(nums[i]);
                    tmp.push_back(nums[left]);
                    tmp.push_back(nums[right]);
                    triplet.push_back(tmp);
                    tmp.clear();
                    while (left < right && nums[right] == nums[right-1])    right--;
                    while (left < right && nums[left] == nums[left+1])      left++;
                    right--;
                    left++;
                }
            }
        }
        return triplet;
    }
};