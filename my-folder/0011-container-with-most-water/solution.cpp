class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0,r=height.size()-1,res=0,area=0;
        
        while(l<r)
        {
            area=(r-l)*min(height[l],height[r]);
            if(height[l]<height[r])
                l++;
            else
                r--;
            res=max(res,area);
            
        }
        
        return res;
    }
};
