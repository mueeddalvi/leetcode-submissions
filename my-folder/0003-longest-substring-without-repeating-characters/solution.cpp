class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();
        int l=0,r=0,res=0;
        map<char,int>m;
        
        for(r=0;r<n;r++){
            if(m.find(s[r])!=m.end()){
                l=max(l,m[s[r]]+1);
            }
            m[s[r]]=r;
            res=max(res,r-l+1);
        } 
        
        return res;
    }
};
