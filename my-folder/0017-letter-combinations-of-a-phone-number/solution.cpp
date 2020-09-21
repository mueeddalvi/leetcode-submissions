class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if(!digits.size())
            return {};
        vector<string>res;
        int n=digits.size();
        unordered_map<char,string>m;
        m['2']="abc";
        m['3']="def";
        m['4']="ghi";
        m['5']="jkl";
        m['6']="mno";
        m['7']="pqrs";
        m['8']="tuv";
        m['9']="wxyz";
        
        vector<string>pool;
        for(char c:digits)
            pool.push_back(m[c]);
        string local="";
        
        track(digits,pool,local,res);
        return res;
    }
    
    void track(string digits, vector<string>pool, string local, vector<string>&res)
    {
        if(local.size()==digits.size())
        {
            res.push_back(local);
            return; 
        }
        
        string searchSpace=pool[local.length()];
        
        for(char x:searchSpace)
        {
            local.push_back(x);
            track(digits,pool,local,res);
            local.pop_back();
        }
        
    }
};
