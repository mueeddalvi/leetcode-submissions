class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int>res;
        int n=s.length();
        if(n==1)
            return {1};
        
        unordered_map<char,int>m;
        for(int i=0;i<n;i++)
            m[s[i]]=i;
        int start=0,last=0;
        
        for(int i=0;i<n;i++)
        {
            last=max(last,m[s[i]]);
            if(last==i)
            {
                res.push_back(last-start+1);
                start=last+1;
                last=0;
            }
        }
        return res;
        
        
    }
};
