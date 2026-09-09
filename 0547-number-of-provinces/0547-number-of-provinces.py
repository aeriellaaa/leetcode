class Solution(object):
    def findCircleNum(self, A):
        """
        :type isConnected: List[List[int]]
        :rtype: int
        """
        N=len(A)
        seen=set()
        def dfs(node):
            for nei,adj in enumerate(A[node]):
                if adj and nei not in seen:
                    seen.add(nei)
                    dfs(nei)

        ans=0
        for i in xrange(N):
            if i not in seen:
                dfs(i)
                ans+=1
        return ans        
        