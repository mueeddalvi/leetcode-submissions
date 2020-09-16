class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        
        int buckets[10001];
        memset(buckets,0,sizeof(buckets));
        
        for(int n:nums)
            buckets[n]+=n;
        int dp[10001];
        memset(dp,0,sizeof(dp));
        
        dp[0]=buckets[0];
        dp[1]=buckets[1];
        
        int res=0;
        
        for(int i=2;i<10001;i++)
        {
            dp[i]=max(dp[i-1],buckets[i]+dp[i-2]);
        }
        return dp[10000];
            
    }
};
