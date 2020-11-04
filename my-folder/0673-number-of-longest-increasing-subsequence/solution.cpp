class Solution {
public:
    int findNumberOfLIS(vector<int>& nums) {
        int n=nums.size();
        if(n==0)
            return n;
        vector<int>count(n,1),len(n,1);
        int i,j,res=0;
        
        for(j=1;j<n;j++)
        {
            for(i=0;i<j;i++)
            {
                if(nums[j]>nums[i])
                {
                    if(len[i]>=len[j])
                    {
                        len[j]=len[i]+1;
                        count[j]=count[i];
                    }
                    else if(len[j]==len[i]+1)
                    {
                        count[j]+=count[i];
                    }
                        
                }
            }
        }
        int longest=*max_element(len.begin(),len.end());
        cout<<longest<<endl;
        for(int i=0;i<n;i++)
        {
            if(len[i]==longest)
                res+=count[i];
        }
        return res;
    }
};
