class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
            return false;
        string n=to_string(x);
        
        int i=0,j=n.length()-1;
        while(i<=j)
        {
            if(n[i]!=n[j])
                return false;
            i++;
            j--;
        }
        return true;
        
    }
};
