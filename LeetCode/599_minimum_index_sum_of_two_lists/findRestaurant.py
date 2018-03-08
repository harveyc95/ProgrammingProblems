class Solution(object):
    def findRestaurant(self, list1, list2):
        dict1 = {rest:idx for idx, rest in enumerate(list1)}
        print dict1
        ans = []
        minSum = 3000
        for idx, rest in enumerate(list2):
            if rest in dict1:
                curSum = dict1[rest] + idx
                if curSum == minSum:
                    ans.append(rest)
                elif curSum < minSum:
                    del ans[:]
                    ans.append(rest)
                    minSum = curSum
        
        return ans
