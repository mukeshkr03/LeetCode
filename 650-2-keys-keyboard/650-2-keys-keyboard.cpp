class Solution {
public:
    int minSteps(int n) {
        int ans = 0,dp[n+1];
        memset(dp,0,sizeof dp);
        if(n==1){
            return 0;
        }
        if(n==2){
            return 2;
        }
        
   dp[1] = 0,dp[2] = 2, dp[3] = 3;
        
   for(int i = 3;i<=n;i++){
    int ans = 10000;
    for(int j = i/2;j>=2;j--){
        if(i%j == 0){
            ans = min(ans,dp[j]+(i/j));
        }
    }
    if(ans==10000){
        dp[i] = i;
    }
    else{
        dp[i] = ans;
    }
   }

   return dp[n];
    }
};