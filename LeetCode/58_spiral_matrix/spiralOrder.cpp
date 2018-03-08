class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        if (matrix.size() == 0) return ans;
        int r_min = 0, r_max = matrix.size() - 1;
        int c_min = 0, c_max = matrix[0].size() - 1;
        int size = matrix.size() * matrix[0].size();
        int dir = 0, r = 0, c = 0;
        vector<int> r_dir = {0, 1, 0, -1};
        vector<int> c_dir = {1, 0, -1, 0};
        for (int i = 0; i < size; i++) {
            ans.push_back(matrix[r][c]);
            if ((c == c_max && dir == 0) || (r == r_max && dir == 1) || 
                (c == c_min && dir == 2) || (r == r_min && dir == 3)) {
                if (dir == 0) { r_min++; } 
                if (dir == 1) { c_max--; }
                if (dir == 2) { r_max--; }
                if (dir == 3) { c_min++; }
                dir = (++dir)%4;
            }
            r += r_dir[dir];
            c += c_dir[dir];
        }
        return ans;
    }
};