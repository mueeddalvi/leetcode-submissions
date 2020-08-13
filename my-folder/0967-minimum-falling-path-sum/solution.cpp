class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& A) {
	
	int r=A.size();
	int c=A[0].size();
	int dp[r][c];
	int t=INT_MAX;
	for(int i=0;i<c;i++)
	{
		dp[0][i]=A[0][i];
        cout<<dp[0][i]<<" ";
	}
    
	for(int i=1;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(j==0)
            {
                dp[i][j]=min(dp[i-1][j],dp[i-1][j+1])+A[i][j];
            }
            else if(j>0 and j<c-1)
            {
                dp[i][j]=min(dp[i-1][j-1],min(dp[i-1][j],dp[i-1][j+1])) + A[i][j];
            }
            else
            {
                dp[i][j]=min(dp[i-1][j],dp[i-1][j-1]) + A[i][j];
            }
        }
    }
    
    int s=INT_MAX;
    for(int i=0;i<c;i++)
        s=min(s,dp[r-1][i]);
    return s;
}
};
