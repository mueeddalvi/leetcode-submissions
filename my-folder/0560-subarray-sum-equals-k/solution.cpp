class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map<int,int>m;
        int n=nums.size(),diff=0,count=0,sum=0;
        m[0]=1;
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
            if(m.find(sum-k)!=m.end())
            {
                count+=m[sum-k];
            }
            m[sum]++;
            
        }
        return count;
        
    }
};
