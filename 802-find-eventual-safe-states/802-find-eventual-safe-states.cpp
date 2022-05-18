class Solution {
    
public:
    bool dfs(vector<vector<int>>& graph,vector<int>&vis,int v){
        if(vis[v]!=-1){
            return vis[v];
        }
        vis[v] = 0;
        
        for(auto u:graph[v]){
            if(dfs(graph,vis,u)==false){
                return false;
            }
        }
        vis[v] = 1;
        return vis[v];
    }
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<int>vis(n,-1);
        for(int i = 0;i<n;i++){
            if(vis[i]==-1){
                dfs(graph,vis,i);
            }
        }
        vector<int>ans;
        for(int i = 0;i<n;i++){
            if(vis[i]==1){
                ans.push_back(i);
            }
        }
        return ans;
    }
};