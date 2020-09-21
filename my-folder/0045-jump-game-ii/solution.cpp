class Solution {
public:
    int jump(vector<int>& nums) {
        int n=nums.size();
        int des=0,pos=0,jump=0;
        if(n<=1)
            return 0;
        
        for(int i=0;i<n-1;i++){
            des=max(des,nums[i]+i);
            if(pos==i){
                pos=des;
                jump++;
            }
        }
        return jump;
    }
};
