class Solution {
public:
    string longestDiverseString(int a, int b, int c) {
        string res="";
        if(!a and !b and !c)
            return res;
        int total=a+b+c;
        
        int xa=0,xb=0,xc=0;
        
        while(total-- >0)
        {
            if((xa!=2 and a>=b and a>=c) or (a>0 and (xb==2 or xc==2)))
            {
                res.push_back('a');
                a--;
                xb=xc=0;
                xa++;
            }
            else if((xc!=2 and c>=a and c>=b) or (c>0 and (xa==2 or xb==2)))
            {
                res.push_back('c');
                c--;
                xa=xb=0;
                xc++;
            }
            else if((xb!=2 and b>=a and b>=c) or (b>0 and (xa==2 or xc==2)))
            {
                res.push_back('b');
                b--;
                xa=xc=0;
                xb++;
            }
        }
        return res;
        
    }
};
