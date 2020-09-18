class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n=arr.size();
        int c=0,diff=0,start=0;
        
        for(int i=0;i<n;i++)
        {
            diff=arr[i]-start-1;
            if(k>diff)
            {
                k-=diff;
            }
            else
                return start+k;
                
            start=arr[i];
        }
        
        return start+k;
    }
};
