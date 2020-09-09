class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        if(numRows==0)
            return {};
        if(numRows==1)
            return {{1}};
        vector<vector<int>> res;
        vector<int>t;
        res.push_back({1});
        res.push_back({1,1});
        
       	for(int i=2;i<numRows;i++)
	    {
            t.push_back(1);
            vector<int>prev=res[i-1];
            for(int j=1;j<prev.size();j++)
            {
                t.push_back(prev[j-1]+prev[j]);
            }
            t.push_back(1);
            res.push_back(t);
            t.clear();
	    }
        
        return res;
        
    }
};
