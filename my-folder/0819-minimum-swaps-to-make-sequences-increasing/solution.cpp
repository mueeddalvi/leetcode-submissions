class Solution {
public:
    int minSwap(vector<int>& a, vector<int>& b) {
        int n=a.size();
        int ns[1000]={0};
        int s[1000]={1};
        
        for(int i=1;i<n;i++)
        {
            ns[i]=s[i]=INT_MAX-1;
            if(a[i-1]<a[i] and b[i-1]<b[i]){
                ns[i]=ns[i-1];
                s[i]=s[i-1]+1;
            }
            if(a[i-1]<b[i] and b[i-1]<a[i]){
                s[i]=min(s[i],ns[i-1]+1);
                ns[i]=min(s[i-1],ns[i]);
            }
        }
        
        return min(s[n-1],ns[n-1]);
        
    }
};
