class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        int n=costs.size();
        int n2=n/2;
        int sum=0;
        vector<int>refund;
        
        for(vector<int>x:costs)
        {
            sum+=x[0];
            refund.push_back(x[1]-x[0]);
        }
        sort(refund.begin(),refund.end());
        
        for(int i=0;i<n2;i++)
        {
            sum+=refund[i];
        }
        return sum;
    }
};
