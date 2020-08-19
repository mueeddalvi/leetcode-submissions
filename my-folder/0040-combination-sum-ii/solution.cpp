class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>>res;
        vector<int>combi;
        sort(candidates.begin(),candidates.end());
        for(int x:candidates)
            cout<<x<<" ";
        helper(candidates, target, res, combi, 0);
        return res;
    }
    
    void helper(vector<int>& candidates, int target, 
                vector<vector<int>>& res, vector<int>& combi, int index)
    {
        if(target<=0)
        {
            res.push_back(combi);
            return;
        }
        
        for(int i=index;i<candidates.size()&&target>=candidates[i];i++)
        {
            if(i==index or candidates[i]!=candidates[i-1])
            {
                combi.push_back(candidates[i]);
                helper(candidates, target-candidates[i], res, combi, i+1);
                combi.pop_back();
            }
        }
    }
};
