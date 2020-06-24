class NumArray {
public:
	map<int,int> s;

    NumArray(vector<int>& nums) {
    	
    	s.insert(pair<int,int>(-1,0));
    	int sum=0;

    	for(int i=0;i<nums.size();i++)
    		{
    			sum+=nums[i];
    			s.insert(pair<int,int>(i,sum));
            } 
	    }
    
    int sumRange(int i, int j) {
  	 return s.at(j)-s.at(i-1);
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(i,j);
 */
