class Solution {
public:
    int minHeightShelves(vector<vector<int>>& books, int shelf_width) {
        
        int n=books.size(),h=0,w=0,th=0;
        vector<int>dp(n+1,0);
        
        for(int i=1;i<n+1;i++)
        {
            w=books[i-1][0];
            h=books[i-1][1];
            dp[i]=dp[i-1]+h;
            for(int j=i-1;j>0 and w+books[j-1][0]<=shelf_width;j--)
            {
                h=max(h,books[j-1][1]);
                w+=books[j-1][0];
                dp[i]=min(dp[i],dp[j-1]+h);
            }
        }
        
        return dp[n];
        
    }
};
