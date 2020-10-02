class Solution {
public:
    string strWithout3a3b(int a, int b) {
        int total =a+b;
        string res="";
        
        int xa=0,xb=0;
        
        while(total-- >0)
        {
            if((b>=a and xb!=2) or (b>0 and xa==2))
            {
                res.push_back('b');
                b--;
                xb++;
                xa=0;
            }
            else if((a>=b and xa!=2) or (a>0 and xb==2))
            {
                res.push_back('a');
                a--;
                xa++;
                xb=0;
            }
        }
        return res;
    }
};
