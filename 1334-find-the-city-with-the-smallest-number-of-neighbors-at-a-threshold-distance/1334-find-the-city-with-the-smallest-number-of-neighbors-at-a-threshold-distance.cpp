class Solution {
public:
    int findTheCity(int n, vector<vector<int>>& edges, int distanceThreshold) {
        int dp[n][n];
        for(int i = 0;i<n;i++){
                for(int j= 0;j<n;j++){
                    dp[i][j] = INT_MAX;
                }
            }
        
        for(int i = 0;i<n;i++){
            dp[i][i] = 0;
        }
        
        for(auto i:edges){
            dp[i[0]][i[1]] = i[2];
            dp[i[1]][i[0]] = i[2]; 
        }
        
        for(int k = 0;k<n;k++){
            for(int i = 0;i<n;i++){
                for(int j= 0;j<n;j++){
                    if( dp[i][k] != INT_MAX && dp[k][j] != INT_MAX && (dp[i][k] + dp[k][j]) < dp[i][j]){
                        dp[i][j] = (dp[i][k] + dp[k][j]);
                    }
                }
            }
        }
        int ans, temp = INT_MAX;
        
        for(int i = 0;i<n;i++){
            int cnt = 0;
            for(int j = 0;j<n;j++){
                if(i!=j && dp[i][j]<=distanceThreshold){
                    cnt++;
                }
            }
            if(cnt <= temp){
                temp = cnt;
                ans = i;
            }
        }
        return ans;
    }
};