class Solution {
public:
    string minWindow(string s, string t) {
        int l1=s.length(),l2=t.length(),len=INT_MAX;
        if(l1==0||l2==0)
            return "";
        map<char,int>maps;
        map<char,int>mapt;
        
        for(int i=0;i<l2;i++)
            mapt[t[i]]++;
        int l=0,r=0,count=0;
        string s1="";
        
        while(r<l1)
        {
            if(mapt.find(s[r])!=mapt.end())
            {
                maps[s[r]]++;
                if(maps[s[r]]<=mapt[s[r]])
                    count++;
            }
            
            if(count>=l2)
            {
                while(mapt.find(s[l])==mapt.end()||maps[s[l]]>mapt[s[l]])
                {
                    
                    maps[s[l]]--;
                    l++;
                }
                if(r-l+1<len)
                {
                    len=r-l+1;
                    s1=s.substr(l,len);
                }
            }
            r++;
        }
        return s1;
        
    }
};
