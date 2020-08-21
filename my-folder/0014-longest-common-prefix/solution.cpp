class Solution {
public:
    bool isValid(vector<string>& strs, int start, int mid)
    {
        string s=strs[0];
        for(int i=0;i<strs.size();i++)
            for(int j=start;j<=mid;j++)
                if(strs[i][j]!=s[j])
                    return false;
        return true;
    }
    string longestCommonPrefix(vector<string>& strs) {
        
        if(strs.size()==0)
            return "";
        int x=strs[0].length();
        for(int i=0;i<strs.size();i++)
            if(strs[i].length()<x)
                x=strs[i].length();
        
        int start=0,end=x,mid=0;
        string prefix="";
        
        while(start<=end)
        {
            mid=start+(end-start)/2;
            if(isValid(strs,start,mid))
            {
                prefix=prefix+strs[0].substr(start,mid-start+1);
                start=mid+1;
            }
            else
                end=mid-1;
        }
        
        return prefix;
        
    }
};
