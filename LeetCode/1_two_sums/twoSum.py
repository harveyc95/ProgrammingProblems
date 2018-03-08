class Solution(object):
    def twoSum(self, nums, target):
        dict = {}
        for idx, num in enumerate(nums):
            if (target - num in dict.keys()):
                return dict[target - num], idx
            dict[num] = idx
        return False

