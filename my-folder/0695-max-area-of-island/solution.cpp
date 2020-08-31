class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int r=grid.size();
        int c=grid[0].size();
        int ans=0;
        
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(grid[i][j])
                {
                    ans=max(ans,area(i,j,grid));
                }
            }
        }
        return ans;
    }
    int area(int r, int c, vector<vector<int>>& grid)
    {
        if(r>=0 and r<grid.size() and c>=0 and c<grid[0].size() and grid[r][c]==1)
        {
            grid[r][c]=0;
            return 1+ area(r+1,c,grid)+ area(r-1,c,grid)+ area(r,c+1,grid)+
                area(r,c-1,grid);
        }
        return 0;
    }
};
