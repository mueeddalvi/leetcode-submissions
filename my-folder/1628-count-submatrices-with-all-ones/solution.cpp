class Solution {
public:
    int numSubmat(vector<vector<int>>& mat) {
        int r=mat.size();
        int c=mat[0].size();
        int res=0;
        vector<vector<int>>dp(r,vector<int>(c,0));
        
        for(int i=0;i<r;i++)
        {
            for(int j=c-2;j>=0;j--)
            {
                if(mat[i][j])
                    mat[i][j]+=mat[i][j+1];
                    
            }
        }
        // for(int i=0;i<r;i++)
        // {
        //     for(int j=0;j<c;j++)
        //         cout<<mat[i][j]<<" ";
        //     cout<<endl;
        // }
        
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                int min_width=mat[i][j];
                    for(int k=i;k<r;k++)
                    {
                        if(mat[k][j]==0)
                            break;
                        min_width=min(min_width,mat[k][j]);
                        res+=min_width;
                    }
                if(mat[i][j])
                    cout<<res<<endl;
            }
        }
        return res;
        
        
    }
};
