class Solution(object):
    def uniquePaths(self, m, n):
        row = m
        col = n
        grid = [[0 for c in range(col)] for r in range(row)]
        
        for c in range(col):  grid[0][c] = 1
        for r in range(row):  grid[r][0] = 1
            
        for r in range(1,row):
            for c in range(1,col):
                grid[r][c] = grid[r-1][c] + grid[r][c-1]
                
        return grid[-1][-1]

