class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        int n=prices.size();
        
        int noStock=0,oneStock=-prices[0];
        
        for(int i=0;i<n;i++)
        {
            noStock=max(noStock,prices[i]+oneStock-fee); //SEELING
            oneStock=max(oneStock,noStock-prices[i]);   // BUYING
        }
        return noStock;
    }
};
