class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        if(numCourses==0)
            return false;
        if(prerequisites.size()==0)
            return true;
        vector<vector<int>> adj(numCourses,vector<int>());
        for(vector<int>& pre:prerequisites)
            adj[pre[0]].push_back(pre[1]);
        

        
        vector<int> visited(numCourses,0);
        for(int i=0;i<numCourses;i++)
            if(visited[i]==0 and dfs(adj,visited,i))
                return false;
        return true;
        
    }
    bool dfs(vector<vector<int>>& adj, vector<int>& visited, int index)
    {
        if(visited[index]==1)
            return true;
        if(visited[index]==2)
            return false;
        visited[index]=1;
        for(int ad:adj[index])
            if(dfs(adj,visited,ad))
                return true;
        visited[index]=2;
        return false;   
    }
};
