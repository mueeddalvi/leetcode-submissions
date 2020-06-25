class Solution {
public:
    int reverse(int x) {
        
        bool f=false;
    if(x>=INT_MAX||x<=INT_MIN)
        return 0;
	if(x<0)
		{
			f=true;
			x=-x;
		}

	long int rev=0;
	while(x>0&&rev<INT_MAX&&rev>INT_MIN)
	{
		if((rev*10)+(x%10)>=INT_MAX||(rev*10)+(x%10)<=INT_MIN)
            return 0;
        rev=(rev*10)+(x%10);
		x/=10;
	}
	if(f)
	    rev=-rev;

	return (int)rev;
        
    }
};
