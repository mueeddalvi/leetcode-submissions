class Solution {
public:
    // vector<int> nsr(vector<int>a);
    // vector<int> nsl(vector<int>a);
    // int mah(vector<int>a);
    
    int maximalRectangle(vector<vector<char>>& matrix) {
        int r=matrix.size();
        if(r==0)
            return 0;
        int c=matrix[0].size();
        vector<int> t(c,0);
        int res=0;
        
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(matrix[i][j]-48==0)
                    t[j]=0;
                else
                    t[j]+=matrix[i][j]-48;
            }
            res=max(res,mah(t));
        }
        
        // vector<int> left=nsl({2,0,2,1,1});
        // vector<int> right=nsr({2,0,2,1,1});
        // cout<<mah({2,3,3,2})<<endl;
        // for(int x:left)
        //     cout<<x<<" ";
        // cout<<endl;
        // for(int x:right)
        //     cout<<x<<" ";
        // cout<<endl;
        return res;
    }
    
    vector<int> nsr(vector<int>a)
    {
        int n=a.size();
        vector<int>res;
        stack<pair<int,int>>s;
        
        for(int i=n-1;i>=0;i--)
        {
            while(!s.empty())
            {
                if(s.top().first<a[i])
                {
                    res.push_back(s.top().second);
                    break;
                }
                else
                    s.pop();
            }
            if(s.empty())
                res.push_back(n);
            s.push({a[i],i});
        }
        reverse(res.begin(),res.end());
        return res;
    }
    
    vector<int> nsl(vector<int>a)
    {
        int n=a.size();
        vector<int>res;
        stack<pair<int,int>>s;
        
        for(int i=0;i<n;i++)
        {
            while(!s.empty())
            {
                if(s.top().first<a[i])
                {
                    res.push_back(s.top().second);
                    break;
                }
                else
                    s.pop();
            }
            if(s.empty())
                res.push_back(-1);
            s.push({a[i],i});
        }
        return res;
    }
    
    int mah(vector<int>a)
    {
        vector<int> left=nsl(a);
        vector<int> right=nsr(a);
        int w=0,h=0,area=0;
        
        for(int i=0;i<a.size();i++)
        {
            area=max(area,(right[i]-left[i]-1)*a[i]);
        }
        
        return area;
    }
};
