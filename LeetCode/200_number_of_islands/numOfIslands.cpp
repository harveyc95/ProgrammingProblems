#define LOOP(x,start,end) for(int x=start; x<end; ++x)


class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int islandCount = 0;
        LOOP(i, 0, grid.size()) {
            LOOP(j, 0, grid[0].size()) {
                if (grid[i][j] == '1') {
                    BFS(grid, i, j);
                    ++islandCount;
                }
            }
        }
        return islandCount;
    }
    
    void BFS(vector<vector<char>>& grid, int x, int y) {
        int m = grid.size(), n = grid[0].size();
        grid[x][y] = 0;
        std::priority_queue<std::pair<int,int>> myq;
        myq.push({x,y});
        vector<int> dir = {-1,0,1,0,-1};
        while (!myq.empty()) {
            int a = myq.top().first, b = myq.top().second;
            myq.pop();
            LOOP(i, 0, 4) {
                int r = a + dir[i], c = b + dir[i+1];
                if (r >= 0 && r < m && c >= 0 && c < n && grid[r][c] == '1') {
                    grid[r][c] = '0';
                    myq.push({r, c});
                }
            }
        }
        return;
    }
};