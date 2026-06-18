class Solution {
    public int[] topKFrequent(int[] nums, int k) {

        Map<Integer, Integer> map = new HashMap<Integer, Integer>();
        int res[] = new int[k];

        for (int num : nums) {
            map.putIfAbsent(num, 0);
            map.put(num, map.get(num) + 1);
        }

        int maxKey = Integer.MIN_VALUE;
        int maxValue = Integer.MIN_VALUE;
        int temp = k;
        int i=0;
        while (temp > 0) {
            for (Map.Entry<Integer, Integer> entry : map.entrySet()) {
                if (entry.getValue() > maxValue) {
                    maxKey = entry.getKey();
                    maxValue = entry.getValue();
                }
            }
            
            System.out.println(map);
            System.out.println(maxKey);
            System.out.println(maxValue);
            System.out.println("------------------");
            map.remove(maxKey);
            res[i]=maxKey;
            i++;
            temp--;
            maxKey = Integer.MIN_VALUE;
            maxValue = Integer.MIN_VALUE;
        }

        return res;
    }
}
