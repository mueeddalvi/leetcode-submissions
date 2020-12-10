class Solution {
public:
    typedef pair<int,int>pi;
    struct comp{
        bool operator()(pair<int,int>&a, pair<int,int>&b)
        {
            if(a.second==b.second)
                return a.first>b.first;
            return a.second>b.second;
        }
    };
    vector<int> getStrongest(vector<int>& arr, int k) {
        vector<int>res;
        int n=arr.size();
        if(n==0)
            return res;
        sort(arr.begin(),arr.end());
        int m=(n-1)/2;
        m=arr[m];
        
        priority_queue<pi,vector<pi>, comp>pq;
        for(int i=0;i<n;i++)
        {
            int diff=abs(arr[i]-m);
            pq.push({arr[i],diff});
            while(pq.size()>k)
                pq.pop();
        }
        
        while(!pq.empty() and k>0)
        {
            int x=pq.top().first;
            res.push_back(x);
            pq.pop();
            k--;
        }
        return res;
        
    }
};
