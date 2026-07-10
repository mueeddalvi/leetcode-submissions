class Solution {
    public int findMin(int[] nums) {
        int length = nums.length;

        int l = 0, r = length - 1, mid = 0, res = Integer.MAX_VALUE;

        if (nums[l] < nums[r]) {
            return nums[l];
        }

        while (l <= r) {
            mid = l + (r - l) / 2;

            if(nums[l]<=nums[mid]){
                res=Math.min(res, nums[l]);
                l=mid+1;
            }
            else{
                res=Math.min(res,nums[mid]);
                r=mid-1;
            }
        }

        return res;

    }
}
