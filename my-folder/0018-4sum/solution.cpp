class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> res;
        int n=nums.size();
        if(n<4)
            return res;
        sort(nums.begin(),nums.end());
        int a=0,b=0,c=0,d=0,s1=0,s2=0,s3=0;
        for(int i=0;i<n-3;)
        {
            for(int j=i+1;j<n-2;)
            {
                int t2=target-nums[j]-nums[i];
                int left=j+1,right=n-1;
                while(left<right)
                {
                    s1=nums[left]+nums[right];
                    if(s1<t2)
                    {
                        ++left;
                    }
                    else if(s1>t2)
                    {
                        --right;
                    }
                    else
                    {
                        res.push_back({nums[i],nums[j],nums[left],nums[right]});
                        while(++left<n and left<right and nums[left]==nums[left-1]);
                        while(--right>left and nums[right]==nums[right+1]);
                    }
                }
                while(++j<n-2 and nums[j]==nums[j-1]);
            }
            while(++i<n-3 and nums[i]==nums[i-1]);
        }
        return res;
        
    }
};
