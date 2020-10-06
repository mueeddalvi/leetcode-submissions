class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        
        vector<int>left=nsl(heights);
        vector<int>right=nsr(heights);
        
        int res=0;
        for(int i=0;i<n;i++)
        {
            res=max(res,(right[i]-left[i]-1)*heights[i]);
        }
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
};
