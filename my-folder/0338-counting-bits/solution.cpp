class Solution {
public:
    vector<int> countBits(int num) {
        vector<int> res(num+1,0);
        if(num==0)
            return res;
        res[0]=0;
        for(int i=1;i<num+1;i++)
            res[i]=res[i/2]+i%2;
        
        return res;
    }
};
