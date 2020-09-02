class Solution {
public:
    int numTeams(vector<int>& rating) {
        int n=rating.size();
        int ls=0,ll=0,rs=0,rl=0,count=0;
        
        for(int i=0;i<n;i++)
        {
            ls=0;
            ll=0;
            rs=0;
            rl=0;
            
            for(int j=0;j<i;j++)
            {
                if(rating[j]>rating[i])
                    ll++;
                else
                    ls++;
            }
            for(int k=i+1;k<n;k++)
            {
                if(rating[i]<rating[k])
                    rl++;
                else
                    rs++;
                
            }
            count+= (ls*rl)+(ll*rs);
        }
        return count;
    }
};
