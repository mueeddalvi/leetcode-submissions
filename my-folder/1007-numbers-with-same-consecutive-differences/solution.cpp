class Solution {
public:
    vector<int> numsSameConsecDiff(int n, int k) {
        vector<int>res;
        
        for(int i=1;i<=9;i++)
        {
            dfs(i,k,res,n-1);
        }
        
        return res;
    }
    
    void dfs(int num,int k, vector<int>& res,int n)
    {
        if(n==0)
        {
            res.push_back(num);
            return;
        }
        int last_digit=num%10;
        if(last_digit+k<10)
            dfs((num*10)+(last_digit+k),k,res,n-1);
        if(last_digit-k>=0 and k)
            dfs((num*10)+(last_digit-k),k,res,n-1);
    }
    
};
