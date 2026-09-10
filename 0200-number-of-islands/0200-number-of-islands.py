class Solution(object):
    def numIslands(self, grid):
        """
        :type grid: List[List[str]]
        :rtype: int
        """
        count = 0
        rows = len(grid)
        cols = len(grid[0])
        visited = [[False]*cols for _ in range(rows)]
        def dfs(row,col):
            visited[row][col]=True
            new_row,new_col = row+1,col
            if new_row >=0 and new_row < rows and new_col >=0 and new_col < cols and grid[new_row][new_col]=='1'and not visited[new_row][new_col]:
                dfs(new_row,new_col)
            new_row,new_col =row-1,col
            if new_row >=0 and new_row < rows and new_col >=0 and new_col < cols and grid[new_row][new_col]=='1'and not visited[new_row][new_col]:
                dfs(new_row,new_col)
            new_row,new_col = row,col-1
            if new_row >=0 and new_row < rows and new_col >=0 and new_col < cols and grid[new_row][new_col]=='1'and not visited[new_row][new_col]:
                dfs(new_row,new_col)
            new_row,new_col = row,col+1
            if new_row >=0 and new_row < rows and new_col >=0 and new_col < cols and grid[new_row][new_col]=='1'and not visited[new_row][new_col]:
                dfs(new_row,new_col)
        for r in range(rows):
            for c in range(cols):
                if grid[r][c] == '1' and  not visited[r][c]:
                    count+=1
                    dfs(r,c)
        return count



        