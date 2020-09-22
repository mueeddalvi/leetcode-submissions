class Solution {
public:
    int numSquares(int n) {
        
        if(n==0 or n==1)
            return n;
        vector<int>dp(n+1,0);
        
        for(int i=1;i<=n;i++)
        {
            int min_val=i,sq=1,y=1;
            while(sq<=i)
            {
                min_val=min(min_val,dp[i-sq]+1);
                y++;
                sq=y*y;
            }
            dp[i]=min_val;
        }
        return dp[n];
    }
};
