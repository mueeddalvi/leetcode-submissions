class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int S) {
       
        int sum=0;
        
      for(int i=0;i<nums.size();i++)
		sum+=nums[i];
        
	int s1=(sum-S)/2;
        
         if(S>sum)
            return 0;
       if((S-sum)&1)
           return 0;
	int n=nums.size();
	int dp[n+1][s1+1];
	dp[0][0]=1;
	for(int i=1;i<n+1;i++)
		{		
				if(nums[i-1]==0)
					dp[i][0]=2*dp[i-1][0];
				else
					dp[i][0]=dp[i-1][0];
		}

	for(int i=1;i<s1+1;i++)
		dp[0][i]=0;

	for(int i=1;i<n+1;i++)
	{
		for(int j=1;j<s1+1;j++)
		{
			if(nums[i-1]<=j)
				dp[i][j]=dp[i-1][j-nums[i-1]] + dp[i-1][j];
			else
				dp[i][j]=dp[i-1][j];
		}
	}

     return dp[n][s1];   
    }
};
