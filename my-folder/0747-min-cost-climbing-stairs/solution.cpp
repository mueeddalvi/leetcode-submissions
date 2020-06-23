class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        
        int s1=0;
        int s2=0;
        int s=0;
        for(int i=0;i<cost.size();i++)
        {
            s=cost[i]+min(s1,s2);
            
            s2=s1;
            s1=s;
        }
        
        return min(s2,s1);
        
    }
};
