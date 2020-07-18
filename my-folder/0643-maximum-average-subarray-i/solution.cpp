class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int s=nums.size();
        double sum=0;
        for(int i=0;i<k;i++)
            sum+=nums[i];
        double res=sum;
        for(int i=k;i<s;i++)
        {
            sum+=nums[i]-nums[i-k];
            res=max(res,sum);
        }
        return res/k;
    }
};
