class Solution {
public:
    bool isMatch(string s, string p) {
        int n=s.length(),m=p.length();
        //vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        int dp[n+1][m+1];
        memset(dp,0,sizeof(dp));
        dp[0][0]=1;
        for(int i=1;i<m+1;i++)
            dp[0][i]=dp[0][i-1] and p[i-1]=='*';
        for(int i=1;i<n+1;i++)
            dp[i][0]=0;
        
        for(int i=1;i<n+1;i++)
        {
            for(int j=1;j<m+1;j++)
            {
                if(s[i-1]==p[j-1] or p[j-1]=='?')
                    dp[i][j]=dp[i-1][j-1];
                else if(p[j-1]=='*')
                    dp[i][j]=dp[i-1][j] or dp[i][j-1];
            }
        }
        return dp[n][m];
        
    }
    
    int solve(string s, string p, int n, int m, vector<vector<int>>&dp)
    {
        if(n==-1 and m==-1)
            return 1;
        if(m==-1)
            return 0;
        if(n==-1)
            return p[0]=='*' and solve(s,p,n,m-1,dp);
        if(dp[n][m]!=-1)
            return dp[n][m];
        if(s[n-1]==p[m-1])
            return solve(s,p,n-1,m-1,dp);
        if(p[m-1]=='?')
            return solve(s,p,n-1,m-1,dp);
        if(p[m-1]=='*')
            return solve(s,p,n-1,m-1,dp) or solve(s,p,n-1,m,dp) or solve(s,p,n,m-1,dp);
        return 0;
    }
};
