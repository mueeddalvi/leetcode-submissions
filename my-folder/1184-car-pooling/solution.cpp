class Solution {
public:
    bool comp(vector<int>& x, vector<int>&y){
        return y[1]>x[1];
    }
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        int n=trips.size(),z=capacity;
        
        vector<pair<int,int>>store;
        for(vector<int>x:trips)
        {
            store.push_back({x[1],x[0]});
            store.push_back({x[2],-x[0]});
        }
        sort(store.begin(),store.end());
        int current=0;
        
        for(int i=0;i<store.size();i++){
            current+=store[i].second;
            if(current>capacity)
                return false;
        }
        return true;
    }
};
