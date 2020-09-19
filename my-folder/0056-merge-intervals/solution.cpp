class Solution {
public:
    bool comp(vector<int>& x, vector<int>& y)
    {
        return y[0]<x[0];
    }
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n=intervals.size();
        vector<vector<int>>res;
        
        if(n==1)
            return intervals;
        if(n==0)
            return res;
        
       sort(intervals.begin(),intervals.end());
       res.push_back(intervals[0]);
       
        int i=1;
        while(i<n)
        {
            vector<int>&last=res.back();
            if(last[1]<intervals[i][0])
            {
                res.push_back(intervals[i]);
            }
            else
            {
                last[1]=max(last[1],intervals[i][1]);
            }
            i++;
        }
        return res;
        
    }
};
