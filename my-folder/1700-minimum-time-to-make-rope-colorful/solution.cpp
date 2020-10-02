class Solution {
public:
    int minCost(string s, vector<int>& cost) {
        int res=0;
        int n=s.length(),max_cost=0,sum=0;
        
        for(int i=0;i<n;i++)
        {
            if(i>0 and s[i]!=s[i-1])
            {
                res+=sum-max_cost;
                sum=max_cost=0;
            }
            sum+=cost[i];
            max_cost=max(max_cost,cost[i]);
        }
        
        res+=sum-max_cost;
        return res;
    }
};
