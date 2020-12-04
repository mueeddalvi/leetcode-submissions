class item{
    int index,val;
    item(int index,int val)
    {
        this->index=index;
        this->val=val;
    }
};
typedef pair<int,pair<int,int>> pi;
class Solution {
public:
    vector<int> smallestRange(vector<vector<int>>& nums) {
        vector<int> res;
        int n=nums.size(),high=INT_MIN;
        priority_queue<pi,vector<pi>,greater<pi>> pq;
        
        for(int i=0;i<n;i++)
        {
            high=max(high,nums[i][0]);
            pq.push({nums[i][0],{i,0}});
        }
        int low=pq.top().first;
        res={low,high};
        while(pq.size()==n)
        {
            auto p=pq.top();
            pq.pop();
            int val=p.first;
            int r=p.second.first;
            int c=p.second.second;
            
            if(c+1<nums[r].size())
            {
                pq.push({nums[r][c+1],{r,c+1}});
                high=max(high,nums[r][c+1]);
                low=pq.top().first;
                if(high-low<res[1]-res[0])
                {
                    res[1]=high;
                    res[0]=low;
                }
            }
        }
        return res;
    }
};
