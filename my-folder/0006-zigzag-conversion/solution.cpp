class Solution {
public:
    string convert(string s, int numRows) {
        int n=s.length();
        if(numRows==1)
            return s;
        vector<string>rows(min(n,numRows));
        int currRow=0,flag=1;
        
        for(char x:s)
        {
            rows[currRow]+=x;
            if(currRow==numRows-1)
                flag=0;
            else if(currRow==0)
                flag=1;
            if(flag==0)
                currRow--;
            else if(flag==1)
                currRow++;
        }
        
        string res="";
        for(string r:rows)
            res+=r;
        return res;
        
    }
};
