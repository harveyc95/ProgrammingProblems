// time complexity O(n)
// space complexity O(1)

class Solution {
public:
    int maxArea(vector<int>& height) {
        int left, right, max_area = -1;
        left = 0;
        right = height.size()-1;
        while (left < right) {
            max_area = max(max_area, (min(height[left], height[right]) * (right - left)));
            if (height[right] < height[left]) {
                right--;
            } else {
                left++;
            }
        }
        return max_area;
    }
};


