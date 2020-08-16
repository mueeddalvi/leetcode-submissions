class Solution {
    map<string,vector<string>> dp;
public:
    vector<string> wordBreak(string s, vector<string>& wordDict) {
        vector<string> res;
        if(dp.find(s)!=dp.end())
            return dp[s];
        
        for(string word:wordDict)
        {
            if(s.substr(0,word.length())==word)
            {
                if(s.length()==word.length())
                    res.push_back(word);
                else
                {
                    vector<string> temp=wordBreak(s.substr(word.length()),wordDict);
                    for(string sen:temp)
                        res.push_back(word+" "+sen);
                }
            }
        }
        dp[s]=res;
        return res;
    }
    
};
