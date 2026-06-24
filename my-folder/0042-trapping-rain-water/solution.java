class Solution {
    public int trap(int[] height) {
        int n = height.length;
        int res = 0;
        int left = 0, leftMax = height[0], right = n - 1, rightMax = height[right];

        while (left < right) {
            leftMax = Math.max(height[left], leftMax);
            rightMax = Math.max(height[right], rightMax);
            if (leftMax < rightMax) {
                res += leftMax - height[left];
                left++;
            }
            else{
                res += rightMax - height[right];
                right--;
            }
        }
        return res;
    }
}
