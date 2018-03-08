class Solution(object):
    def uniquePathsWithObstacles(self, obstacleGrid):
        row = len(obstacleGrid)
        col = len(obstacleGrid[0])
        
        grid = [[0 for c in range(col)] for r in range(row)]
        
        for c in range(col):
            if (obstacleGrid[0][c] == 0):
                grid[0][c] = 1
            else:   break
        
        for r in range(row):
            if (obstacleGrid[r][0] == 0):
                grid[r][0] = 1
            else:   break
        
        for r in range(1, row):
            for c in range(1, col):
                if (obstacleGrid[r][c] == 0):
                    if(obstacleGrid[r-1][c] == 0):  grid[r][c] += grid[r-1][c]
                    if(obstacleGrid[r][c-1] == 0):  grid[r][c] += grid[r][c-1]
        
        return grid[-1][-1]

