class Solution {
public:
    int minDistance(string word1, string word2) {
        int n = word1.length(),m = word2.length();
        int dp[n+1][m+1];
        
        for(int i = 0;i<=n;i++){
            for(int j = 0;j<=m;j++){
                if(i == 0 || j == 0){
                    dp[i][j] = max(i,j);
                }
            }
        }
        
        for(int i = 1;i<=n;i++){
            for(int j = 1;j<=m;j++){
                if(word1[i-1]==word2[j-1]){
                    dp[i][j] = dp[i-1][j-1];
                }
                else{
                    int a = 1 + dp[i-1][j-1];
                    int b = 1 + dp[i-1][j];
                    int c = 1 + dp[i][j-1];
                    dp[i][j] = min({a,b,c});
                }
            }
        }
        return dp[n][m];
        
    }
};