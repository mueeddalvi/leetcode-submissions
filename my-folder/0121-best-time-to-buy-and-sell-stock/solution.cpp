class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ma=0,min=INT_MAX;
        for(int i=0;i<prices.size();i++)
        {
            if(prices[i]<min)
                min=prices[i];
            else
                ma=max(ma,prices[i]-min);
        }
        return ma;
    }
};
