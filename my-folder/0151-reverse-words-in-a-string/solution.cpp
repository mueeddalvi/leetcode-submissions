class Solution {
public:
    string reverseWords(string s) {
        int len=s.length();
        string s1="";
        if(len==0)
            return s;
        if(len==1)
        {
            if(s[0]==' ')
                return s1;
            return s1=s[0];
        }
	   int l=0,r=0;
  
   bool f=false;
        
   while(s[r]==' '&&r<len)//REMOVE WHITESPACE BEFORE
   	r++;
    if(r==len)
        return s1;
    int t=len-1;
    while(s[t]==' ')
   	    t--;
    s=s.substr(r,t-r+1);
    s+=" ";//ADD WHITESPACE TO CONSIDER LAST CHARACTER DUE TO R+1
    len=s.length();
        r=0;l=0;
   while(r<len)
   {
   	if(s[r+1]==' '&&s[r]!=' ')
   	{
        if(l==0)
            s1=" "+s.substr(l,r-l+1)+s1;
        else
            s1=s.substr(l,r-l+1)+s1;
   		f=true;
   	}
   	 if(s[r]==' ')
   	{
   		l=r;
   		f=false;
   	}
   	r++;
   	
   }
   l=0;
    // cout<<s1.length();
    if(s1.length()>0)
        r=s1.length()-1;
    else
    {return s1;}
   // cout<<s1<<endl;
   while(s1[l]==' '&&l<r&&l<s1.length())
   	l++;
   while(s1[r]==' '&&r>l&&r>0)
   	r--;
   s1=s1.substr(l,r);
    return s1;
    }
};
