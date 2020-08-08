class Solution {
public:
    int singleNumber(vector<int>& nums) {
        if(nums.size()==0)
            return 0;
        vector<int> f(32,0);
        for(int i:nums)
        {
            for(int j=0;j<32;j++)
                if(i &(1<<j))
                    f[j]++;
        }
        
        int res=0;
        
        // for(int i=0;i<32;i++)
        //     cout<<f[i]<<" ";
        // cout<<endl;
        
        for(int i=0;i<32;i++)
            if(f[i]%3==1)
                res+=1<<i;
        
        return res;
        
    }
};
