class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> ans;
        if (n == 0) return ans;
        for (int i = 0; i < n; i++) {
            vector<int> v (n, 0);
            ans.push_back(v);
        }
        int r_min = 0, r_max = n - 1;
        int c_min = 0, c_max = n - 1;
        int size = n*n;
        int dir = 0, r = 0, c = 0;
        vector<int> r_dir = {0, 1, 0, -1};
        vector<int> c_dir = {1, 0, -1, 0};
        for (int i = 1; i <= size; i++) {
            ans[r][c] = i;
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