class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
        if(nums.size()==0)
            return 0;
        deque<int>inc;
        deque<int>dec;
        int len=nums.size();
        int res=1,l=0,r=0,n;
        

        
       while(r<len)
       {
            n=nums[r];
           while(!inc.empty()&&nums[inc.back()]>=n)
               inc.pop_back();
           inc.push_back(r);
           
           while(!dec.empty()&&nums[dec.back()]<=n)
               dec.pop_back();
           dec.push_back(r);
           
           int mini=nums[inc.front()];
           int maxi=nums[dec.front()];
           
           if(maxi-mini>limit)
           {
               l++;
               if(l>inc.front()) inc.pop_front();
               if(l>dec.front()) dec.pop_front();
           }
           else
           {
               res=max(res,r-l+1);
               r++;
           }
           
       }
        
        return res;
        
        
    }
};
