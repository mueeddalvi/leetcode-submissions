typedef unsigned long long int lint;
class Solution {
public:
    int combinationSum4(vector<int>& nums, int target) {
        
        vector<lint>dp(target+1,0);
        int mod=INT_MAX;
        dp[0]=1;
        for(int i=1;i<target+1;i++)
        {
            for(int x:nums)
            {
                if(i>=x)
                    dp[i]+=dp[i-x];
            }
        }
        return (int)dp[target];
        
    }
};
