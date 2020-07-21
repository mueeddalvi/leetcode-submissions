class Solution {
public:
    
    vector<int> countSmaller(vector<int>& nums) {
        vector<int>res(nums.size());
        if(nums.size()==0)
            return res;
        
        vector<pair<int,int>>numidx(nums.size());
        
        for(int i=0;i<nums.size();i++)
        {
            numidx[i]={nums[i],i};
        }
        
        for(int i=0;i<nums.size();i++)
            cout<<numidx[i].first<<" "<<numidx[i].second<<endl;
        
        
        
        merge(numidx,0,nums.size()-1,res);
        
        return res;
        
    }
    
    void merge(vector<pair<int,int>>&numidx, int start, int end, vector<int>&res)
    {
        if(start>=end) return;
        int mid=start+(end-start)/2;
        merge(numidx,start,mid,res);
        merge(numidx,mid+1,end,res);
        
        vector<pair<int,int>>merged;
        
        int l=start,r=mid+1, neralt=0;
        
        while(l<=mid&&r<=end)
        {
            if(numidx[l].first>numidx[r].first)
            {
                ++neralt;
                merged.push_back(numidx[r]);
                r++;
            }
            else
            {
                res[numidx[l].second]+=neralt;
                merged.push_back(numidx[l]);
                l++;
            }
        }
        
        while(l<=mid)
        {
            res[numidx[l].second]+=neralt;
            merged.push_back(numidx[l]);
            l++;
        }
        
        while(r<=end)
        {
            merged.push_back(numidx[r]);
            r++;
        }
        int pos=start;
        for(pair<int,int>m:merged)
        {
            numidx[pos].first=m.first;
            numidx[pos].second=m.second;
            pos++;
        }
        
    }
};
