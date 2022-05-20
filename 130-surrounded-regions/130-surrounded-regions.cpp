class Solution {
public:
    void dfs(vector<vector<char>>& board,int i,int j){
        int n = board.size();
        int m = board[0].size();
        if(board[i][j]=='X') return;
        board[i][j]='t';
        if(i>0 && board[i-1][j]=='O') dfs(board,i-1,j);
        if(i<n-1 && board[i+1][j]=='O') dfs(board,i+1,j);
        if(j>0 && board[i][j-1]=='O') dfs(board,i,j-1);
        if(j<m-1 && board[i][j+1]=='O') dfs(board,i,j+1);
    }
    void solve(vector<vector<char>>& board) {
        int n = board.size();
        int m = board[0].size();
        for(int i = 0;i<n;i++){
            if(board[i][0]=='O'){
                dfs(board,i,0);
            }
        }
        for(int i = 0;i<n;i++){
            if(board[i][m-1]=='O'){
                dfs(board,i,m-1);
            }
        }
        for(int i = 0;i<m;i++){
            if(board[0][i]=='O'){
                dfs(board,0,i);
            }
        }
        for(int i = 0;i<m;i++){
            if(board[n-1][i]=='O'){
                dfs(board,n-1,i);
            }
        }
        for(int i = 0;i<n;i++){
            for(int j= 0;j<m;j++){
                if(board[i][j]=='O') board[i][j]='X'; 
            }
        }
        for(int i = 0;i<n;i++){
            for(int j= 0;j<m;j++){
                if(board[i][j]=='t') board[i][j]='O'; 
            }
        }
        
    }
};