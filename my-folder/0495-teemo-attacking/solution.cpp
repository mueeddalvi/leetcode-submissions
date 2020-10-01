class Solution {
public:
    int findPoisonedDuration(vector<int>& ts, int d) {
        int n=ts.size();
        if(n==0)
            return 0;
        int start=ts[0],end=ts[0]+d,res=d;
        
        for(int i=1;i<n;i++)
        {
            start=ts[i];
            if(ts[i]>=end)
            {
                res+=d;
            }
            else
            {
                res+=start+d-end;
            }
            end=ts[i]+d;
        }
        
        return res;
            
    }
};
