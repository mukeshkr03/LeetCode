class Solution {
public:
    int dp[51][51][51];
    int mod = 1e9 + 7;
    
    long long solve(int m, int n, int maxMove, int i, int j){
        
        if(i<0 || j<0 || i>=m || j>=n){
            return 1;
        }    
        
        if(maxMove == 0){
            return 0;
        }
        if(dp[i][j][maxMove]!=-1){
            return dp[i][j][maxMove];
        }
        long long ans = 0;
        
        ans+= solve(m,n,maxMove-1, i-1, j);
        ans+= solve(m,n,maxMove-1, i, j-1);
        ans+= solve(m,n,maxMove-1, i+1, j);
        ans+= solve(m,n,maxMove-1, i, j+1);
        
        return dp[i][j][maxMove] = ans%mod;
    }
    
    int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
        memset(dp,-1,sizeof dp);
        return solve(m,n, maxMove, startRow, startColumn)%mod;
    }
};