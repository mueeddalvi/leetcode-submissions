class Solution {
    public int[] rearrangeArray(int[] nums) {
        int res []=new int[nums.length];
        int pos[]=new int[nums.length/2];
        int p=0,n=0;
        int neg[]=new int[nums.length/2];
        for(int x:nums){
            if(x>0)
                pos[p++]=x;
            else
                neg[n++]=x;
        }
        int mid=nums.length/2;
        for(int i=0;i<nums.length;){
            res[i++]=pos[mid-p];
            p--;
            res[i++]=neg[mid-n];
            n--;
        }

        return res;
    }
}
