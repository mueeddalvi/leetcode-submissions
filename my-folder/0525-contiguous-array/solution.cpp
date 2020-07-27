class Solution {
public:
    int findMaxLength(vector<int>& nums) {
    
        if(nums.size()==1 or nums.size()==0)
            return 0;
    
    int sum=0,ca=0,i;
	map<int,int>m;
	for(i=0;i<nums.size();i++)
	{
		if(nums[i]==1)
			sum+=1;
		else
			sum-=1;
		if(sum==0)
			ca=max(ca,i+1);

		else if(m.find(sum)!=m.end())
		{
			ca=max(ca,i-m[sum]);
		}

		else
		{
			m[sum]=i;
		}
	}
	return ca;
    }
};
