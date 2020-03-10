class Solution {
    public int[] twoSum(int[] nums, int target) {
        
        Map<Integer,Integer> m = new HashMap<>();
        int[] ans=new int[2];
        int s=0;
        
        for(int i=0;i<nums.length;i++)
        {
            s=target-nums[i];
            if(m.containsKey(s))
            {
                return new int[] {i,m.get(s)};
            }
            
            else
            {
                m.put(nums[i],i);
                
            }
        }
        
        return null;
    }
}

