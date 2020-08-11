class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int>path; 
        if(numCourses==0)
            return path;
        // if(prerequisites.size()==0)
        //     return true;
        
        //CREATING ADJACENCY LIST
        vector<vector<int>> adj(numCourses);
        for(vector<int>& pre:prerequisites)
            adj[pre[1]].push_back(pre[0]);
        

        
        vector<int> visited(numCourses,0);
        for(int i=0;i<numCourses;i++)
            if(visited[i]==0 and dfs(adj,visited,i,path))
                return {};
        reverse(path.begin(),path.end());
        return path;
        
    }
    
     bool dfs(vector<vector<int>>& adj, vector<int>& visited, int index, vector<int>& path)
    {
        if(visited[index]==1)
            return true;
         if(visited[index]==2)
             return false;
         visited[index]=1;
        for(int ad:adj[index])
        {
            if(visited[ad]==1) return true;
            if(visited[ad]==0 and dfs(adj,visited,ad,path))
                return true;
        }
        visited[index]=2;
        path.push_back(index);
        return false;       
    }
};
/*
0-> NOT VISITED
1-> PROCESSING
2-> PROCESSED
*/
