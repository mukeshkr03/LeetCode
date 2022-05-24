class Solution {
public:
    // int dp[51][51][51];
    int mod = 1e9 + 7;
    
    long long solve(int m, int n, int maxMove, int i, int j ,vector<vector<vector<int>>>&dp){
        
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
        
        ans+= solve(m,n,maxMove-1, i-1, j,dp);
        ans+= solve(m,n,maxMove-1, i, j-1,dp);
        ans+= solve(m,n,maxMove-1, i+1, j,dp);
        ans+= solve(m,n,maxMove-1, i, j+1,dp);
        
        return dp[i][j][maxMove] = ans%mod;
    }
    
    int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
        vector<vector<vector<int>>>dp(m+1, vector<vector<int>>(n+1,vector<int>(maxMove+1,-1)));
        // vector<vector<vector<int>>>dp(maxMove+1, vector<vector<int>> (m+1, vector<int>(n+1,-1)));
        // memset(dp,-1,sizeof dp);
        return solve(m,n, maxMove, startRow, startColumn , dp)%mod;
    }
};