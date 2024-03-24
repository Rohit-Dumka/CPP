class Solution {
  public:
    void dfs(int curr, vector<int>adj[], int vis[], vector<int>&ans){
        vis[curr]=1;
        ans.push_back(curr);
        
        for(auto it: adj[curr]){
            if(!vis[it])
                dfs(it,adj,vis,ans);
        }
    }
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        int visited[V] ={0}; //0 based indexing (given)
        int start=0;  //(given 0 based indexing)
        vector<int>ans;
        
        dfs(start,adj,visited,ans);
        
        return ans;
    }
};
