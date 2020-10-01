class Solution {
public:
    string predictPartyVictory(string senate) {
        int n=senate.length();
        queue<int>r;
        queue<int>d;
        for(int i=0;i<n;i++)
        {
            char c=senate[i];
            if(c=='R')
                r.push(i);
            else
                d.push(i);
        }
        
        int r_index=0,d_index=0;
        
        while(!r.empty() and !d.empty())
        {
            r_index=r.front();
            d_index=d.front();
            
            r.pop();
            d.pop();
            
            if(r_index<d_index)
                r.push(r_index+n);
            else
                d.push(d_index+n);
        }
        
        if(d.size()>r.size())
            return "Dire";
        else
            return "Radiant";
        
    }
};
