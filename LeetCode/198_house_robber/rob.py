class Solution(object):
    def rob(self, nums):
        even_sum = 0
        odd_sum = 0
        
        for i in xrange(len(nums)):
            if i%2 == 0:
                even_sum = max(even_sum + nums[i], odd_sum)
            else:
                odd_sum = max(even_sum, odd_sum + nums[i])
        
        return max(even_sum, odd_sum)
    
