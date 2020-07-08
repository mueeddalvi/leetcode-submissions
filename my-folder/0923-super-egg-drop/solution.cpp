class Solution {
public:
     int dp[101][10001];
     Solution()
    {
        memset(dp,-1,sizeof(dp));
    }
 
    
    int superEggDrop(int K, int N) {
        
        if(K==1)
            return N;
        if(N==0||N==1)
            return N;
        if(dp[K][N]!=-1)
            return dp[K][N];
        
        int m=INT_MAX;
//         for(int i=1;i<=N;i++)
//         {
//             int l,h;
//             if(dp[K-1][i-1]!=-1)
//                 l=dp[K-1][i-1];
//             else
//                 l=superEggDrop(K-1,i-1);
            
//             if(dp[K][N-i]!=-1)
//                 h=dp[K][N-i];
//             else
//                 h=superEggDrop(K,N-i);
                
//             int t=1+max(l,h);
//             m=min(m,t);
            
//         }
        
        int lo=1,hi=N;
        while(lo<hi)
        {
            int mid=lo+(hi-lo)/2;
            int l,r;
            
            if(dp[K-1][mid-1]!=-1)
                l=dp[K-1][mid-1];
            else
                l=superEggDrop(K-1,mid-1);
            
            if(dp[K][N-mid]!=-1)
                r=dp[K][N-mid];
            else
                r=superEggDrop(K,N-mid);
                
            int t=1+max(l,r);
            m=min(m,t);
            if(l==r)
                break;
            else if(l<r)
                lo=mid+1;
            else 
                hi=mid;       
       }
        
        return dp[K][N]=m;
            
    }
   
};
