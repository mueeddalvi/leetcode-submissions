class Solution {
public:
    int minFlips(int a, int b, int c) {
        int f=0;
        if(a==c and c==b)
            return 0;
        for(int i=0;i<31;i++)
        {
            if(c&(1<<i))// CHECKS IF i'th BIT OF C IS SET
            {
                
                if( !(a&(1<<i)) and !(b&(1<<i)) ) //IF BOTH BITS NOT SET
                {
                    f++;
                    
                }
            }
            
            else //IF i'th BIT NOT SET IN C
            {
               
                if( a&(1<<i) and b&(1<<i) ) //IF BOTH BITS SET
                {
                    f+=2;
                   
                }
                else if(a&(1<<i) or b&(1<<i)) // IF ONLY ONE BIT IS SET
                {
                    f++;
                 
                }
            }
        }
        return f;
        
    }
};
