class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>res;
        if(nums.size()==0)
            return res;
        unordered_map<int,int>m;
        int diff=0;
        
        for(int i=0;i<nums.size();i++)
        {
            diff=target-nums[i];
            if(m.find(nums[i])!=m.end())
            {
                res.push_back(m[nums[i]]);
                res.push_back(i);
                return res;
            }
            else
            {
                m[diff]=i;
            }
        }
        
        return res;
        
    }
};
