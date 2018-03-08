class Solution {
public:
    // one hash table
    // space complexity O(nums1.size())
    // time complexity O(num1.size() + nums2.size())
    vector<int> intersectHashTable(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> dict;
        vector<int> ans;
        for (int i = 0; i < nums1.size(); i++)
            dict[nums1[i]]++;
        for (int i = 0; i < nums2.size(); i++) {
            if (dict[nums2[i]] > 0) {
                dict[nums2[i]] -= 1;
                ans.push_back(nums2[i]);
            }
        }
        return ans;
    }
    
    // two pointers
    // space complexity O(1)
    // time complexity O(nums1.size() + nums2.size())
    
    vector<int> intersectTwoPointers(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        int l1 = nums1.size(), l2 = nums2.size();
        int i1 = 0, i2 = 0;
        vector<int> ans;
        while (i1 < l1 && i2 < l2) {
            if (nums1[i1] == nums2[i2]) {
                ans.push_back(nums1[i1]);
                i1++;
                i2++;
            } else if (nums1[i1] < nums2[i2]) {
                i1++;
            } else {
                i2++;
            }
        }
        return ans;
    }
    
};