class Solution {
public:
    int findLongestChain(vector<vector<int>>& pairs) {
        int n=pairs.size(),res=0;
        if(n==0)
            return res;
        int dp[n];
        memset(dp,0,sizeof(dp));
        
        for(int i=0;i<n;i++)
            dp[i]=1;
        sort(pairs.begin(),pairs.end());
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                if(pairs[j][1]<pairs[i][0])
                {
                    dp[i]=max(dp[j]+1,dp[i]);
                }
            }
            res=max(res,dp[i]);
        }
        return res;
        
    }
};
