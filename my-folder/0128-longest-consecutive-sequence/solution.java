class Solution {
    public int longestConsecutive(int[] nums) {
        Set<Integer> set = new HashSet<>();
        int length = nums.length, result = 0;

        for (int n : nums) {
            set.add(n);
        }

        for (int num : set) {
            if (!set.contains(num - 1)) {
                int j = 1;
                while (set.contains(num + j)) {
                    j++;
                }
                result = Math.max(result, j);
            }
        }

        return result;

    }
}
