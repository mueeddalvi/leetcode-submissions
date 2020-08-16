class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
      
        int l=0,r=0,len=s.length(),n=wordDict.size();
        vector<bool>dp(len+1,0);
        dp[0]=1;
        string t="";
        bool f=false;
        for(int i=1;i<len+1;i++)
        {
            for(int j=i-1;j>=0;j--)
            {
                t=s.substr(j,i-j);
                f=find(wordDict.begin(),wordDict.end(),t)!=wordDict.end();
                if(dp[j] and f)
                {
                    dp[i]=true;
                    break;
                }
            }
        }
        
        return dp[len];
    }
};
