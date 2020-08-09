class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        
        vector<int> res;
        int n=arr.size();
        int prefixSum[n];
        prefixSum[0]=arr[0];
        for(int i=1;i<n;i++)
            prefixSum[i]=prefixSum[i-1]^arr[i];
        for(int i=0;i<n;i++)
            cout<<prefixSum[i]<<" ";
        int r=queries.size(),c=queries[0].size();
        int t=0;
        for(int i=0;i<r;i++)
        {
            if(queries[i][0]>0)
                t= prefixSum[queries[i][1]] ^ prefixSum[queries[i][0]-1];
            else
                 t= prefixSum[queries[i][1]];
            res.push_back(t);   
        }
        return res;  
    }
};
