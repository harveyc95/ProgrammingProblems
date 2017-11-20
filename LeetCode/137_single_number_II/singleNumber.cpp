class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int, int> m;
        for (int i = 0; i < nums.size(); i++) {
            if (m.find(nums[i]) != m.end()) {
                if (m[nums[i]] == 2) {
                    m.erase(nums[i]);
                } else {
                    m[nums[i]] += 1;
                }
            } else {
                m[nums[i]] = 1;
            }
        }
        return m.begin()->first;
    }
};