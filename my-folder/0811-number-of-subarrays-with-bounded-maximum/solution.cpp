class Solution {
public:
    int numSubarrayBoundedMax(vector<int>& a, int l, int r) {
        int n=a.size();
        int dp=0,prev=-1,res=0;
        
        for(int i=0;i<n;i++)
        {
            if(a[i]>r)
            {
                prev=i;
                dp=0;
            }
            else if(a[i]<l)
            {
                res+=dp;
            }
            else if(a[i]>=l and a[i]<=r)
            {
                dp=i-prev;
                res+=dp;
            }
        }
        
        return res;
            
            
    }
};
