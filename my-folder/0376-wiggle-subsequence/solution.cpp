class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        if(nums.size()<2)
            return nums.size();
        int n=nums.size(),diff=0,prev,count=0;
        prev=nums[1]-nums[0];
        if(prev!=0)
            count=2;
        else
            count=1;
        for(int i=2;i<n;i++)
        {
            diff=nums[i]-nums[i-1];
            if((diff>0 and prev<=0) or (diff<0 and prev>=0))
            {
                count++;
                prev=diff;
            }
        }
        
        return count;
        
    }
};
