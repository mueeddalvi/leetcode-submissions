class Solution {
public:
    
    struct comp{
      bool operator()(pair<int,string>x,pair<int,string>y)
      {
          if(x.first!=y.first)
              return x.first>y.first;
          return x.second<y.second;
          
      }
    };
    
    vector<string> topKFrequent(vector<string>& words, int k) {
        int n=words.size();
        vector<string>res;
        priority_queue<pair<int,string>,vector<pair<int,string>>, comp>h;
        unordered_map<string,int>m;
        
        for(string word:words)
            m[word]++;
        
        for(auto it=m.begin();it!=m.end();it++)
        {
            h.push({it->second,it->first});
            if(h.size()>k)
                h.pop();
        }
        
        while(!h.empty())
        {
            res.insert(res.begin(),h.top().second);
            h.pop();
        }
        //reverse(res.begin(),res.end());
        return res;
        
    }
};
