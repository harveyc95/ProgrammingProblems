class Solution(object):
    def checkValidString(self, s):
        lower = upper = 0
        for c in s:
            if c == '(':
                lower += 1
                upper += 1
            elif c == ')':
                lower -= 1
                upper -= 1
            else:
                lower -= 1
                upper += 1
                
            lower = max(0, lower)
            
            if upper < 0:
                return False
            
        return lower == 0
