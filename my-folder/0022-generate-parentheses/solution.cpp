class Solution {
public:
    vector<string> generateParenthesis(int n) {
        int o=n,c=n;
        vector<string>res;
        solve(o,c,"",res);
        return res;
    }
    
    void solve(int o, int c, string op, vector<string>&res)
    {
        if(o==0 and c==0)
        {
            res.push_back(op);
            return;
        }
        if(o==c)
        {
            op.push_back('(');
            solve(o-1,c,op,res);
        }
        else if(c>0 and o==0)
        {
            op.push_back(')');
            solve(o,c-1,op,res);
        }
        else if(c>o)
        {
            string op1=op;
            string op2=op;
            op1.push_back('(');
            solve(o-1,c,op1,res);
            op2.push_back(')');
            solve(o,c-1,op2,res);
        }
    }
};
