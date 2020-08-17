class Solution {
public:
  static bool comp(string& s1, string& s2)
    {
        return s1.length()<s2.length();
    }
    int longestStrChain(vector<string>& words) {
       sort(words.begin(),words.end(),comp);
        map<string,int>dp;
        int res=0;
        for(string w:words)
        {
            for(int i=0;i<w.length();i++)
            {
                dp[w]=max(dp[w],dp[w.substr(0,i)+w.substr(i+1)]+1);
            }
            res=max(res,dp[w]);
        }
        
        return res;
    }
};
