class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==0)
            return 0;
        if(n<2)
            return nums[0];
        
        vector<int>t1(nums.begin(),nums.end()-1);
        vector<int>t2(nums.begin()+1,nums.end());
        
        return max(rob_2(t1),rob_2(t2));
        
    }
    
    int rob_2(vector<int>& nums) {
        if(nums.size()==0)
            return 0;
        if(nums.size()==1)
            return nums[0];
        
        int t[nums.size()];
        t[0]=nums[0];
        t[1]=max(nums[0],nums[1]);

        for(int i=2;i<nums.size();i++)
        {
        	t[i]=max(nums[i]+t[i-2],t[i-1]);
        }

        return t[nums.size()-1];
        
    
        
    }
};
