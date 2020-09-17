class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        
        int n=groupSizes.size();
        vector<vector<int>> res;
        
        map<int,vector<int>> store;
        
        for(int i=0;i<n;i++)
        {
            int key=groupSizes[i];
            if(store.count(key)>0){
                store[key].push_back(i);
                
            }
            else
            {
                store[key]=vector<int>{i};
            }
            if(store[key].size()==key)
            {
                res.push_back(store[key]);
                store.erase(key);
            }
        }
        return res;
    }
};
