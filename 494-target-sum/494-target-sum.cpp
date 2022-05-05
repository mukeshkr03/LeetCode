class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        int n = nums.size();
        
        int sum = 0;
        for(int i = 0;i<n;i++){
            sum+=nums[i];
        }
        // if(sum < target) return 0;
                if((sum + target)%2!=0) return 0;
                        if((sum + target)<0) return 0;

        

        
        
        int dp[nums.size()+1][(target+sum)/2+1];
        memset(dp,0,sizeof dp);
        for(int i = 0;i<=n;i++){
            dp[i][0] = 1;
        }
        
        for(int i= 1;i<=n;i++){
            for(int j = 0;j<=(target+sum)/2;j++){
                if(nums[i-1]>j)
                dp[i][j] = dp[i-1][j];
                if(j-nums[i-1]>=0){
                    dp[i][j] = dp[i-1][j] +  dp[i-1][j-nums[i-1]];
                }
            }
        }
        return dp[n][(target+sum)/2];
        
        
    }
};