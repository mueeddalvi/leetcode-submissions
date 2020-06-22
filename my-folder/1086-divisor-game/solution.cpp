#include <bits/stdc++.h> 
class Solution {
public:
    bool divisorGame(int N) {
        bool dp[N+1];
        memset(dp,false,sizeof(dp));
        dp[0]=false;;
        dp[1]=false;
        
        for(int i=2;i<=N;i++)
        {
            for(int j=1;j<=i;j++)
            {
                if(i%j==0 && !dp[i-j])
                    dp[i]=true;
                    break;
            }
        }
        
        return dp[N];
    }
};
