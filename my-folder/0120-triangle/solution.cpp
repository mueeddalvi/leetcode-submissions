class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        
        int r=triangle.size();
        vector<int>dp(r);
        for(int i=0;i< triangle[r-1].size();i++)
            dp[i]=triangle[r-1][i];
        
       
        for(int i=r-1;i>0;i--)
        {
            for(int j=0;j<triangle[i].size()-1;j++)
            {
               dp[j]=min(dp[j],dp[j+1]) + triangle[i-1][j];
            }
        }
        
        return dp[0];
        
    }
};
