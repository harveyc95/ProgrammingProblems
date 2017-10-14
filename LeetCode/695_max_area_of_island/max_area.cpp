#define LOOP(x,start,end) for(int x=start; x<end; ++x)

class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int maxArea = 0;
        LOOP(i, 0, grid.size()) {
            LOOP(j, 0, grid[0].size()) {
                if (grid[i][j] == 1) {
                    grid[i][j] = 2; // 2 means taken
                    maxArea = max(maxArea, BFS(grid, i, j));
                }
            }
        }
        return maxArea;
    }
    
    int BFS(vector<vector<int>>& grid, int row, int col) {
        int m = grid.size(), n = grid[0].size(), area = 1;
        std::priority_queue<std::pair<int,int>> myq;
        myq.push({row, col});
        vector<int> dir = {-1, 0, 1, 0, -1};
        while(!myq.empty()) {
            int curr_row = myq.top().first, curr_col = myq.top().second;
            myq.pop();
            LOOP(i, 0, 4) {
                int r = curr_row + dir[i], c = curr_col + dir[i+1];
                if (r >= 0 && r < m && c >= 0 && c < n && grid[r][c] == 1) {
                    myq.push({r, c});
                    grid[r][c] = 2;
                    ++area;
                }
            }
        }
        return area;
    }
};