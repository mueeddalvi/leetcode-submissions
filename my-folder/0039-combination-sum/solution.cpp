class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
        vector<vector<int>> res;
        vector<int>combination;
        sort(candidates.begin(),candidates.end());
        helper(candidates,target,res, combination, 0);
        return res;
        
    }
    
    void helper(vector<int>& candidates, int target, 
                       vector<vector<int>>& res,vector<int>& combination, int index)
    {
        if(target<=0)
        {
            res.push_back(combination);
            return;
        }
                      
        for(int i=index;i<candidates.size()&&target>=candidates[i];i++)
        {
            combination.push_back(candidates[i]);
            helper(candidates,target-candidates[i],res,combination, i);
            combination.pop_back();
        }
        
    }
};
