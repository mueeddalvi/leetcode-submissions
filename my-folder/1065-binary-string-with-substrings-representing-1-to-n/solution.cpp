class Solution {
public:
    bool queryString(string S, int N) {
        while(N>0)
        {
            bitset<32>bs(N--);
            string s=bs.to_string();
            if(S.find(s.substr(s.find("1")))==string::npos)
                return false;
        }
        return true;
    }
};
