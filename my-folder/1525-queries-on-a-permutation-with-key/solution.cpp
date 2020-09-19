class Solution {
public:
    vector<int> processQueries(vector<int>& queries, int m) {
        int n=queries.size();
        
        vector<int>dq,res;
        
        for(int i=1;i<=m;i++)
            dq.push_back(i);
        vector<int>::iterator it;
        for(int q:queries)
        {
            it=find(dq.begin(),dq.end(),q);
            int pos=*it;
            res.push_back(distance(dq.begin(),it));
            dq.erase(it);
            dq.insert(dq.begin(),q);
        }
        return res;
        
    }
};
