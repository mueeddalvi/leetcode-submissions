class Solution {
public:
    int smallestRangeII(vector<int>& a, int k) {
        
        sort(a.begin(),a.end());
        int res=0,n=a.size(),maxx=a[n-1],minn=a[0];
        
        res=a[n-1]-a[0];
        
        for(int i=0;i<n-1;i++)
        {
            maxx=max(a[i]+k,a[n-1]-k);
            minn=min(a[0]+k,a[i+1]-k);
            res=min(res,maxx-minn);
        }
        return res;
        
    }
};
