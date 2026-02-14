class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> adj(numCourses);
        for(int i=0;i<prerequisites.size();i++){
            adj[prerequisites[i][1]].push_back(prerequisites[i][0]);
        }
        vector<bool>visited(numCourses,false);
        vector<bool>path(numCourses,false);

        for(int i=0;i<numCourses;i++){
            if(!visited[i])
                if (dfs(i,adj,visited,path)) return false;
        }
        return true;
    }

    bool dfs(int node,vector<vector<int>>& adj ,vector<bool>& visited, vector<bool>& path){
        visited[node]=true;
        path[node]=true;
        for(int i=0;i<adj[node].size();i++){
            int curr=adj[node][i];
            if(!visited[curr]) dfs(curr,adj,visited,path);
            if(path[curr]) return true;
        }
        path[node]=false;
        return false;
    }
};