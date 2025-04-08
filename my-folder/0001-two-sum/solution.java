class Solution {
    public int[] twoSum(int[] nums, int target) {

        Map<Integer,Integer> map=new HashMap<Integer,Integer>();
        int res[]=new int[2];
        int t=target;
        map.put(t-nums[0],0);
        for(int i=1;i<nums.length;i++){
            if(map.containsKey(nums[i])){
                res[0]=map.get(nums[i]);
                res[1]=i;
                return res;
            }
            map.put(t-nums[i],i);
        }
        return res;
    }
}
