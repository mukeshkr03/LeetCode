class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        string a = text1;
        string b = text2;
        if(a.size()>b.size()){
            a = text2;
            b = text1;
        }
        
        int dp[a.size()+1][b.size()+1];
        memset(dp,0,sizeof dp);
        
        for(int i = 1;i<=a.size();i++){
            for(int j = 1;j<=b.size();j++){
               
                if(a[i-1]==b[j-1]){
                    dp[i][j] = 1 + dp[i-1][j-1];
                }
                else{
                    dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        // for(int i = 0;i<=a.size();i++){
        //     for(int j = 0;j<=b.size();j++){
        //         cout<<dp[i][j]<<" ";
        //     }
            // cout<<endl;
        // }
        return dp[a.size()][b.size()];
    }
};