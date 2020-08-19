class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& a) {
        
        int n=a.size();
        if(n==0)
            return 0;
        int d=0,s=0;
        int dp[n];
        memset(dp,0,sizeof(dp));
        for(int i=2;i<n;i++)
        {
            if(a[i]-a[i-1] == a[i-1]-a[i-2])
            {
                dp[i]=1+dp[i-1];
                s+=dp[i];
            }
            else
                dp[i]=0;
        }
        return s;
        
    }
};
