class Solution {
public:
    string removeKdigits(string num, int k) {
        int len=num.length();
        if(len==k)
            return "0";
        if(k==0)
            return num;
        
        stack<char>s;
        string res="";
        int i=0;
        char c;
        for(i=0;i<len;i++){
            c=num.at(i);
            while(k>0 and !s.empty() and s.top()>c){
                s.pop();
                k--;
            }
           s.push(c);
        }
        
        while(k>0)
        {
            s.pop();
            k--;
        }
        
        while(!s.empty()){
            res+=s.top();
            s.pop();
        }
        reverse(res.begin(),res.end());
        
        i=0;
        while(i<res.length()-1 and res[i]=='0')
            res.erase(res.begin()+i);
        return res;
            
        
    }
};
