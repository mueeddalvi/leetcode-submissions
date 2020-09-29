class Solution {
public:
    int minSetSize(vector<int>& arr) {
        int n=arr.size();
        vector<int>m((int)1e5+1,0);
        for(int x:arr)
            m[x]++;
        sort(m.begin(),m.end(),greater<int>());
        int count=0,size=0;

        for(int i=0;i<(int)1e5+1 and m[i]>0;i++)
        {
            size+=m[i];
            count++;
            if(size>=n/2)
                return count;
        }
        
        return count;
        
    }
};
