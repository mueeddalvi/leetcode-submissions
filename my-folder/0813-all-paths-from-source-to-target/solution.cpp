class Solution {
    
    void dfs(vector<vector<int>>& graph, vector<int>& path,
             vector<vector<int>>& result, int index)
    {
        path.push_back(index);
        if(index==graph.size()-1)
            result.push_back(path);
        else
           for(int v:graph[index])
               dfs(graph, path, result, v);
        path.pop_back();
        
    }
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        
        vector<vector<int>>result;
        vector<int>path;

        dfs(graph, path, result, 0);
        return result;
    }
};
/*
o-> not visited
1-> visiting
2-> completed
*/
