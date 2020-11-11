class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        if(matrix.empty())
            return 0;
        int r=matrix.size();
        int c=matrix[0].size();
        vector<vector<int>>m(r,vector<int>(c,0));
        int res=0;
        for(int i=0;i<r;i++)
        {
            m[i][0]=matrix[i][0]-'0';
            res=max(res,m[i][0]);
        }
            
        for(int j=0;j<c;j++)
        {
            m[0][j]=matrix[0][j]-'0';
            res=max(res,m[0][j]);
        }
           
        
        for(int i=1;i<r;i++)
        {
            for(int j=1;j<c;j++)
            {
                if(matrix[i][j]!='0')
                {
                    m[i][j]=1+min(m[i-1][j],min(m[i][j-1],m[i-1][j-1]));
                    res=max(res,m[i][j]);
                }
            }
        }

        return res*res;
    }
};
