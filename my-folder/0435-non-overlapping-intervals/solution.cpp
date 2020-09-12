class Solution {
public:
    bool static comp(vector<int>&a, vector<int>& b)
    {
        return b[1]>a[1];
    }
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int n=intervals.size();
        if(n==0 or n==1)
            return 0;
        sort(intervals.begin(),intervals.end(),comp);
        int start=0,end=intervals[0][1],c=1;
        
        for(int i=1;i<n;i++)
        {
            if(intervals[i][0]>=end)
            {
                c++;
                end=intervals[i][1];
            }
        }
        return n-c;
    }
};
