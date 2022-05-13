class Solution {
public:
    int lis(int dp[],int i,vector<int>& nums){

        if(dp[i]!=-1) return dp[i];        
        int sol = 1;
        
        for(int j =0;j<i;j++){
            if(nums[j]<nums[i]){
                sol = max(sol,lis(dp,j,nums)+1); 
            }
        }
        return dp[i] = sol;
    }
    int lengthOfLIS(vector<int>& nums) {
       int dp[nums.size()];
        memset(dp,-1,sizeof dp);
        int ans = INT_MIN;
        for(int i = 0;i<nums.size();i++){
            ans = max(ans,lis(dp,i,nums));
        }
        return ans;
    }
};