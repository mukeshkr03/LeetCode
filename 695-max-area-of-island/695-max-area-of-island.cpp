class Solution {
public:
    void dfs(vector<vector<int>>& grid,int i,int j,int& cnt){
        if(grid[i][j]==0){
            return;
        }
        int n = grid.size(), m = grid[0].size();
        grid[i][j] =0 ;
        cnt++;
        if(i>0) dfs(grid,i-1,j,cnt);
        if(j>0) dfs(grid,i,j-1,cnt);
        if(i<n-1) dfs(grid,i+1,j,cnt);
        if(j<m-1) dfs(grid,i,j+1,cnt);
        
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
       int n = grid.size(), m = grid[0].size();
        int ans = INT_MIN;
        
        for(int i = 0;i<n;i++){
            for(int j = 0;j<m;j++){
                if(grid[i][j]==1){
                    int cnt = 0;
                   dfs(grid,i,j,cnt);
                    ans = max(cnt,ans);
                }
            }
        }
        if(ans==INT_MIN){
            return 0;
        }
        return ans;
    }
};