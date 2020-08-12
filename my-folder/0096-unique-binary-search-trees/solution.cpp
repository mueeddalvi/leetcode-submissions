class Solution {
public:
    int numTrees(int n) {
        if(n<2)
            return 1;
        int dp[n+1];
        memset(dp,0,sizeof(dp));
        dp[0]=1;
        dp[1]=1;
        for(int level=2;level<=n;level++)
        {
            for(int root=1;root<=level;root++)
                dp[level]+= (dp[root-1]*dp[level-root]);
        }
        
        return dp[n];
        
    }
};
