class Solution {
public:
    bool isMonotonic(vector<int>& a) {
        int n=a.size();
        
        bool inc=true,dec=true;;
        
        for(int i=0;i<n-1;i++)
        {
            if(a[i]>a[i+1])
                inc=false;
            if(a[i]<a[i+1])
                dec=false;
        }
        return inc or dec;
        
    }
};
