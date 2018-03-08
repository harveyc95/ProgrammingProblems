class Solution(object):
    def findMaxConsecutiveOnes(self, nums):
        ans = 0
        curr = 0
        for i in nums:
            if (i):
                curr += 1
            else:
                ans = max(ans,curr)
                curr = 0
        return max(ans,curr)

