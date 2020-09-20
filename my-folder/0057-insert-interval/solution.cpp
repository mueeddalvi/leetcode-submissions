class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        int n=intervals.size();
        vector<vector<int>>res;
        if(n==0 and newInterval.size()==0)
            return res;
        int i=0;
        
        while(i<n and intervals[i][1]<newInterval[0])
            res.push_back(intervals[i++]);
        
        int start=newInterval[0],end=newInterval[1];
        while(i<n and newInterval[1]>=intervals[i][0])
        {
            start=min(intervals[i][0],start);
            end=max(intervals[i][1],end);
            i++;
        }
        res.push_back({start,end});
        
        while(i<n)
        {
            res.push_back(intervals[i++]);
        }
        
        return res;
    }
};
