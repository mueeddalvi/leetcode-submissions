class Solution {
public:
    string multiply(string num1, string num2) {
        int n1=num1.length(),n2=num2.length();
        
        if(!n1 or !n2)
            return "0";
        if(num1=="0" or num2=="0")
            return "0";
        int pos[n1+n2];
        memset(pos,0,sizeof(pos));
        int p1,p2,x,mul,sum,num;
        for(int i=n1-1;i>=0;i--)
        {
            num=num1[i]-'0';
            for(int j=n2-1;j>=0;j--)
            {
                p1=i+j,p2=i+j+1;
                x=num2[j]-'0';
                mul=num*x;
                sum=mul+pos[p2];
                
                
                pos[p1]+=mul/10;
                pos[p2]+=mul%10;
                
            }
        }
        
        int carry=0;
        
        for(int i=n1+n2-1;i>=0;i--)
        {
            sum=pos[i]+carry;
            pos[i]=sum%10;
            carry=sum/10;
        }
        
        
        string res="";
        for(int x:pos)
        {
            if(res.length()==0 and !x)
                continue;
            res.push_back(x+'0');
        }
        
        return res;
        
    }
};
