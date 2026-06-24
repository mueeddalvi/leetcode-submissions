class Solution {
    public List<List<Integer>> threeSum(int[] nums) {

        Arrays.sort(nums);
        int length = nums.length;
        List<List<Integer>> res = new ArrayList<>();
        for (int i = 0; i < length; i++) {
            if (nums[i] > 0)
                break;
            if (i > 0 && nums[i - 1] == nums[i])
                continue;

            int l = i + 1, r = nums.length - 1;

            while (l < r) {
                int sum = nums[l] + nums[r] + nums[i];
                if (sum == 0) {
                    LinkedList<Integer> temp = new LinkedList<>(Arrays.asList(nums[i], nums[l], nums[r]));
                    res.add(temp);
                    l++;
                    r--;
                    while (l < r && nums[l - 1] == nums[l]) {
                        l++;
                    }
                } else if (sum > 0) {
                    r--;
                } else {
                    l++;
                }
            }
        }

        return res;

    }

}
