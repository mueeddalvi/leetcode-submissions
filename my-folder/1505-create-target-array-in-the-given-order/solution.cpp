class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int>res(nums.size(),0);
        vector<int>temp;
        
        for(int i=0;i<nums.size();i++)
            temp.insert(temp.begin()+index[i],nums[i]);
        
        return temp;
        
    }
};
