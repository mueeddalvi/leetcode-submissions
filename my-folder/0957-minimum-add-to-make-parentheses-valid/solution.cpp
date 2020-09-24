class Solution {
public:
    int minAddToMakeValid(string s) {
        int n=s.length();
        
        if(n==0)
            return n;
        if(n==1)
            return n;
        int right=0,left=0,count=0;
        
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(')
                right++;
            else if(right>0)
                right--;
            else
                left++;
        }
        return right +left;
        
    }
};
