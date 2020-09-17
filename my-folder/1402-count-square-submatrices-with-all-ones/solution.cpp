class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {
        int r=matrix.size();
        int c=matrix[0].size();
        
        int res=0,cell_val=0;
        
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(matrix[i][j])
                {
                    if (i==0 or j==0)
                    {
                        res++;
                    }
                    else
                    {
                        cout<<i<<j<<endl;
                        cell_val=min(matrix[i-1][j-1],
                                     min(matrix[i-1][j],
                                         matrix[i][j-1]))+matrix[i][j];
                        res+=cell_val;
                        matrix[i][j]=cell_val;
                    }
                }
            }
        }
        return res;
        
    }
};
