class Solution(object):
    def twoSum(self, numbers, target):
        """
        :type numbers: List[int]
        :type target: int
        :rtype: List[int]
        """
        l = 0
        r = len(numbers) - 1
        while (l < r):
            s = numbers[l] + numbers[r]
            if target == s:
                return l+1, r+1
            elif target < s:
                r -= 1
            else:
                l += 1
        assert(False)

