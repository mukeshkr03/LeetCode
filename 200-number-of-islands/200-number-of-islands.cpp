class Solution {
public:
    // bool possible(vector<vector<char>>& grid,int i,int j, int n,int m){
    //     if(i<n-1 && i>0 && j<m-1 && j>0 && grid[i][j]=='1'){
    //         return true;
    //     }
    //     return false;
    // }
   void dfs(vector<vector<char>>& grid,int i,int j,int m,int n){
        grid[i][j]='v';  // mark as visited
        
        if(i<m-1 && grid[i+1][j]=='1') dfs(grid,i+1,j,m,n);
        if(i>0 && grid[i-1][j]=='1') dfs(grid,i-1,j,m,n);
        if(j<n-1 && grid[i][j+1]=='1') dfs(grid,i,j+1,m,n);
        if(j>0 && grid[i][j-1]=='1') dfs(grid,i,j-1,m,n);
        else return;
    }
    
    
    int numIslands(vector<vector<char>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int cnt=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]=='1'){
                    dfs(grid,i,j,m,n);
                    cnt++;
                }
            }
        }
        return cnt;
    }
};