class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int n=arr.size();
        priority_queue<pair<int,int>>h;
        
        for(int i=0;i<n;i++)
        {
            h.push({abs(arr[i]-x),arr[i]});
            if(h.size()>k)
                h.pop();
        }
        vector<int>res;
        while(!h.empty())
        {
            res.push_back(h.top().second);
            h.pop();
        }
        sort(res.begin(),res.end());
        return res;
        
    }
};
