class Solution {
    // int bs(vector<int>& nums, int target, int start, int end)
    // {
    //     int l=start,h=end;
    //     while(l<=h)
    //     {
    //         int mid=l+(h-l)/2;
    //         if(nums[mid]==target)
    //             return mid;
    //         else if(nums[mid]>target)
    //             h=mid-1;
    //         else
    //             l=mid+1;
    //     }
    //     return -1;
    // }
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        if(n==0)
            return -1;
        // if(n==1)
        // {
        //     if(nums[0]==target)
        //         return 0;
        //     else 
        //         return -1;
        // }
        int start=0,end=n-1,mid,prev,next;
        
        while(start<=end)
        {
            mid=start+(end-start)/2;
            prev=(mid-1+n)%n;
            next=(mid+1)%n;
            
            if(nums[mid]==target)
                return mid;
            
            else if(nums[start]<=nums[mid])
            {
                if(target<=nums[mid] and target>=nums[start])
                    end=mid-1;
                else
                    start=mid+1;
            }
            else
            {
                if(target>=nums[mid] and target<=nums[end])
                    start=mid+1;
                else
                    end=mid-1;
            }
        }
        return -1;
        
    }
};
