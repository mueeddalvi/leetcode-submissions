class Solution {
public:
    int dp[501][501];
    int solve(string p, string q, int m, int n)
    {
          if(n==0)
          {
            return dp[m][n]=m;
          }
          if(m==0)
          {
            return dp[m][n]=n;
          }
        if(dp[m][n]!=-1)
            return dp[m][n];
        
          if(p[m-1]==q[n-1])
          {
            return dp[m][n]=solve(p,q,m-1,n-1);
          }
          else
          {
            int i=solve(p,q,m,n-1)+1;
            int r=solve(p,q,m-1,n-1)+1;
            int d=solve(p,q,m-1,n)+1;
            return dp[m][n]=min(i,min(d,r));
          }
    }
    int minDistance(string word1, string word2) {
        int m=word1.length(),n=word2.length();
        memset(dp,-1,sizeof(dp));
        //return solve(word1,word2,m,n);
        
        for(int i=0;i<m+1;i++)
        {
            dp[i][0]=i;
        }
        for(int j=0;j<n+1;j++)
        {
            dp[0][j]=j;
        }
        
        for(int i=1;i<m+1;i++)
        {
            for(int j=1;j<n+1;j++)
            {
                if(word1[i-1]==word2[j-1])
                    dp[i][j]=dp[i-1][j-1];
                else
                {
                    int x=dp[i][j-1]+1;
                    int y=dp[i-1][j-1]+1;
                    int z=dp[i-1][j]+1;
                    dp[i][j]=min(x,min(y,z));
                }
            }
        }
        return dp[m][n];
        
    }
};
