// time complexity O(n)
// space complexity O(1)

class Solution {
public:
    int maxArea(vector<int>& height) {
        int left, right, max_area;
        left = 0;
        right = height.size() - 1;
        while (l > r) {
            max_area = min(height[left], height[right]) * (right - left);
            
        }
        return max_area;
    }
};