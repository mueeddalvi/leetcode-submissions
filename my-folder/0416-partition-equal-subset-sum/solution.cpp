class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++)
            sum+=nums[i];
        if(sum%2!=0)
            return false;
        sum/=2;
        
        bool dp[nums.size()+1][sum+1];
        for(int i=0;i<nums.size()+1;i++)
                dp[i][0]=1;
        for(int j=1;j<sum+1;j++)
            dp[0][j]=0;
        
        for(int i=1;i<nums.size()+1;i++)
        {
            for(int j=1;j<sum+1;j++)
            {
                if(nums[i-1]<=j)
                {
                    dp[i][j]=dp[i-1][j-nums[i-1]] or dp[i-1][j]; // TO INCLUDE OR TO NOT INCLUDE
                }
                else
                {
                    dp[i][j]=dp[i-1][j]; // NOT INCLUDING
                }
            }
        }
        
        return dp[nums.size()][sum];
        
    }
};
