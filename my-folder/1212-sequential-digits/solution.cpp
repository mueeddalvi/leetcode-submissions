class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        int curr=0,num=0,nxt=0;
        vector<int>res;
        for(int i=1;i<=9;i++)
        {
            num=nxt=i;
            
            while(num<=high and nxt<10)
            {
                if(num>=low)
                    res.push_back(num);
                nxt+=1;
                num=(num*10)+nxt;
            }
        }
        sort(res.begin(),res.end());
        return res;
    }
};
