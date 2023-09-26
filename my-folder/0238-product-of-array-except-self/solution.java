class Solution {
    public int[] productExceptSelf(int[] nums) {

        int n=nums.length;

        int prefix[]=new int[n];
        int postfix[]=new int[n];

        prefix[0]=postfix[n-1]=1;
        
        for(int i=1;i<n;i++){
            prefix[i]=nums[i-1]*prefix[i-1];
        }

        for(int j=n-2;j>=0;j--){
            postfix[j]=nums[j+1]*postfix[j+1];
        }

        int res[]=new int[n];
        for(int i=0;i<n;i++){
            res[i]=prefix[i]*postfix[i];
        }
        return res;
    }
}
