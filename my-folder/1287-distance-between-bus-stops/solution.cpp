class Solution {
public:
    int distanceBetweenBusStops(vector<int>& distance, int start, int destination) {
        if(start>destination)
            swap(start,destination);
        int s1=0,s2=0;
        for(int i=0;i<distance.size();i++)
        {
            if(i>=start and i<destination)
                s1+=distance[i];
            else
                s2+=distance[i];
        }
        return min(s1,s2);
        
    }
};
