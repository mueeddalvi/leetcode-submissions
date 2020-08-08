class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> sub;
        if(nums.size()==0)
            return sub;
        vector<int> curr;
        generateSubsets(0, curr, sub, nums);
        return sub;
        
    }
    void generateSubsets(int index, vector<int>& curr, vector<vector<int>>& sub, vector<int>& nums)
    {
        sub.push_back(curr);
        for(int i=index;i<nums.size();i++)
        {
            curr.push_back(nums[i]);
            generateSubsets(i+1,curr,sub,nums);
            curr.pop_back();
        }
        
    }
    
    
};
