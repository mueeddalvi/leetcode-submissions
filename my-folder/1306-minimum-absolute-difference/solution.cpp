class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        int n=arr.size();
        vector<vector<int>>res;
        sort(arr.begin(),arr.end());
        
        int md=INT_MAX-1;
        
        for(int i=1;i<n;i++)
        {
            md=min(arr[i]-arr[i-1],md);
        }
        
        for(int i=1;i<n;i++)
        {
            if(arr[i]-arr[i-1]==md)
                res.push_back({arr[i-1],arr[i]});
        }
        
        return res;
    }
};
