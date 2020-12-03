#define mod 1000000007;
class Solution {
public:
    
    int numOfSubarrays(vector<int>& arr) {
        int o=0,e=1,res=0,s=0,n=arr.size();
        for(int i=0;i<n;i++)
        {
            s+=arr[i];
            if(s%2==0)
            {
                res=(res+o)%mod;
                e++;
            }
            else
            {
                res=(res+e)%mod;
                o++;
            }
        }
        
        return res;
        
    }
};
