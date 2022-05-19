class Solution {
public:
    int longestPalindromeSubseq(string s) {
        string ss = s;
        reverse(ss.begin(),ss.end());
        int a = s.length(),b = ss.length();
        int dp[a+1][b+1];
        memset(dp,0,sizeof dp);
        
        for(int i = 1;i<=a;i++){
            for(int j = 1;j<=b;j++){
                if(s[i-1]==ss[j-1]){
                    dp[i][j] = 1+dp[i-1][j-1];
                }
                else{
                    dp[i][j] = max(dp[i][j-1],dp[i-1][j]);
                }
                
            }
        }
        return dp[a][b];
    }
};