class Solution {
public:
    void dfs(int a, vector<int>&visited,vector<int>edge[]){
        if(visited[a] == 0){
            visited[a] = 1;
            for(auto i:edge[a]){
                dfs(i,visited,edge);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& co) {
        int n = co.size();
        vector<int>edge[n+1];
        for(int i = 0;i<n;i++){
            for(int j = 0;j<n;j++){
                if(co[i][j] == 1){
                    edge[i+1].push_back(j+1);
                    edge[j+1].push_back(i+1);
                }
            }
        }
        vector<int>visited(n+1,0);
        int ans = 0;
        for(int i = 1;i<=n;i++){
            if(visited[i]==0){
                ans++;
                dfs(i,visited,edge);   
            }
        }
        return ans;
    }
};