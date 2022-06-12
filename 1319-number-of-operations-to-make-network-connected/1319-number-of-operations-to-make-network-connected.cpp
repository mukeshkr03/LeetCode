class Solution {
public:
    void dfs(vector<int>&vis, vector<int>v[], int i){
        if(vis[i] == 1){
            return;
        }
        vis[i] = 1;
        for(auto x:v[i]){
            dfs(vis,v,x);
        }
    }
    int makeConnected(int n, vector<vector<int>>& connections) {
        int sze = connections.size();
        vector<int>v[n];
        
        if(sze < n-1){
            return -1;
        }
        
        for(auto i: connections){
            v[i[0]].push_back(i[1]);
            v[i[1]].push_back(i[0]);
        }
    
        vector<int>vis(n,-1);
        int cnt = 0;
        for(int i = 0;i<n;i++){
            if(vis[i] == -1){
                cnt++;
                dfs(vis,v,i);
            }
        }
        
        
        return cnt - 1;
    }
};