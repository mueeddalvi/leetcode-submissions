class Solution {
public:
    int arrayNesting(vector<int>& nums) {
        int n=nums.size();
        set<int>s1;
        vector<int>s2;
        int res=0;
        
        for(int& i:nums)
        {
            if(i<0)
                continue;
            s1.insert(i);
            int x=i;
            i=-i;
            while(nums[x]>=0 and s1.find(nums[x])==s1.end())
            {
                s1.insert(nums[x]);
                nums[x]=-nums[x];
                x=-nums[x];
            }
            int len=s1.size();
            res=max(res,len);
            s1.clear();
        }
        return res;
        
    }
};
