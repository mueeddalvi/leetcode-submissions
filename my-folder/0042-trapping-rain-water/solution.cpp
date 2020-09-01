class Solution {
public:
    int trap(vector<int>& height) {
        int res=0;
        int n=height.size();
        if(n==0)
            return res;
        int lm[n],rm[n];
        memset(lm,0,sizeof(lm));
        memset(rm,0,sizeof(rm));
        
        lm[0]=height[0];
        rm[n-1]=height[n-1];
        for(int i=1;i<n;i++)
            lm[i]=max(lm[i-1],height[i]);
        for(int j=n-2;j>=0;j--)
            rm[j]=max(rm[j+1],height[j]);
        int water=0;
        for(int i=0;i<n;i++)
        {
            water=min(lm[i],rm[i]);
            water-=height[i];
            res+=water;
        }
        return res;
    }
};
