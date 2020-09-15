class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
        if(n==0)
            return 1;
        int res=10,curr=9,avail=9;
        
        while(n-- >1){
            curr=curr*avail;
            avail--;
            res+=curr;
        }
        return res;
        
    }
};
