typedef pair<int,vector<int>> ppi;
class Solution {
public:
    struct comp{
      bool operator()(ppi x, ppi y)
      {
          return x.first<y.first;
      }
    };
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        int n=points.size();
        priority_queue<ppi,vector<ppi>,comp>h;
        int d=0;
        for(vector<int>point:points)
        {
            d=point[0]*point[0]+point[1]*point[1];
            h.push({d,point});
            if(h.size()>k)
                h.pop();
        }
        
        vector<vector<int>> res;
        while(!h.empty())
        {
            res.push_back(h.top().second);
            h.pop();
        }
        
        return res;
        
    }
};
