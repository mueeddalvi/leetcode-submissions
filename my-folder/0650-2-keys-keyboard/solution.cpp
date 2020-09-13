class Solution {
public:
    int minSteps(int n) {
        int dp[n+1];
        memset(dp,0,sizeof(dp));
        if(n==1)
            return 0;
        for(int i=2;i<=n;i++)
        {
            dp[i]=i;
            for(int j=i-1;j>1;j--)
            {
                if(i%j==0){
                    dp[i]=min(dp[j]+(i/j),dp[i]);
                    break;
                }
            }
        }
        return dp[n];
    }
};
