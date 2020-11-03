class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        int n=nums.size();
        if(n==0 or n==1 or n==2)
            return res;
        sort(nums.begin(),nums.end());
        int l=0,r=0,sum=0,a=0;
        
        for(int i=0;i<n-2;)
        {
            l=i+1;
            r=n-1;
            a=-nums[i];
            
            while(l<r)
            {
                sum=nums[l]+nums[r];
                if(sum<a)
                {
                    while(++l<n and nums[l]==nums[l-1]);
                }
                else if(sum>a)
                {
                    while(--r>l and nums[r]==nums[r+1]);
                }
                else
                {
                    res.push_back({nums[i],nums[l],nums[r]});
                    while(++l<n and nums[l]==nums[l-1]);
                    while(--r>l and nums[r]==nums[r+1]);  
                }
            }
            while(++i<n and nums[i]==nums[i-1]);
        }
        return res;
        
    }
};
