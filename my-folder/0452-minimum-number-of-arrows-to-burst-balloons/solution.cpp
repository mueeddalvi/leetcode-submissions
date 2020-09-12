class Solution {
public:
    bool static comp(vector<int>& a, vector<int>& b)
    {
        return b[1]>a[1];
    }
    int findMinArrowShots(vector<vector<int>>& points) {
        int n=points.size();
        if(n==0)
            return 0;
        if(n==1)
            return 1;
        int c=1,start=0,end=0;
        
        sort(points.begin(),points.end(),comp);
        
        end=points[0][1];
        for(int i=1;i<n;i++)
        {
            if(points[i][0]>end)
            {
                c++;
                end=points[i][1];
            }
        }
        
        return c;
        
    }
};
