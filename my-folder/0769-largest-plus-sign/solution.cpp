class Solution {
public:
    int orderOfLargestPlusSign(int n, vector<vector<int>>& mines) {
        
        vector<vector<int>>m(n,vector<int>(n,1));
        
        for(vector<int>x:mines)
            m[x[0]][x[1]]=0;
        int count =0;
        
        for(int i=0;i<n;i++)
        {
            count=0;
            for(int j=0;j<n;j++)//LEFT
            {
                if(m[i][j]!=0)
                    count++;
                else
                    count=0;
                m[i][j]=count;
            }
            count=0;
            for(int j=n-1;j>=0;j--)//RIGHT
            {
                if(m[i][j]!=0)
                    count++;
                else
                    count=0;
                m[i][j]=min(count,m[i][j]);
            }      
        }
        
        count=0;
        int res=0;
        for(int j=0;j<n;j++)
        {
            count=0;
            for(int i=0;i<n;i++)//UP
            {
                if(m[i][j]!=0)
                    count++;
                else
                    count=0;
                m[i][j]=min(count,m[i][j]);
            }
            count=0;
            for(int i=n-1;i>=0;i--)//DOWN
            {
                if(m[i][j]!=0)
                    count++;
                else
                    count=0;
                m[i][j]=min(count,m[i][j]);
                res=max(res,m[i][j]);
            }
                
        }
        return res;
        
    }
};
