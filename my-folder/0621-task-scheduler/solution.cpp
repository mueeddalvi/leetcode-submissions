class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        int count[27];
        int nc=sizeof(count)/sizeof(count[0]);
        memset(count,0,sizeof(count));
        for(char c:tasks)
            count[c-'A']++;
        sort(count,count+nc,greater<int>());
        int ideal=(count[0]-1)*n;
        
        for(int i=1;i<nc-1;i++)
        {
            ideal=ideal-min(count[0]-1,count[i]);
        }
        
        return tasks.size()+max(0,ideal);
    }
};
