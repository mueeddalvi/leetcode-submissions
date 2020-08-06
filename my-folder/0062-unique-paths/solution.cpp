class Solution {
public:
    int uniquePaths(int m, int n) {
        
        int dp[n][m]; //    rowXcolunm
        dp[0][0]=1;
        int i=0,j=0;
            
        for(;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(i>0 and j>0)
                    dp[i][j]=dp[i-1][j]+dp[i][j-1];
                else if(i>0)
                    dp[i][j]=dp[i-1][j];
                else if(j>0)
                    dp[i][j]=dp[i][j-1];
            }
        }
        
        return dp[n-1][m-1];

        
    }
};
