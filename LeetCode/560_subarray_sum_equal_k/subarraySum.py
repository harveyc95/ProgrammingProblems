class Solution(object):
    def subarraySum(self, nums, k):
        total = count = 0
        d = {0:1}
        for num in nums:
            total += num
            count += d.get(total-k, 0)
            d[total] = d.get(total, 0) + 1
        return count
