class Solution {
public:
    int minSubArrayLen(int s, vector<int>& nums) {
        if(nums.size()==0)
            return 0;
        int n=nums.size(),l=0,r=0,sum=0,res=INT_MAX;
    
        while(r<n)
        {
            sum+=nums[r];
            if(sum>=s)
            {
                while(sum>=s)
                {
                    res=min(res,(r-l+1));
                    sum-=nums[l];
                    l++;
                }
            }
                r++;
        }
        if(res==INT_MAX)
            return 0;
        return res;
    }
};
