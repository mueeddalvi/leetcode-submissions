class Solution {
public:
    string shortestCommonSupersequence(string str1, string str2) {
        int n=str1.length();
        int m=str2.length();
        if(n==0 and m==0)
            return "";
        if(n==0)
            return str2;
        if(m==0)
            return str1;
        
        int dp[n+1][m+1];
        int i,j;
        for(i=0;i<n+1;i++)
            dp[i][0]=0;
        for(j=0;j<m+1;j++)
            dp[0][j]=0;
        
        for(i=1;i<n+1;i++)
        {
            for(j=1;j<m+1;j++)
            {
                if(str1[i-1]==str2[j-1])
                    dp[i][j]=dp[i-1][j-1]+1;
                else
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
        
        string r="";
        for(i=n,j=m;i>0&&j>0;)
        {
            if(str1[i-1]==str2[j-1])
            {
                r+=str1[i-1];
                i--;
                j--;
            }
            else
            {
                if(dp[i-1][j]>dp[i][j-1])
                {
                    r+=str1[i-1];
                    i--;
                }
                else
                {
                    r+=str2[j-1];
                    j--;
                }
            }
        }
        cout<<m+n-dp[n][m];
        while(i>0)
        {
            r+=str1[i-1];
            i--;
        }
        while(j>0)
        {
            r+=str2[j-1];
            j--;
        }
        
        reverse(r.begin(),r.end());
        return r;
        
    }
};
