class Solution {
public:
    int shoppingOffers(vector<int>& price, vector<vector<int>>& special, vector<int>& needs) {
        
       return helper(price,special,needs,0);
        
    }
    
    int helper(vector<int>& price, vector<vector<int>>& special, vector<int>& needs,int pos)
    {
        int lm=directPurchase(price,needs);
        for(int i=pos;i<special.size();i++)
        {
            vector<int>offer=special[i];
            vector<int>temp;
            for(int j=0;j<needs.size();j++)
            {
                if(needs[j]<offer[j])
                {
                    temp.clear();
                    break;
                }
                temp.push_back(needs[j]-offer[j]);
            }
            if(temp.size()>0)
            {
                lm=min(lm, offer.back()+helper(price,special,temp,i));
            }
        }
        return lm;
    }
    
    int directPurchase(vector<int>price,vector<int>needs){
        int res=0;
        for(int i=0;i<price.size();i++)
            res+= price[i]*needs[i];
        return res;
    }
};
