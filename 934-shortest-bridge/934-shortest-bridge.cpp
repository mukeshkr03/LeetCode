class Solution {
public:
    void dfs(vector<vector<int>>& grid, int i, int j, queue<pair<int,int>>&q){
        int r = grid.size();
        int c = grid[0].size();
        if(i < 0 || j < 0 || i >= r || j >= r || grid[i][j] == 0 || grid[i][j] == 2)
        {
            return;
        }
        q.push({i,j});
        grid[i][j] = 2;
        dfs(grid,i, j+1,q);
        dfs(grid, i, j-1,q);
        dfs(grid, i+1,j,q);
        dfs(grid,i-1,j,q);
        return;
    }
    int shortestBridge(vector<vector<int>>& grid) {
        queue<pair<int,int>>q;
        int r = grid.size(), c = grid[0].size();
        for(int i = 0;i<r;i++){
            for(int j = 0;j<c;j++){
                if(grid[i][j] == 1){
                    dfs(grid, i, j, q);
                    break;
                }
            }
            if(!q.empty()){
                break;
            }
        }
        
        int level = 0;
        vector<vector<int>>dirs = {{1,0},{-1,0},{0,1},{0,-1}};
        while(!q.empty()){
            int sze = q.size();
            for(int i = 0;i<sze;i++){
                pair<int,int>p = q.front();
                q.pop();
                int x = p.first;
                int y = p.second;
                
                for(auto k: dirs){
                    int currx = x+k[0];
                    int curry = y+k[1];
                    
                    if(currx < 0 || curry < 0 || currx >= grid.size() || curry >=                                               grid[0].size() || grid[currx][curry] == 2)
                    {
                        continue;
                    }
                    if(grid[currx][curry] == 1)
                    {
                        return level;
                    }
                    else{
                        grid[currx][curry] = 2;
                        q.push({currx,curry});
                    }
                }
            }
            level++;
        }
        return 0;
    }
};