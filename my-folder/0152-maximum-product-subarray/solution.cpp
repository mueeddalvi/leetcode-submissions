class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        int currmax=nums[0],ans=nums[0],prevmax=nums[0],prevmin=nums[0],currmin=nums[0];
        
        for(int i=1;i<nums.size();i++)
        {
            currmax=max(nums[i],max(nums[i]*prevmax,nums[i]*prevmin));
            currmin=min(nums[i],min(nums[i]*prevmin,nums[i]*prevmax));
            ans=max(ans,currmax);
            prevmin=currmin;
            prevmax=currmax;
        }
        
        return ans;
        
    }
};
