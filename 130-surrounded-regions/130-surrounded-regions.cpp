class Solution {
public:
    void dfs(vector<vector<char>>& board, int i, int j, int n, int m){
        board[i][j] = -1;
        if(i>0 && board[i-1][j] == 'O'){
            dfs(board,i-1,j,n,m);
        }
        
        if(j>0 && board[i][j-1] == 'O'){
            dfs(board,i,j-1,n,m);
        }
        
        if(i<m-1 && board[i+1][j] == 'O'){
            dfs(board,i+1,j,n,m);
        }
        
        if(j<n-1 && board[i][j+1] == 'O'){
            dfs(board,i,j+1,n,m);
        }
        return;
    }
    void solve(vector<vector<char>>& board) {
        int m = board.size(), n = board[0].size();
        
        for(int i = 0;i<m;i++){
            if(board[i][0] == 'O'){
                dfs(board,i,0,n,m);
            }    
        }
        for(int i = 0;i<m;i++){
            if(board[i][n-1] == 'O'){
                dfs(board,i,n-1,n,m);
            }    
        }
        for(int j = 0;j<n;j++){
            if(board[0][j] == 'O'){
                dfs(board,0,j,n,m);
            }    
        }
        for(int j = 0;j<n;j++){
            if(board[m-1][j] == 'O'){
                dfs(board,m-1,j,n,m);
            }    
        }
        
        for(int i = 0;i<m;i++){
            for(int j = 0;j<n;j++){
                if(board[i][j] == 'O'){
                    board[i][j] = 'X';
                }
                
                if(board[i][j] == -1){
                    board[i][j] = 'O';
                }
            }
        }
        
        // return board;
    }
};