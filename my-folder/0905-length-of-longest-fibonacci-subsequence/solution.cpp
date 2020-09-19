class Solution {
public:
    int lenLongestFibSubseq(vector<int>& a) {
        int n=a.size(),i,j,k,index,res=0;
        if(n<3)
            return res;
        unordered_map<int,int>m;
 
        int dp[n][n];
        for(j=0;j<n;j++)
        {
            m[a[j]]=j;
            for(i=0;i<j;i++)
            {
                int k=-1;
                if(m.find(a[j]-a[i])!=m.end())
                    k=m[a[j]-a[i]];
                if(a[j]-a[i]<a[i] and k>=0)
                {
                    dp[i][j]=dp[k][i]+1;
                }
                else 
                    dp[i][j]=2;
                res=max(res,dp[i][j]);
            }
        }
        if(res>2)
            return res;
        else
            return 0;

    }
};
