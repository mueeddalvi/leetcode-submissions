class Solution {
    public int majorityElement(int[] nums) {
        int num=nums.length/2;
        int res=nums[0];
        Map<Integer,Integer>map=new HashMap<Integer,Integer>();
        for(int x:nums){
            if(map.containsKey(x)){
                map.put(x,map.get(x)+1);
                if(map.get(x)>num)
                    res=x;
            }
            else{
                map.put(x,1);
            }
        }

        return res;
        
    }
}
