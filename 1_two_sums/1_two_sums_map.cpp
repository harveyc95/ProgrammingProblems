// time complexity O(n)
// space complexity O(n)

#include <map>

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        std::map<int,int> my_map;
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            if (my_map.find(complement) != my_map.end()) {
                ans.push_back(my_map[complement]);
                ans.push_back(i);
                return ans;
            }
            my_map[nums[i]] = i;
        }
    }
};