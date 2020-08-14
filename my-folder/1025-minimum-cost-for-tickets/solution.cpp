class Solution {
public:
    // int dp[366];
    int mincostTickets(vector<int>& days, vector<int>& cost) {
        int n=days[days.size()-1];
        int dp[n+1];
        memset(dp,0,sizeof(dp));
        dp[0]=0;
        for(int i=1;i<n+1;i++)
        {
            if(find(days.begin(),days.end(),i)==days.end())
                dp[i]=dp[i-1];
            else
            {
                    dp[i]=min({dp[i-1]+cost[0],
                              dp[max(0,i-7)]+cost[1],
                              dp[max(0,i-30)]+cost[2]});
            }
        }
        return dp[n];
        // memset(dp,-1,sizeof(dp));
        // return ticket(days,days[days.size()-1],costs);
        
    }
    /*
    int ticket(vector<int>days, int n,vector<int>costs)
    {
        if(n<0)
            return 0;
        if(dp[n]!=-1)
            return dp[n];
        if(find(days.begin(),days.end(),n)==days.end())
            return dp[n]=ticket(days,n-1,costs);
        else
        {
            return dp[n]=(min(ticket(days,n-1,costs)+costs[0],
                    min(ticket(days,n-7,costs)+costs[1],
                        ticket(days,n-30,costs)+costs[2])));
        }
    }*/
};
