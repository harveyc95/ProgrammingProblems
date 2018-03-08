class Solution(object):
    def judgeCircle(self, moves):
        horizontal = moves.count("U") - moves.count("D")
        vertical = moves.count("L") - moves.count("R")
        return not horizontal and not vertical
