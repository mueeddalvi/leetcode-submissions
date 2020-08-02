class Solution {
public:
    int change(int amount, vector<int>& coins) {
        
        if(amount==0 and coins.size()==0)
            return 1;

        if(coins.size()==0)
            return 0;
        
        int n=coins.size(),i,j;
        int dp[n+1][amount+1];
        
        for(i=0;i<n+1;i++)
            dp[i][0]=1;
        for(j=0;j<amount+1;j++)
            dp[0][j]=0;
        dp[0][0]=1;
        
        for(int i=1;i<n+1;i++)
        {
            for(j=1;j<amount+1;j++)
            {
                if(coins[i-1]<=j)
                {
                    dp[i][j]=dp[i][j-coins[i-1]] + dp[i-1][j];
                }
                else
                {
                    dp[i][j]=dp[i-1][j];
                }
            }
        }
        
        
        return dp[n][amount];
            
        
    }
};
