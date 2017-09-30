#include <algorithm>

// time complexity O(N^2)
// space complexity O(1)

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int length = matrix.size();
        for (int layer = 0; layer < length/2; layer++) {
            int first = layer;
            int last = length - layer - 1;
            for (int i = first; i < last; i++) {
                int offset = i - first;

                // swap top and right
                swap(matrix[first][i], matrix[i][last]);
                // swap left and bot
                swap(matrix[last-offset][first], matrix[last][last-offset]);
                // swap top and bot
                swap(matrix[first][i], matrix[last][last-offset]);
                
                // //save top
                // int top = matrix[first][i];
                
                // // top = left
                // matrix[first][i] = matrix[last-offset][first];
                
                // // left = bot
                // matrix[last-offset][first] = matrix[last][last-offset];
                
                // // bot = right
                // matrix[last][last-offset] = matrix[i][last];
                
                // // right = top
                // matrix[i][last] = top;
                
            }
        }
    }
};