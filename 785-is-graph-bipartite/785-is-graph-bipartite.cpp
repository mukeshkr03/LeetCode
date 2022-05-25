class Solution {
public:
    bool solve(vector<vector<int>>& graph,int par,int src, int col, vector<int>&vis){
        for(auto i:graph[src]){
            if(vis[i] == -1){
                vis[i] = 3 - col;
                if(!solve(graph, src, i, 3-col, vis)){
                    return false;
                };
            }
            else if(i!=par && vis[src] == vis[i]){
                return false;
            }
        }
        return true;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<int>vis(n,-1);
        for(int i = 0;i<n;i++){
            if(vis[i]==-1){
                vis[i] = 1;
                if(!solve(graph, i, i, 1, vis)){
                    return false;
                }   
            }
        }
        return true;
    }
};