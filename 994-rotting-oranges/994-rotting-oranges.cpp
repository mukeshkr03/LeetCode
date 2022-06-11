class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size();
        queue<pair<int,int>>q;
        int fresh = 0;
        
       for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(grid[i][j] == 2){
                    // push into queue
                    q.push({i, j});
                }
                else if(grid[i][j] == 1){
                    fresh++;
                }
            }
        }
        if(fresh == 0) return 0;
        
        int time = 0;
        
        while(!q.empty()){
             int size_q = q.size();
            int temp = 0;
            
            while(size_q != 0){
                pair<int,int>p = q.front();
                q.pop();
                
                int x = p.first, y = p.second;
                
//                 if(i>0 && board[i-1][j] == 'O'){
//                     dfs(board,i-1,j,n,m);
//                 }

//                 if(j>0 && board[i][j-1] == 'O'){
//                     dfs(board,i,j-1,n,m);
//                 }

//                 if(i<m-1 && board[i+1][j] == 'O'){
//                     dfs(board,i+1,j,n,m);
//                 }

//                 if(j<n-1 && board[i][j+1] == 'O'){
//                     dfs(board,i,j+1,n,m);
//                 }
                
                
                if(x > 0 && grid[x-1][y] == 1){
                    grid[x-1][y] = 2;
                    q.push({x-1,y});
                    temp++;
                }
                
                if(y > 0 && grid[x][y-1] == 1){
                    grid[x][y-1] = 2;
                    q.push({x,y-1});
                    temp++;
                }
                
                if(x < n-1 && grid[x+1][y] == 1){
                    grid[x+1][y] = 2;
                    q.push({x+1,y});
                    temp++;
                }
                
                if(y < m-1 && grid[x][y+1] == 1){
                    grid[x][y+1] = 2;
                    q.push({x,y+1});
                    temp++;
                }
                
                size_q--;
            }
            if(temp!=0){
                time++;
            }
        }
        
       for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(grid[i][j] == 1){
                    time = 0;
                    break;
                }
            }
        }
        
        
        
        return (time == 0) ? -1 : time ;
    }
};