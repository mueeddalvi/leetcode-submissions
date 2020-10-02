class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        int n=nums.size();
        vector<int>res;
        
        if(n==0)
            return res;
        if(n==1)
            return {nums[0]};
        sort(nums.begin(),nums.end());
        
        unordered_map<int,vector<int>>m;
        
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                if(nums[i]%nums[j]==0)
                {
                    if(m.count(j)>0)
                    {
                        m[i]=m[j];
                        m[i].push_back(nums[i]);
                    }
                    else
                        m[i]={nums[j],nums[i]};
                    if(res.size()<m[i].size())
                        res=m[i];
                }
            }
        }
        if(res.size()==0)
            return {nums[0]};
        return res;
    }
};
