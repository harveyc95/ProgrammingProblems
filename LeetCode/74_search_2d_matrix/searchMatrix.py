class Solution(object):
    def searchMatrix(self, matrix, target):
        if (len(matrix) == 0 or len(matrix[0]) == 0):   return False
        row = len(matrix)
        col = len(matrix[0])
        for r in range(row):
            if (matrix[r][0] <= target and target <= matrix[r][-1]):
                i = bisect.bisect_left(matrix[r][:], target)
                return (matrix[r][i] == target)
        return False

class Solution(object):
    def searchMatrix(self, matrix, target):
        if (len(matrix) == 0 or len(matrix[0]) == 0):   return False
        row = len(matrix)
        col = len(matrix[0])
        for r in range(row):
            if (matrix[r][0] <= target and target <= matrix[r][-1]):
                left = 0
                right = col-1
                while (left<=right):
                    m = (left+right)/2
                    if (matrix[r][m] == target):
                        return True
                    elif (matrix[r][m] < target):
                        left = m+1
                    else:
                        right = m-1
                return False
        return False

