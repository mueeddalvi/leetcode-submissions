class Solution {
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>>res;
        vector<int>combi;
        int index=1;
        helper(k, n, res, combi, index);
        return res;
        
    }
    
    void helper(int k, int n,  vector<vector<int>>&res, 
                vector<int>&combi, int index)
    {
        if(n<=0 and combi.size()==k)
        {
            res.push_back(combi);
            return;
        }
        
        for(int i=index;i<=9 and i<=n; i++)
        {
            combi.push_back(i);
            helper(k,n-i,res,combi,i+1);
            combi.pop_back();
        }
    }
};
