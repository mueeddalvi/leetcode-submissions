class Solution {
public:
    int findLength(vector<int>& A, vector<int>& B) {
        
        int n=A.size(),m=B.size();
        
        int dp[n+1][m+1];
        memset(dp,0,sizeof(dp));
        
        for(int i=1;i<n+1;i++)
        {
            for(int j=1;j<m+1;j++)
            {
                if(A[i-1]==B[j-1])
                {
                    dp[i][j]=dp[i-1][j-1]+1;
                }
                else
                    dp[i][j]=0;
            }
        }
        
        int ml=INT_MIN;
        for(int i=0;i<n+1;i++)
            for(int j=0;j<m+1;j++)
                ml=max(ml,dp[i][j]);
        return ml;
        
    }
};
