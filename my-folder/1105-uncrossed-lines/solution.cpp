class Solution {
public:
    int dp[501][501];
    int solve(vector<int>&a, vector<int>&b, int m, int n)
    {
        if(m==0 or n==0)
            return 0;
        if(dp[m][n]!=-1)
            return dp[m][n];
        else if(a[m-1]==b[n-1])
            return dp[m][n]= 1+solve(a,b,m-1,n-1);
        else
            return dp[m][n]= max(solve(a,b,m-1,n), solve(a,b,m,n-1));
    }
    int maxUncrossedLines(vector<int>& a, vector<int>& b) {
        int m=a.size(),n=b.size();
        memset(dp,-1,sizeof(dp));
        return solve(a,b,m,n);
    }
};
