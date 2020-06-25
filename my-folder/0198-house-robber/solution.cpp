class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size()==0)
            return 0;
        
        int r1=0,r2=0,t=0;
        
        //[r1,r2,n,n+1, ....]
        for(int i=0;i<nums.size();i++)
        {
            t=max(nums[i]+r1,r2);
            r1=r2;
            r2=t;
        }
        
        return t;
        
    }
};
