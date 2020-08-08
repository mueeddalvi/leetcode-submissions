class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> sub;
        if(nums.size()==0)
            return sub;
        vector<int>curr;
        sort(nums.begin(),nums.end());
        generate(0,curr,sub,nums);
        return sub;
        
    }
    
    void generate(int index,vector<int>& curr, vector<vector<int>>& sub, vector<int>& nums)
    {
        sub.push_back(curr);
        for(int i=index;i<nums.size();i++)
        {
            if(i==index||nums[i]!=nums[i-1])
            {
                curr.push_back(nums[i]);
                generate(i+1,curr,sub,nums);
                curr.pop_back();
            }
            
        }
    }
};
