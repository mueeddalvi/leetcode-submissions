class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int n=obstacleGrid.size();
        int m=obstacleGrid[0].size();
        
        int dp[n][m],i,j;
        memset(dp,0,sizeof(dp));
        dp[0][0]=1;
        
        if(n and m and obstacleGrid[0][0])
            return 0;
            
            
            
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(!obstacleGrid[i][j])
                {
                    if(i>0 and j>0)
                        dp[i][j]=dp[i-1][j]+dp[i][j-1];
                    else if(i>0)
                        dp[i][j]=dp[i-1][j];
                    else if(j>0)
                        dp[i][j]=dp[i][j-1];
                }
            }
        }
        
        return dp[n-1][m-1];
    }
};
