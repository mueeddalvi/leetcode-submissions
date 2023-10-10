class Solution {
    public int findTargetSumWays(int[] nums, int target) {

        return recur(0,0,nums,target);
        
    }

    public int recur(int i, int currentSum, int[] nums, int target){
        if(i==nums.length){
            return currentSum==target?1:0;
        }

        return recur(i+1,currentSum+nums[i], nums, target) + recur(i+1,currentSum-nums[i], nums, target); 
    }
}
