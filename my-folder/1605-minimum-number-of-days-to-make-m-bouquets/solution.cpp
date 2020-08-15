class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n=bloomDay.size();
        if(m*k>n)
            return -1;
        int start=INT_MAX,end=INT_MIN,mid=0,res=-1;
        
        for(int i=0;i<n;i++)
        {
            start=min(start,bloomDay[i]);
            end=max(end,bloomDay[i]);
        }
        
        while(start<=end)
        {
            mid=start+(end-start)/2;
            if(isValid(bloomDay,m,k,n,mid))
            {
                res=mid;
                end=mid-1;
            }
            else
                start=mid+1;
        }
        
        return res;
    }
    
    bool isValid(vector<int>days,int m, int k, int n, int mid)
    {
        int flow=0,bouq=0;
        
        for(int i=0;i<n;i++)
        {
            flow++;
            if(days[i]>mid)
            {
                flow=0;
            }
            else if(flow>=k)
            {
                bouq++;
                flow=0;
            }
        }
        if(bouq>=m)
            return true;
        else return false;
    }
};
