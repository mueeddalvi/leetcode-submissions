class Solution {
public:
    int longestOnes(vector<int>& a, int K) {
        int l=0,r=0,max_len=INT_MIN,count=0,len=a.size();
        if(len<1)
            return 0;
        for(r=0;r<len;r++)
        {
            if(a[r]==0)
                count++;
            while(count>K)
            {
                if(a[l]==0)
                    count--;
                l++;
            }
            
            max_len=max(max_len,r-l+1);
        }
        
        return max_len;
    }
};
