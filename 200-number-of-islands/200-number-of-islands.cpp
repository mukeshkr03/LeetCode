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
        int n=grid.size();
        int m=grid[0].size();
        int cnt=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='1'){
                    dfs(grid,i,j,n,m);
                    cnt++;
                }
            }
        }
        return cnt;
    }
};