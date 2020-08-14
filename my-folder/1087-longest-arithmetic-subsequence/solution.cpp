class Solution {
public:
    int longestArithSeqLength(vector<int>& A) {
        int n=A.size();
        vector<map<int,int>> dp(n); 
        int diff;
        // DICTIONARY FOR EVERY ELEMENT IN THE GIVEN ARRAY
        int len=2;
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                 diff=A[i]-A[j];
                if(dp[j].find(diff)!=dp[j].end())
                   dp[i][diff]=dp[j][diff]+1;
                else
                    dp[i][diff]=2;
                 len=max(len,dp[i][diff]);
            }
           
            
        }
        return len;
        
    }
};
