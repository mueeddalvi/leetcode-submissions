class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int x[nums.size()];
        x[0]=nums[0];
        int z=nums[0];
        for(int i=1;i<nums.size();i++)
        { 
            x[i]=max(nums[i],nums[i]+x[i-1]);
            z=max(z,x[i]);
        }
        
        return z;
    }
};
