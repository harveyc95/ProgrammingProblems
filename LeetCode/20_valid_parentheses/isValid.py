class Solution(object):
    def isValid(self, s):
        stack = []
        dict = {"}":"{", "]":"[", ")":"("}
        for c in s:
            if c in dict.values():
                stack.append(c)
            elif c in dict.keys():
                if (stack == [] or dict[c] != stack.pop()):
                    return False
            else:
                return False
        return (stack == [])

