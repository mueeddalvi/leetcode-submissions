class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        if(n==0 or n==1)
            return 0;
        int res=0,k=2,m=prices[0];
        int dp[k+1][n+1];
        memset(dp,0,sizeof(dp));
        int md=dp[0][0]-prices[0];
        
        for(int i=1;i<k+1;i++)
        {
            md=dp[i-1][0]-prices[0];
            for(int j=1;j<n;j++)
            {
                dp[i][j]=max(dp[i][j-1],prices[j]+md);
                md=max(md,dp[i-1][j]-prices[j]);
            }
        }
        return dp[k][n-1];
        
    }
};
