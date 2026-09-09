class Solution(object):
    def findCircleNum(self, isConnected):
        """
        :type isConnected: List[List[int]]
        :rtype: int
        """
        n = len(isConnected)
        visited = [False]*n
        province = 0
        def dfs(city):
            visited[city]=True
            for neighbour in range(n):
                if(isConnected[city][neighbour]==1 and visited[neighbour]==0):
                    dfs(neighbour)
        for city in range(n):
            if visited[city]!=1:
                province += 1
                dfs(city)
        return province
        