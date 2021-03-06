class Solution {
public:
    bool possible(vector<vector<char>>& grid,int i,int j, int n,int m){
        if(i<0 || i>=n || j<0 || j>=m || grid[i][j]=='0' || grid[i][j]=='v'){
            return false;
        }
        return true;
    }
   void dfs(vector<vector<char>>& grid,int i,int j){
        grid[i][j]='v';  // mark as visited
        int n = grid.size(); int m = grid[0].size();
        
        if(possible(grid,i+1, j,  n, m)) dfs(grid,i+1,j);
        if(possible(grid,i-1, j,  n, m)) dfs(grid,i-1,j);
        if(possible(grid,i, j+1,  n, m)) dfs(grid,i,j+1);
        if(possible(grid,i, j-1,  n, m)) dfs(grid,i,j-1);
        return;
    }
    
    
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int cnt=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='1'){
                    cnt++;
                    dfs(grid,i,j);
                }
            }
        }
        return cnt;
    }
};