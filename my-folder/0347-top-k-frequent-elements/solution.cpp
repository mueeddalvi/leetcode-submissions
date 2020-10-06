class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int>m;
        for(int i=0;i<n;i++)
            m[nums[i]]++;
        
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>h;
        
        for(auto it=m.begin();it!=m.end();it++)
        {
            h.push({it->second,it->first});
            if(h.size()>k)
                h.pop();
        }
        
        vector<int>res;
        while(!h.empty())
        {
            res.push_back(h.top().second);
            h.pop();
        }
        
        return res;
        
    }
};
