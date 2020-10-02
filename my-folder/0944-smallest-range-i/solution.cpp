class Solution {
public:
    int smallestRangeI(vector<int>& A, int K) {
        
        int smallest=A[0],largest=A[0];
        
        for(int x:A)
        {
            smallest=min(smallest,x);
            largest=max(largest,x);
        }
        
        return (largest-K)-(smallest+K)>0?(largest-K)-(smallest+K):0;
        
    }
};
