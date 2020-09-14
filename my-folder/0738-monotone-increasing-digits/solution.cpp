typedef long long int lint;
class Solution {
public:
    int monotoneIncreasingDigits(int n) {
        string s=to_string(n);
        
        int i=1;
        while(i<s.length() and (s[i]>=s[i-1]))
            i++;
        while(i>0 and s[i]<s[i-1] and i<s.length())
        {
            s[i-1]--;
            i--;
        }
        for(int j=i+1;j<s.length();j++)
            s[j]='9';
        int res=stoi(s);
        
        return res;
        
    }
};
