class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int gn=g.size(),sn=s.size();
        int res=0;
        
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
            
        if(gn==0 or sn==0)
            return 0;
        int i=0,j=0;
        
        while(i<gn and j<sn)
        {
            if(g[i]<=s[j])
            {
                i++;
                j++;
                res++;
            }
            else if(g[i]>s[j])
                j++;
            else
                i++;
        }
        return res;
        
    }
};
