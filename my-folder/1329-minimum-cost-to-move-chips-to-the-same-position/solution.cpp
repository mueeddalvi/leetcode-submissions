class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
        int n=position.size(),ec=0,oc=0;
        
        for(int i=0;i<n;i++)
        {
            if(position[i]%2==0)
                ec++;
            else
                oc++;
        }
        
        return min(ec,oc);
        
    }
};
