class Solution {
public:
    void sortColors(vector<int>& nums) {
        int cs[3];
        memset(cs,0,sizeof(cs));
        
        for(int i=0;i<nums.size();i++)
        {
            cs[nums[i]]++;
        }
        int z=cs[0],o=cs[1],t=cs[2];
        for(int i=0;i<nums.size();i++)
        {
            if(z>0)
            {
                nums[i]=0;
                z--;
            }
            else if(o>0)
            {
                nums[i]=1;
                o--;
            }
            else
            {
                nums[i]=2;
                t--;
            }
        }
        
    }
};
