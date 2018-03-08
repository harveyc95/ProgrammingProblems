class Solution(object):
    def findCircleNum(self, M):

        def dfs(node):
            visited.add(node)
            for person, is_friend in enumerate(M[node]):
                if is_friend and person not in visited:
                    dfs(person)
        
        circle = 0
        visited = set()
        
        for node in range(len(M)):
            if node not in visited:
                circle += 1
                dfs(node)
        return circle
