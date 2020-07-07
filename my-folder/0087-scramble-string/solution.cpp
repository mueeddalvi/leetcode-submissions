class Solution {
public:
    map<string,int> dp;
    bool isScramble(string s1, string s2) {
        int n1=s1.length();
        int n2=s2.length();
        if(n1!=n2)
            return false;
        if(n1==0&&n2==0)
            return true;
        string k=s1;
        k.push_back(' ');
        k.append(s2);

        if(dp.find(k)!=dp.end())
            return dp[k];
        
        if(s1.compare(s2)==0)
            return true;
        if(s1.length()<=1)
            return false;
        bool flag=false;
        
        for(int i=1;i<=n1-1;i++)
        {
            bool t1=isScramble(s1.substr(0,i),s2.substr(n1-i,i))&&                                          isScramble(s1.substr(i,n1-i),s2.substr(0,n1-i));
            
            bool t2=isScramble(s1.substr(0,i),s2.substr(0,i))&&                                             isScramble(s1.substr(i,n1-i),s2.substr(i,n1-i));
            if(t1||t2)
            {
                flag=true;
                break;
            }
            
        }
        
        return dp[k]=flag;
        
    }
};
