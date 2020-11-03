class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int n=nums.size();
        if(n==0)
            return 0;
        set<int>s;
        
        for(int x:nums)
        {
            s.insert(x);
            if(s.size()>3)
                s.erase(s.begin());
        }
        
        if(s.size()==3)
            return *s.begin();
        return *s.rbegin();
    }
};
