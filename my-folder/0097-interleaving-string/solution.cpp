class Solution {
public:
    int dp[101][101];
    bool solve(string s1,string s2, string s3, int m, int n, int p)
    {
          if(m==0 and n==0)
          {
            if(p==0)
                return true;
            else
                return false;
          }
          if(dp[m][n]!=-1)
            return dp[m][n];
          if(m==0)
          {
            if(s2[n-1]==s3[p-1])
                return dp[0][n]=solve(s1,s2,s3,m,n-1,p-1);
            else
                return dp[0][n]=false;
          }
          if(n==0)
          {
            if(s1[m-1]==s3[p-1])
                return dp[m][0]=solve(s1,s2,s3,m-1,n,p-1);
            else
                return dp[m][0]=false;
          }
          if(s1[m-1]==s3[p-1] and s2[n-1]==s3[p-1])
            return dp[m][n]=solve(s1,s2,s3,m-1,n,p-1) or solve(s1,s2,s3,m,n-1,p-1);
          if(s1[m-1]==s3[p-1])
            return dp[m][n]=solve(s1,s2,s3,m-1,n,p-1);
          else if(s2[n-1]==s3[p-1])
            return dp[m][n]=solve(s1,s2,s3,m,n-1,p-1);
          else
            return dp[m][n]=false;
    }
    bool isInterleave(string s1, string s2, string s3) {
        int m=s1.length(),n=s2.length(),p=s3.length();
        if(m+n!=p)
            return false;
        memset(dp,-1,sizeof(dp));
        // return solve(s1,s2,s3,m,n,p);
        
        bool dp[m+1][n+1];
        memset(dp,0,sizeof(dp));
        dp[0][0]=true;
        
        for(int i=1;i<n+1;i++)
        {
            if(s2[i-1]==s3[i-1])
                dp[0][i]=dp[0][i-1];
            else
                dp[0][i]=false;
        }
        for(int i=1;i<m+1;i++)
        {
            if(s1[i-1]==s3[i-1])
                dp[i][0]=dp[i-1][0];
            else
                dp[i][0]=false;
        }
        for(int  i=1;i<m+1;i++)
        {
            for(int j=1;j<n+1;j++)
            {
                p=i+j;
                if(s1[i-1]==s3[p-1] and s2[j-1]==s3[p-1])
                    dp[i][j]=dp[i-1][j] or dp[i][j-1];
                else if(s1[i-1]==s3[p-1])
                    dp[i][j]=dp[i-1][j];
                else if(s2[j-1]==s3[p-1])
                    dp[i][j]=dp[i][j-1];              
            }
        }
         return dp[m][n];
        
    }
};
