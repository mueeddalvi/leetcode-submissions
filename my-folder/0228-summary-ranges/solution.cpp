class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        int n=nums.size();
        vector<string>res;
        if(n==0)
            return res;
        if(n==1)
            return {to_string(nums[0])};
        
        for(int i=0;i<n;i++)
        {
            int a=nums[i];
            while(i+1<n and nums[i]==nums[i+1]-1)
                i++;
            if(a!=nums[i])
            {
                res.push_back(to_string(a) + "->" + to_string(nums[i]));
            }
            else
                res.push_back(to_string(nums[i]));
        }
        return res;
            
        
    }
};
