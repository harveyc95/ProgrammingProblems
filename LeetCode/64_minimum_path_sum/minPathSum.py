class Solution(object):
    def minPathSum(self, grid):
        row = len(grid)
        col = len(grid[0])

        for c in range(1,col):  grid[0][c] += grid[0][c-1]
        for r in range(1,row):  grid[r][0] += grid[r-1][0]
            
        for r in range(1,row):
            for c in range(1, col):
                grid[r][c] += min(grid[r][c-1], grid[r-1][c])
        
        return grid[-1][-1]

