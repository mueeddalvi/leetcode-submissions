class Solution {
public:
    int maxProfit(vector<int>& prices) {
        map<string,int>m;
        return maxProfit(prices,m,0,0);
    }
    int maxProfit(vector<int>& prices, map<string,int>& m, int index, int op)
    {
        if(index>=prices.size())
            return 0;
        string key=to_string(index)+" "+to_string(op);
        if(m.find(key)!=m.end())
            return m[key];
        int x=0;
        if(op==0)
        {
            int buy=maxProfit(prices,m,index+1,1)-prices[index];
            int nobuy=maxProfit(prices,m,index+1,0);
            x=max(buy,nobuy);
        }
        else
        {
            int sell=maxProfit(prices,m,index+2,0)+prices[index];
            int nosell=maxProfit(prices,m,index+1,1);
            x=max(sell,nosell);
        }
        m[key]=x;
        return x;
    }
};
