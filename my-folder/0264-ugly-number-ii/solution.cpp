class Solution {
public:
    int nthUglyNumber(int n) {
        if(n<=0)
            return 0;
        if(n==1)
            return 1;
        vector<int>v(n+1,0);
        v[0]=1;
        int i=0,j=0,k=0,x=0;
        
        for(int z=1;z<n;z++)
        {
            v[z]=min(v[i]*2,min(v[j]*3,v[k]*5));
            if(v[z]==v[i]*2)
                i++;
            if(v[z]==v[j]*3)
                j++;
            if(v[z]==v[k]*5)
                k++;
        }
        return v[n-1];
        
    }
};
