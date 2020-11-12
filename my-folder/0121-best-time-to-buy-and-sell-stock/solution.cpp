class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size()==0)
            return 0;
        int min_ele=prices[0],profit=0;
        for(int i=1;i<prices.size();i++)
        {
            if(prices[i]<min_ele)
                min_ele=prices[i];
            else
                profit=max(profit,prices[i]-min_ele);
        }
        return profit;
    }
};
