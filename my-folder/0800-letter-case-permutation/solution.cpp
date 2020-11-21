class Solution {
public:
    vector<string> letterCasePermutation(string s) {
        vector<string>res;
        string op="";
        solve(s,op,res);
        return res;
    }
    
    void solve(string ip, string op, vector<string>& res)
    {
        if(ip.length()==0)
        {
            res.push_back(op);
            return;
        }
        if(isalpha(ip[0]))
        {
            string op1=op+(char)tolower(ip[0]);
            string op2=op+(char)toupper(ip[0]);
            ip.erase(ip.begin()+0);
            solve(ip,op1,res);
            solve(ip,op2,res);
        }
        else
        {
            string op1=op+ip[0];
            ip.erase(ip.begin()+0);
            solve(ip,op1,res);
        }
    }
};
