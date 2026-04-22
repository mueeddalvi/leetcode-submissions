class Solution {
    public int[] twoSum(int[] nums, int target) {
        int diff;
        int length=nums.length;
        int res[]=new int[2];
        boolean flag=true;
        for(int i=0;i<length&&flag;i++){
            diff=target-nums[i]; //10
            for(int j=i+1;j<length;j++){
                if(diff==nums[j]){
                    res[0]=i;
                    res[1]=j;
                    flag=false;
                    break;
                }
            }
        }

        return res;
    }
}
