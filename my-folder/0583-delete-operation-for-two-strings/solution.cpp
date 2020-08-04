class Solution {
public:
    int minDistance(string word1, string word2) {
        int n=word1.length();
        int m=word2.length();
        if(n==0 and m==0)
            return 0;
        if(n==0)
            return m;
        if(m==0)
            return n;
        
        int dp[n+1][m+1],i,j;
        
        for(i=0;i<n+1;i++)
            dp[i][0]=0;
        for(j=0;j<m+1;j++)
            dp[0][j]=0;
        
        for(i=1;i<n+1;i++)
        {
            for(j=1;j<m+1;j++)
            {
                if(word1[i-1]==word2[j-1])
                {
                    dp[i][j]=1+dp[i-1][j-1];
                }
                else
                {
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        
        int res=(word1.length()-dp[n][m])+(m-dp[n][m]);
        return res;
        
    }
};
